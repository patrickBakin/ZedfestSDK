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

// Function CraftingStation.CraftingStation_C.Check if CS supports this Weapon
struct ACraftingStation_C_Check_if_CS_supports_this_Weapon_Params
{
	class UObject**                                    Weapon_to_Check;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Supported_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingStation.CraftingStation_C.Stop Timer to use Crafting Station
struct ACraftingStation_C_Stop_Timer_to_use_Crafting_Station_Params
{
};

// Function CraftingStation.CraftingStation_C.StartUpgradeWeapon
struct ACraftingStation_C_StartUpgradeWeapon_Params
{
};

// Function CraftingStation.CraftingStation_C.Start Timer to use Crafting Station
struct ACraftingStation_C_Start_Timer_to_use_Crafting_Station_Params
{
	int*                                               Weapon_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AInventoryData_C**                           Inventory_Data;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingStation.CraftingStation_C.Send Weapon to Crafting Station
struct ACraftingStation_C_Send_Weapon_to_Crafting_Station_Params
{
	int*                                               Weapon_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AInventoryData_C**                           Inventory_Data;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingStation.CraftingStation_C.ReceiveTick
struct ACraftingStation_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingStation.CraftingStation_C.ExecuteUbergraph_CraftingStation
struct ACraftingStation_C_ExecuteUbergraph_CraftingStation_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
