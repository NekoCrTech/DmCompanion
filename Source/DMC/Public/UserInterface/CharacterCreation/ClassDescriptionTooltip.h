// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "UserInterface/Primitives/DescriptionTooltip.h"
#include "ClassDescriptionTooltip.generated.h"

enum class ECharacterClass : uint8;
/**
 * 
 */
UCLASS()
class DMC_API UClassDescriptionTooltip : public UDescriptionTooltip
{
	GENERATED_BODY()

public:
	
	UPROPERTY(VisibleAnywhere, Category="Referenced Class")
	ECharacterClass ReferencedClass;

	UFUNCTION(BlueprintCallable, Category="Referenced Class")
	void SetReferencedClass(ECharacterClass CharClass);
	
};
