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

// Function UI_KillFeedElement.UI_KillFeedElement_C.OpenAnimation
struct UUI_KillFeedElement_C_OpenAnimation_Params
{
	float                                              AnimationLength;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_KillFeedElement.UI_KillFeedElement_C.CloseAnimation
struct UUI_KillFeedElement_C_CloseAnimation_Params
{
	float                                              AnimationLength;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_KillFeedElement.UI_KillFeedElement_C.Construct
struct UUI_KillFeedElement_C_Construct_Params
{
};

// Function UI_KillFeedElement.UI_KillFeedElement_C.Init
struct UUI_KillFeedElement_C_Init_Params
{
	struct FText*                                      KillerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor*                                KillerNameColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      VictimName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor*                                VictimNameColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor*                                IconColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_KillFeedElement.UI_KillFeedElement_C.ExecuteUbergraph_UI_KillFeedElement
struct UUI_KillFeedElement_C_ExecuteUbergraph_UI_KillFeedElement_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
