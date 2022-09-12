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

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.ShouldNotSendInteractToServer
struct UBPI_GenericInteractable_C_ShouldNotSendInteractToServer_Params
{
	bool                                               bShouldNotSendInteractToServer;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.ShouldNotInteractOnClients
struct UBPI_GenericInteractable_C_ShouldNotInteractOnClients_Params
{
	bool                                               bShouldNotInteractOnClients;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.GetDesiredHeldRotation
struct UBPI_GenericInteractable_C_GetDesiredHeldRotation_Params
{
	struct FRotator                                    RelativeHeldRotation;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.OnPhysicsRelease
struct UBPI_GenericInteractable_C_OnPhysicsRelease_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsHandleComponent**                    PhysicsHandle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.OnPhysicsPickup
struct UBPI_GenericInteractable_C_OnPhysicsPickup_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsHandleComponent**                    PhysicsHandle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.IsPhysicsPickup
struct UBPI_GenericInteractable_C_IsPhysicsPickup_Params
{
	bool                                               bPickupable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PickupComponent;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.GetInteractionCenterPoint
struct UBPI_GenericInteractable_C_GetInteractionCenterPoint_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.SetInteractionDebugString
struct UBPI_GenericInteractable_C_SetInteractionDebugString_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    DebugString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.IsFocusable
struct UBPI_GenericInteractable_C_IsFocusable_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFocusable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.GetInteractionText
struct UBPI_GenericInteractable_C_GetInteractionText_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.Interact1
struct UBPI_GenericInteractable_C_Interact1_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GenericInteractable.BPI_GenericInteractable_C.SetFocused
struct UBPI_GenericInteractable_C_SetFocused_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFocused;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
