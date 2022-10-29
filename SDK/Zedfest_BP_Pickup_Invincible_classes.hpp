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

// BlueprintGeneratedClass BP_Pickup_Invincible.BP_Pickup_Invincible_C
// 0x001C (0x03D0 - 0x03B4)
class ABP_Pickup_Invincible_C : public ABP_PickupRoot_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_0_SLOMOCURVE_D2229A064FEC843C351D228FCD806270;   // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_D2229A064FEC843C351D228FCD806270;   // 0x03C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pickup_Invincible.BP_Pickup_Invincible_C");
		return ptr;
	}


	void Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void PickupEffect();
	void InvincibleVisibility();
	void ExecuteUbergraph_BP_Pickup_Invincible(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
