// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "Character/NpcData.h"
#include "Data/ItemData.h"
#include "buildingData.generated.h"

UENUM(BlueprintType)
enum class EBuildingType : uint8
{
	House		UMETA(DisplayName = "House"),
	Inn			UMETA(DisplayName = "Inn"),
	Blacksmith	UMETA(DisplayName = "Blacksmith"),
	Church		UMETA(DisplayName = "Church"),
	Market		UMETA(DisplayName = "Market"),
	Barracks	UMETA(DisplayName = "Barracks"),
	Warehouse	UMETA(DisplayName = "Warehous"),
	Tavern		UMETA(DisplayName = "Tavern"),
	MagicShop	UMETA(DisplayName = "MagicShop")
};

UENUM(BlueprintType)
enum class EWealthLevel : uint8
{
	Poor		UMETA(DisplayName = "Poor"),
	Common		UMETA(DisplayName = "Common"),
	Rich		UMETA(DisplayName = "Rich"),
	Noble		UMETA(DisplayName = "Noble")
};

UENUM(BlueprintType)
enum class EServiceType : uint8
{
	Lodging         UMETA(DisplayName = "Lodging"),        // Inns, taverns, and places to rest
    Blacksmithing   UMETA(DisplayName = "Blacksmithing"),  // Smiths and forge-related services
    WeaponShop      UMETA(DisplayName = "Weapon Shop"),    // Weapon sales
    ArmorShop       UMETA(DisplayName = "Armor Shop"),     // Armor sales
    GeneralStore    UMETA(DisplayName = "General Store"),  // Common goods and adventuring supplies
    Alchemy         UMETA(DisplayName = "Alchemy"),        // Potion crafting and sales
    MagicItems      UMETA(DisplayName = "Magic Items"),    // Shops that sell enchanted items
    Enchanting      UMETA(DisplayName = "Enchanting"),     // Services to enchant weapons and armor
    Healing         UMETA(DisplayName = "Healing"),        // Churches or healers
    Banking         UMETA(DisplayName = "Banking"),        // Storing wealth, loans, and currency exchange
    Gambling        UMETA(DisplayName = "Gambling"),       // Casinos, betting houses, and shady back rooms
    Tavern         UMETA(DisplayName = "Tavern"),          // Selling food, drinks, and gossip
    Library        UMETA(DisplayName = "Library"),         // A place to study or find lore
    TrainingGrounds UMETA(DisplayName = "Training Grounds"), // Combat training, martial schools
    Stables        UMETA(DisplayName = "Stables"),         // Buying, selling, and caring for mounts
    Carpenter      UMETA(DisplayName = "Carpenter"),       // Woodworking, building, furniture
    Tailor         UMETA(DisplayName = "Tailor"),          // Clothes, fine garments, uniforms
    Brewery        UMETA(DisplayName = "Brewery"),         // Alcohol production, mead, beer, whiskey
    Temple        UMETA(DisplayName = "Temple"),          // Religious services, rituals, divine magic
    Messenger     UMETA(DisplayName = "Messenger"),       // Sending letters, courier services
    Mercenary     UMETA(DisplayName = "Mercenary"),       // Hiring fighters, guards, or assassins
    BountyBoard   UMETA(DisplayName = "Bounty Board"),    // Contracts for hunting criminals and monsters
    GuildHall     UMETA(DisplayName = "Guild Hall"),      // Organizations for artisans, adventurers, and merchants
    ExoticGoods   UMETA(DisplayName = "Exotic Goods"),    // Rare and unusual items
    DockServices  UMETA(DisplayName = "Dock Services"),   // Ships, repairs, and ocean trade
    Custom        UMETA(DisplayName = "Custom")           // Allows for unique services per game
};

USTRUCT(BlueprintType)
struct FBuildingData : public FTableRowBase
{

	GENERATED_BODY()

public:
	
	/** The name of the building */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
    FString Name = "Name";

    /** The type of the building (house, inn, etc.) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
    EBuildingType BuildingType;

    /** The physical size of the building */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
    FVector Size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	FString Description;

	/** The owner of the building */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	FNpcData Owner;

    /** NPCs who occupy or work in the building */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
    TArray<FNpcData> Occupants;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	TArray<FNpcData> Visitors;

	/** Storage capacity of the building (useful for warehouses, shops, etc.) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	FVector2D StorageCapacity = FVector2D(0,100);

	/** Defense level of the building (useful for barracks, strongholds, etc.) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	FVector2D DefenseLevel = FVector2D(0,10);

	/** Condition of the building (could degrade over time or due to attacks) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	FVector2D Condition = FVector2D(500,500);

	/** Quality of rest provided (affects bonuses if players rest there) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	FVector2D RestingQuality = FVector2D(8,10);

	/** Crime risk level in the building (affects theft, danger, etc.) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	FVector2D CrimeRisk = FVector2D(5,10);

	/** Whether the building is publicly accessible */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	bool bPublicAccess;

	/** Whether the building has secret rooms, basements, etc. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	bool bHasHiddenAreas;

	/** If the building is affected by magic */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	bool bMagicalInfluence;

    /** The services offered by the building (e.g., crafting, lodging) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
    TArray<EServiceType> ServicesProvided;
	
    /** Wealth level of the building (Poor, Common, Rich, Noble) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
    EWealthLevel WealthLevel;

    /** Inventory of the shop if it's a merchant-type building */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
    TArray<FItem> Inventory;

    /** List of rumors that can be heard here */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
    TArray<FString> Rumors;
	
};