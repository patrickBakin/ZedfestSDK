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

// Function CSSlotUI.CSSlotUI_C.Set Slot Rarity Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UCSSlotUI_C::Set_Slot_Rarity_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSSlotUI.CSSlotUI_C.Set Slot Rarity Color");

	UCSSlotUI_C_Set_Slot_Rarity_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CSSlotUI.CSSlotUI_C.Set Slot Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCSSlotUI_C::Set_Slot_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSSlotUI.CSSlotUI_C.Set Slot Text");

	UCSSlotUI_C_Set_Slot_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CSSlotUI.CSSlotUI_C.Set Slot Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCSSlotUI_C::Set_Slot_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSSlotUI.CSSlotUI_C.Set Slot Percent");

	UCSSlotUI_C_Set_Slot_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
