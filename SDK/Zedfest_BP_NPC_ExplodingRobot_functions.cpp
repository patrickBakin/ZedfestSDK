// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NPC_ExplodingRobot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.UserConstructionScript");

	ABP_NPC_ExplodingRobot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Head_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_ExplodingRobot_C::OnDeath(bool* Head_, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.OnDeath");

	ABP_NPC_ExplodingRobot_C_OnDeath_Params params;
	params.Head_ = Head_;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
// (BlueprintEvent)

void ABP_NPC_ExplodingRobot_C::BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature");

	ABP_NPC_ExplodingRobot_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.OnMeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HitSuccess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                HitCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_ExplodingRobot_C::OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.OnMeleeAttack");

	ABP_NPC_ExplodingRobot_C_OnMeleeAttack_Params params;
	params.HitSuccess = HitSuccess;
	params.HitCharacter = HitCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPC_ExplodingRobot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.ReceiveBeginPlay");

	ABP_NPC_ExplodingRobot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.SirenExplodeEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_NPC_ExplodingRobot_C::SirenExplodeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.SirenExplodeEvent");

	ABP_NPC_ExplodingRobot_C_SirenExplodeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.BndEvt__MeleeCollision_0_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_NPC_ExplodingRobot_C::BndEvt__MeleeCollision_0_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.BndEvt__MeleeCollision_0_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_NPC_ExplodingRobot_C_BndEvt__MeleeCollision_0_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.ExecuteUbergraph_BP_NPC_ExplodingRobot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_ExplodingRobot_C::ExecuteUbergraph_BP_NPC_ExplodingRobot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.ExecuteUbergraph_BP_NPC_ExplodingRobot");

	ABP_NPC_ExplodingRobot_C_ExecuteUbergraph_BP_NPC_ExplodingRobot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
