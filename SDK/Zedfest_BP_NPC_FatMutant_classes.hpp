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

// BlueprintGeneratedClass BP_NPC_FatMutant.BP_NPC_FatMutant_C
<<<<<<< HEAD
// 0x0101 (0x0A78 - 0x0977)
class ABP_NPC_FatMutant_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0977(0x0001) MISSED OFFSET
=======
// 0x0103 (0x0A78 - 0x0975)
class ABP_NPC_FatMutant_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere1;                                                  // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_BunnyMask;                                             // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PlanarMeshSkiva;                                          // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadialForceComponent*                       RadialForce_1;                                            // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxMeleeSwings_;                                          // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanPuke_;                                                 // 0x09BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09BD(0x0003) MISSED OFFSET
	int                                                TimesPuked;                                               // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomInteger1;                                           // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEffects                                    Effects;                                                  // 0x09C8(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PukerGas_C*                              PukerGasTankRef;                                          // 0x0A70(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_FatMutant.BP_NPC_FatMutant_C");
		return ptr;
	}


	void UserConstructionScript();
	void PerformSpecialDamage();
	void OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter);
	void PerformSpecialDamage2();
	void BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature();
	void OnDeath(bool* Head_, class AActor** DamageCauser);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void StompGroundEvent();
	void ExecuteUbergraph_BP_NPC_FatMutant(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
