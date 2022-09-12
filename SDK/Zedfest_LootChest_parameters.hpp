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

// Function LootChest.LootChest_C.Set Widget Type
struct ALootChest_C_Set_Widget_Type_Params
{
	TEnumAsByte<E_WidgetTypes>                         Widget_Type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootChest.LootChest_C.Set Widget Title
struct ALootChest_C_Set_Widget_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title_Text;                                               // (Parm, OutParm)
};

// Function LootChest.LootChest_C.Set Widget Sub Title
struct ALootChest_C_Set_Widget_Sub_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Sub_Title_Text;                                           // (Parm, OutParm)
};

// Function LootChest.LootChest_C.Set Widget Level
struct ALootChest_C_Set_Widget_Level_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Level_Text;                                               // (Parm, OutParm)
};

// Function LootChest.LootChest_C.Set Widget Amount
struct ALootChest_C_Set_Widget_Amount_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootChest.LootChest_C.Set Widget Color
struct ALootChest_C_Set_Widget_Color_Params
{
	struct FLinearColor                                Dark_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootChest.LootChest_C.Set Widget Key Binds
struct ALootChest_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_KeyBinds>                         Key_Binds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function LootChest.LootChest_C.Set Detail 1
struct ALootChest_C_Set_Detail_1_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function LootChest.LootChest_C.Set Detail 2
struct ALootChest_C_Set_Detail_2_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function LootChest.LootChest_C.Set Detail 3
struct ALootChest_C_Set_Detail_3_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function LootChest.LootChest_C.Set Detail 4
struct ALootChest_C_Set_Detail_4_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function LootChest.LootChest_C.Stop Timer to Open Loot Chest
struct ALootChest_C_Stop_Timer_to_Open_Loot_Chest_Params
{
};

// Function LootChest.LootChest_C.Start Timer to Open Loot Chest
struct ALootChest_C_Start_Timer_to_Open_Loot_Chest_Params
{
};

// Function LootChest.LootChest_C.Get Random Item
struct ALootChest_C_Get_Random_Item_Params
{
	struct FItemsToSpawn                               Random_Item_To_Spawn;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootChest.LootChest_C.SpawnItems
struct ALootChest_C_SpawnItems_Params
{
};

// Function LootChest.LootChest_C.Get Spawn Location
struct ALootChest_C_Get_Spawn_Location_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function LootChest.LootChest_C.UserConstructionScript
struct ALootChest_C_UserConstructionScript_Params
{
};

// Function LootChest.LootChest_C.Toggle Widget
struct ALootChest_C_Toggle_Widget_Params
{
	bool*                                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootChest.LootChest_C.MultiCast Set Loot Chest Mesh
struct ALootChest_C_MultiCast_Set_Loot_Chest_Mesh_Params
{
};

// Function LootChest.LootChest_C.Multicast Open Chest
struct ALootChest_C_Multicast_Open_Chest_Params
{
};

// Function LootChest.LootChest_C.Interact
struct ALootChest_C_Interact_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootChest.LootChest_C.Current Target
struct ALootChest_C_Current_Target_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootChest.LootChest_C.Clear Target
struct ALootChest_C_Clear_Target_Params
{
};

// Function LootChest.LootChest_C.ExecuteUbergraph_LootChest
struct ALootChest_C_ExecuteUbergraph_LootChest_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
