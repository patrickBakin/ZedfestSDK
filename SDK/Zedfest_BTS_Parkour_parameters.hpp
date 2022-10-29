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

// Function BTS_Parkour.BTS_Parkour_C.GetCharacterBaseZ
struct UBTS_Parkour_C_GetCharacterBaseZ_Params
{
	float                                              Z;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_Parkour.BTS_Parkour_C.GetMovementVectors
struct UBTS_Parkour_C_GetMovementVectors_Params
{
	struct FVector                                     NearFront;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FarFront;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_Parkour.BTS_Parkour_C.GetJumpVectors
struct UBTS_Parkour_C_GetJumpVectors_Params
{
	struct FVector                                     LowVector;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HighVector;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NearFront;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FarFront;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_Parkour.BTS_Parkour_C.GetCurrentTarget
struct UBTS_Parkour_C_GetCurrentTarget_Params
{
	struct FVector                                     RetLoc;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_Parkour.BTS_Parkour_C.OnFail_74CFA8FB4DF01A91560AB3824ABAD3F0
struct UBTS_Parkour_C_OnFail_74CFA8FB4DF01A91560AB3824ABAD3F0_Params
{
	TEnumAsByte<EPathFollowingResult>*                 MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_Parkour.BTS_Parkour_C.OnSuccess_74CFA8FB4DF01A91560AB3824ABAD3F0
struct UBTS_Parkour_C_OnSuccess_74CFA8FB4DF01A91560AB3824ABAD3F0_Params
{
	TEnumAsByte<EPathFollowingResult>*                 MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_Parkour.BTS_Parkour_C.OnCheckCrouch
struct UBTS_Parkour_C_OnCheckCrouch_Params
{
};

// Function BTS_Parkour.BTS_Parkour_C.ReceiveTick
struct UBTS_Parkour_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_Parkour.BTS_Parkour_C.OnEndJump
struct UBTS_Parkour_C_OnEndJump_Params
{
};

// Function BTS_Parkour.BTS_Parkour_C.OnEndCrouch
struct UBTS_Parkour_C_OnEndCrouch_Params
{
};

// Function BTS_Parkour.BTS_Parkour_C.OnJump
struct UBTS_Parkour_C_OnJump_Params
{
};

// Function BTS_Parkour.BTS_Parkour_C.OnVaultOrClimb
struct UBTS_Parkour_C_OnVaultOrClimb_Params
{
	struct FVector*                                    FrontHitLoc;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_Parkour.BTS_Parkour_C.QueryFinished
struct UBTS_Parkour_C_QueryFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper**          QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>*                      QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_Parkour.BTS_Parkour_C.OnCheckParkour
struct UBTS_Parkour_C_OnCheckParkour_Params
{
};

// Function BTS_Parkour.BTS_Parkour_C.ReceiveActivation
struct UBTS_Parkour_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_Parkour.BTS_Parkour_C.ExecuteUbergraph_BTS_Parkour
struct UBTS_Parkour_C_ExecuteUbergraph_BTS_Parkour_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
