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

// BlueprintGeneratedClass BTT_RotateToTarget.BTT_RotateToTarget_C
// 0x0030 (0x00D0 - 0x00A0)
class UBTT_RotateToTarget_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BBKey;                                                    // 0x00A8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_RotateToTarget.BTT_RotateToTarget_C");
		return ptr;
	}


	void GetBlackboardAsVector(struct FBlackboardKeySelector* BBKey, struct FVector* RetVector);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTT_RotateToTarget(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
