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

// Function BP_navset_event_handler.BP_navset_event_handler_C.OnBackClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_navset_event_handler_C::OnBackClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navset_event_handler.BP_navset_event_handler_C.OnBackClick__DelegateSignature");

	UBP_navset_event_handler_C_OnBackClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navset_event_handler.BP_navset_event_handler_C.OnEscapeCall__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* Behaviour                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navset_event_handler_C::OnEscapeCall__DelegateSignature(TEnumAsByte<EEscapeBehaviour>* Behaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navset_event_handler.BP_navset_event_handler_C.OnEscapeCall__DelegateSignature");

	UBP_navset_event_handler_C_OnEscapeCall__DelegateSignature_Params params;
	params.Behaviour = Behaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navset_event_handler_C::OnMouseUnhover__DelegateSignature(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseUnhover__DelegateSignature");

	UBP_navset_event_handler_C_OnMouseUnhover__DelegateSignature_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navset_event_handler_C::OnMouseHover__DelegateSignature(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseHover__DelegateSignature");

	UBP_navset_event_handler_C_OnMouseHover__DelegateSignature_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navset_event_handler.BP_navset_event_handler_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_navset_event_handler_C::OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navset_event_handler.BP_navset_event_handler_C.OnClick__DelegateSignature");

	UBP_navset_event_handler_C_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
