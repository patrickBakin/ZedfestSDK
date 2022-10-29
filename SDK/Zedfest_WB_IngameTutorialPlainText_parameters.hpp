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

// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.CheckRows
struct UWB_IngameTutorialPlainText_C_CheckRows_Params
{
	struct FS_IngameTutorial*                          In_Row_1;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FS_IngameTutorial*                          In_Row_2;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.ValidateData
struct UWB_IngameTutorialPlainText_C_ValidateData_Params
{
	struct FS_IngameTutorial*                          Row1;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FS_IngameTutorial*                          Row2;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FS_IngameTutorial*                          Row1out;                                                  // (ConstParm, Parm, OutParm)
	struct FS_IngameTutorial*                          Row2out;                                                  // (ConstParm, Parm, OutParm)
};

// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.GetData
struct UWB_IngameTutorialPlainText_C_GetData_Params
{
	struct FS_IngameTutorial*                          Row1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_IngameTutorial*                          Row2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_IngameTutorial                           Row1out;                                                  // (Parm, OutParm)
	struct FS_IngameTutorial                           Row2out;                                                  // (Parm, OutParm)
};

// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.DisplayIngameText
struct UWB_IngameTutorialPlainText_C_DisplayIngameText_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS_IngameTutorial*                          Row1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_IngameTutorial*                          Row2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.Construct
struct UWB_IngameTutorialPlainText_C_Construct_Params
{
};

// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.RemoveText
struct UWB_IngameTutorialPlainText_C_RemoveText_Params
{
};

// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.ExecuteUbergraph_WB_IngameTutorialPlainText
struct UWB_IngameTutorialPlainText_C_ExecuteUbergraph_WB_IngameTutorialPlainText_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
