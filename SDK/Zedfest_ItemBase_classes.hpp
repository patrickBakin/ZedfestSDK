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

// BlueprintGeneratedClass ItemBase.ItemBase_C
// 0x0060 (0x0390 - 0x0330)
class AItemBase_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Amount;                                                   // 0x0338(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FItemData11                                 Item_Data;                                                // 0x0340(0x0038) (Edit, BlueprintVisible)
	class AInventoryData_C*                            InventoryData;                                            // 0x0378(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FString                                     ItemName;                                                 // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ItemBase.ItemBase_C");
		return ptr;
	}


	void Get_Amount(int* Amount);
	void Decrease_Amount(int* Amount, TEnumAsByte<EInventoryType>* Inventory_Type, int* Index);
	void Increase_Amount(int* Amount, int* Bar_Selection);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
