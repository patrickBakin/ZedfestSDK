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

// Function BP_setting_lib.BP_setting_lib_C.RaiseAudioAgain
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_setting_lib_C::STATIC_RaiseAudioAgain(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_setting_lib.BP_setting_lib_C.RaiseAudioAgain");

	UBP_setting_lib_C_RaiseAudioAgain_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_setting_lib.BP_setting_lib_C.LowerAudioWhenLeveling
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_setting_lib_C::STATIC_LowerAudioWhenLeveling(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_setting_lib.BP_setting_lib_C.LowerAudioWhenLeveling");

	UBP_setting_lib_C_LowerAudioWhenLeveling_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_setting_lib.BP_setting_lib_C.ChangeApplicationUIScaleWrapper
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_setting_lib_C::STATIC_ChangeApplicationUIScaleWrapper(float* NewScale, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_setting_lib.BP_setting_lib_C.ChangeApplicationUIScaleWrapper");

	UBP_setting_lib_C_ChangeApplicationUIScaleWrapper_Params params;
	params.NewScale = NewScale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_setting_lib.BP_setting_lib_C.Load&ApplyAudio
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_setting_lib_C::STATIC_Load_ApplyAudio(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_setting_lib.BP_setting_lib_C.Load&ApplyAudio");

	UBP_setting_lib_C_Load_ApplyAudio_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_setting_lib.BP_setting_lib_C.LoadSettingsOnStart
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_setting_lib_C::STATIC_LoadSettingsOnStart(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_setting_lib.BP_setting_lib_C.LoadSettingsOnStart");

	UBP_setting_lib_C_LoadSettingsOnStart_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_setting_lib.BP_setting_lib_C.Load&ApplyVideo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_setting_lib_C::STATIC_Load_ApplyVideo(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_setting_lib.BP_setting_lib_C.Load&ApplyVideo");

	UBP_setting_lib_C_Load_ApplyVideo_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_setting_lib.BP_setting_lib_C.Load&ApplyUISettings
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_setting_lib_C::STATIC_Load_ApplyUISettings(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_setting_lib.BP_setting_lib_C.Load&ApplyUISettings");

	UBP_setting_lib_C_Load_ApplyUISettings_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_setting_lib.BP_setting_lib_C.SaveSetting
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESettingType>*     SettingType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USaveGame**              Save                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_setting_lib_C::STATIC_SaveSetting(TEnumAsByte<ESettingType>* SettingType, class USaveGame** Save, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_setting_lib.BP_setting_lib_C.SaveSetting");

	UBP_setting_lib_C_SaveSetting_Params params;
	params.SettingType = SettingType;
	params.Save = Save;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_setting_lib.BP_setting_lib_C.GetSavedSetting
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESettingType>*     SettingType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class USaveGame*               SaveGame                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool UBP_setting_lib_C::STATIC_GetSavedSetting(TEnumAsByte<ESettingType>* SettingType, class UObject** __WorldContext, class USaveGame** SaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_setting_lib.BP_setting_lib_C.GetSavedSetting");

	UBP_setting_lib_C_GetSavedSetting_Params params;
	params.SettingType = SettingType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveGame != nullptr)
		*SaveGame = params.SaveGame;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
