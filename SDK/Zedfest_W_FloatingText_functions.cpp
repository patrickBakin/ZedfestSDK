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

// Function W_FloatingText.W_FloatingText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_FloatingText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FloatingText.W_FloatingText_C.Construct");

	UW_FloatingText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_FloatingText.W_FloatingText_C.ExecuteUbergraph_W_FloatingText
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_FloatingText_C::ExecuteUbergraph_W_FloatingText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FloatingText.W_FloatingText_C.ExecuteUbergraph_W_FloatingText");

	UW_FloatingText_C_ExecuteUbergraph_W_FloatingText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
