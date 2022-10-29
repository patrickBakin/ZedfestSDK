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

// Function W_TrapsDeployed.W_TrapsDeployed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_TrapsDeployed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TrapsDeployed.W_TrapsDeployed_C.Construct");

	UW_TrapsDeployed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TrapsDeployed.W_TrapsDeployed_C.ExecuteUbergraph_W_TrapsDeployed
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_TrapsDeployed_C::ExecuteUbergraph_W_TrapsDeployed(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TrapsDeployed.W_TrapsDeployed_C.ExecuteUbergraph_W_TrapsDeployed");

	UW_TrapsDeployed_C_ExecuteUbergraph_W_TrapsDeployed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
