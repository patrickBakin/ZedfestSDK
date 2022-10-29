#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_UpdaterNotificatorInfo.S_UpdaterNotificatorInfo
// 0x007C
struct FS_UpdaterNotificatorInfo
{
	class UObject*                                     Icon_3_B708E5D440250E722536638194D23315;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       NotifyHeadline_12_0F29D2E443629A61AF7FECB6F4C7EAB9;       // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       NotifyText_11_E299A4784C506DAE626EB5ABFC1AEF96;           // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                IconFrameColor_6_563CD1824E5762594B3AE4B3E7485999;        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NotifyFrameColor_15_83C6021749BA483DC040E990E6844916;     // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HighlightsColor_26_207E256048A66A4F109F479B2BD0C93F;      // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Particles__22_96E976054159DB255D777383B66DE038;           // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	struct FLinearColor                                ParticlesColor_24_A38BAFEE45B9A2E29F1E7D99A2B68D3D;       // 0x006C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
