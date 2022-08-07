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

// Function PlaceSpecialItem_W.PlaceSpecialItem_W_C.Get_SpecialItemText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlaceSpecialItem_W_C::Get_SpecialItemText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlaceSpecialItem_W.PlaceSpecialItem_W_C.Get_SpecialItemText_Text_1");

	UPlaceSpecialItem_W_C_Get_SpecialItemText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlaceSpecialItem_W.PlaceSpecialItem_W_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlaceSpecialItem_W_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlaceSpecialItem_W.PlaceSpecialItem_W_C.Construct");

	UPlaceSpecialItem_W_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlaceSpecialItem_W.PlaceSpecialItem_W_C.ExecuteUbergraph_PlaceSpecialItem_W
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlaceSpecialItem_W_C::ExecuteUbergraph_PlaceSpecialItem_W(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlaceSpecialItem_W.PlaceSpecialItem_W_C.ExecuteUbergraph_PlaceSpecialItem_W");

	UPlaceSpecialItem_W_C_ExecuteUbergraph_PlaceSpecialItem_W_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
