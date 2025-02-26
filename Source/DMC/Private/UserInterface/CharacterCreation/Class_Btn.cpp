// created by Neko Creative Technologies


#include "UserInterface/CharacterCreation/Class_Btn.h"

#include "ClassDataLibrary.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Data/ClassData.h"
#include "Enums/CharacterClass.h"
#include "UserInterface/CharacterCreation/ClassDescriptionTooltip.h"

void UClass_Btn::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	// if(TooltipClass)
	// {
	// 	UClassDescriptionTooltip* Tooltip = CreateWidget<UClassDescriptionTooltip>(this, TooltipClass);
	// 	Tooltip->SetReferencedClass(Class);
	// 	SetToolTip(Tooltip);
	// }
}

void UClass_Btn::NativePreConstruct()
{
	Super::NativePreConstruct();
	
}

void UClass_Btn::NativeConstruct()
{
	Super::NativeConstruct();
	//SetClass(Class);
}

void UClass_Btn::SetIsSelected(bool IsSelectedIn)
{
	Super::SetIsSelected(IsSelectedIn);
}

void UClass_Btn::SetClass(ECharacterClass CharClass)
{
	ClassData = UClassDataLibrary::GetClassData(this, Class);
	const UEnum* EnumPtr = FindObject<UEnum>(nullptr, TEXT("/Script/DMC.ECharacterClass"),true);
	ButtonText->SetText(EnumPtr ? EnumPtr->GetDisplayNameTextByValue(static_cast<int64>(Class)) : FText::GetEmpty());

	if(ClassData)
	{
		SetButtonImage(ClassData->Icon);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,"ClassData is nullptr");
	}
	
}
