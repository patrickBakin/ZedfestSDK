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

// Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.SetPlayerNameText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_EndGameConnPlayer_C::SetPlayerNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.SetPlayerNameText");

	UWBP_EndGameConnPlayer_C_SetPlayerNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.SetToolTipInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                TT_Icon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  TT_Text                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_EndGameConnPlayer_C::SetToolTipInfo(class UObject** TT_Icon, struct FText* TT_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.SetToolTipInfo");

	UWBP_EndGameConnPlayer_C_SetToolTipInfo_Params params;
	params.TT_Icon = TT_Icon;
	params.TT_Text = TT_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.SetNotificatorInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_QuestNotificatorInfo S_QuestNotificatorInfo         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_EndGameConnPlayer_C::SetNotificatorInfo(struct FS_QuestNotificatorInfo* S_QuestNotificatorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.SetNotificatorInfo");

	UWBP_EndGameConnPlayer_C_SetNotificatorInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (S_QuestNotificatorInfo != nullptr)
		*S_QuestNotificatorInfo = params.S_QuestNotificatorInfo;
}


// Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EndGameConnPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.Construct");

	UWBP_EndGameConnPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.ExecuteUbergraph_WBP_EndGameConnPlayer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EndGameConnPlayer_C::ExecuteUbergraph_WBP_EndGameConnPlayer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EndGameConnPlayer.WBP_EndGameConnPlayer_C.ExecuteUbergraph_WBP_EndGameConnPlayer");

	UWBP_EndGameConnPlayer_C_ExecuteUbergraph_WBP_EndGameConnPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
