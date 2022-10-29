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

// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPauseMenu_CardViewTabbed_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.OnPreviewKeyDown");

	UPauseMenu_CardViewTabbed_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.OnFailure_7D35315444CECC39288E2AA1D80BDECC
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::OnFailure_7D35315444CECC39288E2AA1D80BDECC()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.OnFailure_7D35315444CECC39288E2AA1D80BDECC");

	UPauseMenu_CardViewTabbed_C_OnFailure_7D35315444CECC39288E2AA1D80BDECC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.OnSuccess_7D35315444CECC39288E2AA1D80BDECC
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::OnSuccess_7D35315444CECC39288E2AA1D80BDECC()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.OnSuccess_7D35315444CECC39288E2AA1D80BDECC");

	UPauseMenu_CardViewTabbed_C_OnSuccess_7D35315444CECC39288E2AA1D80BDECC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.Exit
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.Exit");

	UPauseMenu_CardViewTabbed_C_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.cancelExit
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::cancelExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.cancelExit");

	UPauseMenu_CardViewTabbed_C_cancelExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.cmd_quit
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::cmd_quit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.cmd_quit");

	UPauseMenu_CardViewTabbed_C_cmd_quit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.CustomEvent_1");

	UPauseMenu_CardViewTabbed_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.Construct");

	UPauseMenu_CardViewTabbed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPauseMenu_CardViewTabbed_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.OnFocusLost");

	UPauseMenu_CardViewTabbed_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.ReFocus
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::ReFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.ReFocus");

	UPauseMenu_CardViewTabbed_C_ReFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.BndEvt__SettingItem_K2Node_ComponentBoundEvent_6_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::BndEvt__SettingItem_K2Node_ComponentBoundEvent_6_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.BndEvt__SettingItem_K2Node_ComponentBoundEvent_6_OnSelectedItemChange__DelegateSignature");

	UPauseMenu_CardViewTabbed_C_BndEvt__SettingItem_K2Node_ComponentBoundEvent_6_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.OnTabChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                TabPanel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPauseMenu_CardViewTabbed_C::OnTabChange(class UWidget** TabPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.OnTabChange");

	UPauseMenu_CardViewTabbed_C_OnTabChange_Params params;
	params.TabPanel = TabPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          CanFocus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPauseMenu_CardViewTabbed_C::CustomEvent_3(bool* CanFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.CustomEvent_3");

	UPauseMenu_CardViewTabbed_C_CustomEvent_3_Params params;
	params.CanFocus = CanFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.CustomEvent_2");

	UPauseMenu_CardViewTabbed_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.resume
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.resume");

	UPauseMenu_CardViewTabbed_C_resume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.exittomainmenu1
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::exittomainmenu1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.exittomainmenu1");

	UPauseMenu_CardViewTabbed_C_exittomainmenu1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.suicide
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.suicide");

	UPauseMenu_CardViewTabbed_C_suicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.GoToMainMenu
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::GoToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.GoToMainMenu");

	UPauseMenu_CardViewTabbed_C_GoToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.MainMenuNO
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::MainMenuNO()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.MainMenuNO");

	UPauseMenu_CardViewTabbed_C_MainMenuNO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.MainMenuYES
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::MainMenuYES()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.MainMenuYES");

	UPauseMenu_CardViewTabbed_C_MainMenuYES_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.PauseMenuTabClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPauseMenu_CardViewTabbed_C::PauseMenuTabClicked(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.PauseMenuTabClicked");

	UPauseMenu_CardViewTabbed_C_PauseMenuTabClicked_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.BndEvt__PlayerKickButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::BndEvt__PlayerKickButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.BndEvt__PlayerKickButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UPauseMenu_CardViewTabbed_C_BndEvt__PlayerKickButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.SuicideNo
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::SuicideNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.SuicideNo");

	UPauseMenu_CardViewTabbed_C_SuicideNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.SuicideYes
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::SuicideYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.SuicideYes");

	UPauseMenu_CardViewTabbed_C_SuicideYes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.statistics
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::statistics()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.statistics");

	UPauseMenu_CardViewTabbed_C_statistics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.Settings
// (BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.Settings");

	UPauseMenu_CardViewTabbed_C_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.PauseMenuBandNameEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  BandName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  SongName                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPauseMenu_CardViewTabbed_C::PauseMenuBandNameEvent(struct FText* BandName, struct FText* SongName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.PauseMenuBandNameEvent");

	UPauseMenu_CardViewTabbed_C_PauseMenuBandNameEvent_Params params;
	params.BandName = BandName;
	params.SongName = SongName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.ExecuteUbergraph_PauseMenu_CardViewTabbed
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPauseMenu_CardViewTabbed_C::ExecuteUbergraph_PauseMenu_CardViewTabbed(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.ExecuteUbergraph_PauseMenu_CardViewTabbed");

	UPauseMenu_CardViewTabbed_C_ExecuteUbergraph_PauseMenu_CardViewTabbed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.ResumeTheGame__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPauseMenu_CardViewTabbed_C::ResumeTheGame__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu_CardViewTabbed.PauseMenu_CardViewTabbed_C.ResumeTheGame__DelegateSignature");

	UPauseMenu_CardViewTabbed_C_ResumeTheGame__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
