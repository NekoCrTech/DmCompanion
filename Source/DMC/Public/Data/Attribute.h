// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Attribute.generated.h"

UENUM(BlueprintType)
enum class EAttribute : uint8
{
	Strength     UMETA(DisplayName = "Strength"),
	Dexterity    UMETA(DisplayName = "Dexterity"),
	Constitution UMETA(DisplayName = "Constitution"),
	Intelligence UMETA(DisplayName = "Intelligence"),
	Wisdom       UMETA(DisplayName = "Wisdom"),
	Charisma     UMETA(DisplayName = "Charisma")
};


USTRUCT(BlueprintType)
struct FAttributeScore  : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	EAttribute AttributeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	int32 BaseValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	TMap<FGameplayTag, int32> AttributeBonuses;

	// Function to calculate total attribute value
	int32 GetTotalValue() const
	{
		int32 Bonus = 0;
		for (const TTuple<FGameplayTag, int32>& ThisBonus : AttributeBonuses)
		{
			Bonus += ThisBonus.Value;
		}
		return BaseValue + Bonus;
	}

	// Function to calculate attribute modifier
	int32 GetModifier() const
	{
		return (GetTotalValue() - 10) / 2;
	}

	// Add attribute bonus
	void AddAttributeBonus(FGameplayTag BonusTag, int32 BonusValue)
	{
		if (AttributeBonuses.Contains(BonusTag))
		{
			AttributeBonuses[BonusTag] += BonusValue;
		}
		else
		{
			AttributeBonuses.Add(BonusTag, BonusValue);
		}
	}

	// Remove attribute bonus
	void RemoveAttributeBonus(FGameplayTag BonusTag)
	{
		AttributeBonuses.Remove(BonusTag);
	}
};