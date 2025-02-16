// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Enums/CharacterClass.h"
#include "Data/ClassData.h"
#include "ClassDataAsset.generated.h"

/**
 * 
 */

UCLASS()
class DMC_API UClassDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Class Descriptions")
	TObjectPtr<UDataTable> ClassDataTable;

	UFUNCTION()
	FText GetClassDescription(ECharacterClass Class);
	
	FCharacterClassData* GetClassData(ECharacterClass Class);
	
};
