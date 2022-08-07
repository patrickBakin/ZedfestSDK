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

// Function WB_ProHUD.WB_ProHUD_C.RemoveObjectiveNotification
struct UWB_ProHUD_C_RemoveObjectiveNotification_Params
{
};

// Function WB_ProHUD.WB_ProHUD_C.DisplayObjectiveNotification
struct UWB_ProHUD_C_DisplayObjectiveNotification_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      TypeText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      HeadlineText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow3Line;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow4;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow5;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow6;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow7;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor*                               BackgroundColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               ParticlesColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_ProHUD.WB_ProHUD_C.RemoveIngameText
struct UWB_ProHUD_C_RemoveIngameText_Params
{
};

// Function WB_ProHUD.WB_ProHUD_C.DisplayIngameText
struct UWB_ProHUD_C_DisplayIngameText_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS_IngameTutorial*                          Row1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_IngameTutorial*                          Row2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_ProHUD.WB_ProHUD_C.CrosshairVisibility
struct UWB_ProHUD_C_CrosshairVisibility_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_ProHUD.WB_ProHUD_C.RemoveGlobalNotification
struct UWB_ProHUD_C_RemoveGlobalNotification_Params
{
};

// Function WB_ProHUD.WB_ProHUD_C.DisplayGlobalNotification
struct UWB_ProHUD_C_DisplayGlobalNotification_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      TypeText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      HeadlineText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow3Line;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow4;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow5;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow6;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow7;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor*                               BackgroundColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               ParticlesColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_ProHUD.WB_ProHUD_C.DisplaySingleRecoil
struct UWB_ProHUD_C_DisplaySingleRecoil_Params
{
};

// Function WB_ProHUD.WB_ProHUD_C.DisplayRecoil
struct UWB_ProHUD_C_DisplayRecoil_Params
{
	bool*                                              bRecoil;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_ProHUD.WB_ProHUD_C.RemoveIngameTutorial
struct UWB_ProHUD_C_RemoveIngameTutorial_Params
{
};

// Function WB_ProHUD.WB_ProHUD_C.DisplayHitIndicator
struct UWB_ProHUD_C_DisplayHitIndicator_Params
{
	float*                                             IndicationTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_ProHUD.WB_ProHUD_C.DisplayCrosshair
struct UWB_ProHUD_C_DisplayCrosshair_Params
{
	TEnumAsByte<E_CrosshairTypes>*                     CrosshairType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCrosshairVisible;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Crosshair_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HitIndicatorTypes>*                  HitIndicatorType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHitIndicatorVisible;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_ProHUD.WB_ProHUD_C.DisplayIngameTutorial
struct UWB_ProHUD_C_DisplayIngameTutorial_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS_IngameTutorial*                          Row1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_IngameTutorial*                          Row2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_ProHUD.WB_ProHUD_C.HideCrosshair
struct UWB_ProHUD_C_HideCrosshair_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_ProHUD.WB_ProHUD_C.ExecuteUbergraph_WB_ProHUD
struct UWB_ProHUD_C_ExecuteUbergraph_WB_ProHUD_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
