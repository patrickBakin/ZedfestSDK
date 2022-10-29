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

// BlueprintGeneratedClass FL_HudManager.FL_HudManager_C
// 0x0000 (0x0028 - 0x0028)
class UFL_HudManager_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FL_HudManager.FL_HudManager_C");
		return ptr;
	}


	void STATIC_Get_Specific_HUD_Manager(class APlayerController** Player_Controller, class UObject** __WorldContext, TScriptInterface<class UI_HUD_Manager_C>* HUD_Manager);
	void STATIC_Get_HUD_Manager(class UObject** __WorldContext, TScriptInterface<class UI_HUD_Manager_C>* HUD_Manager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
