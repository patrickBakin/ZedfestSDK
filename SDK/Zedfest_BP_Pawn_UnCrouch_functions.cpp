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

// Function BP_Pawn_UnCrouch.BP_Pawn_UnCrouch_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Pawn_UnCrouch_C::ActionStart(class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_UnCrouch.BP_Pawn_UnCrouch_C.ActionStart");

	UBP_Pawn_UnCrouch_C_ActionStart_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn_UnCrouch.BP_Pawn_UnCrouch_C.ExecuteUbergraph_BP_Pawn_UnCrouch
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Pawn_UnCrouch_C::ExecuteUbergraph_BP_Pawn_UnCrouch(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_UnCrouch.BP_Pawn_UnCrouch_C.ExecuteUbergraph_BP_Pawn_UnCrouch");

	UBP_Pawn_UnCrouch_C_ExecuteUbergraph_BP_Pawn_UnCrouch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
