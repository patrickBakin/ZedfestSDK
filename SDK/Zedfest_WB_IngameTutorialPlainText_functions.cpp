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

// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.CheckRows
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_IngameTutorial*      In_Row_1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FS_IngameTutorial*      In_Row_2                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_IngameTutorialPlainText_C::CheckRows(struct FS_IngameTutorial* In_Row_1, struct FS_IngameTutorial* In_Row_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.CheckRows");

	UWB_IngameTutorialPlainText_C_CheckRows_Params params;
	params.In_Row_1 = In_Row_1;
	params.In_Row_2 = In_Row_2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.ValidateData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_IngameTutorial*      Row1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FS_IngameTutorial*      Row2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FS_IngameTutorial*      Row1out                        (ConstParm, Parm, OutParm)
// struct FS_IngameTutorial*      Row2out                        (ConstParm, Parm, OutParm)

void UWB_IngameTutorialPlainText_C::ValidateData(struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2, struct FS_IngameTutorial* Row1out, struct FS_IngameTutorial* Row2out)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.ValidateData");

	UWB_IngameTutorialPlainText_C_ValidateData_Params params;
	params.Row1 = Row1;
	params.Row2 = Row2;
	params.Row1out = Row1out;
	params.Row2out = Row2out;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.GetData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_IngameTutorial*      Row1                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_IngameTutorial*      Row2                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_IngameTutorial       Row1out                        (Parm, OutParm)
// struct FS_IngameTutorial       Row2out                        (Parm, OutParm)

void UWB_IngameTutorialPlainText_C::GetData(struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2, struct FS_IngameTutorial* Row1out, struct FS_IngameTutorial* Row2out)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.GetData");

	UWB_IngameTutorialPlainText_C_GetData_Params params;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Row1out != nullptr)
		*Row1out = params.Row1out;
	if (Row2out != nullptr)
		*Row2out = params.Row2out;
}


// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.DisplayIngameText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS_IngameTutorial*      Row1                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_IngameTutorial*      Row2                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_IngameTutorialPlainText_C::DisplayIngameText(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.DisplayIngameText");

	UWB_IngameTutorialPlainText_C_DisplayIngameText_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_IngameTutorialPlainText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.Construct");

	UWB_IngameTutorialPlainText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.RemoveText
// (BlueprintCallable, BlueprintEvent)

void UWB_IngameTutorialPlainText_C::RemoveText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.RemoveText");

	UWB_IngameTutorialPlainText_C_RemoveText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.ExecuteUbergraph_WB_IngameTutorialPlainText
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_IngameTutorialPlainText_C::ExecuteUbergraph_WB_IngameTutorialPlainText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorialPlainText.WB_IngameTutorialPlainText_C.ExecuteUbergraph_WB_IngameTutorialPlainText");

	UWB_IngameTutorialPlainText_C_ExecuteUbergraph_WB_IngameTutorialPlainText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
