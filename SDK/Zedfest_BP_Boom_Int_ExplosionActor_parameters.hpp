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

// Function BP_Boom_Int_ExplosionActor.BP_Boom_Int_ExplosionActor_C.GetStuck
struct UBP_Boom_Int_ExplosionActor_C_GetStuck_Params
{
	bool                                               Stuck_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_Int_ExplosionActor.BP_Boom_Int_ExplosionActor_C.SetOwningPawn
struct UBP_Boom_Int_ExplosionActor_C_SetOwningPawn_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_Int_ExplosionActor.BP_Boom_Int_ExplosionActor_C.GetState
struct UBP_Boom_Int_ExplosionActor_C_GetState_Params
{
	bool                                               GetState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
