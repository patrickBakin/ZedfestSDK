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

// Function WBP_ChatMessage.WBP_ChatMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ChatMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChatMessage.WBP_ChatMessage_C.Construct");

	UWBP_ChatMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ChatMessage.WBP_ChatMessage_C.ExecuteUbergraph_WBP_ChatMessage
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ChatMessage_C::ExecuteUbergraph_WBP_ChatMessage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChatMessage.WBP_ChatMessage_C.ExecuteUbergraph_WBP_ChatMessage");

	UWBP_ChatMessage_C_ExecuteUbergraph_WBP_ChatMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
