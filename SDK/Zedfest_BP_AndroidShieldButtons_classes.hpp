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

// BlueprintGeneratedClass BP_AndroidShieldButtons.BP_AndroidShieldButtons_C
// 0x00F0 (0x0420 - 0x0330)
class ABP_AndroidShieldButtons_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cube1;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScreenIndicator_C*                          ScreenIndicator;                                          // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        OperationSwitch1;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Box_Machine1;                                          // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_1_6A0B951B4D3845C8B85D72B839AAE8C5;   // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6A0B951B4D3845C8B85D72B839AAE8C5;   // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEffects                                    Effects;                                                  // 0x0378(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AndroidShieldButtons.BP_AndroidShieldButtons_C");
		return ptr;
	}


	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InteractSimple(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, int* Mode);
	void InteractDecrement(TScriptInterface<class UBPI_GenericInteractor_C>* NewParam, TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1, float* Decrement);
	void InteractIncrement(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, float* Increment);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void RemoveAndroidShieldButtons();
	void ExecuteUbergraph_BP_AndroidShieldButtons(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
