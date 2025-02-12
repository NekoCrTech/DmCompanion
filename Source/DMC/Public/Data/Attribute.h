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
};

USTRUCT(BlueprintType)
struct FAttributes : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Strength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Dexterity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Constitution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Intelligence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Wisdom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Charisma;
};