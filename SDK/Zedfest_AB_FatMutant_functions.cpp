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

// Function AB_FatMutant.AB_FatMutant_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAB_FatMutant_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FatMutant.AB_FatMutant_C.BlueprintUpdateAnimation");

	UAB_FatMutant_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_FatMutant.AB_FatMutant_C.AnimNotify_OnDamage
// (BlueprintCallable, BlueprintEvent)

void UAB_FatMutant_C::AnimNotify_OnDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FatMutant.AB_FatMutant_C.AnimNotify_OnDamage");

	UAB_FatMutant_C_AnimNotify_OnDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_FatMutant.AB_FatMutant_C.AnimNotify_SpawnProjectile
// (BlueprintCallable, BlueprintEvent)

void UAB_FatMutant_C::AnimNotify_SpawnProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FatMutant.AB_FatMutant_C.AnimNotify_SpawnProjectile");

	UAB_FatMutant_C_AnimNotify_SpawnProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_FatMutant.AB_FatMutant_C.AnimNotify_OnSpecialDamage
// (BlueprintCallable, BlueprintEvent)

void UAB_FatMutant_C::AnimNotify_OnSpecialDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FatMutant.AB_FatMutant_C.AnimNotify_OnSpecialDamage");

	UAB_FatMutant_C_AnimNotify_OnSpecialDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_FatMutant.AB_FatMutant_C.AnimNotify_OnSpecialDamage2
// (BlueprintCallable, BlueprintEvent)

void UAB_FatMutant_C::AnimNotify_OnSpecialDamage2()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FatMutant.AB_FatMutant_C.AnimNotify_OnSpecialDamage2");

	UAB_FatMutant_C_AnimNotify_OnSpecialDamage2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_FatMutant.AB_FatMutant_C.AnimNotify_LeftFoot
// (BlueprintCallable, BlueprintEvent)

void UAB_FatMutant_C::AnimNotify_LeftFoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FatMutant.AB_FatMutant_C.AnimNotify_LeftFoot");

	UAB_FatMutant_C_AnimNotify_LeftFoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_FatMutant.AB_FatMutant_C.AnimNotify_RightFoot
// (BlueprintCallable, BlueprintEvent)

void UAB_FatMutant_C::AnimNotify_RightFoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FatMutant.AB_FatMutant_C.AnimNotify_RightFoot");

	UAB_FatMutant_C_AnimNotify_RightFoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_FatMutant.AB_FatMutant_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAB_FatMutant_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FatMutant.AB_FatMutant_C.BlueprintInitializeAnimation");

	UAB_FatMutant_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_FatMutant.AB_FatMutant_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UAB_FatMutant_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FatMutant.AB_FatMutant_C.BlueprintBeginPlay");

	UAB_FatMutant_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_FatMutant.AB_FatMutant_C.ExecuteUbergraph_AB_FatMutant
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAB_FatMutant_C::ExecuteUbergraph_AB_FatMutant(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FatMutant.AB_FatMutant_C.ExecuteUbergraph_AB_FatMutant");

	UAB_FatMutant_C_ExecuteUbergraph_AB_FatMutant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
