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

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.F_GetHitResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           CanRagdol_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          BodyVelocity                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DismemberableCharacter_C::F_GetHitResult(class UPrimitiveComponent** Target, struct FHitResult* Hit, bool* CanRagdol_, struct FVector* Location, float* BodyVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.F_GetHitResult");

	ABP_DismemberableCharacter_C_F_GetHitResult_Params params;
	params.Target = Target;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanRagdol_ != nullptr)
		*CanRagdol_ = params.CanRagdol_;
	if (Location != nullptr)
		*Location = params.Location;
	if (BodyVelocity != nullptr)
		*BodyVelocity = params.BodyVelocity;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.SetupGibMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DismemberableCharacter_C::SetupGibMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.SetupGibMaterials");

	ABP_DismemberableCharacter_C_SetupGibMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.IncreaseBloodLevel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DismemberableCharacter_C::IncreaseBloodLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.IncreaseBloodLevel");

	ABP_DismemberableCharacter_C_IncreaseBloodLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.InitialiseBoneRotations
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DismemberableCharacter_C::InitialiseBoneRotations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.InitialiseBoneRotations");

	ABP_DismemberableCharacter_C_InitialiseBoneRotations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandlePhysicsHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HitByOther                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DismemberableCharacter_C::HandlePhysicsHit(struct FVector* HitLocation, struct FVector* HitNormal, bool* HitByOther)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandlePhysicsHit");

	ABP_DismemberableCharacter_C_HandlePhysicsHit_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitByOther = HitByOther;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandleRadialDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DismemberableCharacter_C::HandleRadialDamage(struct FVector* Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandleRadialDamage");

	ABP_DismemberableCharacter_C_HandleRadialDamage_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.Dismember
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDismemberInfo*         DismemberInfo                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector*                HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Radial_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DismemberableCharacter_C::Dismember(struct FDismemberInfo* DismemberInfo, struct FVector* HitDirection, bool* Radial_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.Dismember");

	ABP_DismemberableCharacter_C_Dismember_Params params;
	params.DismemberInfo = DismemberInfo;
	params.HitDirection = HitDirection;
	params.Radial_ = Radial_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandleDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  HitBone                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Radial_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DismemberableCharacter_C::HandleDamage(float* Damage, struct FVector* HitLocation, struct FVector* ShotFromDirection, struct FName* HitBone, bool* Radial_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandleDamage");

	ABP_DismemberableCharacter_C_HandleDamage_Params params;
	params.Damage = Damage;
	params.HitLocation = HitLocation;
	params.ShotFromDirection = ShotFromDirection;
	params.HitBone = HitBone;
	params.Radial_ = Radial_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.FindDismemberInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDismemberInfo          DismemberInfo                  (Parm, OutParm, ZeroConstructor)

void ABP_DismemberableCharacter_C::FindDismemberInfo(struct FName* BoneName, bool* Found, struct FDismemberInfo* DismemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.FindDismemberInfo");

	ABP_DismemberableCharacter_C_FindDismemberInfo_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (DismemberInfo != nullptr)
		*DismemberInfo = params.DismemberInfo;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.CullTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_DismemberableCharacter_C::CullTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.CullTimeline__FinishedFunc");

	ABP_DismemberableCharacter_C_CullTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.CullTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_DismemberableCharacter_C::CullTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.CullTimeline__UpdateFunc");

	ABP_DismemberableCharacter_C_CullTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceivePointDamage
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

void ABP_DismemberableCharacter_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceivePointDamage");

	ABP_DismemberableCharacter_C_ReceivePointDamage_Params params;
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


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.DismemberLimbMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  HitBone                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DismemberableCharacter_C::DismemberLimbMulticast(struct FVector* ShotFromDirection, struct FName* HitBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.DismemberLimbMulticast");

	ABP_DismemberableCharacter_C_DismemberLimbMulticast_Params params;
	params.ShotFromDirection = ShotFromDirection;
	params.HitBone = HitBone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DismemberableCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceiveBeginPlay");

	ABP_DismemberableCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DismemberableCharacter_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceiveHit");

	ABP_DismemberableCharacter_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.LimbCulling
// (BlueprintCallable, BlueprintEvent)

void ABP_DismemberableCharacter_C::LimbCulling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.LimbCulling");

	ABP_DismemberableCharacter_C_LimbCulling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DismemberableCharacter_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceiveAnyDamage");

	ABP_DismemberableCharacter_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.BP_NPC_Ref
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_Base_C**         BPNPCRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DismemberableCharacter_C::BP_NPC_Ref(class ABP_NPC_Base_C** BPNPCRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.BP_NPC_Ref");

	ABP_DismemberableCharacter_C_BP_NPC_Ref_Params params;
	params.BPNPCRef = BPNPCRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.EventDismember
// (BlueprintCallable, BlueprintEvent)

void ABP_DismemberableCharacter_C::EventDismember()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.EventDismember");

	ABP_DismemberableCharacter_C_EventDismember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandleRadialDamageMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DismemberableCharacter_C::HandleRadialDamageMulticast(struct FVector* Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandleRadialDamageMulticast");

	ABP_DismemberableCharacter_C_HandleRadialDamageMulticast_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.RadialDismemberLimb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  HitBone                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DismemberableCharacter_C::RadialDismemberLimb(struct FVector* ShotFromDirection, struct FName* HitBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.RadialDismemberLimb");

	ABP_DismemberableCharacter_C_RadialDismemberLimb_Params params;
	params.ShotFromDirection = ShotFromDirection;
	params.HitBone = HitBone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ExecuteUbergraph_BP_DismemberableCharacter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DismemberableCharacter_C::ExecuteUbergraph_BP_DismemberableCharacter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ExecuteUbergraph_BP_DismemberableCharacter");

	ABP_DismemberableCharacter_C_ExecuteUbergraph_BP_DismemberableCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
