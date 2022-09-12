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

// BlueprintGeneratedClass BPA_Projectile_ExplShotgun.BPA_Projectile_ExplShotgun_C
// 0x001C (0x0398 - 0x037C)
class ABPA_Projectile_ExplShotgun_C : public ABPA_ParentProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URadialForceComponent*                       RadialForce;                                              // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem_1;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Projectile_ExplShotgun.BPA_Projectile_ExplShotgun_C");
		return ptr;
	}


	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ExecuteUbergraph_BPA_Projectile_ExplShotgun(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
