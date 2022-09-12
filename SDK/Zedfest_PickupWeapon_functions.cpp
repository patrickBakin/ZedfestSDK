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

// Function PickupWeapon.PickupWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APickupWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupWeapon.PickupWeapon_C.UserConstructionScript");

	APickupWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupWeapon.PickupWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APickupWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupWeapon.PickupWeapon_C.ReceiveBeginPlay");

	APickupWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupWeapon.PickupWeapon_C.ExecuteUbergraph_PickupWeapon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APickupWeapon_C::ExecuteUbergraph_PickupWeapon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupWeapon.PickupWeapon_C.ExecuteUbergraph_PickupWeapon");

	APickupWeapon_C_ExecuteUbergraph_PickupWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
