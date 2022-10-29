// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CraftingStation.CraftingStation_C.Check if CS supports this Weapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Weapon_to_Check                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Supported_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACraftingStation_C::Check_if_CS_supports_this_Weapon(class UObject** Weapon_to_Check, bool* Supported_)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingStation.CraftingStation_C.Check if CS supports this Weapon");

	ACraftingStation_C_Check_if_CS_supports_this_Weapon_Params params;
	params.Weapon_to_Check = Weapon_to_Check;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Supported_ != nullptr)
		*Supported_ = params.Supported_;
}


// Function CraftingStation.CraftingStation_C.Stop Timer to use Crafting Station
// (Public, BlueprintCallable, BlueprintEvent)

void ACraftingStation_C::Stop_Timer_to_use_Crafting_Station()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingStation.CraftingStation_C.Stop Timer to use Crafting Station");

	ACraftingStation_C_Stop_Timer_to_use_Crafting_Station_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingStation.CraftingStation_C.StartUpgradeWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACraftingStation_C::StartUpgradeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingStation.CraftingStation_C.StartUpgradeWeapon");

	ACraftingStation_C_StartUpgradeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingStation.CraftingStation_C.Start Timer to use Crafting Station
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Weapon_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AInventoryData_C**       Inventory_Data                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACraftingStation_C::Start_Timer_to_use_Crafting_Station(int* Weapon_Index, class AInventoryData_C** Inventory_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingStation.CraftingStation_C.Start Timer to use Crafting Station");

	ACraftingStation_C_Start_Timer_to_use_Crafting_Station_Params params;
	params.Weapon_Index = Weapon_Index;
	params.Inventory_Data = Inventory_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingStation.CraftingStation_C.Send Weapon to Crafting Station
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Weapon_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AInventoryData_C**       Inventory_Data                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACraftingStation_C::Send_Weapon_to_Crafting_Station(int* Weapon_Index, class AInventoryData_C** Inventory_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingStation.CraftingStation_C.Send Weapon to Crafting Station");

	ACraftingStation_C_Send_Weapon_to_Crafting_Station_Params params;
	params.Weapon_Index = Weapon_Index;
	params.Inventory_Data = Inventory_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingStation.CraftingStation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACraftingStation_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingStation.CraftingStation_C.ReceiveTick");

	ACraftingStation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingStation.CraftingStation_C.ExecuteUbergraph_CraftingStation
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACraftingStation_C::ExecuteUbergraph_CraftingStation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingStation.CraftingStation_C.ExecuteUbergraph_CraftingStation");

	ACraftingStation_C_ExecuteUbergraph_CraftingStation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
