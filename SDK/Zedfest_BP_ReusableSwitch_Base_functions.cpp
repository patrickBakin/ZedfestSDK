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

// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WidgetTypes>     Widget_Type                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::Set_Widget_Type(TEnumAsByte<E_WidgetTypes>* Widget_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Type");

	ABP_ReusableSwitch_Base_C_Set_Widget_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Type != nullptr)
		*Widget_Type = params.Widget_Type;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title_Text                     (Parm, OutParm)

void ABP_ReusableSwitch_Base_C::Set_Widget_Title(bool* Return_Value, struct FText* Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Title");

	ABP_ReusableSwitch_Base_C_Set_Widget_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Title_Text != nullptr)
		*Title_Text = params.Title_Text;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Sub Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Sub_Title_Text                 (Parm, OutParm)

void ABP_ReusableSwitch_Base_C::Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Sub Title");

	ABP_ReusableSwitch_Base_C_Set_Widget_Sub_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Sub_Title_Text != nullptr)
		*Sub_Title_Text = params.Sub_Title_Text;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Level
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Level_Text                     (Parm, OutParm)

void ABP_ReusableSwitch_Base_C::Set_Widget_Level(bool* Return_Value, struct FText* Level_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Level");

	ABP_ReusableSwitch_Base_C_Set_Widget_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Level_Text != nullptr)
		*Level_Text = params.Level_Text;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Amount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Amount_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::Set_Widget_Amount(bool* Return_Value, int* Amount_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Amount");

	ABP_ReusableSwitch_Base_C_Set_Widget_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Amount_Value != nullptr)
		*Amount_Value = params.Amount_Value;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Dark_Color                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Light_Color                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Color");

	ABP_ReusableSwitch_Base_C_Set_Widget_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dark_Color != nullptr)
		*Dark_Color = params.Dark_Color;
	if (Light_Color != nullptr)
		*Light_Color = params.Light_Color;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Key Binds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_KeyBinds>     Key_Binds                      (Parm, OutParm, ZeroConstructor)

void ABP_ReusableSwitch_Base_C::Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Widget Key Binds");

	ABP_ReusableSwitch_Base_C_Set_Widget_Key_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Key_Binds != nullptr)
		*Key_Binds = params.Key_Binds;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_ReusableSwitch_Base_C::Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 1");

	ABP_ReusableSwitch_Base_C_Set_Detail_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_ReusableSwitch_Base_C::Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 2");

	ABP_ReusableSwitch_Base_C_Set_Detail_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_ReusableSwitch_Base_C::Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 3");

	ABP_ReusableSwitch_Base_C_Set_Detail_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 4
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_ReusableSwitch_Base_C::Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Set Detail 4");

	ABP_ReusableSwitch_Base_C_Set_Detail_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ShouldNotSendInteractToServer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bShouldNotSendInteractToServer (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::ShouldNotSendInteractToServer(bool* bShouldNotSendInteractToServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ShouldNotSendInteractToServer");

	ABP_ReusableSwitch_Base_C_ShouldNotSendInteractToServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldNotSendInteractToServer != nullptr)
		*bShouldNotSendInteractToServer = params.bShouldNotSendInteractToServer;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ShouldNotInteractOnClients
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bShouldNotInteractOnClients    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::ShouldNotInteractOnClients(bool* bShouldNotInteractOnClients)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ShouldNotInteractOnClients");

	ABP_ReusableSwitch_Base_C_ShouldNotInteractOnClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldNotInteractOnClients != nullptr)
		*bShouldNotInteractOnClients = params.bShouldNotInteractOnClients;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetDesiredHeldRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FRotator                RelativeHeldRotation           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::GetDesiredHeldRotation(struct FRotator* RelativeHeldRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetDesiredHeldRotation");

	ABP_ReusableSwitch_Base_C_GetDesiredHeldRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelativeHeldRotation != nullptr)
		*RelativeHeldRotation = params.RelativeHeldRotation;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetInteractionText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ABP_ReusableSwitch_Base_C::GetInteractionText(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetInteractionText");

	ABP_ReusableSwitch_Base_C_GetInteractionText_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.IsFocusable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFocusable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::IsFocusable(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, bool* bFocusable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.IsFocusable");

	ABP_ReusableSwitch_Base_C_IsFocusable_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFocusable != nullptr)
		*bFocusable = params.bFocusable;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetInteractionCenterPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::GetInteractionCenterPoint(struct FVector* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetInteractionCenterPoint");

	ABP_ReusableSwitch_Base_C_GetInteractionCenterPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.IsPhysicsPickup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bPickupable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     PickupComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::IsPhysicsPickup(bool* bPickupable, class UPrimitiveComponent** PickupComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.IsPhysicsPickup");

	ABP_ReusableSwitch_Base_C_IsPhysicsPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPickupable != nullptr)
		*bPickupable = params.bPickupable;
	if (PickupComponent != nullptr)
		*PickupComponent = params.PickupComponent;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.PlaySwitchSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ReusableSwitch_Base_C::PlaySwitchSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.PlaySwitchSound");

	ABP_ReusableSwitch_Base_C_PlaySwitchSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.OnSwitchStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::OnSwitchStateChanged(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.OnSwitchStateChanged");

	ABP_ReusableSwitch_Base_C_OnSwitchStateChanged_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ReusableSwitch_Base_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.UpdateColors");

	ABP_ReusableSwitch_Base_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.SetUpMIDOnComponents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ReusableSwitch_Base_C::SetUpMIDOnComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.SetUpMIDOnComponents");

	ABP_ReusableSwitch_Base_C_SetUpMIDOnComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetMIDMeshComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> Meshes                         (Parm, OutParm, ZeroConstructor)

void ABP_ReusableSwitch_Base_C::GetMIDMeshComponents(TArray<class UPrimitiveComponent*>* Meshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetMIDMeshComponents");

	ABP_ReusableSwitch_Base_C_GetMIDMeshComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetAnimatedComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> AnimatedComponent              (Parm, OutParm, ZeroConstructor)

void ABP_ReusableSwitch_Base_C::GetAnimatedComponents(TArray<class UPrimitiveComponent*>* AnimatedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.GetAnimatedComponents");

	ABP_ReusableSwitch_Base_C_GetAnimatedComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimatedComponent != nullptr)
		*AnimatedComponent = params.AnimatedComponent;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.UpdateAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         AnimationPoint                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::UpdateAnimation(float* AnimationPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.UpdateAnimation");

	ABP_ReusableSwitch_Base_C_UpdateAnimation_Params params;
	params.AnimationPoint = AnimationPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ReusableSwitch_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.UserConstructionScript");

	ABP_ReusableSwitch_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_ReusableSwitch_Base_C::AnimTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__FinishedFunc");

	ABP_ReusableSwitch_Base_C_AnimTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_ReusableSwitch_Base_C::AnimTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__UpdateFunc");

	ABP_ReusableSwitch_Base_C_AnimTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__Off__EventFunc
// (BlueprintEvent)

void ABP_ReusableSwitch_Base_C::AnimTimeline__Off__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__Off__EventFunc");

	ABP_ReusableSwitch_Base_C_AnimTimeline__Off__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__On__EventFunc
// (BlueprintEvent)

void ABP_ReusableSwitch_Base_C::AnimTimeline__On__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.AnimTimeline__On__EventFunc");

	ABP_ReusableSwitch_Base_C_AnimTimeline__On__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_ReusableSwitch_Base_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_0__FinishedFunc");

	ABP_ReusableSwitch_Base_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_ReusableSwitch_Base_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_0__UpdateFunc");

	ABP_ReusableSwitch_Base_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_ReusableSwitch_Base_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_1__FinishedFunc");

	ABP_ReusableSwitch_Base_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_ReusableSwitch_Base_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Timeline_1__UpdateFunc");

	ABP_ReusableSwitch_Base_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Toggle Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::Toggle_Widget(bool* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Toggle Widget");

	ABP_ReusableSwitch_Base_C_Toggle_Widget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.SetFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFocused                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::SetFocused(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, bool* bIsFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.SetFocused");

	ABP_ReusableSwitch_Base_C_SetFocused_Params params;
	params.Interactor = Interactor;
	params.bIsFocused = bIsFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Interact1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::Interact1(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Interact1");

	ABP_ReusableSwitch_Base_C_Interact1_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.OnPhysicsPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicsHandleComponent** PhysicsHandle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::OnPhysicsPickup(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.OnPhysicsPickup");

	ABP_ReusableSwitch_Base_C_OnPhysicsPickup_Params params;
	params.Interactor = Interactor;
	params.PhysicsHandle = PhysicsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.OnPhysicsRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicsHandleComponent** PhysicsHandle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::OnPhysicsRelease(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.OnPhysicsRelease");

	ABP_ReusableSwitch_Base_C_OnPhysicsRelease_Params params;
	params.Interactor = Interactor;
	params.PhysicsHandle = PhysicsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.SetInteractionDebugString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                DebugString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_ReusableSwitch_Base_C::SetInteractionDebugString(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, struct FString* DebugString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.SetInteractionDebugString");

	ABP_ReusableSwitch_Base_C_SetInteractionDebugString_Params params;
	params.Interactor = Interactor;
	params.DebugString = DebugString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ReusableSwitch_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ReceiveBeginPlay");

	ABP_ReusableSwitch_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Current Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::Current_Target(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Current Target");

	ABP_ReusableSwitch_Base_C_Current_Target_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Clear Target
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ReusableSwitch_Base_C::Clear_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Clear Target");

	ABP_ReusableSwitch_Base_C_Clear_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::Interact(struct FKey* Key, class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.Interact");

	ABP_ReusableSwitch_Base_C_Interact_Params params;
	params.Key = Key;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ShrinkSwitches
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ReusableSwitch_Base_C::ShrinkSwitches()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ShrinkSwitches");

	ABP_ReusableSwitch_Base_C_ShrinkSwitches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ExecuteUbergraph_BP_ReusableSwitch_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReusableSwitch_Base_C::ExecuteUbergraph_BP_ReusableSwitch_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C.ExecuteUbergraph_BP_ReusableSwitch_Base");

	ABP_ReusableSwitch_Base_C_ExecuteUbergraph_BP_ReusableSwitch_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
