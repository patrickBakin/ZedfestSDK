// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Dumpster.BP_Dumpster_C.IsSwitchLeft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UInterface>* Interface                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bLeft                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Dumpster_C::IsSwitchLeft(TScriptInterface<class UInterface>* Interface, bool* bLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.IsSwitchLeft");

	ABP_Dumpster_C_IsSwitchLeft_Params params;
	params.Interface = Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLeft != nullptr)
		*bLeft = params.bLeft;
}


// Function BP_Dumpster.BP_Dumpster_C.SpawnLevers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Dumpster_C::SpawnLevers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.SpawnLevers");

	ABP_Dumpster_C_SpawnLevers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.BoostSpring__FinishedFunc
// (BlueprintEvent)

void ABP_Dumpster_C::BoostSpring__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.BoostSpring__FinishedFunc");

	ABP_Dumpster_C_BoostSpring__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.BoostSpring__UpdateFunc
// (BlueprintEvent)

void ABP_Dumpster_C::BoostSpring__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.BoostSpring__UpdateFunc");

	ABP_Dumpster_C_BoostSpring__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Dumpster_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.Timeline_0__FinishedFunc");

	ABP_Dumpster_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Dumpster_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.Timeline_0__UpdateFunc");

	ABP_Dumpster_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.InteractDecrement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Decrement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dumpster_C::InteractDecrement(TScriptInterface<class UBPI_GenericInteractor_C>* NewParam, TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1, float* Decrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.InteractDecrement");

	ABP_Dumpster_C_InteractDecrement_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;
	params.Decrement = Decrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.InteractSimple
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dumpster_C::InteractSimple(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, int* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.InteractSimple");

	ABP_Dumpster_C_InteractSimple_Params params;
	params.Interactor = Interactor;
	params.Interactable = Interactable;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.TimeLineMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Dumpster_C::TimeLineMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.TimeLineMulticast");

	ABP_Dumpster_C_TimeLineMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Dumpster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.ReceiveBeginPlay");

	ABP_Dumpster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.InteractIncrement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dumpster_C::InteractIncrement(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, float* Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.InteractIncrement");

	ABP_Dumpster_C_InteractIncrement_Params params;
	params.Interactor = Interactor;
	params.Interactable = Interactable;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.ChangeLeversEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Left_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dumpster_C::ChangeLeversEvent(bool* Left_, float* Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.ChangeLeversEvent");

	ABP_Dumpster_C_ChangeLeversEvent_Params params;
	params.Left_ = Left_;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.EnableHydraulicPressEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Finished_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dumpster_C::EnableHydraulicPressEvent(bool* Finished_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.EnableHydraulicPressEvent");

	ABP_Dumpster_C_EnableHydraulicPressEvent_Params params;
	params.Finished_ = Finished_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.StartHydraulicPress
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Code                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dumpster_C::StartHydraulicPress(int* Code)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.StartHydraulicPress");

	ABP_Dumpster_C_StartHydraulicPress_Params params;
	params.Code = Code;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.HydraulicPressComputerEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Zeds_Shredded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_Dumpster_C::HydraulicPressComputerEvent(struct FString* Zeds_Shredded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.HydraulicPressComputerEvent");

	ABP_Dumpster_C_HydraulicPressComputerEvent_Params params;
	params.Zeds_Shredded = Zeds_Shredded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.SoundVfxEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Dumpster_C::SoundVfxEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.SoundVfxEvent");

	ABP_Dumpster_C_SoundVfxEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.PuzzleCompleted
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Dumpster_C::PuzzleCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.PuzzleCompleted");

	ABP_Dumpster_C_PuzzleCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dumpster.BP_Dumpster_C.ExecuteUbergraph_BP_Dumpster
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dumpster_C::ExecuteUbergraph_BP_Dumpster(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dumpster.BP_Dumpster_C.ExecuteUbergraph_BP_Dumpster");

	ABP_Dumpster_C_ExecuteUbergraph_BP_Dumpster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
