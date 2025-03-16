// created by Neko Creative Technologies


#include "Core/DMC_Pawn.h"

#include "Camera/CameraComponent.h"
#include "Core/DMC_PlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ADMC_Pawn::ADMC_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
	
	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = DefaultZoom;
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->SetWorldRotation(FRotator(-60.f,0.f,0.f));

	// Create a camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

}

void ADMC_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

//----------------------------------------
// Input Configuration
//----------------------------------------

void ADMC_Pawn::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	if (ADMC_PlayerController* PlayerController = Cast<ADMC_PlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ADMC_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(EnableMoreAction,ETriggerEvent::Started,this,&ADMC_Pawn::EnableMore);
		EnhancedInputComponent->BindAction(EnableMoreAction,ETriggerEvent::Completed,this,&ADMC_Pawn::DisableMore);
		EnhancedInputComponent->BindAction(EnableMoreAction,ETriggerEvent::Canceled,this,&ADMC_Pawn::DisableMore);

		EnhancedInputComponent->BindAction(ResetZoomAction, ETriggerEvent::Started,this,&ADMC_Pawn::ResetZoom);
		EnhancedInputComponent->BindAction(ResetRotateAction, ETriggerEvent::Started, this, &ADMC_Pawn::ResetRotate);
		
		EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Triggered,this, &ADMC_Pawn::Rotate);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ADMC_Pawn::Move);
		EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Triggered, this, &ADMC_Pawn::Zoom);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

//----------------------------------------
// Input Functions
//----------------------------------------


void ADMC_Pawn::Zoom(const FInputActionValue& Value)
{
	float ZoomAxis = - Value.Get<float>();

	ZoomDesired = ZoomDesired + ZoomAxis * ZoomSpeed;
	ZoomDesired = FMath::Clamp(ZoomDesired, MinZoom, MaxZoom);
}

void ADMC_Pawn::Move(const FInputActionValue& Value)
{
	FVector2D MoveAxis = Value.Get<FVector2D>();

	LocationDesired = LocationDesired + MoveAxis.X * MoveSpeed * GetActorForwardVector() + MoveAxis.Y * MoveSpeed * GetActorRightVector(); ;
}

void ADMC_Pawn::Rotate(const FInputActionValue& Value)
{
	float RotateAxis = Value.Get<float>();
	if (RotateAxis > 0.f)
	{
		RotationDesired = GetActorRotation() + RotateStep;
	}
	else if (RotateAxis < 0.f)
	{
		RotationDesired = GetActorRotation() - RotateStep;
	}
	
}

void ADMC_Pawn::EnableMore(const FInputActionValue& Value)
{
	bMoreIsEnabled = true;
}

void ADMC_Pawn::DisableMore(const FInputActionValue& Value)
{
	bMoreIsEnabled = false;
}

void ADMC_Pawn::ResetZoom(const FInputActionValue& Value)
{
	if (!bMoreIsEnabled)
	{
		ZoomDesired = DefaultZoom;
	}
	
}

void ADMC_Pawn::ResetRotate(const FInputActionValue& Value)
{
	if (bMoreIsEnabled)
	{
		RotationDesired = DefaultRotation;
	}
}


// Called every frame
void ADMC_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	CameraBoom->TargetArmLength = FMath::FInterpTo(CameraBoom->TargetArmLength,ZoomDesired,DeltaTime,ZoomInterpSpeed);
	SetActorLocation(FMath::VInterpTo(GetActorLocation(),LocationDesired,DeltaTime,MoveInterpSpeed));
	SetActorRotation(FMath::RInterpTo(GetActorRotation(),RotationDesired,DeltaTime,RotateInterpSpeed));
}

