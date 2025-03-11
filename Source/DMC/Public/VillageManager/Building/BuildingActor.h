// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "BuildingData.h"
#include "GameFramework/Actor.h"
#include "BuildingActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildingClicked, ABuildingActor*, BuildingActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildingHovered, ABuildingActor*, BuildingActor);

UCLASS()
class DMC_API ABuildingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ABuildingActor();

	// Declare the event dispatcher
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnBuildingClicked OnBuildingClicked;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnBuildingHovered OnBuildingHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building")
	UStaticMesh* BuildingMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building")
	FBuildingData BuildingData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building")
	bool bIsSelected;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* Root;

	UFUNCTION()
	void OnMeshClicked(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);

	UFUNCTION()
	void OnBeginHover(UPrimitiveComponent* TouchedComponent);
	UFUNCTION()
	void OnEndHover(UPrimitiveComponent* TouchedComponent);
};
