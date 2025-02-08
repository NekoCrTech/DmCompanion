// created by Neko Creative Technologies

#pragma once

#include "CharacterAlignment.generated.h"

UENUM(BlueprintType)
enum class ECharacterAlignment : uint8
{
    ChaoticEvil     UMETA(DisplayName = "Chaotic Evil"),
    ChaoticGood     UMETA(DisplayName = "Chaotic Good"),
    ChaoticNeutral  UMETA(DisplayName = "Chaotic Neutral"),
    LawfulEvil      UMETA(DisplayName = "Lawful Evil"),
    LawfulGood      UMETA(DisplayName = "Lawful Good"),
    LawfulNeutral   UMETA(DisplayName = "Lawful Neutral"),
    Neutral         UMETA(DisplayName = "Neutral"),
    NeutralEvil     UMETA(DisplayName = "Neutral Evil"),
    NeutralGood     UMETA(DisplayName = "Neutral Good")
};