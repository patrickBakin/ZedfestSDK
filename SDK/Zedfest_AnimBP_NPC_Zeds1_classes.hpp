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

// AnimBlueprintGeneratedClass AnimBP_NPC_Zeds1.AnimBP_NPC_Zeds1_C
// 0x0C88 (0x0EF8 - 0x0270)
class UAnimBP_NPC_Zeds1_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1B7C0E5944D740C15B05F4966224C875;// 0x0278(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CBB9FB304BE129BC7A9477B64A9CCA3B;// 0x02A0(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F29752874A23DC55049E1B988563C069;// 0x0358(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EBD7307A4BCCE6F6888035A312680DD9;// 0x0410(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AAC956E747E1EDDB8BC994960F870AFF;// 0x0438(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1B014C8B48206E4A503BFB97F9AB8070;      // 0x0460(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EC4D0D9242DAD6061D0F39ACCDB600C1;// 0x04A8(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6E6FBB694A857FA5727A14979F254A6F;      // 0x0560(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46E659354162A4CA5C68738C50B02F53;// 0x05A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BA20FB5747D9F2A640B07B822428CF25;// 0x05D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4977B11547519E70004FDDB77D2501B1;// 0x05F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E8266E84BEF0EA855CFFFA1669B457C;// 0x0620(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2F5EC4F84F8999134D07C6875D5D9E3E;// 0x0648(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5EA99C7F470726FCC26205B34D8DBA8F;// 0x0670(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1B40C477413D9668B19A14B9922BCB58;// 0x06E8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF9EBB0B4FEF1A9D6F75CE9E4C4AF37B;// 0x0708(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1EDD9D7243E722313874C1BE256F0A1B;// 0x0780(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ED70DAA6493E39377932FFB3D8CF2FC5;// 0x07A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6CA8E0DB499E88C0E16865BB6DC6AAAC;// 0x0818(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C6A95DFE413067EF827CABBE80DC3C03;// 0x0838(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F425BB444AA7F66CB140DE9904CF72C4;// 0x0918(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C85AF8FE4592647177093BA1C5EAFDC1;// 0x09F8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2BCF34374B3A8748B484E8B8A9C0485D;// 0x0AD8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A6823C9B440A1B8E431FB28FC9518598;// 0x0B78(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6B669D584234E643A5ECB4BF1E10769C;// 0x0C58(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_C5E3B69A47A6187F028A9DBF9E00C6EA;// 0x0D38(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1728809D4B9BFFE12B56FCA6089125C6;// 0x0DE8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DCE1A7B240712E8B9D376A88F5A05F9D;// 0x0E08(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_A0D63CDA41FE6B85EADAF5B1E78C99CA;      // 0x0EB8(0x0020)
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
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_NPC_Zeds1.AnimBP_NPC_Zeds1_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_Zeds1_AnimGraphNode_TransitionResult_4977B11547519E70004FDDB77D2501B1();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void AnimNotify_OnSpecialDamage2();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AnimBP_NPC_Zeds1(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
