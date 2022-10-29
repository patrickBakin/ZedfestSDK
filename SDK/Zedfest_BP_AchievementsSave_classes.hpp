#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AchievementsSave.BP_AchievementsSave_C
// 0x0010 (0x0038 - 0x0028)
class UBP_AchievementsSave_C : public USaveGame
{
public:
	TArray<struct FS_AchievementInformation>           Achievements;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AchievementsSave.BP_AchievementsSave_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
