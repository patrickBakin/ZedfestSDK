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

// BlueprintGeneratedClass BTT_MoveToBlackboard.BTT_MoveToBlackboard_C
// 0x0078 (0x0118 - 0x00A0)
class UBTT_MoveToBlackboard_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      AcceptableRadiusKey;                                      // 0x00D0(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<EPathFollowingRequestResult>           RequestResult;                                            // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              AcceptableRadius;                                         // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RequireLineOfSight;                                       // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseControllerRotation;                                    // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
	class ACharacter*                                  CharacterRef;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               RequestFailed_;                                           // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	int                                                TeleportTimer;                                            // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_MoveToBlackboard.BTT_MoveToBlackboard_C");
		return ptr;
	}


	void GetBlackboardValue(struct FBlackboardKeySelector* Key, class AActor** ActorValue, struct FVector* VectorValue);
	void OnMoveFinished_DE75453143ADBBBDCEEF64A07451FC96(TEnumAsByte<EPathFollowingResult>* Result, class AAIController** AIController);
	void OnRequestFailed_DE75453143ADBBBDCEEF64A07451FC96();
	void OnMoveFinished_914C5A064B7524DE0195529892D972A7(TEnumAsByte<EPathFollowingResult>* Result, class AAIController** AIController);
	void OnRequestFailed_914C5A064B7524DE0195529892D972A7();
	void ReceiveExecute(class AActor** OwnerActor);
	void OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper** QueryInstance, TEnumAsByte<EEnvQueryStatus>* QueryStatus);
	void ReceiveAbort(class AActor** OwnerActor);
	void CustomEvent_1();
	void ExecuteUbergraph_BTT_MoveToBlackboard(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
