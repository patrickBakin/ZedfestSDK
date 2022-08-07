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

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Widget Type
struct UBP_DetailsWidget_C_Set_Widget_Type_Params
{
	TEnumAsByte<E_WidgetTypes>                         Widget_Type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Widget Title
struct UBP_DetailsWidget_C_Set_Widget_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title_Text;                                               // (Parm, OutParm)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Widget Sub Title
struct UBP_DetailsWidget_C_Set_Widget_Sub_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Sub_Title_Text;                                           // (Parm, OutParm)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Widget Level
struct UBP_DetailsWidget_C_Set_Widget_Level_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Level_Text;                                               // (Parm, OutParm)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Widget Amount
struct UBP_DetailsWidget_C_Set_Widget_Amount_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Widget Color
struct UBP_DetailsWidget_C_Set_Widget_Color_Params
{
	struct FLinearColor                                Dark_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Widget Key Binds
struct UBP_DetailsWidget_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_KeyBinds>                         Key_Binds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Detail 1
struct UBP_DetailsWidget_C_Set_Detail_1_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Detail 2
struct UBP_DetailsWidget_C_Set_Detail_2_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Detail 3
struct UBP_DetailsWidget_C_Set_Detail_3_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Detail 4
struct UBP_DetailsWidget_C_Set_Detail_4_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Stat Count
struct UBP_DetailsWidget_C_Set_Stat_Count_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Details Title
struct UBP_DetailsWidget_C_Set_Details_Title_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Set Details Icon
struct UBP_DetailsWidget_C_Set_Details_Icon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Get Settings
struct UBP_DetailsWidget_C_Get_Settings_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Settings;                                                 // (Parm, OutParm)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Current Target
struct UBP_DetailsWidget_C_Current_Target_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Clear Target
struct UBP_DetailsWidget_C_Clear_Target_Params
{
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Toggle Widget
struct UBP_DetailsWidget_C_Toggle_Widget_Params
{
	bool*                                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.Interact
struct UBP_DetailsWidget_C_Interact_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DetailsWidget.BP_DetailsWidget_C.ExecuteUbergraph_BP_DetailsWidget
struct UBP_DetailsWidget_C_ExecuteUbergraph_BP_DetailsWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
