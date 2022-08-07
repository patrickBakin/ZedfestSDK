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

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.FindExitSocket
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent**        CharacterMesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FVector                 ExitLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ABlueprint_Vehicle_C::FindExitSocket(class USceneComponent** CharacterMesh, struct FVector* ExitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.FindExitSocket");

	ABlueprint_Vehicle_C_FindExitSocket_Params params;
	params.CharacterMesh = CharacterMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExitLocation != nullptr)
		*ExitLocation = params.ExitLocation;

	return params.ReturnValue;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.ExitVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter**             Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::ExitVehicle(class ACharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.ExitVehicle");

	ABlueprint_Vehicle_C_ExitVehicle_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InformationUpdating
// (Public, BlueprintCallable, BlueprintEvent)

void ABlueprint_Vehicle_C::InformationUpdating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.InformationUpdating");

	ABlueprint_Vehicle_C_InformationUpdating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.AddControllerPitchInput_(Custom)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::AddControllerPitchInput__Custom_(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.AddControllerPitchInput_(Custom)");

	ABlueprint_Vehicle_C_AddControllerPitchInput__Custom__Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.AddControllerYawInput_(Custom)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::AddControllerYawInput__Custom_(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.AddControllerYawInput_(Custom)");

	ABlueprint_Vehicle_C_AddControllerYawInput__Custom__Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABlueprint_Vehicle_C::InpActEvt_Jump_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_3");

	ABlueprint_Vehicle_C_InpActEvt_Jump_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABlueprint_Vehicle_C::InpActEvt_Jump_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_2");

	ABlueprint_Vehicle_C_InpActEvt_Jump_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpActEvt_InteractButton_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABlueprint_Vehicle_C::InpActEvt_InteractButton_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpActEvt_InteractButton_K2Node_InputActionEvent_1");

	ABlueprint_Vehicle_C_InpActEvt_InteractButton_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.Exit Vehicle "Multicast"
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter**             Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::Exit_Vehicle__Multicast_(class ACharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.Exit Vehicle "Multicast"");

	ABlueprint_Vehicle_C_Exit_Vehicle__Multicast__Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.RPC Exit Vehicle "Server"
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABlueprint_Vehicle_C::RPC_Exit_Vehicle__Server_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.RPC Exit Vehicle "Server"");

	ABlueprint_Vehicle_C_RPC_Exit_Vehicle__Server__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.RPC Move Forward "Server"
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::RPC_Move_Forward__Server_(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.RPC Move Forward "Server"");

	ABlueprint_Vehicle_C_RPC_Move_Forward__Server__Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.RPC Move Forward "Multicast"
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::RPC_Move_Forward__Multicast_(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.RPC Move Forward "Multicast"");

	ABlueprint_Vehicle_C_RPC_Move_Forward__Multicast__Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_75
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_75(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_75");

	ABlueprint_Vehicle_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_75_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.ReceiveTick");

	ABlueprint_Vehicle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_44
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_44(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_44");

	ABlueprint_Vehicle_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_44_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_33
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_33(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_33");

	ABlueprint_Vehicle_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_33_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48");

	ABlueprint_Vehicle_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blueprint_Vehicle.Blueprint_Vehicle_C.ExecuteUbergraph_Blueprint_Vehicle
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlueprint_Vehicle_C::ExecuteUbergraph_Blueprint_Vehicle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blueprint_Vehicle.Blueprint_Vehicle_C.ExecuteUbergraph_Blueprint_Vehicle");

	ABlueprint_Vehicle_C_ExecuteUbergraph_Blueprint_Vehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
