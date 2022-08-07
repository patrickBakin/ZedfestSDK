// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BehaviorTriggerComponent.BP_BehaviorTriggerComponent_C.SendAreaMessage
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_MessageTag>*  Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorTriggerComponent_C::SendAreaMessage(class AActor** Instigator, struct FVector* Location, float* Radius, TEnumAsByte<Enum_MessageTag>* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorTriggerComponent.BP_BehaviorTriggerComponent_C.SendAreaMessage");

	UBP_BehaviorTriggerComponent_C_SendAreaMessage_Params params;
	params.Instigator = Instigator;
	params.Location = Location;
	params.Radius = Radius;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorTriggerComponent.BP_BehaviorTriggerComponent_C.SendDirectMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ReceivingActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_MessageTag>*  Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorTriggerComponent_C::SendDirectMessage(class AActor** ReceivingActor, TEnumAsByte<Enum_MessageTag>* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorTriggerComponent.BP_BehaviorTriggerComponent_C.SendDirectMessage");

	UBP_BehaviorTriggerComponent_C_SendDirectMessage_Params params;
	params.ReceivingActor = ReceivingActor;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorTriggerComponent.BP_BehaviorTriggerComponent_C.ExecuteUbergraph_BP_BehaviorTriggerComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorTriggerComponent_C::ExecuteUbergraph_BP_BehaviorTriggerComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorTriggerComponent.BP_BehaviorTriggerComponent_C.ExecuteUbergraph_BP_BehaviorTriggerComponent");

	UBP_BehaviorTriggerComponent_C_ExecuteUbergraph_BP_BehaviorTriggerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
