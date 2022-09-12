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

// Function W_SpectatorScreen.W_SpectatorScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_SpectatorScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SpectatorScreen.W_SpectatorScreen_C.Construct");

	UW_SpectatorScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_SpectatorScreen.W_SpectatorScreen_C.SetSpectatingPlayerNameText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UW_SpectatorScreen_C::SetSpectatingPlayerNameText(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SpectatorScreen.W_SpectatorScreen_C.SetSpectatingPlayerNameText");

	UW_SpectatorScreen_C_SetSpectatingPlayerNameText_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_SpectatorScreen.W_SpectatorScreen_C.BndEvt__ReturnToLobbyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UW_SpectatorScreen_C::BndEvt__ReturnToLobbyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SpectatorScreen.W_SpectatorScreen_C.BndEvt__ReturnToLobbyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UW_SpectatorScreen_C_BndEvt__ReturnToLobbyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_SpectatorScreen.W_SpectatorScreen_C.ExecuteUbergraph_W_SpectatorScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_SpectatorScreen_C::ExecuteUbergraph_W_SpectatorScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SpectatorScreen.W_SpectatorScreen_C.ExecuteUbergraph_W_SpectatorScreen");

	UW_SpectatorScreen_C_ExecuteUbergraph_W_SpectatorScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
