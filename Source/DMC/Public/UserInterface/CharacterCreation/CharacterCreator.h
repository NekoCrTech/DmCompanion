// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterCreator.generated.h"

class UWidgetSwitcher;
/**
 * 
 */
UCLASS()
class DMC_API UCharacterCreator : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Creation", meta=(BindWidget))
	TObjectPtr<UWidgetSwitcher> CreatorPageSwitcher;
	
};
