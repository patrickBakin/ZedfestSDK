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

// Function AB_Mutant4.AB_Mutant4_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAB_Mutant4_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Mutant4.AB_Mutant4_C.BlueprintUpdateAnimation");

	UAB_Mutant4_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Mutant4.AB_Mutant4_C.AnimNotify_OnDamage
// (BlueprintCallable, BlueprintEvent)

void UAB_Mutant4_C::AnimNotify_OnDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Mutant4.AB_Mutant4_C.AnimNotify_OnDamage");

	UAB_Mutant4_C_AnimNotify_OnDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Mutant4.AB_Mutant4_C.AnimNotify_SpawnProjectile
// (BlueprintCallable, BlueprintEvent)

void UAB_Mutant4_C::AnimNotify_SpawnProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Mutant4.AB_Mutant4_C.AnimNotify_SpawnProjectile");

	UAB_Mutant4_C_AnimNotify_SpawnProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Mutant4.AB_Mutant4_C.AnimNotify_OnSpecialDamage
// (BlueprintCallable, BlueprintEvent)

void UAB_Mutant4_C::AnimNotify_OnSpecialDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Mutant4.AB_Mutant4_C.AnimNotify_OnSpecialDamage");

	UAB_Mutant4_C_AnimNotify_OnSpecialDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Mutant4.AB_Mutant4_C.ExecuteUbergraph_AB_Mutant4
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAB_Mutant4_C::ExecuteUbergraph_AB_Mutant4(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Mutant4.AB_Mutant4_C.ExecuteUbergraph_AB_Mutant4");

	UAB_Mutant4_C_ExecuteUbergraph_AB_Mutant4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
