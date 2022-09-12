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

// UserDefinedStruct NavItemStruct.NavItemStruct
// 0x0028
struct FNavItemStruct
{
	class UWidget*                                     PanelReferance_9_4E5BD57648F39432D5027DB78636F72C;        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FWidgetFix>                          NavigableWidgets_5_6E2081A042DEF7ED68953185A3D58380;      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SelectedWidgetIndex_12_CCC55F6E4DEDC51A992C498EF1CA1D4D;  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UBP_navset_event_handler_C*                  NavItemsEventHandler_16_6D3B9003466776B91BB65098D7031A41; // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
