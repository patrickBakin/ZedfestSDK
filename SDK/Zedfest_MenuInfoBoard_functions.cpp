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

// Function MenuInfoBoard.MenuInfoBoard_C.Set Pickup Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UMenuInfoBoard_C::Set_Pickup_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInfoBoard.MenuInfoBoard_C.Set Pickup Visibility");

	UMenuInfoBoard_C_Set_Pickup_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MenuInfoBoard.MenuInfoBoard_C.ExecuteUbergraph_MenuInfoBoard
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuInfoBoard_C::ExecuteUbergraph_MenuInfoBoard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInfoBoard.MenuInfoBoard_C.ExecuteUbergraph_MenuInfoBoard");

	UMenuInfoBoard_C_ExecuteUbergraph_MenuInfoBoard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
