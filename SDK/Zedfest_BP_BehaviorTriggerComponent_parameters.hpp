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

// Function BP_BehaviorTriggerComponent.BP_BehaviorTriggerComponent_C.SendAreaMessage
struct UBP_BehaviorTriggerComponent_C_SendAreaMessage_Params
{
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_MessageTag>*                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorTriggerComponent.BP_BehaviorTriggerComponent_C.SendDirectMessage
struct UBP_BehaviorTriggerComponent_C_SendDirectMessage_Params
{
	class AActor**                                     ReceivingActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_MessageTag>*                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorTriggerComponent.BP_BehaviorTriggerComponent_C.ExecuteUbergraph_BP_BehaviorTriggerComponent
struct UBP_BehaviorTriggerComponent_C_ExecuteUbergraph_BP_BehaviorTriggerComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
