// created by Neko Creative Technologies


#include "UserInterface/Primitives/ImageWithSub_Btn.h"
#include "Components/Button.h"
#include "Components/Image.h"


void UImageWithSub_Btn::NativePreConstruct()
{
	Super::NativePreConstruct();
	SelectedImage->SetVisibility(ESlateVisibility::Hidden);
}

void UImageWithSub_Btn::NativeConstruct()
{
	Super::NativeConstruct();
	Button->OnClicked.AddDynamic(this, &UImageWithSub_Btn::OnClickedBuildingBtn);
}

void UImageWithSub_Btn::OnClickedBuildingBtn()
{
}

void UImageWithSub_Btn::SetButtonImage(UTexture2D* Image)
{
	FSlateBrush Brush;
	Brush.SetResourceObject(Image);
	Brush.DrawAs = ESlateBrushDrawType::Image;
	ButtonImage->SetBrush(Brush);
}


void UImageWithSub_Btn::SetIsSelected(const bool IsSelectedIn)
{
	bIsSelected = IsSelectedIn;
	SelectedImage->SetVisibility(bIsSelected ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}
