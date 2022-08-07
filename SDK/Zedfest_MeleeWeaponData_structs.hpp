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

// UserDefinedStruct MeleeWeaponData.MeleeWeaponData
// 0x00C0
struct FMeleeWeaponData
{
	float                                              HitDamage_10_7A0F085D4D3DF48536925C88A30EF42C;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UseRate_20_109803E54F8BC551E73D9590640B0E8B;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range_16_333C914946C7D792AAA59E89F15DB52C;                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutomaticHit_24_068714C4488576CD509ECE979C062605;         // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MemberVar_25_FCFFC7094A20605E6ACD29AB226B7456;            // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	class USkeletalMesh*                               MeleeMesh_28_FD9022D4425011948B2AFAAEB0159431;            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MeleeStaticMesh_31_55B5EE724A45F61D03D924B6C0644C04;      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HolsterSocket_34_4DE9EC6E4565668279F984B34A88A1E0;        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EquipAnimation_37_81CC55CA492D4F121208E1B2A19D11A3;       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WeaponDirectionFix_40_5702CCB643CB3C7452F3909B7DD7FE69;   // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WeaponLocationfix_45_0009D8B34958A4E11165A1A6E8A07210;    // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightHandLocationFix_46_53F7D94D44EA9F62331A1EBF7D0F5629; // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftHandLocationFix_47_C48B2BA946AF10DDDC76248C842382E5;  // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WeaponTypes>                         WeaponType_50_2340914F47A8D174A8EE349807D192F4;           // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FVector                                     BottomMeleeTraceBox_54_A5BBAEBB450D859E0F8D2591F3A634E4;  // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TopMeleeTraceBox_56_48C3DA5C41DCA9BEDFE3FD8755243B94;     // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeTraces_59_D5CF240A42550862DEF8C884C64C953C;          // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             HitSTMeshEmitter_88_49DCBD054009A16A78F9E68430D31617;     // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             HitCharEmitter_87_4BD953C141A986D34B97E59ABB35AE6C;       // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        A;                                                        // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                Animation_72_485352A44DDCCFB831025B8ED70AD32C;            // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HoldLMBSound_81_2D2274234871C644AA75F689D3335E3D;         // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitSTMeshSound_89_492858E64583E3ECDA449A95996C1A2E;       // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitCharSound_90_E589633C4CD713F3B477B7ABE47C1F52;         // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
