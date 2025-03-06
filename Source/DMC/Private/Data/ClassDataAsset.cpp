// created by Neko Creative Technologies


#include "Data/ClassDataAsset.h"

FText UClassDataAsset::GetClassDescription(const ECharacterClass Class)
{
	
	if (FCharacterClassData* ClassData = GetClassData(Class))
	{
		return ClassData->Description;
	}
	return FText::GetEmpty();
}

FCharacterClassData* UClassDataAsset::GetClassData(const ECharacterClass Class)
{
	if (!ClassDataTable) return nullptr;

	// Convert Enum to FName for direct lookup
	FName ClassName = FName(*UEnum::GetValueAsString(Class));

	// FindRow will return nullptr if the key isn't found
	return ClassDataTable->FindRow<FCharacterClassData>(ClassName, TEXT("Lookup"));
}
