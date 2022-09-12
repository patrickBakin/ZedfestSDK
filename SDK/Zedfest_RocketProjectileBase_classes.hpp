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

// BlueprintGeneratedClass RocketProjectileBase.RocketProjectileBase_C
// 0x0010 (0x0360 - 0x0350)
class ARocketProjectileBase_C : public AProjectileBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Damage;                                                   // 0x0358(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Explosion_Range;                                          // 0x035C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RocketProjectileBase.RocketProjectileBase_C");
		return ptr;
	}


	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(struct FHitResult* ImpactResult);
	void ExecuteUbergraph_RocketProjectileBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
