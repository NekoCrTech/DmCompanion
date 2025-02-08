// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "CreatureType.generated.h"

UENUM(BlueprintType)
enum class ECreatureType : uint8
{
	Aberration  UMETA(DisplayName = "Aberration"),
	Beast        UMETA(DisplayName = "Beast"),
	Celestial    UMETA(DisplayName = "Celestial"),
	Construct    UMETA(DisplayName = "Construct"),
	Dragon       UMETA(DisplayName = "Dragon"),
	Elemental    UMETA(DisplayName = "Elemental"),
	Fey          UMETA(DisplayName = "Fey"),
	Fiend        UMETA(DisplayName = "Fiend"),
	Giant        UMETA(DisplayName = "Giant"),
	Humanoid     UMETA(DisplayName = "Humanoid"),
	Monstrosity  UMETA(DisplayName = "Monstrosity"),
	Ooze         UMETA(DisplayName = "Ooze"),
	Plant        UMETA(DisplayName = "Plant"),
	Undead       UMETA(DisplayName = "Undead")
};

USTRUCT(BlueprintType)
struct FCreatureType : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECreatureType CreatureType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;
};