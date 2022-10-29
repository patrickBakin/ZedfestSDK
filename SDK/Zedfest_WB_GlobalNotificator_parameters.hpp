#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WB_GlobalNotificator.WB_GlobalNotificator_C.DisplayGlobalNotification
struct UWB_GlobalNotificator_C_DisplayGlobalNotification_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      TypeText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      HeadlineText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow3Line;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow4;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow5;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow6;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow7;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor*                               BackgroundColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               ParticlesColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_GlobalNotificator.WB_GlobalNotificator_C.RemoveGlobalNotification
struct UWB_GlobalNotificator_C_RemoveGlobalNotification_Params
{
};

// Function WB_GlobalNotificator.WB_GlobalNotificator_C.ExecuteUbergraph_WB_GlobalNotificator
struct UWB_GlobalNotificator_C_ExecuteUbergraph_WB_GlobalNotificator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
