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

// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetPhysicsHandleTargetLocationAndRotation
struct UBPI_GenericInteractor_C_GetPhysicsHandleTargetLocationAndRotation_Params
{
	struct FVector                                     HandleLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    HandleRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetPhysicsHandle
struct UBPI_GenericInteractor_C_GetPhysicsHandle_Params
{
	class UPhysicsHandleComponent*                     PhysicsHandleComponent;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetFocusedInteractable
struct UBPI_GenericInteractor_C_GetFocusedInteractable_Params
{
	TScriptInterface<class UBPI_GenericInteractable_C> Interactable;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetInteractionCollider
struct UBPI_GenericInteractor_C_GetInteractionCollider_Params
{
	class UPrimitiveComponent*                         Collider;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetInteractionIgnoreList
struct UBPI_GenericInteractor_C_GetInteractionIgnoreList_Params
{
	TArray<class AActor*>                              ActorsToIgnore;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetInteractionTraceLine
struct UBPI_GenericInteractor_C_GetInteractionTraceLine_Params
{
	struct FVector                                     StartPoint;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AimDirection;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
