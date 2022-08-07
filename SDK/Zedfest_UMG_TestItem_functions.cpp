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

// Function UMG_TestItem.UMG_TestItem_C.GetColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUMG_TestItem_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_TestItem.UMG_TestItem_C.GetColorAndOpacity_1");

	UUMG_TestItem_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_TestItem.UMG_TestItem_C.OnHighlight
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_TestItem_C::OnHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_TestItem.UMG_TestItem_C.OnHighlight");

	UUMG_TestItem_C_OnHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_TestItem.UMG_TestItem_C.OnUnhighlight
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_TestItem_C::OnUnhighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_TestItem.UMG_TestItem_C.OnUnhighlight");

	UUMG_TestItem_C_OnUnhighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_TestItem.UMG_TestItem_C.ExecuteUbergraph_UMG_TestItem
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TestItem_C::ExecuteUbergraph_UMG_TestItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_TestItem.UMG_TestItem_C.ExecuteUbergraph_UMG_TestItem");

	UUMG_TestItem_C_ExecuteUbergraph_UMG_TestItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
