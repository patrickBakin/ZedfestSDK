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

// Function WB_Particle.WB_Particle_C.SetScaleV2D
struct UWB_Particle_C_SetScaleV2D_Params
{
	struct FVector2D*                                  Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.CountValue
struct UWB_Particle_C_CountValue_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.GetClampedMinSize
struct UWB_Particle_C_GetClampedMinSize_Params
{
	float*                                             Multiplicator;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.GetTranslation
struct UWB_Particle_C_GetTranslation_Params
{
	struct FVector2D                                   Translation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.SetTranslation
struct UWB_Particle_C_SetTranslation_Params
{
	struct FVector2D*                                  Translation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.GetMaxSize
struct UWB_Particle_C_GetMaxSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.GetMinSize
struct UWB_Particle_C_GetMinSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.IsTriggerMethodAlways
struct UWB_Particle_C_IsTriggerMethodAlways_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.Anim_Fade
struct UWB_Particle_C_Anim_Fade_Params
{
	float*                                             PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.SetAngle
struct UWB_Particle_C_SetAngle_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.SetScale
struct UWB_Particle_C_SetScale_Params
{
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.CreateParticle
struct UWB_Particle_C_CreateParticle_Params
{
	class UObject**                                    Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Translation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Shear;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETriggerMethod>*                       TriggerMethod;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsDesignTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ParticleSpread;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseParticleRotation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.Tick
struct UWB_Particle_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Particle.WB_Particle_C.TriggerParticle
struct UWB_Particle_C_TriggerParticle_Params
{
};

// Function WB_Particle.WB_Particle_C.SetParticleInfo
struct UWB_Particle_C_SetParticleInfo_Params
{
};

// Function WB_Particle.WB_Particle_C.StopTrigger
struct UWB_Particle_C_StopTrigger_Params
{
};

// Function WB_Particle.WB_Particle_C.StartTrigger
struct UWB_Particle_C_StartTrigger_Params
{
};

// Function WB_Particle.WB_Particle_C.OnAnimationFinished_Event_1
struct UWB_Particle_C_OnAnimationFinished_Event_1_Params
{
};

// Function WB_Particle.WB_Particle_C.ExecuteUbergraph_WB_Particle
struct UWB_Particle_C_ExecuteUbergraph_WB_Particle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
