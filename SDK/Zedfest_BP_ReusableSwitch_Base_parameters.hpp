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

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Type
struct ABP_ReusableSwitch_Base_C_Set_Widget_Type_Params
{
	TEnumAsByte<E_WidgetTypes>                         Widget_Type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Title
struct ABP_ReusableSwitch_Base_C_Set_Widget_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title_Text;                                               // (Parm, OutParm)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Sub Title
struct ABP_ReusableSwitch_Base_C_Set_Widget_Sub_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Sub_Title_Text;                                           // (Parm, OutParm)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Level
struct ABP_ReusableSwitch_Base_C_Set_Widget_Level_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Level_Text;                                               // (Parm, OutParm)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Amount
struct ABP_ReusableSwitch_Base_C_Set_Widget_Amount_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Color
struct ABP_ReusableSwitch_Base_C_Set_Widget_Color_Params
{
	struct FLinearColor                                Dark_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Key Binds
struct ABP_ReusableSwitch_Base_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_KeyBinds>                         Key_Binds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 1
struct ABP_ReusableSwitch_Base_C_Set_Detail_1_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 2
struct ABP_ReusableSwitch_Base_C_Set_Detail_2_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 3
struct ABP_ReusableSwitch_Base_C_Set_Detail_3_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 4
struct ABP_ReusableSwitch_Base_C_Set_Detail_4_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ShouldNotSendInteractToServer
struct ABP_ReusableSwitch_Base_C_ShouldNotSendInteractToServer_Params
{
	bool                                               bShouldNotSendInteractToServer;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ShouldNotInteractOnClients
struct ABP_ReusableSwitch_Base_C_ShouldNotInteractOnClients_Params
{
	bool                                               bShouldNotInteractOnClients;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetDesiredHeldRotation
struct ABP_ReusableSwitch_Base_C_GetDesiredHeldRotation_Params
{
	struct FRotator                                    RelativeHeldRotation;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetInteractionText
struct ABP_ReusableSwitch_Base_C_GetInteractionText_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.IsFocusable
struct ABP_ReusableSwitch_Base_C_IsFocusable_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFocusable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetInteractionCenterPoint
struct ABP_ReusableSwitch_Base_C_GetInteractionCenterPoint_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.IsPhysicsPickup
struct ABP_ReusableSwitch_Base_C_IsPhysicsPickup_Params
{
	bool                                               bPickupable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PickupComponent;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.PlaySwitchSound
struct ABP_ReusableSwitch_Base_C_PlaySwitchSound_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.OnSwitchStateChanged
struct ABP_ReusableSwitch_Base_C_OnSwitchStateChanged_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.UpdateColors
struct ABP_ReusableSwitch_Base_C_UpdateColors_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.SetUpMIDOnComponents
struct ABP_ReusableSwitch_Base_C_SetUpMIDOnComponents_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetMIDMeshComponents
struct ABP_ReusableSwitch_Base_C_GetMIDMeshComponents_Params
{
	TArray<class UPrimitiveComponent*>                 Meshes;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetAnimatedComponents
struct ABP_ReusableSwitch_Base_C_GetAnimatedComponents_Params
{
	TArray<class UPrimitiveComponent*>                 AnimatedComponent;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.UpdateAnimation
struct ABP_ReusableSwitch_Base_C_UpdateAnimation_Params
{
	float*                                             AnimationPoint;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.UserConstructionScript
struct ABP_ReusableSwitch_Base_C_UserConstructionScript_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__FinishedFunc
struct ABP_ReusableSwitch_Base_C_AnimTimeline__FinishedFunc_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__UpdateFunc
struct ABP_ReusableSwitch_Base_C_AnimTimeline__UpdateFunc_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__Off__EventFunc
struct ABP_ReusableSwitch_Base_C_AnimTimeline__Off__EventFunc_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__On__EventFunc
struct ABP_ReusableSwitch_Base_C_AnimTimeline__On__EventFunc_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_0__FinishedFunc
struct ABP_ReusableSwitch_Base_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_0__UpdateFunc
struct ABP_ReusableSwitch_Base_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_1__FinishedFunc
struct ABP_ReusableSwitch_Base_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_1__UpdateFunc
struct ABP_ReusableSwitch_Base_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Toggle Widget
struct ABP_ReusableSwitch_Base_C_Toggle_Widget_Params
{
	bool*                                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.SetFocused
struct ABP_ReusableSwitch_Base_C_SetFocused_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFocused;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Interact1
struct ABP_ReusableSwitch_Base_C_Interact1_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.OnPhysicsPickup
struct ABP_ReusableSwitch_Base_C_OnPhysicsPickup_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsHandleComponent**                    PhysicsHandle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.OnPhysicsRelease
struct ABP_ReusableSwitch_Base_C_OnPhysicsRelease_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsHandleComponent**                    PhysicsHandle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.SetInteractionDebugString
struct ABP_ReusableSwitch_Base_C_SetInteractionDebugString_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    DebugString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ReceiveBeginPlay
struct ABP_ReusableSwitch_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Current Target
struct ABP_ReusableSwitch_Base_C_Current_Target_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Clear Target
struct ABP_ReusableSwitch_Base_C_Clear_Target_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Interact
struct ABP_ReusableSwitch_Base_C_Interact_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ShrinkSwitches
struct ABP_ReusableSwitch_Base_C_ShrinkSwitches_Params
{
};

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ExecuteUbergraph_BP_ReusableSwitch_Base
struct ABP_ReusableSwitch_Base_C_ExecuteUbergraph_BP_ReusableSwitch_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
