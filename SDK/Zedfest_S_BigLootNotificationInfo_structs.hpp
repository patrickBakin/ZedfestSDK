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

// UserDefinedStruct S_BigLootNotificationInfo.S_BigLootNotificationInfo
// 0x00C0
struct FS_BigLootNotificationInfo
{
	float                                              DisplayTime_26_BE1901F94266BE7360887CAE26485220;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveManually_27_3C9EFAD240E41EAA5F4329974CC360BA;       // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class UObject*                                     Icon_28_E18F0E0A42B8957F55617586AFE8F756;                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Headline_29_C8CCA288499FEE3D59E8B9B5641234C5;             // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Content_31_3588B455476C29607A7EFA94256E14EE;              // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                IconFrameColor_32_C0B3F2A54F5CD051F3A42DA3F14D1EC4;       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HeadlineFrameColor_33_CEB7F9F4418F7137A676F4958F31222D;   // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Particles_35_99D9BF2F4BAAA85DE65D2885DE8C7009;            // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                ParticlesColor_34_00E1836544A508115D2545B0C4A75B2E;       // 0x0064(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ToolTipLeft_37_78D2FF194BD680DCADC9469316FD17A0;          // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FText                                       ToolTipLeftText_38_14A58EA8452A5A139C9908A464D81D02;      // 0x0078(0x0018) (Edit, BlueprintVisible)
	class UObject*                                     ToolTipLeftIcon_39_04887EA94FED9752CC2280852BAF830F;      // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ToolTipRight_40_BA9258244AC5173C9677A88F2B6D9F25;         // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FText                                       ToolTipRightText_41_1248788749E187C71D6F408C2DDACE33;     // 0x00A0(0x0018) (Edit, BlueprintVisible)
	class UObject*                                     ToolTipRightIcon_42_652E09EB4835A9E433DED8A6E7286A4E;     // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
