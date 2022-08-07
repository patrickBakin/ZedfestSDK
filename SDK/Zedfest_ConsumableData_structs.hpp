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

// UserDefinedStruct ConsumableData.ConsumableData
// 0x0048
struct FConsumableData
{
	float                                              TimerToConsume_20_763779414C5ECA6B433B7F87D7C49170;       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IncreaseHealth_15_7DC0DD6E4E19BCF652AB29A9DAA2155D;       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IncreaseShield_32_A0D4618E451A9DFCC7AB6B8B85CD96ED;       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LimittoIncreaseHealth_28_A8B2313E4C1CFDB95559469389D4650C;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LimittoIncreaseShield_31_8B79F3A24F5EC8DD686E569167E89FBB;// 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UStaticMesh*                                 ConsumableMesh_35_4EBA987549D8BAA2B57B68919EF4F2C3;       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshScaleVector_38_9A62D0514BE74583632E2585E3ADB9D9;      // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleGroundEffect_43_CF15C6B040CD5E40E6AD4098918586CD; // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleFullGroundEffect_45_472A4D06449001F51BF10E97A22D3185;// 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EquipAnimation_48_F5D7A6F3483E4F8C555F4EB40C063B36;       // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
