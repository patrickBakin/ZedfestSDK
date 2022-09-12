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

// Function WBP_ChatMain.WBP_ChatMain_C.UpdateChatWindow
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Sender                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          SomeoneIsTyping_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          StoppedTyping_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ChatMain_C::UpdateChatWindow(struct FText* Sender, struct FText* Message, bool* SomeoneIsTyping_, bool* StoppedTyping_, int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChatMain.WBP_ChatMain_C.UpdateChatWindow");

	UWBP_ChatMain_C_UpdateChatWindow_Params params;
	params.Sender = Sender;
	params.Message = Message;
	params.SomeoneIsTyping_ = SomeoneIsTyping_;
	params.StoppedTyping_ = StoppedTyping_;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ChatMain.WBP_ChatMain_C.BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ChatMain_C::BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChatMain.WBP_ChatMain_C.BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWBP_ChatMain_C_BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ChatMain.WBP_ChatMain_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UWBP_ChatMain_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChatMain.WBP_ChatMain_C.CustomEvent_1");

	UWBP_ChatMain_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ChatMain.WBP_ChatMain_C.ShowChatBoxWhenPressingEnter
// (BlueprintCallable, BlueprintEvent)

void UWBP_ChatMain_C::ShowChatBoxWhenPressingEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChatMain.WBP_ChatMain_C.ShowChatBoxWhenPressingEnter");

	UWBP_ChatMain_C_ShowChatBoxWhenPressingEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ChatMain.WBP_ChatMain_C.BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ChatMain_C::BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChatMain.WBP_ChatMain_C.BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWBP_ChatMain_C_BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ChatMain.WBP_ChatMain_C.ResetOnTextChangedEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_ChatMain_C::ResetOnTextChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChatMain.WBP_ChatMain_C.ResetOnTextChangedEvent");

	UWBP_ChatMain_C_ResetOnTextChangedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ChatMain.WBP_ChatMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ChatMain_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChatMain.WBP_ChatMain_C.Construct");

	UWBP_ChatMain_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ChatMain.WBP_ChatMain_C.ExecuteUbergraph_WBP_ChatMain
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ChatMain_C::ExecuteUbergraph_WBP_ChatMain(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChatMain.WBP_ChatMain_C.ExecuteUbergraph_WBP_ChatMain");

	UWBP_ChatMain_C_ExecuteUbergraph_WBP_ChatMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
