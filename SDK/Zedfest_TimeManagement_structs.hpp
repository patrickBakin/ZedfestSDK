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
//Enums
//---------------------------------------------------------------------------

// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	EFrameNumberDisplayFormats__NonDropFrameTimecode = 0,
	EFrameNumberDisplayFormats__DropFrameTimecode = 1,
	EFrameNumberDisplayFormats__Seconds = 2,
	EFrameNumberDisplayFormats__Frames = 3,
	EFrameNumberDisplayFormats__MAX_Count = 4,
	EFrameNumberDisplayFormats__EFrameNumberDisplayFormats_MAX = 5
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
