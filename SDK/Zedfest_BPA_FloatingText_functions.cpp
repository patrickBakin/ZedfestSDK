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

// Function BPA_FloatingText.BPA_FloatingText_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_FloatingText_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_FloatingText.BPA_FloatingText_C.ReceiveTick");

	ABPA_FloatingText_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_FloatingText.BPA_FloatingText_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPA_FloatingText_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_FloatingText.BPA_FloatingText_C.ReceiveBeginPlay");

	ABPA_FloatingText_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_FloatingText.BPA_FloatingText_C.ExecuteUbergraph_BPA_FloatingText
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_FloatingText_C::ExecuteUbergraph_BPA_FloatingText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_FloatingText.BPA_FloatingText_C.ExecuteUbergraph_BPA_FloatingText");

	ABPA_FloatingText_C_ExecuteUbergraph_BPA_FloatingText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
