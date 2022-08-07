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

// Function W_BossText.W_BossText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_BossText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BossText.W_BossText_C.Construct");

	UW_BossText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_BossText.W_BossText_C.ExecuteUbergraph_W_BossText
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_BossText_C::ExecuteUbergraph_W_BossText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BossText.W_BossText_C.ExecuteUbergraph_W_BossText");

	UW_BossText_C_ExecuteUbergraph_W_BossText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
