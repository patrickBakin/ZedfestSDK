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

// Function HeadImageUI.HeadImageUI_C.GetArmor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHeadImageUI_C::GetArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadImageUI.HeadImageUI_C.GetArmor");

	UHeadImageUI_C_GetArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadImageUI.HeadImageUI_C.GetHealth
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHeadImageUI_C::GetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadImageUI.HeadImageUI_C.GetHealth");

	UHeadImageUI_C_GetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadImageUI.HeadImageUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeadImageUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadImageUI.HeadImageUI_C.Construct");

	UHeadImageUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadImageUI.HeadImageUI_C.InitiateHeadUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Horde_PlayerState_C** PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeadImageUI_C::InitiateHeadUI(class ABP_Horde_PlayerState_C** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadImageUI.HeadImageUI_C.InitiateHeadUI");

	UHeadImageUI_C_InitiateHeadUI_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadImageUI.HeadImageUI_C.ExecuteUbergraph_HeadImageUI
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeadImageUI_C::ExecuteUbergraph_HeadImageUI(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadImageUI.HeadImageUI_C.ExecuteUbergraph_HeadImageUI");

	UHeadImageUI_C_ExecuteUbergraph_HeadImageUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
