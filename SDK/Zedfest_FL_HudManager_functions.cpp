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

// Function FL_HudManager.FL_HudManager_C.Get Specific HUD Manager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      Player_Controller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UI_HUD_Manager_C> HUD_Manager                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFL_HudManager_C::STATIC_Get_Specific_HUD_Manager(class APlayerController** Player_Controller, class UObject** __WorldContext, TScriptInterface<class UI_HUD_Manager_C>* HUD_Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_HudManager.FL_HudManager_C.Get Specific HUD Manager");

	UFL_HudManager_C_Get_Specific_HUD_Manager_Params params;
	params.Player_Controller = Player_Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD_Manager != nullptr)
		*HUD_Manager = params.HUD_Manager;
}


// Function FL_HudManager.FL_HudManager_C.Get HUD Manager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UI_HUD_Manager_C> HUD_Manager                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFL_HudManager_C::STATIC_Get_HUD_Manager(class UObject** __WorldContext, TScriptInterface<class UI_HUD_Manager_C>* HUD_Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_HudManager.FL_HudManager_C.Get HUD Manager");

	UFL_HudManager_C_Get_HUD_Manager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD_Manager != nullptr)
		*HUD_Manager = params.HUD_Manager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
