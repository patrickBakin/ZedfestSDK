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

// Function AB_Mutant3.AB_Mutant3_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAB_Mutant3_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Mutant3.AB_Mutant3_C.BlueprintUpdateAnimation");

	UAB_Mutant3_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Mutant3.AB_Mutant3_C.AnimNotify_OnDamage
// (BlueprintCallable, BlueprintEvent)

void UAB_Mutant3_C::AnimNotify_OnDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Mutant3.AB_Mutant3_C.AnimNotify_OnDamage");

	UAB_Mutant3_C_AnimNotify_OnDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Mutant3.AB_Mutant3_C.AnimNotify_SpawnProjectile
// (BlueprintCallable, BlueprintEvent)

void UAB_Mutant3_C::AnimNotify_SpawnProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Mutant3.AB_Mutant3_C.AnimNotify_SpawnProjectile");

	UAB_Mutant3_C_AnimNotify_SpawnProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Mutant3.AB_Mutant3_C.AnimNotify_OnSpecialDamage
// (BlueprintCallable, BlueprintEvent)

void UAB_Mutant3_C::AnimNotify_OnSpecialDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Mutant3.AB_Mutant3_C.AnimNotify_OnSpecialDamage");

	UAB_Mutant3_C_AnimNotify_OnSpecialDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Mutant3.AB_Mutant3_C.ExecuteUbergraph_AB_Mutant3
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAB_Mutant3_C::ExecuteUbergraph_AB_Mutant3(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Mutant3.AB_Mutant3_C.ExecuteUbergraph_AB_Mutant3");

	UAB_Mutant3_C_ExecuteUbergraph_AB_Mutant3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
