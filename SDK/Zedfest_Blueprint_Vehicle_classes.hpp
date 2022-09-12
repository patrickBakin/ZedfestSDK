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

// BlueprintGeneratedClass Blueprint_Vehicle.Blueprint_Vehicle_C
// 0x0050 (0x03F0 - 0x03A0)
class ABlueprint_Vehicle_C : public AWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             EngineSound;                                              // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               AllSitSockets;                                            // 0x03C0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               AllExitSockets;                                           // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ACharacter*                                  DriverCharacter;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Backward;                                                 // 0x03E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SetCharacterDistance;                                     // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Blueprint_Vehicle.Blueprint_Vehicle_C");
		return ptr;
	}


	bool FindExitSocket(class USceneComponent** CharacterMesh, struct FVector* ExitLocation);
	void ExitVehicle(class ACharacter** Character);
	void InformationUpdating();
	void AddControllerPitchInput__Custom_(float* Value);
	void AddControllerYawInput__Custom_(float* Value);
	void InpActEvt_Jump_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_InteractButton_K2Node_InputActionEvent_1(struct FKey* Key);
	void Exit_Vehicle__Multicast_(class ACharacter** Character);
	void RPC_Exit_Vehicle__Server_();
	void RPC_Move_Forward__Server_(float* AxisValue);
	void RPC_Move_Forward__Multicast_(float* AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_75(float* AxisValue);
	void ReceiveTick(float* DeltaSeconds);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_44(float* AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_33(float* AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float* AxisValue);
	void ExecuteUbergraph_Blueprint_Vehicle(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
