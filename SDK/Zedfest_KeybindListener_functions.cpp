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

// Function KeybindListener.KeybindListener_C.KeyDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UKeybindListener_C::KeyDown(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindListener.KeybindListener_C.KeyDown");

	UKeybindListener_C_KeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;

	return params.ReturnValue;
}


// Function KeybindListener.KeybindListener_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UKeybindListener_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindListener.KeybindListener_C.OnPreviewMouseButtonDown");

	UKeybindListener_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeybindListener.KeybindListener_C.RemoveDuplicateAxisKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UKeybindListener_C::RemoveDuplicateAxisKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindListener.KeybindListener_C.RemoveDuplicateAxisKey");

	UKeybindListener_C_RemoveDuplicateAxisKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindListener.KeybindListener_C.RemoveDuplicateActionKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UKeybindListener_C::RemoveDuplicateActionKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindListener.KeybindListener_C.RemoveDuplicateActionKey");

	UKeybindListener_C_RemoveDuplicateActionKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindListener.KeybindListener_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UKeybindListener_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindListener.KeybindListener_C.OnPreviewKeyDown");

	UKeybindListener_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeybindListener.KeybindListener_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeybindListener_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindListener.KeybindListener_C.Construct");

	UKeybindListener_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindListener.KeybindListener_C.ExecuteUbergraph_KeybindListener
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKeybindListener_C::ExecuteUbergraph_KeybindListener(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindListener.KeybindListener_C.ExecuteUbergraph_KeybindListener");

	UKeybindListener_C_ExecuteUbergraph_KeybindListener_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindListener.KeybindListener_C.OnKeybindWizardCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UKeybindListener_C::OnKeybindWizardCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindListener.KeybindListener_C.OnKeybindWizardCancel__DelegateSignature");

	UKeybindListener_C_OnKeybindWizardCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindListener.KeybindListener_C.ProperKeyPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UKeybindListener_C::ProperKeyPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindListener.KeybindListener_C.ProperKeyPressed__DelegateSignature");

	UKeybindListener_C_ProperKeyPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
