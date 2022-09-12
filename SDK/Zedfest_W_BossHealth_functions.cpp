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

// Function W_BossHealth.W_BossHealth_C.Get_Boss_ShieldText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_BossHealth_C::Get_Boss_ShieldText()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BossHealth.W_BossHealth_C.Get_Boss_ShieldText");

	UW_BossHealth_C_Get_Boss_ShieldText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_BossHealth.W_BossHealth_C.Get_BossNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_BossHealth_C::Get_BossNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BossHealth.W_BossHealth_C.Get_BossNameText");

	UW_BossHealth_C_Get_BossNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_BossHealth.W_BossHealth_C.Get_Boss_HealthText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_BossHealth_C::Get_Boss_HealthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BossHealth.W_BossHealth_C.Get_Boss_HealthText");

	UW_BossHealth_C_Get_Boss_HealthText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_BossHealth.W_BossHealth_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_BossHealth_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BossHealth.W_BossHealth_C.Construct");

	UW_BossHealth_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_BossHealth.W_BossHealth_C.ExecuteUbergraph_W_BossHealth
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_BossHealth_C::ExecuteUbergraph_W_BossHealth(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BossHealth.W_BossHealth_C.ExecuteUbergraph_W_BossHealth");

	UW_BossHealth_C_ExecuteUbergraph_W_BossHealth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
