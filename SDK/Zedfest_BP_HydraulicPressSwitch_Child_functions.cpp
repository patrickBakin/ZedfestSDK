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

// Function BP_HydraulicPressSwitch_Child.BP_HydraulicPressSwitch_Child_C.SetSwitchCodeText
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Number                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HydraulicPressSwitch_Child_C::SetSwitchCodeText(struct FText* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HydraulicPressSwitch_Child.BP_HydraulicPressSwitch_Child_C.SetSwitchCodeText");

	ABP_HydraulicPressSwitch_Child_C_SetSwitchCodeText_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HydraulicPressSwitch_Child.BP_HydraulicPressSwitch_Child_C.ExecuteUbergraph_BP_HydraulicPressSwitch_Child
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HydraulicPressSwitch_Child_C::ExecuteUbergraph_BP_HydraulicPressSwitch_Child(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HydraulicPressSwitch_Child.BP_HydraulicPressSwitch_Child_C.ExecuteUbergraph_BP_HydraulicPressSwitch_Child");

	ABP_HydraulicPressSwitch_Child_C_ExecuteUbergraph_BP_HydraulicPressSwitch_Child_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
