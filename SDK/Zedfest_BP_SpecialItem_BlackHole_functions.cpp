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

// Function BP_SpecialItem_BlackHole.BP_SpecialItem_BlackHole_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpecialItem_BlackHole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_BlackHole.BP_SpecialItem_BlackHole_C.ReceiveBeginPlay");

	ABP_SpecialItem_BlackHole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialItem_BlackHole.BP_SpecialItem_BlackHole_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_SpecialItem_BlackHole_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_BlackHole.BP_SpecialItem_BlackHole_C.CustomEvent_1");

	ABP_SpecialItem_BlackHole_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialItem_BlackHole.BP_SpecialItem_BlackHole_C.ExecuteUbergraph_BP_SpecialItem_BlackHole
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialItem_BlackHole_C::ExecuteUbergraph_BP_SpecialItem_BlackHole(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_BlackHole.BP_SpecialItem_BlackHole_C.ExecuteUbergraph_BP_SpecialItem_BlackHole");

	ABP_SpecialItem_BlackHole_C_ExecuteUbergraph_BP_SpecialItem_BlackHole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
