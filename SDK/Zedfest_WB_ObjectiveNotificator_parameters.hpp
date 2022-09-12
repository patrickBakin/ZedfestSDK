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

// Function WB_ObjectiveNotificator.WB_ObjectiveNotificator_C.DisplayObjectiveNotification
struct UWB_ObjectiveNotificator_C_DisplayObjectiveNotification_Params
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

// Function WB_ObjectiveNotificator.WB_ObjectiveNotificator_C.RemoveObjectiveNotification
struct UWB_ObjectiveNotificator_C_RemoveObjectiveNotification_Params
{
};

// Function WB_ObjectiveNotificator.WB_ObjectiveNotificator_C.ExecuteUbergraph_WB_ObjectiveNotificator
struct UWB_ObjectiveNotificator_C_ExecuteUbergraph_WB_ObjectiveNotificator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
