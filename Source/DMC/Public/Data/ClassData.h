// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Enums/CharacterClass.h"
#include "ClassData.generated.h"


USTRUCT(BlueprintType)
struct FFeaturesAtLevel : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class")
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class")
	TArray<FString> FeaturesName;
};

USTRUCT(BlueprintType)
struct FCharacterClassData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class")
	ECharacterClass ClassType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class")
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class")
	int32 HitDie;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class")
	FText ArmorAndWeaponProf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class")
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class")
	TArray<FGameplayTag> SavingThrowProficiencies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class")
	TArray<FFeaturesAtLevel> FeaturesAtLevels;
};

