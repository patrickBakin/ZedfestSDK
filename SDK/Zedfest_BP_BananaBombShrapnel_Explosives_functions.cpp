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

// Function BP_BananaBombShrapnel_Explosives.BP_BananaBombShrapnel_Explosives_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BananaBombShrapnel_Explosives_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BananaBombShrapnel_Explosives.BP_BananaBombShrapnel_Explosives_C.ReceiveBeginPlay");

	ABP_BananaBombShrapnel_Explosives_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BananaBombShrapnel_Explosives.BP_BananaBombShrapnel_Explosives_C.ExecuteUbergraph_BP_BananaBombShrapnel_Explosives
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BananaBombShrapnel_Explosives_C::ExecuteUbergraph_BP_BananaBombShrapnel_Explosives(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BananaBombShrapnel_Explosives.BP_BananaBombShrapnel_Explosives_C.ExecuteUbergraph_BP_BananaBombShrapnel_Explosives");

	ABP_BananaBombShrapnel_Explosives_C_ExecuteUbergraph_BP_BananaBombShrapnel_Explosives_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
