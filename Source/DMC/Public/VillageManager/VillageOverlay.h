// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "VillageData.h"
#include "Blueprint/UserWidget.h"
#include "Building/BuildingData.h"
#include "VillageOverlay.generated.h"


class AVillageManager;
class UBorder;
class UTextBlock;
/**
 * 
 */
UCLASS()
class DMC_API UVillageOverlay : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(BindWidget), Category = "Components")
	UTextBlock* VillageName;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(BindWidget), Category = "Components")
	UTextBlock* BuildingName;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(BindWidget), Category = "Components")
	UBorder* BuildingBorder;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "References")
	TObjectPtr<AVillageManager> VillageManagerRef;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FBuildingData BuildingData;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FVillageData VillageData;

	UFUNCTION(BlueprintCallable)
	void SetVillage(FVillageData VillageDataIn, AVillageManager* VillageManager);
	
	UFUNCTION(BlueprintCallable)
	void SetBuilding(FBuildingData BuildingDataIn);

	UFUNCTION(BlueprintCallable)
	void HideBuildingName();
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnVillageManagerSet();
};
