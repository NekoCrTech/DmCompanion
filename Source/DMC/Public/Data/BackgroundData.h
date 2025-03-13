// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Feature.h"
#include "Skill.h"
#include "BackgroundData.generated.h"

USTRUCT(BlueprintType)
struct FBackgroundData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Background")
	FText Name = FText::FromString(TEXT("Name"));

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Background")
	FFeatureData Feature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Background")
	TArray<ESkill> SkillBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Background")
	TArray<FString> Tools;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Background")
	TArray<FString> Languages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Background")
	TArray<FString> PersonalityTrait;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Background")
	TArray<FString> Ideal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Background")
	TArray<FString> Bond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Background")
	TArray<FString> Flaw;
};