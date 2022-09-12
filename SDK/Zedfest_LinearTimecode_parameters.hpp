#pragma once

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
//Parameters
//---------------------------------------------------------------------------

// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
struct ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params
{
	struct FDropTimecode*                              Timecode;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               FrameNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDropTimecode                               OutTimecode;                                              // (Parm, OutParm)
};

// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
struct ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params
{
	struct FDropTimecode*                              Timecode;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                FrameNumber;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
struct ULinearTimecodeComponent_GetDropFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
struct UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params
{
	struct FDropTimecode*                              InTimecode;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
