// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "ItemData.generated.h"

UENUM(BlueprintType)
enum class ECoinage : uint8
{
	CP		UMETA(DisplayName = "Copper Pieces"),
	SP		UMETA(DisplayName = "Silver Pieces"),
	EP		UMETA(DisplayName = "Electrum Pieces"),
	GP		UMETA(DisplayName = "Gold Pieces"),
	PP		UMETA(DisplayName = "Platinum Pieces")
};

UENUM(BlueprintType)
enum class EItemType : uint8
{
	None				UMETA(DisplayName = "None"),
	VehicleWater		UMETA(DisplayName = "Vehicle (Water)"),
	VehicleLand			UMETA(DisplayName = "Vehicle (Land)"),
	VehicleAir			UMETA(DisplayName = "Vehicle (Air)"),
	TreasureGemstone	UMETA(DisplayName = "Treasure (Gemstone)"),
	TreasureCoinage		UMETA(DisplayName = "Treasure (Coinage)"),
	TreasureArtObject	UMETA(DisplayName = "Treasure (Art Object)"),
	TradeGood			UMETA(DisplayName = "Trade Good"),
	Tool				UMETA(DisplayName = "Tool"),
	TackAndHarness		UMETA(DisplayName = "Tack and Harness"),
	Staff				UMETA(DisplayName = "Staff"),
	SimpleWeapon		UMETA(DisplayName = "Simple Weapon"),
	MeleeWeapon			UMETA(DisplayName = "MeleeWeapon"),
	SpellcastingFocus	UMETA(DisplayName = "Spellcasting Focus"),
	Firearm				UMETA(DisplayName = "Firearm"),
	RangedWeapon		UMETA(DisplayName = "Ranged Weapon"),
	Instrument			UMETA(DisplayName = "Instrument"),
	ShipWeapon			UMETA(DisplayName = "Ship Weapon"),
	Shield				UMETA(DisplayName = "Shield"),
	Renaissance			UMETA(DisplayName = "Renaissance"),
	MartialWeapon		UMETA(DisplayName = "Martial Weapon"),
	Explosive			UMETA(DisplayName = "Explosive"),
	Ammunition			UMETA(DisplayName = "Ammunition"),
	AdventuringGear		UMETA(DisplayName = "Adventuring Gear"),
	Mount				UMETA(DisplayName = "Mount"),
	MediumArmor			UMETA(DisplayName = "Medium Armor"),
	LightArmor			UMETA(DisplayName = "Light Armor"),
	HeavyArmor			UMETA(DisplayName = "Heavy Armor"),
	GenericVariant		UMETA(DisplayName = "Generic Variant"),
	GamingSettings		UMETA(DisplayName = "Gaming Settings"),
	FoodAndDrink		UMETA(DisplayName = "Food and Drink"),
	ArtisanTools		UMETA(DisplayName = "Artisan's Tools"),
	Poison				UMETA(DisplayName = "Poison"),
	AdvancedWeapon		UMETA(DisplayName = "Advanced Weapon"),
	WondrousItem		UMETA(DisplayName = "Wondrous Item"),
	Wand				UMETA(DisplayName = "Wand"),
	Scroll				UMETA(DisplayName = "Scroll"),
	Rod					UMETA(DisplayName = "Rod"),
	Ring				UMETA(DisplayName = "Ring"),
	Potion				UMETA(DisplayName = "Potion"),
	Other				UMETA(DisplayName = "Other"),
	
};

UENUM(BlueprintType)
enum class EDamageType : uint8
{
	Bludgeoning     UMETA(DisplayName = "Bludgeoning"),   // Physical - blunt force
	Piercing        UMETA(DisplayName = "Piercing"),      // Physical - stabbing
	Slashing        UMETA(DisplayName = "Slashing"),      // Physical - cutting

	Acid            UMETA(DisplayName = "Acid"),          // Corrosive damage
	Cold            UMETA(DisplayName = "Cold"),          // Freezing damage
	Fire            UMETA(DisplayName = "Fire"),          // Heat and flames
	Force           UMETA(DisplayName = "Force"),         // Pure magical energy
	Lightning       UMETA(DisplayName = "Lightning"),     // Electric shock
	Necrotic        UMETA(DisplayName = "Necrotic"),      // Life-draining energy
	Poison          UMETA(DisplayName = "Poison"),        // Toxic substances
	Psychic         UMETA(DisplayName = "Psychic"),       // Mind-affecting damage
	Radiant         UMETA(DisplayName = "Radiant"),       // Holy/light-based energy
	Thunder         UMETA(DisplayName = "Thunder")        // Sonic concussive force
};

UENUM(BlueprintType)
enum class EItemRarity : uint8
{
	Uncommon	UMETA(DisplayName = "Uncommon"),
	Common		UMETA(DisplayName = "Common"),
	Rare		UMETA(DisplayName = "Rare"),
	VeryRare	UMETA(DisplayName = "Very Rare"),
	Legendary	UMETA(DisplayName = "Legendary"),
	Artifact	UMETA(DisplayName = "Artifact"),
	Unknown		UMETA(DisplayName = "Unknown")
};

USTRUCT(BlueprintType)
struct FItem : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TArray<EItemType> Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TMap<ECoinage, int32> Cost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FText Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	bool bCanBeAttuned;
};

USTRUCT(BlueprintType)
struct FWeapon : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FItem Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TArray<FText> Keywords;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 NoDice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 Dice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TArray<EDamageType> DamageType;
};

USTRUCT(BlueprintType)
struct FArmor : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FItem Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TArray<FText> Keywords;
};