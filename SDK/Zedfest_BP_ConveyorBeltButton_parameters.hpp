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

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Set Widget Type
struct ABP_ConveyorBeltButton_C_Set_Widget_Type_Params
{
	TEnumAsByte<E_WidgetTypes>                         Widget_Type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Set Widget Title
struct ABP_ConveyorBeltButton_C_Set_Widget_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title_Text;                                               // (Parm, OutParm)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Set Widget Sub Title
struct ABP_ConveyorBeltButton_C_Set_Widget_Sub_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Sub_Title_Text;                                           // (Parm, OutParm)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Set Widget Level
struct ABP_ConveyorBeltButton_C_Set_Widget_Level_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Level_Text;                                               // (Parm, OutParm)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Set Widget Amount
struct ABP_ConveyorBeltButton_C_Set_Widget_Amount_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Set Widget Color
struct ABP_ConveyorBeltButton_C_Set_Widget_Color_Params
{
	struct FLinearColor                                Dark_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Set Widget Key Binds
struct ABP_ConveyorBeltButton_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_KeyBinds>                         Key_Binds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Set Detail 1
struct ABP_ConveyorBeltButton_C_Set_Detail_1_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Set Detail 2
struct ABP_ConveyorBeltButton_C_Set_Detail_2_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Set Detail 3
struct ABP_ConveyorBeltButton_C_Set_Detail_3_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Set Detail 4
struct ABP_ConveyorBeltButton_C_Set_Detail_4_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.ShouldNotSendInteractToServer
struct ABP_ConveyorBeltButton_C_ShouldNotSendInteractToServer_Params
{
	bool                                               bShouldNotSendInteractToServer;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.ShouldNotInteractOnClients
struct ABP_ConveyorBeltButton_C_ShouldNotInteractOnClients_Params
{
	bool                                               bShouldNotInteractOnClients;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.GetDesiredHeldRotation
struct ABP_ConveyorBeltButton_C_GetDesiredHeldRotation_Params
{
	struct FRotator                                    RelativeHeldRotation;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.GetInteractionText
struct ABP_ConveyorBeltButton_C_GetInteractionText_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.IsFocusable
struct ABP_ConveyorBeltButton_C_IsFocusable_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFocusable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.GetInteractionCenterPoint
struct ABP_ConveyorBeltButton_C_GetInteractionCenterPoint_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.IsPhysicsPickup
struct ABP_ConveyorBeltButton_C_IsPhysicsPickup_Params
{
	bool                                               bPickupable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PickupComponent;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.PlayButtonSound
struct ABP_ConveyorBeltButton_C_PlayButtonSound_Params
{
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.OnButtonPressed
struct ABP_ConveyorBeltButton_C_OnButtonPressed_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.UpdateColors
struct ABP_ConveyorBeltButton_C_UpdateColors_Params
{
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.SetUpMIDOnComponents
struct ABP_ConveyorBeltButton_C_SetUpMIDOnComponents_Params
{
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.GetMIDMeshComponents
struct ABP_ConveyorBeltButton_C_GetMIDMeshComponents_Params
{
	TArray<class UPrimitiveComponent*>                 Meshes;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.GetAnimatedComponents
struct ABP_ConveyorBeltButton_C_GetAnimatedComponents_Params
{
	TArray<class UPrimitiveComponent*>                 AnimatedComponent;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.UpdateAnimation
struct ABP_ConveyorBeltButton_C_UpdateAnimation_Params
{
	float*                                             AnimationPoint;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.UserConstructionScript
struct ABP_ConveyorBeltButton_C_UserConstructionScript_Params
{
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.AnimTimeline__FinishedFunc
struct ABP_ConveyorBeltButton_C_AnimTimeline__FinishedFunc_Params
{
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.AnimTimeline__UpdateFunc
struct ABP_ConveyorBeltButton_C_AnimTimeline__UpdateFunc_Params
{
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.AnimTimeline__Pressed__EventFunc
struct ABP_ConveyorBeltButton_C_AnimTimeline__Pressed__EventFunc_Params
{
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.OnPhysicsRelease
struct ABP_ConveyorBeltButton_C_OnPhysicsRelease_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsHandleComponent**                    PhysicsHandle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.SetInteractionDebugString
struct ABP_ConveyorBeltButton_C_SetInteractionDebugString_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    DebugString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Toggle Widget
struct ABP_ConveyorBeltButton_C_Toggle_Widget_Params
{
	bool*                                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.OnPhysicsPickup
struct ABP_ConveyorBeltButton_C_OnPhysicsPickup_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsHandleComponent**                    PhysicsHandle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Interact_2
struct ABP_ConveyorBeltButton_C_Interact_2_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Interact1
struct ABP_ConveyorBeltButton_C_Interact1_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.SetFocused
struct ABP_ConveyorBeltButton_C_SetFocused_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFocused;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Current Target
struct ABP_ConveyorBeltButton_C_Current_Target_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Clear Target
struct ABP_ConveyorBeltButton_C_Clear_Target_Params
{
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.Interact
struct ABP_ConveyorBeltButton_C_Interact_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConveyorBeltButton.BP_ConveyorBeltButton_C.ExecuteUbergraph_BP_ConveyorBeltButton
struct ABP_ConveyorBeltButton_C_ExecuteUbergraph_BP_ConveyorBeltButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
