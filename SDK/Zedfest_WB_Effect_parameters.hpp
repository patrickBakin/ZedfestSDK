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

// Function WB_Effect.WB_Effect_C.IsEffectTypeProgressChangeColor
struct UWB_Effect_C_IsEffectTypeProgressChangeColor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetDecayTime
struct UWB_Effect_C_GetDecayTime_Params
{
	float                                              Decay_Time;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.IsEffectTypeSoundEffectLooped
struct UWB_Effect_C_IsEffectTypeSoundEffectLooped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetSoundVolume
struct UWB_Effect_C_GetSoundVolume_Params
{
	float                                              Sound_Volume_Multiplier;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.IsEffectTypeSoundEffect
struct UWB_Effect_C_IsEffectTypeSoundEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetSoundEffect
struct UWB_Effect_C_GetSoundEffect_Params
{
	class USoundBase*                                  Sound_Effect;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetAddRotationToParticles
struct UWB_Effect_C_GetAddRotationToParticles_Params
{
	bool                                               Add_Rotation_to_Particles;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetParticleSpread
struct UWB_Effect_C_GetParticleSpread_Params
{
	float                                              Particle_Spread;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.FindMinSize
struct UWB_Effect_C_FindMinSize_Params
{
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.AddAttributes
struct UWB_Effect_C_AddAttributes_Params
{
	class UImage**                                     Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetNumParticles
struct UWB_Effect_C_GetNumParticles_Params
{
	int                                                NumParticles;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.IsEffectTypeParticle
struct UWB_Effect_C_IsEffectTypeParticle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetPlaybackSpeed
struct UWB_Effect_C_GetPlaybackSpeed_Params
{
	float                                              Playback_Speed;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetEffectAngle
struct UWB_Effect_C_GetEffectAngle_Params
{
	float                                              Effect_Angle;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetEffectShear
struct UWB_Effect_C_GetEffectShear_Params
{
	struct FVector2D                                   Effect_Shear;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.IsTriggeredAlwaysOnSpecificPercentValue
struct UWB_Effect_C_IsTriggeredAlwaysOnSpecificPercentValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.IsTriggerSpecificPercent
struct UWB_Effect_C_IsTriggerSpecificPercent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.SwitchEffectType
struct UWB_Effect_C_SwitchEffectType_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.Anim_HighlightLoop
struct UWB_Effect_C_Anim_HighlightLoop_Params
{
	bool*                                              StartStop;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.Anim_Highlight2
struct UWB_Effect_C_Anim_Highlight2_Params
{
	float*                                             PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.Anim_Highlight1
struct UWB_Effect_C_Anim_Highlight1_Params
{
	float*                                             PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetEffectColor
struct UWB_Effect_C_GetEffectColor_Params
{
	struct FLinearColor                                Effect_Color;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetEffectScale
struct UWB_Effect_C_GetEffectScale_Params
{
	struct FVector2D                                   EffectScale;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.Anim_Fade
struct UWB_Effect_C_Anim_Fade_Params
{
	bool*                                              FadeIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.IsTriggeredAlways
struct UWB_Effect_C_IsTriggeredAlways_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetEffectTexture
struct UWB_Effect_C_GetEffectTexture_Params
{
	class UObject*                                     Custom_Effect_Texture;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetEffectType
struct UWB_Effect_C_GetEffectType_Params
{
	TEnumAsByte<EEffectType>                           Effect_Texture_Type;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetEffectTranslation
struct UWB_Effect_C_GetEffectTranslation_Params
{
	struct FVector2D                                   Transition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetSpecificPercentValue
struct UWB_Effect_C_GetSpecificPercentValue_Params
{
	float                                              Specific_Percent_Value;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.GetTriggerMethod
struct UWB_Effect_C_GetTriggerMethod_Params
{
	TEnumAsByte<ETriggerMethod>                        Trigger;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.SetSize
struct UWB_Effect_C_SetSize_Params
{
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.AddEffect
struct UWB_Effect_C_AddEffect_Params
{
	struct FS_Effects*                                 Effect;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.SetFillType
struct UWB_Effect_C_SetFillType_Params
{
	TEnumAsByte<EProgressBarFillType>*                 FillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.StartEffect
struct UWB_Effect_C_StartEffect_Params
{
};

// Function WB_Effect.WB_Effect_C.StopEffect
struct UWB_Effect_C_StopEffect_Params
{
};

// Function WB_Effect.WB_Effect_C.Tick
struct UWB_Effect_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.TriggerEffect
struct UWB_Effect_C_TriggerEffect_Params
{
};

// Function WB_Effect.WB_Effect_C.AddEffectTextureType
struct UWB_Effect_C_AddEffectTextureType_Params
{
};

// Function WB_Effect.WB_Effect_C.EventPreConstruct
struct UWB_Effect_C_EventPreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.Construct
struct UWB_Effect_C_Construct_Params
{
};

// Function WB_Effect.WB_Effect_C.CreateParticle
struct UWB_Effect_C_CreateParticle_Params
{
	int*                                               NumParticles;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.ClearParticles
struct UWB_Effect_C_ClearParticles_Params
{
};

// Function WB_Effect.WB_Effect_C.OnAnimationFinished_Event_1
struct UWB_Effect_C_OnAnimationFinished_Event_1_Params
{
};

// Function WB_Effect.WB_Effect_C.GetProgressBar
struct UWB_Effect_C_GetProgressBar_Params
{
	class UProgressBarLinear_C**                       ProgressBar;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.UpdatePercent
struct UWB_Effect_C_UpdatePercent_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.OnAudioFinished_Event_1
struct UWB_Effect_C_OnAudioFinished_Event_1_Params
{
};

// Function WB_Effect.WB_Effect_C.ExecuteUbergraph_WB_Effect
struct UWB_Effect_C_ExecuteUbergraph_WB_Effect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Effect.WB_Effect_C.StopProgressChangeColor__DelegateSignature
struct UWB_Effect_C_StopProgressChangeColor__DelegateSignature_Params
{
};

// Function WB_Effect.WB_Effect_C.StartProgressChangeColor__DelegateSignature
struct UWB_Effect_C_StartProgressChangeColor__DelegateSignature_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
