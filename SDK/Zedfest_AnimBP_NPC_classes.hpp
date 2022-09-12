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

// AnimBlueprintGeneratedClass AnimBP_NPC.AnimBP_NPC_C
// 0x0A49 (0x0CB9 - 0x0270)
class UAnimBP_NPC_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0544B2984C85F37C006D0B85EAE9E881;      // 0x0278(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AEC2CACE4182AF121093A6869C81BF81;// 0x02C0(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D11504CE434E6CC042ED4792044396E8;// 0x0378(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88862FFD423582B30F2C2A92B25408D4;// 0x03A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CEF75CED409C2D7EBE01E9B296FA7FA8;// 0x03C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_181CD83B47B24F5A486B80BA888224A4;// 0x03F0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_623E96054EDA979CA3B54CBB474FD664;// 0x0418(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F94AA54F46F781B99262B6A9FF6E7777;// 0x0490(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E69BAC4C43DC2AFFFB1B468320D35E39;// 0x04B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_44E6D56E46454DD18FF4328A7FA51722;// 0x0528(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FBF536654FF1BBC3FB19A3AC5D4EDEE9;// 0x0548(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0338B11F4821BFB3FD35BB9240AAA4E4;// 0x05C0(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E53104504DAE38F506FED0BF61CEB1BE;// 0x05E0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C925E8134C5654FB3E2B4C950C90C19B;// 0x06C0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_250287924264682E866C069618B25086;// 0x0760(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_0D94B5424B9C5D894CE83FA645D54760;// 0x0840(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5859DB3C486044C8A7F3D5AAEEC58E18;// 0x08F0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BD158083428E0E5626ED2899BB9F74A1;// 0x09D0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9D8F11AE44C737B01C52E2974EF1F212;// 0x0AB0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E4A32EF64F5B365F06066082FAF57063;// 0x0B90(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3682EBD942CC723841D764B597436C78;// 0x0BB0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_CA3EACD94DC8BC3CA192C49F52C94174;      // 0x0C60(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_217162034F918AF878220B9B4C4484D3;// 0x0C80(0x0028)
	bool                                               IsInAir_;                                                 // 0x0CA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CA9(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x0CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CB1(0x0003) MISSED OFFSET
	float                                              Direction;                                                // 0x0CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x0CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_NPC.AnimBP_NPC_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_AnimGraphNode_TransitionResult_D11504CE434E6CC042ED4792044396E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_AnimGraphNode_TransitionResult_CEF75CED409C2D7EBE01E9B296FA7FA8();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void ExecuteUbergraph_AnimBP_NPC(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
