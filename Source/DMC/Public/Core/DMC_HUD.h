// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "DMC_HUD.generated.h"

class UVillageOverlay;
class UMainCanvas;
/**
 * 
 */
UCLASS()
class DMC_API ADMC_HUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};
