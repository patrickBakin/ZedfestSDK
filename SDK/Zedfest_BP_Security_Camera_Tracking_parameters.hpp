#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Scene capture activation
struct ABP_Security_Camera_Tracking_C_Scene_capture_activation_Params
{
	bool*                                              Activation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      Capture_texture;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

<<<<<<< HEAD
// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.OnRep_CameraShot?
struct ABP_Security_Camera_Tracking_C_OnRep_CameraShot__Params
{
};

=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.UserConstructionScript
struct ABP_Security_Camera_Tracking_C_UserConstructionScript_Params
{
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Scan Rot Timeline__FinishedFunc
struct ABP_Security_Camera_Tracking_C_Scan_Rot_Timeline__FinishedFunc_Params
{
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Scan Rot Timeline__UpdateFunc
struct ABP_Security_Camera_Tracking_C_Scan_Rot_Timeline__UpdateFunc_Params
{
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Alarm Delay__FinishedFunc
struct ABP_Security_Camera_Tracking_C_Alarm_Delay__FinishedFunc_Params
{
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Alarm Delay__UpdateFunc
struct ABP_Security_Camera_Tracking_C_Alarm_Delay__UpdateFunc_Params
{
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Security Alarm Interface
struct ABP_Security_Camera_Tracking_C_Security_Alarm_Interface_Params
{
	bool*                                              SendAlarm;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.MonitorCameraSwap
struct ABP_Security_Camera_Tracking_C_MonitorCameraSwap_Params
{
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.BndEvt__Viewcone_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Security_Camera_Tracking_C_BndEvt__Viewcone_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.SecurityCameraFakeTick
struct ABP_Security_Camera_Tracking_C_SecurityCameraFakeTick_Params
{
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ReceiveBeginPlay
struct ABP_Security_Camera_Tracking_C_ReceiveBeginPlay_Params
{
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ReceivePointDamage
struct ABP_Security_Camera_Tracking_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.BndEvt__Viewcone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Security_Camera_Tracking_C_BndEvt__Viewcone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.DisableCamera
struct ABP_Security_Camera_Tracking_C_DisableCamera_Params
{
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ReceiveRadialDamage
struct ABP_Security_Camera_Tracking_C_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ResetCamerasEvent
struct ABP_Security_Camera_Tracking_C_ResetCamerasEvent_Params
{
	bool*                                              Internmission;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

<<<<<<< HEAD
// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.DisableCameraRepEvent
struct ABP_Security_Camera_Tracking_C_DisableCameraRepEvent_Params
{
};

=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ExecuteUbergraph_BP_Security_Camera_Tracking
struct ABP_Security_Camera_Tracking_C_ExecuteUbergraph_BP_Security_Camera_Tracking_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
