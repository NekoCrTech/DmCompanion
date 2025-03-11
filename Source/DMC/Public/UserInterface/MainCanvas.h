// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainCanvas.generated.h"

class UOverlay;
/**
 * 
 */
UCLASS()
class DMC_API UMainCanvas : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(BindWidget), Category = "Components")
	UOverlay* MainOverlay;
	
};
