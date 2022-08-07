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

// UserDefinedStruct WeaponsData.WeaponsData
// 0x00EF
struct FWeaponsData
{
	class UClass*                                      AmmoType_49_6DB5F0E44D3091F1C06229919DF50255;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              DamageBase_28_27331AEF483F14DE111D79B30399A5DA;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireRate_30_B249E9184F2A98843EDEFDB4A0DCF855;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance_148_237832414B3EC70DC631849A126096B0;         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFireMode>                             FireMode_50_DF450BFB45C239D8799B0187A7E77CA2;             // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoReload_32_ACA8A44C43E44796168C2E8D0F74A659;           // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EReloadMode>                           ReloadMode_72_96F8317342D4BCF5310CFD951A406E93;           // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	float                                              ReloadTime_71_2ED985A5499021E6D46E7AB15D160EAC;           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalRecoil_67_7D49759144951A019C48DB9A91C50DF8;       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalRecoil_70_251D5CB341E50F26E22DEAB669093E04;     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpreadWithZoom_58_90D7AE0546A63209931EFCB256479B23;       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpreadWithoutZoom_55_7C05F6084D9A23295FBA6E9484897B0D;    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MagazineSize_48_3521A1D341C7176649CDAA9E067A2F1B;         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Projectile_119_206A72DC479A666B0220E09BAA1F1070;          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<EWeaponType>                           WeaponType_65_76575F1145F156CE77347A842F2CDE9A;           // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              WeaponZoom_77_FA46D9C9407321B36566B38450AB3FB7;           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionRange_81_5402254A4218894B8444B4836716474B;       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class USkeletalMesh*                               WeaponMesh_84_1AFC6D2749890F77DFDB2FBD844F7FF3;           // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 WeaponStaticMesh_130_F1C7ECB447980CA90C00818F22FC67FA;    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Silencer_139_8C87F6A848D2DA649D7D0885781A2161;            // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 AmmoShells_142_5828004145F1E4D4C323AFB763EF2D91;          // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashEffect_87_9632380D4CD94418DD2553BF97AF70D1;    // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TracerParticle_151_89F0C5DA485E143B49CF288B76B957E6;      // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  FireSound_90_4D8E0D7144A94AA91A74BC84040BB0A5;            // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ReloadSound_136_FE6178A64A51015CB9269CA24521CF80;         // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WeaponDirectionFix_93_73BCBA3947232BDBA2A1FE82F0947207;   // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WeaponLocationfix_96_1ED7737E4987B27F2B5E208F80D60D4C;    // 0x0094(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightHandLocationFix_102_5E3EDD564986E552ACC201886F117419;// 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftHandLocationFix_103_EBD70B8F47F2FD97C218B09B793C0F15; // 0x00AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HolsterSocket_106_C6A231CF493A707A7B69E186AE46B26F;       // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                WeaponShootingAnimation_109_545139DB43F21F736F1772BF8BE80EB5;// 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CharReloadAnimation_113_897582834969BE04750F5DAB061FF2E3; // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EquipAnimation_114_0683B2714F0907B1DB9D4AA49B8B481B;      // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                UnequipAnimation_115_7AA0E0294A45BFA4D8087FAA722E0C41;    // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WeaponTypes>                         WeaponType_118_04D74262471B8F26C59AD6B123678501;          // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasZoom__121_AA86480F4CB16EEA4B9367A6F23D5CD6;            // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	int                                                BulletsInShot_127_225229E3403825E653636AB5CDCA707E;       // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponSpread_133_FBFFFDB24ABFA3F56AA605969AE8FEAF;        // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoubleGuns__145_CF73B1934814C5F31726D2B720511603;         // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Penetration__153_EFCB815149204093F5CD03AE6E579132;        // 0x00ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SyringeDamage_Heal__155_8F938CB24EEE6044D12D6C839D734478; // 0x00EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
