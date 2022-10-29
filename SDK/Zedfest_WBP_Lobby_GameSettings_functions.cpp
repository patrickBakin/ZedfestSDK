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

// Function WBP_Lobby_GameSettings.WBP_Lobby_GameSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Lobby_GameSettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_GameSettings.WBP_Lobby_GameSettings_C.Construct");

	UWBP_Lobby_GameSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_GameSettings.WBP_Lobby_GameSettings_C.FillPlayersWindow
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_GameSettings_C::FillPlayersWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_GameSettings.WBP_Lobby_GameSettings_C.FillPlayersWindow");

	UWBP_Lobby_GameSettings_C_FillPlayersWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_GameSettings.WBP_Lobby_GameSettings_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_GameSettings_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_GameSettings.WBP_Lobby_GameSettings_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UWBP_Lobby_GameSettings_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_GameSettings.WBP_Lobby_GameSettings_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_GameSettings_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_GameSettings.WBP_Lobby_GameSettings_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UWBP_Lobby_GameSettings_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_GameSettings.WBP_Lobby_GameSettings_C.ExecuteUbergraph_WBP_Lobby_GameSettings
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Lobby_GameSettings_C::ExecuteUbergraph_WBP_Lobby_GameSettings(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_GameSettings.WBP_Lobby_GameSettings_C.ExecuteUbergraph_WBP_Lobby_GameSettings");

	UWBP_Lobby_GameSettings_C_ExecuteUbergraph_WBP_Lobby_GameSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
