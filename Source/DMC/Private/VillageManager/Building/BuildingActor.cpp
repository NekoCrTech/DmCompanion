// created by Neko Creative Technologies


#include "VillageManager/Building/BuildingActor.h"

// Sets default values
ABuildingActor::ABuildingActor()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	MeshComponent -> SetupAttachment(Root);
	if (BuildingMesh)
	{
		MeshComponent -> SetStaticMesh(BuildingMesh);
	}
	// Enable collision settings for interaction
	MeshComponent->SetCollisionObjectType(ECC_WorldDynamic);
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MeshComponent->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	MeshComponent->SetGenerateOverlapEvents(true);

}

// Called when the game starts or when spawned
void ABuildingActor::BeginPlay()
{
	Super::BeginPlay();

	// Enable input on the actor itself
	EnableInput(GetWorld()->GetFirstPlayerController());

	if (MeshComponent)
	{
		MeshComponent->OnClicked.AddDynamic(this, &ABuildingActor::OnMeshClicked);
		MeshComponent->OnBeginCursorOver.AddDynamic(this, &ABuildingActor::OnBeginHover);
		MeshComponent->OnEndCursorOver.AddDynamic(this, &ABuildingActor::OnEndHover);
	}
}

void ABuildingActor::OnMeshClicked(UPrimitiveComponent* ClickedComp, FKey ButtonPressed)
{
	if (ButtonPressed == EKeys::LeftMouseButton)
	{
		UE_LOG(LogTemp, Warning, TEXT("Mesh Clicked!"));
		OnBuildingClicked.Broadcast(this);
	}
}

void ABuildingActor::OnBeginHover(UPrimitiveComponent* TouchedComponent)
{
	// Broadcast the hover event when the mouse starts hovering over the mesh
	OnBuildingHovered.Broadcast(this);
	// Optionally, change the material or add an effect to indicate the building is hovered
	UE_LOG(LogTemp, Warning, TEXT("Building Hovered: %s"), *GetName());
}

void ABuildingActor::OnEndHover(UPrimitiveComponent* TouchedComponent)
{
	// Broadcast when the mouse stops hovering over the mesh
	OnBuildingHovered.Broadcast(nullptr); // Send nullptr or something to indicate hover end
	// Optionally, revert the effect when the hover ends
	UE_LOG(LogTemp, Warning, TEXT("Building Hover Ended: %s"), *GetName());
}


