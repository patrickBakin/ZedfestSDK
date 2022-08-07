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

// Function W_BossInformation.W_BossInformation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_BossInformation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BossInformation.W_BossInformation_C.Construct");

	UW_BossInformation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_BossInformation.W_BossInformation_C.ExecuteUbergraph_W_BossInformation
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_BossInformation_C::ExecuteUbergraph_W_BossInformation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BossInformation.W_BossInformation_C.ExecuteUbergraph_W_BossInformation");

	UW_BossInformation_C_ExecuteUbergraph_W_BossInformation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
