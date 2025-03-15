// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Dice.generated.h"

UENUM(BlueprintType)
enum class EDice : uint8
{
	d4  UMETA(DisplayName = "d4"),
	d6  UMETA(DisplayName = "d6"),
	d8  UMETA(DisplayName = "d8"),
	d10 UMETA(DisplayName = "d10"),
	d12 UMETA(DisplayName = "d12"),
	d20 UMETA(DisplayName = "d20")
};
