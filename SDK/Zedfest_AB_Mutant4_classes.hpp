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

// AnimBlueprintGeneratedClass AB_Mutant4.AB_Mutant4_C
// 0x094C (0x0BBC - 0x0270)
class UAB_Mutant4_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AA4585E94BA38731F7AAA6A0AB1B009E;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8727476B4D8C56615FC68CBD94DBAAEA;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DDA0115A48C01C79CEFBB09FF7E4BAED;// 0x02C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A4C51DD741D99313FDFCCEB17A97C6C2;// 0x02E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FD673B0E46AC302DD6F3DCAC738070C1;// 0x0360(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EC8A54AA459E418AA0E8A7864A407834;// 0x0380(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D1FFAFE145F8E6974C05B284486AB871;// 0x0460(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DAD2E0984CCF6322E1BE25B260DBC03D;// 0x0540(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_81D2D6DC4EDADA324161179482265BAC;// 0x0620(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_75A9B8CA4BBCFAA44AC23D9AEAB9F98A;// 0x0700(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8C11D634461A2672564B5993D334269B;// 0x07B0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B4FCEA7244E31F512506BE8C6E22DA32;// 0x07D0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BE1FFAB843906EF03D2A93833EC41817;      // 0x0880(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A7C34C5E45708D92C8B82FADAC5E7045;// 0x08C8(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D462873B4E34EF5B779D80807A0E5B03;      // 0x0980(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_06CA131C4BE4E44FA152E8A96333D154;// 0x09C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4C94FA6E443CD323EA495087F1545D1B;// 0x09F0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_60FB18BD4ADC7FE33C4DA893FEB4E405;// 0x0A18(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_56FC55574789E86D65DF4199E1E280FA;// 0x0AD0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D2B90B79430AF7BF36C02FA3CD4148FA;// 0x0AF8(0x00B8)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x0BB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInAir_;                                                 // 0x0BB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x0BB2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0BB3(0x0001) MISSED OFFSET
	float                                              Speed;                                                    // 0x0BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Mutant4.AB_Mutant4_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void ExecuteUbergraph_AB_Mutant4(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
