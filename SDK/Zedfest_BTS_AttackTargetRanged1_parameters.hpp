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

// Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ReceiveDeactivation
struct UBTS_AttackTargetRanged1_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ReceiveActivation
struct UBTS_AttackTargetRanged1_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ReceiveTick
struct UBTS_AttackTargetRanged1_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ExecuteUbergraph_BTS_AttackTargetRanged1
struct UBTS_AttackTargetRanged1_C_ExecuteUbergraph_BTS_AttackTargetRanged1_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
