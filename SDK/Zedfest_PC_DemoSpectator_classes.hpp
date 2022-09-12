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

// BlueprintGeneratedClass PC_DemoSpectator.PC_DemoSpectator_C
// 0x0049 (0x06D9 - 0x0690)
class APC_DemoSpectator_C : public ADemoPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                     InGameMenu_Demo;                                          // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsHudUp;                                                 // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVREnabled;                                              // 0x06A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x06A2(0x0006) MISSED OFFSET
	class AHMDLocomotionPawn_C*                        VRTeleportPawn;                                           // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EVRMoveMode                                        VRMoveMode;                                               // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	class AMotionControllerPawn_C*                     VRMotionPawn;                                             // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AVRFlyPawn_C*                                VRFlyPawn;                                                // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AHybridVRPawn_C*                             VRHybridPawn;                                             // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UUMG_DemoHUD_C*                              DemoPlayerHUD;                                            // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               HideVRMenusForScreenshot;                                 // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PC_DemoSpectator.PC_DemoSpectator_C");
		return ptr;
	}


	void ToggleHUD();
	void EnableVR(bool* InEnable, EVRMoveMode* InVRMode);
	void InpActEvt_Tab_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_1(struct FKey* Key);
	void BP_ToggleMenu();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PC_DemoSpectator(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
