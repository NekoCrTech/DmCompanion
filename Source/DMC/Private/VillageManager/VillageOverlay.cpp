// created by Neko Creative Technologies


#include "VillageManager/VillageOverlay.h"

#include "Components/Border.h"
#include "Components/TextBlock.h"

void UVillageOverlay::SetVillage(FVillageData VillageDataIn, AVillageManager* VillageManager)
{
	VillageData = VillageDataIn;
	VillageManagerRef = VillageManager;
	VillageName->SetText(FText::FromString(VillageData.Name));
	OnVillageManagerSet();
}

void UVillageOverlay::SetBuilding(FBuildingData BuildingDataIn)
{
		BuildingData = BuildingDataIn;
		BuildingName->SetText(FText::FromString(BuildingData.Name));
		BuildingBorder->SetVisibility(ESlateVisibility::Visible);
}

void UVillageOverlay::HideBuildingName()
{
	BuildingBorder->SetVisibility(ESlateVisibility::Hidden);
}

