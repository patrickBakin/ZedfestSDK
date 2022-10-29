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

// Function BP_Horde_UnderGroundGamestate.BP_Horde_UnderGroundGamestate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Horde_UnderGroundGamestate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_UnderGroundGamestate.BP_Horde_UnderGroundGamestate_C.ReceiveBeginPlay");

	ABP_Horde_UnderGroundGamestate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_UnderGroundGamestate.BP_Horde_UnderGroundGamestate_C.ExecuteUbergraph_BP_Horde_UnderGroundGamestate
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_UnderGroundGamestate_C::ExecuteUbergraph_BP_Horde_UnderGroundGamestate(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_UnderGroundGamestate.BP_Horde_UnderGroundGamestate_C.ExecuteUbergraph_BP_Horde_UnderGroundGamestate");

	ABP_Horde_UnderGroundGamestate_C_ExecuteUbergraph_BP_Horde_UnderGroundGamestate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
