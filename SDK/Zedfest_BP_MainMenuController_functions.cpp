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

// Function BP_MainMenuController.BP_MainMenuController_C.LevelUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MainMenuController_C::LevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuController.BP_MainMenuController_C.LevelUp");

	ABP_MainMenuController_C_LevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuController.BP_MainMenuController_C.AddOnlySkillXp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillTree>*      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuController_C::AddOnlySkillXp(TEnumAsByte<E_SkillTree>* Skill, float* XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuController.BP_MainMenuController_C.AddOnlySkillXp");

	ABP_MainMenuController_C_AddOnlySkillXp_Params params;
	params.Skill = Skill;
	params.XP = XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuController.BP_MainMenuController_C.SkillMaxReached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillTree>*      SkillReached                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuController_C::SkillMaxReached(TEnumAsByte<E_SkillTree>* SkillReached)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuController.BP_MainMenuController_C.SkillMaxReached");

	ABP_MainMenuController_C_SkillMaxReached_Params params;
	params.SkillReached = SkillReached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuController.BP_MainMenuController_C.AddXP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         XpToAdd                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuController_C::AddXP(float* XpToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuController.BP_MainMenuController_C.AddXP");

	ABP_MainMenuController_C_AddXP_Params params;
	params.XpToAdd = XpToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuController.BP_MainMenuController_C.ExecuteUbergraph_BP_MainMenuController
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuController_C::ExecuteUbergraph_BP_MainMenuController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuController.BP_MainMenuController_C.ExecuteUbergraph_BP_MainMenuController");

	ABP_MainMenuController_C_ExecuteUbergraph_BP_MainMenuController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
