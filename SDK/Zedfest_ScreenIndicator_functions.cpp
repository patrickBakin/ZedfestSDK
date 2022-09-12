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

// Function ScreenIndicator.ScreenIndicator_C.Remove Indicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScreenIndicator_C**     Indicator_Ref                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Immediately                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenIndicator_C::Remove_Indicator(class UScreenIndicator_C** Indicator_Ref, bool* Immediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenIndicator.ScreenIndicator_C.Remove Indicator");

	UScreenIndicator_C_Remove_Indicator_Params params;
	params.Indicator_Ref = Indicator_Ref;
	params.Immediately = Immediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenIndicator.ScreenIndicator_C.Check Actor Is Already Tracking?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Spawn_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScreenIndicator_C::Check_Actor_Is_Already_Tracking_(bool* Can_Spawn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenIndicator.ScreenIndicator_C.Check Actor Is Already Tracking?");

	UScreenIndicator_C_Check_Actor_Is_Already_Tracking__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Spawn_ != nullptr)
		*Can_Spawn_ = params.Can_Spawn_;
}


// Function ScreenIndicator.ScreenIndicator_C.Create Indicator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIndicatorData*         Indicator_Data                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UScreenIndicator_C*      Indicator_Ref                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScreenIndicator_C::Create_Indicator(struct FIndicatorData* Indicator_Data, class UScreenIndicator_C** Indicator_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenIndicator.ScreenIndicator_C.Create Indicator");

	UScreenIndicator_C_Create_Indicator_Params params;
	params.Indicator_Data = Indicator_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Indicator_Ref != nullptr)
		*Indicator_Ref = params.Indicator_Ref;
}


// Function ScreenIndicator.ScreenIndicator_C.Spawn Indicator
// (BlueprintCallable, BlueprintEvent)

void UScreenIndicator_C::Spawn_Indicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenIndicator.ScreenIndicator_C.Spawn Indicator");

	UScreenIndicator_C_Spawn_Indicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenIndicator.ScreenIndicator_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenIndicator_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenIndicator.ScreenIndicator_C.ReceiveEndPlay");

	UScreenIndicator_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenIndicator.ScreenIndicator_C.ExecuteUbergraph_ScreenIndicator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenIndicator_C::ExecuteUbergraph_ScreenIndicator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenIndicator.ScreenIndicator_C.ExecuteUbergraph_ScreenIndicator");

	UScreenIndicator_C_ExecuteUbergraph_ScreenIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
