// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Size.generated.h"

UENUM(BlueprintType)
enum class ESize : uint8
{
	Tiny     UMETA(DisplayName = "Tiny"),
	Small    UMETA(DisplayName = "Small"),
	Medium    UMETA(DisplayName = "Medium"),
	Large     UMETA(DisplayName = "Large"),
	Huge     UMETA(DisplayName = "Huge"),
	Gargantuan UMETA(DisplayName = "Gargantuan")	
};

USTRUCT(BlueprintType)
struct FSize : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESize Size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Space;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Tile;
};
