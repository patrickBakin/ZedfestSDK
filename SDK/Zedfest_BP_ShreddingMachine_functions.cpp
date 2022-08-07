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

// Function BP_ShreddingMachine.BP_ShreddingMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShreddingMachine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShreddingMachine.BP_ShreddingMachine_C.ReceiveBeginPlay");

	ABP_ShreddingMachine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShreddingMachine.BP_ShreddingMachine_C.FanTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_ShreddingMachine_C::FanTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShreddingMachine.BP_ShreddingMachine_C.FanTimer");

	ABP_ShreddingMachine_C_FanTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShreddingMachine.BP_ShreddingMachine_C.EnableShreddingMachineEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Finished_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShreddingMachine_C::EnableShreddingMachineEvent(bool* Finished_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShreddingMachine.BP_ShreddingMachine_C.EnableShreddingMachineEvent");

	ABP_ShreddingMachine_C_EnableShreddingMachineEvent_Params params;
	params.Finished_ = Finished_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShreddingMachine.BP_ShreddingMachine_C.SoundVfxEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ShreddingMachine_C::SoundVfxEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShreddingMachine.BP_ShreddingMachine_C.SoundVfxEvent");

	ABP_ShreddingMachine_C_SoundVfxEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShreddingMachine.BP_ShreddingMachine_C.ShredMachineComputerEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Zeds_Shredded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_ShreddingMachine_C::ShredMachineComputerEvent(struct FString* Zeds_Shredded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShreddingMachine.BP_ShreddingMachine_C.ShredMachineComputerEvent");

	ABP_ShreddingMachine_C_ShredMachineComputerEvent_Params params;
	params.Zeds_Shredded = Zeds_Shredded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShreddingMachine.BP_ShreddingMachine_C.BndEvt__ShredderKillBox_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ShreddingMachine_C::BndEvt__ShredderKillBox_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShreddingMachine.BP_ShreddingMachine_C.BndEvt__ShredderKillBox_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ShreddingMachine_C_BndEvt__ShredderKillBox_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShreddingMachine.BP_ShreddingMachine_C.BndEvt__ShredderBlade_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ShreddingMachine_C::BndEvt__ShredderBlade_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShreddingMachine.BP_ShreddingMachine_C.BndEvt__ShredderBlade_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature");

	ABP_ShreddingMachine_C_BndEvt__ShredderBlade_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShreddingMachine.BP_ShreddingMachine_C.BndEvt__TeleportPlayerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ShreddingMachine_C::BndEvt__TeleportPlayerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShreddingMachine.BP_ShreddingMachine_C.BndEvt__TeleportPlayerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ShreddingMachine_C_BndEvt__TeleportPlayerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShreddingMachine.BP_ShreddingMachine_C.ExecuteUbergraph_BP_ShreddingMachine
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShreddingMachine_C::ExecuteUbergraph_BP_ShreddingMachine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShreddingMachine.BP_ShreddingMachine_C.ExecuteUbergraph_BP_ShreddingMachine");

	ABP_ShreddingMachine_C_ExecuteUbergraph_BP_ShreddingMachine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
