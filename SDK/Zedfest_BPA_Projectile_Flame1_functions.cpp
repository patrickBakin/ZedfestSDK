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

// Function BPA_Projectile_Flame1.BPA_Projectile_Flame1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPA_Projectile_Flame1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Projectile_Flame1.BPA_Projectile_Flame1_C.ReceiveBeginPlay");

	ABPA_Projectile_Flame1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_Projectile_Flame1.BPA_Projectile_Flame1_C.AskSRVtoApplyDmg
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABPA_Projectile_Flame1_C::AskSRVtoApplyDmg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Projectile_Flame1.BPA_Projectile_Flame1_C.AskSRVtoApplyDmg");

	ABPA_Projectile_Flame1_C_AskSRVtoApplyDmg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_Projectile_Flame1.BPA_Projectile_Flame1_C.ExecuteUbergraph_BPA_Projectile_Flame1
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_Projectile_Flame1_C::ExecuteUbergraph_BPA_Projectile_Flame1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Projectile_Flame1.BPA_Projectile_Flame1_C.ExecuteUbergraph_BPA_Projectile_Flame1");

	ABPA_Projectile_Flame1_C_ExecuteUbergraph_BPA_Projectile_Flame1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
