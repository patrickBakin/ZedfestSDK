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

// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NPC_Mutant3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.UserConstructionScript");

	ABP_NPC_Mutant3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.OnMeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HitSuccess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                HitCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Mutant3_C::OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.OnMeleeAttack");

	ABP_NPC_Mutant3_C_OnMeleeAttack_Params params;
	params.HitSuccess = HitSuccess;
	params.HitCharacter = HitCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.BndEvt__Mini_Gas_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_NPC_Mutant3_C::BndEvt__Mini_Gas_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.BndEvt__Mini_Gas_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	ABP_NPC_Mutant3_C_BndEvt__Mini_Gas_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.PerformSpecialDamage
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Mutant3_C::PerformSpecialDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.PerformSpecialDamage");

	ABP_NPC_Mutant3_C_PerformSpecialDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Head_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Mutant3_C::OnDeath(bool* Head_, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.OnDeath");

	ABP_NPC_Mutant3_C_OnDeath_Params params;
	params.Head_ = Head_;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPC_Mutant3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.ReceiveBeginPlay");

	ABP_NPC_Mutant3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
// (BlueprintEvent)

void ABP_NPC_Mutant3_C::BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature");

	ABP_NPC_Mutant3_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.ExecuteUbergraph_BP_NPC_Mutant3
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Mutant3_C::ExecuteUbergraph_BP_NPC_Mutant3(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.ExecuteUbergraph_BP_NPC_Mutant3");

	ABP_NPC_Mutant3_C_ExecuteUbergraph_BP_NPC_Mutant3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
