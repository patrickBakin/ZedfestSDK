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

// Function W_LatestNewsText.W_LatestNewsText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_LatestNewsText_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LatestNewsText.W_LatestNewsText_C.PreConstruct");

	UW_LatestNewsText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_LatestNewsText.W_LatestNewsText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_LatestNewsText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LatestNewsText.W_LatestNewsText_C.Construct");

	UW_LatestNewsText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_LatestNewsText.W_LatestNewsText_C.ExecuteUbergraph_W_LatestNewsText
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_LatestNewsText_C::ExecuteUbergraph_W_LatestNewsText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LatestNewsText.W_LatestNewsText_C.ExecuteUbergraph_W_LatestNewsText");

	UW_LatestNewsText_C_ExecuteUbergraph_W_LatestNewsText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
