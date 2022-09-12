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

// BlueprintGeneratedClass BP_KittenShrapnel_Explosives.BP_KittenShrapnel_Explosives_C
// 0x0018 (0x0348 - 0x0330)
class ABP_KittenShrapnel_Explosives_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadialForceComponent*                       RadialForce;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_KittenShrapnel_Explosives.BP_KittenShrapnel_Explosives_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_KittenShrapnel_Explosives(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
