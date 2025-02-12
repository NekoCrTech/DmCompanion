// created by Neko Creative Technologies


#include "DmcGameplayTags.h"
#include "GameplayTagsManager.h"

FDmcGameplayTags FDmcGameplayTags::GameplayTags;

void FDmcGameplayTags::InitializeNativeGameplayTags()
{
    //Skills
    GameplayTags.Skill_Acrobatics = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Acrobatics"), FString("Proficiency in Acrobatics skill"));
    GameplayTags.Skill_AnimalHandling = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.AnimalHandling"), FString("Proficiency in Animal Handling skill"));
    GameplayTags.Skill_Arcana = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Arcana"), FString("Proficiency in Arcana skill"));
    GameplayTags.Skill_Athletics = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Athletics"), FString("Proficiency in Athletics skill"));
    GameplayTags.Skill_Deception = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Deception"), FString("Proficiency in Deception skill"));
    GameplayTags.Skill_History = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.History"), FString("Proficiency in History skill"));
    GameplayTags.Skill_Insight = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Insight"), FString("Proficiency in Insight skill"));
    GameplayTags.Skill_Intimidation = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Intimidation"), FString("Proficiency in Intimidation skill"));
    GameplayTags.Skill_Investigation = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Investigation"), FString("Proficiency in Investigation skill"));
    GameplayTags.Skill_Medicine = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Medicine"), FString("Proficiency in Medicine skill"));
    GameplayTags.Skill_Nature = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Nature"), FString("Proficiency in Nature skill"));
    GameplayTags.Skill_Perception = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Perception"), FString("Proficiency in Perception skill"));
    GameplayTags.Skill_Performance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Performance"), FString("Proficiency in Performance skill"));
    GameplayTags.Skill_Persuasion = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Persuasion"), FString("Proficiency in Persuasion skill"));
    GameplayTags.Skill_Religion = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Religion"), FString("Proficiency in Religion skill"));
    GameplayTags.Skill_SleightOfHand = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.SleightOfHand"), FString("Proficiency in Sleight of Hand skill"));
    GameplayTags.Skill_Stealth = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Stealth"), FString("Proficiency in Stealth skill"));
    GameplayTags.Skill_Survival = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Skill.Survival"), FString("Proficiency in Survival skill"));

    //Saving Throws
    GameplayTags.SavingThrow_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("SavingThrow.Strength"), FString("Proficiency in Strength"));
    GameplayTags.SavingThrow_Dexterity = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("SavingThrow.Dexterity"), FString("Proficiency in Dexterity saving throws"));
    GameplayTags.SavingThrow_Constitution = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("SavingThrow.Constitution"), FString("Proficiency in Constitution saving throws"));
    GameplayTags.SavingThrow_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("SavingThrow.Intelligence"), FString("Proficiency in Intelligence saving throws"));
    GameplayTags.SavingThrow_Wisdom = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("SavingThrow.Wisdom"), FString("Proficiency in Wisdom saving throws"));
    GameplayTags.SavingThrow_Charisma = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("SavingThrow.Charisma"), FString("Proficiency in Charisma saving throws"));
}
