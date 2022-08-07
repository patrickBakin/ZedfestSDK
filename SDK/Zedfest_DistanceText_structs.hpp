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

// UserDefinedStruct DistanceText.DistanceText
// 0x0068
struct FDistanceText
{
	bool                                               ShowDistanceText_1_D6442D754ED2E9480523EB942A953D33;      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              FontSettings_4_E989FEEA4DE4396C54F048B4CA7DE91D;          // 0x0008(0x0050) (Edit, BlueprintVisible)
	struct FLinearColor                                TextColor_11_8394F05148F756511B0A6192FBEF376A;            // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
