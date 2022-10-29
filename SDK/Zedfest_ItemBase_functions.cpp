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

// Function ItemBase.ItemBase_C.Get Amount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AItemBase_C::Get_Amount(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemBase.ItemBase_C.Get Amount");

	AItemBase_C_Get_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function ItemBase.ItemBase_C.Decrease Amount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryType>*   Inventory_Type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemBase_C::Decrease_Amount(int* Amount, TEnumAsByte<EInventoryType>* Inventory_Type, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemBase.ItemBase_C.Decrease Amount");

	AItemBase_C_Decrease_Amount_Params params;
	params.Amount = Amount;
	params.Inventory_Type = Inventory_Type;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemBase.ItemBase_C.Increase Amount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Bar_Selection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemBase_C::Increase_Amount(int* Amount, int* Bar_Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemBase.ItemBase_C.Increase Amount");

	AItemBase_C_Increase_Amount_Params params;
	params.Amount = Amount;
	params.Bar_Selection = Bar_Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemBase.ItemBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItemBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemBase.ItemBase_C.UserConstructionScript");

	AItemBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
