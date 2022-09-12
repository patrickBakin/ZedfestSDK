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

// BlueprintGeneratedClass BP_GlitchFaceButtons.BP_GlitchFaceButtons_C
// 0x00E4 (0x0414 - 0x0330)
class ABP_GlitchFaceButtons_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_LargeScreen;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender1;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScreenIndicator_C*                          ScreenIndicator;                                          // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Box_Machine1;                                          // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEffects                                    Effects;                                                  // 0x0368(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CameraHealth;                                             // 0x0410(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GlitchFaceButtons.BP_GlitchFaceButtons_C");
		return ptr;
	}


	void InteractIncrement(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, float* Increment);
	void InteractDecrement(TScriptInterface<class UBPI_GenericInteractor_C>* NewParam, TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1, float* Decrement);
	void InteractSimple(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, int* Mode);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void SetGlitchFaceItemHealth();
	void ExecuteUbergraph_BP_GlitchFaceButtons(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
