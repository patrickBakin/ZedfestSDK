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

// Function UMG_DemoList.UMG_DemoList_C.UpdateDemoList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_DemoList_C::UpdateDemoList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.UpdateDemoList");

	UUMG_DemoList_C_UpdateDemoList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoList.UMG_DemoList_C.RefreshDemoList
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_DemoList_C::RefreshDemoList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.RefreshDemoList");

	UUMG_DemoList_C_RefreshDemoList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoList.UMG_DemoList_C.UpdateTip
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_DemoList_C::UpdateTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.UpdateTip");

	UUMG_DemoList_C_UpdateTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoList.UMG_DemoList_C.On_ComboBox_GameMode_GenerateWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UUMG_DemoList_C::On_ComboBox_GameMode_GenerateWidget_1(struct FString* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.On_ComboBox_GameMode_GenerateWidget_1");

	UUMG_DemoList_C_On_ComboBox_GameMode_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_DemoList.UMG_DemoList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_DemoList_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.Destruct");

	UUMG_DemoList_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoList.UMG_DemoList_C.BndEvt__CheckBox_Bots_K2Node_ComponentBoundEvent_62_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DemoList_C::BndEvt__CheckBox_Bots_K2Node_ComponentBoundEvent_62_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.BndEvt__CheckBox_Bots_K2Node_ComponentBoundEvent_62_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUMG_DemoList_C_BndEvt__CheckBox_Bots_K2Node_ComponentBoundEvent_62_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoList.UMG_DemoList_C.OnDemoListUpdated
// (BlueprintCallable, BlueprintEvent)

void UUMG_DemoList_C::OnDemoListUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.OnDemoListUpdated");

	UUMG_DemoList_C_OnDemoListUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoList.UMG_DemoList_C.BndEvt__But_Refresh_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_DemoList_C::BndEvt__But_Refresh_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.BndEvt__But_Refresh_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature");

	UUMG_DemoList_C_BndEvt__But_Refresh_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoList.UMG_DemoList_C.BndEvt__But_Back_K2Node_ComponentBoundEvent_888_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_DemoList_C::BndEvt__But_Back_K2Node_ComponentBoundEvent_888_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.BndEvt__But_Back_K2Node_ComponentBoundEvent_888_OnButtonClickedEvent__DelegateSignature");

	UUMG_DemoList_C_BndEvt__But_Back_K2Node_ComponentBoundEvent_888_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoList.UMG_DemoList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DemoList_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.Tick");

	UUMG_DemoList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoList.UMG_DemoList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_DemoList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.Construct");

	UUMG_DemoList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoList.UMG_DemoList_C.ExecuteUbergraph_UMG_DemoList
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DemoList_C::ExecuteUbergraph_UMG_DemoList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoList.UMG_DemoList_C.ExecuteUbergraph_UMG_DemoList");

	UUMG_DemoList_C_ExecuteUbergraph_UMG_DemoList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
