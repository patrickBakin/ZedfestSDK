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

// UserDefinedStruct NavItemActionStruct.NavItemActionStruct
// 0x0058
struct FNavItemActionStruct
{
	TEnumAsByte<ENavActionTypes>                       OnUp_3_BD42F57C416E1C133A6CC1BC6F0A8335;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavActionTypes>                       OnDown_6_95B155D642DDC56C4E1726B2CCECF98F;                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavActionTypes>                       OnRight_8_70316DE74755558EF0B282AB83F5F2D9;               // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavActionTypes>                       OnLeft_10_BD46AE704A395659053DF080CDD23545;               // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavActionTypes>                       OnEnter_12_59504D61409CB936D41C32B14F57D83B;              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FNavItemCustomActionStruct                  CustomAction_16_15AFEA7945E6D92357F3AC9262ADF62C;         // 0x0008(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
