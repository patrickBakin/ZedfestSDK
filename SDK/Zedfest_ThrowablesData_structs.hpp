#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ThrowablesData.ThrowablesData
// 0x0044
struct FThrowablesData
{
	TEnumAsByte<ExplosionMode>                         ExplosionMode_23_A46CC3FB45BC5AB5E1F316A1E084D0DF;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TimeToExplode_24_5843602B4C6A9E334E716AB669839407;        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damage_31_67333B6D4C885D9A9C0EB28BD62819FD;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range_30_E53DB94F438B0A672DCF61A175C702FC;                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Throwable_47_B3C448F7474C6476C9AB75A7D0578B59;            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UStaticMesh*                                 ThrowableMesh_39_61AC4B0F49A78B14E7B7E9BAB0E5402E;        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshScaleVector_42_CA8939464DA28EC9FCD2FBAEF5FB9C53;      // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UAnimMontage*                                EquipAnimation_45_5E71F19243CA56F24703CD91AFF2EA5C;       // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ThrowableLocationfix_50_DA93B2404995EE5551629F9378A33C57; // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
