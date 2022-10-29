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

// BlueprintGeneratedClass BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C
// 0x0200 (0x0530 - 0x0330)
class ABP_ReusableSwitch_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScreenIndicator_C*                          ScreenIndicator;                                          // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             InteractionCenter;                                        // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Arm;                                                      // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_NewTrack_1_B533F11A4FA61FED6042FAACCEE00F5C;   // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_B533F11A4FA61FED6042FAACCEE00F5C;   // 0x0374(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_1_2E00748447448599C5477BA04B1E44F2;   // 0x0380(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_2E00748447448599C5477BA04B1E44F2;   // 0x0384(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AnimTimeline_Animation_8F5CCFC248230BF1D77B9F95189D71F6;  // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    AnimTimeline__Direction_8F5CCFC248230BF1D77B9F95189D71F6; // 0x0394(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	class UTimelineComponent*                          AnimTimeline;                                             // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    AnimRotateAmount;                                         // 0x03A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              Receivers;                                                // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              InvertedReceivers;                                        // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               bStartOn;                                                 // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractableForwardType>              InteractionType;                                          // 0x03D1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x03D2(0x0002) MISSED OFFSET
	int                                                InteractSimpleModeOn;                                     // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InteractSimpleModeOff;                                    // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractIncrementValueOn;                                 // 0x03DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              InteractIncrementValueOff;                                // 0x03E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	struct FString                                     InteractionTextOn;                                        // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundBase*                                  SwitchSound;                                              // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyForwardInteractIfAuthority;                          // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FString                                     InteractionTextOff;                                       // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAlwaysFocusable;                                         // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebugText;                                           // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	class UTextRenderComponent*                        DebugTextRender;                                          // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bForwardInteractToAttachParent;                           // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	struct FLinearColor                                BaseColor;                                                // 0x044C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMaterialBasedAnimation;                               // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateRandomColor;                                     // 0x045D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateRandomBaseColor;                                 // 0x045E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOn;                                                      // 0x045F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInvertInteractToAttachParent;                            // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSendInteractOnBeginPlay;                                 // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0462(0x0002) MISSED OFFSET
	float                                              AnimPlayRate;                                             // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ObjectThatTurnsOn;                                        // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ObjectiveNumberLocked;                                    // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled_;                                                 // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	int                                                ObjectiveNumberOnOpen;                                    // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IndicatorOn_;                                             // 0x0484(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	struct FEffects                                    Effects;                                                  // 0x0488(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ReusableSwitch_Base.BP_ReusableSwitch_Base_C");
		return ptr;
	}


	void Set_Widget_Type(TEnumAsByte<E_WidgetTypes>* Widget_Type);
	void Set_Widget_Title(bool* Return_Value, struct FText* Title_Text);
	void Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text);
	void Set_Widget_Level(bool* Return_Value, struct FText* Level_Text);
	void Set_Widget_Amount(bool* Return_Value, int* Amount_Value);
	void Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color);
	void Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds);
	void Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void ShouldNotSendInteractToServer(bool* bShouldNotSendInteractToServer);
	void ShouldNotInteractOnClients(bool* bShouldNotInteractOnClients);
	void GetDesiredHeldRotation(struct FRotator* RelativeHeldRotation);
	void GetInteractionText(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, struct FText* Text);
	void IsFocusable(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, bool* bFocusable);
	void GetInteractionCenterPoint(struct FVector* WorldLocation);
	void IsPhysicsPickup(bool* bPickupable, class UPrimitiveComponent** PickupComponent);
	void PlaySwitchSound();
	void OnSwitchStateChanged(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor);
	void UpdateColors();
	void SetUpMIDOnComponents();
	void GetMIDMeshComponents(TArray<class UPrimitiveComponent*>* Meshes);
	void GetAnimatedComponents(TArray<class UPrimitiveComponent*>* AnimatedComponent);
	void UpdateAnimation(float* AnimationPoint);
	void UserConstructionScript();
	void AnimTimeline__FinishedFunc();
	void AnimTimeline__UpdateFunc();
	void AnimTimeline__Off__EventFunc();
	void AnimTimeline__On__EventFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Toggle_Widget(bool* Widget);
	void SetFocused(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, bool* bIsFocused);
	void Interact1(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor);
	void OnPhysicsPickup(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle);
	void OnPhysicsRelease(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle);
	void SetInteractionDebugString(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, struct FString* DebugString);
	void ReceiveBeginPlay();
	void Current_Target(class APawn** Pawn);
	void Clear_Target();
	void Interact(struct FKey* Key, class APawn** Pawn);
	void ShrinkSwitches();
	void ExecuteUbergraph_BP_ReusableSwitch_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
