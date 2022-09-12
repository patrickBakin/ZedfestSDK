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

// Function BP_BasicInteractionWidget.BP_BasicInteractionWidget_C.Create Key Bind Widgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BasicInteractionWidget_C::Create_Key_Bind_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasicInteractionWidget.BP_BasicInteractionWidget_C.Create Key Bind Widgets");

	UBP_BasicInteractionWidget_C_Create_Key_Bind_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BasicInteractionWidget.BP_BasicInteractionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_BasicInteractionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasicInteractionWidget.BP_BasicInteractionWidget_C.Construct");

	UBP_BasicInteractionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BasicInteractionWidget.BP_BasicInteractionWidget_C.ExecuteUbergraph_BP_BasicInteractionWidget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BasicInteractionWidget_C::ExecuteUbergraph_BP_BasicInteractionWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasicInteractionWidget.BP_BasicInteractionWidget_C.ExecuteUbergraph_BP_BasicInteractionWidget");

	UBP_BasicInteractionWidget_C_ExecuteUbergraph_BP_BasicInteractionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
