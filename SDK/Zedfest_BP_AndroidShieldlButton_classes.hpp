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

// BlueprintGeneratedClass BP_AndroidShieldlButton.BP_AndroidShieldlButton_C
// 0x00D8 (0x0408 - 0x0330)
class ABP_AndroidShieldlButton_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               TraceBox;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AnimTimeline_Animation_21DA6FC34903EB4A0CA8E8A861AC53CA;  // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    AnimTimeline__Direction_21DA6FC34903EB4A0CA8E8A861AC53CA; // 0x035C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          AnimTimeline;                                             // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AnimMoveDistance;                                         // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              Receivers;                                                // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TEnumAsByte<EInteractableForwardType>              InteractionType;                                          // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	int                                                InteractSimpleMode;                                       // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractIncrementValue;                                   // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	struct FText                                       InteractionText;                                          // 0x0390(0x0018) (Edit, BlueprintVisible)
	class USoundBase*                                  PressSound;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyForwardInteractIfServer;                             // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysFocusable;                                         // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCenterOffset;                                  // 0x03D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebugText;                                           // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	class UTextRenderComponent*                        DebugTextRender;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bForwardInteractToAttachParent;                           // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	struct FLinearColor                                BaseColor;                                                // 0x03EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMaterialBasedAnimation;                               // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateRandomColor;                                     // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateRandomBaseColor;                                 // 0x03FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x03FF(0x0001) MISSED OFFSET
	float                                              DecrementValue;                                           // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ButtonIndex;                                              // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AndroidShieldlButton.BP_AndroidShieldlButton_C");
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
	void PlayButtonSound();
	void OnButtonPressed(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor);
	void UpdateColors();
	void SetUpMIDOnComponents();
	void GetMIDMeshComponents(TArray<class UPrimitiveComponent*>* Meshes);
	void GetAnimatedComponents(TArray<class UPrimitiveComponent*>* AnimatedComponent);
	void UpdateAnimation(float* AnimationPoint);
	void UserConstructionScript();
	void AnimTimeline__FinishedFunc();
	void AnimTimeline__UpdateFunc();
	void AnimTimeline__Pressed__EventFunc();
	void OnPhysicsRelease(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle);
	void SetInteractionDebugString(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, struct FString* DebugString);
	void Toggle_Widget(bool* Widget);
	void OnPhysicsPickup(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle);
	void Interact_2(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor);
	void Interact1(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor);
	void SetFocused(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, bool* bIsFocused);
	void Current_Target(class APawn** Pawn);
	void Clear_Target();
	void Interact(struct FKey* Key, class APawn** Pawn);
	void ExecuteUbergraph_BP_AndroidShieldlButton(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
