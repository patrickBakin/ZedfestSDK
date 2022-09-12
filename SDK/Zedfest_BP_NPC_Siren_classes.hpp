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

// BlueprintGeneratedClass BP_NPC_Siren.BP_NPC_Siren_C
<<<<<<< HEAD
// 0x00E9 (0x0A60 - 0x0977)
class ABP_NPC_Siren_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0977(0x0001) MISSED OFFSET
=======
// 0x00EB (0x0A60 - 0x0975)
class ABP_NPC_Siren_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadialForceComponent*                       RadialForce_1;                                            // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_RotatingLightLamp;                                     // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_RotatingLightGlas;                                     // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              NewVar_2_1;                                               // 0x09A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FEffects                                    Effects;                                                  // 0x09B8(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_Siren.BP_NPC_Siren_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature();
	void OnDeath(bool* Head_, class AActor** DamageCauser);
	void ReceiveBeginPlay();
	void OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter);
	void FanTimer();
	void SirenExplodeEvent();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void StompGroundEvent();
	void ExecuteUbergraph_BP_NPC_Siren(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
