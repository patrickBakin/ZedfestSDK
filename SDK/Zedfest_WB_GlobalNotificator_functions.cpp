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

// Function WB_GlobalNotificator.WB_GlobalNotificator_C.DisplayGlobalNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  TypeText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow3Line                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow4                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow5                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow6                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow7                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           BackgroundColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           ParticlesColor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_GlobalNotificator_C::DisplayGlobalNotification(float* DisplayTime, struct FText* TypeText, struct FText* HeadlineText, struct FText* TextRow3Line, struct FText* TextRow4, struct FText* TextRow5, struct FText* TextRow6, struct FText* TextRow7, struct FLinearColor* BackgroundColor, struct FLinearColor* ParticlesColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_GlobalNotificator.WB_GlobalNotificator_C.DisplayGlobalNotification");

	UWB_GlobalNotificator_C_DisplayGlobalNotification_Params params;
	params.DisplayTime = DisplayTime;
	params.TypeText = TypeText;
	params.HeadlineText = HeadlineText;
	params.TextRow3Line = TextRow3Line;
	params.TextRow4 = TextRow4;
	params.TextRow5 = TextRow5;
	params.TextRow6 = TextRow6;
	params.TextRow7 = TextRow7;
	params.BackgroundColor = BackgroundColor;
	params.ParticlesColor = ParticlesColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_GlobalNotificator.WB_GlobalNotificator_C.RemoveGlobalNotification
// (BlueprintCallable, BlueprintEvent)

void UWB_GlobalNotificator_C::RemoveGlobalNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_GlobalNotificator.WB_GlobalNotificator_C.RemoveGlobalNotification");

	UWB_GlobalNotificator_C_RemoveGlobalNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_GlobalNotificator.WB_GlobalNotificator_C.ExecuteUbergraph_WB_GlobalNotificator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_GlobalNotificator_C::ExecuteUbergraph_WB_GlobalNotificator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_GlobalNotificator.WB_GlobalNotificator_C.ExecuteUbergraph_WB_GlobalNotificator");

	UWB_GlobalNotificator_C_ExecuteUbergraph_WB_GlobalNotificator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
