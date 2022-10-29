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

// UserDefinedStruct Effects.Effects
// 0x00A4
struct FEffects
{
	TEnumAsByte<EOffScreenRotationRule>                OffScrRotationRule_33_BE914E2F48BB21B0B6F5A0A1088E1E87;   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDistanceText                               DistanceText_30_B628FCB143D824AACDFBF1BAFC33F01F;         // 0x0008(0x0068) (Edit, BlueprintVisible)
	struct FOnScreenScaleFromTo                        OnScreenScaleFromTo_9_594BABD1477C1F663D4FEB8312122E0A;   // 0x0070(0x0014) (Edit, BlueprintVisible, IsPlainOldData)
	struct FOnScreenRotation                           OnScreenRotation_10_AF3DBCBE46076C4ED114BB84AFD08810;     // 0x0084(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FOnScreenOpacityIn                          OnScreenOpacityFadeIn_19_1A1649F84FEE9FB66479A8A0184CAC82;// 0x008C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FOnScreenPulse                              OnScreenPulse_23_675722E84A25FABAE90FB79282B5CCFA;        // 0x0098(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
