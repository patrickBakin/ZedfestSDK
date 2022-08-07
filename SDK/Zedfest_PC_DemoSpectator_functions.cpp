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

// Function PC_DemoSpectator.PC_DemoSpectator_C.ToggleHUD
// (Public, BlueprintCallable, BlueprintEvent)

void APC_DemoSpectator_C::ToggleHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_DemoSpectator.PC_DemoSpectator_C.ToggleHUD");

	APC_DemoSpectator_C_ToggleHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_DemoSpectator.PC_DemoSpectator_C.EnableVR
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRMoveMode*                   InVRMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APC_DemoSpectator_C::EnableVR(bool* InEnable, EVRMoveMode* InVRMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_DemoSpectator.PC_DemoSpectator_C.EnableVR");

	APC_DemoSpectator_C_EnableVR_Params params;
	params.InEnable = InEnable;
	params.InVRMode = InVRMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_DemoSpectator.PC_DemoSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APC_DemoSpectator_C::InpActEvt_Tab_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_DemoSpectator.PC_DemoSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_2");

	APC_DemoSpectator_C_InpActEvt_Tab_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_DemoSpectator.PC_DemoSpectator_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APC_DemoSpectator_C::InpActEvt_Escape_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_DemoSpectator.PC_DemoSpectator_C.InpActEvt_Escape_K2Node_InputKeyEvent_1");

	APC_DemoSpectator_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_DemoSpectator.PC_DemoSpectator_C.BP_ToggleMenu
// (Event, Public, BlueprintEvent)

void APC_DemoSpectator_C::BP_ToggleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_DemoSpectator.PC_DemoSpectator_C.BP_ToggleMenu");

	APC_DemoSpectator_C_BP_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_DemoSpectator.PC_DemoSpectator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APC_DemoSpectator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_DemoSpectator.PC_DemoSpectator_C.ReceiveBeginPlay");

	APC_DemoSpectator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_DemoSpectator.PC_DemoSpectator_C.ExecuteUbergraph_PC_DemoSpectator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APC_DemoSpectator_C::ExecuteUbergraph_PC_DemoSpectator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_DemoSpectator.PC_DemoSpectator_C.ExecuteUbergraph_PC_DemoSpectator");

	APC_DemoSpectator_C_ExecuteUbergraph_PC_DemoSpectator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
