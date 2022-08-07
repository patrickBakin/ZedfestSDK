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

// UserDefinedStruct SaveGameStruct.SaveGameStruct
// 0x038C
struct FSaveGameStruct
{
	int                                                EuroCurrency_27_EE42F4A74FCF4015E1CA4EB011ABD81D;         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HexagonCurrency_30_61934BF54C82C2D051B085A5212A1D91;      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        CurrentClassLevel_98_ADD7E77240EFE00EB9F6FE96FA24BB6F;    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        CurrentClassPrestigeLevel_235_917D599243430B0DAFFF23B8BDD99551;// 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      CurrentClassXP_100_24B7CB2E464A47FC16BC66A633BD81F6;      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      NeededClassXP_102_8B2895B940326F95BE2CBEBBD816E330;       // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      XPRatio_216_D81F853649A182DBB0CE1D8FFD0EEFC9;             // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       CharactersBought_117_7ECDD9A64EE8D1968118A99F9BC672E5;    // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      ClassHP_85_EFD443C64681A2AC02BFB684E57BDC75;              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      ClassShield_86_33DBAC4944E3F257440456814E407A95;          // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      SprintSpeed_91_C7505A4046BAE212A0FEC4B258F3E580;          // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       WeaponsBought_120_00A52ED44609F2ED46C344844B265277;       // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       WeaponSkinBought_126_334BEE4340C2E722B766D6AEC8D213DB;    // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       EmotesBought_153_F65CC40946859E14AF6E2895A2DAC8BB;        // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        EmoteSelected_157_2D26631B470871AC8AA2AC873872EF91;       // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       WeaponSkinSelected_138_7F0703E2460B0DEE03291CB07DF65F42;  // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstance*>                   WeaponSkin_130_44C82531423122495ADE9E8F4446257F;          // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                WeaponSkinIndex_134_B37831E64B494D4FD856BF816DB6DBD8;     // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TArray<class USkeletalMesh*>                       Mesh_114_D724E8BD4D44E4ADEBA8D388D9A46543;                // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              MainWeaponArray_109_5A550AEB4A550F762F62F69077F1B156;     // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UClass*>                              SecWeaponArray_113_062115584E865280F4492B8EC7925B5F;      // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UClass*>                              MeleeWeaponArray_164_23585A1746F4C7776EC0B8BFB935D209;    // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UClass*>                              ThrowableWeaponArray_169_F926C352455DE147A9A473981F7F2CEA;// 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                ClassIntSlot_78_ABD60B61432B8222343C9EA172938542;         // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	TArray<bool>                                       SelectedPerk_123_96E2E8914F85C68243EB0FB836972389;        // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        PersonalOverallStats_146_E78EDC994ECFFB86F7274C826907271C;// 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        WeaponIntSlot_163_F0C41BAC42864C171A95D3932DC93F48;       // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        SecWeaponIntSlot_321_4D8BED024F03779499FB7F8ED0CE8BFB;    // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        MeleeWeaponIntSlot_323_44D6742D4E2C524C072365BEED00BEDA;  // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        ThrowableWeaponIntSlot_325_EF26FBDC4FF82D8878CD258C38AFE9FD;// 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      StartingAmmoMultiplier_174_94AA0F2D4F011A3CCF54CC937A69EDF0;// 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        ThrowableInventoryAmount_177_EDAA4BB142AC2CDA180223A3E34A9C86;// 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        SmallMedKitInventoryAmount_182_5A22167F4360D04E0316EFBD099F7546;// 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BigMedKitInventoryAmount_185_ED2B7E5D4B488AC00EDE53915D979ABE;// 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      ClassWeaponMagSizeMultiplier_192_E3493FE3493740CD9A7567A3D9ECA7E0;// 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      IngameShopPriceMultiplier_196_79778A79454588F918010B9B8A0BD71F;// 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       StartWFullArmor_200_3F8699254FB67C019B6F7B92FFC0BAA1;     // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      AimRunSpeed_204_FEE9372241766726AFEE3C8692A6FE25;         // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       HealthRegen_207_7A3E98FD4E120EAAEB8501B0E90EFDDF;         // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        S;                                                        // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       CommandoWeaponsBought_231_184D9E014755467003F20289EA6A13FF;// 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       NukerWeaponsBought_222_6F9D24294582B35A634E89A56590DE0E;  // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       TorpedoWeaponsBought_224_3B18EEEE4011274FCB7F07BFFADC5CA6;// 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       DoctorWeaponsBought_226_3686EBF743405CBD430918859FEB1632; // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       BonebreakerWeaponsBought_228_E7442C2B47C5C2CC7635C29A979AD5B7;// 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      ClassAddedWeaponDamage_239_8C6971A245810FD26FEF3D8577ECD19A;// 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                DailyChallengeDay_242_D4D563064F92FD7B80B027874B3F8C26;   // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	TArray<struct FS_AchievementInformation>           DailyChallengeShuffle_246_5380B4684CDAAF889C9FA2A419DFFDB9;// 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_AchievementInformation>           SeasonalChallenges_332_EABCD002471EC44CDD930AAA5AA3D760;  // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SeasonalChallengesID_335_4AE141B54B241B2DAB64038331F45A18;// 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	TArray<int>                                        CurrentWeaponXP_255_BA62F62542AC3497ADFD359A05A54A60;     // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        NeededWeaponXP_256_6CE9088D4DF5AC2A008C09898A8F9E3C;      // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        WeaponPrestigeLvl_266_C38107E34A1E4933053A10860A5A0245;   // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        SecCurrentWeaponXP_297_7C1ED94849106EBD2A2846B5043B251A;  // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        SecNeededWeaponXP_298_9BE5E05945B0518D2CA23EB732C3ECB2;   // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        SecWeaponPrestigeLvl_300_FC0AFC254BBADB4BFFE92CADE6399F52;// 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        MeleeCurrentWeaponXP_310_270DB5814F5DAE425212129FD19F8D07;// 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        MeleeNeededWeaponXP_311_8B047A25474D081FBC1658BE64F0F41D; // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        MeleeWeaponPrestigeLvl_312_ED8A448148F8C11D36331C9494DAECA3;// 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      MeleeWeaponDamageMultiplier_270_5B7E444443E843A52FC0448EFFF33414;// 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                DailyChallengeRewardNr_328_ADE7BF4E45B694FC10E558B104AD4521;// 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
