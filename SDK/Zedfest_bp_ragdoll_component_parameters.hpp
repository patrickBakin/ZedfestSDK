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

// Function bp_ragdoll_component.bp_ragdoll_component_C.snapshot_client_build
struct Ubp_ragdoll_component_C_snapshot_client_build_Params
{
	TArray<struct FTransform>                          bones_transform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      snapshot_name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseSnapshot                               PoseSnapshot;                                             // (Parm, OutParm)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.check_reference
struct Ubp_ragdoll_component_C_check_reference_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.server_disable_prediction
struct Ubp_ragdoll_component_C_server_disable_prediction_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.server_refresh_ragdolls
struct Ubp_ragdoll_component_C_server_refresh_ragdolls_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.server_auto_reset
struct Ubp_ragdoll_component_C_server_auto_reset_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_location
struct Ubp_ragdoll_component_C_tick_update_location_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.tick_ragdoll_blend
struct Ubp_ragdoll_component_C_tick_ragdoll_blend_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_rotation
struct Ubp_ragdoll_component_C_tick_update_rotation_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.OnRep_character_reference
struct Ubp_ragdoll_component_C_OnRep_character_reference_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.recover_ragdoll
struct Ubp_ragdoll_component_C_recover_ragdoll_Params
{
	bool*                                              disable_no_anim;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Pose;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    recover_velocity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              reset_time;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.init_ragdoll
struct Ubp_ragdoll_component_C_init_ragdoll_Params
{
	bool*                                              is_fatal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    init_velocity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.snapshot_server_build
struct Ubp_ragdoll_component_C_snapshot_server_build_Params
{
	struct FName*                                      snapshot_name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseSnapshot                               PoseSnapshot;                                             // (Parm, OutParm)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.get_character_velocity
struct Ubp_ragdoll_component_C_get_character_velocity_Params
{
	bool*                                              ragdoll_velocity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.tick_capsule_location
struct Ubp_ragdoll_component_C_tick_capsule_location_Params
{
	struct FVector                                     pelvis_location;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     capsule_location;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     trace_hit_location;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               trace_hit_ground;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               pelvis_fully_grounded;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               pelvis_distance_grounded;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              pelvis_distance_to_ground;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.get_pelvis_rotation
struct Ubp_ragdoll_component_C_get_pelvis_rotation_Params
{
	int                                                pose_id;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              pelvis_yaw;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.server_find_pelvis_offset
struct Ubp_ragdoll_component_C_server_find_pelvis_offset_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_bake
struct Ubp_ragdoll_component_C_multicast_ragdoll_bake_Params
{
	TArray<struct FTransform>*                         bones_transform;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_bake
struct Ubp_ragdoll_component_C_rpc_ragdoll_bake_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveTick
struct Ubp_ragdoll_component_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveBeginPlay
struct Ubp_ragdoll_component_C_ReceiveBeginPlay_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_rotation
struct Ubp_ragdoll_component_C_multicast_rotation_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_start
struct Ubp_ragdoll_component_C_multicast_ragdoll_start_Params
{
	bool*                                              is_fatal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    init_velocity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_bake
struct Ubp_ragdoll_component_C_client_ragdoll_bake_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_location
struct Ubp_ragdoll_component_C_multicast_location_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_start
struct Ubp_ragdoll_component_C_client_ragdoll_start_Params
{
	bool*                                              is_fatal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_start
struct Ubp_ragdoll_component_C_rpc_ragdoll_start_Params
{
	bool*                                              is_fatal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.client_refresh_ragdolls
struct Ubp_ragdoll_component_C_client_refresh_ragdolls_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_recover
struct Ubp_ragdoll_component_C_rpc_ragdoll_recover_Params
{
	bool*                                              disable_no_anim;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               pose_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             pose_yaw;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_start
struct Ubp_ragdoll_component_C_multicast_ragdoll_recover_start_Params
{
	bool*                                              disable_no_anim;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               pose_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             pose_yaw;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    recover_velocity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_recover
struct Ubp_ragdoll_component_C_client_ragdoll_recover_Params
{
	bool*                                              disable_no_anim;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_notify
struct Ubp_ragdoll_component_C_client_ragdoll_notify_Params
{
	bool*                                              Init;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_fatal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              recover_start;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              recover_end;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.server_ragdoll_notify
struct Ubp_ragdoll_component_C_server_ragdoll_notify_Params
{
	bool*                                              Init;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_fatal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              recover_start;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              recover_end;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_end
struct Ubp_ragdoll_component_C_multicast_ragdoll_recover_end_Params
{
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_pose
struct Ubp_ragdoll_component_C_multicast_pose_Params
{
	TArray<struct FTransform>*                         bones_transform;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.ExecuteUbergraph_bp_ragdoll_component
struct Ubp_ragdoll_component_C_ExecuteUbergraph_bp_ragdoll_component_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_server__DelegateSignature
struct Ubp_ragdoll_component_C_ragdoll_updated_server__DelegateSignature_Params
{
	bool*                                              Init;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_fatal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              recover_start;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              recover_end;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_client__DelegateSignature
struct Ubp_ragdoll_component_C_ragdoll_updated_client__DelegateSignature_Params
{
	bool*                                              Init;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_fatal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              recover_start;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              recover_end;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
