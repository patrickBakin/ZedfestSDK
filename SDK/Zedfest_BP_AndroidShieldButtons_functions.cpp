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

// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_AndroidShieldButtons_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.Timeline_0__FinishedFunc");

	ABP_AndroidShieldButtons_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_AndroidShieldButtons_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.Timeline_0__UpdateFunc");

	ABP_AndroidShieldButtons_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.InteractSimple
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldButtons_C::InteractSimple(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, int* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.InteractSimple");

	ABP_AndroidShieldButtons_C_InteractSimple_Params params;
	params.Interactor = Interactor;
	params.Interactable = Interactable;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.InteractDecrement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Decrement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldButtons_C::InteractDecrement(TScriptInterface<class UBPI_GenericInteractor_C>* NewParam, TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1, float* Decrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.InteractDecrement");

	ABP_AndroidShieldButtons_C_InteractDecrement_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;
	params.Decrement = Decrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.InteractIncrement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldButtons_C::InteractIncrement(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, float* Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.InteractIncrement");

	ABP_AndroidShieldButtons_C_InteractIncrement_Params params;
	params.Interactor = Interactor;
	params.Interactable = Interactable;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AndroidShieldButtons_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.ReceiveBeginPlay");

	ABP_AndroidShieldButtons_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_AndroidShieldButtons_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.ReceiveDestroyed");

	ABP_AndroidShieldButtons_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.RemoveAndroidShieldButtons
// (BlueprintCallable, BlueprintEvent)

void ABP_AndroidShieldButtons_C::RemoveAndroidShieldButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.RemoveAndroidShieldButtons");

	ABP_AndroidShieldButtons_C_RemoveAndroidShieldButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.ExecuteUbergraph_BP_AndroidShieldButtons
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldButtons_C::ExecuteUbergraph_BP_AndroidShieldButtons(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.ExecuteUbergraph_BP_AndroidShieldButtons");

	ABP_AndroidShieldButtons_C_ExecuteUbergraph_BP_AndroidShieldButtons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
