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

// Function C_CXP_Component.C_CXP_Component_C.UpdateSKill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillTree>*      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Sillxp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UC_CXP_Component_C::UpdateSKill(TEnumAsByte<E_SkillTree>* Skill, float* Sillxp)
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.UpdateSKill");

	UC_CXP_Component_C_UpdateSKill_Params params;
	params.Skill = Skill;
	params.Sillxp = Sillxp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.OnFailure_DE5D39954BFFD7AE971FEA95B4DAB531
// (BlueprintCallable, BlueprintEvent)

void UC_CXP_Component_C::OnFailure_DE5D39954BFFD7AE971FEA95B4DAB531()
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.OnFailure_DE5D39954BFFD7AE971FEA95B4DAB531");

	UC_CXP_Component_C_OnFailure_DE5D39954BFFD7AE971FEA95B4DAB531_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.OnSuccess_DE5D39954BFFD7AE971FEA95B4DAB531
// (BlueprintCallable, BlueprintEvent)

void UC_CXP_Component_C::OnSuccess_DE5D39954BFFD7AE971FEA95B4DAB531()
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.OnSuccess_DE5D39954BFFD7AE971FEA95B4DAB531");

	UC_CXP_Component_C_OnSuccess_DE5D39954BFFD7AE971FEA95B4DAB531_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.OnFailure_6BC9A43C4089481900C640A108A5FEF0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UC_CXP_Component_C::OnFailure_6BC9A43C4089481900C640A108A5FEF0(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.OnFailure_6BC9A43C4089481900C640A108A5FEF0");

	UC_CXP_Component_C_OnFailure_6BC9A43C4089481900C640A108A5FEF0_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.OnSuccess_6BC9A43C4089481900C640A108A5FEF0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UC_CXP_Component_C::OnSuccess_6BC9A43C4089481900C640A108A5FEF0(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.OnSuccess_6BC9A43C4089481900C640A108A5FEF0");

	UC_CXP_Component_C_OnSuccess_6BC9A43C4089481900C640A108A5FEF0_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.OnFailure_CA10BDD94F37C081B2B7D1A8B0C27A23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UC_CXP_Component_C::OnFailure_CA10BDD94F37C081B2B7D1A8B0C27A23(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.OnFailure_CA10BDD94F37C081B2B7D1A8B0C27A23");

	UC_CXP_Component_C_OnFailure_CA10BDD94F37C081B2B7D1A8B0C27A23_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.OnSuccess_CA10BDD94F37C081B2B7D1A8B0C27A23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UC_CXP_Component_C::OnSuccess_CA10BDD94F37C081B2B7D1A8B0C27A23(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.OnSuccess_CA10BDD94F37C081B2B7D1A8B0C27A23");

	UC_CXP_Component_C_OnSuccess_CA10BDD94F37C081B2B7D1A8B0C27A23_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.OnFailure_1F9C95E046BA49A56946DD9F5D872558
// (BlueprintCallable, BlueprintEvent)

void UC_CXP_Component_C::OnFailure_1F9C95E046BA49A56946DD9F5D872558()
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.OnFailure_1F9C95E046BA49A56946DD9F5D872558");

	UC_CXP_Component_C_OnFailure_1F9C95E046BA49A56946DD9F5D872558_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.OnSuccess_1F9C95E046BA49A56946DD9F5D872558
// (BlueprintCallable, BlueprintEvent)

void UC_CXP_Component_C::OnSuccess_1F9C95E046BA49A56946DD9F5D872558()
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.OnSuccess_1F9C95E046BA49A56946DD9F5D872558");

	UC_CXP_Component_C_OnSuccess_1F9C95E046BA49A56946DD9F5D872558_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Base_HordeController_C** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UC_CXP_Component_C::Initialize(class ABP_Base_HordeController_C** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.Initialize");

	UC_CXP_Component_C_Initialize_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.AddXP
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         XpToAdd                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UC_CXP_Component_C::AddXP(float* XpToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.AddXP");

	UC_CXP_Component_C_AddXP_Params params;
	params.XpToAdd = XpToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.UpdateHud
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UC_CXP_Component_C::UpdateHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.UpdateHud");

	UC_CXP_Component_C_UpdateHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.CheckForLevelUp
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void UC_CXP_Component_C::CheckForLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.CheckForLevelUp");

	UC_CXP_Component_C_CheckForLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.LevelupEvents
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void UC_CXP_Component_C::LevelupEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.LevelupEvents");

	UC_CXP_Component_C_LevelupEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UC_CXP_Component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.ReceiveBeginPlay");

	UC_CXP_Component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C_CXP_Component.C_CXP_Component_C.ExecuteUbergraph_C_CXP_Component
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UC_CXP_Component_C::ExecuteUbergraph_C_CXP_Component(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function C_CXP_Component.C_CXP_Component_C.ExecuteUbergraph_C_CXP_Component");

	UC_CXP_Component_C_ExecuteUbergraph_C_CXP_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
