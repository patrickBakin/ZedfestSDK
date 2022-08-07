// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Scene capture activation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Activation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  Capture_texture                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Security_Camera_Tracking_C::Scene_capture_activation(bool* Activation, class UTextureRenderTarget2D** Capture_texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Scene capture activation");

	ABP_Security_Camera_Tracking_C_Scene_capture_activation_Params params;
	params.Activation = Activation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Capture_texture != nullptr)
		*Capture_texture = params.Capture_texture;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Security_Camera_Tracking_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.UserConstructionScript");

	ABP_Security_Camera_Tracking_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Scan Rot Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_Security_Camera_Tracking_C::Scan_Rot_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Scan Rot Timeline__FinishedFunc");

	ABP_Security_Camera_Tracking_C_Scan_Rot_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Scan Rot Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_Security_Camera_Tracking_C::Scan_Rot_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Scan Rot Timeline__UpdateFunc");

	ABP_Security_Camera_Tracking_C_Scan_Rot_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Alarm Delay__FinishedFunc
// (BlueprintEvent)

void ABP_Security_Camera_Tracking_C::Alarm_Delay__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Alarm Delay__FinishedFunc");

	ABP_Security_Camera_Tracking_C_Alarm_Delay__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Alarm Delay__UpdateFunc
// (BlueprintEvent)

void ABP_Security_Camera_Tracking_C::Alarm_Delay__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Alarm Delay__UpdateFunc");

	ABP_Security_Camera_Tracking_C_Alarm_Delay__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Security Alarm Interface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SendAlarm                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Security_Camera_Tracking_C::Security_Alarm_Interface(bool* SendAlarm)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.Security Alarm Interface");

	ABP_Security_Camera_Tracking_C_Security_Alarm_Interface_Params params;
	params.SendAlarm = SendAlarm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.MonitorCameraSwap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Security_Camera_Tracking_C::MonitorCameraSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.MonitorCameraSwap");

	ABP_Security_Camera_Tracking_C_MonitorCameraSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.BndEvt__Viewcone_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Security_Camera_Tracking_C::BndEvt__Viewcone_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.BndEvt__Viewcone_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Security_Camera_Tracking_C_BndEvt__Viewcone_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.SecurityCameraFakeTick
// (BlueprintCallable, BlueprintEvent)

void ABP_Security_Camera_Tracking_C::SecurityCameraFakeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.SecurityCameraFakeTick");

	ABP_Security_Camera_Tracking_C_SecurityCameraFakeTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Security_Camera_Tracking_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ReceiveBeginPlay");

	ABP_Security_Camera_Tracking_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Security_Camera_Tracking_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ReceivePointDamage");

	ABP_Security_Camera_Tracking_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.BndEvt__Viewcone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Security_Camera_Tracking_C::BndEvt__Viewcone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.BndEvt__Viewcone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Security_Camera_Tracking_C_BndEvt__Viewcone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.DisableCamera
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Security_Camera_Tracking_C::DisableCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.DisableCamera");

	ABP_Security_Camera_Tracking_C_DisableCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Security_Camera_Tracking_C::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ReceiveRadialDamage");

	ABP_Security_Camera_Tracking_C_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ResetCamerasEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Internmission                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Security_Camera_Tracking_C::ResetCamerasEvent(bool* Internmission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ResetCamerasEvent");

	ABP_Security_Camera_Tracking_C_ResetCamerasEvent_Params params;
	params.Internmission = Internmission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ExecuteUbergraph_BP_Security_Camera_Tracking
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Security_Camera_Tracking_C::ExecuteUbergraph_BP_Security_Camera_Tracking(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C.ExecuteUbergraph_BP_Security_Camera_Tracking");

	ABP_Security_Camera_Tracking_C_ExecuteUbergraph_BP_Security_Camera_Tracking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
