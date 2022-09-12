#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_NPC_SpaceBoss.AnimBP_NPC_SpaceBoss_C
// 0x0DB8 (0x1028 - 0x0270)
class UAnimBP_NPC_SpaceBoss_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8C856AEA43F9EF9C684156998D6BEF52;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC762C894D3C3DA7A4C5B687B9E3D60D;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D5B860B34EE1DE578523B7ACBC8E8650;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_769AFED24BB0AB5DC0F0C2B1ECF74F63;// 0x02E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A59D87E94B3AE5556AF9609F5D685D5B;// 0x0310(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1081A9574DCB453B7C228F981C5FC7E4;// 0x0338(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_06FC615C402E02A7FCFCD8B1D13C508F;// 0x0360(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_07F0CFD0453E6E89FCE0EABE4CB27424;// 0x03D8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C5A6ECD6451F02B4C6DC14A28CF01DDC;// 0x03F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_678AC4354B24F10AF8A0C7A349B3E819;// 0x0470(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0EE328AF41407CC2BA36058A653DBFBE;// 0x0490(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8D95C7A74012CA2F87D10684A6BBD5D9;// 0x0508(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0F843C9A4F843E094DEBF6A9D007BED8;// 0x0528(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BFB0A0AE4B091C6E9CE46587F1AAC1AD;// 0x05A0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A632FBD14364DC757CE3778E54390ADD;// 0x05C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B6BCB92D478A0055DAA0389490AACF00;// 0x0638(0x0020)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3D234D5F424A2BFD3A0317A806B8E8B4;// 0x0658(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9879F19B4F97CBFA89F83CA9BDBABFF0;// 0x0708(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5BB99AEB437C1582CE85829C98822826;// 0x07A8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4CE7E0C4430CD071DDCE808C46C91870;// 0x0888(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C44BE11247D00480ED44F3BD8F140097;// 0x0968(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7502D82445A44C1333FDD9AF71EF3744;// 0x0A48(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_733F2B1F43EA0D6D66CD4B9114EA2E1E;// 0x0B28(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AA6A2BF9431EE7D14A782C95BD0FD51B;// 0x0C08(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A31068DE4A7419416B22579E2606AC9C;// 0x0C28(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9C51ED0E4A34A4177E61FAA07BF57760;      // 0x0CD8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1CD0B5D34862A3846755E08F1EC79D4D;// 0x0D20(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FF4CB6BD4EE90E364A30788F1DE87A2E;      // 0x0DD8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_76D6D6914A154040F173519AC04B0052;// 0x0E20(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57DE91BC45F914BF96B3A38526D834B0;// 0x0E48(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DA0B7B8D4FC6ABE6AB2BD0A3357EA115;// 0x0E70(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_93FD55FC43DC0C4364570DAA3209B31B;// 0x0F28(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B67BA88642FF0B54696C3AA6093F6AE0;// 0x0F50(0x00B8)
	bool                                               IsInAir_;                                                 // 0x1008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1009(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x100C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x1010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1011(0x0003) MISSED OFFSET
	float                                              Direction;                                                // 0x1014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x1018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1019(0x0007) MISSED OFFSET
	class UBP_BehaviorComponent_C*                     BP_Behavior;                                              // 0x1020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_NPC_SpaceBoss.AnimBP_NPC_SpaceBoss_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_SpaceBoss_AnimGraphNode_TransitionResult_D5B860B34EE1DE578523B7ACBC8E8650();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_SpaceBoss_AnimGraphNode_TransitionResult_A59D87E94B3AE5556AF9609F5D685D5B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void AnimNotify_OnSpecialDamage2();
	void AnimNotify_OnSpecialDamage3();
	void AnimNotify_OnSpecialDamage4();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AnimBP_NPC_SpaceBoss(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
