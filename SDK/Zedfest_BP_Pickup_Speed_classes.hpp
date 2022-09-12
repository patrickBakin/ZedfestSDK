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

// BlueprintGeneratedClass BP_Pickup_Speed.BP_Pickup_Speed_C
// 0x001C (0x03D0 - 0x03B4)
class ABP_Pickup_Speed_C : public ABP_PickupRoot_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_0_SLOMOCURVE_7D78214A46FD21A2170F6D95B333848E;   // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_7D78214A46FD21A2170F6D95B333848E;   // 0x03C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pickup_Speed.BP_Pickup_Speed_C");
		return ptr;
	}


	void Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void PickupEffect();
	void SpeedVisibilityEvent();
	void ExecuteUbergraph_BP_Pickup_Speed(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
