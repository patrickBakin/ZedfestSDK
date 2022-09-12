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
//Functions
//---------------------------------------------------------------------------

// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_Process_Point
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_Process_Point(struct FVector* Location, struct FRotator* Rotation, bool* AutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_Process_Point");

	ABP_DENT_MASTER_C_DENT_Process_Point_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.AutoDestroy = AutoDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_Process_Radial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_Process_Radial(struct FVector* Location, struct FRotator* Rotation, bool* AutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_Process_Radial");

	ABP_DENT_MASTER_C_DENT_Process_Radial_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.AutoDestroy = AutoDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_OnFracture_Particle_Spawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAutoDestroy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_OnFracture_Particle_Spawn(struct FVector* Location, struct FRotator* Rotation, bool* bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_OnFracture_Particle_Spawn");

	ABP_DENT_MASTER_C_DENT_OnFracture_Particle_Spawn_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_OnFracture_Explode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         BaseDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DamageRadius                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedByController         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDoFullDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel>* DamagePreventionChannel        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_OnFracture_Explode(float* BaseDamage, float* DamageRadius, class UClass** DamageTypeClass, class AActor** DamageCauser, class AController** InstigatedByController, bool* bDoFullDamage, TEnumAsByte<ECollisionChannel>* DamagePreventionChannel, float* Strength, struct FVector* Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_OnFracture_Explode");

	ABP_DENT_MASTER_C_DENT_OnFracture_Explode_Params params;
	params.BaseDamage = BaseDamage;
	params.DamageRadius = DamageRadius;
	params.DamageTypeClass = DamageTypeClass;
	params.DamageCauser = DamageCauser;
	params.InstigatedByController = InstigatedByController;
	params.bDoFullDamage = bDoFullDamage;
	params.DamagePreventionChannel = DamagePreventionChannel;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_OnFracture_Action_MainCall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                HitPoints                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_OnFracture_Action_MainCall(struct FVector* HitPoints, struct FRotator* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_OnFracture_Action_MainCall");

	ABP_DENT_MASTER_C_DENT_OnFracture_Action_MainCall_Params params;
	params.HitPoints = HitPoints;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DENT_MASTER_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.UserConstructionScript");

	ABP_DENT_MASTER_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_MultiCast_Fracture
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                HitPoints                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_DM_MultiCast_Fracture(struct FVector* HitPoints, struct FRotator* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_MultiCast_Fracture");

	ABP_DENT_MASTER_C_DENT_DM_MultiCast_Fracture_Params params;
	params.HitPoints = HitPoints;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DENT_MASTER_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.ReceiveBeginPlay");

	ABP_DENT_MASTER_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_Server_Fracture
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                HitPoints                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_DM_Server_Fracture(struct FVector* HitPoints, struct FRotator* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_Server_Fracture");

	ABP_DENT_MASTER_C_DENT_DM_Server_Fracture_Params params;
	params.HitPoints = HitPoints;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.BndEvt__Destructible_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_DENT_MASTER_C::BndEvt__Destructible_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature(struct FVector* HitPoint, struct FVector* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.BndEvt__Destructible_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature");

	ABP_DENT_MASTER_C_BndEvt__Destructible_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_Server_GenericDamage
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDestructibleComponent** Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         BaseDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HurtOrigin                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DamageRadius                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ImpulseStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFullDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_DM_Server_GenericDamage(class UDestructibleComponent** Target, float* BaseDamage, struct FVector* HurtOrigin, float* DamageRadius, float* ImpulseStrength, bool* bFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_Server_GenericDamage");

	ABP_DENT_MASTER_C_DENT_DM_Server_GenericDamage_Params params;
	params.Target = Target;
	params.BaseDamage = BaseDamage;
	params.HurtOrigin = HurtOrigin;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;
	params.bFullDamage = bFullDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_MultiCast_GenericDamage
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDestructibleComponent** Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         BaseDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HurtOrigin                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DamageRadius                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ImpulseStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFullDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_DM_MultiCast_GenericDamage(class UDestructibleComponent** Target, float* BaseDamage, struct FVector* HurtOrigin, float* DamageRadius, float* ImpulseStrength, bool* bFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_MultiCast_GenericDamage");

	ABP_DENT_MASTER_C_DENT_DM_MultiCast_GenericDamage_Params params;
	params.Target = Target;
	params.BaseDamage = BaseDamage;
	params.HurtOrigin = HurtOrigin;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;
	params.bFullDamage = bFullDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.ReceiveAnyDamage");

	ABP_DENT_MASTER_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_Server_RadialDamage
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDestructibleComponent** Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         BaseDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HurtOrigin                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DamageRadius                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ImpulseStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFullDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_DM_Server_RadialDamage(class UDestructibleComponent** Target, float* BaseDamage, struct FVector* HurtOrigin, float* DamageRadius, float* ImpulseStrength, bool* bFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_Server_RadialDamage");

	ABP_DENT_MASTER_C_DENT_DM_Server_RadialDamage_Params params;
	params.Target = Target;
	params.BaseDamage = BaseDamage;
	params.HurtOrigin = HurtOrigin;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;
	params.bFullDamage = bFullDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_MultiCast_RadialDamage
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDestructibleComponent** Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         BaseDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HurtOrigin                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DamageRadius                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ImpulseStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFullDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_DM_MultiCast_RadialDamage(class UDestructibleComponent** Target, float* BaseDamage, struct FVector* HurtOrigin, float* DamageRadius, float* ImpulseStrength, bool* bFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_MultiCast_RadialDamage");

	ABP_DENT_MASTER_C_DENT_DM_MultiCast_RadialDamage_Params params;
	params.Target = Target;
	params.BaseDamage = BaseDamage;
	params.HurtOrigin = HurtOrigin;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;
	params.bFullDamage = bFullDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.ReceivePointDamage
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

void ABP_DENT_MASTER_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.ReceivePointDamage");

	ABP_DENT_MASTER_C_ReceivePointDamage_Params params;
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


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.ReceiveRadialDamage");

	ABP_DENT_MASTER_C_ReceiveRadialDamage_Params params;
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


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_Server_PointDamage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDestructibleComponent** Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Hit_Location                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ImpulseStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_DM_Server_PointDamage(class UDestructibleComponent** Target, float* Damage, struct FVector* Hit_Location, struct FVector* Direction, float* ImpulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_Server_PointDamage");

	ABP_DENT_MASTER_C_DENT_DM_Server_PointDamage_Params params;
	params.Target = Target;
	params.Damage = Damage;
	params.Hit_Location = Hit_Location;
	params.Direction = Direction;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_MultiCast_PointDamage
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDestructibleComponent** Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ImpulseStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_DM_MultiCast_PointDamage(class UDestructibleComponent** Target, float* Damage, struct FVector* HitLocation, struct FVector* Direction, float* ImpulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_DM_MultiCast_PointDamage");

	ABP_DENT_MASTER_C_DENT_DM_MultiCast_PointDamage_Params params;
	params.Target = Target;
	params.Damage = Damage;
	params.HitLocation = HitLocation;
	params.Direction = Direction;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_Spawn_Damage_Debris_Radial
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_Spawn_Damage_Debris_Radial(struct FVector* HitPoint, struct FRotator* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_Spawn_Damage_Debris_Radial");

	ABP_DENT_MASTER_C_DENT_Spawn_Damage_Debris_Radial_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_Spawn_Damage_Debris_Point
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::DENT_Spawn_Damage_Debris_Point(struct FVector* HitPoint, struct FRotator* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.DENT_Spawn_Damage_Debris_Point");

	ABP_DENT_MASTER_C_DENT_Spawn_Damage_Debris_Point_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DENT_MASTER.BP_DENT_MASTER_C.ExecuteUbergraph_BP_DENT_MASTER
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DENT_MASTER_C::ExecuteUbergraph_BP_DENT_MASTER(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DENT_MASTER.BP_DENT_MASTER_C.ExecuteUbergraph_BP_DENT_MASTER");

	ABP_DENT_MASTER_C_ExecuteUbergraph_BP_DENT_MASTER_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
