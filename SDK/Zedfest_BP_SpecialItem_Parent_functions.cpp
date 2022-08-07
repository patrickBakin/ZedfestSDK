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

// Function BP_SpecialItem_Parent.BP_SpecialItem_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpecialItem_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Parent.BP_SpecialItem_Parent_C.ReceiveBeginPlay");

	ABP_SpecialItem_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialItem_Parent.BP_SpecialItem_Parent_C.ExecuteUbergraph_BP_SpecialItem_Parent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialItem_Parent_C::ExecuteUbergraph_BP_SpecialItem_Parent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialItem_Parent.BP_SpecialItem_Parent_C.ExecuteUbergraph_BP_SpecialItem_Parent");

	ABP_SpecialItem_Parent_C_ExecuteUbergraph_BP_SpecialItem_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
