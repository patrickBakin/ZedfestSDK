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

// Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.GetHealth
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPatrolRoute_Head_HP_C::GetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.GetHealth");

	UPatrolRoute_Head_HP_C_GetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPatrolRoute_Head_HP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.Construct");

	UPatrolRoute_Head_HP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.InitiateHeadUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_Base_C**         AI_Ref                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPatrolRoute_Head_HP_C::InitiateHeadUI(class ABP_NPC_Base_C** AI_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.InitiateHeadUI");

	UPatrolRoute_Head_HP_C_InitiateHeadUI_Params params;
	params.AI_Ref = AI_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.ExecuteUbergraph_PatrolRoute_Head_HP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPatrolRoute_Head_HP_C::ExecuteUbergraph_PatrolRoute_Head_HP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.ExecuteUbergraph_PatrolRoute_Head_HP");

	UPatrolRoute_Head_HP_C_ExecuteUbergraph_PatrolRoute_Head_HP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
