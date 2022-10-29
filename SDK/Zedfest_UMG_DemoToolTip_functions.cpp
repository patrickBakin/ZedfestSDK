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

// Function UMG_DemoToolTip.UMG_DemoToolTip_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_DemoToolTip_C::SetData(struct FText* Title, struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoToolTip.UMG_DemoToolTip_C.SetData");

	UUMG_DemoToolTip_C_SetData_Params params;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
