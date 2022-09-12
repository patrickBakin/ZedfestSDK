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

// Function InteractionFunctions.InteractionFunctions_C.Get Quality Color
struct UInteractionFunctions_C_Get_Quality_Color_Params
{
	struct FDataTableRowHandle*                        Row_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Dark_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
