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

// BlueprintGeneratedClass BTT_BehaviorTransition.BTT_BehaviorTransition_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTT_BehaviorTransition_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_BehaviorTransition.BTT_BehaviorTransition_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTT_BehaviorTransition(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
