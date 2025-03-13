// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
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

UENUM(BlueprintType)
enum class EAttributeDestribution : uint8
{
	PointBuy     UMETA(DisplayName = "Point Buy"),
	SetPoints    UMETA(DisplayName = "Set Points"),
	Random		UMETA(DisplayName = "Random 4d6)"),
};


USTRUCT(BlueprintType)
struct FAttributeScore  : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	EAttribute AttributeType = EAttribute::Strength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	int32 BaseValue = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	bool bIsProficient = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	TMap<FString, int32> AttributeBonuses;

	// Default constructor
	FAttributeScore()
		: AttributeType(EAttribute::Strength), BaseValue(10), bIsProficient(false)
	{
		AttributeBonuses = TMap<FString, int32>(); // Explicitly initialize the map (not strictly necessary)
	}

	// Constructor with EAttribute input
	FAttributeScore(EAttribute InAttribute)
		: AttributeType(InAttribute), BaseValue(10), bIsProficient(false)
	{
		AttributeBonuses = TMap<FString, int32>();
	}

	// Constructor with EAttribute and BaseValue input
	FAttributeScore(EAttribute InAttribute, int32 InBaseValue)
		: AttributeType(InAttribute), BaseValue(InBaseValue), bIsProficient(false)
	{
		AttributeBonuses = TMap<FString, int32>();
	}

	// Constructor with EAttribute, BaseValue, and bIsProficient input
	FAttributeScore(EAttribute InAttribute, int32 InBaseValue, bool bInIsProficient)
		: AttributeType(InAttribute), BaseValue(InBaseValue), bIsProficient(bInIsProficient)
	{
		AttributeBonuses = TMap<FString, int32>();
	}
};

USTRUCT(BlueprintType)
struct FAttributes : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Strength = FAttributeScore(EAttribute::Strength);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Dexterity = FAttributeScore(EAttribute::Dexterity);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Constitution = FAttributeScore(EAttribute::Constitution);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Intelligence = FAttributeScore(EAttribute::Intelligence);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Wisdom = FAttributeScore(EAttribute::Wisdom);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttributeScore Charisma = FAttributeScore(EAttribute::Charisma);
};