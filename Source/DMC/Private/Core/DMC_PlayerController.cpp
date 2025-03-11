// created by Neko Creative Technologies


#include "Core/DMC_PlayerController.h"

void ADMC_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}
