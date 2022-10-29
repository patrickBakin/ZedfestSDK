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

// Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Place Trajectory Points Only
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Trajectory_Points              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UParticleSystemComponent*> Trajectory_Beam_Reference      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UParticleSystemComponent** Trajectory_Marker_Reference    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult*             Out_Hit                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          Points_face_up                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_PPT_ProjectilePathTracer_C::STATIC_Place_Trajectory_Points_Only(class UParticleSystemComponent** Trajectory_Marker_Reference, struct FHitResult* Out_Hit, bool* Points_face_up, class UObject** __WorldContext, TArray<struct FVector>* Trajectory_Points, TArray<class UParticleSystemComponent*>* Trajectory_Beam_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Place Trajectory Points Only");

	UBPF_PPT_ProjectilePathTracer_C_Place_Trajectory_Points_Only_Params params;
	params.Trajectory_Marker_Reference = Trajectory_Marker_Reference;
	params.Out_Hit = Out_Hit;
	params.Points_face_up = Points_face_up;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Trajectory_Points != nullptr)
		*Trajectory_Points = params.Trajectory_Points;
	if (Trajectory_Beam_Reference != nullptr)
		*Trajectory_Beam_Reference = params.Trajectory_Beam_Reference;
}


// Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Spawn Trajectory Points Only
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Divisions                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Point_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               Point_Texture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               Marker_Texture                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Points_face_up                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> MID_Array_Reference            (Parm, OutParm, ZeroConstructor)
// TArray<class UParticleSystemComponent*> Trajectory_Beam_Reference      (Parm, OutParm, ZeroConstructor)
// class UParticleSystemComponent* TrajectoryMarker_Reference     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPF_PPT_ProjectilePathTracer_C::STATIC_Spawn_Trajectory_Points_Only(int* Divisions, float* Point_Size, struct FLinearColor* Color, class UTexture** Point_Texture, class UTexture** Marker_Texture, bool* Points_face_up, class UObject** __WorldContext, TArray<class UMaterialInstanceDynamic*>* MID_Array_Reference, TArray<class UParticleSystemComponent*>* Trajectory_Beam_Reference, class UParticleSystemComponent** TrajectoryMarker_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Spawn Trajectory Points Only");

	UBPF_PPT_ProjectilePathTracer_C_Spawn_Trajectory_Points_Only_Params params;
	params.Divisions = Divisions;
	params.Point_Size = Point_Size;
	params.Color = Color;
	params.Point_Texture = Point_Texture;
	params.Marker_Texture = Marker_Texture;
	params.Points_face_up = Points_face_up;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MID_Array_Reference != nullptr)
		*MID_Array_Reference = params.MID_Array_Reference;
	if (Trajectory_Beam_Reference != nullptr)
		*Trajectory_Beam_Reference = params.Trajectory_Beam_Reference;
	if (TrajectoryMarker_Reference != nullptr)
		*TrajectoryMarker_Reference = params.TrajectoryMarker_Reference;
}


// Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Spawn Trajectory Beam Only
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Divisions                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Beam_Size                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               Marker_Texture                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> MID_Array_Reference            (Parm, OutParm, ZeroConstructor)
// TArray<class UParticleSystemComponent*> Trajectory_Beam_Reference      (Parm, OutParm, ZeroConstructor)
// class UParticleSystemComponent* TrajectoryMarker_Reference     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPF_PPT_ProjectilePathTracer_C::STATIC_Spawn_Trajectory_Beam_Only(int* Divisions, float* Beam_Size, struct FLinearColor* Color, class UTexture** Marker_Texture, class UObject** __WorldContext, TArray<class UMaterialInstanceDynamic*>* MID_Array_Reference, TArray<class UParticleSystemComponent*>* Trajectory_Beam_Reference, class UParticleSystemComponent** TrajectoryMarker_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Spawn Trajectory Beam Only");

	UBPF_PPT_ProjectilePathTracer_C_Spawn_Trajectory_Beam_Only_Params params;
	params.Divisions = Divisions;
	params.Beam_Size = Beam_Size;
	params.Color = Color;
	params.Marker_Texture = Marker_Texture;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MID_Array_Reference != nullptr)
		*MID_Array_Reference = params.MID_Array_Reference;
	if (Trajectory_Beam_Reference != nullptr)
		*Trajectory_Beam_Reference = params.Trajectory_Beam_Reference;
	if (TrajectoryMarker_Reference != nullptr)
		*TrajectoryMarker_Reference = params.TrajectoryMarker_Reference;
}


// Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Calculate Box Trajectory
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Divisions                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Max_bounces                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Restitution                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Friction                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Gravity_Scale                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> Object_Type                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          Trace_Complex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors_to_ignore               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  Draw_Debug_Type                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Half_Size                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Orientation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Projectile_Movement            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Trajectory_Points              (Parm, OutParm, ZeroConstructor)
// struct FHitResult              Out_Hit                        (Parm, OutParm, IsPlainOldData)

void UBPF_PPT_ProjectilePathTracer_C::STATIC_Calculate_Box_Trajectory(float* Duration, int* Divisions, struct FVector* Location, struct FVector* Velocity, int* Max_bounces, float* Restitution, float* Friction, float* Gravity_Scale, bool* Trace_Complex, TEnumAsByte<EDrawDebugTrace>* Draw_Debug_Type, struct FVector* Half_Size, struct FRotator* Orientation, bool* Projectile_Movement, class UObject** __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* Object_Type, TArray<class AActor*>* Actors_to_ignore, TArray<struct FVector>* Trajectory_Points, struct FHitResult* Out_Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Calculate Box Trajectory");

	UBPF_PPT_ProjectilePathTracer_C_Calculate_Box_Trajectory_Params params;
	params.Duration = Duration;
	params.Divisions = Divisions;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Max_bounces = Max_bounces;
	params.Restitution = Restitution;
	params.Friction = Friction;
	params.Gravity_Scale = Gravity_Scale;
	params.Trace_Complex = Trace_Complex;
	params.Draw_Debug_Type = Draw_Debug_Type;
	params.Half_Size = Half_Size;
	params.Orientation = Orientation;
	params.Projectile_Movement = Projectile_Movement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object_Type != nullptr)
		*Object_Type = params.Object_Type;
	if (Actors_to_ignore != nullptr)
		*Actors_to_ignore = params.Actors_to_ignore;
	if (Trajectory_Points != nullptr)
		*Trajectory_Points = params.Trajectory_Points;
	if (Out_Hit != nullptr)
		*Out_Hit = params.Out_Hit;
}


// Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Calculate Capsule Trajectory
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Divisions                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Max_bounces                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Restitution                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Friction                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Gravity_Scale                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> Object_Type                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          Trace_Complex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors_to_ignore               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  Draw_Debug_Type                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Half_Height                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Projectile_Movement            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Trajectory_Points              (Parm, OutParm, ZeroConstructor)
// struct FHitResult              Out_Hit                        (Parm, OutParm, IsPlainOldData)

void UBPF_PPT_ProjectilePathTracer_C::STATIC_Calculate_Capsule_Trajectory(float* Duration, int* Divisions, struct FVector* Location, struct FVector* Velocity, int* Max_bounces, float* Restitution, float* Friction, float* Gravity_Scale, bool* Trace_Complex, TEnumAsByte<EDrawDebugTrace>* Draw_Debug_Type, float* Radius, float* Half_Height, bool* Projectile_Movement, class UObject** __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* Object_Type, TArray<class AActor*>* Actors_to_ignore, TArray<struct FVector>* Trajectory_Points, struct FHitResult* Out_Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Calculate Capsule Trajectory");

	UBPF_PPT_ProjectilePathTracer_C_Calculate_Capsule_Trajectory_Params params;
	params.Duration = Duration;
	params.Divisions = Divisions;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Max_bounces = Max_bounces;
	params.Restitution = Restitution;
	params.Friction = Friction;
	params.Gravity_Scale = Gravity_Scale;
	params.Trace_Complex = Trace_Complex;
	params.Draw_Debug_Type = Draw_Debug_Type;
	params.Radius = Radius;
	params.Half_Height = Half_Height;
	params.Projectile_Movement = Projectile_Movement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object_Type != nullptr)
		*Object_Type = params.Object_Type;
	if (Actors_to_ignore != nullptr)
		*Actors_to_ignore = params.Actors_to_ignore;
	if (Trajectory_Points != nullptr)
		*Trajectory_Points = params.Trajectory_Points;
	if (Out_Hit != nullptr)
		*Out_Hit = params.Out_Hit;
}


// Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Calculate Sphere Trajectory
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Divisions                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Max_bounces                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Restitution                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Friction                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Gravity_Scale                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> Object_Type                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          Trace_Complex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors_to_ignore               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  Draw_Debug_Type                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Projectile_Movement            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Trajectory_Points              (Parm, OutParm, ZeroConstructor)
// struct FHitResult              Out_Hit                        (Parm, OutParm, IsPlainOldData)

void UBPF_PPT_ProjectilePathTracer_C::STATIC_Calculate_Sphere_Trajectory(float* Duration, int* Divisions, struct FVector* Location, struct FVector* Velocity, int* Max_bounces, float* Restitution, float* Friction, float* Gravity_Scale, bool* Trace_Complex, TEnumAsByte<EDrawDebugTrace>* Draw_Debug_Type, float* Radius, bool* Projectile_Movement, class UObject** __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* Object_Type, TArray<class AActor*>* Actors_to_ignore, TArray<struct FVector>* Trajectory_Points, struct FHitResult* Out_Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Calculate Sphere Trajectory");

	UBPF_PPT_ProjectilePathTracer_C_Calculate_Sphere_Trajectory_Params params;
	params.Duration = Duration;
	params.Divisions = Divisions;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Max_bounces = Max_bounces;
	params.Restitution = Restitution;
	params.Friction = Friction;
	params.Gravity_Scale = Gravity_Scale;
	params.Trace_Complex = Trace_Complex;
	params.Draw_Debug_Type = Draw_Debug_Type;
	params.Radius = Radius;
	params.Projectile_Movement = Projectile_Movement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object_Type != nullptr)
		*Object_Type = params.Object_Type;
	if (Actors_to_ignore != nullptr)
		*Actors_to_ignore = params.Actors_to_ignore;
	if (Trajectory_Points != nullptr)
		*Trajectory_Points = params.Trajectory_Points;
	if (Out_Hit != nullptr)
		*Out_Hit = params.Out_Hit;
}


// Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Calculate Line Trajectory
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Divisions                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Max_bounces                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Restitution                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Friction                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Gravity_Scale                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> Object_Type                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          Trace_Complex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors_to_ignore               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  Draw_Debug_Type                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Projectile_Movement            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Trajectory_Points              (Parm, OutParm, ZeroConstructor)
// struct FHitResult              Out_Hit                        (Parm, OutParm, IsPlainOldData)

void UBPF_PPT_ProjectilePathTracer_C::STATIC_Calculate_Line_Trajectory(float* Duration, int* Divisions, struct FVector* Location, struct FVector* Velocity, int* Max_bounces, float* Restitution, float* Friction, float* Gravity_Scale, bool* Trace_Complex, TEnumAsByte<EDrawDebugTrace>* Draw_Debug_Type, bool* Projectile_Movement, class UObject** __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* Object_Type, TArray<class AActor*>* Actors_to_ignore, TArray<struct FVector>* Trajectory_Points, struct FHitResult* Out_Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Calculate Line Trajectory");

	UBPF_PPT_ProjectilePathTracer_C_Calculate_Line_Trajectory_Params params;
	params.Duration = Duration;
	params.Divisions = Divisions;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Max_bounces = Max_bounces;
	params.Restitution = Restitution;
	params.Friction = Friction;
	params.Gravity_Scale = Gravity_Scale;
	params.Trace_Complex = Trace_Complex;
	params.Draw_Debug_Type = Draw_Debug_Type;
	params.Projectile_Movement = Projectile_Movement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object_Type != nullptr)
		*Object_Type = params.Object_Type;
	if (Actors_to_ignore != nullptr)
		*Actors_to_ignore = params.Actors_to_ignore;
	if (Trajectory_Points != nullptr)
		*Trajectory_Points = params.Trajectory_Points;
	if (Out_Hit != nullptr)
		*Out_Hit = params.Out_Hit;
}


// Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Set Trajectory Beam Textures
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MID_Array_Reference            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture**               Beam_Point_Texture             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               Marker_Texture                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_PPT_ProjectilePathTracer_C::STATIC_Set_Trajectory_Beam_Textures(class UTexture** Beam_Point_Texture, class UTexture** Marker_Texture, class UObject** __WorldContext, TArray<class UMaterialInstanceDynamic*>* MID_Array_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Set Trajectory Beam Textures");

	UBPF_PPT_ProjectilePathTracer_C_Set_Trajectory_Beam_Textures_Params params;
	params.Beam_Point_Texture = Beam_Point_Texture;
	params.Marker_Texture = Marker_Texture;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MID_Array_Reference != nullptr)
		*MID_Array_Reference = params.MID_Array_Reference;
}


// Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Place Trajectory Beam
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Trajectory_Points              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UParticleSystemComponent*> Trajectory_Beam_Reference      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UParticleSystemComponent** Trajectory_Marker_Reference    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult*             Out_Hit                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_PPT_ProjectilePathTracer_C::STATIC_Place_Trajectory_Beam(class UParticleSystemComponent** Trajectory_Marker_Reference, struct FHitResult* Out_Hit, class UObject** __WorldContext, TArray<struct FVector>* Trajectory_Points, TArray<class UParticleSystemComponent*>* Trajectory_Beam_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Place Trajectory Beam");

	UBPF_PPT_ProjectilePathTracer_C_Place_Trajectory_Beam_Params params;
	params.Trajectory_Marker_Reference = Trajectory_Marker_Reference;
	params.Out_Hit = Out_Hit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Trajectory_Points != nullptr)
		*Trajectory_Points = params.Trajectory_Points;
	if (Trajectory_Beam_Reference != nullptr)
		*Trajectory_Beam_Reference = params.Trajectory_Beam_Reference;
}


// Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Set Trajectory Beam Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MID_Array_Reference            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_PPT_ProjectilePathTracer_C::STATIC_Set_Trajectory_Beam_Color(struct FLinearColor* Color, class UObject** __WorldContext, TArray<class UMaterialInstanceDynamic*>* MID_Array_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Set Trajectory Beam Color");

	UBPF_PPT_ProjectilePathTracer_C_Set_Trajectory_Beam_Color_Params params;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MID_Array_Reference != nullptr)
		*MID_Array_Reference = params.MID_Array_Reference;
}


// Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Spawn Trajectory Beam with Points
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Divisions                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Beam_Size                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               Beam_Point_Texture             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               Marker_Texture                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> MID_Array_Reference            (Parm, OutParm, ZeroConstructor)
// TArray<class UParticleSystemComponent*> Trajectory_Beam_Reference      (Parm, OutParm, ZeroConstructor)
// class UParticleSystemComponent* TrajectoryMarker_Reference     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPF_PPT_ProjectilePathTracer_C::STATIC_Spawn_Trajectory_Beam_with_Points(int* Divisions, float* Beam_Size, struct FLinearColor* Color, class UTexture** Beam_Point_Texture, class UTexture** Marker_Texture, class UObject** __WorldContext, TArray<class UMaterialInstanceDynamic*>* MID_Array_Reference, TArray<class UParticleSystemComponent*>* Trajectory_Beam_Reference, class UParticleSystemComponent** TrajectoryMarker_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C.Spawn Trajectory Beam with Points");

	UBPF_PPT_ProjectilePathTracer_C_Spawn_Trajectory_Beam_with_Points_Params params;
	params.Divisions = Divisions;
	params.Beam_Size = Beam_Size;
	params.Color = Color;
	params.Beam_Point_Texture = Beam_Point_Texture;
	params.Marker_Texture = Marker_Texture;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MID_Array_Reference != nullptr)
		*MID_Array_Reference = params.MID_Array_Reference;
	if (Trajectory_Beam_Reference != nullptr)
		*Trajectory_Beam_Reference = params.Trajectory_Beam_Reference;
	if (TrajectoryMarker_Reference != nullptr)
		*TrajectoryMarker_Reference = params.TrajectoryMarker_Reference;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
