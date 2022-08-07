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

// BlueprintGeneratedClass VRFlyPawn.VRFlyPawn_C
// 0x0019 (0x03D1 - 0x03B8)
class AVRFlyPawn_C : public ADefaultPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetInteractionComponent*                 VRWidgetInteraction;                                      // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            VRMenu;                                                   // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsVRMenuActive;                                           // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRFlyPawn.VRFlyPawn_C");
		return ptr;
	}


	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5(struct FKey* Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_3(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1(struct FKey* Key);
	void ExecuteUbergraph_VRFlyPawn(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
