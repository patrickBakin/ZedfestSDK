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

// AnimBlueprintGeneratedClass AnimBP_NPC_Siren.AnimBP_NPC_Siren_C
// 0x0BA0 (0x0E10 - 0x0270)
class UAnimBP_NPC_Siren_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3FD03CD64CE267CE94A54CB88062B751;// 0x0278(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09CD602943CA2D8B80B3FDB66E794FE3;// 0x0330(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0B0B4DAF4D58F9EE8CAAEFB433FD287E;// 0x0358(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_416D81744FABA6FE3B3394A731AEC236;// 0x0380(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_748399EE4CB1634D0CAC2990B8C40026;// 0x03A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3A26C8F845A207E073AAC7A6C216C3F1;// 0x0420(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20FC4D4840F375BA419CD7A95650C6DF;// 0x0440(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4A33B75F431F3D497E14EF9D631B6E43;// 0x04B8(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CD15C79E40BB428079648DA52AAC2BEE;// 0x04D8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6980060944965957E6F849A0AC88629E;// 0x05B8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B1D9D912429CD62C97814EAF8E63487C;// 0x0698(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EFCA1AA548C485138A67E69170F47EDC;// 0x0778(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6977D3A04340C4ACE4896E9270151BDB;// 0x0818(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E3C8ABC0480D6A236DD4F0A83490CF4A;// 0x08F8(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_C7F35386400E64C030B752B68D52DFE8;// 0x09D8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_06A04E3C41835A047607A1961AFD8CA1;// 0x0A88(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3A8CAAFE4FD64D31D24303BA3791E781;// 0x0AA8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_C1F27C6E4E34C42CEB6E2786EE36870A;      // 0x0B58(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7B6B3A30428918430805B5971ED67FF9;      // 0x0B78(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_104D3E4E434712293608E5BD7DC94CC8;      // 0x0BC0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A47C79E4426061B0FC016DA0A1D3D8B1;// 0x0C08(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8154F79D4CF7E134E94D768B46DECCAD;// 0x0C30(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BEE0415C4A4F1E7C3FEC9C8B76BA3E64;// 0x0C58(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3576756F43ABC1EFEE0FCBAC88AFEB6E;// 0x0C80(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E19EB2FD4CB598DB05FBC78DFB47ADB2;// 0x0D38(0x00B8)
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
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_NPC_Siren.AnimBP_NPC_Siren_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_Siren_AnimGraphNode_TransitionResult_0B0B4DAF4D58F9EE8CAAEFB433FD287E();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void AnimNotify_OnSpecialDamage2();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AnimBP_NPC_Siren(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
