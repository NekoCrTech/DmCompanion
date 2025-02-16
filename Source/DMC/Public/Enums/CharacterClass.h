// created by Neko Creative Technologies

#pragma once

#include "CharacterClass.generated.h"

UENUM(BlueprintType)
enum class ECharacterClass : uint8
{
	Artificer	UMETA(DisplayName = "Artificer"),
	Barbarian   UMETA(DisplayName = "Barbarian"),
	Bard        UMETA(DisplayName = "Bard"),
	Cleric      UMETA(DisplayName = "Cleric"),
	Druid       UMETA(DisplayName = "Druid"),
	Fighter     UMETA(DisplayName = "Fighter"),
	Monk        UMETA(DisplayName = "Monk"),
	Paladin     UMETA(DisplayName = "Paladin"),
	Ranger      UMETA(DisplayName = "Ranger"),
	Rogue       UMETA(DisplayName = "Rogue"),
	Sorcerer    UMETA(DisplayName = "Sorcerer"),
	Warlock     UMETA(DisplayName = "Warlock"),
	Wizard      UMETA(DisplayName = "Wizard")
};