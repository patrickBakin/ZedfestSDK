// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WB_Effect.WB_Effect_C.IsEffectTypeProgressChangeColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Effect_C::IsEffectTypeProgressChangeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.IsEffectTypeProgressChangeColor");

	UWB_Effect_C_IsEffectTypeProgressChangeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Effect.WB_Effect_C.GetDecayTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Decay_Time                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetDecayTime(float* Decay_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetDecayTime");

	UWB_Effect_C_GetDecayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decay_Time != nullptr)
		*Decay_Time = params.Decay_Time;
}


// Function WB_Effect.WB_Effect_C.IsEffectTypeSoundEffectLooped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Effect_C::IsEffectTypeSoundEffectLooped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.IsEffectTypeSoundEffectLooped");

	UWB_Effect_C_IsEffectTypeSoundEffectLooped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Effect.WB_Effect_C.GetSoundVolume
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Sound_Volume_Multiplier        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetSoundVolume(float* Sound_Volume_Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetSoundVolume");

	UWB_Effect_C_GetSoundVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound_Volume_Multiplier != nullptr)
		*Sound_Volume_Multiplier = params.Sound_Volume_Multiplier;
}


// Function WB_Effect.WB_Effect_C.IsEffectTypeSoundEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Effect_C::IsEffectTypeSoundEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.IsEffectTypeSoundEffect");

	UWB_Effect_C_IsEffectTypeSoundEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Effect.WB_Effect_C.GetSoundEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundBase*              Sound_Effect                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetSoundEffect(class USoundBase** Sound_Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetSoundEffect");

	UWB_Effect_C_GetSoundEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound_Effect != nullptr)
		*Sound_Effect = params.Sound_Effect;
}


// Function WB_Effect.WB_Effect_C.GetAddRotationToParticles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Add_Rotation_to_Particles      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetAddRotationToParticles(bool* Add_Rotation_to_Particles)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetAddRotationToParticles");

	UWB_Effect_C_GetAddRotationToParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_Rotation_to_Particles != nullptr)
		*Add_Rotation_to_Particles = params.Add_Rotation_to_Particles;
}


// Function WB_Effect.WB_Effect_C.GetParticleSpread
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Particle_Spread                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetParticleSpread(float* Particle_Spread)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetParticleSpread");

	UWB_Effect_C_GetParticleSpread_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Particle_Spread != nullptr)
		*Particle_Spread = params.Particle_Spread;
}


// Function WB_Effect.WB_Effect_C.FindMinSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_Effect_C::FindMinSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.FindMinSize");

	UWB_Effect_C_FindMinSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Effect.WB_Effect_C.AddAttributes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWB_Effect_C::AddAttributes(class UImage** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.AddAttributes");

	UWB_Effect_C_AddAttributes_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.GetNumParticles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumParticles                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetNumParticles(int* NumParticles)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetNumParticles");

	UWB_Effect_C_GetNumParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumParticles != nullptr)
		*NumParticles = params.NumParticles;
}


// Function WB_Effect.WB_Effect_C.IsEffectTypeParticle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Effect_C::IsEffectTypeParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.IsEffectTypeParticle");

	UWB_Effect_C_IsEffectTypeParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Effect.WB_Effect_C.GetPlaybackSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Playback_Speed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetPlaybackSpeed(float* Playback_Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetPlaybackSpeed");

	UWB_Effect_C_GetPlaybackSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Playback_Speed != nullptr)
		*Playback_Speed = params.Playback_Speed;
}


// Function WB_Effect.WB_Effect_C.GetEffectAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Effect_Angle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetEffectAngle(float* Effect_Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetEffectAngle");

	UWB_Effect_C_GetEffectAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect_Angle != nullptr)
		*Effect_Angle = params.Effect_Angle;
}


// Function WB_Effect.WB_Effect_C.GetEffectShear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Effect_Shear                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetEffectShear(struct FVector2D* Effect_Shear)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetEffectShear");

	UWB_Effect_C_GetEffectShear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect_Shear != nullptr)
		*Effect_Shear = params.Effect_Shear;
}


// Function WB_Effect.WB_Effect_C.IsTriggeredAlwaysOnSpecificPercentValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Effect_C::IsTriggeredAlwaysOnSpecificPercentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.IsTriggeredAlwaysOnSpecificPercentValue");

	UWB_Effect_C_IsTriggeredAlwaysOnSpecificPercentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Effect.WB_Effect_C.IsTriggerSpecificPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Effect_C::IsTriggerSpecificPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.IsTriggerSpecificPercent");

	UWB_Effect_C_IsTriggerSpecificPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Effect.WB_Effect_C.SwitchEffectType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::SwitchEffectType(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.SwitchEffectType");

	UWB_Effect_C_SwitchEffectType_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.Anim_HighlightLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          StartStop                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::Anim_HighlightLoop(bool* StartStop, float* PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.Anim_HighlightLoop");

	UWB_Effect_C_Anim_HighlightLoop_Params params;
	params.StartStop = StartStop;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.Anim_Highlight2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::Anim_Highlight2(float* PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.Anim_Highlight2");

	UWB_Effect_C_Anim_Highlight2_Params params;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.Anim_Highlight1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::Anim_Highlight1(float* PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.Anim_Highlight1");

	UWB_Effect_C_Anim_Highlight1_Params params;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.GetEffectColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Effect_Color                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetEffectColor(struct FLinearColor* Effect_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetEffectColor");

	UWB_Effect_C_GetEffectColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect_Color != nullptr)
		*Effect_Color = params.Effect_Color;
}


// Function WB_Effect.WB_Effect_C.GetEffectScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               EffectScale                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetEffectScale(struct FVector2D* EffectScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetEffectScale");

	UWB_Effect_C_GetEffectScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectScale != nullptr)
		*EffectScale = params.EffectScale;
}


// Function WB_Effect.WB_Effect_C.Anim_Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::Anim_Fade(bool* FadeIn, float* PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.Anim_Fade");

	UWB_Effect_C_Anim_Fade_Params params;
	params.FadeIn = FadeIn;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.IsTriggeredAlways
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Effect_C::IsTriggeredAlways()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.IsTriggeredAlways");

	UWB_Effect_C_IsTriggeredAlways_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Effect.WB_Effect_C.GetEffectTexture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Custom_Effect_Texture          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetEffectTexture(class UObject** Custom_Effect_Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetEffectTexture");

	UWB_Effect_C_GetEffectTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Custom_Effect_Texture != nullptr)
		*Custom_Effect_Texture = params.Custom_Effect_Texture;
}


// Function WB_Effect.WB_Effect_C.GetEffectType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEffectType>       Effect_Texture_Type            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetEffectType(TEnumAsByte<EEffectType>* Effect_Texture_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetEffectType");

	UWB_Effect_C_GetEffectType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect_Texture_Type != nullptr)
		*Effect_Texture_Type = params.Effect_Texture_Type;
}


// Function WB_Effect.WB_Effect_C.GetEffectTranslation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Transition                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetEffectTranslation(struct FVector2D* Transition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetEffectTranslation");

	UWB_Effect_C_GetEffectTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transition != nullptr)
		*Transition = params.Transition;
}


// Function WB_Effect.WB_Effect_C.GetSpecificPercentValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Specific_Percent_Value         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetSpecificPercentValue(float* Specific_Percent_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetSpecificPercentValue");

	UWB_Effect_C_GetSpecificPercentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Specific_Percent_Value != nullptr)
		*Specific_Percent_Value = params.Specific_Percent_Value;
}


// Function WB_Effect.WB_Effect_C.GetTriggerMethod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ETriggerMethod>    Trigger                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::GetTriggerMethod(TEnumAsByte<ETriggerMethod>* Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetTriggerMethod");

	UWB_Effect_C_GetTriggerMethod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Trigger != nullptr)
		*Trigger = params.Trigger;
}


// Function WB_Effect.WB_Effect_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::SetSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.SetSize");

	UWB_Effect_C_SetSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.AddEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Effects*             Effect                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWB_Effect_C::AddEffect(struct FS_Effects* Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.AddEffect");

	UWB_Effect_C_AddEffect_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.SetFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressBarFillType>* FillType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::SetFillType(TEnumAsByte<EProgressBarFillType>* FillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.SetFillType");

	UWB_Effect_C_SetFillType_Params params;
	params.FillType = FillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.StartEffect
// (BlueprintCallable, BlueprintEvent)

void UWB_Effect_C::StartEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.StartEffect");

	UWB_Effect_C_StartEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.StopEffect
// (BlueprintCallable, BlueprintEvent)

void UWB_Effect_C::StopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.StopEffect");

	UWB_Effect_C_StopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.Tick");

	UWB_Effect_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.TriggerEffect
// (BlueprintCallable, BlueprintEvent)

void UWB_Effect_C::TriggerEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.TriggerEffect");

	UWB_Effect_C_TriggerEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.AddEffectTextureType
// (BlueprintCallable, BlueprintEvent)

void UWB_Effect_C::AddEffectTextureType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.AddEffectTextureType");

	UWB_Effect_C_AddEffectTextureType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.EventPreConstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::EventPreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.EventPreConstruct");

	UWB_Effect_C_EventPreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Effect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.Construct");

	UWB_Effect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.CreateParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumParticles                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::CreateParticle(int* NumParticles)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.CreateParticle");

	UWB_Effect_C_CreateParticle_Params params;
	params.NumParticles = NumParticles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.ClearParticles
// (BlueprintCallable, BlueprintEvent)

void UWB_Effect_C::ClearParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.ClearParticles");

	UWB_Effect_C_ClearParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.OnAnimationFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWB_Effect_C::OnAnimationFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.OnAnimationFinished_Event_1");

	UWB_Effect_C_OnAnimationFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.GetProgressBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBarLinear_C**   ProgressBar                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWB_Effect_C::GetProgressBar(class UProgressBarLinear_C** ProgressBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.GetProgressBar");

	UWB_Effect_C_GetProgressBar_Params params;
	params.ProgressBar = ProgressBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.UpdatePercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::UpdatePercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.UpdatePercent");

	UWB_Effect_C_UpdatePercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.OnAudioFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWB_Effect_C::OnAudioFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.OnAudioFinished_Event_1");

	UWB_Effect_C_OnAudioFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.ExecuteUbergraph_WB_Effect
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::ExecuteUbergraph_WB_Effect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.ExecuteUbergraph_WB_Effect");

	UWB_Effect_C_ExecuteUbergraph_WB_Effect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.StopProgressChangeColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_Effect_C::StopProgressChangeColor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.StopProgressChangeColor__DelegateSignature");

	UWB_Effect_C_StopProgressChangeColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Effect.WB_Effect_C.StartProgressChangeColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Effect_C::StartProgressChangeColor__DelegateSignature(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Effect.WB_Effect_C.StartProgressChangeColor__DelegateSignature");

	UWB_Effect_C_StartProgressChangeColor__DelegateSignature_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
