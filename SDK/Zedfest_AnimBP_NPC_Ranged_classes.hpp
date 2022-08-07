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

// AnimBlueprintGeneratedClass AnimBP_NPC_Ranged.AnimBP_NPC_Ranged_C
// 0x0BA0 (0x0E10 - 0x0270)
class UAnimBP_NPC_Ranged_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_992BEEF1434449005957218940DC4E81;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DEE852FF40717F3CAA4F99B3BCB90EF0;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE52B4CA456680607DF7728E077920C3;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8294DEFB4ECD0EB85F05219CA7150CFF;// 0x02E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2A8CAC4D416FC64EAD53C9BF21830CEF;// 0x0310(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FBAACB3A40B23B005CA2468BDFCE6DEA;// 0x0388(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4273F25F41B6823BC128F9BEE66778C3;// 0x03A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6D35BD8147B2BBA7C331CDA416D7F804;// 0x0420(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_425B0198498CDC8AF3B2A491B573F0D3;// 0x0440(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EB8BBC83407D1203E64EBE9B306BF582;// 0x0520(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_54BA081B436EBFA2C6DEFD825AA54881;// 0x0600(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2D6D8B704C2FEDD56A1196AAE888C8A4;// 0x06A0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_01EBF39F40ACED8BED744481930333EE;// 0x0780(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7F53EE304734775982B2E3845173012F;// 0x0860(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_720D7E90477105E74DB775B834257F7E;// 0x0910(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23A2FDB54401AF66CC937AB3AA0BC4CF;// 0x09F0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A009EF4E4D07EC329FFF84B0A1E22F5F;// 0x0A10(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7318EB554B48B1C3245A5C87DF4571A5;      // 0x0AC0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E718B76D443610D396B82CBD6EBCFD6D;// 0x0B08(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6E418D4447DD53DF2B6A60AED9E6E6A2;      // 0x0BC0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_09C31C83438B3E412919F0A25718A322;// 0x0C08(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19482AD34A34B4A625D420A9EFF31BEC;// 0x0C30(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_FD8F9C354EC3D6A927A6598064E27B9A;// 0x0C58(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_39E61E224D6680E1DED4E2859553D638;// 0x0D10(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4D4F5AD8411F4A8D1FC07D901B6496F5;// 0x0D38(0x00B8)
	bool                                               IsInAir_;                                                 // 0x0DF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0DF1(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x0DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0DF9(0x0003) MISSED OFFSET
	float                                              Direction;                                                // 0x0DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x0E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0E01(0x0007) MISSED OFFSET
	class UBP_BehaviorComponent_C*                     BP_Behavior;                                              // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_NPC_Ranged.AnimBP_NPC_Ranged_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_Ranged_AnimGraphNode_TransitionResult_AE52B4CA456680607DF7728E077920C3();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AnimBP_NPC_Ranged(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
