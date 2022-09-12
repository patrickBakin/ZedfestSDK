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

// Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.SkillMaxReached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillTree>*      SkillReached                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPInt_CXP_XPController_C::SkillMaxReached(TEnumAsByte<E_SkillTree>* SkillReached)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.SkillMaxReached");

	UBPInt_CXP_XPController_C_SkillMaxReached_Params params;
	params.SkillReached = SkillReached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.AddOnlySkillXp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillTree>*      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPInt_CXP_XPController_C::AddOnlySkillXp(TEnumAsByte<E_SkillTree>* Skill, float* XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.AddOnlySkillXp");

	UBPInt_CXP_XPController_C_AddOnlySkillXp_Params params;
	params.Skill = Skill;
	params.XP = XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.LevelUp
// (Public, BlueprintCallable, BlueprintEvent)

void UBPInt_CXP_XPController_C::LevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.LevelUp");

	UBPInt_CXP_XPController_C_LevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.AddXP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         XpToAdd                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPInt_CXP_XPController_C::AddXP(float* XpToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.AddXP");

	UBPInt_CXP_XPController_C_AddXP_Params params;
	params.XpToAdd = XpToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
