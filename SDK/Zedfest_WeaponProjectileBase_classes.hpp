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

// BlueprintGeneratedClass WeaponProjectileBase.WeaponProjectileBase_C
// 0x000C (0x035C - 0x0350)
class AWeaponProjectileBase_C : public AProjectileBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Damage;                                                   // 0x0358(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponProjectileBase.WeaponProjectileBase_C");
		return ptr;
	}


	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult* ImpactResult);
	void ExecuteUbergraph_WeaponProjectileBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
