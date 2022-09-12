<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Grenade_DeluxeBoss_Enraged.BP_Grenade_DeluxeBoss_Enraged_C.IsAllowedTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Grenade_DeluxeBoss_Enraged_C::IsAllowedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_DeluxeBoss_Enraged.BP_Grenade_DeluxeBoss_Enraged_C.IsAllowedTarget");

	ABP_Grenade_DeluxeBoss_Enraged_C_IsAllowedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Grenade_DeluxeBoss_Enraged.BP_Grenade_DeluxeBoss_Enraged_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Grenade_DeluxeBoss_Enraged_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_DeluxeBoss_Enraged.BP_Grenade_DeluxeBoss_Enraged_C.ReceiveBeginPlay");

	ABP_Grenade_DeluxeBoss_Enraged_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_DeluxeBoss_Enraged.BP_Grenade_DeluxeBoss_Enraged_C.ExecuteUbergraph_BP_Grenade_DeluxeBoss_Enraged
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_DeluxeBoss_Enraged_C::ExecuteUbergraph_BP_Grenade_DeluxeBoss_Enraged(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_DeluxeBoss_Enraged.BP_Grenade_DeluxeBoss_Enraged_C.ExecuteUbergraph_BP_Grenade_DeluxeBoss_Enraged");

	ABP_Grenade_DeluxeBoss_Enraged_C_ExecuteUbergraph_BP_Grenade_DeluxeBoss_Enraged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
