// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClassDataLibrary.generated.h"

struct FCharacterClassData;
class UClassDataAsset;
enum class ECharacterClass : uint8;
/**
 * 
 */
UCLASS()
class DMC_API UClassDataLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:

	UFUNCTION(BlueprintPure, Category="Class Data")
	static FText GetClassDescription(const UObject* WorldContextObject,ECharacterClass Class);
	
	static FCharacterClassData* GetClassData(const UObject* WorldContextObject, ECharacterClass Class);

	UFUNCTION(BlueprintPure, Category="Class Data")
	static UClassDataAsset* GetClassDataAsset(const UObject* WorldContextObject);
	
	
};


