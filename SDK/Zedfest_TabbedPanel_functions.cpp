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

// Function TabbedPanel.TabbedPanel_C.SetTabSwitching
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enable_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabbedPanel_C::SetTabSwitching(bool* Enable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedPanel.TabbedPanel_C.SetTabSwitching");

	UTabbedPanel_C_SetTabSwitching_Params params;
	params.Enable_ = Enable_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabbedPanel.TabbedPanel_C.GetPanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             PanelRef                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabbedPanel_C::GetPanel(class UUserWidget** PanelRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedPanel.TabbedPanel_C.GetPanel");

	UTabbedPanel_C_GetPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PanelRef != nullptr)
		*PanelRef = params.PanelRef;
}


// Function TabbedPanel.TabbedPanel_C.OnEscapeHandle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTabbedPanel_C::OnEscapeHandle(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedPanel.TabbedPanel_C.OnEscapeHandle");

	UTabbedPanel_C_OnEscapeHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function TabbedPanel.TabbedPanel_C.LoadPanel
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           index_val                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 PanelWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabbedPanel_C::LoadPanel(int* index_val, class UClass** PanelWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedPanel.TabbedPanel_C.LoadPanel");

	UTabbedPanel_C_LoadPanel_Params params;
	params.index_val = index_val;
	params.PanelWidget = PanelWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabbedPanel.TabbedPanel_C.NavigateTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabbedPanel_C::NavigateTab(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedPanel.TabbedPanel_C.NavigateTab");

	UTabbedPanel_C_NavigateTab_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabbedPanel.TabbedPanel_C.OnInput
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent*              In_Key_Event                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTabbedPanel_C::OnInput(struct FKeyEvent* In_Key_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedPanel.TabbedPanel_C.OnInput");

	UTabbedPanel_C_OnInput_Params params;
	params.In_Key_Event = In_Key_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TabbedPanel.TabbedPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabbedPanel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedPanel.TabbedPanel_C.PreConstruct");

	UTabbedPanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabbedPanel.TabbedPanel_C.LoadStartPanel
// (BlueprintCallable, BlueprintEvent)

void UTabbedPanel_C::LoadStartPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedPanel.TabbedPanel_C.LoadStartPanel");

	UTabbedPanel_C_LoadStartPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabbedPanel.TabbedPanel_C.LoadOutPreviewFromLobby
// (BlueprintCallable, BlueprintEvent)

void UTabbedPanel_C::LoadOutPreviewFromLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedPanel.TabbedPanel_C.LoadOutPreviewFromLobby");

	UTabbedPanel_C_LoadOutPreviewFromLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabbedPanel.TabbedPanel_C.ExecuteUbergraph_TabbedPanel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabbedPanel_C::ExecuteUbergraph_TabbedPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedPanel.TabbedPanel_C.ExecuteUbergraph_TabbedPanel");

	UTabbedPanel_C_ExecuteUbergraph_TabbedPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabbedPanel.TabbedPanel_C.OnTabChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                TabPanel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabbedPanel_C::OnTabChange__DelegateSignature(class UWidget** TabPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedPanel.TabbedPanel_C.OnTabChange__DelegateSignature");

	UTabbedPanel_C_OnTabChange__DelegateSignature_Params params;
	params.TabPanel = TabPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
