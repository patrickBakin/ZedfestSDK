#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.SetToolTipInfo
struct UWBP_EmptyUnConnectedPlayer_C_SetToolTipInfo_Params
{
	class UObject**                                    TT_Icon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      TT_Text;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.SetNotificatorInfo
struct UWBP_EmptyUnConnectedPlayer_C_SetNotificatorInfo_Params
{
	struct FS_QuestNotificatorInfo                     S_QuestNotificatorInfo;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.Construct
struct UWBP_EmptyUnConnectedPlayer_C_Construct_Params
{
};

// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_EmptyUnConnectedPlayer_C_BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.EventSetEmptyRowInt
struct UWBP_EmptyUnConnectedPlayer_C_EventSetEmptyRowInt_Params
{
	int*                                               EmptyRowInt;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.ExecuteUbergraph_WBP_EmptyUnConnectedPlayer
struct UWBP_EmptyUnConnectedPlayer_C_ExecuteUbergraph_WBP_EmptyUnConnectedPlayer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
