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

// UserDefinedStruct Struct_ActorDistanceTrigger.Struct_ActorDistanceTrigger
// 0x000E
struct FStruct_ActorDistanceTrigger
{
	struct FName                                       ActorTag_14_3D94D93846EFE963EF89469E6EF0331F;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance_10_686646EF4E362EAD5E31C0837C0B2588;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     BehaviorTo_5_2C5AC3CF4016F66DAB9D21814A8B8F0C;            // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LineOfSight_16_704390BF4C567E6D308124A955A3332E;          // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
