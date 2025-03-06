// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Feature.generated.h"

UENUM(BlueprintType)
enum class EFeatureType : uint8
{
	Class UMETA(DisplayName = "Class"),
	Race UMETA(DisplayName = "Race"),
	Feat UMETA(DisplayName = "Feat"),
	Other UMETA(DisplayName = "Other")
};

USTRUCT(BlueprintType)
struct FFeatureData : public FTableRowBase
{
	GENERATED_BODY()

	// Name of the feature
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	// Type of feature
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFeatureType Type;

	// Source
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Source;

	// Description
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	// Level required to unlock this feature
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RequiredLevel;
};