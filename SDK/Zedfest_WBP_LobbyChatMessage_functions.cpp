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

// Function WBP_LobbyChatMessage.WBP_LobbyChatMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LobbyChatMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbyChatMessage.WBP_LobbyChatMessage_C.Construct");

	UWBP_LobbyChatMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LobbyChatMessage.WBP_LobbyChatMessage_C.ExecuteUbergraph_WBP_LobbyChatMessage
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LobbyChatMessage_C::ExecuteUbergraph_WBP_LobbyChatMessage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbyChatMessage.WBP_LobbyChatMessage_C.ExecuteUbergraph_WBP_LobbyChatMessage");

	UWBP_LobbyChatMessage_C_ExecuteUbergraph_WBP_LobbyChatMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
