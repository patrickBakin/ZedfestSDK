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

// BlueprintGeneratedClass BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C
// 0x017C (0x08CC - 0x0750)
class ABP_SmartDrone_Pawn_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Aim_EndTrace;                                             // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm_Camera;                                         // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpringArm_CameraRoot;                                     // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere_AimLaser_end;                                      // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_SmartDrone_AimLaser_line;                              // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_SmartDrone_Missile_BL;                                 // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_SmartDrone_Missile_BR;                                 // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_SmartDrone_Missile_TL;                                 // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_SmartDrone_Missile_TR;                                 // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight_FaceGlowR;                                     // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight_FaceGlowL;                                     // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight_FaceGlow;                                       // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm_Mesh;                                           // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight_back;                                          // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Scale;                                                    // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAlign_TraceDistance;                                 // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slope_Rotation_Interp_Speed;                              // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamRotationSpeed;                                         // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveRight;                                                // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveForward;                                              // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Acceleration;                                             // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       Slope_Debug;                                              // 0x07EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Run;                                                      // 0x07ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07EE(0x0002) MISSED OFFSET
	float                                              Speed;                                                    // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunAcceleration;                                          // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumSlopeAngle;                                        // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Attack;                                                   // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	float                                              InputAxis_MoveForward;                                    // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputAxis_MoveRight;                                      // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Glowing_PointLight;                                       // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0809(0x0003) MISSED OFFSET
	float                                              YawLastTick;                                              // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationRate;                                             // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeed_Multiplier;                                      // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Idle_Time_Before_Anim;                                    // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Mesh_Velocity_Location;                                   // 0x0824(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Mesh_Velocity_Rough;                                      // 0x0830(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Mesh_Velocity_Smooth;                                     // 0x083C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Camera_SpringArm_TargetLength;                            // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	class USmartDrone_AnimBlueprint_C*                 AnimBP;                                                   // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Missile_Barrel;                                           // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RapidFire_Delay_Speed;                                    // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Bullet_ActorsToIgnore;                                    // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    FaceMaterial;                                             // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Face_Type;                                                // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Missile_Reload_Delay;                                     // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AttackAnimationType;                                      // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delay_Until_Happy_Face;                                   // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Camera_SpringArm_InitialPitch;                            // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PowerfulShot_DamageToCause;                               // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RapidFire_DamageToCause;                                  // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Missile_DamageToCause;                                    // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Fire_Pressed;                                             // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MissileFire_Pressed;                                      // 0x0899(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Missiles_Reloading;                                       // 0x089A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Missiles_HatchOpenMode;                                   // 0x089B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Missiles_AvailableToFire;                                 // 0x089C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	float                                              Camera_Rotation_Lag_Speed;                                // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LaserPointer_HitSurface;                                  // 0x08A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x08A5(0x0003) MISSED OFFSET
	struct FVector                                     LaserPointer_Loc;                                         // 0x08A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaserPointer_Scale;                                       // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    GunRotation;                                              // 0x08B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CameraFollowing_;                                         // 0x08C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x08C5(0x0003) MISSED OFFSET
	float                                              Camera_Position_Lag_Speed;                                // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C");
		return ptr;
	}


	void Update_Face_Selection();
	void Interpolate_Mesh_Velocity();
	void Interpolate_Camera_ArmLength();
	void Input_LookUp(float* Axis);
	void AttachMesh_to_SpringArm();
	void Rotate_Character(float* InputPin);
	void Move_Strafe(float* Value);
	void If_Moving_Stop_AttackAnimation(float* Movement_Input);
	void Move_Forward(float* Value);
	void Adjust_Walk_Speed();
	void Promote_AnimBP_to_Variable();
	void Pawn_Jump();
	void AttachPointLight_to_MeshBone();
	void UserConstructionScript();
	void InpActEvt_CameraToggle_K2Node_InputActionEvent_15(struct FKey* Key);
	void InpActEvt_Fire_Missiles_K2Node_InputActionEvent_14(struct FKey* Key);
	void InpActEvt_Fire_Missiles_K2Node_InputActionEvent_13(struct FKey* Key);
	void InpActEvt_Fire_Alt_K2Node_InputActionEvent_12(struct FKey* Key);
	void InpActEvt_Melee_K2Node_InputActionEvent_11(struct FKey* Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_10(struct FKey* Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_9(struct FKey* Key);
	void InpActEvt_OpenFront_K2Node_InputActionEvent_8(struct FKey* Key);
	void InpActEvt_OpenSides_K2Node_InputActionEvent_7(struct FKey* Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_6(struct FKey* Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_5(struct FKey* Key);
	void InpActEvt_Run_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_Run_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_Decrease_Speed_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_Increase_Speed_K2Node_InputActionEvent_1(struct FKey* Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Event_Reset_InactivityTimer();
	void Inactivity_Timer();
	void Event_PawnActive();
	void InpAxisEvt_DecreaseCamDistance_K2Node_InputAxisEvent_1123(float* AxisValue);
	void InpAxisEvt_IncreaseCamDistance_K2Node_InputAxisEvent_1112(float* AxisValue);
	void Cancel_Attack_Anim();
	void Event_OpenSides();
	void Event_OpenFront();
	void Event_ForceTurn();
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_258(float* AxisValue);
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_191(float* AxisValue);
	void InpAxisEvt_Rotate_K2Node_InputAxisEvent_117(float* AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_304(float* AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_40(float* AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_37(float* AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_25(float* AxisValue);
	void ExecuteUbergraph_BP_SmartDrone_Pawn(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
