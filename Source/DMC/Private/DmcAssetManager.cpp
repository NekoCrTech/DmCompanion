// created by Neko Creative Technologies


#include "DmcAssetManager.h"
#include "DmcGameplayTags.h"

UDmcAssetManager& UDmcAssetManager::Get()
{
	check(GEngine);

	UDmcAssetManager* DmcAssetManager = Cast<UDmcAssetManager>(GEngine->AssetManager);
	return *DmcAssetManager;
}

void UDmcAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	FDmcGameplayTags::InitializeNativeGameplayTags();
}
