// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThrowablesBase.ThrowablesBase_C.Use Throwables
// (Public, BlueprintCallable, BlueprintEvent)

void AThrowablesBase_C::Use_Throwables()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrowablesBase.ThrowablesBase_C.Use Throwables");

	AThrowablesBase_C_Use_Throwables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrowablesBase.ThrowablesBase_C.SetThrowableMesh
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh**            NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                MeshScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThrowablesBase_C::SetThrowableMesh(class UStaticMesh** NewMesh, struct FVector* MeshScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrowablesBase.ThrowablesBase_C.SetThrowableMesh");

	AThrowablesBase_C_SetThrowableMesh_Params params;
	params.NewMesh = NewMesh;
	params.MeshScale = MeshScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrowablesBase.ThrowablesBase_C.ExecuteUbergraph_ThrowablesBase
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThrowablesBase_C::ExecuteUbergraph_ThrowablesBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrowablesBase.ThrowablesBase_C.ExecuteUbergraph_ThrowablesBase");

	AThrowablesBase_C_ExecuteUbergraph_ThrowablesBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
