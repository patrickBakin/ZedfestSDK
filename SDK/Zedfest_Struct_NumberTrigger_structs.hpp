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

// UserDefinedStruct Struct_NumberTrigger.Struct_NumberTrigger
// 0x000A
struct FStruct_NumberTrigger
{
	TEnumAsByte<Enum_OperationType>                    ArithmeticOperation_43_FDC772354B4F5CFF82FCEABB9240AE3D;  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Percentage_28_2794CD11424E9D3F9B4849B9A9887458;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     BehaviorTo_25_9958D2FF4F7AA18327C6A1ABFE7A0EEA;           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OneTimeOnly_45_7B223F744C914A01AD264C95E697C350;          // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
