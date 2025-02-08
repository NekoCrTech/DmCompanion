// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Enums/CharacterClass.h"
#include "Enums/CharacterRace.h"
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

	
	
	
};