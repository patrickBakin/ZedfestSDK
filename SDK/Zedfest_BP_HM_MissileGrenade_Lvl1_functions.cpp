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

// Function BP_HM_MissileGrenade_Lvl1.BP_HM_MissileGrenade_Lvl1_C.IsAllowedTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HM_MissileGrenade_Lvl1_C::IsAllowedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HM_MissileGrenade_Lvl1.BP_HM_MissileGrenade_Lvl1_C.IsAllowedTarget");

	ABP_HM_MissileGrenade_Lvl1_C_IsAllowedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HM_MissileGrenade_Lvl1.BP_HM_MissileGrenade_Lvl1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HM_MissileGrenade_Lvl1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HM_MissileGrenade_Lvl1.BP_HM_MissileGrenade_Lvl1_C.UserConstructionScript");

	ABP_HM_MissileGrenade_Lvl1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HM_MissileGrenade_Lvl1.BP_HM_MissileGrenade_Lvl1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HM_MissileGrenade_Lvl1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HM_MissileGrenade_Lvl1.BP_HM_MissileGrenade_Lvl1_C.ReceiveBeginPlay");

	ABP_HM_MissileGrenade_Lvl1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HM_MissileGrenade_Lvl1.BP_HM_MissileGrenade_Lvl1_C.ExecuteUbergraph_BP_HM_MissileGrenade_Lvl1
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HM_MissileGrenade_Lvl1_C::ExecuteUbergraph_BP_HM_MissileGrenade_Lvl1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HM_MissileGrenade_Lvl1.BP_HM_MissileGrenade_Lvl1_C.ExecuteUbergraph_BP_HM_MissileGrenade_Lvl1");

	ABP_HM_MissileGrenade_Lvl1_C_ExecuteUbergraph_BP_HM_MissileGrenade_Lvl1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
