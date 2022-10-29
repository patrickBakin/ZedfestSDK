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

// Function BP_Grenade_DeluxeBoss_Normal.BP_Grenade_DeluxeBoss_Normal_C.IsAllowedTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Grenade_DeluxeBoss_Normal_C::IsAllowedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_DeluxeBoss_Normal.BP_Grenade_DeluxeBoss_Normal_C.IsAllowedTarget");

	ABP_Grenade_DeluxeBoss_Normal_C_IsAllowedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Grenade_DeluxeBoss_Normal.BP_Grenade_DeluxeBoss_Normal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Grenade_DeluxeBoss_Normal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_DeluxeBoss_Normal.BP_Grenade_DeluxeBoss_Normal_C.ReceiveBeginPlay");

	ABP_Grenade_DeluxeBoss_Normal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_DeluxeBoss_Normal.BP_Grenade_DeluxeBoss_Normal_C.ExecuteUbergraph_BP_Grenade_DeluxeBoss_Normal
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_DeluxeBoss_Normal_C::ExecuteUbergraph_BP_Grenade_DeluxeBoss_Normal(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_DeluxeBoss_Normal.BP_Grenade_DeluxeBoss_Normal_C.ExecuteUbergraph_BP_Grenade_DeluxeBoss_Normal");

	ABP_Grenade_DeluxeBoss_Normal_C_ExecuteUbergraph_BP_Grenade_DeluxeBoss_Normal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
