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

// BlueprintGeneratedClass BP_DENT_MASTER.BP_DENT_MASTER_C
// 0x0080 (0x03B0 - 0x0330)
class ABP_DENT_MASTER_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDestructibleComponent*                      Destructible;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DM_Blast_Damage;                                          // 0x0348(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DM_Blast_Radius;                                          // 0x034C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DM_Blast_Strength;                                        // 0x0350(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class UParticleSystem*                             DM_Fracture_Particle_Radial;                              // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DM_Fracture_Particle_Point;                               // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExplodeOnFracture;                                        // 0x0368(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class USoundCue*                                   DM_Fracture_Sound_Radial;                                 // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDamageRadial;                                           // 0x0378(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class USoundCue*                                   DM_Fracture_Sound_Point;                                  // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LargeChunkThresholdOverride;                              // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDamage;                                                 // 0x0398(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDmAOE;                                                  // 0x0399(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
	class AActor*                                      DamageCauser;                                             // 0x03A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamageCauserValid;                                        // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableHardSleeping;                                       // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x03AA(0x0002) MISSED OFFSET
	float                                              DM_PointImpulse;                                          // 0x03AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DENT_MASTER.BP_DENT_MASTER_C");
		return ptr;
	}


	void DENT_Process_Point(struct FVector* Location, struct FRotator* Rotation, bool* AutoDestroy);
	void DENT_Process_Radial(struct FVector* Location, struct FRotator* Rotation, bool* AutoDestroy);
	void DENT_OnFracture_Particle_Spawn(struct FVector* Location, struct FRotator* Rotation, bool* bAutoDestroy);
	void DENT_OnFracture_Explode(float* BaseDamage, float* DamageRadius, class UClass** DamageTypeClass, class AActor** DamageCauser, class AController** InstigatedByController, bool* bDoFullDamage, TEnumAsByte<ECollisionChannel>* DamagePreventionChannel, float* Strength, struct FVector* Origin);
	void DENT_OnFracture_Action_MainCall(struct FVector* HitPoints, struct FRotator* HitDirection);
	void UserConstructionScript();
	void DENT_DM_MultiCast_Fracture(struct FVector* HitPoints, struct FRotator* HitDirection);
	void ReceiveBeginPlay();
	void DENT_DM_Server_Fracture(struct FVector* HitPoints, struct FRotator* HitDirection);
	void BndEvt__Destructible_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature(struct FVector* HitPoint, struct FVector* HitDirection);
	void DENT_DM_Server_GenericDamage(class UDestructibleComponent** Target, float* BaseDamage, struct FVector* HurtOrigin, float* DamageRadius, float* ImpulseStrength, bool* bFullDamage);
	void DENT_DM_MultiCast_GenericDamage(class UDestructibleComponent** Target, float* BaseDamage, struct FVector* HurtOrigin, float* DamageRadius, float* ImpulseStrength, bool* bFullDamage);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void DENT_DM_Server_RadialDamage(class UDestructibleComponent** Target, float* BaseDamage, struct FVector* HurtOrigin, float* DamageRadius, float* ImpulseStrength, bool* bFullDamage);
	void DENT_DM_MultiCast_RadialDamage(class UDestructibleComponent** Target, float* BaseDamage, struct FVector* HurtOrigin, float* DamageRadius, float* ImpulseStrength, bool* bFullDamage);
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void DENT_DM_Server_PointDamage(class UDestructibleComponent** Target, float* Damage, struct FVector* Hit_Location, struct FVector* Direction, float* ImpulseStrength);
	void DENT_DM_MultiCast_PointDamage(class UDestructibleComponent** Target, float* Damage, struct FVector* HitLocation, struct FVector* Direction, float* ImpulseStrength);
	void DENT_Spawn_Damage_Debris_Radial(struct FVector* HitPoint, struct FRotator* HitDirection);
	void DENT_Spawn_Damage_Debris_Point(struct FVector* HitPoint, struct FRotator* HitDirection);
	void ExecuteUbergraph_BP_DENT_MASTER(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
