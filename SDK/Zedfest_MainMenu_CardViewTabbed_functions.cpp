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

// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainMenu_CardViewTabbed_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.OnKeyDown");

	UMainMenu_CardViewTabbed_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainMenu_CardViewTabbed_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.OnPreviewKeyDown");

	UMainMenu_CardViewTabbed_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainMenu_CardViewTabbed_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.OnFocusLost");

	UMainMenu_CardViewTabbed_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.ReFocus
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::ReFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.ReFocus");

	UMainMenu_CardViewTabbed_C_ReFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.OnTabChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                TabPanel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_CardViewTabbed_C::OnTabChange(class UWidget** TabPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.OnTabChange");

	UMainMenu_CardViewTabbed_C_OnTabChange_Params params;
	params.TabPanel = TabPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          CanFocus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_CardViewTabbed_C::CustomEvent_3(bool* CanFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.CustomEvent_3");

	UMainMenu_CardViewTabbed_C_CustomEvent_3_Params params;
	params.CanFocus = CanFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.CustomEvent_2");

	UMainMenu_CardViewTabbed_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.Play
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.Play");

	UMainMenu_CardViewTabbed_C_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.Leaderboard
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::Leaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.Leaderboard");

	UMainMenu_CardViewTabbed_C_Leaderboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.Settings
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.Settings");

	UMainMenu_CardViewTabbed_C_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.credits
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::credits()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.credits");

	UMainMenu_CardViewTabbed_C_credits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.customization
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::customization()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.customization");

	UMainMenu_CardViewTabbed_C_customization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.BndEvt__WeeklyObjectiveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMainMenu_CardViewTabbed_C::BndEvt__WeeklyObjectiveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.BndEvt__WeeklyObjectiveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMainMenu_CardViewTabbed_C_BndEvt__WeeklyObjectiveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.cancelExit
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::cancelExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.cancelExit");

	UMainMenu_CardViewTabbed_C_cancelExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.EventMenuUpdateWeeklyButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           MonthIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_CardViewTabbed_C::EventMenuUpdateWeeklyButton(int* MonthIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.EventMenuUpdateWeeklyButton");

	UMainMenu_CardViewTabbed_C_EventMenuUpdateWeeklyButton_Params params;
	params.MonthIndex = MonthIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.CustomEvent_1");

	UMainMenu_CardViewTabbed_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.Exit
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.Exit");

	UMainMenu_CardViewTabbed_C_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.quit
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::quit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.quit");

	UMainMenu_CardViewTabbed_C_quit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainMenu_CardViewTabbed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.Construct");

	UMainMenu_CardViewTabbed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.EventCloseSObjectives
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Close_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_CardViewTabbed_C::EventCloseSObjectives(bool* Close_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.EventCloseSObjectives");

	UMainMenu_CardViewTabbed_C_EventCloseSObjectives_Params params;
	params.Close_ = Close_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.MainMenuTabClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainMenu_CardViewTabbed_C::MainMenuTabClicked(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.MainMenuTabClicked");

	UMainMenu_CardViewTabbed_C_MainMenuTabClicked_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.BndEvt__ChallengesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMainMenu_CardViewTabbed_C::BndEvt__ChallengesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.BndEvt__ChallengesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UMainMenu_CardViewTabbed_C_BndEvt__ChallengesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenu_CardViewTabbed_C::BndEvt__Button_46_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UMainMenu_CardViewTabbed_C_BndEvt__Button_46_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.ExecuteUbergraph_MainMenu_CardViewTabbed
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_CardViewTabbed_C::ExecuteUbergraph_MainMenu_CardViewTabbed(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_CardViewTabbed.MainMenu_CardViewTabbed_C.ExecuteUbergraph_MainMenu_CardViewTabbed");

	UMainMenu_CardViewTabbed_C_ExecuteUbergraph_MainMenu_CardViewTabbed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
