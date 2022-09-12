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

// Function IRadialInput.IRadialInput_C.GetJoystickDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJoystickTypes>*   Stick                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               StickInput                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIRadialInput_C::GetJoystickDirection(TEnumAsByte<EJoystickTypes>* Stick, struct FVector2D* StickInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function IRadialInput.IRadialInput_C.GetJoystickDirection");

	UIRadialInput_C_GetJoystickDirection_Params params;
	params.Stick = Stick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StickInput != nullptr)
		*StickInput = params.StickInput;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
