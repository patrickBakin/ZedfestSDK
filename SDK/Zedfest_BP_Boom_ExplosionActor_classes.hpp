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

// BlueprintGeneratedClass BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C
// 0x02B0 (0x05E0 - 0x0330)
class ABP_Boom_ExplosionActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadialForceComponent*                       RadialForce;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BaseMesh;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ProximityCheck;                                           // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    DelayParticle;                                            // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    DamageOverTimeParticle;                                   // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UseAdvancedHitDetection;                                  // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowStagedExplosions;                                    // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	float                                              StagedExplosionDelay;                                     // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InactivityPeriod;                                         // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreOwner;                                              // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	float                                              IgnoreOwnerTime;                                          // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fuse;                                                     // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RotateByVelocity;                                         // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExplodeOnImpact;                                          // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExplodeOnPlayerImpact;                                    // 0x038A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x038B(0x0005) MISSED OFFSET
	class UAudioComponent*                             CurrentSound;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CriticalDamageThreshold;                                  // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleByDistance;                                          // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Boom_ObstructionRule>                DamageObstructionMethod;                                  // 0x03B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x03B6(0x0002) MISSED OFFSET
	class USoundBase*                                  Sound_Explosion;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particle_Explosion;                                       // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale_Explosion;                                          // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExplodeOnAnyDamage;                                       // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	float                                              DamageRequired;                                           // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ClusterExplosion;                                         // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	int                                                ClusterCount;                                             // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ClusterClass;                                             // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClusterSpawnOffset;                                       // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ProximityExplosion;                                       // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	TArray<class UClass*>                              TriggerClasses;                                           // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ProximityRange;                                           // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DamageOverridesDelay;                                     // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	float                                              DelayLength;                                              // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_Delay;                                              // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particle_Delay;                                           // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale_Delay;                                              // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableDamageOverTime;                                     // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	float                                              Threshold_DamageOverTime;                                 // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Amount_DamageOverTime;                                    // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frequency_DamageOverTime;                                 // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_DamageOverTime;                                     // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particle_DamageOverTime;                                  // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DOTActive;                                                // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelayActive;                                              // 0x0449(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x044A(0x0006) MISSED OFFSET
	struct FTimerHandle                                ExplosionDelay;                                           // 0x0450(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                DOTLoop;                                                  // 0x0458(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Scale_DamageOverTime;                                     // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MakePhysicsObject;                                        // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0465(0x0003) MISSED OFFSET
	class UParticleSystem*                             ParticleTrail;                                            // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AfterEffectsActor;                                        // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ObjectMass;                                               // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PropelPlayer;                                             // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PropelPhysicsBodies;                                      // 0x047D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x047E(0x0002) MISSED OFFSET
	float                                              ExplosionForce;                                           // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsProjectile;                                             // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	float                                              Health;                                                   // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasExploded;                                              // 0x048C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	class APawn*                                       OwningPawn;                                               // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               StickyActor;                                              // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              StickyDelay;                                              // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StickyOffset;                                             // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialSpeed;                                             // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	TArray<struct FName>                               BonesToTrace;                                             // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              PermeableClasses;                                         // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              PermeableActors;                                          // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Ready;                                                    // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       TraceVisibility;                                          // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x04E2(0x0002) MISSED OFFSET
	float                                              TraceDuration;                                            // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TraceColor;                                               // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TraceHitColor;                                            // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0508(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldBounce;                                             // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0519(0x0003) MISSED OFFSET
	float                                              Bounciness;                                               // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHomingProjectile;                                       // 0x0524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0525(0x0003) MISSED OFFSET
	float                                              HomingAccelerationMagnitude;                              // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ActorStuck;                                               // 0x052C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Active;                                                   // 0x052D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstRun;                                                 // 0x052E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowSticky;                                              // 0x052F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x0530(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	class AActor*                                      Element;                                                  // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HitPercent;                                               // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HitMade;                                                  // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x054D(0x0003) MISSED OFFSET
	class ABP_Boom_ExplosionActor_C*                   ElementAsEA;                                              // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  NewVar_1;                                                 // 0x0558(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C");
		return ptr;
	}


	void GetStuck(bool* Stuck_);
	void GetState(bool* GetState);
	void AdjustRotation();
	void RunHitDetection();
	void SpawnClusters();
	void ArmExplosive();
	void GetHitResults(bool* IsSimple, TArray<struct FVector>* Array, bool* Successful, float* Percentile);
	void ObstructionCheck_Simple(class AActor** TargetActor, bool* HitMade);
	void ObstructionCheck_Bones(class AActor** TargetActor, bool* IsSimpleTrace, bool* HitMade, float* Percentile);
	void ObstructionCheck_SevenPoint(class AActor** TargetActor, bool* IsSimpleTrace, bool* HitMade, float* Percentile);
	void ProcessHit(class AActor** ActorHit, struct FVector* HitLocation, struct FVector* HitNormal);
	void SetStickyObject(class AActor** Actor, struct FVector* Location);
	void InitializeProjectile();
	void ActivateProxyTrigger();
	void ProcessProxyTrigger(class AActor** OverlappingActor, bool* ForceExplosion);
	void CheckOwnerProximity();
	float GetAdjustedDamage(class AActor** Actor, float* HitPercent);
	void ManageSounds(class USoundBase** NewSound, bool* FadeOut_, bool* FadeIn_, class USoundAttenuation** Attenuation);
	float GetMassImpact(class UPrimitiveComponent** Component);
	struct FVector GetExplosionForce(class AActor** Actor);
	void ExplodeActorDelayed();
	void SelfDamageLoop();
	void ManageParticles(class UParticleSystem** ParticleEffect, bool* DelayParticle_);
	void ExplodeActor();
	void DamageActor(float* DamageAmount);
	void UserConstructionScript();
	void ManipulateParticles(class UParticleSystem** ParticleEffect, bool* DelayParticle_);
	void ManipulateSounds(class USoundBase** NewSound, bool* FadeOut_, bool* FadeIn_, class USoundAttenuation** Attenuation);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void ForceTrigger();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ActivateSticky(class AActor** ParentActor, struct FVector* Location);
	void SetOwningPawn(class APawn** Pawn);
	void ReceiveTick(float* DeltaSeconds);
	void PropelBody(class UPrimitiveComponent** Target, struct FVector* Impulse);
	void PropelCharacter(class ACharacter** Character, struct FVector* LaunchVelocity);
	void ExplosionEffects();
	void BndEvt__ProximityCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ExplosiveActorDamage(float* BaseDamage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** DamageTypeClass);
	void DelayExplosion();
	void ExecuteUbergraph_BP_Boom_ExplosionActor(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
