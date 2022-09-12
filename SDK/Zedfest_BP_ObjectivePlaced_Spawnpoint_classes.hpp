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

// BlueprintGeneratedClass BP_ObjectivePlaced_Spawnpoint.BP_ObjectivePlaced_Spawnpoint_C
// 0x00D0 (0x0400 - 0x0330)
class ABP_ObjectivePlaced_Spawnpoint_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScreenIndicator_C*                          ScreenIndicator;                                          // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Drop_Area;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEffects                                    Effects;                                                  // 0x0358(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ObjectivePlaced_Spawnpoint.BP_ObjectivePlaced_Spawnpoint_C");
		return ptr;
	}


	void ObjectivePlaceIndicatorEvent(bool* TurnOn_);
	void ExecuteUbergraph_BP_ObjectivePlaced_Spawnpoint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
