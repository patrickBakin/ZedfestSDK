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

// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WidgetTypes>     Widget_Type                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialItem_Ammogenerator_C::Set_Widget_Type(TEnumAsByte<E_WidgetTypes>* Widget_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Type");

	ABP_SpecialItem_Ammogenerator_C_Set_Widget_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Type != nullptr)
		*Widget_Type = params.Widget_Type;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title_Text                     (Parm, OutParm)

void ABP_SpecialItem_Ammogenerator_C::Set_Widget_Title(bool* Return_Value, struct FText* Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Title");

	ABP_SpecialItem_Ammogenerator_C_Set_Widget_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Title_Text != nullptr)
		*Title_Text = params.Title_Text;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Sub Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Sub_Title_Text                 (Parm, OutParm)

void ABP_SpecialItem_Ammogenerator_C::Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Sub Title");

	ABP_SpecialItem_Ammogenerator_C_Set_Widget_Sub_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Sub_Title_Text != nullptr)
		*Sub_Title_Text = params.Sub_Title_Text;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Level
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Level_Text                     (Parm, OutParm)

void ABP_SpecialItem_Ammogenerator_C::Set_Widget_Level(bool* Return_Value, struct FText* Level_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Level");

	ABP_SpecialItem_Ammogenerator_C_Set_Widget_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Level_Text != nullptr)
		*Level_Text = params.Level_Text;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Amount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Amount_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialItem_Ammogenerator_C::Set_Widget_Amount(bool* Return_Value, int* Amount_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Amount");

	ABP_SpecialItem_Ammogenerator_C_Set_Widget_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Amount_Value != nullptr)
		*Amount_Value = params.Amount_Value;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Dark_Color                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Light_Color                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialItem_Ammogenerator_C::Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Color");

	ABP_SpecialItem_Ammogenerator_C_Set_Widget_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dark_Color != nullptr)
		*Dark_Color = params.Dark_Color;
	if (Light_Color != nullptr)
		*Light_Color = params.Light_Color;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Key Binds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_KeyBinds>     Key_Binds                      (Parm, OutParm, ZeroConstructor)

void ABP_SpecialItem_Ammogenerator_C::Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Widget Key Binds");

	ABP_SpecialItem_Ammogenerator_C_Set_Widget_Key_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Key_Binds != nullptr)
		*Key_Binds = params.Key_Binds;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Detail 1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_SpecialItem_Ammogenerator_C::Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Detail 1");

	ABP_SpecialItem_Ammogenerator_C_Set_Detail_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Detail 2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_SpecialItem_Ammogenerator_C::Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Detail 2");

	ABP_SpecialItem_Ammogenerator_C_Set_Detail_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Detail 3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_SpecialItem_Ammogenerator_C::Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Detail 3");

	ABP_SpecialItem_Ammogenerator_C_Set_Detail_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Detail 4
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_SpecialItem_Ammogenerator_C::Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Set Detail 4");

	ABP_SpecialItem_Ammogenerator_C_Set_Detail_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Toggle Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialItem_Ammogenerator_C::Toggle_Widget(bool* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Toggle Widget");

	ABP_SpecialItem_Ammogenerator_C_Toggle_Widget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpecialItem_Ammogenerator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.ReceiveBeginPlay");

	ABP_SpecialItem_Ammogenerator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Current Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialItem_Ammogenerator_C::Current_Target(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Current Target");

	ABP_SpecialItem_Ammogenerator_C_Current_Target_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Clear Target
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpecialItem_Ammogenerator_C::Clear_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Clear Target");

	ABP_SpecialItem_Ammogenerator_C_Clear_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialItem_Ammogenerator_C::Interact(struct FKey* Key, class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.Interact");

	ABP_SpecialItem_Ammogenerator_C_Interact_Params params;
	params.Key = Key;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.AmmoGeneratorMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SpecialItem_Ammogenerator_C::AmmoGeneratorMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.AmmoGeneratorMulticast");

	ABP_SpecialItem_Ammogenerator_C_AmmoGeneratorMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.ShowStartMagChargeMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SpecialItem_Ammogenerator_C::ShowStartMagChargeMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.ShowStartMagChargeMulticast");

	ABP_SpecialItem_Ammogenerator_C_ShowStartMagChargeMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.ExecuteUbergraph_BP_SpecialItem_Ammogenerator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialItem_Ammogenerator_C::ExecuteUbergraph_BP_SpecialItem_Ammogenerator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Ammogenerator.BP_SpecialItem_Ammogenerator_C.ExecuteUbergraph_BP_SpecialItem_Ammogenerator");

	ABP_SpecialItem_Ammogenerator_C_ExecuteUbergraph_BP_SpecialItem_Ammogenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
