// created by Neko Creative Technologies


#include "UserInterface/CharacterCreation/ClassDescriptionTooltip.h"

#include "ClassDataLibrary.h"
#include "Components/TextBlock.h"

void UClassDescriptionTooltip::SetReferencedClass(ECharacterClass CharClass)
{
	ReferencedClass = CharClass;
	Description->SetText(UClassDataLibrary::GetClassDescription(this,CharClass));
	const UEnum* EnumPtr = FindObject<UEnum>(nullptr, TEXT("/Script/DMC.ECharacterClass"),true);
	Title->SetText(EnumPtr ? EnumPtr->GetDisplayNameTextByValue(static_cast<int64>(CharClass)) : FText::GetEmpty());
}
