// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ImageWithSub_Btn.generated.h"

class UButton;
class UImage;
class UTextBlock;


UCLASS()
class DMC_API UImageWithSub_Btn : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//=====================================================================================
	//                             PROPERTIES & VARIABLES
	//=====================================================================================



	//=====================================================================================
	//									FUNCTIONS
	//=====================================================================================

protected:
	//=====================================================================================
	//                             PROPERTIES & VARIABLES
	//=====================================================================================

	UPROPERTY(VisibleAnywhere, meta=(BindWidget))
	UImage* ButtonImage;

	UPROPERTY(VisibleAnywhere, meta=(BindWidget))
	UTextBlock* ButtonText;

	UPROPERTY(VisibleAnywhere, meta=(BindWidget))
	UButton* Button;

	//=====================================================================================
	//									FUNCTIONS
	//=====================================================================================

	
	
	
};
