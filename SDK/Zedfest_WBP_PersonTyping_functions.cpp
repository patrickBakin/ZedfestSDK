<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PersonTyping.WBP_PersonTyping_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PersonTyping_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PersonTyping.WBP_PersonTyping_C.Construct");

	UWBP_PersonTyping_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PersonTyping.WBP_PersonTyping_C.ExecuteUbergraph_WBP_PersonTyping
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PersonTyping_C::ExecuteUbergraph_WBP_PersonTyping(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PersonTyping.WBP_PersonTyping_C.ExecuteUbergraph_WBP_PersonTyping");

	UWBP_PersonTyping_C_ExecuteUbergraph_WBP_PersonTyping_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
