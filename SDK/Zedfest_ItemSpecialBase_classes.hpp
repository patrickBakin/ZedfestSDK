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

// BlueprintGeneratedClass ItemSpecialBase.ItemSpecialBase_C
// 0x0038 (0x03C8 - 0x0390)
class AItemSpecialBase_C : public AItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemSpecialData                            SpecialItem_Data;                                         // 0x03A0(0x0028) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ItemSpecialBase.ItemSpecialBase_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void SetSpecialItemMesh(class UStaticMesh** NewMesh, struct FVector* Scale);
	void ExecuteUbergraph_ItemSpecialBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
