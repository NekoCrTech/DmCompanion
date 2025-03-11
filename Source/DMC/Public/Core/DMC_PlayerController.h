// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DMC_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DMC_API ADMC_PlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};
