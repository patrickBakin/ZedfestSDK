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

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Remove_Zombies_Left
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::Remove_Zombies_Left(int* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Remove_Zombies_Left");

	ABP_Horde_Gamestate_C_Remove_Zombies_Left_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Add_Zombies_Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::Add_Zombies_Left(int* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Add_Zombies_Left");

	ABP_Horde_Gamestate_C_Add_Zombies_Left_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Change GameState
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_GameState>*      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::Change_GameState(TEnumAsByte<E_GameState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Change GameState");

	ABP_Horde_Gamestate_C_Change_GameState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Horde_Gamestate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ReceiveBeginPlay");

	ABP_Horde_Gamestate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Add Current Zombie
// (BlueprintCallable, BlueprintEvent)

void ABP_Horde_Gamestate_C::Add_Current_Zombie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Add Current Zombie");

	ABP_Horde_Gamestate_C_Add_Current_Zombie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.RemoveCurrentZombie
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::RemoveCurrentZombie(int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.RemoveCurrentZombie");

	ABP_Horde_Gamestate_C_RemoveCurrentZombie_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.AddObjectivePickup
// (BlueprintCallable, BlueprintEvent)

void ABP_Horde_Gamestate_C::AddObjectivePickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.AddObjectivePickup");

	ABP_Horde_Gamestate_C_AddObjectivePickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.RemoveObjectivePickup
// (BlueprintCallable, BlueprintEvent)

void ABP_Horde_Gamestate_C::RemoveObjectivePickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.RemoveObjectivePickup");

	ABP_Horde_Gamestate_C_RemoveObjectivePickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveReusableSwitchOpen
// (BlueprintCallable, BlueprintEvent)

void ABP_Horde_Gamestate_C::ObjectiveReusableSwitchOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveReusableSwitchOpen");

	ABP_Horde_Gamestate_C_ObjectiveReusableSwitchOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveButtonDisabled
// (BlueprintCallable, BlueprintEvent)

void ABP_Horde_Gamestate_C::ObjectiveButtonDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveButtonDisabled");

	ABP_Horde_Gamestate_C_ObjectiveButtonDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.AddTotalMoney
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TotalMoney                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::AddTotalMoney(int* TotalMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.AddTotalMoney");

	ABP_Horde_Gamestate_C_AddTotalMoney_Params params;
	params.TotalMoney = TotalMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.RemoveTotalMoney
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TotalMoney                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::RemoveTotalMoney(int* TotalMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.RemoveTotalMoney");

	ABP_Horde_Gamestate_C_RemoveTotalMoney_Params params;
	params.TotalMoney = TotalMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.GSUnderGroundObjective
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentObjectiveInt            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ObjectiveProgressNumber        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Finished_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::GSUnderGroundObjective(int* CurrentObjectiveInt, int* ObjectiveProgressNumber, bool* Finished_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.GSUnderGroundObjective");

	ABP_Horde_Gamestate_C_GSUnderGroundObjective_Params params;
	params.CurrentObjectiveInt = CurrentObjectiveInt;
	params.ObjectiveProgressNumber = ObjectiveProgressNumber;
	params.Finished_ = Finished_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.GS ZedsLeft
// (BlueprintCallable, BlueprintEvent)

void ABP_Horde_Gamestate_C::GS_ZedsLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.GS ZedsLeft");

	ABP_Horde_Gamestate_C_GS_ZedsLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveItemPickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::ObjectiveItemPickup(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveItemPickup");

	ABP_Horde_Gamestate_C_ObjectiveItemPickup_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.EventStartObjective
// (BlueprintCallable, BlueprintEvent)

void ABP_Horde_Gamestate_C::EventStartObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.EventStartObjective");

	ABP_Horde_Gamestate_C_EventStartObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveObjectPlaced
// (BlueprintCallable, BlueprintEvent)

void ABP_Horde_Gamestate_C::ObjectiveObjectPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveObjectPlaced");

	ABP_Horde_Gamestate_C_ObjectiveObjectPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Siren
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::Siren(class USoundBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Siren");

	ABP_Horde_Gamestate_C_Siren_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.GameStateDifficulty
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentDifficulty              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::GameStateDifficulty(int* CurrentDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.GameStateDifficulty");

	ABP_Horde_Gamestate_C_GameStateDifficulty_Params params;
	params.CurrentDifficulty = CurrentDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveUpdaterEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ObjectiveNumber                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ObjectiveProgressNumber        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::ObjectiveUpdaterEvent(int* ObjectiveNumber, int* ObjectiveProgressNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveUpdaterEvent");

	ABP_Horde_Gamestate_C_ObjectiveUpdaterEvent_Params params;
	params.ObjectiveNumber = ObjectiveNumber;
	params.ObjectiveProgressNumber = ObjectiveProgressNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ResetObjectivesEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Horde_Gamestate_C::ResetObjectivesEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ResetObjectivesEvent");

	ABP_Horde_Gamestate_C_ResetObjectivesEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.StopObjectiveTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Start_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::StopObjectiveTimer(bool* Start_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.StopObjectiveTimer");

	ABP_Horde_Gamestate_C_StopObjectiveTimer_Params params;
	params.Start_ = Start_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ExecuteUbergraph_BP_Horde_Gamestate
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_Gamestate_C::ExecuteUbergraph_BP_Horde_Gamestate(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ExecuteUbergraph_BP_Horde_Gamestate");

	ABP_Horde_Gamestate_C_ExecuteUbergraph_BP_Horde_Gamestate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.OpenElevators__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Horde_Gamestate_C::OpenElevators__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.OpenElevators__DelegateSignature");

	ABP_Horde_Gamestate_C_OpenElevators__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
