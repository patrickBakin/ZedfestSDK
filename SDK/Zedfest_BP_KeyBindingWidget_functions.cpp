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

// Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.Set Action Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_KeyBindingWidget_C::Set_Action_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.Set Action Text");

	UBP_KeyBindingWidget_C_Set_Action_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.Set Key Bind Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_KeyBindingWidget_C::Set_Key_Bind_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.Set Key Bind Text");

	UBP_KeyBindingWidget_C_Set_Key_Bind_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_KeyBindingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.Construct");

	UBP_KeyBindingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.ExecuteUbergraph_BP_KeyBindingWidget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyBindingWidget_C::ExecuteUbergraph_BP_KeyBindingWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.ExecuteUbergraph_BP_KeyBindingWidget");

	UBP_KeyBindingWidget_C_ExecuteUbergraph_BP_KeyBindingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
