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

// Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_ExpandingGroundLava_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.Timeline_0__FinishedFunc");

	ABP_ExpandingGroundLava_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_ExpandingGroundLava_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.Timeline_0__UpdateFunc");

	ABP_ExpandingGroundLava_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_ExpandingGroundLava_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.Timeline_1__FinishedFunc");

	ABP_ExpandingGroundLava_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_ExpandingGroundLava_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.Timeline_1__UpdateFunc");

	ABP_ExpandingGroundLava_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.BndEvt__ST_ExpandingLava_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ExpandingGroundLava_C::BndEvt__ST_ExpandingLava_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.BndEvt__ST_ExpandingLava_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ExpandingGroundLava_C_BndEvt__ST_ExpandingLava_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExpandingGroundLava_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.ReceiveBeginPlay");

	ABP_ExpandingGroundLava_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.ExecuteUbergraph_BP_ExpandingGroundLava
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExpandingGroundLava_C::ExecuteUbergraph_BP_ExpandingGroundLava(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpandingGroundLava.BP_ExpandingGroundLava_C.ExecuteUbergraph_BP_ExpandingGroundLava");

	ABP_ExpandingGroundLava_C_ExecuteUbergraph_BP_ExpandingGroundLava_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
