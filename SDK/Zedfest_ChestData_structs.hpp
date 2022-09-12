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

// UserDefinedStruct ChestData.ChestData
// 0x0028
struct FChestData
{
	float                                              TimetoOpenChest_15_AB575D0B4C5756F4AC9F7BB28D690641;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AmountItemtoSpawn_21_226A8F9F4276BB8B07A94195F4FE28A6;    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemsToSpawn>                       ItemstoSpawn_22_13B167764D8A77F382A73D88FF8D88BC;         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UStaticMesh*                                 ClosedChestMesh_6_38762442467135D77021C8B0E0EAE2C0;       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 OpenChestMesh_5_6B7E0E0F419384F1DEB737AD5BC8B54A;         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
