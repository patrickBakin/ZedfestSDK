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

// BlueprintGeneratedClass BP_BehaviorTriggerComponent.BP_BehaviorTriggerComponent_C
// 0x0008 (0x0100 - 0x00F8)
class UBP_BehaviorTriggerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BehaviorTriggerComponent.BP_BehaviorTriggerComponent_C");
		return ptr;
	}


	void SendAreaMessage(class AActor** Instigator, struct FVector* Location, float* Radius, TEnumAsByte<Enum_MessageTag>* Message);
	void SendDirectMessage(class AActor** ReceivingActor, TEnumAsByte<Enum_MessageTag>* Message);
	void ExecuteUbergraph_BP_BehaviorTriggerComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
