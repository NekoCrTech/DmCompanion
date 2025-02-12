// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "DmcAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class DMC_API UDmcAssetManager : public UAssetManager
{
	GENERATED_BODY()
public:

	static UDmcAssetManager& Get();

protected:

	virtual void StartInitialLoading() override;
	
	
};
