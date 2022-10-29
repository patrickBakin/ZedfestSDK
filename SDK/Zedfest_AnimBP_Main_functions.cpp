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

// Function AnimBP_Main.AnimBP_Main_C.CharacterInVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::CharacterInVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.CharacterInVehicle");

	UAnimBP_Main_C_CharacterInVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.time_vars
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::time_vars()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.time_vars");

	UAnimBP_Main_C_time_vars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.locomotion_vars
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::locomotion_vars()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.locomotion_vars");

	UAnimBP_Main_C_locomotion_vars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.ragdoll_vars
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::ragdoll_vars()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.ragdoll_vars");

	UAnimBP_Main_C_ragdoll_vars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.load_vars
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::load_vars()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.load_vars");

	UAnimBP_Main_C_load_vars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.init_reference
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::init_reference()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.init_reference");

	UAnimBP_Main_C_init_reference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.F_IkFootTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InputPin1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                InputPin2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                HitRot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Main_C::F_IkFootTrace(float* InputPin, struct FName* InputPin1, struct FVector* InputPin2, float* Offset, bool* Hit_, float* Distance, struct FRotator* HitRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.F_IkFootTrace");

	UAnimBP_Main_C_F_IkFootTrace_Params params;
	params.InputPin = InputPin;
	params.InputPin1 = InputPin1;
	params.InputPin2 = InputPin2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
	if (Hit_ != nullptr)
		*Hit_ = params.Hit_;
	if (Distance != nullptr)
		*Distance = params.Distance;
	if (HitRot != nullptr)
		*HitRot = params.HitRot;
}


// Function AnimBP_Main.AnimBP_Main_C.F_SetHeadRotation
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::F_SetHeadRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.F_SetHeadRotation");

	UAnimBP_Main_C_F_SetHeadRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.Can Jump
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Should_Jump                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bJumping                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Main_C::Can_Jump(bool* Should_Jump, bool* bJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.Can Jump");

	UAnimBP_Main_C_Can_Jump_Params params;
	params.Should_Jump = Should_Jump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bJumping != nullptr)
		*bJumping = params.bJumping;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_925BEFC34857C9626878939C5FC99E08
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_925BEFC34857C9626878939C5FC99E08()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_925BEFC34857C9626878939C5FC99E08");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_925BEFC34857C9626878939C5FC99E08_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_C635CC7745535E3C88ECCF9DE3A93D7B
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_C635CC7745535E3C88ECCF9DE3A93D7B()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_C635CC7745535E3C88ECCF9DE3A93D7B");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_C635CC7745535E3C88ECCF9DE3A93D7B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_93BB5E0248717BE78A3D24952F67081B
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_93BB5E0248717BE78A3D24952F67081B()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_93BB5E0248717BE78A3D24952F67081B");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_93BB5E0248717BE78A3D24952F67081B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_ModifyBone_DC88740748FD9BBCAB6687ACF90A58C2
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_ModifyBone_DC88740748FD9BBCAB6687ACF90A58C2()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_ModifyBone_DC88740748FD9BBCAB6687ACF90A58C2");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_ModifyBone_DC88740748FD9BBCAB6687ACF90A58C2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_88BABD894B4082896663A9ACDAC40CBE
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_88BABD894B4082896663A9ACDAC40CBE()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_88BABD894B4082896663A9ACDAC40CBE");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_88BABD894B4082896663A9ACDAC40CBE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_A70B8B8846DA87A840F701BE9B27C5B5
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_A70B8B8846DA87A840F701BE9B27C5B5()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_A70B8B8846DA87A840F701BE9B27C5B5");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_A70B8B8846DA87A840F701BE9B27C5B5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_B8F2AACE4B4597DC8D93DCAF3C0E1629
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_B8F2AACE4B4597DC8D93DCAF3C0E1629()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_B8F2AACE4B4597DC8D93DCAF3C0E1629");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_B8F2AACE4B4597DC8D93DCAF3C0E1629_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_D35717EE4D78D28E03F606856F015A04
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_D35717EE4D78D28E03F606856F015A04()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_D35717EE4D78D28E03F606856F015A04");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_D35717EE4D78D28E03F606856F015A04_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_1A9B78D64CD8B92D97275E88AF4662AA
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_1A9B78D64CD8B92D97275E88AF4662AA()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_1A9B78D64CD8B92D97275E88AF4662AA");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_1A9B78D64CD8B92D97275E88AF4662AA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0776353D459B715480A3359B10C7BA73
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0776353D459B715480A3359B10C7BA73()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0776353D459B715480A3359B10C7BA73");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0776353D459B715480A3359B10C7BA73_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_7773B72F40F8A88C7578EF9FDF238D04
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_7773B72F40F8A88C7578EF9FDF238D04()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_7773B72F40F8A88C7578EF9FDF238D04");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_7773B72F40F8A88C7578EF9FDF238D04_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_BF83AE2346444427C12B7086A6F35A0D
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_BF83AE2346444427C12B7086A6F35A0D()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_BF83AE2346444427C12B7086A6F35A0D");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_BF83AE2346444427C12B7086A6F35A0D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_EE03388949E721D419E5F88C84D782AA
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_EE03388949E721D419E5F88C84D782AA()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_EE03388949E721D419E5F88C84D782AA");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_EE03388949E721D419E5F88C84D782AA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0981883745CA83E28E922695E3D9BAEF
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0981883745CA83E28E922695E3D9BAEF()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0981883745CA83E28E922695E3D9BAEF");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0981883745CA83E28E922695E3D9BAEF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_CC631E7D438BF3D8CAF0EC911AD4800E
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_CC631E7D438BF3D8CAF0EC911AD4800E()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_CC631E7D438BF3D8CAF0EC911AD4800E");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_CC631E7D438BF3D8CAF0EC911AD4800E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0BFA5FB24902301644487ABBD5894BC9
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0BFA5FB24902301644487ABBD5894BC9()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0BFA5FB24902301644487ABBD5894BC9");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0BFA5FB24902301644487ABBD5894BC9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Main_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.BlueprintUpdateAnimation");

	UAnimBP_Main_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipWeapon
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_EquipWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipWeapon");

	UAnimBP_Main_C_AnimNotify_EquipWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipWeapon
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_UnequipWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipWeapon");

	UAnimBP_Main_C_AnimNotify_UnequipWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.ReloadWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           ReloadAnimMontage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Main_C::ReloadWeapon(class UAnimMontage** ReloadAnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.ReloadWeapon");

	UAnimBP_Main_C_ReloadWeapon_Params params;
	params.ReloadAnimMontage = ReloadAnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAnimBP_Main_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.BlueprintInitializeAnimation");

	UAnimBP_Main_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_4C6C0CE54F56F6F0017AD798D12AA5B2
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_4C6C0CE54F56F6F0017AD798D12AA5B2()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_4C6C0CE54F56F6F0017AD798D12AA5B2");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_4C6C0CE54F56F6F0017AD798D12AA5B2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_B0133CF3413CD5CF5B1A54A8C299E96B
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_B0133CF3413CD5CF5B1A54A8C299E96B()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_B0133CF3413CD5CF5B1A54A8C299E96B");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_B0133CF3413CD5CF5B1A54A8C299E96B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.PlayAnimationMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           AnimMontage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Main_C::PlayAnimationMontage(class UAnimMontage** AnimMontage, float* PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.PlayAnimationMontage");

	UAnimBP_Main_C_PlayAnimationMontage_Params params;
	params.AnimMontage = AnimMontage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UAnimBP_Main_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.BlueprintBeginPlay");

	UAnimBP_Main_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.MeleeWeaponAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Anim_Montage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Main_C::MeleeWeaponAnim(class UAnimMontage** Anim_Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.MeleeWeaponAnim");

	UAnimBP_Main_C_MeleeWeaponAnim_Params params;
	params.Anim_Montage = Anim_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_RightFootSound
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_RightFootSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_RightFootSound");

	UAnimBP_Main_C_AnimNotify_RightFootSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_LeftFootSound
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_LeftFootSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_LeftFootSound");

	UAnimBP_Main_C_AnimNotify_LeftFootSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipConsume
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_EquipConsume()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipConsume");

	UAnimBP_Main_C_AnimNotify_EquipConsume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipConsume
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_UnequipConsume()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipConsume");

	UAnimBP_Main_C_AnimNotify_UnequipConsume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipThrowable
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_EquipThrowable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipThrowable");

	UAnimBP_Main_C_AnimNotify_EquipThrowable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipThrowable
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_UnequipThrowable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipThrowable");

	UAnimBP_Main_C_AnimNotify_UnequipThrowable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_5DCDBDBE465627D7D5CC07A131DF748D
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_5DCDBDBE465627D7D5CC07A131DF748D()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_5DCDBDBE465627D7D5CC07A131DF748D");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_5DCDBDBE465627D7D5CC07A131DF748D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.SlotCharWeaponEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASlotCharParent_BP_C**   NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Main_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Main_C::SlotCharWeaponEvent(class ASlotCharParent_BP_C** NewParam, bool* Main_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.SlotCharWeaponEvent");

	UAnimBP_Main_C_SlotCharWeaponEvent_Params params;
	params.NewParam = NewParam;
	params.Main_ = Main_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_E6DF84154D6543C4689FE093DBCBFF50
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_E6DF84154D6543C4689FE093DBCBFF50()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_E6DF84154D6543C4689FE093DBCBFF50");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_E6DF84154D6543C4689FE093DBCBFF50_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipMelee
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_EquipMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipMelee");

	UAnimBP_Main_C_AnimNotify_EquipMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipMelee
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_UnequipMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipMelee");

	UAnimBP_Main_C_AnimNotify_UnequipMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_StopMeleeTrace
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_StopMeleeTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_StopMeleeTrace");

	UAnimBP_Main_C_AnimNotify_StopMeleeTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipSpecialItem
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_EquipSpecialItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipSpecialItem");

	UAnimBP_Main_C_AnimNotify_EquipSpecialItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipSpecialItem
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_UnequipSpecialItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipSpecialItem");

	UAnimBP_Main_C_AnimNotify_UnequipSpecialItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_CA2824774FC6F2A1FEFF04ADDCE3CA7A
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_CA2824774FC6F2A1FEFF04ADDCE3CA7A()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_CA2824774FC6F2A1FEFF04ADDCE3CA7A");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_CA2824774FC6F2A1FEFF04ADDCE3CA7A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_77863D2648F71199105BBC9DEBBCF659
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_77863D2648F71199105BBC9DEBBCF659()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_77863D2648F71199105BBC9DEBBCF659");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_77863D2648F71199105BBC9DEBBCF659_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_9539F4DC4EA9378B11F0C0B11A733646
// (BlueprintEvent)

void UAnimBP_Main_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_9539F4DC4EA9378B11F0C0B11A733646()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_9539F4DC4EA9378B11F0C0B11A733646");

	UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_9539F4DC4EA9378B11F0C0B11A733646_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_Transform
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_Transform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_Transform");

	UAnimBP_Main_C_AnimNotify_Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_ClimbFinish
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Main_C::AnimNotify_ClimbFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.AnimNotify_ClimbFinish");

	UAnimBP_Main_C_AnimNotify_ClimbFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_Main.AnimBP_Main_C.ExecuteUbergraph_AnimBP_Main
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Main_C::ExecuteUbergraph_AnimBP_Main(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Main.AnimBP_Main_C.ExecuteUbergraph_AnimBP_Main");

	UAnimBP_Main_C_ExecuteUbergraph_AnimBP_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
