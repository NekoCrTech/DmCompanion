// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Enums/CharacterClass.h"
#include "UserInterface/Primitives/ImageWithSub_Btn.h"
#include "Class_Btn.generated.h"

struct FCharacterClassData;
enum class ECharacterClass : uint8;
/**
 * 
 */
UCLASS()
class DMC_API UClass_Btn : public UImageWithSub_Btn
{
	GENERATED_BODY()



public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	ECharacterClass Class = ECharacterClass::Artificer;

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	virtual void SetIsSelected(bool IsSelectedIn) override;

	void SetClass(ECharacterClass CharClass);
	

private:
	FCharacterClassData* ClassData;	
};
