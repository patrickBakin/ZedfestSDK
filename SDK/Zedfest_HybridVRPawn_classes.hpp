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

// BlueprintGeneratedClass HybridVRPawn.HybridVRPawn_C
// 0x00C0 (0x0468 - 0x03A8)
class AHybridVRPawn_C : public ADemoVRPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            VRMenu;                                                   // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetInteractionComponent*                 VRWidgetInteraction;                                      // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             TraceDirection;                                           // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Arrow;                                                    // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Ring;                                                     // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TeleportPin;                                              // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             VROrigin;                                                 // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     PinnedLocation;                                           // 0x03F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocationFound;                                           // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocationPinned;                                          // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03FE(0x0002) MISSED OFFSET
	struct FRotator                                    PinnedRotation;                                           // 0x0400(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationLengthThreshold;                                  // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentLookAtLocation;                                    // 0x0410(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCurrentLocationValid;                                    // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	float                                              FadeOutDuration;                                          // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeInDuration;                                           // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TeleportFadeColor;                                        // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultPlayerHeight;                                      // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    RingGlowMatInst;                                          // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseGamepad;                                               // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVRMenuActive;                                           // 0x0449(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x044A(0x0002) MISSED OFFSET
	struct FVector                                     CachedDestTeleport;                                       // 0x044C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CachedOrientTeleport;                                     // 0x0458(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutWithTimeScaled;                                    // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HybridVRPawn.HybridVRPawn_C");
		return ptr;
	}


	void SetOverrideTurning(bool* bOverrideTurning);
	void UpdateTeleportDirection();
	struct FVector GetThumbstickFacingDirection();
	void ShouldUpdateFacingDirection(bool* ShouldAdjust);
	void GetTeleportDestination(bool* FoundValidLocation, struct FVector* Location, struct FVector* HitNormal);
	void InpActEvt_R_K2Node_InputKeyEvent_9(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5(struct FKey* Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4(struct FKey* Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1(struct FKey* Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_HybridVRPawn(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
