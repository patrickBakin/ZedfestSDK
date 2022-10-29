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

// Function BP_AIStorage.BP_AIStorage_C.AddAIActorToList
struct ABP_AIStorage_C_AddAIActorToList_Params
{
	class AActor**                                     ActorRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIStorage.BP_AIStorage_C.AddActorToList
struct ABP_AIStorage_C_AddActorToList_Params
{
	class AActor**                                     ActorRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIStorage.BP_AIStorage_C.ReceiveBeginPlay
struct ABP_AIStorage_C_ReceiveBeginPlay_Params
{
};

// Function BP_AIStorage.BP_AIStorage_C.AddActor
struct ABP_AIStorage_C_AddActor_Params
{
	class AActor**                                     ActorRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIStorage.BP_AIStorage_C.AddAIActor
struct ABP_AIStorage_C_AddAIActor_Params
{
	class AActor**                                     ActorRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIStorage.BP_AIStorage_C.ExecuteUbergraph_BP_AIStorage
struct ABP_AIStorage_C_ExecuteUbergraph_BP_AIStorage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
