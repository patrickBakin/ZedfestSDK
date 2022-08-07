#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_AchievementSystemInformation.S_AchievementSystemInformation
// 0x0038
struct FS_AchievementSystemInformation
{
	struct FString                                     AchievementsSaveFileName_3_219155304DC08C7501401E88105694C7;// 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AchievementNotificationDisplayLengthsec_7_79912F274D55F372486BC19430DB93A4;// 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AchievementNotificationEnterAnimationSpeedsec_11_0EECE82D4C53590CF3270591CA993E4A;// 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AchievementNotificationExitAnimationSpeedsec_13_B0612D7A4C1CB40F4D7039A12660B223;// 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AchievementMenuEnterAnimationSpeedsec_16_973E1A4F464AF0EC9E12FA99D3F971B3;// 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AchievementMenuExitAnimationSpeedsec_18_B369E4E743427F201D67C386B2E0F36F;// 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class USoundWave*                                  AchievementAchievedSound_22_EA8D1EDC49F349C7C52A81AF3ABB2490;// 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  SecretAchievementAchievedSound_24_0C5E2DDF47703124A2B955A6CE655FB8;// 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
