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

// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Create Key Bind Widgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ItemInteractionWidget_C::Create_Key_Bind_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Create Key Bind Widgets");

	UBP_ItemInteractionWidget_C_Create_Key_Bind_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Widget Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UBP_ItemInteractionWidget_C::Get_Widget_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Widget Color");

	UBP_ItemInteractionWidget_C_Get_Widget_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Amount Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ItemInteractionWidget_C::Get_Amount_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Amount Text");

	UBP_ItemInteractionWidget_C_Get_Amount_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Level Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ItemInteractionWidget_C::Get_Level_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Level Text");

	UBP_ItemInteractionWidget_C_Get_Level_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Title Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ItemInteractionWidget_C::Get_Title_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Title Text");

	UBP_ItemInteractionWidget_C_Get_Title_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Sub Title Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ItemInteractionWidget_C::Get_Sub_Title_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Sub Title Text");

	UBP_ItemInteractionWidget_C_Get_Sub_Title_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ItemInteractionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Construct");

	UBP_ItemInteractionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.ExecuteUbergraph_BP_ItemInteractionWidget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ItemInteractionWidget_C::ExecuteUbergraph_BP_ItemInteractionWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.ExecuteUbergraph_BP_ItemInteractionWidget");

	UBP_ItemInteractionWidget_C_ExecuteUbergraph_BP_ItemInteractionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
