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

// BlueprintGeneratedClass BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C
<<<<<<< HEAD
// 0x00CE (0x03FE - 0x0330)
=======
// 0x00CD (0x03FD - 0x0330)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
class ABP_Security_Camera_Tracking_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Camera_base;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Scanner;                                            // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Viewcone;                                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Camera;                                                   // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Alarm_Delay_Delay_Duration_D105A900420FE5044E28169B8164BA5A;// 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Alarm_Delay__Direction_D105A900420FE5044E28169B8164BA5A;  // 0x0364(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Alarm_Delay;                                              // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Scan_Rot_Timeline_scan_rotation_DB1E8CE441D991A3AFD277B6343D6482;// 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Scan_Rot_Timeline__Direction_DB1E8CE441D991A3AFD277B6343D6482;// 0x0374(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Scan_Rot_Timeline;                                        // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Camera_Max_Yaw;                                           // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasTarget;                                                // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	float                                              Camera_Pitch;                                             // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Target_Lost;                                              // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	struct FRotator                                    Default_Rotation;                                         // 0x0390(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Viewcone_Material;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Lens_Material;                                            // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Test_Alarm_Material_Settings;                             // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class AActor*                                      Player;                                                   // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Alarm_Interactors;                                        // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               In_Range;                                                 // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Music_Change;                                             // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x03CA(0x0006) MISSED OFFSET
	class USoundBase*                                  Scanner_Soundcue;                                         // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Scanner_Alarm_Soundcue;                                   // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Scanner_Reset_Soundcue;                                   // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraHealth;                                             // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class ABP_CameraSpawnPoint_C*                      CameraSpawnPoint;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                CameraNumber;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShotDown_;                                                // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
<<<<<<< HEAD
	bool                                               CameraShot_;                                              // 0x03FD(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Security_Camera_Tracking.BP_Security_Camera_Tracking_C");
		return ptr;
	}


	void Scene_capture_activation(bool* Activation, class UTextureRenderTarget2D** Capture_texture);
<<<<<<< HEAD
	void OnRep_CameraShot_();
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void UserConstructionScript();
	void Scan_Rot_Timeline__FinishedFunc();
	void Scan_Rot_Timeline__UpdateFunc();
	void Alarm_Delay__FinishedFunc();
	void Alarm_Delay__UpdateFunc();
	void Security_Alarm_Interface(bool* SendAlarm);
	void MonitorCameraSwap();
	void BndEvt__Viewcone_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void SecurityCameraFakeTick();
	void ReceiveBeginPlay();
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void BndEvt__Viewcone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void DisableCamera();
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void ResetCamerasEvent(bool* Internmission);
<<<<<<< HEAD
	void DisableCameraRepEvent();
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void ExecuteUbergraph_BP_Security_Camera_Tracking(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
