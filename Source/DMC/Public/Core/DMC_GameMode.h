// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DMC_GameMode.generated.h"

class UClassDataAsset;
/**
 * 
 */
UCLASS()
class DMC_API ADMC_GameMode : public AGameModeBase
{
	GENERATED_BODY()

	public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Class Info")
	TObjectPtr<UClassDataAsset> ClassDataAsset;
	
};
