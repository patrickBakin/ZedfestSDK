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

// Function W_CannotOpen.W_CannotOpen_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_CannotOpen_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CannotOpen.W_CannotOpen_C.GetText_1");

	UW_CannotOpen_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CannotOpen.W_CannotOpen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_CannotOpen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CannotOpen.W_CannotOpen_C.Construct");

	UW_CannotOpen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CannotOpen.W_CannotOpen_C.ExecuteUbergraph_W_CannotOpen
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_CannotOpen_C::ExecuteUbergraph_W_CannotOpen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CannotOpen.W_CannotOpen_C.ExecuteUbergraph_W_CannotOpen");

	UW_CannotOpen_C_ExecuteUbergraph_W_CannotOpen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
