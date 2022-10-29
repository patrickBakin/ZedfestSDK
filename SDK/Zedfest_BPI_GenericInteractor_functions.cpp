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

// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetPhysicsHandleTargetLocationAndRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 HandleLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                HandleRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GenericInteractor_C::GetPhysicsHandleTargetLocationAndRotation(struct FVector* HandleLocation, struct FRotator* HandleRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetPhysicsHandleTargetLocationAndRotation");

	UBPI_GenericInteractor_C_GetPhysicsHandleTargetLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HandleLocation != nullptr)
		*HandleLocation = params.HandleLocation;
	if (HandleRotation != nullptr)
		*HandleRotation = params.HandleRotation;
}


// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetPhysicsHandle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPhysicsHandleComponent* PhysicsHandleComponent         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_GenericInteractor_C::GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandleComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetPhysicsHandle");

	UBPI_GenericInteractor_C_GetPhysicsHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PhysicsHandleComponent != nullptr)
		*PhysicsHandleComponent = params.PhysicsHandleComponent;
}


// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetFocusedInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TScriptInterface<class UBPI_GenericInteractable_C> Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GenericInteractor_C::GetFocusedInteractable(TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetFocusedInteractable");

	UBPI_GenericInteractor_C_GetFocusedInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetInteractionCollider
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*     Collider                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_GenericInteractor_C::GetInteractionCollider(class UPrimitiveComponent** Collider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetInteractionCollider");

	UBPI_GenericInteractor_C_GetInteractionCollider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Collider != nullptr)
		*Collider = params.Collider;
}


// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetInteractionIgnoreList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>          ActorsToIgnore                 (Parm, OutParm, ZeroConstructor)

void UBPI_GenericInteractor_C::GetInteractionIgnoreList(TArray<class AActor*>* ActorsToIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetInteractionIgnoreList");

	UBPI_GenericInteractor_C_GetInteractionIgnoreList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
}


// Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetInteractionTraceLine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 StartPoint                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AimDirection                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GenericInteractor_C::GetInteractionTraceLine(struct FVector* StartPoint, struct FVector* AimDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GenericInteractor.BPI_GenericInteractor_C.GetInteractionTraceLine");

	UBPI_GenericInteractor_C_GetInteractionTraceLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartPoint != nullptr)
		*StartPoint = params.StartPoint;
	if (AimDirection != nullptr)
		*AimDirection = params.AimDirection;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
