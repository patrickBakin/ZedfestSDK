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

// Function W_LatestNews.W_LatestNews_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_LatestNews_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LatestNews.W_LatestNews_C.Construct");

	UW_LatestNews_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_LatestNews.W_LatestNews_C.ExecuteUbergraph_W_LatestNews
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_LatestNews_C::ExecuteUbergraph_W_LatestNews(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LatestNews.W_LatestNews_C.ExecuteUbergraph_W_LatestNews");

	UW_LatestNews_C_ExecuteUbergraph_W_LatestNews_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
