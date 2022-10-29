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

// AnimBlueprintGeneratedClass AnimBP_NPC_Fleshman.AnimBP_NPC_Fleshman_C
// 0x0EB8 (0x1128 - 0x0270)
class UAnimBP_NPC_Fleshman_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B447D2124CB917E9FBE30ABFDC7D34DD;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_56AA429B4A354F8B589A34836F1B0E4E;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_484BA3114A6A9FD25DE0308E085414C7;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A493E0804C77495EB9128F90CCA1DE07;// 0x02E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DD7BE2824AF620C7C186978037C3FD0B;// 0x0310(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_66000A344B50138A3E42A78E756BD4A4;// 0x0388(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F75A55543D8F94C40EA4A8209681B03;// 0x03A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9B09F18244E91B821154928FA6C606CD;// 0x0420(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2CABFD614DE102FCF0CA4EA3B7D42000;// 0x0440(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EF13AEAF478BD56C7C43C39D5C980504;// 0x0520(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4963A1DE4832F2881EE9EB9EF05C2DB3;// 0x0600(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_14D7412948F04A55426E33BCBCB4F618;// 0x06E0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_13A502F04F807DEB73FA77B35BA1BBF6;// 0x0780(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_723DEE8B41CD6B15AB0B0391CA6B5532;// 0x0860(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_280CD0BF42FD61933952DEA5158E7A91;// 0x0940(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0E3A3C084E42B0FF7A1C61AB909F6527;// 0x09F0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_46908F904CDB33FD52D65FA2DB7C7BEF;// 0x0A10(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D5C7B1F0422504C753A6C5BA207EAA7B;      // 0x0AC0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4D5B175C4861FFA7B8EC35B4012429D0;// 0x0B08(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A2ECAA424414D72A6DCD8D9DEB1ED7D7;      // 0x0BC0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C578DFE142B441CD6B9423AEFEFCE02F;// 0x0C08(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E2134D554A61BDD23369D78063BB5DD4;// 0x0C30(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3A1A3BC24C670B7356D12A9F8B9C3264;// 0x0C58(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7D79E9D94D5C7517B38BBAAB8CBFA8AF;// 0x0D10(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0EA58148491B1A5D83362E8CA8AC53A8;// 0x0D38(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_928D09D9481B033DB38B168A92D407B4;      // 0x0DF0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C8BF24A8428FE5CD746C068F607B653C;      // 0x0E38(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_312C62B74F4CA58DCA536AAF451353FC;// 0x0E80(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E9E65AFA426D231A1B027982A606438F;// 0x0EA8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_665A8A524F56D8B853F1599EF2D87467;// 0x0ED0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D5EF2BD24905C00048A0A99C0A084AF9;// 0x0EF8(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_192382EC443DB1A2B243B188608E1313;// 0x0FB0(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FC53986F4EA08273127AB089175D33AF;// 0x1068(0x00A0)
	bool                                               IsInAir_;                                                 // 0x1108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1109(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x110C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x1110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1111(0x0003) MISSED OFFSET
	float                                              Direction;                                                // 0x1114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x1118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowerLegsAnim_;                                           // 0x1119(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x111A(0x0006) MISSED OFFSET
	class UBP_BehaviorComponent_C*                     BP_Behavior;                                              // 0x1120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_NPC_Fleshman.AnimBP_NPC_Fleshman_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_Fleshman_AnimGraphNode_TransitionResult_484BA3114A6A9FD25DE0308E085414C7();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void AnimNotify_Attack_start();
	void ExecuteUbergraph_AnimBP_NPC_Fleshman(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
