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

// BlueprintGeneratedClass BP_NPC_Base.BP_NPC_Base_C
// 0x017D (0x0975 - 0x07F8)
class ABP_NPC_Base_C : public ABP_DismemberableCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         HomingHSTarget;                                           // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScreenIndicator_C*                          ScreenIndicator;                                          // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ZedAudio;                                                 // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BehaviorTriggerComponent_C*              BehaviorTriggerComponent;                                 // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BehaviorComponent_C*                     BehaviorComponent;                                        // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            MeleeCollision_1;                                         // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_RotateTo_Alpha_C8D21EA64EB8E5ABCCC3BB8B745A1885; // 0x0838(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_RotateTo__Direction_C8D21EA64EB8E5ABCCC3BB8B745A1885;// 0x083C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x083D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_RotateTo;                                        // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Parkour2_Alpha_25FE9C524DC45B763E3A1287D0CB27BD; // 0x0848(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Parkour2__Direction_25FE9C524DC45B763E3A1287D0CB27BD;// 0x084C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Parkour2;                                        // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Parkour_Alpha_190E8CDB48AB0DC521B2FC9B3B47EFA9;  // 0x0858(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Parkour__Direction_190E8CDB48AB0DC521B2FC9B3B47EFA9;// 0x085C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x085D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Parkour;                                         // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BaseTurnRate;                                             // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseLookUpRate;                                           // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Health;                                                   // 0x0870(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageMelee;                                              // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	class UClass*                                      ProjectileClass;                                          // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParkourTarget;                                            // 0x0888(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParkourStart;                                             // 0x0894(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotateTarget;                                             // 0x08A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotateStart;                                              // 0x08AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dead_;                                                    // 0x08B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x08B9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              AISpawn;                                                  // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DamageDone;                                               // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Headshot_;                                                // 0x08D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x08D5(0x0003) MISSED OFFSET
	float                                              MeleeAttackRange;                                         // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	class USoundBase*                                  ZedSound;                                                 // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              AnimPlayLength;                                           // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x08F4(0x0004) MISSED OFFSET
	TArray<class ABP_Base_HordeController_C*>          HordeControllerRef;                                       // 0x08F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UW_BossHealth_C*                             BossWidgetRef;                                            // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     WeaponShootHeight;                                        // 0x0910(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x091C(0x0004) MISSED OFFSET
	class ABP_Base_HordeController_C*                  HordeControllerRef_1;                                     // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ZedAudioVariable;                                         // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeleeSphereRadius;                                        // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomFloatTimer;                                         // 0x0934(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield;                                                   // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxShield;                                                // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FriendlyFire_;                                            // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0941(0x0007) MISSED OFFSET
	class AActor*                                      DamageCauser;                                             // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                DamageCauserInt;                                          // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponShootAngle;                                         // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowerLegsAnim_;                                           // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0959(0x0003) MISSED OFFSET
	float                                              WeaponShootForwardDistance;                               // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadialDamageMultiplier;                                   // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeakPointName;                                            // 0x0964(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ZedName;                                                  // 0x096C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Burning_;                                                 // 0x0974(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_Base.BP_NPC_Base_C");
		return ptr;
	}


	void PerformMultiMeleeAttack();
	void DamageSystem(float* Damage);
	void OnRep_Health();
	void PerformRangedAttack();
	void PerformMeleeAttack();
	void Timeline_Parkour__FinishedFunc();
	void Timeline_Parkour__UpdateFunc();
	void Timeline_Parkour2__FinishedFunc();
	void Timeline_Parkour2__UpdateFunc();
	void Timeline_RotateTo__FinishedFunc();
	void Timeline_RotateTo__UpdateFunc();
	void OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter);
	void OnRangedAttack();
	void OnDamaged(float* Damage, class AActor** DamageCauser);
	void OnDeath(bool* Head_, class AActor** DamageCauser);
	void OnRagdoll();
	void OnParkour(struct FVector* TargetLoc, float* PlayLength);
	void OnRotateTo(struct FRotator* TargetRot, float* PlayRate);
	void ReceiveBeginPlay();
	void Nuked(class AActor** Damage_Causer);
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void Event_AI_DIE();
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void EventZedOutline();
	void PerformSpecialDamage();
	void PerformSpecialDamage2();
	void CustomMeleeAttack(float* AnimTimeLeft);
	void PerformSpecialDamage3();
	void ClientGravity();
	void PerformSpecialDamage4();
	void PerformSpecialDamage1();
	void FlameThrowerEvent(float* Damage);
	void ExecuteUbergraph_BP_NPC_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
