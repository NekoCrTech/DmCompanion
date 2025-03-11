// created by Neko Creative Technologies


#include "UserInterface/Primitives/DescriptionTooltip.h"

#include "Components/TextBlock.h"

void UDescriptionTooltip::SetTitleAndDescription(FText TitleIn, FText DescriptionIn)
{
	Title->SetText(TitleIn);
	Description->SetText(DescriptionIn);
}
