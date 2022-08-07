#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_setting_lib.BP_setting_lib_C.RaiseAudioAgain
struct UBP_setting_lib_C_RaiseAudioAgain_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_setting_lib.BP_setting_lib_C.LowerAudioWhenLeveling
struct UBP_setting_lib_C_LowerAudioWhenLeveling_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_setting_lib.BP_setting_lib_C.ChangeApplicationUIScaleWrapper
struct UBP_setting_lib_C_ChangeApplicationUIScaleWrapper_Params
{
	float*                                             NewScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_setting_lib.BP_setting_lib_C.Load&ApplyAudio
struct UBP_setting_lib_C_Load_ApplyAudio_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_setting_lib.BP_setting_lib_C.LoadSettingsOnStart
struct UBP_setting_lib_C_LoadSettingsOnStart_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_setting_lib.BP_setting_lib_C.Load&ApplyVideo
struct UBP_setting_lib_C_Load_ApplyVideo_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_setting_lib.BP_setting_lib_C.Load&ApplyUISettings
struct UBP_setting_lib_C_Load_ApplyUISettings_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_setting_lib.BP_setting_lib_C.SaveSetting
struct UBP_setting_lib_C_SaveSetting_Params
{
	TEnumAsByte<ESettingType>*                         SettingType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USaveGame**                                  Save;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_setting_lib.BP_setting_lib_C.GetSavedSetting
struct UBP_setting_lib_C_GetSavedSetting_Params
{
	TEnumAsByte<ESettingType>*                         SettingType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	class USaveGame*                                   SaveGame;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
