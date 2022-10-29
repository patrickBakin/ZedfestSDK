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

// Function Lvl1FlameThrower.Lvl1FlameThrower_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALvl1FlameThrower_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lvl1FlameThrower.Lvl1FlameThrower_C.ReceiveBeginPlay");

	ALvl1FlameThrower_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lvl1FlameThrower.Lvl1FlameThrower_C.ExecuteUbergraph_Lvl1FlameThrower
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALvl1FlameThrower_C::ExecuteUbergraph_Lvl1FlameThrower(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lvl1FlameThrower.Lvl1FlameThrower_C.ExecuteUbergraph_Lvl1FlameThrower");

	ALvl1FlameThrower_C_ExecuteUbergraph_Lvl1FlameThrower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
