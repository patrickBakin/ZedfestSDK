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

// Function WB_Particle.WB_Particle_C.SetScaleV2D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Particle_C::SetScaleV2D(struct FVector2D* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.SetScaleV2D");

	UWB_Particle_C_SetScaleV2D_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.CountValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_Particle_C::CountValue(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.CountValue");

	UWB_Particle_C_CountValue_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Particle.WB_Particle_C.GetClampedMinSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Multiplicator                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_Particle_C::GetClampedMinSize(float* Multiplicator)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.GetClampedMinSize");

	UWB_Particle_C_GetClampedMinSize_Params params;
	params.Multiplicator = Multiplicator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Particle.WB_Particle_C.GetTranslation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Translation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Particle_C::GetTranslation(struct FVector2D* Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.GetTranslation");

	UWB_Particle_C_GetTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Translation != nullptr)
		*Translation = params.Translation;
}


// Function WB_Particle.WB_Particle_C.SetTranslation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Translation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Particle_C::SetTranslation(struct FVector2D* Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.SetTranslation");

	UWB_Particle_C_SetTranslation_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.GetMaxSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_Particle_C::GetMaxSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.GetMaxSize");

	UWB_Particle_C_GetMaxSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Particle.WB_Particle_C.GetMinSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_Particle_C::GetMinSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.GetMinSize");

	UWB_Particle_C_GetMinSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Particle.WB_Particle_C.IsTriggerMethodAlways
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Particle_C::IsTriggerMethodAlways()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.IsTriggerMethodAlways");

	UWB_Particle_C_IsTriggerMethodAlways_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Particle.WB_Particle_C.Anim_Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Particle_C::Anim_Fade(float* PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.Anim_Fade");

	UWB_Particle_C_Anim_Fade_Params params;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Particle_C::SetAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.SetAngle");

	UWB_Particle_C_SetAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Particle_C::SetScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.SetScale");

	UWB_Particle_C_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.CreateParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Translation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Shear                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETriggerMethod>*   TriggerMethod                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsDesignTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ParticleSpread                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseParticleRotation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Particle_C::CreateParticle(class UObject** Image, float* PlaybackSpeed, struct FLinearColor* Color, struct FVector2D* Scale, struct FVector2D* Translation, struct FVector2D* Shear, float* Angle, struct FVector2D* Size, TEnumAsByte<ETriggerMethod>* TriggerMethod, bool* bIsDesignTime, float* ParticleSpread, bool* UseParticleRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.CreateParticle");

	UWB_Particle_C_CreateParticle_Params params;
	params.Image = Image;
	params.PlaybackSpeed = PlaybackSpeed;
	params.Color = Color;
	params.Scale = Scale;
	params.Translation = Translation;
	params.Shear = Shear;
	params.Angle = Angle;
	params.Size = Size;
	params.TriggerMethod = TriggerMethod;
	params.bIsDesignTime = bIsDesignTime;
	params.ParticleSpread = ParticleSpread;
	params.UseParticleRotation = UseParticleRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Particle_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.Tick");

	UWB_Particle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.TriggerParticle
// (BlueprintCallable, BlueprintEvent)

void UWB_Particle_C::TriggerParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.TriggerParticle");

	UWB_Particle_C_TriggerParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.SetParticleInfo
// (BlueprintCallable, BlueprintEvent)

void UWB_Particle_C::SetParticleInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.SetParticleInfo");

	UWB_Particle_C_SetParticleInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.StopTrigger
// (BlueprintCallable, BlueprintEvent)

void UWB_Particle_C::StopTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.StopTrigger");

	UWB_Particle_C_StopTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.StartTrigger
// (BlueprintCallable, BlueprintEvent)

void UWB_Particle_C::StartTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.StartTrigger");

	UWB_Particle_C_StartTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.OnAnimationFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWB_Particle_C::OnAnimationFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.OnAnimationFinished_Event_1");

	UWB_Particle_C_OnAnimationFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Particle.WB_Particle_C.ExecuteUbergraph_WB_Particle
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Particle_C::ExecuteUbergraph_WB_Particle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Particle.WB_Particle_C.ExecuteUbergraph_WB_Particle");

	UWB_Particle_C_ExecuteUbergraph_WB_Particle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
