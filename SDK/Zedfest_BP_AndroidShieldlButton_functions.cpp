// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WidgetTypes>     Widget_Type                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::Set_Widget_Type(TEnumAsByte<E_WidgetTypes>* Widget_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Type");

	ABP_AndroidShieldlButton_C_Set_Widget_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Type != nullptr)
		*Widget_Type = params.Widget_Type;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title_Text                     (Parm, OutParm)

void ABP_AndroidShieldlButton_C::Set_Widget_Title(bool* Return_Value, struct FText* Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Title");

	ABP_AndroidShieldlButton_C_Set_Widget_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Title_Text != nullptr)
		*Title_Text = params.Title_Text;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Sub Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Sub_Title_Text                 (Parm, OutParm)

void ABP_AndroidShieldlButton_C::Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Sub Title");

	ABP_AndroidShieldlButton_C_Set_Widget_Sub_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Sub_Title_Text != nullptr)
		*Sub_Title_Text = params.Sub_Title_Text;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Level
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Level_Text                     (Parm, OutParm)

void ABP_AndroidShieldlButton_C::Set_Widget_Level(bool* Return_Value, struct FText* Level_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Level");

	ABP_AndroidShieldlButton_C_Set_Widget_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Level_Text != nullptr)
		*Level_Text = params.Level_Text;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Amount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Amount_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::Set_Widget_Amount(bool* Return_Value, int* Amount_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Amount");

	ABP_AndroidShieldlButton_C_Set_Widget_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Amount_Value != nullptr)
		*Amount_Value = params.Amount_Value;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Dark_Color                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Light_Color                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Color");

	ABP_AndroidShieldlButton_C_Set_Widget_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dark_Color != nullptr)
		*Dark_Color = params.Dark_Color;
	if (Light_Color != nullptr)
		*Light_Color = params.Light_Color;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Key Binds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_KeyBinds>     Key_Binds                      (Parm, OutParm, ZeroConstructor)

void ABP_AndroidShieldlButton_C::Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Widget Key Binds");

	ABP_AndroidShieldlButton_C_Set_Widget_Key_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Key_Binds != nullptr)
		*Key_Binds = params.Key_Binds;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Detail 1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_AndroidShieldlButton_C::Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Detail 1");

	ABP_AndroidShieldlButton_C_Set_Detail_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Detail 2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_AndroidShieldlButton_C::Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Detail 2");

	ABP_AndroidShieldlButton_C_Set_Detail_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Detail 3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_AndroidShieldlButton_C::Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Detail 3");

	ABP_AndroidShieldlButton_C_Set_Detail_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Detail 4
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_AndroidShieldlButton_C::Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Set Detail 4");

	ABP_AndroidShieldlButton_C_Set_Detail_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.ShouldNotSendInteractToServer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bShouldNotSendInteractToServer (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::ShouldNotSendInteractToServer(bool* bShouldNotSendInteractToServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.ShouldNotSendInteractToServer");

	ABP_AndroidShieldlButton_C_ShouldNotSendInteractToServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldNotSendInteractToServer != nullptr)
		*bShouldNotSendInteractToServer = params.bShouldNotSendInteractToServer;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.ShouldNotInteractOnClients
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bShouldNotInteractOnClients    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::ShouldNotInteractOnClients(bool* bShouldNotInteractOnClients)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.ShouldNotInteractOnClients");

	ABP_AndroidShieldlButton_C_ShouldNotInteractOnClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldNotInteractOnClients != nullptr)
		*bShouldNotInteractOnClients = params.bShouldNotInteractOnClients;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.GetDesiredHeldRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FRotator                RelativeHeldRotation           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::GetDesiredHeldRotation(struct FRotator* RelativeHeldRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.GetDesiredHeldRotation");

	ABP_AndroidShieldlButton_C_GetDesiredHeldRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelativeHeldRotation != nullptr)
		*RelativeHeldRotation = params.RelativeHeldRotation;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.GetInteractionText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ABP_AndroidShieldlButton_C::GetInteractionText(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.GetInteractionText");

	ABP_AndroidShieldlButton_C_GetInteractionText_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.IsFocusable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFocusable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::IsFocusable(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, bool* bFocusable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.IsFocusable");

	ABP_AndroidShieldlButton_C_IsFocusable_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFocusable != nullptr)
		*bFocusable = params.bFocusable;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.GetInteractionCenterPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::GetInteractionCenterPoint(struct FVector* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.GetInteractionCenterPoint");

	ABP_AndroidShieldlButton_C_GetInteractionCenterPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.IsPhysicsPickup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bPickupable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     PickupComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AndroidShieldlButton_C::IsPhysicsPickup(bool* bPickupable, class UPrimitiveComponent** PickupComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.IsPhysicsPickup");

	ABP_AndroidShieldlButton_C_IsPhysicsPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPickupable != nullptr)
		*bPickupable = params.bPickupable;
	if (PickupComponent != nullptr)
		*PickupComponent = params.PickupComponent;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.PlayButtonSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AndroidShieldlButton_C::PlayButtonSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.PlayButtonSound");

	ABP_AndroidShieldlButton_C_PlayButtonSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.OnButtonPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::OnButtonPressed(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.OnButtonPressed");

	ABP_AndroidShieldlButton_C_OnButtonPressed_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AndroidShieldlButton_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.UpdateColors");

	ABP_AndroidShieldlButton_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.SetUpMIDOnComponents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AndroidShieldlButton_C::SetUpMIDOnComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.SetUpMIDOnComponents");

	ABP_AndroidShieldlButton_C_SetUpMIDOnComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.GetMIDMeshComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> Meshes                         (Parm, OutParm, ZeroConstructor)

void ABP_AndroidShieldlButton_C::GetMIDMeshComponents(TArray<class UPrimitiveComponent*>* Meshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.GetMIDMeshComponents");

	ABP_AndroidShieldlButton_C_GetMIDMeshComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.GetAnimatedComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> AnimatedComponent              (Parm, OutParm, ZeroConstructor)

void ABP_AndroidShieldlButton_C::GetAnimatedComponents(TArray<class UPrimitiveComponent*>* AnimatedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.GetAnimatedComponents");

	ABP_AndroidShieldlButton_C_GetAnimatedComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimatedComponent != nullptr)
		*AnimatedComponent = params.AnimatedComponent;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.UpdateAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         AnimationPoint                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::UpdateAnimation(float* AnimationPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.UpdateAnimation");

	ABP_AndroidShieldlButton_C_UpdateAnimation_Params params;
	params.AnimationPoint = AnimationPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AndroidShieldlButton_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.UserConstructionScript");

	ABP_AndroidShieldlButton_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.AnimTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_AndroidShieldlButton_C::AnimTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.AnimTimeline__FinishedFunc");

	ABP_AndroidShieldlButton_C_AnimTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.AnimTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_AndroidShieldlButton_C::AnimTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.AnimTimeline__UpdateFunc");

	ABP_AndroidShieldlButton_C_AnimTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.AnimTimeline__Pressed__EventFunc
// (BlueprintEvent)

void ABP_AndroidShieldlButton_C::AnimTimeline__Pressed__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.AnimTimeline__Pressed__EventFunc");

	ABP_AndroidShieldlButton_C_AnimTimeline__Pressed__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.OnPhysicsRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicsHandleComponent** PhysicsHandle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AndroidShieldlButton_C::OnPhysicsRelease(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.OnPhysicsRelease");

	ABP_AndroidShieldlButton_C_OnPhysicsRelease_Params params;
	params.Interactor = Interactor;
	params.PhysicsHandle = PhysicsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.SetInteractionDebugString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                DebugString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AndroidShieldlButton_C::SetInteractionDebugString(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, struct FString* DebugString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.SetInteractionDebugString");

	ABP_AndroidShieldlButton_C_SetInteractionDebugString_Params params;
	params.Interactor = Interactor;
	params.DebugString = DebugString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Toggle Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::Toggle_Widget(bool* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Toggle Widget");

	ABP_AndroidShieldlButton_C_Toggle_Widget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.OnPhysicsPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicsHandleComponent** PhysicsHandle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AndroidShieldlButton_C::OnPhysicsPickup(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.OnPhysicsPickup");

	ABP_AndroidShieldlButton_C_OnPhysicsPickup_Params params;
	params.Interactor = Interactor;
	params.PhysicsHandle = PhysicsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Interact_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::Interact_2(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Interact_2");

	ABP_AndroidShieldlButton_C_Interact_2_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Interact1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::Interact1(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Interact1");

	ABP_AndroidShieldlButton_C_Interact1_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.SetFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFocused                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::SetFocused(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, bool* bIsFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.SetFocused");

	ABP_AndroidShieldlButton_C_SetFocused_Params params;
	params.Interactor = Interactor;
	params.bIsFocused = bIsFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Current Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::Current_Target(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Current Target");

	ABP_AndroidShieldlButton_C_Current_Target_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Clear Target
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AndroidShieldlButton_C::Clear_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Clear Target");

	ABP_AndroidShieldlButton_C_Clear_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::Interact(struct FKey* Key, class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.Interact");

	ABP_AndroidShieldlButton_C_Interact_Params params;
	params.Key = Key;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.ExecuteUbergraph_BP_AndroidShieldlButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AndroidShieldlButton_C::ExecuteUbergraph_BP_AndroidShieldlButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AndroidShieldlButton.BP_AndroidShieldlButton_C.ExecuteUbergraph_BP_AndroidShieldlButton");

	ABP_AndroidShieldlButton_C_ExecuteUbergraph_BP_AndroidShieldlButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
