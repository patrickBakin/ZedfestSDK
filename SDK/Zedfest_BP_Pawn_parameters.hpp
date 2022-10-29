#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Pawn.BP_Pawn_C.Set Widget Type
struct ABP_Pawn_C_Set_Widget_Type_Params
{
	TEnumAsByte<E_WidgetTypes>                         Widget_Type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.Set Widget Title
struct ABP_Pawn_C_Set_Widget_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title_Text;                                               // (Parm, OutParm)
};

// Function BP_Pawn.BP_Pawn_C.Set Widget Sub Title
struct ABP_Pawn_C_Set_Widget_Sub_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Sub_Title_Text;                                           // (Parm, OutParm)
};

// Function BP_Pawn.BP_Pawn_C.Set Widget Level
struct ABP_Pawn_C_Set_Widget_Level_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Level_Text;                                               // (Parm, OutParm)
};

// Function BP_Pawn.BP_Pawn_C.Set Widget Amount
struct ABP_Pawn_C_Set_Widget_Amount_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.Set Widget Color
struct ABP_Pawn_C_Set_Widget_Color_Params
{
	struct FLinearColor                                Dark_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.Set Widget Key Binds
struct ABP_Pawn_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_KeyBinds>                         Key_Binds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Pawn.BP_Pawn_C.Set Detail 1
struct ABP_Pawn_C_Set_Detail_1_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_Pawn.BP_Pawn_C.Set Detail 2
struct ABP_Pawn_C_Set_Detail_2_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_Pawn.BP_Pawn_C.Set Detail 3
struct ABP_Pawn_C_Set_Detail_3_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_Pawn.BP_Pawn_C.Set Detail 4
struct ABP_Pawn_C_Set_Detail_4_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_SpeedAndDirectionClient
struct ABP_Pawn_C_GetChar_SpeedAndDirectionClient_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_Mesh
struct ABP_Pawn_C_GetChar_Mesh_Params
{
	class USkeletalMeshComponent*                      SkMesh;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_CurrentWeapon
struct ABP_Pawn_C_GetChar_CurrentWeapon_Params
{
	class AWeaponFirearmBase_C*                        CurrentWeaponReference;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_SpeedAndDirection
struct ABP_Pawn_C_GetChar_SpeedAndDirection_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_IsDead
struct ABP_Pawn_C_GetChar_IsDead_Params
{
	bool                                               IsDead;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_IsCrouching
struct ABP_Pawn_C_GetChar_IsCrouching_Params
{
	bool                                               IsCrouching;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_IsJumping
struct ABP_Pawn_C_GetChar_IsJumping_Params
{
	bool                                               IsJumping;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_IsPlayAnim
struct ABP_Pawn_C_GetChar_IsPlayAnim_Params
{
	bool                                               IsPlayAnim;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_PitchAndYaw
struct ABP_Pawn_C_GetChar_PitchAndYaw_Params
{
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_DeathAnimNumber
struct ABP_Pawn_C_GetChar_DeathAnimNumber_Params
{
	int                                                NumberOfDeathAnim;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_IsSprinting
struct ABP_Pawn_C_GetChar_IsSprinting_Params
{
	bool                                               IsSprinting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_HasCharWeaponsComponent
struct ABP_Pawn_C_GetChar_HasCharWeaponsComponent_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_CharacterWeaponsComponent
struct ABP_Pawn_C_GetChar_CharacterWeaponsComponent_Params
{
	int                                                CWC_Reference;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.CWC_GetHUD
struct ABP_Pawn_C_CWC_GetHUD_Params
{
	class UW_WpnCompHUD_C*                             HUD_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_CurrentCamera
struct ABP_Pawn_C_GetChar_CurrentCamera_Params
{
	class UCameraComponent*                            CurrentCamera;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WeaponCamActive;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_IsCloaked
struct ABP_Pawn_C_GetChar_IsCloaked_Params
{
	bool                                               Cloak;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_CurrentHealth
struct ABP_Pawn_C_GetChar_CurrentHealth_Params
{
	float                                              CurrentHP;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.GetChar_IsZooming
struct ABP_Pawn_C_GetChar_IsZooming_Params
{
	bool                                               Zoom;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.OnRep_CharacterMeshRef
struct ABP_Pawn_C_OnRep_CharacterMeshRef_Params
{
};

// Function BP_Pawn.BP_Pawn_C.CheckSwimming
struct ABP_Pawn_C_CheckSwimming_Params
{
};

// Function BP_Pawn.BP_Pawn_C.GetAngleOfSurface
struct ABP_Pawn_C_GetAngleOfSurface_Params
{
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.UpdatingCharacterPhysics
struct ABP_Pawn_C_UpdatingCharacterPhysics_Params
{
	class UObject**                                    InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.OnRep_ShieldCurrent
struct ABP_Pawn_C_OnRep_ShieldCurrent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_KeyCard
struct ABP_Pawn_C_OnRep_KeyCard_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_IsDead
struct ABP_Pawn_C_OnRep_IsDead_Params
{
};

// Function BP_Pawn.BP_Pawn_C.CreateHeadText
struct ABP_Pawn_C_CreateHeadText_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_ClientPitch
struct ABP_Pawn_C_OnRep_ClientPitch_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_ClientMovingSpeed
struct ABP_Pawn_C_OnRep_ClientMovingSpeed_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_ClientMovingDirection
struct ABP_Pawn_C_OnRep_ClientMovingDirection_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_Ragdolling
struct ABP_Pawn_C_OnRep_Ragdolling_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_GrenadeCurrent
struct ABP_Pawn_C_OnRep_GrenadeCurrent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_Stamina
struct ABP_Pawn_C_OnRep_Stamina_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_ArmorCurrent
struct ABP_Pawn_C_OnRep_ArmorCurrent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_ShowSniperScope
struct ABP_Pawn_C_OnRep_ShowSniperScope_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_HealthCurrent
struct ABP_Pawn_C_OnRep_HealthCurrent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnRep_Crouch Button Down
struct ABP_Pawn_C_OnRep_Crouch_Button_Down_Params
{
};

// Function BP_Pawn.BP_Pawn_C.F_GetFVectorAndRightVector
struct ABP_Pawn_C_F_GetFVectorAndRightVector_Params
{
	struct FVector                                     ForwardVector;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightVector;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.F_GetOverlapResult
struct ABP_Pawn_C_F_GetOverlapResult_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanRagdol_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.F_GetHitResult
struct ABP_Pawn_C_F_GetHitResult_Params
{
	class UPrimitiveComponent**                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               CanRagdol_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              BodyVelocity;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.F_GetLookRotation
struct ABP_Pawn_C_F_GetLookRotation_Params
{
};

// Function BP_Pawn.BP_Pawn_C.HealthEmitterDestroyTimeline__FinishedFunc
struct ABP_Pawn_C_HealthEmitterDestroyTimeline__FinishedFunc_Params
{
};

// Function BP_Pawn.BP_Pawn_C.HealthEmitterDestroyTimeline__UpdateFunc
struct ABP_Pawn_C_HealthEmitterDestroyTimeline__UpdateFunc_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Timeline_2__FinishedFunc
struct ABP_Pawn_C_Timeline_2__FinishedFunc_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Timeline_2__UpdateFunc
struct ABP_Pawn_C_Timeline_2__UpdateFunc_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Timeline_1__FinishedFunc
struct ABP_Pawn_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Timeline_1__UpdateFunc
struct ABP_Pawn_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Timeline_0__FinishedFunc
struct ABP_Pawn_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Timeline_0__UpdateFunc
struct ABP_Pawn_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_34
struct ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_34_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_33
struct ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_33_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_32
struct ABP_Pawn_C_InpActEvt_AimButton_K2Node_InputActionEvent_32_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_31
struct ABP_Pawn_C_InpActEvt_AimButton_K2Node_InputActionEvent_31_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_RagdollButton_K2Node_InputActionEvent_30
struct ABP_Pawn_C_InpActEvt_RagdollButton_K2Node_InputActionEvent_30_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_29
struct ABP_Pawn_C_InpActEvt_AimButton_K2Node_InputActionEvent_29_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_28
struct ABP_Pawn_C_InpActEvt_AimButton_K2Node_InputActionEvent_28_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.OnFailure_5299E62D49F62E94D70774B290F4BC51
struct ABP_Pawn_C_OnFailure_5299E62D49F62E94D70774B290F4BC51_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.OnSuccess_5299E62D49F62E94D70774B290F4BC51
struct ABP_Pawn_C_OnSuccess_5299E62D49F62E94D70774B290F4BC51_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.OnFailure_F7C563754A811AC42B68CFABEF895E3D
struct ABP_Pawn_C_OnFailure_F7C563754A811AC42B68CFABEF895E3D_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnSuccess_F7C563754A811AC42B68CFABEF895E3D
struct ABP_Pawn_C_OnSuccess_F7C563754A811AC42B68CFABEF895E3D_Params
{
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_PunchWeaponButton_K2Node_InputActionEvent_27
struct ABP_Pawn_C_InpActEvt_PunchWeaponButton_K2Node_InputActionEvent_27_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_26
struct ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_26_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory6Button_K2Node_InputActionEvent_25
struct ABP_Pawn_C_InpActEvt_Inventory6Button_K2Node_InputActionEvent_25_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory5Button_K2Node_InputActionEvent_24
struct ABP_Pawn_C_InpActEvt_Inventory5Button_K2Node_InputActionEvent_24_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory4Button_K2Node_InputActionEvent_23
struct ABP_Pawn_C_InpActEvt_Inventory4Button_K2Node_InputActionEvent_23_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory3Button_K2Node_InputActionEvent_22
struct ABP_Pawn_C_InpActEvt_Inventory3Button_K2Node_InputActionEvent_22_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory2Button_K2Node_InputActionEvent_21
struct ABP_Pawn_C_InpActEvt_Inventory2Button_K2Node_InputActionEvent_21_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory1Button_K2Node_InputActionEvent_20
struct ABP_Pawn_C_InpActEvt_Inventory1Button_K2Node_InputActionEvent_20_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_19
struct ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_19_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_18
struct ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_18_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_DropWeapon_K2Node_InputActionEvent_17
struct ABP_Pawn_C_InpActEvt_DropWeapon_K2Node_InputActionEvent_17_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Previous Inventory Slot_K2Node_InputActionEvent_16
struct ABP_Pawn_C_InpActEvt_Previous_Inventory_Slot_K2Node_InputActionEvent_16_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Next Inventory Slot_K2Node_InputActionEvent_15
struct ABP_Pawn_C_InpActEvt_Next_Inventory_Slot_K2Node_InputActionEvent_15_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_HolsterWeaponButton_K2Node_InputActionEvent_14
struct ABP_Pawn_C_InpActEvt_HolsterWeaponButton_K2Node_InputActionEvent_14_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_13
struct ABP_Pawn_C_InpActEvt_InteractButton_K2Node_InputActionEvent_13_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_12
struct ABP_Pawn_C_InpActEvt_InteractButton_K2Node_InputActionEvent_12_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Reload_K2Node_InputActionEvent_11
struct ABP_Pawn_C_InpActEvt_Reload_K2Node_InputActionEvent_11_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_10
struct ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_10_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_9
struct ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_9_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_8
struct ABP_Pawn_C_InpActEvt_InteractButton_K2Node_InputActionEvent_8_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_7
struct ABP_Pawn_C_InpActEvt_InteractButton_K2Node_InputActionEvent_7_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.OnFailure_ADDB7E9F409496263BBCF98304208275
struct ABP_Pawn_C_OnFailure_ADDB7E9F409496263BBCF98304208275_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnSuccess_ADDB7E9F409496263BBCF98304208275
struct ABP_Pawn_C_OnSuccess_ADDB7E9F409496263BBCF98304208275_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnFailure_7C311DC24CBEA4EAF648D99BEC01A75B
struct ABP_Pawn_C_OnFailure_7C311DC24CBEA4EAF648D99BEC01A75B_Params
{
	int*                                               LeaderboardValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.OnSuccess_7C311DC24CBEA4EAF648D99BEC01A75B
struct ABP_Pawn_C_OnSuccess_7C311DC24CBEA4EAF648D99BEC01A75B_Params
{
	int*                                               LeaderboardValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.OnFailure_C5CF4D5E41B77CB35AD8F0826FEC5C8D
struct ABP_Pawn_C_OnFailure_C5CF4D5E41B77CB35AD8F0826FEC5C8D_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.OnSuccess_C5CF4D5E41B77CB35AD8F0826FEC5C8D
struct ABP_Pawn_C_OnSuccess_C5CF4D5E41B77CB35AD8F0826FEC5C8D_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.OnFailure_D196E57F409502B9488A1D8EC0884901
struct ABP_Pawn_C_OnFailure_D196E57F409502B9488A1D8EC0884901_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnSuccess_D196E57F409502B9488A1D8EC0884901
struct ABP_Pawn_C_OnSuccess_D196E57F409502B9488A1D8EC0884901_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnFailure_92D3060B49438364A7B3209551BB9598
struct ABP_Pawn_C_OnFailure_92D3060B49438364A7B3209551BB9598_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnSuccess_92D3060B49438364A7B3209551BB9598
struct ABP_Pawn_C_OnSuccess_92D3060B49438364A7B3209551BB9598_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnFailure_BFF290744CDE8E9F28B9A192BAEB9B53
struct ABP_Pawn_C_OnFailure_BFF290744CDE8E9F28B9A192BAEB9B53_Params
{
	int*                                               LeaderboardValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.OnSuccess_BFF290744CDE8E9F28B9A192BAEB9B53
struct ABP_Pawn_C_OnSuccess_BFF290744CDE8E9F28B9A192BAEB9B53_Params
{
	int*                                               LeaderboardValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_6
struct ABP_Pawn_C_InpActEvt_Jump_K2Node_InputActionEvent_6_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_5
struct ABP_Pawn_C_InpActEvt_Jump_K2Node_InputActionEvent_5_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Sprint_K2Node_InputActionEvent_4
struct ABP_Pawn_C_InpActEvt_Sprint_K2Node_InputActionEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Sprint_K2Node_InputActionEvent_3
struct ABP_Pawn_C_InpActEvt_Sprint_K2Node_InputActionEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Crouch_K2Node_InputActionEvent_2
struct ABP_Pawn_C_InpActEvt_Crouch_K2Node_InputActionEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.InpActEvt_Crouch_K2Node_InputActionEvent_1
struct ABP_Pawn_C_InpActEvt_Crouch_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.ReceiveHit
struct ABP_Pawn_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_Pawn_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.ServerComponentHit
struct ABP_Pawn_C_ServerComponentHit_Params
{
	class UPrimitiveComponent**                        Hit_Component;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent**                        Other_Comp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.PlayLandedSound
struct ABP_Pawn_C_PlayLandedSound_Params
{
};

// Function BP_Pawn.BP_Pawn_C.ReceiveBeginPlay
struct ABP_Pawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_Pawn.BP_Pawn_C.PC_CharInitialization
struct ABP_Pawn_C_PC_CharInitialization_Params
{
	class ABP_Base_HordeController_C**                 PCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UW_WpnCompHUD_C**                            WPNHUD;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.HealthAddInstant
struct ABP_Pawn_C_HealthAddInstant_Params
{
	float*                                             Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.DispenserHealth
struct ABP_Pawn_C_DispenserHealth_Params
{
};

// Function BP_Pawn.BP_Pawn_C.EventAddHP
struct ABP_Pawn_C_EventAddHP_Params
{
	float*                                             Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.DestroyHeadText
struct ABP_Pawn_C_DestroyHeadText_Params
{
};

// Function BP_Pawn.BP_Pawn_C.SetSkeletalMeshesAll
struct ABP_Pawn_C_SetSkeletalMeshesAll_Params
{
	class USkeletalMesh**                              Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.SetSkeletalMeshesServer
struct ABP_Pawn_C_SetSkeletalMeshesServer_Params
{
	class USkeletalMesh**                              Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.TimerEvent
struct ABP_Pawn_C_TimerEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.LobbyClosed
struct ABP_Pawn_C_LobbyClosed_Params
{
};

// Function BP_Pawn.BP_Pawn_C.LobbyCameraTimer
struct ABP_Pawn_C_LobbyCameraTimer_Params
{
};

// Function BP_Pawn.BP_Pawn_C.LobbyCamera
struct ABP_Pawn_C_LobbyCamera_Params
{
};

// Function BP_Pawn.BP_Pawn_C.CustomEvent_1
struct ABP_Pawn_C_CustomEvent_1_Params
{
};

// Function BP_Pawn.BP_Pawn_C.HideVisibilityHeadTextSelf
struct ABP_Pawn_C_HideVisibilityHeadTextSelf_Params
{
};

// Function BP_Pawn.BP_Pawn_C.LobbyClosedServer
struct ABP_Pawn_C_LobbyClosedServer_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnDestroyed_Event_1
struct ABP_Pawn_C_OnDestroyed_Event_1_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.EventRemoveHPOverTime
struct ABP_Pawn_C_EventRemoveHPOverTime_Params
{
	float*                                             Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.RemoveEvent
struct ABP_Pawn_C_RemoveEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.DecreaseHpOverTimeClient
struct ABP_Pawn_C_DecreaseHpOverTimeClient_Params
{
	bool*                                              Blur_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.ExpandingGroundEvent
struct ABP_Pawn_C_ExpandingGroundEvent_Params
{
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.HealthEmitterEvent
struct ABP_Pawn_C_HealthEmitterEvent_Params
{
	bool*                                              Destroy_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.SetCharacterMeshEvent
struct ABP_Pawn_C_SetCharacterMeshEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.ClimbLocation
struct ABP_Pawn_C_ClimbLocation_Params
{
	struct FVector*                                    Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.ClimbEnd
struct ABP_Pawn_C_ClimbEnd_Params
{
};

// Function BP_Pawn.BP_Pawn_C.ClimbRelease
struct ABP_Pawn_C_ClimbRelease_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Server_HeadRotation
struct ABP_Pawn_C_Server_HeadRotation_Params
{
};

// Function BP_Pawn.BP_Pawn_C.StopHomingTrace
struct ABP_Pawn_C_StopHomingTrace_Params
{
};

// Function BP_Pawn.BP_Pawn_C.RagdollTick
struct ABP_Pawn_C_RagdollTick_Params
{
};

// Function BP_Pawn.BP_Pawn_C.BndEvt__bp_ragdoll_component_K2Node_ComponentBoundEvent_1_ragdoll_updated_client__DelegateSignature
struct ABP_Pawn_C_BndEvt__bp_ragdoll_component_K2Node_ComponentBoundEvent_1_ragdoll_updated_client__DelegateSignature_Params
{
	bool*                                              Init;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_fatal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              recover_start;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              recover_end;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.ParryAimCancelEvent
struct ABP_Pawn_C_ParryAimCancelEvent_Params
{
	bool*                                              IsBlocking_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.StopZoomEvent
struct ABP_Pawn_C_StopZoomEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.StartAimTimer
struct ABP_Pawn_C_StartAimTimer_Params
{
};

// Function BP_Pawn.BP_Pawn_C.StartStopAim
struct ABP_Pawn_C_StartStopAim_Params
{
};

// Function BP_Pawn.BP_Pawn_C.MulticastAiming
struct ABP_Pawn_C_MulticastAiming_Params
{
	bool*                                              IsAiming;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.ServerAiming
struct ABP_Pawn_C_ServerAiming_Params
{
	bool*                                              IsAiming;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.StopTurnsEvent
struct ABP_Pawn_C_StopTurnsEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.CustomEvent
struct ABP_Pawn_C_CustomEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.TurnLeftEventOff
struct ABP_Pawn_C_TurnLeftEventOff_Params
{
};

// Function BP_Pawn.BP_Pawn_C.TurnRightEventOff
struct ABP_Pawn_C_TurnRightEventOff_Params
{
};

// Function BP_Pawn.BP_Pawn_C.TurnLeftEventOn
struct ABP_Pawn_C_TurnLeftEventOn_Params
{
};

// Function BP_Pawn.BP_Pawn_C.TurnRightEventOn
struct ABP_Pawn_C_TurnRightEventOn_Params
{
};

// Function BP_Pawn.BP_Pawn_C.CustomEvent_2
struct ABP_Pawn_C_CustomEvent_2_Params
{
};

// Function BP_Pawn.BP_Pawn_C.CustomEvent_12
struct ABP_Pawn_C_CustomEvent_12_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Custom Direction Event
struct ABP_Pawn_C_Custom_Direction_Event_Params
{
};

// Function BP_Pawn.BP_Pawn_C.CustomPitchEvent
struct ABP_Pawn_C_CustomPitchEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244
struct ABP_Pawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181
struct ABP_Pawn_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
struct ABP_Pawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
struct ABP_Pawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.SwitchingClassClientEvent
struct ABP_Pawn_C_SwitchingClassClientEvent_Params
{
	bool*                                              PerkSwitch_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.SwitchingClassFromStoreEvent
struct ABP_Pawn_C_SwitchingClassFromStoreEvent_Params
{
	bool*                                              PerkSwitch_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.AddShieldClient
struct ABP_Pawn_C_AddShieldClient_Params
{
};

// Function BP_Pawn.BP_Pawn_C.RefillAmmoFromDispenserEtc
struct ABP_Pawn_C_RefillAmmoFromDispenserEtc_Params
{
	class UClass**                                     Ammo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FillUpFull_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    WeaponName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Bar_Selection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.BuySpecialItemFromStoreEvent
struct ABP_Pawn_C_BuySpecialItemFromStoreEvent_Params
{
	class UClass**                                     SpecialItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.AmmoSoundMulticast
struct ABP_Pawn_C_AmmoSoundMulticast_Params
{
	class USoundBase**                                 Sound_to_play;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Armor_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.RefilFragsFromStoreEvent
struct ABP_Pawn_C_RefilFragsFromStoreEvent_Params
{
	class UClass**                                     Throwable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FillUpFull_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.BuyMeleeFromStoreEvent
struct ABP_Pawn_C_BuyMeleeFromStoreEvent_Params
{
	class UClass**                                     weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.SellWeapon
struct ABP_Pawn_C_SellWeapon_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.BuyArmorFromStoreEvent
struct ABP_Pawn_C_BuyArmorFromStoreEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.BuyFragsFromStoreEvent
struct ABP_Pawn_C_BuyFragsFromStoreEvent_Params
{
	class UClass**                                     Throwable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.BuyAmmoFromStoreEvent
struct ABP_Pawn_C_BuyAmmoFromStoreEvent_Params
{
	class UClass**                                     Ammo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FillUpFull_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    WeaponName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Bar_Selection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.BuyWeaponFromStoreEvent
struct ABP_Pawn_C_BuyWeaponFromStoreEvent_Params
{
	class UClass**                                     weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Primary_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.BuyHPFromStoreEvent
struct ABP_Pawn_C_BuyHPFromStoreEvent_Params
{
	class UClass**                                     Armor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.BndEvt__HeadFalling_K2Node_ComponentBoundEvent_648_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Pawn_C_BndEvt__HeadFalling_K2Node_ComponentBoundEvent_648_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.ProperlyDestroyedTrapEvent
struct ABP_Pawn_C_ProperlyDestroyedTrapEvent_Params
{
	class AItemBase_C**                                TrapRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TrapNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.TrapBoxInfoTextEvent
struct ABP_Pawn_C_TrapBoxInfoTextEvent_Params
{
	bool*                                              DestroyFirstOne_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.PlaceSpecialItemMulticast
struct ABP_Pawn_C_PlaceSpecialItemMulticast_Params
{
	struct FVector*                                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.StopSpecialItemEvent
struct ABP_Pawn_C_StopSpecialItemEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.SpecialItemEvent
struct ABP_Pawn_C_SpecialItemEvent_Params
{
	class UClass**                                     SpecialItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.SpecialItemTrace
struct ABP_Pawn_C_SpecialItemTrace_Params
{
};

// Function BP_Pawn.BP_Pawn_C.PlaceSpecialItemServer
struct ABP_Pawn_C_PlaceSpecialItemServer_Params
{
};

// Function BP_Pawn.BP_Pawn_C.StopMeleeTrace
struct ABP_Pawn_C_StopMeleeTrace_Params
{
};

// Function BP_Pawn.BP_Pawn_C.BndEvt__ParryBox_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_Pawn_C_BndEvt__ParryBox_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.ArmorPickupInterface
struct ABP_Pawn_C_ArmorPickupInterface_Params
{
	class ABP_RubberArmor_C**                          PickupRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Autopickup_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.WPN_CantShoot
struct ABP_Pawn_C_WPN_CantShoot_Params
{
};

// Function BP_Pawn.BP_Pawn_C.BndEvt__ParryBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Pawn_C_BndEvt__ParryBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.SlidePush
struct ABP_Pawn_C_SlidePush_Params
{
};

// Function BP_Pawn.BP_Pawn_C.ClientGetUpFromSlide
struct ABP_Pawn_C_ClientGetUpFromSlide_Params
{
};

// Function BP_Pawn.BP_Pawn_C.ReceiveTick
struct ABP_Pawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.CWC_SwitchCamera
struct ABP_Pawn_C_CWC_SwitchCamera_Params
{
};

// Function BP_Pawn.BP_Pawn_C.GetUpFromSlideMulticast
struct ABP_Pawn_C_GetUpFromSlideMulticast_Params
{
};

// Function BP_Pawn.BP_Pawn_C.SlidingEventMulticast
struct ABP_Pawn_C_SlidingEventMulticast_Params
{
};

// Function BP_Pawn.BP_Pawn_C.SlidingEvent
struct ABP_Pawn_C_SlidingEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.WPN_SetWeaponToInteract
struct ABP_Pawn_C_WPN_SetWeaponToInteract_Params
{
	int*                                               WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AutoPickUp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.AmmoPickup
struct ABP_Pawn_C_AmmoPickup_Params
{
	TEnumAsByte<E_AddAmmoTypes>*                       Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmountAmmo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WeaponTypes>*                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ProjectileType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.WPN_Recoil
struct ABP_Pawn_C_WPN_Recoil_Params
{
	float*                                             Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.CWC_RefreshWeaponInHUD
struct ABP_Pawn_C_CWC_RefreshWeaponInHUD_Params
{
};

// Function BP_Pawn.BP_Pawn_C.EventMeleeSoundAll
struct ABP_Pawn_C_EventMeleeSoundAll_Params
{
};

// Function BP_Pawn.BP_Pawn_C.MeleeDamage
struct ABP_Pawn_C_MeleeDamage_Params
{
	bool*                                              MeleeWithWeapon_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.MeleeWeaponReleaseEvent
struct ABP_Pawn_C_MeleeWeaponReleaseEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.PC_SetHUD
struct ABP_Pawn_C_PC_SetHUD_Params
{
	class UW_WpnCompHUD_C**                            HUD_Reference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.Toggle Widget
struct ABP_Pawn_C_Toggle_Widget_Params
{
	bool*                                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.HolsterWhenDeadEvent
struct ABP_Pawn_C_HolsterWhenDeadEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.CustomEvent_3
struct ABP_Pawn_C_CustomEvent_3_Params
{
};

// Function BP_Pawn.BP_Pawn_C.ReviveMovementMode
struct ABP_Pawn_C_ReviveMovementMode_Params
{
	bool*                                              Walk_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.StopInteractBarEvent
struct ABP_Pawn_C_StopInteractBarEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.StartSprintEvent
struct ABP_Pawn_C_StartSprintEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.ClientInteract
struct ABP_Pawn_C_ClientInteract_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Server Interact
struct ABP_Pawn_C_Server_Interact_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn.BP_Pawn_C.DestroyPickupObjectRefEvent
struct ABP_Pawn_C_DestroyPickupObjectRefEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.PlaceraPickup
struct ABP_Pawn_C_PlaceraPickup_Params
{
	class UStaticMeshComponent**                       Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.KeyCardPickup
struct ABP_Pawn_C_KeyCardPickup_Params
{
	class ABP_KeyCardPickup_C**                        Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.SetFreeCamera
struct ABP_Pawn_C_SetFreeCamera_Params
{
	bool*                                              FreeCameraOn_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.Interact
struct ABP_Pawn_C_Interact_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.Clear Target
struct ABP_Pawn_C_Clear_Target_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Current Target
struct ABP_Pawn_C_Current_Target_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.ClientDeathStatisticsEvent
struct ABP_Pawn_C_ClientDeathStatisticsEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.DamageSoundMulticast
struct ABP_Pawn_C_DamageSoundMulticast_Params
{
};

// Function BP_Pawn.BP_Pawn_C.DecreaseHPEvent
struct ABP_Pawn_C_DecreaseHPEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.ReceivePointDamage
struct ABP_Pawn_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.ReceiveRadialDamage
struct ABP_Pawn_C_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.SaveCharacter
struct ABP_Pawn_C_SaveCharacter_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Render Depth
struct ABP_Pawn_C_Render_Depth_Params
{
	bool*                                              Dead_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.CommitSuicide
struct ABP_Pawn_C_CommitSuicide_Params
{
};

// Function BP_Pawn.BP_Pawn_C.RespawnChar
struct ABP_Pawn_C_RespawnChar_Params
{
};

// Function BP_Pawn.BP_Pawn_C.DIEE
struct ABP_Pawn_C_DIEE_Params
{
};

// Function BP_Pawn.BP_Pawn_C.OnLanded
struct ABP_Pawn_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.RollForwardMulticastEvent
struct ABP_Pawn_C_RollForwardMulticastEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.RollForwardServerEvent
struct ABP_Pawn_C_RollForwardServerEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.JumpOnAll
struct ABP_Pawn_C_JumpOnAll_Params
{
	bool*                                              SetJump;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.Jumping
struct ABP_Pawn_C_Jumping_Params
{
	bool*                                              SetJump;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.EndSprintPowerUp
struct ABP_Pawn_C_EndSprintPowerUp_Params
{
};

// Function BP_Pawn.BP_Pawn_C.BeginSprintPowerUp
struct ABP_Pawn_C_BeginSprintPowerUp_Params
{
};

// Function BP_Pawn.BP_Pawn_C.CheckIfStandingStill
struct ABP_Pawn_C_CheckIfStandingStill_Params
{
};

// Function BP_Pawn.BP_Pawn_C.StopSprintEvent
struct ABP_Pawn_C_StopSprintEvent_Params
{
};

// Function BP_Pawn.BP_Pawn_C.SprintingMulticast
struct ABP_Pawn_C_SprintingMulticast_Params
{
	bool*                                              Sprint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.ClientSprint
struct ABP_Pawn_C_ClientSprint_Params
{
};

// Function BP_Pawn.BP_Pawn_C.SprintTimer
struct ABP_Pawn_C_SprintTimer_Params
{
};

// Function BP_Pawn.BP_Pawn_C.Sprinting
struct ABP_Pawn_C_Sprinting_Params
{
	bool*                                              SetSprint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.UpdateStamina
struct ABP_Pawn_C_UpdateStamina_Params
{
	float*                                             Stamina;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.InterruptTauntMulticast
struct ABP_Pawn_C_InterruptTauntMulticast_Params
{
};

// Function BP_Pawn.BP_Pawn_C.InterruptTaunt
struct ABP_Pawn_C_InterruptTaunt_Params
{
};

// Function BP_Pawn.BP_Pawn_C.DeathPlayAnimClient
struct ABP_Pawn_C_DeathPlayAnimClient_Params
{
	class UAnimMontage**                               TauntAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Dead_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.EventPlayTauntAnimClient
struct ABP_Pawn_C_EventPlayTauntAnimClient_Params
{
	class UAnimMontage**                               TauntAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.EventPlayTauntAnim
struct ABP_Pawn_C_EventPlayTauntAnim_Params
{
	class UAnimMontage**                               TauntAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Stun_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.AnimBP_AnimationRequest
struct ABP_Pawn_C_AnimBP_AnimationRequest_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.AnimOnClients
struct ABP_Pawn_C_AnimOnClients_Params
{
	class UAnimMontage**                               AnimMont;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.AnimOnServer
struct ABP_Pawn_C_AnimOnServer_Params
{
	class UAnimMontage**                               AnimMont;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.ReviveCrouching
struct ABP_Pawn_C_ReviveCrouching_Params
{
	bool*                                              Finished_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.CrouchingMulticast
struct ABP_Pawn_C_CrouchingMulticast_Params
{
	bool*                                              Crouch;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.Crouching
struct ABP_Pawn_C_Crouching_Params
{
	bool*                                              SetCrouch;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.CloakOnAllClients
struct ABP_Pawn_C_CloakOnAllClients_Params
{
	int*                                               ClassInt;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.EventCloakServer
struct ABP_Pawn_C_EventCloakServer_Params
{
	int*                                               ClassInt;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.SetFirstPersonEvent
struct ABP_Pawn_C_SetFirstPersonEvent_Params
{
	bool*                                              FirstPerson_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn.BP_Pawn_C.EnterFPMode
struct ABP_Pawn_C_EnterFPMode_Params
{
};

// Function BP_Pawn.BP_Pawn_C.ExecuteUbergraph_BP_Pawn
struct ABP_Pawn_C_ExecuteUbergraph_BP_Pawn_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
