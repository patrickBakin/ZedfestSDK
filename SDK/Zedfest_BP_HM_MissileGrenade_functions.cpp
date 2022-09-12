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

// Function BP_HM_MissileGrenade.BP_HM_MissileGrenade_C.IsAllowedTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HM_MissileGrenade_C::IsAllowedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HM_MissileGrenade.BP_HM_MissileGrenade_C.IsAllowedTarget");

	ABP_HM_MissileGrenade_C_IsAllowedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HM_MissileGrenade.BP_HM_MissileGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HM_MissileGrenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HM_MissileGrenade.BP_HM_MissileGrenade_C.ReceiveBeginPlay");

	ABP_HM_MissileGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HM_MissileGrenade.BP_HM_MissileGrenade_C.ExecuteUbergraph_BP_HM_MissileGrenade
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HM_MissileGrenade_C::ExecuteUbergraph_BP_HM_MissileGrenade(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HM_MissileGrenade.BP_HM_MissileGrenade_C.ExecuteUbergraph_BP_HM_MissileGrenade");

	ABP_HM_MissileGrenade_C_ExecuteUbergraph_BP_HM_MissileGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
