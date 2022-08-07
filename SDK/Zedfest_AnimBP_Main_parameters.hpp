#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AnimBP_Main.AnimBP_Main_C.CharacterInVehicle
struct UAnimBP_Main_C_CharacterInVehicle_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.time_vars
struct UAnimBP_Main_C_time_vars_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.locomotion_vars
struct UAnimBP_Main_C_locomotion_vars_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.ragdoll_vars
struct UAnimBP_Main_C_ragdoll_vars_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.load_vars
struct UAnimBP_Main_C_load_vars_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.init_reference
struct UAnimBP_Main_C_init_reference_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.F_IkFootTrace
struct UAnimBP_Main_C_F_IkFootTrace_Params
{
	float*                                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InputPin1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    InputPin2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit_;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    HitRot;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimBP_Main.AnimBP_Main_C.F_SetHeadRotation
struct UAnimBP_Main_C_F_SetHeadRotation_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.Can Jump
struct UAnimBP_Main_C_Can_Jump_Params
{
	bool*                                              Should_Jump;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bJumping;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_C635CC7745535E3C88ECCF9DE3A93D7B
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_C635CC7745535E3C88ECCF9DE3A93D7B_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_ModifyBone_DC88740748FD9BBCAB6687ACF90A58C2
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_ModifyBone_DC88740748FD9BBCAB6687ACF90A58C2_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_93BB5E0248717BE78A3D24952F67081B
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_93BB5E0248717BE78A3D24952F67081B_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_A70B8B8846DA87A840F701BE9B27C5B5
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_A70B8B8846DA87A840F701BE9B27C5B5_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_88BABD894B4082896663A9ACDAC40CBE
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_88BABD894B4082896663A9ACDAC40CBE_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_B8F2AACE4B4597DC8D93DCAF3C0E1629
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_B8F2AACE4B4597DC8D93DCAF3C0E1629_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_D35717EE4D78D28E03F606856F015A04
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_D35717EE4D78D28E03F606856F015A04_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_1A9B78D64CD8B92D97275E88AF4662AA
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_1A9B78D64CD8B92D97275E88AF4662AA_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0776353D459B715480A3359B10C7BA73
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0776353D459B715480A3359B10C7BA73_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_7773B72F40F8A88C7578EF9FDF238D04
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_7773B72F40F8A88C7578EF9FDF238D04_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_BF83AE2346444427C12B7086A6F35A0D
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_BF83AE2346444427C12B7086A6F35A0D_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_EE03388949E721D419E5F88C84D782AA
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_EE03388949E721D419E5F88C84D782AA_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0981883745CA83E28E922695E3D9BAEF
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0981883745CA83E28E922695E3D9BAEF_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_CC631E7D438BF3D8CAF0EC911AD4800E
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_CC631E7D438BF3D8CAF0EC911AD4800E_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.BlueprintUpdateAnimation
struct UAnimBP_Main_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipWeapon
struct UAnimBP_Main_C_AnimNotify_EquipWeapon_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipWeapon
struct UAnimBP_Main_C_AnimNotify_UnequipWeapon_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.ReloadWeapon
struct UAnimBP_Main_C_ReloadWeapon_Params
{
	class UAnimMontage**                               ReloadAnimMontage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0BFA5FB24902301644487ABBD5894BC9
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0BFA5FB24902301644487ABBD5894BC9_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.BlueprintInitializeAnimation
struct UAnimBP_Main_C_BlueprintInitializeAnimation_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_B0133CF3413CD5CF5B1A54A8C299E96B
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_B0133CF3413CD5CF5B1A54A8C299E96B_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.PlayAnimationMontage
struct UAnimBP_Main_C_PlayAnimationMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_4C6C0CE54F56F6F0017AD798D12AA5B2
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_4C6C0CE54F56F6F0017AD798D12AA5B2_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.BlueprintBeginPlay
struct UAnimBP_Main_C_BlueprintBeginPlay_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.MeleeWeaponAnim
struct UAnimBP_Main_C_MeleeWeaponAnim_Params
{
	class UAnimMontage**                               Anim_Montage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_RightFootSound
struct UAnimBP_Main_C_AnimNotify_RightFootSound_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_LeftFootSound
struct UAnimBP_Main_C_AnimNotify_LeftFootSound_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipConsume
struct UAnimBP_Main_C_AnimNotify_EquipConsume_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipConsume
struct UAnimBP_Main_C_AnimNotify_UnequipConsume_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipThrowable
struct UAnimBP_Main_C_AnimNotify_EquipThrowable_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipThrowable
struct UAnimBP_Main_C_AnimNotify_UnequipThrowable_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_925BEFC34857C9626878939C5FC99E08
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_925BEFC34857C9626878939C5FC99E08_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_5DCDBDBE465627D7D5CC07A131DF748D
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_5DCDBDBE465627D7D5CC07A131DF748D_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.SlotCharWeaponEvent
struct UAnimBP_Main_C_SlotCharWeaponEvent_Params
{
	class ASlotCharParent_BP_C**                       NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Main_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipMelee
struct UAnimBP_Main_C_AnimNotify_EquipMelee_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipMelee
struct UAnimBP_Main_C_AnimNotify_UnequipMelee_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_StopMeleeTrace
struct UAnimBP_Main_C_AnimNotify_StopMeleeTrace_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_EquipSpecialItem
struct UAnimBP_Main_C_AnimNotify_EquipSpecialItem_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_UnequipSpecialItem
struct UAnimBP_Main_C_AnimNotify_UnequipSpecialItem_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_E6DF84154D6543C4689FE093DBCBFF50
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_E6DF84154D6543C4689FE093DBCBFF50_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_CA2824774FC6F2A1FEFF04ADDCE3CA7A
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_CA2824774FC6F2A1FEFF04ADDCE3CA7A_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_9539F4DC4EA9378B11F0C0B11A733646
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_9539F4DC4EA9378B11F0C0B11A733646_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_Transform
struct UAnimBP_Main_C_AnimNotify_Transform_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_77863D2648F71199105BBC9DEBBCF659
struct UAnimBP_Main_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_77863D2648F71199105BBC9DEBBCF659_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.AnimNotify_ClimbFinish
struct UAnimBP_Main_C_AnimNotify_ClimbFinish_Params
{
};

// Function AnimBP_Main.AnimBP_Main_C.ExecuteUbergraph_AnimBP_Main
struct UAnimBP_Main_C_ExecuteUbergraph_AnimBP_Main_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
