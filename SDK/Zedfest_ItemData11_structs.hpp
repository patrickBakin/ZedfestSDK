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

// UserDefinedStruct ItemData11.ItemData11
// 0x0034
struct FItemData11
{
	struct FString                                     Name_3_0A1E24914395BD5BA98D8E9DCF4A25A0;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description_5_1531ADBD47BFFAE8AD8E85A5BEE95B2E;           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  Icon_8_D6FC05F74FCC6BA321D330B481BF0AC0;                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemCategory>                         Category_21_A92C8A7D43B183AB25F0A0850CB3AA3F;             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarities>                         Rarity_22_A4E28B37469F42C17C74F1BE09C13CC0;               // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                MaxStack_18_66C13F0344E9B119CB05AD8A665563C7;             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPrice_25_833A9EA1480137C7380FA29A49E7EE47;            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
