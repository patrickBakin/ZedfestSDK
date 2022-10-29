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

// Function UI_KillFeedWidget.UI_KillFeedWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KillFeedWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillFeedWidget.UI_KillFeedWidget_C.PreConstruct");

	UUI_KillFeedWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KillFeedWidget.UI_KillFeedWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_KillFeedWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillFeedWidget.UI_KillFeedWidget_C.Construct");

	UUI_KillFeedWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KillFeedWidget.UI_KillFeedWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KillFeedWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillFeedWidget.UI_KillFeedWidget_C.Tick");

	UUI_KillFeedWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KillFeedWidget.UI_KillFeedWidget_C.ShowKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  KillerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  VictimName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor*            KillerNameColor                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor*            VictimNameColor                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor*            IconColor                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_KillFeedWidget_C::ShowKill(struct FText* KillerName, struct FText* VictimName, class UTexture2D** Icon, struct FSlateColor* KillerNameColor, struct FSlateColor* VictimNameColor, struct FSlateColor* IconColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillFeedWidget.UI_KillFeedWidget_C.ShowKill");

	UUI_KillFeedWidget_C_ShowKill_Params params;
	params.KillerName = KillerName;
	params.VictimName = VictimName;
	params.Icon = Icon;
	params.KillerNameColor = KillerNameColor;
	params.VictimNameColor = VictimNameColor;
	params.IconColor = IconColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KillFeedWidget.UI_KillFeedWidget_C.KillFeedTick
// (BlueprintCallable, BlueprintEvent)

void UUI_KillFeedWidget_C::KillFeedTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillFeedWidget.UI_KillFeedWidget_C.KillFeedTick");

	UUI_KillFeedWidget_C_KillFeedTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KillFeedWidget.UI_KillFeedWidget_C.ExecuteUbergraph_UI_KillFeedWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KillFeedWidget_C::ExecuteUbergraph_UI_KillFeedWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillFeedWidget.UI_KillFeedWidget_C.ExecuteUbergraph_UI_KillFeedWidget");

	UUI_KillFeedWidget_C_ExecuteUbergraph_UI_KillFeedWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
