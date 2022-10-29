#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bp_time_component.bp_time_component_C.snapshot_client_build
struct Ubp_time_component_C_snapshot_client_build_Params
{
	TArray<struct FTransform>                          bones_transform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMeshComponent**                     skeletal_mesh;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      snapshot_name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseSnapshot                               PoseSnapshot;                                             // (Parm, OutParm)
};

// Function bp_time_component.bp_time_component_C.enable_primitive
struct Ubp_time_component_C_enable_primitive_Params
{
	bool*                                              is_disabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fs_time_data*                               time_data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bp_time_component.bp_time_component_C.check_validness
struct Ubp_time_component_C_check_validness_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_time_component.bp_time_component_C.tick_restore
struct Ubp_time_component_C_tick_restore_Params
{
	struct Fs_time_data*                               time_data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bp_time_component.bp_time_component_C.enable_char
struct Ubp_time_component_C_enable_char_Params
{
	bool*                                              is_disabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fs_time_data*                               time_data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bp_time_component.bp_time_component_C.save_primitive
struct Ubp_time_component_C_save_primitive_Params
{
	struct Fs_time_data                                return_time;                                              // (Parm, OutParm)
};

// Function bp_time_component.bp_time_component_C.save_char
struct Ubp_time_component_C_save_char_Params
{
	struct Fs_time_data                                return_time;                                              // (Parm, OutParm)
};

// Function bp_time_component.bp_time_component_C.OnRep_owner_reference
struct Ubp_time_component_C_OnRep_owner_reference_Params
{
};

// Function bp_time_component.bp_time_component_C.get_current_time
struct Ubp_time_component_C_get_current_time_Params
{
	struct Fs_time_data                                time_data;                                                // (Parm, OutParm)
};

// Function bp_time_component.bp_time_component_C.restore_time
struct Ubp_time_component_C_restore_time_Params
{
};

// Function bp_time_component.bp_time_component_C.remove_time
struct Ubp_time_component_C_remove_time_Params
{
	bool*                                              remove_first;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_time_component.bp_time_component_C.snapshot_server_build
struct Ubp_time_component_C_snapshot_server_build_Params
{
	class USkeletalMeshComponent**                     skeletal_mesh;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      snapshot_name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseSnapshot                               PoseSnapshot;                                             // (Parm, OutParm)
};

// Function bp_time_component.bp_time_component_C.record_time
struct Ubp_time_component_C_record_time_Params
{
};

// Function bp_time_component.bp_time_component_C.rpc_time_reverse
struct Ubp_time_component_C_rpc_time_reverse_Params
{
	bool*                                              disable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_time_component.bp_time_component_C.client_time_reverse
struct Ubp_time_component_C_client_time_reverse_Params
{
	bool*                                              disable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_time_component.bp_time_component_C.multicast_tick
struct Ubp_time_component_C_multicast_tick_Params
{
	struct Fs_time_data*                               time_data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bp_time_component.bp_time_component_C.ReceiveBeginPlay
struct Ubp_time_component_C_ReceiveBeginPlay_Params
{
};

// Function bp_time_component.bp_time_component_C.multicast_enable
struct Ubp_time_component_C_multicast_enable_Params
{
	bool*                                              is_disable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fs_time_data*                               time_data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bp_time_component.bp_time_component_C.client_notify
struct Ubp_time_component_C_client_notify_Params
{
	bool*                                              is_tick_update;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Disabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fs_time_data*                               time_data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               time_index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_time_component.bp_time_component_C.server_notify
struct Ubp_time_component_C_server_notify_Params
{
	bool*                                              is_tick_update;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Disabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fs_time_data*                               time_data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               time_index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_time_component.bp_time_component_C.ReceiveTick
struct Ubp_time_component_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_time_component.bp_time_component_C.ExecuteUbergraph_bp_time_component
struct Ubp_time_component_C_ExecuteUbergraph_bp_time_component_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_time_component.bp_time_component_C.time_updated_server__DelegateSignature
struct Ubp_time_component_C_time_updated_server__DelegateSignature_Params
{
	bool*                                              is_tick_update;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Disabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fs_time_data*                               time_data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               time_index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_time_component.bp_time_component_C.time_updated_client__DelegateSignature
struct Ubp_time_component_C_time_updated_client__DelegateSignature_Params
{
	bool*                                              is_tick_update;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Disabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fs_time_data*                               time_data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               time_index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
