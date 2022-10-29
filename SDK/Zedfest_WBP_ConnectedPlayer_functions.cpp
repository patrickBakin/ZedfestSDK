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

// Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.SetPlayerNameText
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_ConnectedPlayer_C::SetPlayerNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.SetPlayerNameText");

	UWBP_ConnectedPlayer_C_SetPlayerNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.SetToolTipInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                TT_Icon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  TT_Text                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ConnectedPlayer_C::SetToolTipInfo(class UObject** TT_Icon, struct FText* TT_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.SetToolTipInfo");

	UWBP_ConnectedPlayer_C_SetToolTipInfo_Params params;
	params.TT_Icon = TT_Icon;
	params.TT_Text = TT_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.SetNotificatorInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_QuestNotificatorInfo S_QuestNotificatorInfo         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ConnectedPlayer_C::SetNotificatorInfo(struct FS_QuestNotificatorInfo* S_QuestNotificatorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.SetNotificatorInfo");

	UWBP_ConnectedPlayer_C_SetNotificatorInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (S_QuestNotificatorInfo != nullptr)
		*S_QuestNotificatorInfo = params.S_QuestNotificatorInfo;
}


// Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ConnectedPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.Construct");

	UWBP_ConnectedPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.ExecuteUbergraph_WBP_ConnectedPlayer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ConnectedPlayer_C::ExecuteUbergraph_WBP_ConnectedPlayer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectedPlayer.WBP_ConnectedPlayer_C.ExecuteUbergraph_WBP_ConnectedPlayer");

	UWBP_ConnectedPlayer_C_ExecuteUbergraph_WBP_ConnectedPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
