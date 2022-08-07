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

// BlueprintGeneratedClass BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AchievementSavingLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C");
		return ptr;
	}


	void STATIC_SaveDailyChallenges(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements);
	void STATIC_LoadDailyChallenges1(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements);
	void STATIC_LoadDailyChallenges(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements);
	void STATIC_LoadAchievements1(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements);
	void STATIC_GetAchievementSaveObject(class UObject** __WorldContext, class UBP_AchievementsSave_C** Achievements_Save_Object);
	void STATIC_LoadAchievements(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements);
	void STATIC_SaveAchievements(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
