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

// Function BP_PatrolRoute.BP_PatrolRoute_C.GetSplinePointNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PatrolRoute_C::GetSplinePointNum(int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PatrolRoute.BP_PatrolRoute_C.GetSplinePointNum");

	ABP_PatrolRoute_C_GetSplinePointNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
