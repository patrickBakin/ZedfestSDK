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

// Function ConsumableBase.ConsumableBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AConsumableBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableBase.ConsumableBase_C.ReceiveBeginPlay");

	AConsumableBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableBase.ConsumableBase_C.SetConsumableMesh
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh**            NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConsumableBase_C::SetConsumableMesh(class UStaticMesh** NewMesh, struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableBase.ConsumableBase_C.SetConsumableMesh");

	AConsumableBase_C_SetConsumableMesh_Params params;
	params.NewMesh = NewMesh;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableBase.ConsumableBase_C.ExecuteUbergraph_ConsumableBase
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConsumableBase_C::ExecuteUbergraph_ConsumableBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableBase.ConsumableBase_C.ExecuteUbergraph_ConsumableBase");

	AConsumableBase_C_ExecuteUbergraph_ConsumableBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
