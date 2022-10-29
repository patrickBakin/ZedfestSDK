#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_SpectatorScreen.W_SpectatorScreen_C.Construct
struct UW_SpectatorScreen_C_Construct_Params
{
};

// Function W_SpectatorScreen.W_SpectatorScreen_C.SetSpectatingPlayerNameText
struct UW_SpectatorScreen_C_SetSpectatingPlayerNameText_Params
{
	struct FString*                                    PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function W_SpectatorScreen.W_SpectatorScreen_C.BndEvt__ReturnToLobbyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UW_SpectatorScreen_C_BndEvt__ReturnToLobbyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function W_SpectatorScreen.W_SpectatorScreen_C.ExecuteUbergraph_W_SpectatorScreen
struct UW_SpectatorScreen_C_ExecuteUbergraph_W_SpectatorScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
