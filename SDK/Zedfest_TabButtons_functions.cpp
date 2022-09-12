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

// Function TabButtons.TabButtons_C.GetSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTabButtons_C::GetSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabButtons.TabButtons_C.GetSelected");

	UTabButtons_C_GetSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function TabButtons.TabButtons_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabButtons_C::SetSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabButtons.TabButtons_C.SetSelected");

	UTabButtons_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabButtons.TabButtons_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTabButtons_C::BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabButtons.TabButtons_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTabButtons_C_BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabButtons.TabButtons_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTabButtons_C::BndEvt__Button_79_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabButtons.TabButtons_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTabButtons_C_BndEvt__Button_79_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabButtons.TabButtons_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTabButtons_C::BndEvt__Button_79_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabButtons.TabButtons_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTabButtons_C_BndEvt__Button_79_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabButtons.TabButtons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabButtons_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabButtons.TabButtons_C.PreConstruct");

	UTabButtons_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabButtons.TabButtons_C.ExecuteUbergraph_TabButtons
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabButtons_C::ExecuteUbergraph_TabButtons(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabButtons.TabButtons_C.ExecuteUbergraph_TabButtons");

	UTabButtons_C_ExecuteUbergraph_TabButtons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabButtons.TabButtons_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabButtons_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabButtons.TabButtons_C.OnUnhovered__DelegateSignature");

	UTabButtons_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabButtons.TabButtons_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabButtons_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabButtons.TabButtons_C.OnHovered__DelegateSignature");

	UTabButtons_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabButtons.TabButtons_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabButtons_C::OnClicked__DelegateSignature(int* Index, class UClass** WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabButtons.TabButtons_C.OnClicked__DelegateSignature");

	UTabButtons_C_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
