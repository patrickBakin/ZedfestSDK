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

// UserDefinedStruct S_QuestNotificatorInfo.S_QuestNotificatorInfo
// 0x00B0
struct FS_QuestNotificatorInfo
{
	class UObject*                                     Icon_3_B708E5D440250E722536638194D23315;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconScale_43_9122F7FE4F984C995E7E3E9A040053D3;            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       QuestType_32_80ED37F84D88E8E9A0601B98A751387D;            // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       QuestHeadline_27_0F29D2E443629A61AF7FECB6F4C7EAB9;        // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       QuestText_28_E299A4784C506DAE626EB5ABFC1AEF96;            // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                IconFrameColor_6_563CD1824E5762594B3AE4B3E7485999;        // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextFrameColor_29_83C6021749BA483DC040E990E6844916;       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HighlightsColor_26_207E256048A66A4F109F479B2BD0C93F;      // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TextFrameParticles__33_96E976054159DB255D777383B66DE038;  // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FLinearColor                                TextFrameParticlesColor_34_A38BAFEE45B9A2E29F1E7D99A2B68D3D;// 0x008C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IconFrameParticles__37_441D2A004127047AAC0EA5BA29AB1BD6;  // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	struct FLinearColor                                IconFrameParticlesColor_40_DD1F173646132C2250A54CBB7543AC2E;// 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
