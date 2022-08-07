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

// Function EQS_GetTargetActorContext.EQS_GetTargetActorContext_C.ProvideSingleActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                QuerierObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 QuerierActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ResultingActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEQS_GetTargetActorContext_C::ProvideSingleActor(class UObject** QuerierObject, class AActor** QuerierActor, class AActor** ResultingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function EQS_GetTargetActorContext.EQS_GetTargetActorContext_C.ProvideSingleActor");

	UEQS_GetTargetActorContext_C_ProvideSingleActor_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
