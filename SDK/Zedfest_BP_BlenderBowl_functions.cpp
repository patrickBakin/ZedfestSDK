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

// Function BP_BlenderBowl.BP_BlenderBowl_C.IsSwitchLeft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UInterface>* Interface                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bLeft                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BlenderBowl_C::IsSwitchLeft(TScriptInterface<class UInterface>* Interface, bool* bLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.IsSwitchLeft");

	ABP_BlenderBowl_C_IsSwitchLeft_Params params;
	params.Interface = Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLeft != nullptr)
		*bLeft = params.bLeft;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.SpawnLevers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BlenderBowl_C::SpawnLevers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.SpawnLevers");

	ABP_BlenderBowl_C_SpawnLevers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.BoostSpring__FinishedFunc
// (BlueprintEvent)

void ABP_BlenderBowl_C::BoostSpring__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.BoostSpring__FinishedFunc");

	ABP_BlenderBowl_C_BoostSpring__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.BoostSpring__UpdateFunc
// (BlueprintEvent)

void ABP_BlenderBowl_C::BoostSpring__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.BoostSpring__UpdateFunc");

	ABP_BlenderBowl_C_BoostSpring__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_BlenderBowl_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.Timeline_0__FinishedFunc");

	ABP_BlenderBowl_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_BlenderBowl_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.Timeline_0__UpdateFunc");

	ABP_BlenderBowl_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.InteractDecrement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Decrement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlenderBowl_C::InteractDecrement(TScriptInterface<class UBPI_GenericInteractor_C>* NewParam, TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1, float* Decrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.InteractDecrement");

	ABP_BlenderBowl_C_InteractDecrement_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;
	params.Decrement = Decrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.InteractSimple
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlenderBowl_C::InteractSimple(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, int* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.InteractSimple");

	ABP_BlenderBowl_C_InteractSimple_Params params;
	params.Interactor = Interactor;
	params.Interactable = Interactable;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.TimeLineMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_BlenderBowl_C::TimeLineMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.TimeLineMulticast");

	ABP_BlenderBowl_C_TimeLineMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BlenderBowl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.ReceiveBeginPlay");

	ABP_BlenderBowl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.InteractIncrement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlenderBowl_C::InteractIncrement(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, float* Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.InteractIncrement");

	ABP_BlenderBowl_C_InteractIncrement_Params params;
	params.Interactor = Interactor;
	params.Interactable = Interactable;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.ChangeLeversEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Left_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlenderBowl_C::ChangeLeversEvent(bool* Left_, float* Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.ChangeLeversEvent");

	ABP_BlenderBowl_C_ChangeLeversEvent_Params params;
	params.Left_ = Left_;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.EnableBlenderBowlEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Finished_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlenderBowl_C::EnableBlenderBowlEvent(bool* Finished_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.EnableBlenderBowlEvent");

	ABP_BlenderBowl_C_EnableBlenderBowlEvent_Params params;
	params.Finished_ = Finished_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.StartHydraulicPress
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Code                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlenderBowl_C::StartHydraulicPress(int* Code)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.StartHydraulicPress");

	ABP_BlenderBowl_C_StartHydraulicPress_Params params;
	params.Code = Code;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.BlenderBowlComputerEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Zeds_Whipped                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_BlenderBowl_C::BlenderBowlComputerEvent(struct FString* Zeds_Whipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.BlenderBowlComputerEvent");

	ABP_BlenderBowl_C_BlenderBowlComputerEvent_Params params;
	params.Zeds_Whipped = Zeds_Whipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.SoundVfxEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_BlenderBowl_C::SoundVfxEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.SoundVfxEvent");

	ABP_BlenderBowl_C_SoundVfxEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.PuzzleCompleted
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_BlenderBowl_C::PuzzleCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.PuzzleCompleted");

	ABP_BlenderBowl_C_PuzzleCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.FanTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_BlenderBowl_C::FanTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.FanTimer");

	ABP_BlenderBowl_C_FanTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.BndEvt__ST_MixerSpoon_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BlenderBowl_C::BndEvt__ST_MixerSpoon_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.BndEvt__ST_MixerSpoon_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_BlenderBowl_C_BndEvt__ST_MixerSpoon_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.BndEvt__ST_MixerSpoon1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BlenderBowl_C::BndEvt__ST_MixerSpoon1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.BndEvt__ST_MixerSpoon1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	ABP_BlenderBowl_C_BndEvt__ST_MixerSpoon1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlenderBowl.BP_BlenderBowl_C.BndEvt__KillZedSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BlenderBowl_C::BndEvt__KillZedSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.BndEvt__KillZedSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_BlenderBowl_C_BndEvt__KillZedSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_BlenderBowl.BP_BlenderBowl_C.ExecuteUbergraph_BP_BlenderBowl
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlenderBowl_C::ExecuteUbergraph_BP_BlenderBowl(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlenderBowl.BP_BlenderBowl_C.ExecuteUbergraph_BP_BlenderBowl");

	ABP_BlenderBowl_C_ExecuteUbergraph_BP_BlenderBowl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
