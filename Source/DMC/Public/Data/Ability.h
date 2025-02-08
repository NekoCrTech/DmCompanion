// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Ability.generated.h"

USTRUCT(BlueprintType)
struct FAbility : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;	
};
