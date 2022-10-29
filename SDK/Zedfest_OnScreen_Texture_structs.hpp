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

// UserDefinedStruct OnScreen_Texture.OnScreen_Texture
// 0x0028
struct FOnScreen_Texture
{
	class UObject*                                     OnScreenTextureObject_13_F6E172E147DC9571382D3B8D085B893F;// 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   IndicatorSizeOnScreen_2_928EDC674C0E3A7A2EF1A28B28AFD635; // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OnScreenPivot_4_3DE97E4044B2ED9B8058E6A0787717FE;         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TintColor_10_87B107474E5125B8CD5570B8DDCE9D52;            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
