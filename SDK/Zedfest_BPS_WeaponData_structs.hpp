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

// UserDefinedStruct BPS_WeaponData.BPS_WeaponData
// 0x0168
struct FBPS_WeaponData
{
	struct FText                                       WeaponName_78_12E767584517B193F954AB86BC21F72A;           // 0x0000(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_WeaponTypes>                         WeaponType_117_596A02E44D78DEA16E551E8CABC8CA5E;          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class UTexture2D*                                  WeaponImage_10_7B0C94E04ADD8EB3B42BF4B083A37B55;          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               WeaponSkeletalMesh_59_CA53E9794FD54C85ABF08E93CAAA5E3D;   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BulletsInShot_19_2EAE66D942315A3D16A41DB567327C8C;        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RateOfFire_29_A91B459B45E4D90E9DAF4CA82D373C32;           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoInMag_30_39452AEF46EA25B50FFE49B3FB42CA54;         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoInBP_31_184F29524D1097618BBC2BB9C2971D5A;          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RoundsInBurst_51_3BAA02EA495EA48EC7D20CA677CBDC8C;        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JamRisk_33_2C61ACDE4832D08F39FA17941EA08E65;              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasSingleShotMode_35_EEE5524544B26E3D43102D96DC320E52;    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasBurstMode_38_B73BFBA4411E398412E9E7964DF9FC98;         // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasFullAutoMode_39_0BE3D2D84C413FF4AFE5BEBA1F55BA1F;      // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x004B(0x0001) MISSED OFFSET
	float                                              WeaponSpread_46_801EB6224FA14CF3FE05AF8165FCA3E3;         // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bullet_MinDamage_77_FB9ECFE74A79BCE1C98BBF9D44EAB983;     // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bullet_MaxDamage_71_9AF658374B4AE115F23D6F87EBA0F971;     // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bullet_CritMultiplier_72_3218205B4A37E45A50F2C7AFB009E462;// 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bullet_CritChance_73_77BB2EAD47E4E792521EC68A656B63AA;    // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bullet_Speed_74_8612DDA745DC99F3411FD49FDAB9E7AA;         // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Bullet_CanRicochet_75_1814CCE742EF420596CCC3805CBD7E29;   // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	class UClass*                                      Projectile_199_67FC97574122F45D40101293F092CBC1;          // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UTexture2D*                                  CrosshairImage_147_2ADD3EC346EB112F0984AC8B57A3C584;      // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashEffect_84_8E136B0449B552C020DFDE8CCB558F8F;    // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  FireSound_87_E80E605542D14AAF51C4CE962E1B4452;            // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoReload_108_101361DC4EBA082C43F38B9DCA4CA6DB;          // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ConsumeAllRoundsOnReload_119_652182FF4ED192B5F7D6468194C3E49F;// 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReduceAccuracyWhileMoving_123_BCA44AFF41B2275DC386EA8F6E53A121;// 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x008B(0x0001) MISSED OFFSET
	float                                              AccuracyPenaltyWhileMoving_124_85C37A9840621ACD92DCB2973D44C5A1;// 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WeaponDirectionFix_142_707F81F746E29E6BFB8DE3B4E4CBB9BD;  // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WeaponLocationfix_203_BAC09E624CA6FD5D371E2EA2EC614863;   // 0x009C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightHandLocationFix_143_B8D660E34FC0611CF3B8378B7BF50647;// 0x00A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftHandLocationFix_144_EAC448294E9C416F74EDC4AF9A943BD2; // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HolsterSocket_90_ADD8771E4F501966B3516B8731236699;        // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReloadDuration_41_80CFF165439EB865B527BE85F56298CC;       // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	class UAnimSequence*                               WeaponShootingAnimation_196_F4E91FE6478C5AE59B9500903680A5DF;// 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CharReloadAnimation_113_7DA05D9B430E463F6EF80DBAF8F92447; // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EquipAnimation_137_1BD5D190411DA3EDDE3D4893B13BFADA;      // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                UnequipAnimation_139_A1E406AC406A9763155691B68BC78FC2;    // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Recoil_Up_Min_162_E746FF3E4A9B52C66BFA2788AEF6B95D;       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Recoil_Up_Max_163_775FF81343206161E07CEF9FE778C50C;       // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Recoil_Right_Min_164_4F905F8C4750E25299EBCAAD13DC4F96;    // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Recoil_Right_Max_167_2E8699FC40664B184F5D0988A5BA0142;    // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ZoomValues_177_7AB1F1954DCE11491FB5FBB0B3EA3D2F;          // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  SniperScopeImage_151_C8D48B7B4D363822EA3BADBFD0A8D766;    // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasRangefinder_180_58DA80C845E34B64107F8BB379677ABA;      // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	struct FMargin                                     RangefinderPadding_183_0D9F9F5642732BB41A81A79F641C1B84;  // 0x011C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FSlateColor                                 RangefinderTextColor_187_06BDE282405ACA334A2F9E874C0DCB97;// 0x0130(0x0028) (Edit, BlueprintVisible)
	bool                                               Experimental_EnableWeaponCamera_189_8ADCCCB14AE3FE2073AD108699ED6446;// 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	struct FVector                                     Experimental_WeaponCameraOffset_193_80CAE16B44CB47284FC7BEAB9CD1F496;// 0x015C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
