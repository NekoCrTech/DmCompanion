// created by Neko Creative Technologies


#include "VillageManager/VillageManager.h"


// Sets default values
AVillageManager::AVillageManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVillageManager::BeginPlay()
{
	Super::BeginPlay();

}

void AVillageManager::UpdateHoveredBuilding(ABuildingActor* NewHoveredBuilding)
{
	HoveredBuilding = NewHoveredBuilding;
}

void AVillageManager::UpdateSelectedBuilding(ABuildingActor* NewSelectedBuilding)
{
	SelectedBuilding = NewSelectedBuilding;
}

// Called every frame
void AVillageManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

