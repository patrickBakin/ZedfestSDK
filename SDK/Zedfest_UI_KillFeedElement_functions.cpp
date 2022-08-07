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

// Function UI_KillFeedElement.UI_KillFeedElement_C.OpenAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimationLength                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_KillFeedElement_C::OpenAnimation(float* AnimationLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillFeedElement.UI_KillFeedElement_C.OpenAnimation");

	UUI_KillFeedElement_C_OpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationLength != nullptr)
		*AnimationLength = params.AnimationLength;
}


// Function UI_KillFeedElement.UI_KillFeedElement_C.CloseAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimationLength                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_KillFeedElement_C::CloseAnimation(float* AnimationLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillFeedElement.UI_KillFeedElement_C.CloseAnimation");

	UUI_KillFeedElement_C_CloseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationLength != nullptr)
		*AnimationLength = params.AnimationLength;
}


// Function UI_KillFeedElement.UI_KillFeedElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_KillFeedElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillFeedElement.UI_KillFeedElement_C.Construct");

	UUI_KillFeedElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KillFeedElement.UI_KillFeedElement_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  KillerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor*            KillerNameColor                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  VictimName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor*            VictimNameColor                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor*            IconColor                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_KillFeedElement_C::Init(struct FText* KillerName, struct FSlateColor* KillerNameColor, struct FText* VictimName, struct FSlateColor* VictimNameColor, class UTexture2D** Icon, struct FSlateColor* IconColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillFeedElement.UI_KillFeedElement_C.Init");

	UUI_KillFeedElement_C_Init_Params params;
	params.KillerName = KillerName;
	params.KillerNameColor = KillerNameColor;
	params.VictimName = VictimName;
	params.VictimNameColor = VictimNameColor;
	params.Icon = Icon;
	params.IconColor = IconColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KillFeedElement.UI_KillFeedElement_C.ExecuteUbergraph_UI_KillFeedElement
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KillFeedElement_C::ExecuteUbergraph_UI_KillFeedElement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillFeedElement.UI_KillFeedElement_C.ExecuteUbergraph_UI_KillFeedElement");

	UUI_KillFeedElement_C_ExecuteUbergraph_UI_KillFeedElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
