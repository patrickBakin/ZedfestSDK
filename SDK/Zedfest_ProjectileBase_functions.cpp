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

// Function ProjectileBase.ProjectileBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectileBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.ReceiveBeginPlay");

	AProjectileBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.ExecuteUbergraph_ProjectileBase
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectileBase_C::ExecuteUbergraph_ProjectileBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.ExecuteUbergraph_ProjectileBase");

	AProjectileBase_C_ExecuteUbergraph_ProjectileBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
