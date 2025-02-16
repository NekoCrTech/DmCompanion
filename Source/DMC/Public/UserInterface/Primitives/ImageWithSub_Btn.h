// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "ImageWithSub_Btn.generated.h"

class UDescriptionTooltip;
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

	virtual void SetIsSelected(bool IsSelectedIn);
	FORCEINLINE bool GetIsSelected() const { return bIsSelected; }	

	//=====================================================================================
	//									FUNCTIONS
	//=====================================================================================

	void SetButtonImage(UTexture2D* Image);

protected:
	//=====================================================================================
	//                             PROPERTIES & VARIABLES
	//=====================================================================================

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(BindWidget), Category = "Components")
	UImage* ButtonImage;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(BindWidget), Category = "Components")
	UTextBlock* ButtonText;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(BindWidget), Category = "Components")
	UButton* Button;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(BindWidget), Category = "Components")
	UImage* SelectedImage;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Components|Tooltip")
	TSubclassOf<UDescriptionTooltip> TooltipClass;
	
	//=====================================================================================
	//									FUNCTIONS
	//=====================================================================================
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintCallable)
	virtual void OnClickedBuildingBtn();

	

private:
	//=====================================================================================
	//                             PROPERTIES & VARIABLES
	//=====================================================================================

	bool bIsSelected = false;
		
	//=====================================================================================
	//									FUNCTIONS
	//=====================================================================================
	

};
