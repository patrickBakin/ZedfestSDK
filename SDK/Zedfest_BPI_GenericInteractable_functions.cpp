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

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.ShouldNotSendInteractToServer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bShouldNotSendInteractToServer (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GenericInteractable_C::ShouldNotSendInteractToServer(bool* bShouldNotSendInteractToServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.ShouldNotSendInteractToServer");

	UBPI_GenericInteractable_C_ShouldNotSendInteractToServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldNotSendInteractToServer != nullptr)
		*bShouldNotSendInteractToServer = params.bShouldNotSendInteractToServer;
}


// Function BPI_GenericInteractable.BPI_GenericInteractable_C.ShouldNotInteractOnClients
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bShouldNotInteractOnClients    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GenericInteractable_C::ShouldNotInteractOnClients(bool* bShouldNotInteractOnClients)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.ShouldNotInteractOnClients");

	UBPI_GenericInteractable_C_ShouldNotInteractOnClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldNotInteractOnClients != nullptr)
		*bShouldNotInteractOnClients = params.bShouldNotInteractOnClients;
}


// Function BPI_GenericInteractable.BPI_GenericInteractable_C.GetDesiredHeldRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FRotator                RelativeHeldRotation           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GenericInteractable_C::GetDesiredHeldRotation(struct FRotator* RelativeHeldRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.GetDesiredHeldRotation");

	UBPI_GenericInteractable_C_GetDesiredHeldRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelativeHeldRotation != nullptr)
		*RelativeHeldRotation = params.RelativeHeldRotation;
}


// Function BPI_GenericInteractable.BPI_GenericInteractable_C.OnPhysicsRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicsHandleComponent** PhysicsHandle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_GenericInteractable_C::OnPhysicsRelease(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.OnPhysicsRelease");

	UBPI_GenericInteractable_C_OnPhysicsRelease_Params params;
	params.Interactor = Interactor;
	params.PhysicsHandle = PhysicsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GenericInteractable.BPI_GenericInteractable_C.OnPhysicsPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicsHandleComponent** PhysicsHandle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_GenericInteractable_C::OnPhysicsPickup(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.OnPhysicsPickup");

	UBPI_GenericInteractable_C_OnPhysicsPickup_Params params;
	params.Interactor = Interactor;
	params.PhysicsHandle = PhysicsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GenericInteractable.BPI_GenericInteractable_C.IsPhysicsPickup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bPickupable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     PickupComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_GenericInteractable_C::IsPhysicsPickup(bool* bPickupable, class UPrimitiveComponent** PickupComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.IsPhysicsPickup");

	UBPI_GenericInteractable_C_IsPhysicsPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPickupable != nullptr)
		*bPickupable = params.bPickupable;
	if (PickupComponent != nullptr)
		*PickupComponent = params.PickupComponent;
}


// Function BPI_GenericInteractable.BPI_GenericInteractable_C.GetInteractionCenterPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GenericInteractable_C::GetInteractionCenterPoint(struct FVector* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.GetInteractionCenterPoint");

	UBPI_GenericInteractable_C_GetInteractionCenterPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
}


// Function BPI_GenericInteractable.BPI_GenericInteractable_C.SetInteractionDebugString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                DebugString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPI_GenericInteractable_C::SetInteractionDebugString(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, struct FString* DebugString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.SetInteractionDebugString");

	UBPI_GenericInteractable_C_SetInteractionDebugString_Params params;
	params.Interactor = Interactor;
	params.DebugString = DebugString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GenericInteractable.BPI_GenericInteractable_C.IsFocusable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFocusable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GenericInteractable_C::IsFocusable(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, bool* bFocusable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.IsFocusable");

	UBPI_GenericInteractable_C_IsFocusable_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFocusable != nullptr)
		*bFocusable = params.bFocusable;
}


// Function BPI_GenericInteractable.BPI_GenericInteractable_C.GetInteractionText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UBPI_GenericInteractable_C::GetInteractionText(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.GetInteractionText");

	UBPI_GenericInteractable_C_GetInteractionText_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BPI_GenericInteractable.BPI_GenericInteractable_C.Interact1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GenericInteractable_C::Interact1(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.Interact1");

	UBPI_GenericInteractable_C_Interact1_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GenericInteractable.BPI_GenericInteractable_C.SetFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractor_C>* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFocused                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GenericInteractable_C::SetFocused(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, bool* bIsFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractable.BPI_GenericInteractable_C.SetFocused");

	UBPI_GenericInteractable_C_SetFocused_Params params;
	params.Interactor = Interactor;
	params.bIsFocused = bIsFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
