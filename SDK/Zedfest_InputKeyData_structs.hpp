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

// UserDefinedStruct InputKeyData.InputKeyData
// 0x0028
struct FInputKeyData
{
	struct FName                                       InputName_2_FAB9067A4105761F351C9589627AA3C9;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAxis_5_999592764D716F7AD22649AE8F93227A;                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              AxisValue_8_0EA938484BF340DBFFC2D1A6DEB4DEBE;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKey                                        DefaultKey_11_9BF49E7540C9E4EDB20ADC8525C6CD58;           // 0x0010(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
