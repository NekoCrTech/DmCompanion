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
	int32 PassiveValue = 10; // Default passive value

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	TMap<FGameplayTag, int32> SkillBonuses;

	// Function to calculate skill value
	int32 GetSkillValue(int32 AttributeModifier, int32 ProficiencyBonus) const
	{
		int32 Bonus = 0;
		for (const TTuple<FGameplayTag, int32> ThisBonus : SkillBonuses)
		{
			Bonus += ThisBonus.Value;
		}
		return AttributeModifier + Bonus + (bIsProficient ? ProficiencyBonus : 0);
	}

	// Add a skill bonus
	void AddSkillBonus(FGameplayTag BonusTag, int32 BonusValue)
	{
		if (SkillBonuses.Contains(BonusTag))
		{
			SkillBonuses[BonusTag] += BonusValue;
		}
		else
		{
			SkillBonuses.Add(BonusTag, BonusValue);
		}
	}

	// Remove a skill bonus
	void RemoveSkillBonus(FGameplayTag BonusTag)
	{
		SkillBonuses.Remove(BonusTag);
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


