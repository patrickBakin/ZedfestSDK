#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Security_Alarm_Interface.BPI_Security_Alarm_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Security_Alarm_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Security_Alarm_Interface.BPI_Security_Alarm_Interface_C");
		return ptr;
	}


	void Scene_capture_activation(bool* Activation, class UTextureRenderTarget2D** Capture_texture);
	void MonitorCameraSwap();
	void Security_Alarm_Interface(bool* SendAlarm);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
