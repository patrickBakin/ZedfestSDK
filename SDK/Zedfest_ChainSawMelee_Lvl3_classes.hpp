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

// BlueprintGeneratedClass ChainSawMelee_Lvl3.ChainSawMelee_Lvl3_C
// 0x0093 (0x06C4 - 0x0631)
class AChainSawMelee_Lvl3_C : public AMeleeWeaponBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0631(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0638(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Eye_03;                                                   // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Eye_06;                                                   // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Eye_05;                                                   // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Eye_04;                                                   // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Eye_02;                                                   // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Eye_01;                                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_4_RevFloat_C449C11A41F22AFF3824F6BEE947B1C7;     // 0x0670(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_4__Direction_C449C11A41F22AFF3824F6BEE947B1C7;   // 0x0674(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0675(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_5;                                               // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_3_RevFloat_37A9DA3C47E6FC742B86C6BF23A55429;     // 0x0680(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_37A9DA3C47E6FC742B86C6BF23A55429;   // 0x0684(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0685(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_RevFloat_2CF5AB734333E3AF983321A9179AF443;     // 0x0690(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_2CF5AB734333E3AF983321A9179AF443;   // 0x0694(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0695(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_RevFloat_BC4C834E430CC59180C1E7A290392D41;     // 0x06A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_BC4C834E430CC59180C1E7A290392D41;   // 0x06A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Running;                                                  // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    BladeMaterial;                                            // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Throttle;                                                 // 0x06C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChainSawMelee_Lvl3.ChainSawMelee_Lvl3_C");
		return ptr;
	}


	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void ChildUseEvent();
	void ChildStopEvent();
	void ChildUseEventMulticast();
	void ChildStopEventMulticast();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void StartStopChainSawSound(bool* Start_);
	void EquipSound();
	void StopWeaponSounds();
	void ExecuteUbergraph_ChainSawMelee_Lvl3(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
