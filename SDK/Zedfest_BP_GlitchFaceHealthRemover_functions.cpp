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

// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.InteractIncrement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GlitchFaceHealthRemover_C::InteractIncrement(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, float* Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.InteractIncrement");

	ABP_GlitchFaceHealthRemover_C_InteractIncrement_Params params;
	params.Interactor = Interactor;
	params.Interactable = Interactable;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.InteractDecrement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Decrement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GlitchFaceHealthRemover_C::InteractDecrement(TScriptInterface<class UBPI_GenericInteractor_C>* NewParam, TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1, float* Decrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.InteractDecrement");

	ABP_GlitchFaceHealthRemover_C_InteractDecrement_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;
	params.Decrement = Decrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.InteractSimple
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPI_GenericInteractable_C>* Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GlitchFaceHealthRemover_C::InteractSimple(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, int* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.InteractSimple");

	ABP_GlitchFaceHealthRemover_C_InteractSimple_Params params;
	params.Interactor = Interactor;
	params.Interactable = Interactable;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GlitchFaceHealthRemover_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ReceiveBeginPlay");

	ABP_GlitchFaceHealthRemover_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_GlitchFaceHealthRemover_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ReceiveDestroyed");

	ABP_GlitchFaceHealthRemover_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GlitchFaceHealthRemover_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ReceiveAnyDamage");

	ABP_GlitchFaceHealthRemover_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.SetGlitchFaceHealthRemoveHP
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GlitchFaceHealthRemover_C::SetGlitchFaceHealthRemoveHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.SetGlitchFaceHealthRemoveHP");

	ABP_GlitchFaceHealthRemover_C_SetGlitchFaceHealthRemoveHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.CustomEvent_1
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GlitchFaceHealthRemover_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.CustomEvent_1");

	ABP_GlitchFaceHealthRemover_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ExecuteUbergraph_BP_GlitchFaceHealthRemover
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GlitchFaceHealthRemover_C::ExecuteUbergraph_BP_GlitchFaceHealthRemover(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ExecuteUbergraph_BP_GlitchFaceHealthRemover");

	ABP_GlitchFaceHealthRemover_C_ExecuteUbergraph_BP_GlitchFaceHealthRemover_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
