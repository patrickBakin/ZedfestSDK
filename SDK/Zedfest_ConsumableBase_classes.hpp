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

// BlueprintGeneratedClass ConsumableBase.ConsumableBase_C
// 0x0058 (0x03E8 - 0x0390)
class AConsumableBase_C : public AItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FConsumableData                             Consumable_Data;                                          // 0x03A0(0x0048) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConsumableBase.ConsumableBase_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void SetConsumableMesh(class UStaticMesh** NewMesh, struct FVector* Scale);
	void ExecuteUbergraph_ConsumableBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
