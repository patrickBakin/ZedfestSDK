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

// AnimBlueprintGeneratedClass AB_FatMutant.AB_FatMutant_C
// 0x0870 (0x0AE0 - 0x0270)
class UAB_FatMutant_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E7658EFF4E41F7E5C81D93BF186E2510;// 0x0278(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_77C635704EDE065FD0DB57B1C4837311;// 0x0330(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_97D1BA6F490F44350BC64599CC96050E;// 0x0410(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_03251F014D70B8C249C6A299EC8CE28F;// 0x04F0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E0D894194CA861846CFDB1AFD1DDF521;// 0x05D0(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3F3D89E04873EF736F567F9C343F1183;// 0x06B0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B47229BB46BEEEAC9746638CE6F8911F;// 0x0760(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B862657E435833BFF7A979840632130A;// 0x0780(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_63F2B1764D58EED99E40F0B9C5F0B6A0;      // 0x0830(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EA04D1F541B6F175B7EACDBC931B610F;      // 0x0850(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_513444824EC048172A3B2596EB8B119E;      // 0x0898(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8D2DC237470827C0B7FC6989D05234DE;// 0x08E0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2A40695646004EB9EF554FA100DC90FC;// 0x0908(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B06D48F94EF322C96CB2EBAE482C0850;// 0x0930(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3C04BC88443388857CC7C9BDEE72F1A0;// 0x0958(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E80BB9C84EF7AC8F886A78A510BD7829;// 0x0A10(0x00B8)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInAir_;                                                 // 0x0AC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x0ACA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0ACB(0x0001) MISSED OFFSET
	float                                              Speed;                                                    // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	class UBP_BehaviorComponent_C*                     BP_Behavior;                                              // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_FatMutant.AB_FatMutant_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void AnimNotify_OnSpecialDamage2();
	void AnimNotify_LeftFoot();
	void AnimNotify_RightFoot();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AB_FatMutant(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
