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

// Function ItemSpecialBase.ItemSpecialBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AItemSpecialBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemSpecialBase.ItemSpecialBase_C.ReceiveBeginPlay");

	AItemSpecialBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemSpecialBase.ItemSpecialBase_C.SetSpecialItemMesh
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh**            NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemSpecialBase_C::SetSpecialItemMesh(class UStaticMesh** NewMesh, struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemSpecialBase.ItemSpecialBase_C.SetSpecialItemMesh");

	AItemSpecialBase_C_SetSpecialItemMesh_Params params;
	params.NewMesh = NewMesh;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemSpecialBase.ItemSpecialBase_C.ExecuteUbergraph_ItemSpecialBase
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemSpecialBase_C::ExecuteUbergraph_ItemSpecialBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemSpecialBase.ItemSpecialBase_C.ExecuteUbergraph_ItemSpecialBase");

	AItemSpecialBase_C_ExecuteUbergraph_ItemSpecialBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
