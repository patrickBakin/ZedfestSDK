#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_setting_lib.BP_setting_lib_C
// 0x0000 (0x0028 - 0x0028)
class UBP_setting_lib_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_setting_lib.BP_setting_lib_C");
		return ptr;
	}


	void STATIC_RaiseAudioAgain(class UObject** __WorldContext);
	void STATIC_LowerAudioWhenLeveling(class UObject** __WorldContext);
	void STATIC_ChangeApplicationUIScaleWrapper(float* NewScale, class UObject** __WorldContext);
	void STATIC_Load_ApplyAudio(class UObject** __WorldContext);
	void STATIC_LoadSettingsOnStart(class UObject** __WorldContext);
	void STATIC_Load_ApplyVideo(class UObject** __WorldContext);
	void STATIC_Load_ApplyUISettings(class UObject** __WorldContext);
	bool STATIC_SaveSetting(TEnumAsByte<ESettingType>* SettingType, class USaveGame** Save, class UObject** __WorldContext);
	bool STATIC_GetSavedSetting(TEnumAsByte<ESettingType>* SettingType, class UObject** __WorldContext, class USaveGame** SaveGame);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
