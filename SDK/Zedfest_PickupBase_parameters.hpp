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

// Function PickupBase.PickupBase_C.Set Widget Type
struct APickupBase_C_Set_Widget_Type_Params
{
	TEnumAsByte<E_WidgetTypes>                         Widget_Type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickupBase.PickupBase_C.Set Widget Title
struct APickupBase_C_Set_Widget_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title_Text;                                               // (Parm, OutParm)
};

// Function PickupBase.PickupBase_C.Set Widget Sub Title
struct APickupBase_C_Set_Widget_Sub_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Sub_Title_Text;                                           // (Parm, OutParm)
};

// Function PickupBase.PickupBase_C.Set Widget Level
struct APickupBase_C_Set_Widget_Level_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Level_Text;                                               // (Parm, OutParm)
};

// Function PickupBase.PickupBase_C.Set Widget Amount
struct APickupBase_C_Set_Widget_Amount_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickupBase.PickupBase_C.Set Widget Color
struct APickupBase_C_Set_Widget_Color_Params
{
	struct FLinearColor                                Dark_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickupBase.PickupBase_C.Set Widget Key Binds
struct APickupBase_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_KeyBinds>                         Key_Binds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function PickupBase.PickupBase_C.Set Detail 1
struct APickupBase_C_Set_Detail_1_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function PickupBase.PickupBase_C.Set Detail 2
struct APickupBase_C_Set_Detail_2_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function PickupBase.PickupBase_C.Set Detail 3
struct APickupBase_C_Set_Detail_3_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function PickupBase.PickupBase_C.Set Detail 4
struct APickupBase_C_Set_Detail_4_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

<<<<<<< HEAD
// Function PickupBase.PickupBase_C.OnRep_ItemClass
struct APickupBase_C_OnRep_ItemClass_Params
{
};

=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function PickupBase.PickupBase_C.Set Rarity Color
struct APickupBase_C_Set_Rarity_Color_Params
{
	class UClass**                                     Item_Class;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupBase.PickupBase_C.Toggle Widget
struct APickupBase_C_Toggle_Widget_Params
{
	bool*                                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupBase.PickupBase_C.Interact
struct APickupBase_C_Interact_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupBase.PickupBase_C.MultiCast Set Rarity Color
struct APickupBase_C_MultiCast_Set_Rarity_Color_Params
{
	class UClass**                                     Item_Class;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemCategory>*                        Pickup_Category;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupBase.PickupBase_C.Current Target
struct APickupBase_C_Current_Target_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupBase.PickupBase_C.Clear Target
struct APickupBase_C_Clear_Target_Params
{
};

// Function PickupBase.PickupBase_C.BndEvt__Pickup Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct APickupBase_C_BndEvt__Pickup_Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

<<<<<<< HEAD
// Function PickupBase.PickupBase_C.SetRarityColorEvent
struct APickupBase_C_SetRarityColorEvent_Params
{
};

=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function PickupBase.PickupBase_C.ExecuteUbergraph_PickupBase
struct APickupBase_C_ExecuteUbergraph_PickupBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
