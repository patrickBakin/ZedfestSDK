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

// Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.SetPlayerNameText
struct UWBP_EndGameConnPlayer_C_SetPlayerNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.SetToolTipInfo
struct UWBP_EndGameConnPlayer_C_SetToolTipInfo_Params
{
	class UObject**                                    TT_Icon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      TT_Text;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.SetNotificatorInfo
struct UWBP_EndGameConnPlayer_C_SetNotificatorInfo_Params
{
	struct FS_QuestNotificatorInfo                     S_QuestNotificatorInfo;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.Construct
struct UWBP_EndGameConnPlayer_C_Construct_Params
{
};

// Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.ExecuteUbergraph_WBP_EndGameConnPlayer
struct UWBP_EndGameConnPlayer_C_ExecuteUbergraph_WBP_EndGameConnPlayer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
