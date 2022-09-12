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

// Function IRadialSlot.IRadialSlot_C.OnUnhighlight
// (Public, BlueprintCallable, BlueprintEvent)

void UIRadialSlot_C::OnUnhighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function IRadialSlot.IRadialSlot_C.OnUnhighlight");

	UIRadialSlot_C_OnUnhighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IRadialSlot.IRadialSlot_C.OnHighlight
// (Public, BlueprintCallable, BlueprintEvent)

void UIRadialSlot_C::OnHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function IRadialSlot.IRadialSlot_C.OnHighlight");

	UIRadialSlot_C_OnHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
