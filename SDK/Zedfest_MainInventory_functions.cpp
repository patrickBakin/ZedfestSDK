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

// Function MainInventory.MainInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainInventory.MainInventory_C.Construct");

	UMainInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainInventory.MainInventory_C.ExecuteUbergraph_MainInventory
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainInventory_C::ExecuteUbergraph_MainInventory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainInventory.MainInventory_C.ExecuteUbergraph_MainInventory");

	UMainInventory_C_ExecuteUbergraph_MainInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
