#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Workspace.BP_Workspace_C
// 0x008A (0x03BA - 0x0330)
class ABP_Workspace_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0338(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentWorkers;                                           // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WorkerLimit;                                              // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	TArray<class ACharacter*>                          WorkersArray;                                             // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        Animations;                                               // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTransform>                          SlotTransforms;                                           // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              WorkDuration;                                             // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UCapsuleComponent*>                   SlotsArray;                                               // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             SlotEntranceOffsets;                                      // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USceneComponent*>                     SlotEntrancesArray;                                       // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SnapLocation;                                             // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapRotation;                                             // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Workspace.BP_Workspace_C");
		return ptr;
	}


	void GetSlotTransform(class ACharacter** WorkerRef, struct FTransform* SlotTransform);
	void RemoveFromSlot(class ACharacter** WorkerRef);
	void GetRandomAnimation(class UAnimMontage** RandAnim);
	void PlayWorkerInSlot(class ACharacter** WorkerRef, bool* WorkSuccess);
	void TakeSlot(class ACharacter** WorkerRef, struct FVector* SlotLocation, float* Duration);
	void HasAvailableSlot(bool* Available);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
