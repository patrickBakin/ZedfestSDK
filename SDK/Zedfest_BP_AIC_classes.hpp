#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AIC.BP_AIC_C
// 0x0019 (0x0451 - 0x0438)
class ABP_AIC_C : public ADetourCrowdAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                      AIPerception;                                             // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BehaviorComponent_C*                     Personality;                                              // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               PartialPath;                                              // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AIC.BP_AIC_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor** Actor, struct FAIStimulus* Stimulus);
	void ReceivePossess(class APawn** PossessedPawn);
	void ReceiveUnPossess(class APawn** UnpossessedPawn);
	void ExecuteUbergraph_BP_AIC(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
