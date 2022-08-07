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

// AnimBlueprintGeneratedClass AB_Mutant3.AB_Mutant3_C
// 0x094C (0x0BBC - 0x0270)
class UAB_Mutant3_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_51B1E9854FBEAC57C5B7E6B02667863C;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1AAAE7274157C046AA20CA9E1F406B9D;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65B0A0B84A5F365AB40CF79858B73AD8;// 0x02C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2026B94140E37709089947AE91FE925D;// 0x02E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_704FA1024A57184F8CA48BBDB86A8594;// 0x0360(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3FF952D244D3760277ABC593E761BF09;// 0x0380(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BCDB52D341C7429C4BFD349289EC8D57;// 0x0460(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_31289ED64C1E29FF58B229BD38292487;// 0x0540(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_71F3D8FF4BCC8D131B7750836F22FE54;// 0x0620(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_E4285CE540439611FCDD4B929F7FE911;// 0x0700(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EA022FD94E79521815D27DB8AE44B373;// 0x07B0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0FA99AE84F890004DAE8FBBA7520469D;// 0x07D0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EAD2F4E640167036013FAEA56D0B85EE;      // 0x0880(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3A293E90443EDD4EADA86F953E800084;// 0x08C8(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8F69AB3246B74741CFE293818CA6326A;      // 0x0980(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3958828040A622806C507FA78514CECA;// 0x09C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5A624BBB48243B5E28345E976AB3EBB3;// 0x09F0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_FA47ABC74122CDE2FE7EFC823B95E399;// 0x0A18(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61DB53C943FD13D10E0C45A6CDC37C60;// 0x0AD0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_42CF4828489A40CB07AB879FB9DBE4A6;// 0x0AF8(0x00B8)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x0BB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInAir_;                                                 // 0x0BB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x0BB2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0BB3(0x0001) MISSED OFFSET
	float                                              Speed;                                                    // 0x0BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Mutant3.AB_Mutant3_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void ExecuteUbergraph_AB_Mutant3(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
