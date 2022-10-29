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

// Function BP_VirusMachine.BP_VirusMachine_C.Set Widget Type
struct ABP_VirusMachine_C_Set_Widget_Type_Params
{
	TEnumAsByte<E_WidgetTypes>                         Widget_Type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Set Widget Title
struct ABP_VirusMachine_C_Set_Widget_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title_Text;                                               // (Parm, OutParm)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Set Widget Sub Title
struct ABP_VirusMachine_C_Set_Widget_Sub_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Sub_Title_Text;                                           // (Parm, OutParm)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Set Widget Level
struct ABP_VirusMachine_C_Set_Widget_Level_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Level_Text;                                               // (Parm, OutParm)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Set Widget Amount
struct ABP_VirusMachine_C_Set_Widget_Amount_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Set Widget Color
struct ABP_VirusMachine_C_Set_Widget_Color_Params
{
	struct FLinearColor                                Dark_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Set Widget Key Binds
struct ABP_VirusMachine_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_KeyBinds>                         Key_Binds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Set Detail 1
struct ABP_VirusMachine_C_Set_Detail_1_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Set Detail 2
struct ABP_VirusMachine_C_Set_Detail_2_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Set Detail 3
struct ABP_VirusMachine_C_Set_Detail_3_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Set Detail 4
struct ABP_VirusMachine_C_Set_Detail_4_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Current Target
struct ABP_VirusMachine_C_Current_Target_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Clear Target
struct ABP_VirusMachine_C_Clear_Target_Params
{
};

// Function BP_VirusMachine.BP_VirusMachine_C.Toggle Widget
struct ABP_VirusMachine_C_Toggle_Widget_Params
{
	bool*                                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VirusMachine.BP_VirusMachine_C.Interact
struct ABP_VirusMachine_C_Interact_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VirusMachine.BP_VirusMachine_C.ReceiveBeginPlay
struct ABP_VirusMachine_C_ReceiveBeginPlay_Params
{
};

// Function BP_VirusMachine.BP_VirusMachine_C.VirusMachineEvent
struct ABP_VirusMachine_C_VirusMachineEvent_Params
{
	int*                                               Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Finished_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VirusMachine.BP_VirusMachine_C.SoundVfxEvent
struct ABP_VirusMachine_C_SoundVfxEvent_Params
{
};

// Function BP_VirusMachine.BP_VirusMachine_C.ExecuteUbergraph_BP_VirusMachine
struct ABP_VirusMachine_C_ExecuteUbergraph_BP_VirusMachine_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
