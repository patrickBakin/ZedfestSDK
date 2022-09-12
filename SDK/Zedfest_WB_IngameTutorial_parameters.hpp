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

// Function WB_IngameTutorial.WB_IngameTutorial_C.CheckRows
struct UWB_IngameTutorial_C_CheckRows_Params
{
	struct FS_IngameTutorial*                          In_Row_1;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FS_IngameTutorial*                          In_Row_2;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.ValidateData
struct UWB_IngameTutorial_C_ValidateData_Params
{
	struct FS_IngameTutorial*                          Row1;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FS_IngameTutorial*                          Row2;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FS_IngameTutorial*                          Row1out;                                                  // (ConstParm, Parm, OutParm)
	struct FS_IngameTutorial*                          Row2out;                                                  // (ConstParm, Parm, OutParm)
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.GetData
struct UWB_IngameTutorial_C_GetData_Params
{
	struct FS_IngameTutorial*                          Row1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_IngameTutorial*                          Row2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_IngameTutorial                           Row1out;                                                  // (Parm, OutParm)
	struct FS_IngameTutorial                           Row2out;                                                  // (Parm, OutParm)
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.DisplayIngameTutorial
struct UWB_IngameTutorial_C_DisplayIngameTutorial_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS_IngameTutorial*                          Row1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_IngameTutorial*                          Row2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.Construct
struct UWB_IngameTutorial_C_Construct_Params
{
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.RemoveTutorial
struct UWB_IngameTutorial_C_RemoveTutorial_Params
{
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.ExecuteUbergraph_WB_IngameTutorial
struct UWB_IngameTutorial_C_ExecuteUbergraph_WB_IngameTutorial_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
