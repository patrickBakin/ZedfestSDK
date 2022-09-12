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

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
struct ACineCameraActor_GetCineCameraComponent_Params
{
	class UCineCameraComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
struct UCineCameraComponent_SetLensPresetByName_Params
{
	struct FString*                                    InPresetName;                                             // (Parm, ZeroConstructor)
};

// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
struct UCineCameraComponent_SetFilmbackPresetByName_Params
{
	struct FString*                                    InPresetName;                                             // (Parm, ZeroConstructor)
};

// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
struct UCineCameraComponent_GetVerticalFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CinematicCamera.CineCameraComponent.GetLensPresetName
struct UCineCameraComponent_GetLensPresetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
struct UCineCameraComponent_GetHorizontalFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
struct UCineCameraComponent_GetFilmbackPresetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
