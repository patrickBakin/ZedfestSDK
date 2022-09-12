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

// Function BP_Pickup_Speed.BP_Pickup_Speed_C.Set Widget Key Binds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_KeyBinds>     Key_Binds                      (Parm, OutParm, ZeroConstructor)

void ABP_Pickup_Speed_C::Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Speed.BP_Pickup_Speed_C.Set Widget Key Binds");

	ABP_Pickup_Speed_C_Set_Widget_Key_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Key_Binds != nullptr)
		*Key_Binds = params.Key_Binds;
}


// Function BP_Pickup_Speed.BP_Pickup_Speed_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Pickup_Speed_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Speed.BP_Pickup_Speed_C.Timeline_0__FinishedFunc");

	ABP_Pickup_Speed_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup_Speed.BP_Pickup_Speed_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Pickup_Speed_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Speed.BP_Pickup_Speed_C.Timeline_0__UpdateFunc");

	ABP_Pickup_Speed_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup_Speed.BP_Pickup_Speed_C.PickupEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_Pickup_Speed_C::PickupEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Speed.BP_Pickup_Speed_C.PickupEffect");

	ABP_Pickup_Speed_C_PickupEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup_Speed.BP_Pickup_Speed_C.SpeedVisibilityEvent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pickup_Speed_C::SpeedVisibilityEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Speed.BP_Pickup_Speed_C.SpeedVisibilityEvent");

	ABP_Pickup_Speed_C_SpeedVisibilityEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup_Speed.BP_Pickup_Speed_C.ExecuteUbergraph_BP_Pickup_Speed
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pickup_Speed_C::ExecuteUbergraph_BP_Pickup_Speed(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Speed.BP_Pickup_Speed_C.ExecuteUbergraph_BP_Pickup_Speed");

	ABP_Pickup_Speed_C_ExecuteUbergraph_BP_Pickup_Speed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
