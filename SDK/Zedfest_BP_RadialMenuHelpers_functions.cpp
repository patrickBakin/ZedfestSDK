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

// Function BP_RadialMenuHelpers.BP_RadialMenuHelpers_C.CenterMousePosition
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RadialMenuHelpers_C::STATIC_CenterMousePosition(int* PlayerIndex, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialMenuHelpers.BP_RadialMenuHelpers_C.CenterMousePosition");

	UBP_RadialMenuHelpers_C_CenterMousePosition_Params params;
	params.PlayerIndex = PlayerIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
