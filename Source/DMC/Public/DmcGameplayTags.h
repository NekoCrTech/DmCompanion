// created by Neko Creative Technologies

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * 
 */

struct FDmcGameplayTags
{

	static const FDmcGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();

	// Container for all skill-related tags
	FGameplayTagContainer SkillTags;

	// Individual skill proficiency tags
	FGameplayTag Skill_Acrobatics;
	FGameplayTag Skill_AnimalHandling;
	FGameplayTag Skill_Arcana;
	FGameplayTag Skill_Athletics;
	FGameplayTag Skill_Deception;
	FGameplayTag Skill_History;
	FGameplayTag Skill_Insight;
	FGameplayTag Skill_Intimidation;
	FGameplayTag Skill_Investigation;
	FGameplayTag Skill_Medicine;
	FGameplayTag Skill_Nature;
	FGameplayTag Skill_Perception;
	FGameplayTag Skill_Performance;
	FGameplayTag Skill_Persuasion;
	FGameplayTag Skill_Religion;
	FGameplayTag Skill_SleightOfHand;
	FGameplayTag Skill_Stealth;
	FGameplayTag Skill_Survival;

	// Saving throw Tags
	FGameplayTag SavingThrow_Strength;
	FGameplayTag SavingThrow_Dexterity;
	FGameplayTag SavingThrow_Constitution;
	FGameplayTag SavingThrow_Intelligence;
	FGameplayTag SavingThrow_Wisdom;
	FGameplayTag SavingThrow_Charisma;

private:
	static FDmcGameplayTags GameplayTags;
};
