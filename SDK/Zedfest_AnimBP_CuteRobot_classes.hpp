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

// AnimBlueprintGeneratedClass AnimBP_CuteRobot.AnimBP_CuteRobot_C
// 0x0678 (0x08E8 - 0x0270)
class UAnimBP_CuteRobot_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A4D3C57D4BF7BBC777C99B9FFB2A5896;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB71ABF1458D376DC74566A85558B02E;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_235E1D4545E04FCF389D948D8F266423;// 0x02C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D91715C3440DE34D6FF928A2741C2B12;// 0x02E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_87EFFDE346B91C1D70DE1ABE0EA38329;// 0x0360(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_ECF52A7E4025746F81A8ECB5960AC31B;// 0x0380(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E98E33154D9D47DB142514A481F0AB78;// 0x0460(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F1F8B8EC46BE43FBC17D108F0194071D;// 0x0540(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FE4E34FF4005988FEECB1396E405CD04;// 0x0620(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7A23CF104DA918ECC18A9C9351A060F4;// 0x0700(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FCDB39394B8C1DA3E25BBA864B4DC082;// 0x07B0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C06BA6C64636FD880E74D2ABC24CB470;// 0x07D0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DEF212D243F6E9E72DDBB491A0C6445C;      // 0x0880(0x0048)
	bool                                               IsInAir_;                                                 // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08C9(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08D1(0x0003) MISSED OFFSET
	float                                              Direction;                                                // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x08D9(0x0007) MISSED OFFSET
	class UBP_BehaviorComponent_C*                     BP_Behavior;                                              // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_CuteRobot.AnimBP_CuteRobot_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_SpawnProjectile();
	void AnimNotify_OnSpecialDamage();
	void AnimNotify_OnSpecialDamage2();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AnimBP_CuteRobot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
