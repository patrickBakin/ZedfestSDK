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

// BlueprintGeneratedClass ScreenIndicator.ScreenIndicator_C
// 0x0888 (0x0980 - 0x00F8)
class UScreenIndicator_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FIndicatorData                              Indicator_Data;                                           // 0x0100(0x0128) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UScreenIndicator_C*                          Widget;                                                   // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<class AActor*, class UScreenIndicator_C*>     Actor_Indicator_List;                                     // 0x0230(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UScreenIndicator_C*>                  Indicator_List;                                           // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FIndicatorData                              Preset_1;                                                 // 0x0290(0x0128) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIndicatorData                              Preset_2;                                                 // 0x03B8(0x0128) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIndicatorData                              Preset_3;                                                 // 0x04E0(0x0128) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIndicatorData                              Preset_4;                                                 // 0x0608(0x0128) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIndicatorData                              Preset_5;                                                 // 0x0730(0x0128) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIndicatorData                              Preset_6;                                                 // 0x0858(0x0128) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ScreenIndicator.ScreenIndicator_C");
		return ptr;
	}


	void Remove_Indicator(class UScreenIndicator_C** Indicator_Ref, bool* Immediately);
	void Check_Actor_Is_Already_Tracking_(bool* Can_Spawn_);
	void Create_Indicator(struct FIndicatorData* Indicator_Data, class UScreenIndicator_C** Indicator_Ref);
	void Spawn_Indicator();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_ScreenIndicator(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
