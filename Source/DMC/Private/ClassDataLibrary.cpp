// created by Neko Creative Technologies


#include "ClassDataLibrary.h"

#include "Core/DMC_GameMode.h"
#include "Data/ClassDataAsset.h"
#include "Kismet/GameplayStatics.h"

FText UClassDataLibrary::GetClassDescription(const UObject* WorldContextObject, ECharacterClass Class)
{
	UClassDataAsset* ClassDataAsset = GetClassDataAsset(WorldContextObject);
	if (ClassDataAsset == nullptr) return FText::GetEmpty();
	return ClassDataAsset->GetClassDescription(Class);
}

FCharacterClassData* UClassDataLibrary::GetClassData(const UObject* WorldContextObject, ECharacterClass Class)
{
	UClassDataAsset* ClassDataAsset = GetClassDataAsset(WorldContextObject);
	if (ClassDataAsset == nullptr) return nullptr;
	return ClassDataAsset->GetClassData(Class);
}

UClassDataAsset* UClassDataLibrary::GetClassDataAsset(const UObject* WorldContextObject)
{
	const ADMC_GameMode* GMDMC = Cast<ADMC_GameMode>(UGameplayStatics::GetGameMode(WorldContextObject));
	if (GMDMC == nullptr) return nullptr;
	
	return GMDMC->ClassDataAsset;
}
