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

	// Default constructor
	FSkill()
		: SkillName(ESkill::Acrobatics), bIsProficient(false)
	{
		
	}

	// Constructor with EAttribute input
	FSkill(ESkill InSkill)
		: SkillName(InSkill), bIsProficient(false)
	{
		
	}
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
	FSkill Acrobatics = FSkill(ESkill::Acrobatics);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill AnimalHandling = FSkill(ESkill::AnimalHandling);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Arcana = FSkill(ESkill::Arcana);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Athletics = FSkill(ESkill::Athletics);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Deception = FSkill(ESkill::Deception);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill History = FSkill(ESkill::History);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Insight = FSkill(ESkill::Insight);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Intimidation = FSkill(ESkill::Intimidation);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Investigation = FSkill(ESkill::Investigation);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Medicine = FSkill(ESkill::Medicine);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Nature = FSkill(ESkill::Nature);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Perception = FSkill(ESkill::Perception);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Performance = FSkill(ESkill::Performance);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Persuasion = FSkill(ESkill::Persuasion);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Religion = FSkill(ESkill::Religion);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill SleightOfHand = FSkill(ESkill::SleightOfHand);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Stealth = FSkill(ESkill::Stealth);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	FSkill Survival = FSkill(ESkill::Survival);
};


