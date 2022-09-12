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

// Function InventoryManager.InventoryManager_C.Damage System
struct UInventoryManager_C_Damage_System_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Decrease Player Shield
struct UInventoryManager_C_Decrease_Player_Shield_Params
{
	float*                                             Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Increase Player Shield
struct UInventoryManager_C_Increase_Player_Shield_Params
{
	float*                                             Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Set Player Shield
struct UInventoryManager_C_Set_Player_Shield_Params
{
	float*                                             Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Get Player Shield
struct UInventoryManager_C_Get_Player_Shield_Params
{
	float                                              Player_Shield;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Get Player Health
struct UInventoryManager_C_Get_Player_Health_Params
{
	float                                              Player_Health;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Set Player Health
struct UInventoryManager_C_Set_Player_Health_Params
{
	float*                                             Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Decrease Player Health
struct UInventoryManager_C_Decrease_Player_Health_Params
{
	float*                                             Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Increase Player Health
struct UInventoryManager_C_Increase_Player_Health_Params
{
	float*                                             Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Update Inventory View
struct UInventoryManager_C_Update_Inventory_View_Params
{
};

// Function InventoryManager.InventoryManager_C.Server Select Item
struct UInventoryManager_C_Server_Select_Item_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryType>*                       SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Server Drop Selected Item
struct UInventoryManager_C_Server_Drop_Selected_Item_Params
{
	TEnumAsByte<EInventoryType>*                       Inventory_Type;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Client Update Inventory View
struct UInventoryManager_C_Client_Update_Inventory_View_Params
{
};

// Function InventoryManager.InventoryManager_C.Server Cancel Use
struct UInventoryManager_C_Server_Cancel_Use_Params
{
};

// Function InventoryManager.InventoryManager_C.Server Split Item
struct UInventoryManager_C_Server_Split_Item_Params
{
};

// Function InventoryManager.InventoryManager_C.Client Send Notification
struct UInventoryManager_C_Client_Send_Notification_Params
{
	struct FText*                                      Menssage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InventoryManager.InventoryManager_C.Server Stop Use Weapon
struct UInventoryManager_C_Server_Stop_Use_Weapon_Params
{
	bool*                                              IsShootWeapon_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsDead_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Send Player Camera and Sprint Arm to Inventory System
struct UInventoryManager_C_Send_Player_Camera_and_Sprint_Arm_to_Inventory_System_Params
{
	class UCameraComponent**                           Player_Camera;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent**                        Sprint_Arm;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.ReceiveBeginPlay
struct UInventoryManager_C_ReceiveBeginPlay_Params
{
};

// Function InventoryManager.InventoryManager_C.Server Reload Selected Weapon
struct UInventoryManager_C_Server_Reload_Selected_Weapon_Params
{
};

// Function InventoryManager.InventoryManager_C.Server Use Weapon
struct UInventoryManager_C_Server_Use_Weapon_Params
{
};

// Function InventoryManager.InventoryManager_C.Server Consume Item
struct UInventoryManager_C_Server_Consume_Item_Params
{
};

// Function InventoryManager.InventoryManager_C.Server Use Crafting Station
struct UInventoryManager_C_Server_Use_Crafting_Station_Params
{
};

// Function InventoryManager.InventoryManager_C.Server Select Slot
struct UInventoryManager_C_Server_Select_Slot_Params
{
	TEnumAsByte<ESlotsIndex>*                          Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Server Select Previous Slot
struct UInventoryManager_C_Server_Select_Previous_Slot_Params
{
};

// Function InventoryManager.InventoryManager_C.Server Select Next Slot
struct UInventoryManager_C_Server_Select_Next_Slot_Params
{
};

// Function InventoryManager.InventoryManager_C.Server Pick Item Found
struct UInventoryManager_C_Server_Pick_Item_Found_Params
{
};

// Function InventoryManager.InventoryManager_C.InventoryManagerWeapons
struct UInventoryManager_C_InventoryManagerWeapons_Params
{
	class ABP_Pawn_C**                                 BP_Pawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     MainWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SecondaryWeapon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     MeleeWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     GrenadeWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxPlayerHealth;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxPlayerShield;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RunSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmmoAmountMultiplier;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ThrowableAmount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              StartWFullArmor_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SmallMedicKitAmount;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BigMedicKitAmount;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WeaponMagSizeMultiplier;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AimRunSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Torpedo2Jumpcount;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HealthRegen;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClassIntSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MeleeWeaponDamageMultiplier;                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              BonebreakerPerk34Selected;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              BonebreakerPerk36Selected;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FromLobby_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DoctorPerk29Selected_;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              NukerPerk12Selected_;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              NukerPerk13Selected_;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              NukerPerk15Selected_;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               C;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              W_StorePerkSwitcher_;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Server Use Zoom Button
struct UInventoryManager_C_Server_Use_Zoom_Button_Params
{
	bool*                                              ButtonDown_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.ServerDropCurrentItem
struct UInventoryManager_C_ServerDropCurrentItem_Params
{
};

// Function InventoryManager.InventoryManager_C.DamageBloodScreen
struct UInventoryManager_C_DamageBloodScreen_Params
{
	float*                                             HP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Increase_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.ServerPlaceSpecialItem
struct UInventoryManager_C_ServerPlaceSpecialItem_Params
{
};

// Function InventoryManager.InventoryManager_C.CheatAddHealth
struct UInventoryManager_C_CheatAddHealth_Params
{
	bool*                                              Invincible_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Timer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.ClientUseWeapon
struct UInventoryManager_C_ClientUseWeapon_Params
{
};

// Function InventoryManager.InventoryManager_C.ClientStopUseWeapon
struct UInventoryManager_C_ClientStopUseWeapon_Params
{
	bool*                                              IsShootWeapon_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.InventoryManageWeaponsOnly
struct UInventoryManager_C_InventoryManageWeaponsOnly_Params
{
	class UClass**                                     MainWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SecondaryWeapon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     MeleeWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     GrenadeWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.HealthRegen1
struct UInventoryManager_C_HealthRegen1_Params
{
};

// Function InventoryManager.InventoryManager_C.Server Swap Item
struct UInventoryManager_C_Server_Swap_Item_Params
{
	int*                                               FirstSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SecondSlotIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.Server Move Item To
struct UInventoryManager_C_Server_Move_Item_To_Params
{
	int*                                               Old_Slot_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               New_Slot_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryManager.InventoryManager_C.HealthRegenEvent
struct UInventoryManager_C_HealthRegenEvent_Params
{
};

// Function InventoryManager.InventoryManager_C.ExecuteUbergraph_InventoryManager
struct UInventoryManager_C_ExecuteUbergraph_InventoryManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
