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

// Function BP_MoveCharacterTimeline_Menu.BP_MoveCharacterTimeline_Menu_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_MoveCharacterTimeline_Menu_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCharacterTimeline_Menu.BP_MoveCharacterTimeline_Menu_C.Timeline_0__FinishedFunc");

	ABP_MoveCharacterTimeline_Menu_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MoveCharacterTimeline_Menu.BP_MoveCharacterTimeline_Menu_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_MoveCharacterTimeline_Menu_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCharacterTimeline_Menu.BP_MoveCharacterTimeline_Menu_C.Timeline_0__UpdateFunc");

	ABP_MoveCharacterTimeline_Menu_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MoveCharacterTimeline_Menu.BP_MoveCharacterTimeline_Menu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MoveCharacterTimeline_Menu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCharacterTimeline_Menu.BP_MoveCharacterTimeline_Menu_C.ReceiveBeginPlay");

	ABP_MoveCharacterTimeline_Menu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MoveCharacterTimeline_Menu.BP_MoveCharacterTimeline_Menu_C.ExecuteUbergraph_BP_MoveCharacterTimeline_Menu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MoveCharacterTimeline_Menu_C::ExecuteUbergraph_BP_MoveCharacterTimeline_Menu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCharacterTimeline_Menu.BP_MoveCharacterTimeline_Menu_C.ExecuteUbergraph_BP_MoveCharacterTimeline_Menu");

	ABP_MoveCharacterTimeline_Menu_C_ExecuteUbergraph_BP_MoveCharacterTimeline_Menu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
