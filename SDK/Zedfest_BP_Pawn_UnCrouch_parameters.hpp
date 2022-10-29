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

// Function BP_Pawn_UnCrouch.BP_Pawn_UnCrouch_C.ActionStart
struct UBP_Pawn_UnCrouch_C_ActionStart_Params
{
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn_UnCrouch.BP_Pawn_UnCrouch_C.ExecuteUbergraph_BP_Pawn_UnCrouch
struct UBP_Pawn_UnCrouch_C_ExecuteUbergraph_BP_Pawn_UnCrouch_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
