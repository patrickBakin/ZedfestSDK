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

// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.SetToolTipInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                TT_Icon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  TT_Text                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_EmptyUnConnectedPlayer_C::SetToolTipInfo(class UObject** TT_Icon, struct FText* TT_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.SetToolTipInfo");

	UWBP_EmptyUnConnectedPlayer_C_SetToolTipInfo_Params params;
	params.TT_Icon = TT_Icon;
	params.TT_Text = TT_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.SetNotificatorInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_QuestNotificatorInfo S_QuestNotificatorInfo         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_EmptyUnConnectedPlayer_C::SetNotificatorInfo(struct FS_QuestNotificatorInfo* S_QuestNotificatorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.SetNotificatorInfo");

	UWBP_EmptyUnConnectedPlayer_C_SetNotificatorInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (S_QuestNotificatorInfo != nullptr)
		*S_QuestNotificatorInfo = params.S_QuestNotificatorInfo;
}


// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EmptyUnConnectedPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.Construct");

	UWBP_EmptyUnConnectedPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_EmptyUnConnectedPlayer_C::BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_EmptyUnConnectedPlayer_C_BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.EventSetEmptyRowInt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EmptyRowInt                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EmptyUnConnectedPlayer_C::EventSetEmptyRowInt(int* EmptyRowInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.EventSetEmptyRowInt");

	UWBP_EmptyUnConnectedPlayer_C_EventSetEmptyRowInt_Params params;
	params.EmptyRowInt = EmptyRowInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.ExecuteUbergraph_WBP_EmptyUnConnectedPlayer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EmptyUnConnectedPlayer_C::ExecuteUbergraph_WBP_EmptyUnConnectedPlayer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EmptyUnConnectedPlayer.WBP_EmptyUnConnectedPlayer_C.ExecuteUbergraph_WBP_EmptyUnConnectedPlayer");

	UWBP_EmptyUnConnectedPlayer_C_ExecuteUbergraph_WBP_EmptyUnConnectedPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
