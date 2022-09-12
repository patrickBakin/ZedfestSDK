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

// Function BP_RubberArmor_Child.BP_RubberArmor_Child_C.Set Widget Key Binds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_KeyBinds>     Key_Binds                      (Parm, OutParm, ZeroConstructor)

void ABP_RubberArmor_Child_C::Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RubberArmor_Child.BP_RubberArmor_Child_C.Set Widget Key Binds");

	ABP_RubberArmor_Child_C_Set_Widget_Key_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Key_Binds != nullptr)
		*Key_Binds = params.Key_Binds;
}


// Function BP_RubberArmor_Child.BP_RubberArmor_Child_C.Set Widget Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Dark_Color                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Light_Color                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RubberArmor_Child_C::Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RubberArmor_Child.BP_RubberArmor_Child_C.Set Widget Color");

	ABP_RubberArmor_Child_C_Set_Widget_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dark_Color != nullptr)
		*Dark_Color = params.Dark_Color;
	if (Light_Color != nullptr)
		*Light_Color = params.Light_Color;
}


// Function BP_RubberArmor_Child.BP_RubberArmor_Child_C.Set Widget Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title_Text                     (Parm, OutParm)

void ABP_RubberArmor_Child_C::Set_Widget_Title(bool* Return_Value, struct FText* Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RubberArmor_Child.BP_RubberArmor_Child_C.Set Widget Title");

	ABP_RubberArmor_Child_C_Set_Widget_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Title_Text != nullptr)
		*Title_Text = params.Title_Text;
}


// Function BP_RubberArmor_Child.BP_RubberArmor_Child_C.Set Detail 1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_RubberArmor_Child_C::Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RubberArmor_Child.BP_RubberArmor_Child_C.Set Detail 1");

	ABP_RubberArmor_Child_C_Set_Detail_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
