// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "CharacterSheet.h"
#include "Enums/CharacterAlignment.h"
#include "NpcData.generated.h"

USTRUCT(BlueprintType)
struct FNpcData  : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FCharacterSheet CharacterSheet;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString NpcClass;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	ECreatureType CreatureType;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	ESize Size;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	ECharacterAlignment Alignment;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 HitDiceCount;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Speed;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 FlySpeed = 0;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float ChallengeRating;
};
