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

// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.SaveDailyChallenges
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_AchievementInformation> Achievements                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AchievementSavingLibrary_C::STATIC_SaveDailyChallenges(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.SaveDailyChallenges");

	UBP_AchievementSavingLibrary_C_SaveDailyChallenges_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;
}


// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadDailyChallenges1
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_AchievementInformation> Achievements                   (Parm, OutParm, ZeroConstructor)

void UBP_AchievementSavingLibrary_C::STATIC_LoadDailyChallenges1(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadDailyChallenges1");

	UBP_AchievementSavingLibrary_C_LoadDailyChallenges1_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;
}


// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadDailyChallenges
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_AchievementInformation> Achievements                   (Parm, OutParm, ZeroConstructor)

void UBP_AchievementSavingLibrary_C::STATIC_LoadDailyChallenges(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadDailyChallenges");

	UBP_AchievementSavingLibrary_C_LoadDailyChallenges_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;
}


// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadAchievements1
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_AchievementInformation> Achievements                   (Parm, OutParm, ZeroConstructor)

void UBP_AchievementSavingLibrary_C::STATIC_LoadAchievements1(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadAchievements1");

	UBP_AchievementSavingLibrary_C_LoadAchievements1_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;
}


// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.GetAchievementSaveObject
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_AchievementsSave_C*  Achievements_Save_Object       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AchievementSavingLibrary_C::STATIC_GetAchievementSaveObject(class UObject** __WorldContext, class UBP_AchievementsSave_C** Achievements_Save_Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.GetAchievementSaveObject");

	UBP_AchievementSavingLibrary_C_GetAchievementSaveObject_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements_Save_Object != nullptr)
		*Achievements_Save_Object = params.Achievements_Save_Object;
}


// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadAchievements
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_AchievementInformation> Achievements                   (Parm, OutParm, ZeroConstructor)

void UBP_AchievementSavingLibrary_C::STATIC_LoadAchievements(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadAchievements");

	UBP_AchievementSavingLibrary_C_LoadAchievements_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;
}


// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.SaveAchievements
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_AchievementInformation> Achievements                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AchievementSavingLibrary_C::STATIC_SaveAchievements(class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.SaveAchievements");

	UBP_AchievementSavingLibrary_C_SaveAchievements_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
