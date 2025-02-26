// created by Neko Creative Technologies

#pragma once

#include "Data/Ability.h"
#include "Data/Attribute.h"
#include "Data/CreatureType.h"
#include "Data/Size.h"

#include "CharacterRace.generated.h"

UENUM(BlueprintType)
enum class ECharacterRace : uint8
{
	Dragonborn  UMETA(DisplayName = "Dragonborn"),
	Dwarf       UMETA(DisplayName = "Dwarf"),
	Elf         UMETA(DisplayName = "Elf"),
	Gnome       UMETA(DisplayName = "Gnome"),
	HalfElf     UMETA(DisplayName = "Half-Elf"),
	Halfling    UMETA(DisplayName = "Halfling"),
	HalfOrc     UMETA(DisplayName = "Half-Orc"),
	Human       UMETA(DisplayName = "Human"),
	Tiefling    UMETA(DisplayName = "Tiefling")
};

USTRUCT(BlueprintType)
struct FCharacterRace : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterRace Race = ECharacterRace::Dragonborn;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SubRace = FString("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Info;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText AgeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SizeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAttribute, int32> AttributeScores;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECreatureType CreatureType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESize Size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAbility> Abilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Languages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Texture;
};