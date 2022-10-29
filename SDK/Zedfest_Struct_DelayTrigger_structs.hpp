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

// UserDefinedStruct Struct_DelayTrigger.Struct_DelayTrigger
// 0x0009
struct FStruct_DelayTrigger
{
	float                                              Delay_12_A0D2C79541759213041F4D98AD235F21;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation_15_F4B483FC400E4FAEB1800EA3F9698C58;      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     BehaviorTo_5_2C5AC3CF4016F66DAB9D21814A8B8F0C;            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
