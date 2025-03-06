// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DescriptionTooltip.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class DMC_API UDescriptionTooltip : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(BindWidget), Category = "Components")
	UTextBlock* Title;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(BindWidget), Category = "Components")
	UTextBlock* Description;
};
