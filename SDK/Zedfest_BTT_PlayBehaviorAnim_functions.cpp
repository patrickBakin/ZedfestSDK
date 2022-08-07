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

// Function BTT_PlayBehaviorAnim.BTT_PlayBehaviorAnim_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayBehaviorAnim_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayBehaviorAnim.BTT_PlayBehaviorAnim_C.ReceiveExecute");

	UBTT_PlayBehaviorAnim_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayBehaviorAnim.BTT_PlayBehaviorAnim_C.ExecuteUbergraph_BTT_PlayBehaviorAnim
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayBehaviorAnim_C::ExecuteUbergraph_BTT_PlayBehaviorAnim(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayBehaviorAnim.BTT_PlayBehaviorAnim_C.ExecuteUbergraph_BTT_PlayBehaviorAnim");

	UBTT_PlayBehaviorAnim_C_ExecuteUbergraph_BTT_PlayBehaviorAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
