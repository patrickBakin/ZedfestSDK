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

// UserDefinedStruct IndicatorData.IndicatorData
// 0x0128
struct FIndicatorData
{
	struct FOnScreen_Texture                           ___OnScreenTexture____129_EF46EC904337265E37A70AA8546A653B;// 0x0000(0x0028) (Edit, BlueprintVisible, IsPlainOldData)
	struct FOffScreen_Texture                          ___OffScreenTexture____119_CB02B7D1419E6B5451221AA6895DACBB;// 0x0028(0x0028) (Edit, BlueprintVisible, IsPlainOldData)
	class AActor*                                      TargetActor_120_407339444F2908749262E1AFF574BD0D;         // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     TargetLocation_121_0110EDAE4BD17A0987BDE6ABDB3088D0;      // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceBasedVisibility_132_EA625AC24DEB1CCB7739B5B7E475AA3D;// 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan_71_4D81C38B4FA2A1FF1261EA81D79F82FF;             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseBoundZOffsetforActorTarget_91_5C628CA245BAB9D5C86EE4BFC4385067;// 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              AdditionalBoundZOffsettforActorTarget_92_A11D97FF4EBEC21A464828A038B6E6D1;// 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIndicatorType                              IndicatorType_127_5EA6C91E4D3852983CCF5E9B43496372;       // 0x0074(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FEffects                                    ___Effects____122_2DFA7A4049EB7A986F5B12A1CA50DF0A;       // 0x0080(0x00A8) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
