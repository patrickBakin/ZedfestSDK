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

// Function BP_Boom_Int_ExplosionActor.BP_Boom_Int_ExplosionActor_C.GetStuck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Stuck_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Boom_Int_ExplosionActor_C::GetStuck(bool* Stuck_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_Int_ExplosionActor.BP_Boom_Int_ExplosionActor_C.GetStuck");

	UBP_Boom_Int_ExplosionActor_C_GetStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stuck_ != nullptr)
		*Stuck_ = params.Stuck_;
}


// Function BP_Boom_Int_ExplosionActor.BP_Boom_Int_ExplosionActor_C.SetOwningPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Boom_Int_ExplosionActor_C::SetOwningPawn(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_Int_ExplosionActor.BP_Boom_Int_ExplosionActor_C.SetOwningPawn");

	UBP_Boom_Int_ExplosionActor_C_SetOwningPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_Int_ExplosionActor.BP_Boom_Int_ExplosionActor_C.GetState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GetState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Boom_Int_ExplosionActor_C::GetState(bool* GetState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_Int_ExplosionActor.BP_Boom_Int_ExplosionActor_C.GetState");

	UBP_Boom_Int_ExplosionActor_C_GetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetState != nullptr)
		*GetState = params.GetState;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
