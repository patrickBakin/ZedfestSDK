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

// Function ButtonBase.ButtonBase_C.Get Button Base Enabled 
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UButtonBase_C::Get_Button_Base_Enabled_()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonBase.ButtonBase_C.Get Button Base Enabled ");

	UButtonBase_C_Get_Button_Base_Enabled__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ButtonBase.ButtonBase_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UButtonBase_C::BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonBase.ButtonBase_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UButtonBase_C_BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonBase.ButtonBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButtonBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonBase.ButtonBase_C.Construct");

	UButtonBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonBase.ButtonBase_C.ExecuteUbergraph_ButtonBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonBase_C::ExecuteUbergraph_ButtonBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonBase.ButtonBase_C.ExecuteUbergraph_ButtonBase");

	UButtonBase_C_ExecuteUbergraph_ButtonBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
