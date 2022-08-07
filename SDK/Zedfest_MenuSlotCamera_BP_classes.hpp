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

// BlueprintGeneratedClass MenuSlotCamera_BP.MenuSlotCamera_BP_C
// 0x0040 (0x0790 - 0x0750)
class AMenuSlotCamera_BP_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpringArmComponent*                         SpringArm;                                                // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ResetCamera_;                                             // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	float                                              CamRotRate;                                               // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamZoom;                                                  // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableScrollZoom_;                                        // 0x0774(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnOffAutoCamera_;                                       // 0x0775(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0776(0x0002) MISSED OFFSET
	class UBP_Horde_Instance_C*                        MenuSlotCameraGameInstanceRef;                            // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	class UW_ConsoleWidget_C*                          MenuCheatBoxVariable;                                     // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MenuSlotCamera_BP.MenuSlotCamera_BP_C");
		return ptr;
	}


	void InpActEvt_ShootButton_K2Node_InputActionEvent_5(struct FKey* Key);
	void InpActEvt_ShootButton_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_AimButton_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_AimButton_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_CheatCodeButton_K2Node_InputActionEvent_1(struct FKey* Key);
	void I_1(struct FKey* Key);
	void ReceiveBeginPlay();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float* AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float* AxisValue);
	void ReceiveTick(float* DeltaSeconds);
	void InpAxisEvt_ScrollZoom_K2Node_InputAxisEvent_3(float* AxisValue);
	void BndEvt__CheatBoxButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void MenuConsoleClose();
	void MenuConsoleOpen();
	void ExecuteUbergraph_MenuSlotCamera_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
