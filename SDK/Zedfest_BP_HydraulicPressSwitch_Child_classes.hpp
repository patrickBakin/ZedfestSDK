#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HydraulicPressSwitch_Child.BP_HydraulicPressSwitch_Child_C
// 0x0020 (0x0550 - 0x0530)
class ABP_HydraulicPressSwitch_Child_C : public ABP_ReusableSwitch_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_LargeScreen;                                           // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Box_Machine;                                           // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HydraulicPressSwitch_Child.BP_HydraulicPressSwitch_Child_C");
		return ptr;
	}


	void SetSwitchCodeText(struct FText* Number);
	void ExecuteUbergraph_BP_HydraulicPressSwitch_Child(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
