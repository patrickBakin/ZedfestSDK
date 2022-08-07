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

// Function MP_Find-Button.MP_Find-Button_C.GetGameModeName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMP_Find_Button_C::GetGameModeName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_Find-Button.MP_Find-Button_C.GetGameModeName");

	UMP_Find_Button_C_GetGameModeName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MP_Find-Button.MP_Find-Button_C.GetWaveLengthText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMP_Find_Button_C::GetWaveLengthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_Find-Button.MP_Find-Button_C.GetWaveLengthText");

	UMP_Find_Button_C_GetWaveLengthText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MP_Find-Button.MP_Find-Button_C.GetDifficultyText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMP_Find_Button_C::GetDifficultyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_Find-Button.MP_Find-Button_C.GetDifficultyText");

	UMP_Find_Button_C_GetDifficultyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MP_Find-Button.MP_Find-Button_C.GetLevelName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMP_Find_Button_C::GetLevelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_Find-Button.MP_Find-Button_C.GetLevelName");

	UMP_Find_Button_C_GetLevelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MP_Find-Button.MP_Find-Button_C.GetServerPing
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMP_Find_Button_C::GetServerPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_Find-Button.MP_Find-Button_C.GetServerPing");

	UMP_Find_Button_C_GetServerPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MP_Find-Button.MP_Find-Button_C.GetServerSlotInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMP_Find_Button_C::GetServerSlotInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_Find-Button.MP_Find-Button_C.GetServerSlotInfo");

	UMP_Find_Button_C_GetServerSlotInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MP_Find-Button.MP_Find-Button_C.GetServerName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMP_Find_Button_C::GetServerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_Find-Button.MP_Find-Button_C.GetServerName");

	UMP_Find_Button_C_GetServerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MP_Find-Button.MP_Find-Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMP_Find_Button_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_Find-Button.MP_Find-Button_C.Construct");

	UMP_Find_Button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MP_Find-Button.MP_Find-Button_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMP_Find_Button_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_Find-Button.MP_Find-Button_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature");

	UMP_Find_Button_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MP_Find-Button.MP_Find-Button_C.PasswordJoin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMP_Find_Button_C::PasswordJoin(struct FString* Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_Find-Button.MP_Find-Button_C.PasswordJoin");

	UMP_Find_Button_C_PasswordJoin_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MP_Find-Button.MP_Find-Button_C.ExecuteUbergraph_MP_Find-Button
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMP_Find_Button_C::ExecuteUbergraph_MP_Find_Button(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_Find-Button.MP_Find-Button_C.ExecuteUbergraph_MP_Find-Button");

	UMP_Find_Button_C_ExecuteUbergraph_MP_Find_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
