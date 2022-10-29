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

// Function BP_Explosion_PlaceHolder.BP_Explosion_PlaceHolder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Explosion_PlaceHolder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_PlaceHolder.BP_Explosion_PlaceHolder_C.UserConstructionScript");

	ABP_Explosion_PlaceHolder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_PlaceHolder.BP_Explosion_PlaceHolder_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Explosion_PlaceHolder_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_PlaceHolder.BP_Explosion_PlaceHolder_C.Timeline_0__FinishedFunc");

	ABP_Explosion_PlaceHolder_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_PlaceHolder.BP_Explosion_PlaceHolder_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Explosion_PlaceHolder_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_PlaceHolder.BP_Explosion_PlaceHolder_C.Timeline_0__UpdateFunc");

	ABP_Explosion_PlaceHolder_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_PlaceHolder.BP_Explosion_PlaceHolder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Explosion_PlaceHolder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_PlaceHolder.BP_Explosion_PlaceHolder_C.ReceiveBeginPlay");

	ABP_Explosion_PlaceHolder_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_PlaceHolder.BP_Explosion_PlaceHolder_C.ExecuteUbergraph_BP_Explosion_PlaceHolder
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explosion_PlaceHolder_C::ExecuteUbergraph_BP_Explosion_PlaceHolder(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_PlaceHolder.BP_Explosion_PlaceHolder_C.ExecuteUbergraph_BP_Explosion_PlaceHolder");

	ABP_Explosion_PlaceHolder_C_ExecuteUbergraph_BP_Explosion_PlaceHolder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
