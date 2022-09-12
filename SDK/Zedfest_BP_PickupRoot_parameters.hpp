#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PickupRoot.BP_PickupRoot_C.Set Widget Type
struct ABP_PickupRoot_C_Set_Widget_Type_Params
{
	TEnumAsByte<E_WidgetTypes>                         Widget_Type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Set Widget Title
struct ABP_PickupRoot_C_Set_Widget_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title_Text;                                               // (Parm, OutParm)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Set Widget Sub Title
struct ABP_PickupRoot_C_Set_Widget_Sub_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Sub_Title_Text;                                           // (Parm, OutParm)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Set Widget Level
struct ABP_PickupRoot_C_Set_Widget_Level_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Level_Text;                                               // (Parm, OutParm)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Set Widget Amount
struct ABP_PickupRoot_C_Set_Widget_Amount_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Set Widget Color
struct ABP_PickupRoot_C_Set_Widget_Color_Params
{
	struct FLinearColor                                Dark_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Set Widget Key Binds
struct ABP_PickupRoot_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_KeyBinds>                         Key_Binds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Set Detail 1
struct ABP_PickupRoot_C_Set_Detail_1_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Set Detail 2
struct ABP_PickupRoot_C_Set_Detail_2_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Set Detail 3
struct ABP_PickupRoot_C_Set_Detail_3_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Set Detail 4
struct ABP_PickupRoot_C_Set_Detail_4_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Show Pickup
struct ABP_PickupRoot_C_Show_Pickup_Params
{
	bool*                                              Destroy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupRoot.BP_PickupRoot_C.UserConstructionScript
struct ABP_PickupRoot_C_UserConstructionScript_Params
{
};

// Function BP_PickupRoot.BP_PickupRoot_C.PickupFloatAnimation__FinishedFunc
struct ABP_PickupRoot_C_PickupFloatAnimation__FinishedFunc_Params
{
};

// Function BP_PickupRoot.BP_PickupRoot_C.PickupFloatAnimation__UpdateFunc
struct ABP_PickupRoot_C_PickupFloatAnimation__UpdateFunc_Params
{
};

// Function BP_PickupRoot.BP_PickupRoot_C.PlayFloatAnimation
struct ABP_PickupRoot_C_PlayFloatAnimation_Params
{
};

// Function BP_PickupRoot.BP_PickupRoot_C.DestroyCountdown
struct ABP_PickupRoot_C_DestroyCountdown_Params
{
};

// Function BP_PickupRoot.BP_PickupRoot_C.PickupEffect
struct ABP_PickupRoot_C_PickupEffect_Params
{
};

// Function BP_PickupRoot.BP_PickupRoot_C.ReceiveBeginPlay
struct ABP_PickupRoot_C_ReceiveBeginPlay_Params
{
};

// Function BP_PickupRoot.BP_PickupRoot_C.Toggle Widget
struct ABP_PickupRoot_C_Toggle_Widget_Params
{
	bool*                                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupRoot.BP_PickupRoot_C.PickupEvent
struct ABP_PickupRoot_C_PickupEvent_Params
{
};

// Function BP_PickupRoot.BP_PickupRoot_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
struct ABP_PickupRoot_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Current Target
struct ABP_PickupRoot_C_Current_Target_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupRoot.BP_PickupRoot_C.Clear Target
struct ABP_PickupRoot_C_Clear_Target_Params
{
};

// Function BP_PickupRoot.BP_PickupRoot_C.Interact
struct ABP_PickupRoot_C_Interact_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupRoot.BP_PickupRoot_C.ExecuteUbergraph_BP_PickupRoot
struct ABP_PickupRoot_C_ExecuteUbergraph_BP_PickupRoot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
