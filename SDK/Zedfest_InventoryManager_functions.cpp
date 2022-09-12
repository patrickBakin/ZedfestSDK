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
//Functions
//---------------------------------------------------------------------------

// Function InventoryManager.InventoryManager_C.Damage System
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Damage_System(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Damage System");

	UInventoryManager_C_Damage_System_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Decrease Player Shield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Decrease_Player_Shield(float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Decrease Player Shield");

	UInventoryManager_C_Decrease_Player_Shield_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Increase Player Shield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Increase_Player_Shield(float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Increase Player Shield");

	UInventoryManager_C_Increase_Player_Shield_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Set Player Shield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Set_Player_Shield(float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Set Player Shield");

	UInventoryManager_C_Set_Player_Shield_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Get Player Shield
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Player_Shield                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Get_Player_Shield(float* Player_Shield)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Get Player Shield");

	UInventoryManager_C_Get_Player_Shield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Shield != nullptr)
		*Player_Shield = params.Player_Shield;
}


// Function InventoryManager.InventoryManager_C.Get Player Health
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Player_Health                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Get_Player_Health(float* Player_Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Get Player Health");

	UInventoryManager_C_Get_Player_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Health != nullptr)
		*Player_Health = params.Player_Health;
}


// Function InventoryManager.InventoryManager_C.Set Player Health
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Set_Player_Health(float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Set Player Health");

	UInventoryManager_C_Set_Player_Health_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Decrease Player Health
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Decrease_Player_Health(float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Decrease Player Health");

	UInventoryManager_C_Decrease_Player_Health_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Increase Player Health
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Increase_Player_Health(float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Increase Player Health");

	UInventoryManager_C_Increase_Player_Health_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Update Inventory View
// (Public, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::Update_Inventory_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Update Inventory View");

	UInventoryManager_C_Update_Inventory_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Select Item
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryType>*   SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Server_Select_Item(int* Index, TEnumAsByte<EInventoryType>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Select Item");

	UInventoryManager_C_Server_Select_Item_Params params;
	params.Index = Index;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Drop Selected Item
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryType>*   Inventory_Type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Server_Drop_Selected_Item(TEnumAsByte<EInventoryType>* Inventory_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Drop Selected Item");

	UInventoryManager_C_Server_Drop_Selected_Item_Params params;
	params.Inventory_Type = Inventory_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Client Update Inventory View
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::Client_Update_Inventory_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Client Update Inventory View");

	UInventoryManager_C_Client_Update_Inventory_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Cancel Use
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::Server_Cancel_Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Cancel Use");

	UInventoryManager_C_Server_Cancel_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Split Item
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::Server_Split_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Split Item");

	UInventoryManager_C_Server_Split_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Client Send Notification
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Menssage                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UInventoryManager_C::Client_Send_Notification(struct FText* Menssage)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Client Send Notification");

	UInventoryManager_C_Client_Send_Notification_Params params;
	params.Menssage = Menssage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Stop Use Weapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsShootWeapon_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsDead_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Server_Stop_Use_Weapon(bool* IsShootWeapon_, bool* IsDead_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Stop Use Weapon");

	UInventoryManager_C_Server_Stop_Use_Weapon_Params params;
	params.IsShootWeapon_ = IsShootWeapon_;
	params.IsDead_ = IsDead_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Send Player Camera and Sprint Arm to Inventory System
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent**       Player_Camera                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USpringArmComponent**    Sprint_Arm                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventoryManager_C::Send_Player_Camera_and_Sprint_Arm_to_Inventory_System(class UCameraComponent** Player_Camera, class USpringArmComponent** Sprint_Arm)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Send Player Camera and Sprint Arm to Inventory System");

	UInventoryManager_C_Send_Player_Camera_and_Sprint_Arm_to_Inventory_System_Params params;
	params.Player_Camera = Player_Camera;
	params.Sprint_Arm = Sprint_Arm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UInventoryManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.ReceiveBeginPlay");

	UInventoryManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Reload Selected Weapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::Server_Reload_Selected_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Reload Selected Weapon");

	UInventoryManager_C_Server_Reload_Selected_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Use Weapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::Server_Use_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Use Weapon");

	UInventoryManager_C_Server_Use_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Consume Item
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::Server_Consume_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Consume Item");

	UInventoryManager_C_Server_Consume_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Use Crafting Station
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::Server_Use_Crafting_Station()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Use Crafting Station");

	UInventoryManager_C_Server_Use_Crafting_Station_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Select Slot
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlotsIndex>*      Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Server_Select_Slot(TEnumAsByte<ESlotsIndex>* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Select Slot");

	UInventoryManager_C_Server_Select_Slot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Select Previous Slot
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::Server_Select_Previous_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Select Previous Slot");

	UInventoryManager_C_Server_Select_Previous_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Select Next Slot
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::Server_Select_Next_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Select Next Slot");

	UInventoryManager_C_Server_Select_Next_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Pick Item Found
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::Server_Pick_Item_Found()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Pick Item Found");

	UInventoryManager_C_Server_Pick_Item_Found_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.InventoryManagerWeapons
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Pawn_C**             BP_Pawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 MainWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SecondaryWeapon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 MeleeWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 GrenadeWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxPlayerHealth                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxPlayerShield                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RunSpeed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         AmmoAmountMultiplier           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ThrowableAmount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          StartWFullArmor_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SmallMedicKitAmount            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           BigMedicKitAmount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WeaponMagSizeMultiplier        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         AimRunSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Torpedo2Jumpcount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HealthRegen                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClassIntSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MeleeWeaponDamageMultiplier    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          BonebreakerPerk34Selected      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          BonebreakerPerk36Selected      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FromLobby_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DoctorPerk29Selected_          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          NukerPerk12Selected_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          NukerPerk13Selected_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          NukerPerk15Selected_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           C                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          W_StorePerkSwitcher_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::InventoryManagerWeapons(class ABP_Pawn_C** BP_Pawn, class UClass** MainWeapon, class UClass** SecondaryWeapon, class UClass** MeleeWeapon, class UClass** GrenadeWeapon, float* MaxPlayerHealth, float* MaxPlayerShield, float* RunSpeed, float* AmmoAmountMultiplier, int* ThrowableAmount, bool* StartWFullArmor_, int* SmallMedicKitAmount, int* BigMedicKitAmount, float* WeaponMagSizeMultiplier, float* AimRunSpeed, bool* Torpedo2Jumpcount, bool* HealthRegen, int* ClassIntSlot, float* MeleeWeaponDamageMultiplier, bool* BonebreakerPerk34Selected, bool* BonebreakerPerk36Selected, bool* FromLobby_, bool* DoctorPerk29Selected_, bool* NukerPerk12Selected_, bool* NukerPerk13Selected_, bool* NukerPerk15Selected_, int* C, bool* W_StorePerkSwitcher_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.InventoryManagerWeapons");

	UInventoryManager_C_InventoryManagerWeapons_Params params;
	params.BP_Pawn = BP_Pawn;
	params.MainWeapon = MainWeapon;
	params.SecondaryWeapon = SecondaryWeapon;
	params.MeleeWeapon = MeleeWeapon;
	params.GrenadeWeapon = GrenadeWeapon;
	params.MaxPlayerHealth = MaxPlayerHealth;
	params.MaxPlayerShield = MaxPlayerShield;
	params.RunSpeed = RunSpeed;
	params.AmmoAmountMultiplier = AmmoAmountMultiplier;
	params.ThrowableAmount = ThrowableAmount;
	params.StartWFullArmor_ = StartWFullArmor_;
	params.SmallMedicKitAmount = SmallMedicKitAmount;
	params.BigMedicKitAmount = BigMedicKitAmount;
	params.WeaponMagSizeMultiplier = WeaponMagSizeMultiplier;
	params.AimRunSpeed = AimRunSpeed;
	params.Torpedo2Jumpcount = Torpedo2Jumpcount;
	params.HealthRegen = HealthRegen;
	params.ClassIntSlot = ClassIntSlot;
	params.MeleeWeaponDamageMultiplier = MeleeWeaponDamageMultiplier;
	params.BonebreakerPerk34Selected = BonebreakerPerk34Selected;
	params.BonebreakerPerk36Selected = BonebreakerPerk36Selected;
	params.FromLobby_ = FromLobby_;
	params.DoctorPerk29Selected_ = DoctorPerk29Selected_;
	params.NukerPerk12Selected_ = NukerPerk12Selected_;
	params.NukerPerk13Selected_ = NukerPerk13Selected_;
	params.NukerPerk15Selected_ = NukerPerk15Selected_;
	params.C = C;
	params.W_StorePerkSwitcher_ = W_StorePerkSwitcher_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Use Zoom Button
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ButtonDown_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Server_Use_Zoom_Button(bool* ButtonDown_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Use Zoom Button");

	UInventoryManager_C_Server_Use_Zoom_Button_Params params;
	params.ButtonDown_ = ButtonDown_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.ServerDropCurrentItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::ServerDropCurrentItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.ServerDropCurrentItem");

	UInventoryManager_C_ServerDropCurrentItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.DamageBloodScreen
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Increase_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::DamageBloodScreen(float* HP, bool* Increase_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.DamageBloodScreen");

	UInventoryManager_C_DamageBloodScreen_Params params;
	params.HP = HP;
	params.Increase_ = Increase_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.ServerPlaceSpecialItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::ServerPlaceSpecialItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.ServerPlaceSpecialItem");

	UInventoryManager_C_ServerPlaceSpecialItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.CheatAddHealth
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Invincible_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::CheatAddHealth(bool* Invincible_, float* Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.CheatAddHealth");

	UInventoryManager_C_CheatAddHealth_Params params;
	params.Invincible_ = Invincible_;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.ClientUseWeapon
// (BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::ClientUseWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.ClientUseWeapon");

	UInventoryManager_C_ClientUseWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.ClientStopUseWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsShootWeapon_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::ClientStopUseWeapon(bool* IsShootWeapon_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.ClientStopUseWeapon");

	UInventoryManager_C_ClientStopUseWeapon_Params params;
	params.IsShootWeapon_ = IsShootWeapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.InventoryManageWeaponsOnly
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 MainWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SecondaryWeapon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 MeleeWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 GrenadeWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::InventoryManageWeaponsOnly(class UClass** MainWeapon, class UClass** SecondaryWeapon, class UClass** MeleeWeapon, class UClass** GrenadeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.InventoryManageWeaponsOnly");

	UInventoryManager_C_InventoryManageWeaponsOnly_Params params;
	params.MainWeapon = MainWeapon;
	params.SecondaryWeapon = SecondaryWeapon;
	params.MeleeWeapon = MeleeWeapon;
	params.GrenadeWeapon = GrenadeWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.HealthRegen1
// (BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::HealthRegen1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.HealthRegen1");

	UInventoryManager_C_HealthRegen1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Swap Item
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           FirstSlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SecondSlotIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Server_Swap_Item(int* FirstSlotIndex, int* SecondSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Swap Item");

	UInventoryManager_C_Server_Swap_Item_Params params;
	params.FirstSlotIndex = FirstSlotIndex;
	params.SecondSlotIndex = SecondSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.Server Move Item To
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Old_Slot_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           New_Slot_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::Server_Move_Item_To(int* Old_Slot_Index, int* New_Slot_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.Server Move Item To");

	UInventoryManager_C_Server_Move_Item_To_Params params;
	params.Old_Slot_Index = Old_Slot_Index;
	params.New_Slot_Index = New_Slot_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.HealthRegenEvent
// (BlueprintCallable, BlueprintEvent)

void UInventoryManager_C::HealthRegenEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.HealthRegenEvent");

	UInventoryManager_C_HealthRegenEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryManager.InventoryManager_C.ExecuteUbergraph_InventoryManager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryManager_C::ExecuteUbergraph_InventoryManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryManager.InventoryManager_C.ExecuteUbergraph_InventoryManager");

	UInventoryManager_C_ExecuteUbergraph_InventoryManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
