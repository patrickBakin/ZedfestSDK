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

// Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_CuteRobot_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.BlueprintUpdateAnimation");

	UAnimBP_CuteRobot_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.AnimNotify_OnDamage
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_CuteRobot_C::AnimNotify_OnDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.AnimNotify_OnDamage");

	UAnimBP_CuteRobot_C_AnimNotify_OnDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.AnimNotify_SpawnProjectile
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_CuteRobot_C::AnimNotify_SpawnProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.AnimNotify_SpawnProjectile");

	UAnimBP_CuteRobot_C_AnimNotify_SpawnProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.AnimNotify_OnSpecialDamage
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_CuteRobot_C::AnimNotify_OnSpecialDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.AnimNotify_OnSpecialDamage");

	UAnimBP_CuteRobot_C_AnimNotify_OnSpecialDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.AnimNotify_OnSpecialDamage2
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_CuteRobot_C::AnimNotify_OnSpecialDamage2()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.AnimNotify_OnSpecialDamage2");

	UAnimBP_CuteRobot_C_AnimNotify_OnSpecialDamage2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAnimBP_CuteRobot_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.BlueprintInitializeAnimation");

	UAnimBP_CuteRobot_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UAnimBP_CuteRobot_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.BlueprintBeginPlay");

	UAnimBP_CuteRobot_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.ExecuteUbergraph_AnimBP_CuteRobot
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_CuteRobot_C::ExecuteUbergraph_AnimBP_CuteRobot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_CuteRobot.AnimBP_CuteRobot_C.ExecuteUbergraph_AnimBP_CuteRobot");

	UAnimBP_CuteRobot_C_ExecuteUbergraph_AnimBP_CuteRobot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
