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

// UserDefinedStruct CommandoStruct.CommandoStruct
// 0x0030
struct FCommandoStruct
{
	class UClass*                                      PrimaryWeapon_38_2643BBC94E67561343C55FA71817E022;        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class UClass*>                              Upgrades_25_CD9662484B64A3A48178C9A7B3D966B0;             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UClass*>                              MeleeUpgrades_42_249C2A744D124A761748A29023C982F6;        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                WeaponIndex_29_CAA1E3A8482BE4043B732196340B498E;          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Free__32_143BA8E0463A7C441037768122D4242C;                // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IngameUnlockable__44_35F18691457392AD247858BEFE700CF5;    // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ¡_C;                                                      // 0x002E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemCategory>                         Category_37_07C027C942184087C8487F8FE32524DC;             // 0x002F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
