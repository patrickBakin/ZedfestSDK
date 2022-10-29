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

// UserDefinedStruct ItemSpecialData.ItemSpecialData
// 0x0028
struct FItemSpecialData
{
	class UStaticMesh*                                 ItemSpecialMesh_52_4EBA987549D8BAA2B57B68919EF4F2C3;      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshScaleVector_38_9A62D0514BE74583632E2585E3ADB9D9;      // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UAnimMontage*                                EquipAnimation_48_F5D7A6F3483E4F8C555F4EB40C063B36;       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpecialItemBP_58_2D17FA314ABCE73006BA4D92EDEA8DE5;        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
