#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_KillFeedWidget.UI_KillFeedWidget_C.PreConstruct
struct UUI_KillFeedWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_KillFeedWidget.UI_KillFeedWidget_C.Construct
struct UUI_KillFeedWidget_C_Construct_Params
{
};

// Function UI_KillFeedWidget.UI_KillFeedWidget_C.Tick
struct UUI_KillFeedWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_KillFeedWidget.UI_KillFeedWidget_C.ShowKill
struct UUI_KillFeedWidget_C_ShowKill_Params
{
	struct FText*                                      KillerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      VictimName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor*                                KillerNameColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor*                                VictimNameColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor*                                IconColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_KillFeedWidget.UI_KillFeedWidget_C.KillFeedTick
struct UUI_KillFeedWidget_C_KillFeedTick_Params
{
};

// Function UI_KillFeedWidget.UI_KillFeedWidget_C.ExecuteUbergraph_UI_KillFeedWidget
struct UUI_KillFeedWidget_C_ExecuteUbergraph_UI_KillFeedWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
