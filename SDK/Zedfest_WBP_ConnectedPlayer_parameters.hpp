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

// Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.SetPlayerNameText
struct UWBP_ConnectedPlayer_C_SetPlayerNameText_Params
{
};

// Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.SetToolTipInfo
struct UWBP_ConnectedPlayer_C_SetToolTipInfo_Params
{
	class UObject**                                    TT_Icon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      TT_Text;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.SetNotificatorInfo
struct UWBP_ConnectedPlayer_C_SetNotificatorInfo_Params
{
	struct FS_QuestNotificatorInfo                     S_QuestNotificatorInfo;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.Construct
struct UWBP_ConnectedPlayer_C_Construct_Params
{
};

// Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.ExecuteUbergraph_WBP_ConnectedPlayer
struct UWBP_ConnectedPlayer_C_ExecuteUbergraph_WBP_ConnectedPlayer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
