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

// Function BP_KittenShrapnel_Explosives.BP_KittenShrapnel_Explosives_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_KittenShrapnel_Explosives_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KittenShrapnel_Explosives.BP_KittenShrapnel_Explosives_C.ReceiveBeginPlay");

	ABP_KittenShrapnel_Explosives_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KittenShrapnel_Explosives.BP_KittenShrapnel_Explosives_C.ExecuteUbergraph_BP_KittenShrapnel_Explosives
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KittenShrapnel_Explosives_C::ExecuteUbergraph_BP_KittenShrapnel_Explosives(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KittenShrapnel_Explosives.BP_KittenShrapnel_Explosives_C.ExecuteUbergraph_BP_KittenShrapnel_Explosives");

	ABP_KittenShrapnel_Explosives_C_ExecuteUbergraph_BP_KittenShrapnel_Explosives_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
