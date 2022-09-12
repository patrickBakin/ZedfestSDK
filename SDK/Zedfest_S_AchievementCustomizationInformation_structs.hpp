#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_AchievementCustomizationInformation.S_AchievementCustomizationInformation
// 0x009C
struct FS_AchievementCustomizationInformation
{
	struct FText                                       Name_5_F2B37B8B498880AC2502058CA42F6E09;                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Message_7_9FF9EF0847CD189A4735E7926231277A;               // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Reward_42_C40DDFC94BFEA02E8F8A03B8280852B4;               // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                RewardColor_45_8B33286E46D49B0BE6176DB63940CEE3;          // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSecret__13_C70D1F8C40FB5884BEE5F2A971F8999B;            // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FLinearColor                                UnachievedColor_39_E70405A049FEFC97B2106BA7F326ED76;      // 0x005C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AchievedColor_36_D64A0825464B4823E21E17A88850E900;        // 0x006C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	class UTexture2D*                                  UnachievedIcon_16_C3D36C2247A4E9C643AF47A960646E00;       // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  AchievedIcon_18_A4EAE41C4ECCDF7EF929AFBF1182CCF1;         // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaximumProgression_24_6CD1EC10409475664F9B88BB821180C0;   // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DailyChallengeNumber_48_157FDC334BF8511EC713FEBE63A7A585; // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeasonID_51_828EE38249E070B2A6C2EB86D6DD69A3;             // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
