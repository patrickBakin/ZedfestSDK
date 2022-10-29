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

// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Unlock DailyChallenges
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Achievement                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Progression_to_Add             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AchievementsListLibrary_C::STATIC_Unlock_DailyChallenges(struct FText* Achievement, int* Progression_to_Add, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Unlock DailyChallenges");

	UBP_AchievementsListLibrary_C_Unlock_DailyChallenges_Params params;
	params.Achievement = Achievement;
	params.Progression_to_Add = Progression_to_Add;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Initiate DailyChallenges
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_AchievementCustomizationInformation> Achievement_List               (Parm, OutParm, ZeroConstructor)

void UBP_AchievementsListLibrary_C::STATIC_Initiate_DailyChallenges(class UObject** __WorldContext, TArray<struct FS_AchievementCustomizationInformation>* Achievement_List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Initiate DailyChallenges");

	UBP_AchievementsListLibrary_C_Initiate_DailyChallenges_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievement_List != nullptr)
		*Achievement_List = params.Achievement_List;
}


// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Get Date and Time
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Date                           (Parm, OutParm, ZeroConstructor)
// struct FString                 Time                           (Parm, OutParm, ZeroConstructor)

void UBP_AchievementsListLibrary_C::STATIC_Get_Date_and_Time(class UObject** __WorldContext, struct FString* Date, struct FString* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Get Date and Time");

	UBP_AchievementsListLibrary_C_Get_Date_and_Time_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Date != nullptr)
		*Date = params.Date;
	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Hide Achievements List Menu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AchievementsListLibrary_C::STATIC_Hide_Achievements_List_Menu(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Hide Achievements List Menu");

	UBP_AchievementsListLibrary_C_Hide_Achievements_List_Menu_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Unlock Achievement
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Achievement                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Progression_to_Add             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AchievementsListLibrary_C::STATIC_Unlock_Achievement(struct FText* Achievement, int* Progression_to_Add, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Unlock Achievement");

	UBP_AchievementsListLibrary_C_Unlock_Achievement_Params params;
	params.Achievement = Achievement;
	params.Progression_to_Add = Progression_to_Add;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Generate Achievements List
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_AchievementInformation> Achievements                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UPanelWidget**           Achievements_Container         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AchievementsListLibrary_C::STATIC_Generate_Achievements_List(class UPanelWidget** Achievements_Container, class UObject** __WorldContext, TArray<struct FS_AchievementInformation>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Generate Achievements List");

	UBP_AchievementsListLibrary_C_Generate_Achievements_List_Params params;
	params.Achievements_Container = Achievements_Container;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;
}


// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Initiate Achievements
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_AchievementCustomizationInformation> Achievement_List               (Parm, OutParm, ZeroConstructor)

void UBP_AchievementsListLibrary_C::STATIC_Initiate_Achievements(class UObject** __WorldContext, TArray<struct FS_AchievementCustomizationInformation>* Achievement_List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Initiate Achievements");

	UBP_AchievementsListLibrary_C_Initiate_Achievements_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievement_List != nullptr)
		*Achievement_List = params.Achievement_List;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
