#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Security_Alarm_Interface.BPI_Security_Alarm_Interface_C.Scene capture activation
struct UBPI_Security_Alarm_Interface_C_Scene_capture_activation_Params
{
	bool*                                              Activation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      Capture_texture;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Security_Alarm_Interface.BPI_Security_Alarm_Interface_C.MonitorCameraSwap
struct UBPI_Security_Alarm_Interface_C_MonitorCameraSwap_Params
{
};

// Function BPI_Security_Alarm_Interface.BPI_Security_Alarm_Interface_C.Security Alarm Interface
struct UBPI_Security_Alarm_Interface_C_Security_Alarm_Interface_Params
{
	bool*                                              SendAlarm;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
