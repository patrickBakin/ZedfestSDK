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

// AnimBlueprintGeneratedClass AnimBP_NPC_MrAndroid.AnimBP_NPC_MrAndroid_C
// 0x0F88 (0x11F8 - 0x0270)
class UAnimBP_NPC_MrAndroid_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_106A53A54F076C5E7D3CD58B58D01029;// 0x0278(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D5FECE6849F9F8A760E90DAC5329171C;// 0x0330(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E24F97DA4D73C7E6265ACA851CDE9811;// 0x0358(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F1635E804895B674D092468C66316D0B;// 0x0380(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6D52B64244D3D7CD32ACF38D6D27F9D6;// 0x03A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CBD72D14181F15294687B80162D75FE;// 0x03D0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB939C61475629D95965EF825E7C489C;// 0x03F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_538F770E454B38FF3C4089BD368B502A;// 0x0470(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B868EDA40BB204AC45B81B76FF2DFCD;// 0x0490(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B49DB97F4D1F5D7F7CCAD4A40B8830F4;// 0x0508(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50BF60A44FC4F5AB579914A3FB0BDBAE;// 0x0528(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6D56CEBF4F0B2C9140C9F1BE6350111F;// 0x05A0(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_426613634599636DA423499674B2462B;// 0x05C0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FB4576A24442F55B18B0409400AE2936;// 0x06A0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C2E0350541D8F84F76327BAC4DCEBDD8;// 0x0780(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FBA8AED64EBA75634EF179B5463117B3;// 0x0860(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_67BCF9C744C9147C1220D0A463529F72;// 0x0940(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6453533A4D69FC1AB73C3794D70F7C73;// 0x09E0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3B70402D45FBD9954E168D91F67FD08F;// 0x0A80(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_25E08A9E46993A8E9E851ABCDFED26CC;// 0x0B60(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C4D20720413D605E0E7BA9BF2623E404;// 0x0C00(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2788471F4235C62F68E67E8C4298A1A0;// 0x0CE0(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_868B7C3647D914BBB2F53BA719122CF9;// 0x0DC0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5BA84AE740E3D3652AEAF883D606CEA5;// 0x0E70(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_ED387DE2424F0259335F1BB6F0D3C76E;// 0x0E90(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_79D7F15844805C81E98E9CAB9DE81CDC;      // 0x0F40(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_48E06B5B43F9E471B0A664BDCB4C24E1;      // 0x0F60(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DE29A3784441236BE5C68EB02182B5D2;      // 0x0FA8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E46F0A6240B334CB38A38AA36C57F77E;// 0x0FF0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D48CA2DD45811496ACA390A01A741DC6;// 0x1018(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AE7A5CBF45BB1D91A75F13B95A5656D3;// 0x1040(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_135D1A1442A7ECF9EF45B69396AEB457;// 0x10F8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_791280A542E9E6A0DBBF3E84D0D4AE31;// 0x1120(0x00B8)
	bool                                               IsInAir_;                                                 // 0x11D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x11D9(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x11DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x11E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x11E1(0x0003) MISSED OFFSET
	float                                              Direction;                                                // 0x11E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x11E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll;                                               // 0x11E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowerLegsAnim_;                                           // 0x11EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Rocket_;                                                  // 0x11EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x11EC(0x0004) MISSED OFFSET
	class UBP_BehaviorComponent_C*                     BP_Behavior;                                              // 0x11F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_NPC_MrAndroid.AnimBP_NPC_MrAndroid_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_MrAndroid_AnimGraphNode_TransitionResult_F1635E804895B674D092468C66316D0B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void AnimNotify_OnSpecialDamage2();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void AnimNotify_SpawnTraceProjectile();
	void AnimNotify_OnSpecialDamage3();
	void AnimNotify_OnSpecialDamage4();
	void ExecuteUbergraph_AnimBP_NPC_MrAndroid(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
