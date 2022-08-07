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

// Function WB_CrosshairBase.WB_CrosshairBase_C.AddCrosshair
struct UWB_CrosshairBase_C_AddCrosshair_Params
{
	TEnumAsByte<E_CrosshairTypes>*                     CrosshairType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HitIndicatorTypes>*                  HitIndicatorType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.CrosshairHit
struct UWB_CrosshairBase_C_CrosshairHit_Params
{
	float*                                             IndicationTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.UpdateCrosshair
struct UWB_CrosshairBase_C_UpdateCrosshair_Params
{
	bool*                                              bCrosshairVisible;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHitIndicatorVisible;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Crosshair_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayCrosshair
struct UWB_CrosshairBase_C_DisplayCrosshair_Params
{
	TEnumAsByte<E_CrosshairTypes>*                     CrosshairType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCrosshairVisible;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Crosshair_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HitIndicatorTypes>*                  HitIndicatorType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHitIndicatorVisible;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayHitIndicator
struct UWB_CrosshairBase_C_DisplayHitIndicator_Params
{
	float*                                             IndicationTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayRecoil
struct UWB_CrosshairBase_C_DisplayRecoil_Params
{
	bool*                                              bRecoil;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.DisplaySingleRecoil
struct UWB_CrosshairBase_C_DisplaySingleRecoil_Params
{
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.CrosshairVisibility
struct UWB_CrosshairBase_C_CrosshairVisibility_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.ExecuteUbergraph_WB_CrosshairBase
struct UWB_CrosshairBase_C_ExecuteUbergraph_WB_CrosshairBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.SingleRecoil__DelegateSignature
struct UWB_CrosshairBase_C_SingleRecoil__DelegateSignature_Params
{
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayingRecoil__DelegateSignature
struct UWB_CrosshairBase_C_DisplayingRecoil__DelegateSignature_Params
{
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.RemoveHitIndication__DelegateSignature
struct UWB_CrosshairBase_C_RemoveHitIndication__DelegateSignature_Params
{
};

// Function WB_CrosshairBase.WB_CrosshairBase_C.HitIndication__DelegateSignature
struct UWB_CrosshairBase_C_HitIndication__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
