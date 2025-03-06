// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Attribute.h"
#include "GameplayTagContainer.h"
#include "Skill.generated.h"

struct FGameplayTag;
enum class EAttribute : uint8;

UENUM(BlueprintType)
enum class ESkill : uint8
{
	Acrobatics      UMETA(DisplayName = "Acrobatics"),
	AnimalHandling  UMETA(DisplayName = "Animal Handling"),
	Arcana         UMETA(DisplayName = "Arcana"),
	Athletics      UMETA(DisplayName = "Athletics"),
	Deception      UMETA(DisplayName = "Deception"),
	History        UMETA(DisplayName = "History"),
	Insight        UMETA(DisplayName = "Insight"),
	Intimidation   UMETA(DisplayName = "Intimidation"),
	Investigation  UMETA(DisplayName = "Investigation"),
	Medicine       UMETA(DisplayName = "Medicine"),
	Nature         UMETA(DisplayName = "Nature"),
	Perception     UMETA(DisplayName = "Perception"),
	Performance    UMETA(DisplayName = "Performance"),
	Persuasion     UMETA(DisplayName = "Persuasion"),
	Religion       UMETA(DisplayName = "Religion"),
	SleightOfHand  UMETA(DisplayName = "Sleight of Hand"),
	Stealth        UMETA(DisplayName = "Stealth"),
	Survival       UMETA(DisplayName = "Survival")
};

USTRUCT(BlueprintType)
struct FSkill : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	ESkill SkillName = ESkill::Acrobatics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	bool bIsProficient = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	TMap<FString, int32> SkillBonuses;
};

USTRUCT(BlueprintType)
struct FSkillDescription : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	ESkill SkillName = ESkill::Acrobatics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	EAttribute LinkedAttribute = EAttribute::Strength; // Strength, Dexterity, etc.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FText Description;
};

USTRUCT(BlueprintType)
struct FSkills : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Acrobatics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill AnimalHandling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Arcana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Athletics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Deception;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill History;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Insight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Intimidation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Investigation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Medicine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Nature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Perception;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Performance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Persuasion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Religion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill SleightOfHand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Stealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Survival;
};


