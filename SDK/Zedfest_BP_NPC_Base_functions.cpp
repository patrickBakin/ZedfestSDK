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

// Function BP_NPC_Base.BP_NPC_Base_C.PerformMultiMeleeAttack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::PerformMultiMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.PerformMultiMeleeAttack");

	ABP_NPC_Base_C_PerformMultiMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.DamageSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Base_C::DamageSystem(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.DamageSystem");

	ABP_NPC_Base_C_DamageSystem_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.OnRep_Health
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::OnRep_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.OnRep_Health");

	ABP_NPC_Base_C_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.PerformRangedAttack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::PerformRangedAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.PerformRangedAttack");

	ABP_NPC_Base_C_PerformRangedAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.PerformMeleeAttack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::PerformMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.PerformMeleeAttack");

	ABP_NPC_Base_C_PerformMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour__FinishedFunc
// (BlueprintEvent)

void ABP_NPC_Base_C::Timeline_Parkour__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour__FinishedFunc");

	ABP_NPC_Base_C_Timeline_Parkour__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour__UpdateFunc
// (BlueprintEvent)

void ABP_NPC_Base_C::Timeline_Parkour__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour__UpdateFunc");

	ABP_NPC_Base_C_Timeline_Parkour__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour2__FinishedFunc
// (BlueprintEvent)

void ABP_NPC_Base_C::Timeline_Parkour2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour2__FinishedFunc");

	ABP_NPC_Base_C_Timeline_Parkour2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour2__UpdateFunc
// (BlueprintEvent)

void ABP_NPC_Base_C::Timeline_Parkour2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour2__UpdateFunc");

	ABP_NPC_Base_C_Timeline_Parkour2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_RotateTo__FinishedFunc
// (BlueprintEvent)

void ABP_NPC_Base_C::Timeline_RotateTo__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.Timeline_RotateTo__FinishedFunc");

	ABP_NPC_Base_C_Timeline_RotateTo__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_RotateTo__UpdateFunc
// (BlueprintEvent)

void ABP_NPC_Base_C::Timeline_RotateTo__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.Timeline_RotateTo__UpdateFunc");

	ABP_NPC_Base_C_Timeline_RotateTo__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.OnMeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HitSuccess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                HitCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Base_C::OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.OnMeleeAttack");

	ABP_NPC_Base_C_OnMeleeAttack_Params params;
	params.HitSuccess = HitSuccess;
	params.HitCharacter = HitCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.OnRangedAttack
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::OnRangedAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.OnRangedAttack");

	ABP_NPC_Base_C_OnRangedAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.OnDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Base_C::OnDamaged(float* Damage, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.OnDamaged");

	ABP_NPC_Base_C_OnDamaged_Params params;
	params.Damage = Damage;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Head_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Base_C::OnDeath(bool* Head_, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.OnDeath");

	ABP_NPC_Base_C_OnDeath_Params params;
	params.Head_ = Head_;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.OnRagdoll
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::OnRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.OnRagdoll");

	ABP_NPC_Base_C_OnRagdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.OnParkour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                TargetLoc                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayLength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Base_C::OnParkour(struct FVector* TargetLoc, float* PlayLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.OnParkour");

	ABP_NPC_Base_C_OnParkour_Params params;
	params.TargetLoc = TargetLoc;
	params.PlayLength = PlayLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.OnRotateTo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator*               TargetRot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Base_C::OnRotateTo(struct FRotator* TargetRot, float* PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.OnRotateTo");

	ABP_NPC_Base_C_OnRotateTo_Params params;
	params.TargetRot = TargetRot;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPC_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.ReceiveBeginPlay");

	ABP_NPC_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.Nuked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Damage_Causer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Base_C::Nuked(class AActor** Damage_Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.Nuked");

	ABP_NPC_Base_C_Nuked_Params params;
	params.Damage_Causer = Damage_Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.ReceivePointDamage
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

void ABP_NPC_Base_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.ReceivePointDamage");

	ABP_NPC_Base_C_ReceivePointDamage_Params params;
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


// Function BP_NPC_Base.BP_NPC_Base_C.Event_AI_DIE
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::Event_AI_DIE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.Event_AI_DIE");

	ABP_NPC_Base_C_Event_AI_DIE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Base_C::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.ReceiveRadialDamage");

	ABP_NPC_Base_C_ReceiveRadialDamage_Params params;
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


// Function BP_NPC_Base.BP_NPC_Base_C.EventZedOutline
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::EventZedOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.EventZedOutline");

	ABP_NPC_Base_C_EventZedOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::PerformSpecialDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage");

	ABP_NPC_Base_C_PerformSpecialDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage2
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::PerformSpecialDamage2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage2");

	ABP_NPC_Base_C_PerformSpecialDamage2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.CustomMeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         AnimTimeLeft                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Base_C::CustomMeleeAttack(float* AnimTimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.CustomMeleeAttack");

	ABP_NPC_Base_C_CustomMeleeAttack_Params params;
	params.AnimTimeLeft = AnimTimeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage3
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::PerformSpecialDamage3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage3");

	ABP_NPC_Base_C_PerformSpecialDamage3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.ClientGravity
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::ClientGravity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.ClientGravity");

	ABP_NPC_Base_C_ClientGravity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage4
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::PerformSpecialDamage4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage4");

	ABP_NPC_Base_C_PerformSpecialDamage4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage1
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Base_C::PerformSpecialDamage1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage1");

	ABP_NPC_Base_C_PerformSpecialDamage1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.FlameThrowerEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Base_C::FlameThrowerEvent(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.FlameThrowerEvent");

	ABP_NPC_Base_C_FlameThrowerEvent_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Base.BP_NPC_Base_C.ExecuteUbergraph_BP_NPC_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Base_C::ExecuteUbergraph_BP_NPC_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Base.BP_NPC_Base_C.ExecuteUbergraph_BP_NPC_Base");

	ABP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
