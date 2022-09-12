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
//Functions
//---------------------------------------------------------------------------

// Function BP_AIC.BP_AIC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AIC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIC.BP_AIC_C.ReceiveBeginPlay");

	ABP_AIC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIC.BP_AIC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AIC_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIC.BP_AIC_C.ReceiveTick");

	ABP_AIC_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIC.BP_AIC_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus*            Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_AIC_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor** Actor, struct FAIStimulus* Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIC.BP_AIC_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature");

	ABP_AIC_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIC.BP_AIC_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn**                  PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AIC_C::ReceivePossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIC.BP_AIC_C.ReceivePossess");

	ABP_AIC_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIC.BP_AIC_C.ReceiveUnPossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn**                  UnpossessedPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AIC_C::ReceiveUnPossess(class APawn** UnpossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIC.BP_AIC_C.ReceiveUnPossess");

	ABP_AIC_C_ReceiveUnPossess_Params params;
	params.UnpossessedPawn = UnpossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIC.BP_AIC_C.ExecuteUbergraph_BP_AIC
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AIC_C::ExecuteUbergraph_BP_AIC(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIC.BP_AIC_C.ExecuteUbergraph_BP_AIC");

	ABP_AIC_C_ExecuteUbergraph_BP_AIC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
