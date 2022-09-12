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

// Function BP_SmartDrone_Bullet.BP_SmartDrone_Bullet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Bullet_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Bullet.BP_SmartDrone_Bullet_C.ReceiveTick");

	ABP_SmartDrone_Bullet_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Bullet.BP_SmartDrone_Bullet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SmartDrone_Bullet_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Bullet.BP_SmartDrone_Bullet_C.ReceiveBeginPlay");

	ABP_SmartDrone_Bullet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Bullet.BP_SmartDrone_Bullet_C.ExecuteUbergraph_BP_SmartDrone_Bullet
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Bullet_C::ExecuteUbergraph_BP_SmartDrone_Bullet(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Bullet.BP_SmartDrone_Bullet_C.ExecuteUbergraph_BP_SmartDrone_Bullet");

	ABP_SmartDrone_Bullet_C_ExecuteUbergraph_BP_SmartDrone_Bullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
