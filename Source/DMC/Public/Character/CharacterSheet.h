// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Enums/CharacterClass.h"
#include "Enums/CharacterRace.h"
#include "Data/Skill.h"
#include "CharacterSheet.generated.h"


USTRUCT(BlueprintType)
struct FCharacterSheet  : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Info")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Info")
	ECharacterRace Race;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Info")
	TMap<ECharacterClass, int32> ClassWithLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FAttributes Attributes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	int32 ArmorClass = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	int32 HitPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FSkills Skills;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skills")
	FGameplayTagContainer SkillsProficiencies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Images")
	UTexture2D* TokenImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Images")
	UTexture2D* CharacterImage;
	
};