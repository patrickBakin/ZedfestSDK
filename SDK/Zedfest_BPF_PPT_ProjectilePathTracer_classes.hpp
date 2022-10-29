#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_PPT_ProjectilePathTracer_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_PPT_ProjectilePathTracer.BPF_PPT_ProjectilePathTracer_C");
		return ptr;
	}


	void STATIC_Place_Trajectory_Points_Only(class UParticleSystemComponent** Trajectory_Marker_Reference, struct FHitResult* Out_Hit, bool* Points_face_up, class UObject** __WorldContext, TArray<struct FVector>* Trajectory_Points, TArray<class UParticleSystemComponent*>* Trajectory_Beam_Reference);
	void STATIC_Spawn_Trajectory_Points_Only(int* Divisions, float* Point_Size, struct FLinearColor* Color, class UTexture** Point_Texture, class UTexture** Marker_Texture, bool* Points_face_up, class UObject** __WorldContext, TArray<class UMaterialInstanceDynamic*>* MID_Array_Reference, TArray<class UParticleSystemComponent*>* Trajectory_Beam_Reference, class UParticleSystemComponent** TrajectoryMarker_Reference);
	void STATIC_Spawn_Trajectory_Beam_Only(int* Divisions, float* Beam_Size, struct FLinearColor* Color, class UTexture** Marker_Texture, class UObject** __WorldContext, TArray<class UMaterialInstanceDynamic*>* MID_Array_Reference, TArray<class UParticleSystemComponent*>* Trajectory_Beam_Reference, class UParticleSystemComponent** TrajectoryMarker_Reference);
	void STATIC_Calculate_Box_Trajectory(float* Duration, int* Divisions, struct FVector* Location, struct FVector* Velocity, int* Max_bounces, float* Restitution, float* Friction, float* Gravity_Scale, bool* Trace_Complex, TEnumAsByte<EDrawDebugTrace>* Draw_Debug_Type, struct FVector* Half_Size, struct FRotator* Orientation, bool* Projectile_Movement, class UObject** __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* Object_Type, TArray<class AActor*>* Actors_to_ignore, TArray<struct FVector>* Trajectory_Points, struct FHitResult* Out_Hit);
	void STATIC_Calculate_Capsule_Trajectory(float* Duration, int* Divisions, struct FVector* Location, struct FVector* Velocity, int* Max_bounces, float* Restitution, float* Friction, float* Gravity_Scale, bool* Trace_Complex, TEnumAsByte<EDrawDebugTrace>* Draw_Debug_Type, float* Radius, float* Half_Height, bool* Projectile_Movement, class UObject** __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* Object_Type, TArray<class AActor*>* Actors_to_ignore, TArray<struct FVector>* Trajectory_Points, struct FHitResult* Out_Hit);
	void STATIC_Calculate_Sphere_Trajectory(float* Duration, int* Divisions, struct FVector* Location, struct FVector* Velocity, int* Max_bounces, float* Restitution, float* Friction, float* Gravity_Scale, bool* Trace_Complex, TEnumAsByte<EDrawDebugTrace>* Draw_Debug_Type, float* Radius, bool* Projectile_Movement, class UObject** __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* Object_Type, TArray<class AActor*>* Actors_to_ignore, TArray<struct FVector>* Trajectory_Points, struct FHitResult* Out_Hit);
	void STATIC_Calculate_Line_Trajectory(float* Duration, int* Divisions, struct FVector* Location, struct FVector* Velocity, int* Max_bounces, float* Restitution, float* Friction, float* Gravity_Scale, bool* Trace_Complex, TEnumAsByte<EDrawDebugTrace>* Draw_Debug_Type, bool* Projectile_Movement, class UObject** __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* Object_Type, TArray<class AActor*>* Actors_to_ignore, TArray<struct FVector>* Trajectory_Points, struct FHitResult* Out_Hit);
	void STATIC_Set_Trajectory_Beam_Textures(class UTexture** Beam_Point_Texture, class UTexture** Marker_Texture, class UObject** __WorldContext, TArray<class UMaterialInstanceDynamic*>* MID_Array_Reference);
	void STATIC_Place_Trajectory_Beam(class UParticleSystemComponent** Trajectory_Marker_Reference, struct FHitResult* Out_Hit, class UObject** __WorldContext, TArray<struct FVector>* Trajectory_Points, TArray<class UParticleSystemComponent*>* Trajectory_Beam_Reference);
	void STATIC_Set_Trajectory_Beam_Color(struct FLinearColor* Color, class UObject** __WorldContext, TArray<class UMaterialInstanceDynamic*>* MID_Array_Reference);
	void STATIC_Spawn_Trajectory_Beam_with_Points(int* Divisions, float* Beam_Size, struct FLinearColor* Color, class UTexture** Beam_Point_Texture, class UTexture** Marker_Texture, class UObject** __WorldContext, TArray<class UMaterialInstanceDynamic*>* MID_Array_Reference, TArray<class UParticleSystemComponent*>* Trajectory_Beam_Reference, class UParticleSystemComponent** TrajectoryMarker_Reference);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
