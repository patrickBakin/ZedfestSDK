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

// BlueprintGeneratedClass PickupSpecialItem.PickupSpecialItem_C
// 0x001C (0x03A4 - 0x0388)
class APickupSpecialItem_C : public APickupBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      SpecialItem_Class;                                        // 0x0398(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x03A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PickupSpecialItem.PickupSpecialItem_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_PickupSpecialItem(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
