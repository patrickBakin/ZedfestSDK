#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DroidBiped_AnimBlueprint.DroidBiped_AnimBlueprint_C
// 0x0730 (0x09A0 - 0x0270)
class UDroidBiped_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7CFE89E34B50AB5371F969A317678CDA;// 0x0278(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_458E18304501A9D236627CB43DAD34B7;// 0x02A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8FA66F924B7B5D6D930F0EB381FA8A78;// 0x02C8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EF485CA0466E02BD3439B083FA0A1D28;// 0x02F0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_611EDCB94221E2DC4540D2BA3AF9A24F;// 0x0368(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_609B0D584923004D1CC193A27A4D0EF1;// 0x0388(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_474757144A17BA9FA66C988502348F3D;// 0x0400(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7DE429644C3EE10898646AADD96898EC;// 0x0420(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A254DF1A4BE2C900CDE28EB13C0C39DD;// 0x0500(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7D0F3FF4450D8D39ECA487B6BFE7ACF6;// 0x05E0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_46158991428616B9A02AB99BE70429A8;// 0x06C0(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_23A9AC6E42083312AAB7D2B28A754A91;// 0x07A0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5381FDAC473EAAF142E12893D604FE66;// 0x0850(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_053051524F1653492544409734756A72;// 0x0870(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_6B96535546F051F443F8E6B2B51E5721;      // 0x0920(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E172DB8E42AF7CE4B89C579F21A93721;      // 0x0940(0x0048)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInAir_;                                                 // 0x0989(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x098A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x098B(0x0001) MISSED OFFSET
	float                                              Speed;                                                    // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	class UBP_BehaviorComponent_C*                     BP_Behavior;                                              // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DroidBiped_AnimBlueprint.DroidBiped_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_DroidBiped_AnimBlueprint_AnimGraphNode_TransitionResult_458E18304501A9D236627CB43DAD34B7();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_OnSpecialDamage();
	void AnimNotify_SpawnProjectile();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_DroidBiped_AnimBlueprint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
