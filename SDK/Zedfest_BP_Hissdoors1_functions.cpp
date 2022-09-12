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

// Function BP_Hissdoors1.BP_Hissdoors1_C.OnRep_NewVar_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Hissdoors1_C::OnRep_NewVar_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hissdoors1.BP_Hissdoors1_C.OnRep_NewVar_1");

	ABP_Hissdoors1_C_OnRep_NewVar_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hissdoors1.BP_Hissdoors1_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Hissdoors1_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hissdoors1.BP_Hissdoors1_C.Timeline_0__FinishedFunc");

	ABP_Hissdoors1_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hissdoors1.BP_Hissdoors1_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Hissdoors1_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hissdoors1.BP_Hissdoors1_C.Timeline_0__UpdateFunc");

	ABP_Hissdoors1_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hissdoors1.BP_Hissdoors1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Hissdoors1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hissdoors1.BP_Hissdoors1_C.ReceiveBeginPlay");

	ABP_Hissdoors1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hissdoors1.BP_Hissdoors1_C.ZedDoorsEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Internmission                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hissdoors1_C::ZedDoorsEvent(bool* Internmission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hissdoors1.BP_Hissdoors1_C.ZedDoorsEvent");

	ABP_Hissdoors1_C_ZedDoorsEvent_Params params;
	params.Internmission = Internmission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hissdoors1.BP_Hissdoors1_C.ExecuteUbergraph_BP_Hissdoors1
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hissdoors1_C::ExecuteUbergraph_BP_Hissdoors1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hissdoors1.BP_Hissdoors1_C.ExecuteUbergraph_BP_Hissdoors1");

	ABP_Hissdoors1_C_ExecuteUbergraph_BP_Hissdoors1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
