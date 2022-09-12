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

// AnimBlueprintGeneratedClass AnimBP_NPC_Zeds2.AnimBP_NPC_Zeds2_C
// 0x0BA0 (0x0E10 - 0x0270)
class UAnimBP_NPC_Zeds2_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_78B3FFD54368CF048D5E3184187698DF;// 0x0278(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5952CC9748E983283943E0B86DEBCA5F;// 0x0330(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_333EBCF4488E2C0EFD3E348791AC6370;// 0x0358(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DF0D2B5F4E1212844F9727B36A5AC443;// 0x0380(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49DFAA6C4B09C8A861F5F7A8FB7D797D;// 0x03A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0BE8570E4DD2FDBE9A0302BB7D8F5C3C;// 0x0420(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D717743346125B44C839609DFE4B6B89;// 0x0440(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F6C99C3046959BB01717AFA66FDDD9ED;// 0x04B8(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9AB3585044D0DC3CD91858A518CCFE01;// 0x04D8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3777CADF4DE5567433DD1FBC77A6A066;// 0x05B8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9513F3894B55843FDFF3EB9A7C4929BB;// 0x0698(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_32BB72F3407C0DFF01553D87974E752B;// 0x0778(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_38230F1241AE50A3172B9BB64B5B4045;// 0x0818(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_91ED7A1D4E55A31CBE9DE9ABA71AD269;// 0x08F8(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_ACF874CD4A1AE6CE1F5CC2839E52AFE6;// 0x09D8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FBFA62EE46BC3E506608E185BF6D05CD;// 0x0A88(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DE923D2243941355FEDD4CA5EB4C57DB;// 0x0AA8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_BA9A46B344DA6790DB5697B00280F205;      // 0x0B58(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_50E49B2F412A7271D8971D8FFC03EF14;      // 0x0B78(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5BB28E9E4DDE325AA0369AA1BD3EEC40;      // 0x0BC0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_604CBFA9450FE31891C193A46668AC40;// 0x0C08(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_98E02C5A4F2A8A35AAB3C7AC36E0B17F;// 0x0C30(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C2439D0440ABA4CCA02F1F8CBB2782DE;// 0x0C58(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B30422CE46C96241A9BE0D8F128F6D2A;// 0x0C80(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1003CBED40CC901749B11D8663925309;// 0x0D38(0x00B8)
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
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_NPC_Zeds2.AnimBP_NPC_Zeds2_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_Zeds2_AnimGraphNode_TransitionResult_333EBCF4488E2C0EFD3E348791AC6370();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void AnimNotify_OnSpecialDamage2();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AnimBP_NPC_Zeds2(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
