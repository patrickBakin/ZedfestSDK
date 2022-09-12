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

// Function LootChest.LootChest_C.Set Widget Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WidgetTypes>     Widget_Type                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALootChest_C::Set_Widget_Type(TEnumAsByte<E_WidgetTypes>* Widget_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Set Widget Type");

	ALootChest_C_Set_Widget_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Type != nullptr)
		*Widget_Type = params.Widget_Type;
}


// Function LootChest.LootChest_C.Set Widget Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title_Text                     (Parm, OutParm)

void ALootChest_C::Set_Widget_Title(bool* Return_Value, struct FText* Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Set Widget Title");

	ALootChest_C_Set_Widget_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Title_Text != nullptr)
		*Title_Text = params.Title_Text;
}


// Function LootChest.LootChest_C.Set Widget Sub Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Sub_Title_Text                 (Parm, OutParm)

void ALootChest_C::Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Set Widget Sub Title");

	ALootChest_C_Set_Widget_Sub_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Sub_Title_Text != nullptr)
		*Sub_Title_Text = params.Sub_Title_Text;
}


// Function LootChest.LootChest_C.Set Widget Level
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Level_Text                     (Parm, OutParm)

void ALootChest_C::Set_Widget_Level(bool* Return_Value, struct FText* Level_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Set Widget Level");

	ALootChest_C_Set_Widget_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Level_Text != nullptr)
		*Level_Text = params.Level_Text;
}


// Function LootChest.LootChest_C.Set Widget Amount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Amount_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALootChest_C::Set_Widget_Amount(bool* Return_Value, int* Amount_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Set Widget Amount");

	ALootChest_C_Set_Widget_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Amount_Value != nullptr)
		*Amount_Value = params.Amount_Value;
}


// Function LootChest.LootChest_C.Set Widget Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Dark_Color                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Light_Color                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALootChest_C::Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Set Widget Color");

	ALootChest_C_Set_Widget_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dark_Color != nullptr)
		*Dark_Color = params.Dark_Color;
	if (Light_Color != nullptr)
		*Light_Color = params.Light_Color;
}


// Function LootChest.LootChest_C.Set Widget Key Binds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_KeyBinds>     Key_Binds                      (Parm, OutParm, ZeroConstructor)

void ALootChest_C::Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Set Widget Key Binds");

	ALootChest_C_Set_Widget_Key_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Key_Binds != nullptr)
		*Key_Binds = params.Key_Binds;
}


// Function LootChest.LootChest_C.Set Detail 1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ALootChest_C::Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Set Detail 1");

	ALootChest_C_Set_Detail_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function LootChest.LootChest_C.Set Detail 2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ALootChest_C::Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Set Detail 2");

	ALootChest_C_Set_Detail_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function LootChest.LootChest_C.Set Detail 3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ALootChest_C::Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Set Detail 3");

	ALootChest_C_Set_Detail_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function LootChest.LootChest_C.Set Detail 4
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ALootChest_C::Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Set Detail 4");

	ALootChest_C_Set_Detail_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function LootChest.LootChest_C.Stop Timer to Open Loot Chest
// (Public, BlueprintCallable, BlueprintEvent)

void ALootChest_C::Stop_Timer_to_Open_Loot_Chest()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Stop Timer to Open Loot Chest");

	ALootChest_C_Stop_Timer_to_Open_Loot_Chest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootChest.LootChest_C.Start Timer to Open Loot Chest
// (Public, BlueprintCallable, BlueprintEvent)

void ALootChest_C::Start_Timer_to_Open_Loot_Chest()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Start Timer to Open Loot Chest");

	ALootChest_C_Start_Timer_to_Open_Loot_Chest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootChest.LootChest_C.Get Random Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemsToSpawn           Random_Item_To_Spawn           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALootChest_C::Get_Random_Item(struct FItemsToSpawn* Random_Item_To_Spawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Get Random Item");

	ALootChest_C_Get_Random_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Random_Item_To_Spawn != nullptr)
		*Random_Item_To_Spawn = params.Random_Item_To_Spawn;
}


// Function LootChest.LootChest_C.SpawnItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALootChest_C::SpawnItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.SpawnItems");

	ALootChest_C_SpawnItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootChest.LootChest_C.Get Spawn Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ALootChest_C::Get_Spawn_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Get Spawn Location");

	ALootChest_C_Get_Spawn_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LootChest.LootChest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALootChest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.UserConstructionScript");

	ALootChest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootChest.LootChest_C.Toggle Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALootChest_C::Toggle_Widget(bool* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Toggle Widget");

	ALootChest_C_Toggle_Widget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootChest.LootChest_C.MultiCast Set Loot Chest Mesh
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ALootChest_C::MultiCast_Set_Loot_Chest_Mesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.MultiCast Set Loot Chest Mesh");

	ALootChest_C_MultiCast_Set_Loot_Chest_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootChest.LootChest_C.Multicast Open Chest
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ALootChest_C::Multicast_Open_Chest()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Multicast Open Chest");

	ALootChest_C_Multicast_Open_Chest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootChest.LootChest_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALootChest_C::Interact(struct FKey* Key, class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Interact");

	ALootChest_C_Interact_Params params;
	params.Key = Key;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootChest.LootChest_C.Current Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALootChest_C::Current_Target(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Current Target");

	ALootChest_C_Current_Target_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootChest.LootChest_C.Clear Target
// (Public, BlueprintCallable, BlueprintEvent)

void ALootChest_C::Clear_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.Clear Target");

	ALootChest_C_Clear_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootChest.LootChest_C.ExecuteUbergraph_LootChest
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALootChest_C::ExecuteUbergraph_LootChest(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootChest.LootChest_C.ExecuteUbergraph_LootChest");

	ALootChest_C_ExecuteUbergraph_LootChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
