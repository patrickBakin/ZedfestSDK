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

// BlueprintGeneratedClass BP_AIStorage.BP_AIStorage_C
// 0x0020 (0x0350 - 0x0330)
class ABP_AIStorage_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              ActorsList;                                               // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AIStorage.BP_AIStorage_C");
		return ptr;
	}


	void AddAIActorToList(class AActor** ActorRef);
	void AddActorToList(class AActor** ActorRef);
	void ReceiveBeginPlay();
	void AddActor(class AActor** ActorRef);
	void AddAIActor(class AActor** ActorRef);
	void ExecuteUbergraph_BP_AIStorage(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
