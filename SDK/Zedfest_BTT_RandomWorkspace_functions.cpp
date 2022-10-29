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

// Function BTT_RandomWorkspace.BTT_RandomWorkspace_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_RandomWorkspace_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_RandomWorkspace.BTT_RandomWorkspace_C.ReceiveExecute");

	UBTT_RandomWorkspace_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_RandomWorkspace.BTT_RandomWorkspace_C.ExecuteUbergraph_BTT_RandomWorkspace
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_RandomWorkspace_C::ExecuteUbergraph_BTT_RandomWorkspace(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_RandomWorkspace.BTT_RandomWorkspace_C.ExecuteUbergraph_BTT_RandomWorkspace");

	UBTT_RandomWorkspace_C_ExecuteUbergraph_BTT_RandomWorkspace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
