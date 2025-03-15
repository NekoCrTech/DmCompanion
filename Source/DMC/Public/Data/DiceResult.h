// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Enums/Dice.h"
#include "DiceResult.generated.h"

USTRUCT(BlueprintType)
struct FDiceResult : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDice Dice = EDice::d4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> Results;
};
