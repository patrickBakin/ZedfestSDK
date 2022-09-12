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

// Function InventoryData.InventoryData_C.GetChar_Mesh
struct AInventoryData_C_GetChar_Mesh_Params
{
	class USkeletalMeshComponent*                      SkMesh;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_CurrentWeapon
struct AInventoryData_C_GetChar_CurrentWeapon_Params
{
	class AWeaponFirearmBase_C*                        CurrentWeaponReference;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_SpeedAndDirection
struct AInventoryData_C_GetChar_SpeedAndDirection_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_IsDead
struct AInventoryData_C_GetChar_IsDead_Params
{
	bool                                               IsDead;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_IsCrouching
struct AInventoryData_C_GetChar_IsCrouching_Params
{
	bool                                               IsCrouching;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_IsJumping
struct AInventoryData_C_GetChar_IsJumping_Params
{
	bool                                               IsJumping;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_IsPlayAnim
struct AInventoryData_C_GetChar_IsPlayAnim_Params
{
	bool                                               IsPlayAnim;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_PitchAndYaw
struct AInventoryData_C_GetChar_PitchAndYaw_Params
{
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_DeathAnimNumber
struct AInventoryData_C_GetChar_DeathAnimNumber_Params
{
	int                                                NumberOfDeathAnim;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_IsSprinting
struct AInventoryData_C_GetChar_IsSprinting_Params
{
	bool                                               IsSprinting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_HasCharWeaponsComponent
struct AInventoryData_C_GetChar_HasCharWeaponsComponent_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_CharacterWeaponsComponent
struct AInventoryData_C_GetChar_CharacterWeaponsComponent_Params
{
<<<<<<< HEAD
	int                                                CWC_Reference;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
=======
	class UAC_CharacterWeapons_C*                      CWC_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
};

// Function InventoryData.InventoryData_C.CWC_GetHUD
struct AInventoryData_C_CWC_GetHUD_Params
{
	class UW_WpnCompHUD_C*                             HUD_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_CurrentCamera
struct AInventoryData_C_GetChar_CurrentCamera_Params
{
	class UCameraComponent*                            CurrentCamera;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WeaponCamActive;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_IsCloaked
struct AInventoryData_C_GetChar_IsCloaked_Params
{
	bool                                               Cloak;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_CurrentHealth
struct AInventoryData_C_GetChar_CurrentHealth_Params
{
	float                                              CurrentHP;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_IsZooming
struct AInventoryData_C_GetChar_IsZooming_Params
{
	bool                                               Zoom;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.GetChar_SpeedAndDirectionClient
struct AInventoryData_C_GetChar_SpeedAndDirectionClient_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.StartReloadTimer
struct AInventoryData_C_StartReloadTimer_Params
{
};

// Function InventoryData.InventoryData_C.PlaceSpecialItem
struct AInventoryData_C_PlaceSpecialItem_Params
{
};

// Function InventoryData.InventoryData_C.DestroyInventoryOnly
struct AInventoryData_C_DestroyInventoryOnly_Params
{
};

// Function InventoryData.InventoryData_C.DisableZoomButton
struct AInventoryData_C_DisableZoomButton_Params
{
	bool*                                              ButtonDown_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.WeaponHasZoom?
struct AInventoryData_C_WeaponHasZoom__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	float                                              Weapon_Zoom;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.AnimationMontage
struct AInventoryData_C_AnimationMontage_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Player is stopped
struct AInventoryData_C_Player_is_stopped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Use Weapon
struct AInventoryData_C_Use_Weapon_Params
{
};

// Function InventoryData.InventoryData_C.Open Loot Chest 
struct AInventoryData_C_Open_Loot_Chest__Params
{
};

// Function InventoryData.InventoryData_C.Use Crafting Station
struct AInventoryData_C_Use_Crafting_Station_Params
{
};

// Function InventoryData.InventoryData_C.Consume Item
struct AInventoryData_C_Consume_Item_Params
{
};

// Function InventoryData.InventoryData_C.Get Trace from Actor Eyes View
struct AInventoryData_C_Get_Trace_from_Actor_Eyes_View_Params
{
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Get Camera Trace
struct AInventoryData_C_Get_Camera_Trace_Params
{
	float*                                             Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Get Weapon Zoom
struct AInventoryData_C_Get_Weapon_Zoom_Params
{
	float                                              Zoom;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Spawn Throwables
struct AInventoryData_C_Spawn_Throwables_Params
{
	struct FThrowablesData*                            Throwables_Data;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Spawned_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Stop Reload
struct AInventoryData_C_Stop_Reload_Params
{
};

// Function InventoryData.InventoryData_C.Reload Selected Weapon
struct AInventoryData_C_Reload_Selected_Weapon_Params
{
};

// Function InventoryData.InventoryData_C.Get Ammo
struct AInventoryData_C_Get_Ammo_Params
{
	class UClass**                                     Ammo_Type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AItemBase_C*                                 Ammo;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Ammo_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Melee Weapon Trace
struct AInventoryData_C_Melee_Weapon_Trace_Params
{
	float*                                             Weapon_Range;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.OnRep_Weapon Zoom
struct AInventoryData_C_OnRep_Weapon_Zoom_Params
{
};

// Function InventoryData.InventoryData_C. Disable Weapon Zoom
struct AInventoryData_C__Disable_Weapon_Zoom_Params
{
	bool*                                              Enable_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Spawn Projectile
struct AInventoryData_C_Spawn_Projectile_Params
{
	float*                                             Weapon_Damage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Spread_With_Zoom;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Spread_Without_Zoom;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponType>*                          Weapon_Type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Explosion_Range;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Stop Use Weapon
struct AInventoryData_C_Stop_Use_Weapon_Params
{
	bool*                                              IsShootWeapon_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Find Previous Item
struct AInventoryData_C_Find_Previous_Item_Params
{
	int                                                Found_Item_Index;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Find Next Item
struct AInventoryData_C_Find_Next_Item_Params
{
	int                                                Found_Item_Index;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Remove Weapon 
struct AInventoryData_C_Remove_Weapon__Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Get Weapon
struct AInventoryData_C_Get_Weapon_Params
{
	int*                                               Weapon_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Got_It_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AWeaponFirearmBase_C*                        weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Open Loot Chest
struct AInventoryData_C_Open_Loot_Chest_Params
{
};

// Function InventoryData.InventoryData_C.Split Item
struct AInventoryData_C_Split_Item_Params
{
};

// Function InventoryData.InventoryData_C.Can Split Inventory Item
struct AInventoryData_C_Can_Split_Inventory_Item_Params
{
	bool                                               Can_;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Can Split Bar Item
struct AInventoryData_C_Can_Split_Bar_Item_Params
{
	bool                                               Can_;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Get Drop Location
struct AInventoryData_C_Get_Drop_Location_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Full Inventory?
struct AInventoryData_C_Full_Inventory__Params
{
	bool                                               Full_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Find Empty Slot
struct AInventoryData_C_Find_Empty_Slot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Find Item to Stack
struct AInventoryData_C_Find_Item_to_Stack_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryType>*                       Inventory_Type;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InventoryAmount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Get Consumable Data from Selection
struct AInventoryData_C_Get_Consumable_Data_from_Selection_Params
{
	struct FConsumableData                             Consumable_Data;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Cancel Use
struct AInventoryData_C_Cancel_Use_Params
{
	bool*                                              WasInteractButtonClicked_;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Get Timer Use From Selection
struct AInventoryData_C_Get_Timer_Use_From_Selection_Params
{
	float                                              Timer_To_Consume;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.StartConsumeItem
struct AInventoryData_C_StartConsumeItem_Params
{
};

// Function InventoryData.InventoryData_C.Get Item Category From Selection
struct AInventoryData_C_Get_Item_Category_From_Selection_Params
{
	TEnumAsByte<EItemCategory>                         Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Selected Item to Drop
struct AInventoryData_C_Selected_Item_to_Drop_Params
{
	TEnumAsByte<EInventoryType>*                       Inventory_Type;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Get Inventory Slots
struct AInventoryData_C_Get_Inventory_Slots_Params
{
	TArray<class AItemBase_C*>                         Inventory_Slots;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function InventoryData.InventoryData_C.Drop Item
struct AInventoryData_C_Drop_Item_Params
{
	class AItemBase_C**                                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Split_Amount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDropAction>*                          Drop_Type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Destroy Inventory
struct AInventoryData_C_Destroy_Inventory_Params
{
};

// Function InventoryData.InventoryData_C.Remove Inventory Item
struct AInventoryData_C_Remove_Inventory_Item_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERemoveItemAction>*                    Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryType>*                       Inventory_Type;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Select Previous Slot
struct AInventoryData_C_Select_Previous_Slot_Params
{
};

// Function InventoryData.InventoryData_C.Select Next Slot
struct AInventoryData_C_Select_Next_Slot_Params
{
	bool*                                              bItemDestroyed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Select Slot
struct AInventoryData_C_Select_Slot_Params
{
	TEnumAsByte<ESlotsIndex>*                          Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Pawn_C**                                 NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Move Item To
struct AInventoryData_C_Move_Item_To_Params
{
	int*                                               Old_Slot_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               New_Slot_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Swap Item
struct AInventoryData_C_Swap_Item_Params
{
	int*                                               FirstIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SecondIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Select Item
struct AInventoryData_C_Select_Item_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryType>*                       SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Has Item in this Inventory Slot
struct AInventoryData_C_Has_Item_in_this_Inventory_Slot_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryType>*                       Inventory_Type;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Pick Item Found
struct AInventoryData_C_Pick_Item_Found_Params
{
};

// Function InventoryData.InventoryData_C.Find Item or Structure
struct AInventoryData_C_Find_Item_or_Structure_Params
{
	struct FHitResult*                                 HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              ReturnValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Set Inventory Item
struct AInventoryData_C_Set_Inventory_Item_Params
{
	class AItemBase_C**                                New_Item;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EInventoryType>*                       Inventory_Type;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Get Inventory Item
struct AInventoryData_C_Get_Inventory_Item_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryType>*                       Inventory_Type;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AItemBase_C*                                 Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Timeline_0__FinishedFunc
struct AInventoryData_C_Timeline_0__FinishedFunc_Params
{
};

// Function InventoryData.InventoryData_C.Timeline_0__UpdateFunc
struct AInventoryData_C_Timeline_0__UpdateFunc_Params
{
};

// Function InventoryData.InventoryData_C.Zoom__FinishedFunc
struct AInventoryData_C_Zoom__FinishedFunc_Params
{
};

// Function InventoryData.InventoryData_C.Zoom__UpdateFunc
struct AInventoryData_C_Zoom__UpdateFunc_Params
{
};

// Function InventoryData.InventoryData_C.PMSBuyWeapon
struct AInventoryData_C_PMSBuyWeapon_Params
{
	class UClass**                                     Primary;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Primary_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.PMSBuyConsumable
struct AInventoryData_C_PMSBuyConsumable_Params
{
	class UClass**                                     Consumable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.PMS_SellWeapon
struct AInventoryData_C_PMS_SellWeapon_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.PMSBuyAmmo
struct AInventoryData_C_PMSBuyAmmo_Params
{
	class UClass**                                     AmmoType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FillUpFull_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    WeaponName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Bar_Selection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.PMSBuyMeleeWeapon
struct AInventoryData_C_PMSBuyMeleeWeapon_Params
{
	class UClass**                                     Melee;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.PMSBuyThrowable
struct AInventoryData_C_PMSBuyThrowable_Params
{
	class UClass**                                     Throwable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.PMSRefillThrowable
struct AInventoryData_C_PMSRefillThrowable_Params
{
	class UClass**                                     Throwable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FillUpFull_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.PMSBuySpecialItem
struct AInventoryData_C_PMSBuySpecialItem_Params
{
	class UClass**                                     SpecialItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.DecreaseSpecialItemWithDelay
struct AInventoryData_C_DecreaseSpecialItemWithDelay_Params
{
};

// Function InventoryData.InventoryData_C.SpawnFullGroundParticles
struct AInventoryData_C_SpawnFullGroundParticles_Params
{
};

// Function InventoryData.InventoryData_C.SetWeapons_WeaponsOnly
struct AInventoryData_C_SetWeapons_WeaponsOnly_Params
{
	class UClass**                                     MainWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SecondaryWeapon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     MeleeWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     GrenadeWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.DestroyGroundParticlesAll
struct AInventoryData_C_DestroyGroundParticlesAll_Params
{
};

// Function InventoryData.InventoryData_C.SpawnGroundParticles
struct AInventoryData_C_SpawnGroundParticles_Params
{
};

// Function InventoryData.InventoryData_C.InventoryTrace
struct AInventoryData_C_InventoryTrace_Params
{
	struct FHitResult*                                 HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              ReturnValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Swap
struct AInventoryData_C_Swap_Params
{
};

// Function InventoryData.InventoryData_C.EventInventoryCloakWeapons
struct AInventoryData_C_EventInventoryCloakWeapons_Params
{
	bool*                                              Cloak;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Event Player Destroyed
struct AInventoryData_C_Event_Player_Destroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.SetConsumeBarVisibility
struct AInventoryData_C_SetConsumeBarVisibility_Params
{
	bool*                                              Visible_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.SetConsumeBarPercentEvent
struct AInventoryData_C_SetConsumeBarPercentEvent_Params
{
};

// Function InventoryData.InventoryData_C.ConsumeReloadTimer
struct AInventoryData_C_ConsumeReloadTimer_Params
{
};

// Function InventoryData.InventoryData_C.StartConsumeTimerEvent
struct AInventoryData_C_StartConsumeTimerEvent_Params
{
};

// Function InventoryData.InventoryData_C.EventServerCalloutAnnouncement
struct AInventoryData_C_EventServerCalloutAnnouncement_Params
{
	class USoundBase**                                 Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.TrajectoryEvent
struct AInventoryData_C_TrajectoryEvent_Params
{
};

// Function InventoryData.InventoryData_C.SetWeaponsInventory
struct AInventoryData_C_SetWeaponsInventory_Params
{
	class ABP_Pawn_C**                                 CharReference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     PrimaryWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SecondaryWeapon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     MeleeWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     GrenadeWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmmoAmountMultiplier;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ThrowableAmount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SmallMedicKitAmount;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BigMedicKitAmount;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WeaponMagSizeMultiplier;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClassIntSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MeleeWeaponDamageMultiplier;                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              BonebreakerPerk34Selected;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              BonebreakerPerk36Selected;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FromLobby_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Throw Throwable
struct AInventoryData_C_Throw_Throwable_Params
{
};

// Function InventoryData.InventoryData_C.TrajectoryReleased
struct AInventoryData_C_TrajectoryReleased_Params
{
};

// Function InventoryData.InventoryData_C.TrajectoryPressed
struct AInventoryData_C_TrajectoryPressed_Params
{
};

// Function InventoryData.InventoryData_C.SelectSlot1
struct AInventoryData_C_SelectSlot1_Params
{
	TEnumAsByte<ESlotsIndex>*                          Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Weapon Zoom Timer
struct AInventoryData_C_Weapon_Zoom_Timer_Params
{
	bool*                                              Enable_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.Event to Update Inventory
struct AInventoryData_C_Event_to_Update_Inventory_Params
{
};

// Function InventoryData.InventoryData_C.ReceiveBeginPlay
struct AInventoryData_C_ReceiveBeginPlay_Params
{
};

// Function InventoryData.InventoryData_C.StopMeleeTrace
struct AInventoryData_C_StopMeleeTrace_Params
{
};

// Function InventoryData.InventoryData_C.ArmorPickupInterface
struct AInventoryData_C_ArmorPickupInterface_Params
{
	class ABP_RubberArmor_C**                          PickupRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Autopickup_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.WPN_CantShoot
struct AInventoryData_C_WPN_CantShoot_Params
{
};

// Function InventoryData.InventoryData_C.CWC_SwitchCamera
struct AInventoryData_C_CWC_SwitchCamera_Params
{
};

// Function InventoryData.InventoryData_C.WPN_SetWeaponToInteract
struct AInventoryData_C_WPN_SetWeaponToInteract_Params
{
<<<<<<< HEAD
	int*                                               WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
=======
	class ABPA_ParentWeapon_C**                        WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	bool*                                              AutoPickUp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.AmmoPickup
struct AInventoryData_C_AmmoPickup_Params
{
	TEnumAsByte<E_AddAmmoTypes>*                       Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmountAmmo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WeaponTypes>*                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ProjectileType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.AnimBP_AnimationRequest
struct AInventoryData_C_AnimBP_AnimationRequest_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.WPN_Recoil
struct AInventoryData_C_WPN_Recoil_Params
{
	float*                                             Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.CWC_RefreshWeaponInHUD
struct AInventoryData_C_CWC_RefreshWeaponInHUD_Params
{
};

// Function InventoryData.InventoryData_C.PC_CharInitialization
struct AInventoryData_C_PC_CharInitialization_Params
{
	class ABP_Base_HordeController_C**                 PCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UW_WpnCompHUD_C**                            WPNHUD;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.PC_SetHUD
struct AInventoryData_C_PC_SetHUD_Params
{
	class UW_WpnCompHUD_C**                            HUD_Reference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.SpawnThrowableEvent
struct AInventoryData_C_SpawnThrowableEvent_Params
{
	class UClass**                                     Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryData.InventoryData_C.ExecuteUbergraph_InventoryData
struct AInventoryData_C_ExecuteUbergraph_InventoryData_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
