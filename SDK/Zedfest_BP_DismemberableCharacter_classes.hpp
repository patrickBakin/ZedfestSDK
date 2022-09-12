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

// BlueprintGeneratedClass BP_DismemberableCharacter.BP_DismemberableCharacter_C
// 0x00A8 (0x07F8 - 0x0750)
class ABP_DismemberableCharacter_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CullTimeline_CullValue_FC2D0E0846609C8136FB219CCBD7F3B2;  // 0x0758(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CullTimeline__Direction_FC2D0E0846609C8136FB219CCBD7F3B2; // 0x075C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x075D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CullTimeline;                                             // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FDismemberInfo>                      DismemberInfo;                                            // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    SkelMeshMID;                                              // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsDismemberThreshold;                                // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LimbCullTime;                                             // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GibsMainMID;                                              // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          GibMainMaterial;                                          // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          GibsGoreMaterial;                                         // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GibsGoreMID;                                              // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentBloodLevel;                                        // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07AC(0x0004) MISSED OFFSET
	TArray<class UTexture2D*>                          NewVar_2;                                                 // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                CreatedMeshCompArray;                                     // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_NPC_Base_C*                              AI_NPC_Ref;                                               // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanDismember_;                                            // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowBloodnGore_;                                          // 0x07D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlackZedOutline_;                                         // 0x07DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x07DB(0x0001) MISSED OFFSET
	int                                                RemoveDeadZedDelay;                                       // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RadialSocketName;                                         // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               RadialSocketArray;                                        // 0x07E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DismemberableCharacter.BP_DismemberableCharacter_C");
		return ptr;
	}


	void F_GetHitResult(class UPrimitiveComponent** Target, struct FHitResult* Hit, bool* CanRagdol_, struct FVector* Location, float* BodyVelocity);
	void SetupGibMaterials();
	void IncreaseBloodLevel();
	void InitialiseBoneRotations();
	void HandlePhysicsHit(struct FVector* HitLocation, struct FVector* HitNormal, bool* HitByOther);
	void HandleRadialDamage(struct FVector* Origin);
	void Dismember(struct FDismemberInfo* DismemberInfo, struct FVector* HitDirection, bool* Radial_);
	void HandleDamage(float* Damage, struct FVector* HitLocation, struct FVector* ShotFromDirection, struct FName* HitBone, bool* Radial_);
	void FindDismemberInfo(struct FName* BoneName, bool* Found, struct FDismemberInfo* DismemberInfo);
	void CullTimeline__FinishedFunc();
	void CullTimeline__UpdateFunc();
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void DismemberLimbMulticast(struct FVector* ShotFromDirection, struct FName* HitBone);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void LimbCulling();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void BP_NPC_Ref(class ABP_NPC_Base_C** BPNPCRef);
	void EventDismember();
	void HandleRadialDamageMulticast(struct FVector* Origin);
	void RadialDismemberLimb(struct FVector* ShotFromDirection, struct FName* HitBone);
	void ExecuteUbergraph_BP_DismemberableCharacter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
