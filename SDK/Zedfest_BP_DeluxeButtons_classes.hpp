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

// BlueprintGeneratedClass BP_DeluxeButtons.BP_DeluxeButtons_C
// 0x01AC (0x04DC - 0x0330)
class ABP_DeluxeButtons_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                        NumberResult;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
<<<<<<< HEAD
	class UTextRenderComponent*                        =Sign;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
=======
	class UTextRenderComponent*                        __Sign;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	class UTextRenderComponent*                        Number2;                                                  // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        _Sign;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Number1;                                                  // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        CodeNumber;                                               // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_LargeScreen;                                           // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube1;                                                    // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScreenIndicator_C*                          ScreenIndicator;                                          // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Box_Machine1;                                          // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_1_A301892E4E2DC4429158BE862A69D273;   // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_A301892E4E2DC4429158BE862A69D273;   // 0x039C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEffects                                    Effects;                                                  // 0x03A8(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTransform                                  LeftNumberLeverTransform;                                 // 0x0450(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RightNumberLeverTransform;                                // 0x0480(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTextRenderComponent*>                TextRenderArray;                                          // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABP_ReusableSwitch_Base_C*>           Switches;                                                 // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                DeluxeButtonCode;                                         // 0x04D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LeftNumber;                                               // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RightNumber;                                              // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeluxeButtons.BP_DeluxeButtons_C");
		return ptr;
	}


	void IsSwitchLeft(TScriptInterface<class UInterface>* Interface, bool* bLeft);
	void SpawnLevers();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InteractSimple(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, int* Mode);
	void InteractDecrement(TScriptInterface<class UBPI_GenericInteractor_C>* NewParam, TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1, float* Decrement);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void RemoveDeluxeButtons();
	void InteractIncrement(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, float* Increment);
	void ChangeLeversEvent1(bool* Left_, float* Increment);
	void SetCodeText(bool* Completed_);
	void SpawnDeluxeLeversEvent();
	void ExecuteUbergraph_BP_DeluxeButtons(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
