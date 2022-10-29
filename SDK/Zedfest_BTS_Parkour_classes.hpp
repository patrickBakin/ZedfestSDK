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

// BlueprintGeneratedClass BTS_Parkour.BTS_Parkour_C
// 0x0078 (0x0110 - 0x0098)
class UBTS_Parkour_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_AIC_C*                                   AICRef;                                                   // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACharacter*                                  CharacterRef;                                             // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     PrevBehaviorType;                                         // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FVector                                     CurrentTargetLocation;                                    // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      BBKeyParkour;                                             // 0x00C0(0x0028) (Edit, BlueprintVisible)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               TempFrontHit;                                             // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TempTopHit;                                               // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TempClimb;                                                // 0x00FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00FB(0x0001) MISSED OFFSET
	float                                              MaxDistance;                                              // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaultHeight;                                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbHeight;                                              // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightLimit;                                              // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TempObstacleZ;                                            // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTS_Parkour.BTS_Parkour_C");
		return ptr;
	}


	void GetCharacterBaseZ(float* Z);
	void GetMovementVectors(struct FVector* NearFront, struct FVector* FarFront);
	void GetJumpVectors(struct FVector* LowVector, struct FVector* HighVector, struct FVector* NearFront, struct FVector* FarFront);
	void GetCurrentTarget(struct FVector* RetLoc);
	void OnFail_74CFA8FB4DF01A91560AB3824ABAD3F0(TEnumAsByte<EPathFollowingResult>* MovementResult);
	void OnSuccess_74CFA8FB4DF01A91560AB3824ABAD3F0(TEnumAsByte<EPathFollowingResult>* MovementResult);
	void OnCheckCrouch();
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void OnEndJump();
	void OnEndCrouch();
	void OnJump();
	void OnVaultOrClimb(struct FVector* FrontHitLoc, struct FVector* HitNormal);
	void QueryFinished(class UEnvQueryInstanceBlueprintWrapper** QueryInstance, TEnumAsByte<EEnvQueryStatus>* QueryStatus);
	void OnCheckParkour();
	void ReceiveActivation(class AActor** OwnerActor);
	void ExecuteUbergraph_BTS_Parkour(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
