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

// Function SpashLevelWidget.SpashLevelWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USpashLevelWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpashLevelWidget.SpashLevelWidget_C.Construct");

	USpashLevelWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpashLevelWidget.SpashLevelWidget_C.ExecuteUbergraph_SpashLevelWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpashLevelWidget_C::ExecuteUbergraph_SpashLevelWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpashLevelWidget.SpashLevelWidget_C.ExecuteUbergraph_SpashLevelWidget");

	USpashLevelWidget_C_ExecuteUbergraph_SpashLevelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
