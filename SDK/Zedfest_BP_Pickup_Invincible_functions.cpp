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

// Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.Set Widget Key Binds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_KeyBinds>     Key_Binds                      (Parm, OutParm, ZeroConstructor)

void ABP_Pickup_Invincible_C::Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.Set Widget Key Binds");

	ABP_Pickup_Invincible_C_Set_Widget_Key_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Key_Binds != nullptr)
		*Key_Binds = params.Key_Binds;
}


// Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Pickup_Invincible_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.Timeline_0__FinishedFunc");

	ABP_Pickup_Invincible_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Pickup_Invincible_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.Timeline_0__UpdateFunc");

	ABP_Pickup_Invincible_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.PickupEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_Pickup_Invincible_C::PickupEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.PickupEffect");

	ABP_Pickup_Invincible_C_PickupEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.InvincibleVisibility
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pickup_Invincible_C::InvincibleVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.InvincibleVisibility");

	ABP_Pickup_Invincible_C_InvincibleVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.ExecuteUbergraph_BP_Pickup_Invincible
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pickup_Invincible_C::ExecuteUbergraph_BP_Pickup_Invincible(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup_Invincible.BP_Pickup_Invincible_C.ExecuteUbergraph_BP_Pickup_Invincible");

	ABP_Pickup_Invincible_C_ExecuteUbergraph_BP_Pickup_Invincible_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
