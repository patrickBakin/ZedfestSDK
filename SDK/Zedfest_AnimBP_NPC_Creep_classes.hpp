#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_NPC_Creep.AnimBP_NPC_Creep_C
// 0x0C88 (0x0EF8 - 0x0270)
class UAnimBP_NPC_Creep_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_88AE907F4E8538B2F7423086EFCEF589;// 0x0278(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A199FAEA4625A944D19A469C0D6318CA;// 0x0330(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B08FB3D24C02D0E34253F397FE3D491D;// 0x0358(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F728CE9D42E182881118AC979E57523C;// 0x0380(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D6DFF3A44EEBA473E59248866027366;// 0x03A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C3F6993E4DB67C8EF5F9B196D617CACF;// 0x03D0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_652251EA47BD5E693FC5DD83630D968F;// 0x03F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BA7FD00F4C88CAA249B7BE89FDE7FB93;// 0x0470(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2E0EBA0043580D8A6C7E3398993690B1;// 0x0490(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_83E2A0DD4927C889472185906EDC96DA;// 0x0508(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C6081054420B876432E514A3B922A0AE;// 0x0528(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EE54908949E46B650B30AEA23DD6A38F;// 0x05A0(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F59F3C5F4880BA5331FABFA8443AA2C0;// 0x05C0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2EDAFD16484975C371C1D982A4836FDC;// 0x06A0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2AF882074754FCD9F3E7F9808DB775DC;// 0x0780(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3D5C5BCD432D4FEE8C4504BB41AF2935;// 0x0860(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_35A07AF44B0EA5ABC7A9DD9191F7A2B5;// 0x0900(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A502C5FF47843C3B7B2D509853140C46;// 0x09E0(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_D9D2B96C40994C8B8650ADBC53BE752A;// 0x0AC0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C2473B5E48575F87EADA7DA6DB6BADE3;// 0x0B70(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F903988844B9CAAE160C32BF7FD31473;// 0x0B90(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_BF6500CE469B1ABBCD4671B89B89921D;      // 0x0C40(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C158A2FF4DC5DD0DAFE3D994460F288A;      // 0x0C60(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4ADBF2AD4EA4D31945239FA3DD23B7AE;      // 0x0CA8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_482CD9BE4ED7DE6D91A0AE8F121F7068;// 0x0CF0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9519D2E44CB22F7AF9813C972972ACB1;// 0x0D18(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C435AB8A4B3DD641149B40A4F54FF754;// 0x0D40(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6F0722A8421DA6EC3EE5AA8A2DA303E8;// 0x0DF8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A540925D4AC2A297430B83901A863E7A;// 0x0E20(0x00B8)
	bool                                               IsInAir_;                                                 // 0x0ED8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0ED9(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0EDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x0EE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0EE1(0x0003) MISSED OFFSET
	float                                              Direction;                                                // 0x0EE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x0EE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll;                                               // 0x0EE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowerLegsAnim_;                                           // 0x0EEA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0EEB(0x0005) MISSED OFFSET
	class UBP_BehaviorComponent_C*                     BP_Behavior;                                              // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_NPC_Creep.AnimBP_NPC_Creep_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_Creep_AnimGraphNode_TransitionResult_F728CE9D42E182881118AC979E57523C();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void AnimNotify_OnSpecialDamage2();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AnimBP_NPC_Creep(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
