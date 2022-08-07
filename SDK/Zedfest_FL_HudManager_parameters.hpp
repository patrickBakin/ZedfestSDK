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

// Function FL_HudManager.FL_HudManager_C.Get Specific HUD Manager
struct UFL_HudManager_C_Get_Specific_HUD_Manager_Params
{
	class APlayerController**                          Player_Controller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UI_HUD_Manager_C>           HUD_Manager;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FL_HudManager.FL_HudManager_C.Get HUD Manager
struct UFL_HudManager_C_Get_HUD_Manager_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UI_HUD_Manager_C>           HUD_Manager;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
