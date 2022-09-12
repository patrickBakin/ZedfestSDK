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

// AnimBlueprintGeneratedClass SmartDrone_AnimBlueprint.SmartDrone_AnimBlueprint_C
// 0x07A0 (0x0A10 - 0x0270)
class USmartDrone_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_383A0A6D4A6E80E873AA12B24CE2B66F;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B2B01BA840D5936965144789CBFAA65A;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D6609EA849BC2B4A66DC8EB36168611B;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEC47FDF4377DD79A2BB1FB1945F8FF6;// 0x02E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B44C7A0D4842D57F06C785A351E6D944;// 0x0310(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7168A708486DCD960D7DAE8F36A2C6C6;// 0x0388(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13B69113425FDF71ABB886B6AE962CDF;// 0x03A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_488C22024E4BDD7B2496C192B6EDA74B;// 0x0420(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0EF3180142DCAF932B737AB5B9D0A2BA;// 0x0440(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A83DBCC943C8274D5A151DA947B8C33C;// 0x0520(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6A6B7F744B68A7CCB2A0CDB9DCCA0259;// 0x0600(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D3FE07D84E5B369B0F33DD940BC8CE4F;// 0x06E0(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4DA9E63947FBB5C02D06A2BD6346BAE7;// 0x07C0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BE374C5C4777FF23163647932FDC1C17;// 0x0870(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_12C465B5482B33C6CCDC11A76289B83A;// 0x0890(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_55302E554F6610449227FFB94B4B1729;      // 0x0940(0x0048)
	float                                              Right_Velocity;                                           // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Forward_Velocity;                                         // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Run;                                                      // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0991(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turning_BlendSpace;                                       // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationRate;                                             // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInAir_;                                                 // 0x09A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Idle_Tapping;                                             // 0x09A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x09A6(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    AttackEnded;                                              // 0x09A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     Actor_Location;                                           // 0x09B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	class ABP_SmartDrone_Pawn_C*                       BP_SmartDrone;                                            // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveForward;                                              // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveRight;                                                // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeed_Multiplier;                                      // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VelocityActive;                                           // 0x09DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GunOpen;                                                  // 0x09DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Firing;                                                   // 0x09DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Fire_Powerful;                                            // 0x09DF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MissilesOpen;                                             // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09E1(0x0003) MISSED OFFSET
	struct FRotator                                    GunRotation;                                              // 0x09E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GameStarted;                                              // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09F1(0x0003) MISSED OFFSET
	float                                              Firing_Boolean_Interpolated;                              // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x09F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x09F9(0x0003) MISSED OFFSET
	float                                              Direction;                                                // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehavior;                                          // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0A01(0x0007) MISSED OFFSET
	class UBP_BehaviorComponent_C*                     BP_Behavior;                                              // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SmartDrone_AnimBlueprint.SmartDrone_AnimBlueprint_C");
		return ptr;
	}


	void Create_Turning_Blendspace_Weight();
	void IsVelocityActive();
	void Get_MovementDirectionValues_FromVelocity(class ABP_SmartDrone_Pawn_C** BP_SmartDrone);
	void Transfer_Blueprint_Variables_EachTick(class ABP_SmartDrone_Pawn_C** NewParam);
	void AnimNotify_AnimNotify_MissilesClosed();
	void AnimNotify_AnimNotify_MissilesOpen();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmartDrone_AnimBlueprint_AnimGraphNode_TransitionResult_D6609EA849BC2B4A66DC8EB36168611B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnDamage();
	void AnimNotify_OnSpecialDamage();
	void AnimNotify_SpawnProjectile();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_SmartDrone_AnimBlueprint(int* EntryPoint);
	void AttackEnded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
