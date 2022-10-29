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

// Function BP_Workspace.BP_Workspace_C.GetSlotTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter**             WorkerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotTransform                  (Parm, OutParm, IsPlainOldData)

void ABP_Workspace_C::GetSlotTransform(class ACharacter** WorkerRef, struct FTransform* SlotTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Workspace.BP_Workspace_C.GetSlotTransform");

	ABP_Workspace_C_GetSlotTransform_Params params;
	params.WorkerRef = WorkerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotTransform != nullptr)
		*SlotTransform = params.SlotTransform;
}


// Function BP_Workspace.BP_Workspace_C.RemoveFromSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter**             WorkerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Workspace_C::RemoveFromSlot(class ACharacter** WorkerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Workspace.BP_Workspace_C.RemoveFromSlot");

	ABP_Workspace_C_RemoveFromSlot_Params params;
	params.WorkerRef = WorkerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Workspace.BP_Workspace_C.GetRandomAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*            RandAnim                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Workspace_C::GetRandomAnimation(class UAnimMontage** RandAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Workspace.BP_Workspace_C.GetRandomAnimation");

	ABP_Workspace_C_GetRandomAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandAnim != nullptr)
		*RandAnim = params.RandAnim;
}


// Function BP_Workspace.BP_Workspace_C.PlayWorkerInSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter**             WorkerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WorkSuccess                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Workspace_C::PlayWorkerInSlot(class ACharacter** WorkerRef, bool* WorkSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Workspace.BP_Workspace_C.PlayWorkerInSlot");

	ABP_Workspace_C_PlayWorkerInSlot_Params params;
	params.WorkerRef = WorkerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorkSuccess != nullptr)
		*WorkSuccess = params.WorkSuccess;
}


// Function BP_Workspace.BP_Workspace_C.TakeSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter**             WorkerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SlotLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Workspace_C::TakeSlot(class ACharacter** WorkerRef, struct FVector* SlotLocation, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Workspace.BP_Workspace_C.TakeSlot");

	ABP_Workspace_C_TakeSlot_Params params;
	params.WorkerRef = WorkerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotLocation != nullptr)
		*SlotLocation = params.SlotLocation;
	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_Workspace.BP_Workspace_C.HasAvailableSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Workspace_C::HasAvailableSlot(bool* Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Workspace.BP_Workspace_C.HasAvailableSlot");

	ABP_Workspace_C_HasAvailableSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;
}


// Function BP_Workspace.BP_Workspace_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Workspace_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Workspace.BP_Workspace_C.UserConstructionScript");

	ABP_Workspace_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
