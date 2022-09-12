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

// BlueprintGeneratedClass BP_Pawn.BP_Pawn_C
<<<<<<< HEAD
// 0x0339 (0x0A89 - 0x0750)
=======
// 0x0308 (0x0A58 - 0x0750)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
class ABP_Pawn_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
<<<<<<< HEAD
	class UWidgetComponent*                            Widget1;                                                  // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ParryBox;                                                 // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         HomingHSTarget;                                           // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           ReviveBox;                                                // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScreenIndicator_C*                          ScreenIndicator;                                          // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera1;                                                  // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         CameraBoom1;                                              // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           RagdollCapsuleComponent;                                  // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PunchStart;                                               // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryManager_C*                         InventoryManager;                                         // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        InteractionWidget;                                        // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class Ubp_ragdoll_component_C*                     bp_ragdoll_component;                                     // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BehaviorTriggerComponent_C*              BP_BehaviorTriggerComponent;                              // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         CameraBoom;                                               // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            _3Camera;                                                 // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HealthEmitterDestroyTimeline_NewTrack_0_FDCC7D254EFC4A7679C438ADEF319AD1;// 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    HealthEmitterDestroyTimeline__Direction_FDCC7D254EFC4A7679C438ADEF319AD1;// 0x07DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          HealthEmitterDestroyTimeline;                             // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_HoldButtonValue_AB523E0D4421BBB2CC9B83828BFC888B;// 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_AB523E0D4421BBB2CC9B83828BFC888B;   // 0x07EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_HoldButtonValue_52BCFCBA41983A6B36BFF795F1766708;// 0x07F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_52BCFCBA41983A6B36BFF795F1766708;   // 0x07FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_EF4C46AB411C1A52B020EA9F2B7844F4;   // 0x0808(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_EF4C46AB411C1A52B020EA9F2B7844F4;   // 0x080C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Camera_YawMax;                                            // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Camera_PitchMax;                                          // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRateCurrent;                                      // 0x0820(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleHalfHeight_Var;                                    // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleRadius_Var;                                        // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HeadRotation;                                             // 0x0834(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFalling_;                                               // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0841(0x0003) MISSED OFFSET
	struct FRotator                                    ControllerRotation;                                       // 0x0844(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Climb_;                                                   // 0x0850(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanIK_;                                                   // 0x0851(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0852(0x0002) MISSED OFFSET
	struct FVector                                     ClimbStartWorldLOcation;                                  // 0x0854(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ClimbEndWorldLOcation;                                    // 0x0860(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SprintZoom;                                               // 0x086C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Zooming;                                                  // 0x086D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x086E(0x0002) MISSED OFFSET
	float                                              MovingDirection;                                          // 0x0870(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingSpeed;                                              // 0x0874(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0878(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowSniperScope;                                          // 0x087C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCloaked;                                                // 0x087D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x087E(0x0002) MISSED OFFSET
	TArray<class UMaterialInterface*>                  SavedBodyMaterials;                                       // 0x0880(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	float                                              HealthCurrent;                                            // 0x0890(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDead;                                                   // 0x0894(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingAnims;                                           // 0x0895(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0896(0x0002) MISSED OFFSET
	class UW_WpnCompHUD_C*                             HUD;                                                      // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Crouch_Button_Down;                                       // 0x08A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sprint_Button_Down;                                       // 0x08A1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Jump_Button_Down;                                         // 0x08A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x08A3(0x0001) MISSED OFFSET
	struct FVector                                     CameraLoc;                                                // 0x08A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFiring;                                                 // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x08B1(0x0003) MISSED OFFSET
	float                                              Yaw;                                                      // 0x08B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmorCurrent;                                             // 0x08B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Stamina;                                                  // 0x08BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sprint_Stamina_Reduction;                                 // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Recharge_Stamina_Amount;                                  // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSprint_;                                               // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ragdolling;                                               // 0x08C9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x6];                                       // 0x08CA(0x0006) MISSED OFFSET
	class AActor*                                      Interact_Actor;                                           // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientZooming;                                            // 0x08D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientSprintButtonDown;                                   // 0x08DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x08DB(0x0001) MISSED OFFSET
	float                                              ClientSpeed;                                              // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientDirection;                                          // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x08E4(0x0004) MISSED OFFSET
	class ABP_Base_HordeController_C*                  HordeControllerRef;                                       // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AHeadNameWidget_C*                           HeadTextName;                                             // 0x08F0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_KeyCardPickup_C*                         BP_KeyCardPickup;                                         // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                KeyCard;                                                  // 0x0900(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldButtonValue;                                          // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABlueprint_Vehicle_C*                        Vehicle;                                                  // 0x0908(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerPulled_;                                           // 0x0910(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	float                                              AimRunSpeed;                                              // 0x0914(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x0918(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ShieldCurrent;                                            // 0x091C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FreeCameraOn_;                                            // 0x0920(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientFire_;                                              // 0x0921(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetCamera_;                                             // 0x0922(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LobbyClosed_;                                             // 0x0923(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	TArray<class UTexture2D*>                          BloodTextures;                                            // 0x0928(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_KeyCardPickup_C*                         PickupObjectRef;                                          // 0x0938(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               CharacterMeshRef;                                         // 0x0940(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HealthRegenAmount;                                        // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class UAudioComponent*                             CharWindAudio;                                            // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              WindFloat;                                                // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	struct FEffects                                    Effects;                                                  // 0x0960(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     SpecialItemVector;                                        // 0x0A08(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SpecialItemRotator;                                       // 0x0A14(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_SpecialItem_Parent_C*                    SpecialItemDummy;                                         // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpecialItemBP;                                            // 0x0A28(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShooting_;                                              // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ItemSpecialCanPlace_;                                     // 0x0A31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MouseWheelCooldown;                                       // 0x0A32(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartMovement;                                            // 0x0A33(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReloadCooldown;                                           // 0x0A34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NumberSlotCooldown;                                       // 0x0A35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x0A36(0x0002) MISSED OFFSET
	float                                              MouseSensitivity;                                         // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowCrosshair_;                                           // 0x0A3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Emoting_;                                                 // 0x0A3D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Stun_;                                                    // 0x0A3E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sliding_;                                                 // 0x0A3F(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientFirstPerson_;                                       // 0x0A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstPerson_;                                             // 0x0A41(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x0A42(0x0002) MISSED OFFSET
	float                                              HealthRemoveAmount;                                       // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamageOverTimeActive_;                                    // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BodyRoll;                                                 // 0x0A49(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x0A4A(0x0002) MISSED OFFSET
	int                                                SlidingSeconds;                                           // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FieldOfViewFloat;                                         // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0A54(0x0004) MISSED OFFSET
	class ABP_KeyCardPickup_C*                         LocalKeycardRef;                                          // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanPlayerBeDamaged_;                                      // 0x0A60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NukerPerk12Selected_;                                     // 0x0A61(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NukerPerk13Selected_;                                     // 0x0A62(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NukerPerk15Selected_;                                     // 0x0A63(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ToggleToAim_;                                             // 0x0A64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnRight_;                                               // 0x0A65(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnLeft_;                                                // 0x0A66(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShootDelay;                                               // 0x0A67(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RagdollDelay;                                             // 0x0A68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x0A69(0x0007) MISSED OFFSET
	class AActor*                                      HomeMissileTarget;                                        // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnArmedAim;                                               // 0x0A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0A79(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    HealthParticle;                                           // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ClientParry;                                              // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
=======
	class UBillboardComponent*                         HomingHSTarget;                                           // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           ReviveBox;                                                // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScreenIndicator_C*                          ScreenIndicator;                                          // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera1;                                                  // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         CameraBoom1;                                              // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           RagdollCapsuleComponent;                                  // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PunchStart;                                               // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryManager_C*                         InventoryManager;                                         // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        InteractionWidget;                                        // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class Ubp_ragdoll_component_C*                     bp_ragdoll_component;                                     // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BehaviorTriggerComponent_C*              BP_BehaviorTriggerComponent;                              // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         CameraBoom;                                               // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            _3Camera;                                                 // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_HoldButtonValue_AB523E0D4421BBB2CC9B83828BFC888B;// 0x07C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_AB523E0D4421BBB2CC9B83828BFC888B;   // 0x07C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_HoldButtonValue_52BCFCBA41983A6B36BFF795F1766708;// 0x07D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_52BCFCBA41983A6B36BFF795F1766708;   // 0x07D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_EF4C46AB411C1A52B020EA9F2B7844F4;   // 0x07E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_EF4C46AB411C1A52B020EA9F2B7844F4;   // 0x07E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Camera_YawMax;                                            // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Camera_PitchMax;                                          // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRateCurrent;                                      // 0x07F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleHalfHeight_Var;                                    // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleRadius_Var;                                        // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HeadRotation;                                             // 0x080C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFalling_;                                               // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0819(0x0003) MISSED OFFSET
	struct FRotator                                    ControllerRotation;                                       // 0x081C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Climb_;                                                   // 0x0828(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanIK_;                                                   // 0x0829(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x082A(0x0002) MISSED OFFSET
	struct FVector                                     ClimbStartWorldLOcation;                                  // 0x082C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ClimbEndWorldLOcation;                                    // 0x0838(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SprintZoom;                                               // 0x0844(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Zooming;                                                  // 0x0845(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0846(0x0002) MISSED OFFSET
	float                                              MovingDirection;                                          // 0x0848(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingSpeed;                                              // 0x084C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0850(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowSniperScope;                                          // 0x0854(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCloaked;                                                // 0x0855(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0856(0x0002) MISSED OFFSET
	TArray<class UMaterialInterface*>                  SavedBodyMaterials;                                       // 0x0858(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	float                                              HealthCurrent;                                            // 0x0868(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDead;                                                   // 0x086C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingAnims;                                           // 0x086D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x086E(0x0002) MISSED OFFSET
	class UW_WpnCompHUD_C*                             HUD;                                                      // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Crouch_Button_Down;                                       // 0x0878(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sprint_Button_Down;                                       // 0x0879(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Jump_Button_Down;                                         // 0x087A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x087B(0x0001) MISSED OFFSET
	struct FVector                                     CameraLoc;                                                // 0x087C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFiring;                                                 // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0889(0x0003) MISSED OFFSET
	float                                              Yaw;                                                      // 0x088C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmorCurrent;                                             // 0x0890(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	class ABP_Store_C*                                 BP_Store;                                                 // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Stamina;                                                  // 0x08A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sprint_Stamina_Reduction;                                 // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Recharge_Stamina_Amount;                                  // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSprint_;                                               // 0x08AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ragdolling;                                               // 0x08AD(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x08AE(0x0002) MISSED OFFSET
	class AActor*                                      Interact_Actor;                                           // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientZooming;                                            // 0x08B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientSprintButtonDown;                                   // 0x08BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x08BB(0x0001) MISSED OFFSET
	float                                              ClientSpeed;                                              // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientDirection;                                          // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	class ABP_Base_HordeController_C*                  HordeControllerRef;                                       // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AHeadNameWidget_C*                           HeadTextName;                                             // 0x08D0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_KeyCardPickup_C*                         BP_KeyCardPickup;                                         // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                KeyCard;                                                  // 0x08E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldButtonValue;                                          // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABlueprint_Vehicle_C*                        Vehicle;                                                  // 0x08E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerPulled_;                                           // 0x08F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x08F1(0x0003) MISSED OFFSET
	float                                              AimRunSpeed;                                              // 0x08F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x08F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ShieldCurrent;                                            // 0x08FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FreeCameraOn_;                                            // 0x0900(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientFire_;                                              // 0x0901(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetCamera_;                                             // 0x0902(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LobbyClosed_;                                             // 0x0903(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0904(0x0004) MISSED OFFSET
	TArray<class UTexture2D*>                          BloodTextures;                                            // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_KeyCardPickup_C*                         PickupObjectRef;                                          // 0x0918(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               CharacterMeshRef;                                         // 0x0920(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HealthRegenAmount;                                        // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	class UAudioComponent*                             CharWindAudio;                                            // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              WindFloat;                                                // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	struct FEffects                                    Effects;                                                  // 0x0940(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     SpecialItemVector;                                        // 0x09E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SpecialItemRotator;                                       // 0x09F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_SpecialItem_Parent_C*                    SpecialItemDummy;                                         // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpecialItemBP;                                            // 0x0A08(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShooting_;                                              // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ItemSpecialCanPlace_;                                     // 0x0A11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MouseWheelCooldown;                                       // 0x0A12(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartMovement;                                            // 0x0A13(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReloadCooldown;                                           // 0x0A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NumberSlotCooldown;                                       // 0x0A15(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x0A16(0x0002) MISSED OFFSET
	float                                              MouseSensitivity;                                         // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowCrosshair_;                                           // 0x0A1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Emoting_;                                                 // 0x0A1D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Stun_;                                                    // 0x0A1E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sliding_;                                                 // 0x0A1F(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientFirstPerson_;                                       // 0x0A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstPerson_;                                             // 0x0A21(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x0A22(0x0002) MISSED OFFSET
	float                                              HealthRemoveAmount;                                       // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamageOverTimeActive_;                                    // 0x0A28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BodyRoll;                                                 // 0x0A29(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x0A2A(0x0002) MISSED OFFSET
	int                                                SlidingSeconds;                                           // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FieldOfViewFloat;                                         // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0A34(0x0004) MISSED OFFSET
	class ABP_KeyCardPickup_C*                         LocalKeycardRef;                                          // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanPlayerBeDamaged_;                                      // 0x0A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NukerPerk12Selected_;                                     // 0x0A41(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NukerPerk13Selected_;                                     // 0x0A42(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NukerPerk15Selected_;                                     // 0x0A43(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ToggleToAim_;                                             // 0x0A44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnRight_;                                               // 0x0A45(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnLeft_;                                                // 0x0A46(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShootDelay;                                               // 0x0A47(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RagdollDelay;                                             // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	class AActor*                                      HomeMissileTarget;                                        // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pawn.BP_Pawn_C");
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
	void GetChar_SpeedAndDirectionClient(float* Speed, float* Direction);
	void GetChar_Mesh(class USkeletalMeshComponent** SkMesh);
	void GetChar_CurrentWeapon(class AWeaponFirearmBase_C** CurrentWeaponReference);
	void GetChar_SpeedAndDirection(float* Speed, float* Direction);
	void GetChar_IsDead(bool* IsDead);
	void GetChar_IsCrouching(bool* IsCrouching);
	void GetChar_IsJumping(bool* IsJumping);
	void GetChar_IsPlayAnim(bool* IsPlayAnim);
	void GetChar_PitchAndYaw(float* Pitch, float* Yaw);
	void GetChar_DeathAnimNumber(int* NumberOfDeathAnim);
	void GetChar_IsSprinting(bool* IsSprinting);
	void GetChar_HasCharWeaponsComponent(bool* Result);
<<<<<<< HEAD
	void GetChar_CharacterWeaponsComponent(int* CWC_Reference);
=======
	void GetChar_CharacterWeaponsComponent(class UAC_CharacterWeapons_C** CWC_Reference);
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void CWC_GetHUD(class UW_WpnCompHUD_C** HUD_Reference);
	void GetChar_CurrentCamera(class UCameraComponent** CurrentCamera, bool* WeaponCamActive);
	void GetChar_IsCloaked(bool* Cloak);
	void GetChar_CurrentHealth(float* CurrentHP);
	void GetChar_IsZooming(bool* Zoom);
<<<<<<< HEAD
	void OnRep_CharacterMeshRef();
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void CheckSwimming();
	void GetAngleOfSurface(float* Angle);
	void UpdatingCharacterPhysics(class UObject** InputPin);
	void OnRep_ShieldCurrent();
	void OnRep_KeyCard();
	void OnRep_IsDead();
	void CreateHeadText();
	void OnRep_ClientPitch();
	void OnRep_ClientMovingSpeed();
	void OnRep_ClientMovingDirection();
	void OnRep_Ragdolling();
	void OnRep_GrenadeCurrent();
	void OnRep_Stamina();
	void OnRep_ArmorCurrent();
	void OnRep_ShowSniperScope();
	void OnRep_HealthCurrent();
	void OnRep_Crouch_Button_Down();
	void F_GetFVectorAndRightVector(struct FVector* ForwardVector, struct FVector* RightVector);
	void F_GetOverlapResult(class UObject** Object, class UPrimitiveComponent** Comp, bool* CanRagdol_, struct FVector* Direction);
	void F_GetHitResult(class UPrimitiveComponent** Component, struct FHitResult* Hit, bool* CanRagdol_, struct FVector* Location, float* BodyVelocity);
	void F_GetLookRotation();
<<<<<<< HEAD
	void HealthEmitterDestroyTimeline__FinishedFunc();
	void HealthEmitterDestroyTimeline__UpdateFunc();
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InpActEvt_ShootButton_K2Node_InputActionEvent_34(struct FKey* Key);
	void InpActEvt_ShootButton_K2Node_InputActionEvent_33(struct FKey* Key);
	void InpActEvt_AimButton_K2Node_InputActionEvent_32(struct FKey* Key);
	void InpActEvt_AimButton_K2Node_InputActionEvent_31(struct FKey* Key);
	void InpActEvt_RagdollButton_K2Node_InputActionEvent_30(struct FKey* Key);
	void InpActEvt_AimButton_K2Node_InputActionEvent_29(struct FKey* Key);
	void InpActEvt_AimButton_K2Node_InputActionEvent_28(struct FKey* Key);
	void OnFailure_5299E62D49F62E94D70774B290F4BC51(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_5299E62D49F62E94D70774B290F4BC51(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_F7C563754A811AC42B68CFABEF895E3D();
	void OnSuccess_F7C563754A811AC42B68CFABEF895E3D();
	void InpActEvt_PunchWeaponButton_K2Node_InputActionEvent_27(struct FKey* Key);
	void InpActEvt_ShootButton_K2Node_InputActionEvent_26(struct FKey* Key);
	void InpActEvt_Inventory6Button_K2Node_InputActionEvent_25(struct FKey* Key);
	void InpActEvt_Inventory5Button_K2Node_InputActionEvent_24(struct FKey* Key);
	void InpActEvt_Inventory4Button_K2Node_InputActionEvent_23(struct FKey* Key);
	void InpActEvt_Inventory3Button_K2Node_InputActionEvent_22(struct FKey* Key);
	void InpActEvt_Inventory2Button_K2Node_InputActionEvent_21(struct FKey* Key);
	void InpActEvt_Inventory1Button_K2Node_InputActionEvent_20(struct FKey* Key);
	void InpActEvt_ShootButton_K2Node_InputActionEvent_19(struct FKey* Key);
	void InpActEvt_ShootButton_K2Node_InputActionEvent_18(struct FKey* Key);
	void InpActEvt_DropWeapon_K2Node_InputActionEvent_17(struct FKey* Key);
	void InpActEvt_Previous_Inventory_Slot_K2Node_InputActionEvent_16(struct FKey* Key);
	void InpActEvt_Next_Inventory_Slot_K2Node_InputActionEvent_15(struct FKey* Key);
	void InpActEvt_HolsterWeaponButton_K2Node_InputActionEvent_14(struct FKey* Key);
	void InpActEvt_InteractButton_K2Node_InputActionEvent_13(struct FKey* Key);
	void InpActEvt_InteractButton_K2Node_InputActionEvent_12(struct FKey* Key);
	void InpActEvt_Reload_K2Node_InputActionEvent_11(struct FKey* Key);
	void InpActEvt_ShootButton_K2Node_InputActionEvent_10(struct FKey* Key);
	void InpActEvt_ShootButton_K2Node_InputActionEvent_9(struct FKey* Key);
	void InpActEvt_InteractButton_K2Node_InputActionEvent_8(struct FKey* Key);
	void InpActEvt_InteractButton_K2Node_InputActionEvent_7(struct FKey* Key);
	void OnFailure_ADDB7E9F409496263BBCF98304208275();
	void OnSuccess_ADDB7E9F409496263BBCF98304208275();
	void OnFailure_7C311DC24CBEA4EAF648D99BEC01A75B(int* LeaderboardValue);
	void OnSuccess_7C311DC24CBEA4EAF648D99BEC01A75B(int* LeaderboardValue);
	void OnFailure_C5CF4D5E41B77CB35AD8F0826FEC5C8D(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_C5CF4D5E41B77CB35AD8F0826FEC5C8D(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_D196E57F409502B9488A1D8EC0884901();
	void OnSuccess_D196E57F409502B9488A1D8EC0884901();
	void OnFailure_92D3060B49438364A7B3209551BB9598();
	void OnSuccess_92D3060B49438364A7B3209551BB9598();
	void OnFailure_BFF290744CDE8E9F28B9A192BAEB9B53(int* LeaderboardValue);
	void OnSuccess_BFF290744CDE8E9F28B9A192BAEB9B53(int* LeaderboardValue);
	void InpActEvt_Jump_K2Node_InputActionEvent_6(struct FKey* Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_5(struct FKey* Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_1(struct FKey* Key);
<<<<<<< HEAD
	void BndEvt__HeadFalling_K2Node_ComponentBoundEvent_648_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void StopMeleeTrace();
	void ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_);
=======
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void ServerComponentHit(class UPrimitiveComponent** Hit_Component, class UPrimitiveComponent** Other_Comp, struct FHitResult* Hit);
	void PlayLandedSound();
	void ReceiveBeginPlay();
	void PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD);
	void HealthAddInstant(float* Amount);
	void DispenserHealth();
	void EventAddHP(float* Amount);
	void DestroyHeadText();
	void SetSkeletalMeshesAll(class USkeletalMesh** Mesh);
	void SetSkeletalMeshesServer(class USkeletalMesh** Mesh);
	void TimerEvent();
	void LobbyClosed();
	void LobbyCameraTimer();
	void LobbyCamera();
	void CustomEvent_1();
	void HideVisibilityHeadTextSelf();
	void LobbyClosedServer();
	void OnDestroyed_Event_1(class AActor** DestroyedActor);
<<<<<<< HEAD
	void WPN_CantShoot();
	void CWC_SwitchCamera();
	void WPN_SetWeaponToInteract(int* WeaponReference, bool* AutoPickUp);
=======
	void EnterFPMode();
	void SetFirstPersonEvent(bool* FirstPerson_);
	void BndEvt__HeadFalling_K2Node_ComponentBoundEvent_648_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void EventRemoveHPOverTime(float* Amount);
	void RemoveEvent();
	void DecreaseHpOverTimeClient(bool* Blur_);
	void ExpandingGroundEvent(float* DamageAmount);
<<<<<<< HEAD
	void HealthEmitterEvent(bool* Destroy_);
	void SetCharacterMeshEvent();
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void ClimbLocation(struct FVector* Start, struct FVector* End);
	void ClimbEnd();
	void ClimbRelease();
	void Server_HeadRotation();
	void StopHomingTrace();
	void RagdollTick();
	void BndEvt__bp_ragdoll_component_K2Node_ComponentBoundEvent_1_ragdoll_updated_client__DelegateSignature(bool* Init, bool* is_fatal, bool* recover_start, bool* recover_end);
<<<<<<< HEAD
	void AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType);
	void ParryAimCancelEvent(bool* IsBlocking_);
	void StopZoomEvent();
	void WPN_Recoil(float* Pitch, float* Yaw);
	void CWC_RefreshWeaponInHUD();
	void PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference);
	void StartAimTimer();
	void Toggle_Widget(bool* Widget);
=======
	void StopZoomEvent();
	void StartAimTimer();
	void ShootButtonHoldEvent();
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void StartStopAim();
	void MulticastAiming(bool* IsAiming);
	void ServerAiming(bool* IsAiming);
	void StopTurnsEvent();
	void CustomEvent();
	void TurnLeftEventOff();
	void TurnRightEventOff();
	void TurnLeftEventOn();
	void TurnRightEventOn();
	void CustomEvent_2();
	void CustomEvent_12();
	void Custom_Direction_Event();
	void CustomPitchEvent();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244(float* AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181(float* AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float* AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float* AxisValue);
	void SwitchingClassClientEvent(bool* PerkSwitch_);
	void SwitchingClassFromStoreEvent(bool* PerkSwitch_);
	void AddShieldClient();
	void RefillAmmoFromDispenserEtc(class UClass** Ammo, int* Amount, bool* FillUpFull_, struct FString* WeaponName, int* Bar_Selection);
	void BuySpecialItemFromStoreEvent(class UClass** SpecialItem);
	void AmmoSoundMulticast(class USoundBase** Sound_to_play, bool* Armor_);
	void RefilFragsFromStoreEvent(class UClass** Throwable, bool* FillUpFull_);
	void BuyMeleeFromStoreEvent(class UClass** weapon);
	void SellWeapon(int* Index);
	void BuyArmorFromStoreEvent();
	void BuyFragsFromStoreEvent(class UClass** Throwable);
	void BuyAmmoFromStoreEvent(class UClass** Ammo, int* Amount, bool* FillUpFull_, struct FString* WeaponName, int* Bar_Selection);
	void BuyWeaponFromStoreEvent(class UClass** weapon, bool* Primary_);
	void BuyHPFromStoreEvent(class UClass** Armor);
	void PlaceSpecialItemMulticast(struct FVector* NewParam);
<<<<<<< HEAD
=======
	void StopMeleeTrace();
	void ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_);
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void StopSpecialItemEvent();
	void SpecialItemEvent(class UClass** SpecialItem);
	void SpecialItemTrace();
	void PlaceSpecialItemServer();
<<<<<<< HEAD
	void BndEvt__ParryBox_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BndEvt__ParryBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void SlidePush();
	void ClientGetUpFromSlide();
	void ReceiveTick(float* DeltaSeconds);
	void GetUpFromSlideMulticast();
	void SlidingEventMulticast();
	void SlidingEvent();
	void EventMeleeSoundAll();
	void MeleeDamage(bool* MeleeWithWeapon_);
	void MeleeWeaponReleaseEvent();
=======
	void WPN_CantShoot();
	void SlidePush();
	void ClientGetUpFromSlide();
	void ReceiveTick(float* DeltaSeconds);
	void CWC_SwitchCamera();
	void GetUpFromSlideMulticast();
	void SlidingEventMulticast();
	void SlidingEvent();
	void WPN_SetWeaponToInteract(class ABPA_ParentWeapon_C** WeaponReference, bool* AutoPickUp);
	void AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType);
	void WPN_Recoil(float* Pitch, float* Yaw);
	void CWC_RefreshWeaponInHUD();
	void EventMeleeSoundAll();
	void MeleeDamage(bool* MeleeWithWeapon_);
	void PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference);
	void Toggle_Widget(bool* Widget);
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void HolsterWhenDeadEvent();
	void CustomEvent_3();
	void ReviveMovementMode(bool* Walk_);
	void StopInteractBarEvent();
	void StartSprintEvent();
	void ClientInteract();
	void Server_Interact(struct FKey* Key);
	void DestroyPickupObjectRefEvent();
	void PlaceraPickup(class UStaticMeshComponent** Mesh);
	void KeyCardPickup(class ABP_KeyCardPickup_C** Mesh);
	void SetFreeCamera(bool* FreeCameraOn_);
	void Interact(struct FKey* Key, class APawn** Pawn);
	void Clear_Target();
	void Current_Target(class APawn** Pawn);
	void ClientDeathStatisticsEvent();
	void DamageSoundMulticast();
	void DecreaseHPEvent();
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void SaveCharacter();
	void Render_Depth(bool* Dead_);
	void CommitSuicide();
	void RespawnChar();
	void DIEE();
	void OnLanded(struct FHitResult* Hit);
	void RollForwardMulticastEvent();
	void RollForwardServerEvent();
	void JumpOnAll(bool* SetJump);
	void Jumping(bool* SetJump);
	void BeginSprintPowerUp();
	void CheckIfStandingStill();
	void StopSprintEvent();
	void SprintingMulticast(bool* Sprint);
	void ClientSprint();
	void SprintTimer();
	void Sprinting(bool* SetSprint);
	void UpdateStamina(float* Stamina);
	void InterruptTauntMulticast();
	void InterruptTaunt();
	void DeathPlayAnimClient(class UAnimMontage** TauntAnim, bool* Dead_);
	void EventPlayTauntAnimClient(class UAnimMontage** TauntAnim);
	void EventPlayTauntAnim(class UAnimMontage** TauntAnim, bool* Stun_);
	void AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate);
	void AnimOnClients(class UAnimMontage** AnimMont, float* PlayRate);
	void AnimOnServer(class UAnimMontage** AnimMont, float* PlayRate);
	void ReviveCrouching(bool* Finished_);
	void CrouchingMulticast(bool* Crouch);
	void Crouching(bool* SetCrouch);
	void CloakOnAllClients(int* ClassInt);
	void EventCloakServer(int* ClassInt);
<<<<<<< HEAD
	void SetFirstPersonEvent(bool* FirstPerson_);
	void EnterFPMode();
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void ExecuteUbergraph_BP_Pawn(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
