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

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.IsSwitchLeft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UInterface>* Interface                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bLeft                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DeluxeButtons_C::IsSwitchLeft(TScriptInterface<class UInterface>* Interface, bool* bLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.IsSwitchLeft");

	ABP_DeluxeButtons_C_IsSwitchLeft_Params params;
	params.Interface = Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLeft != nullptr)
		*bLeft = params.bLeft;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.SpawnLevers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DeluxeButtons_C::SpawnLevers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.SpawnLevers");

	ABP_DeluxeButtons_C_SpawnLevers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_DeluxeButtons_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.Timeline_0__FinishedFunc");

	ABP_DeluxeButtons_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_DeluxeButtons_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.Timeline_0__UpdateFunc");

	ABP_DeluxeButtons_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.InteractSimple
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeluxeButtons_C::InteractSimple(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, int* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.InteractSimple");

	ABP_DeluxeButtons_C_InteractSimple_Params params;
	params.Interactor = Interactor;
	params.Interactable = Interactable;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.InteractDecrement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Decrement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeluxeButtons_C::InteractDecrement(TScriptInterface<class UBPI_GenericInteractor_C>* NewParam, TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1, float* Decrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.InteractDecrement");

	ABP_DeluxeButtons_C_InteractDecrement_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;
	params.Decrement = Decrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DeluxeButtons_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.ReceiveBeginPlay");

	ABP_DeluxeButtons_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_DeluxeButtons_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.ReceiveDestroyed");

	ABP_DeluxeButtons_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.RemoveDeluxeButtons
// (BlueprintCallable, BlueprintEvent)

void ABP_DeluxeButtons_C::RemoveDeluxeButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.RemoveDeluxeButtons");

	ABP_DeluxeButtons_C_RemoveDeluxeButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.InteractIncrement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeluxeButtons_C::InteractIncrement(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, float* Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.InteractIncrement");

	ABP_DeluxeButtons_C_InteractIncrement_Params params;
	params.Interactor = Interactor;
	params.Interactable = Interactable;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.ChangeLeversEvent1
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Left_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeluxeButtons_C::ChangeLeversEvent1(bool* Left_, float* Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.ChangeLeversEvent1");

	ABP_DeluxeButtons_C_ChangeLeversEvent1_Params params;
	params.Left_ = Left_;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.SetCodeText
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Completed_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeluxeButtons_C::SetCodeText(bool* Completed_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.SetCodeText");

	ABP_DeluxeButtons_C_SetCodeText_Params params;
	params.Completed_ = Completed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.SpawnDeluxeLeversEvent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_DeluxeButtons_C::SpawnDeluxeLeversEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.SpawnDeluxeLeversEvent");

	ABP_DeluxeButtons_C_SpawnDeluxeLeversEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeluxeButtons.BP_DeluxeButtons_C.ExecuteUbergraph_BP_DeluxeButtons
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeluxeButtons_C::ExecuteUbergraph_BP_DeluxeButtons(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeluxeButtons.BP_DeluxeButtons_C.ExecuteUbergraph_BP_DeluxeButtons");

	ABP_DeluxeButtons_C_ExecuteUbergraph_BP_DeluxeButtons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
