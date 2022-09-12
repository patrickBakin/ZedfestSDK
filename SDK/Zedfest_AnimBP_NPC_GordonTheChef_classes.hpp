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

// AnimBlueprintGeneratedClass AnimBP_NPC_GordonTheChef.AnimBP_NPC_GordonTheChef_C
// 0x0BA0 (0x0E10 - 0x0270)
class UAnimBP_NPC_GordonTheChef_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_30812ADD47611D35A940728B19AD85C8;// 0x0278(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_473FBCFB482D0317543A7FA35E96ED11;// 0x0330(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2DD3CFA5429690569F090A8CAB8E579E;// 0x0358(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_421437F740147C28AFE16A87A824BF6F;// 0x0380(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B78E220B49913FC35DD6F99618991880;// 0x03A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D21D486E46ABC8C53F55D1B0A35042CB;// 0x0420(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9B365A7C40E3D3BBAB43ECB5922A27CA;// 0x0440(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13117AE0448344D45E96F1A0103C40FD;// 0x04B8(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_03C491F54F76BB954EB39C8E027FE78C;// 0x04D8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_820787134C93B1376EF7058BFC460818;// 0x05B8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D130A7BF4AC0DA1B5429F08C093F8508;// 0x0698(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_16C32B83414DF6B597C0ACA158898152;// 0x0778(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_57F273EC4024E1EDCEC4ADADCF60E06A;// 0x0818(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2798E7284626F6F5646D74BA5BAEF854;// 0x08F8(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_30B0C0284837C2AA61BF4DBB561847E7;// 0x09D8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9FADF8574A4BB7B8C89632BA0E2FCC97;// 0x0A88(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6F38C92740005BD858CBEC8FEBBC1501;// 0x0AA8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_6777C57043C4CC673EA04496AE9F52C0;      // 0x0B58(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_77EDF3D641399968359EDD997D864629;      // 0x0B78(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E790C4BF4ECD26EF1FFECB91F4C223C2;      // 0x0BC0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45D7CE904ACEA6F7D46EC4A8D597FF03;// 0x0C08(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_80096C34403613714F6FDA9B044C6B1F;// 0x0C30(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DA11336245AB52C98077FC8B45C2743A;// 0x0C58(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_20C973BB421C8893A4F0C3A4A336F2ED;// 0x0C80(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0266DF814FA18448F0A7438BBE2157AA;// 0x0D38(0x00B8)
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
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_NPC_GordonTheChef.AnimBP_NPC_GordonTheChef_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_GordonTheChef_AnimGraphNode_TransitionResult_2DD3CFA5429690569F090A8CAB8E579E();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AnimBP_NPC_GordonTheChef(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
