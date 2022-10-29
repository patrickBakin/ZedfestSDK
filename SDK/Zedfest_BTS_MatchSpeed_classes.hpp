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

// BlueprintGeneratedClass BTS_MatchSpeed.BTS_MatchSpeed_C
// 0x0054 (0x00EC - 0x0098)
class UBTS_MatchSpeed_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_AIC_C*                                   ControllerRef;                                            // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBP_BehaviorComponent_C*                     BehaviorComponent;                                        // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FBlackboardKeySelector                      TargetLocationKey;                                        // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     TargetLocation;                                           // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMoveSpeed;                                             // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Distance;                                                 // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTS_MatchSpeed.BTS_MatchSpeed_C");
		return ptr;
	}


	void ReceiveActivation(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_BTS_MatchSpeed(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
