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

// Function BPI_Security_Alarm_Interface.BPI_Security_Alarm_Interface_C.Scene capture activation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Activation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  Capture_texture                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Security_Alarm_Interface_C::Scene_capture_activation(bool* Activation, class UTextureRenderTarget2D** Capture_texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Security_Alarm_Interface.BPI_Security_Alarm_Interface_C.Scene capture activation");

	UBPI_Security_Alarm_Interface_C_Scene_capture_activation_Params params;
	params.Activation = Activation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Capture_texture != nullptr)
		*Capture_texture = params.Capture_texture;
}


// Function BPI_Security_Alarm_Interface.BPI_Security_Alarm_Interface_C.MonitorCameraSwap
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Security_Alarm_Interface_C::MonitorCameraSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Security_Alarm_Interface.BPI_Security_Alarm_Interface_C.MonitorCameraSwap");

	UBPI_Security_Alarm_Interface_C_MonitorCameraSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Security_Alarm_Interface.BPI_Security_Alarm_Interface_C.Security Alarm Interface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SendAlarm                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Security_Alarm_Interface_C::Security_Alarm_Interface(bool* SendAlarm)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Security_Alarm_Interface.BPI_Security_Alarm_Interface_C.Security Alarm Interface");

	UBPI_Security_Alarm_Interface_C_Security_Alarm_Interface_Params params;
	params.SendAlarm = SendAlarm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
