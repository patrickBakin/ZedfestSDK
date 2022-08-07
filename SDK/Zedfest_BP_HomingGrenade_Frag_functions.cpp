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

// Function BP_HomingGrenade_Frag.BP_HomingGrenade_Frag_C.IsAllowedTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HomingGrenade_Frag_C::IsAllowedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomingGrenade_Frag.BP_HomingGrenade_Frag_C.IsAllowedTarget");

	ABP_HomingGrenade_Frag_C_IsAllowedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HomingGrenade_Frag.BP_HomingGrenade_Frag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HomingGrenade_Frag_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomingGrenade_Frag.BP_HomingGrenade_Frag_C.ReceiveBeginPlay");

	ABP_HomingGrenade_Frag_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomingGrenade_Frag.BP_HomingGrenade_Frag_C.FanTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_HomingGrenade_Frag_C::FanTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomingGrenade_Frag.BP_HomingGrenade_Frag_C.FanTimer");

	ABP_HomingGrenade_Frag_C_FanTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomingGrenade_Frag.BP_HomingGrenade_Frag_C.ExecuteUbergraph_BP_HomingGrenade_Frag
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HomingGrenade_Frag_C::ExecuteUbergraph_BP_HomingGrenade_Frag(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomingGrenade_Frag.BP_HomingGrenade_Frag_C.ExecuteUbergraph_BP_HomingGrenade_Frag");

	ABP_HomingGrenade_Frag_C_ExecuteUbergraph_BP_HomingGrenade_Frag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
