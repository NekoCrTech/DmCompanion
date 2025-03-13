// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "VillageData.h"
#include "VillageManager/Building/BuildingActor.h"
#include "GameFramework/Actor.h"
#include "VillageManager.generated.h"

class UVillageOverlay;

UCLASS()
class DMC_API AVillageManager : public AActor
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VillageManager")
	FVillageData Village;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VillageManager")
	TObjectPtr<ABuildingActor> HoveredBuilding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VillageManager")
	TObjectPtr<ABuildingActor> SelectedBuilding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VillageManager")
	TMap<FString, FNpcData> Npcs;
	
	AVillageManager();
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "VillageManager")
	void UpdateHoveredBuilding(ABuildingActor* NewHoveredBuilding);

	UFUNCTION(BlueprintCallable, Category = "VillageManager")
	void UpdateSelectedBuilding(ABuildingActor* NewSelectedBuilding);

protected:
	virtual void BeginPlay() override;
	
};


