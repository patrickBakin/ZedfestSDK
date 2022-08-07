#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AchievementsListLibrary.BP_AchievementsListLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AchievementsListLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AchievementsListLibrary.BP_AchievementsListLibrary_C");
		return ptr;
	}


	void STATIC_Unlock_DailyChallenges(struct FText* Achievement, int* Progression_to_Add, class UObject** __WorldContext);
	void STATIC_Initiate_DailyChallenges(class UObject** __WorldContext, TArray<struct FS_AchievementCustomizationInformation>* Achievement_List);
	void STATIC_Get_Date_and_Time(class UObject** __WorldContext, struct FString* Date, struct FString* Time);
	void STATIC_Hide_Achievements_List_Menu(class UObject** __WorldContext);
	void STATIC_Unlock_Achievement(struct FText* Achievement, int* Progression_to_Add, class UObject** __WorldContext);
	void STATIC_Generate_Achievements_List(class UPanelWidget** Achievements_Container, class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements);
	void STATIC_Initiate_Achievements(class UObject** __WorldContext, TArray<struct FS_AchievementCustomizationInformation>* Achievement_List);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
