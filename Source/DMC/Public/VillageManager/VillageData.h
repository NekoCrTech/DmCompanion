// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "VillageData.generated.h"

USTRUCT(BlueprintType)
struct FVillageData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
};