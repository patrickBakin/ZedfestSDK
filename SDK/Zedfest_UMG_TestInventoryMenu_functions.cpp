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

// Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.GetSelectedOption
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_TestInventoryMenu_C::GetSelectedOption(int* OutIndex, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.GetSelectedOption");

	UUMG_TestInventoryMenu_C_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_TestInventoryMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.Construct");

	UUMG_TestInventoryMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TestInventoryMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.Tick");

	UUMG_TestInventoryMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.ExecuteUbergraph_UMG_TestInventoryMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TestInventoryMenu_C::ExecuteUbergraph_UMG_TestInventoryMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.ExecuteUbergraph_UMG_TestInventoryMenu");

	UUMG_TestInventoryMenu_C_ExecuteUbergraph_UMG_TestInventoryMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
