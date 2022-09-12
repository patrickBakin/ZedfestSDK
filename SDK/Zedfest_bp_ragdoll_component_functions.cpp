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

// Function bp_ragdoll_component.bp_ragdoll_component_C.snapshot_client_build
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>      bones_transform                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  snapshot_name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseSnapshot           PoseSnapshot                   (Parm, OutParm)

void Ubp_ragdoll_component_C::snapshot_client_build(struct FName* snapshot_name, TArray<struct FTransform>* bones_transform, struct FPoseSnapshot* PoseSnapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.snapshot_client_build");

	Ubp_ragdoll_component_C_snapshot_client_build_Params params;
	params.snapshot_name = snapshot_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bones_transform != nullptr)
		*bones_transform = params.bones_transform;
	if (PoseSnapshot != nullptr)
		*PoseSnapshot = params.PoseSnapshot;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.check_reference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::check_reference(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.check_reference");

	Ubp_ragdoll_component_C_check_reference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.server_disable_prediction
// (Public, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::server_disable_prediction()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.server_disable_prediction");

	Ubp_ragdoll_component_C_server_disable_prediction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.server_refresh_ragdolls
// (Public, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::server_refresh_ragdolls()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.server_refresh_ragdolls");

	Ubp_ragdoll_component_C_server_refresh_ragdolls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.server_auto_reset
// (Public, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::server_auto_reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.server_auto_reset");

	Ubp_ragdoll_component_C_server_auto_reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::tick_update_location()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_location");

	Ubp_ragdoll_component_C_tick_update_location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.tick_ragdoll_blend
// (Public, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::tick_ragdoll_blend()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.tick_ragdoll_blend");

	Ubp_ragdoll_component_C_tick_ragdoll_blend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_rotation
// (Public, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::tick_update_rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_rotation");

	Ubp_ragdoll_component_C_tick_update_rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.OnRep_character_reference
// (BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::OnRep_character_reference()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.OnRep_character_reference");

	Ubp_ragdoll_component_C_OnRep_character_reference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.recover_ragdoll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          disable_no_anim                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Pose                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                recover_velocity               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          reset_time                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::recover_ragdoll(bool* disable_no_anim, int* Pose, float* Yaw, struct FVector* recover_velocity, float* reset_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.recover_ragdoll");

	Ubp_ragdoll_component_C_recover_ragdoll_Params params;
	params.disable_no_anim = disable_no_anim;
	params.Pose = Pose;
	params.Yaw = Yaw;
	params.recover_velocity = recover_velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (reset_time != nullptr)
		*reset_time = params.reset_time;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.init_ragdoll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_fatal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                init_velocity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::init_ragdoll(bool* is_fatal, struct FVector* init_velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.init_ragdoll");

	Ubp_ragdoll_component_C_init_ragdoll_Params params;
	params.is_fatal = is_fatal;
	params.init_velocity = init_velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.snapshot_server_build
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  snapshot_name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseSnapshot           PoseSnapshot                   (Parm, OutParm)

void Ubp_ragdoll_component_C::snapshot_server_build(struct FName* snapshot_name, struct FPoseSnapshot* PoseSnapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.snapshot_server_build");

	Ubp_ragdoll_component_C_snapshot_server_build_Params params;
	params.snapshot_name = snapshot_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PoseSnapshot != nullptr)
		*PoseSnapshot = params.PoseSnapshot;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.get_character_velocity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          ragdoll_velocity               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::get_character_velocity(bool* ragdoll_velocity, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.get_character_velocity");

	Ubp_ragdoll_component_C_get_character_velocity_Params params;
	params.ragdoll_velocity = ragdoll_velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.tick_capsule_location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 pelvis_location                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 capsule_location               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 trace_hit_location             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           trace_hit_ground               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           pelvis_fully_grounded          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           pelvis_distance_grounded       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          pelvis_distance_to_ground      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::tick_capsule_location(struct FVector* pelvis_location, struct FVector* capsule_location, struct FVector* trace_hit_location, bool* trace_hit_ground, bool* pelvis_fully_grounded, bool* pelvis_distance_grounded, float* pelvis_distance_to_ground)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.tick_capsule_location");

	Ubp_ragdoll_component_C_tick_capsule_location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pelvis_location != nullptr)
		*pelvis_location = params.pelvis_location;
	if (capsule_location != nullptr)
		*capsule_location = params.capsule_location;
	if (trace_hit_location != nullptr)
		*trace_hit_location = params.trace_hit_location;
	if (trace_hit_ground != nullptr)
		*trace_hit_ground = params.trace_hit_ground;
	if (pelvis_fully_grounded != nullptr)
		*pelvis_fully_grounded = params.pelvis_fully_grounded;
	if (pelvis_distance_grounded != nullptr)
		*pelvis_distance_grounded = params.pelvis_distance_grounded;
	if (pelvis_distance_to_ground != nullptr)
		*pelvis_distance_to_ground = params.pelvis_distance_to_ground;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.get_pelvis_rotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            pose_id                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          pelvis_yaw                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::get_pelvis_rotation(int* pose_id, float* pelvis_yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.get_pelvis_rotation");

	Ubp_ragdoll_component_C_get_pelvis_rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pose_id != nullptr)
		*pose_id = params.pose_id;
	if (pelvis_yaw != nullptr)
		*pelvis_yaw = params.pelvis_yaw;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.server_find_pelvis_offset
// (Public, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::server_find_pelvis_offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.server_find_pelvis_offset");

	Ubp_ragdoll_component_C_server_find_pelvis_offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_bake
// (Net, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>*     bones_transform                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ubp_ragdoll_component_C::multicast_ragdoll_bake(TArray<struct FTransform>* bones_transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_bake");

	Ubp_ragdoll_component_C_multicast_ragdoll_bake_Params params;
	params.bones_transform = bones_transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_bake
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::rpc_ragdoll_bake()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_bake");

	Ubp_ragdoll_component_C_rpc_ragdoll_bake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveTick");

	Ubp_ragdoll_component_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ubp_ragdoll_component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveBeginPlay");

	Ubp_ragdoll_component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_rotation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::multicast_rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_rotation");

	Ubp_ragdoll_component_C_multicast_rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_start
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_fatal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                init_velocity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::multicast_ragdoll_start(bool* is_fatal, struct FVector* init_velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_start");

	Ubp_ragdoll_component_C_multicast_ragdoll_start_Params params;
	params.is_fatal = is_fatal;
	params.init_velocity = init_velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_bake
// (BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::client_ragdoll_bake()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_bake");

	Ubp_ragdoll_component_C_client_ragdoll_bake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_location
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::multicast_location()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_location");

	Ubp_ragdoll_component_C_multicast_location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_fatal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::client_ragdoll_start(bool* is_fatal)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_start");

	Ubp_ragdoll_component_C_client_ragdoll_start_Params params;
	params.is_fatal = is_fatal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_start
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_fatal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::rpc_ragdoll_start(bool* is_fatal)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_start");

	Ubp_ragdoll_component_C_rpc_ragdoll_start_Params params;
	params.is_fatal = is_fatal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.client_refresh_ragdolls
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::client_refresh_ragdolls()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.client_refresh_ragdolls");

	Ubp_ragdoll_component_C_client_refresh_ragdolls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_recover
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          disable_no_anim                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           pose_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         pose_yaw                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::rpc_ragdoll_recover(bool* disable_no_anim, int* pose_id, float* pose_yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_recover");

	Ubp_ragdoll_component_C_rpc_ragdoll_recover_Params params;
	params.disable_no_anim = disable_no_anim;
	params.pose_id = pose_id;
	params.pose_yaw = pose_yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_start
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          disable_no_anim                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           pose_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         pose_yaw                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                recover_velocity               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::multicast_ragdoll_recover_start(bool* disable_no_anim, int* pose_id, float* pose_yaw, struct FVector* recover_velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_start");

	Ubp_ragdoll_component_C_multicast_ragdoll_recover_start_Params params;
	params.disable_no_anim = disable_no_anim;
	params.pose_id = pose_id;
	params.pose_yaw = pose_yaw;
	params.recover_velocity = recover_velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_recover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          disable_no_anim                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::client_ragdoll_recover(bool* disable_no_anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_recover");

	Ubp_ragdoll_component_C_client_ragdoll_recover_Params params;
	params.disable_no_anim = disable_no_anim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_notify
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Init                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_fatal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          recover_start                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          recover_end                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::client_ragdoll_notify(bool* Init, bool* is_fatal, bool* recover_start, bool* recover_end)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_notify");

	Ubp_ragdoll_component_C_client_ragdoll_notify_Params params;
	params.Init = Init;
	params.is_fatal = is_fatal;
	params.recover_start = recover_start;
	params.recover_end = recover_end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.server_ragdoll_notify
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Init                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_fatal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          recover_start                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          recover_end                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::server_ragdoll_notify(bool* Init, bool* is_fatal, bool* recover_start, bool* recover_end)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.server_ragdoll_notify");

	Ubp_ragdoll_component_C_server_ragdoll_notify_Params params;
	params.Init = Init;
	params.is_fatal = is_fatal;
	params.recover_start = recover_start;
	params.recover_end = recover_end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_end
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Ubp_ragdoll_component_C::multicast_ragdoll_recover_end()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_end");

	Ubp_ragdoll_component_C_multicast_ragdoll_recover_end_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_pose
// (Net, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>*     bones_transform                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ubp_ragdoll_component_C::multicast_pose(TArray<struct FTransform>* bones_transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_pose");

	Ubp_ragdoll_component_C_multicast_pose_Params params;
	params.bones_transform = bones_transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.ExecuteUbergraph_bp_ragdoll_component
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::ExecuteUbergraph_bp_ragdoll_component(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.ExecuteUbergraph_bp_ragdoll_component");

	Ubp_ragdoll_component_C_ExecuteUbergraph_bp_ragdoll_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_server__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Init                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_fatal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          recover_start                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          recover_end                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::ragdoll_updated_server__DelegateSignature(bool* Init, bool* is_fatal, bool* recover_start, bool* recover_end)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_server__DelegateSignature");

	Ubp_ragdoll_component_C_ragdoll_updated_server__DelegateSignature_Params params;
	params.Init = Init;
	params.is_fatal = is_fatal;
	params.recover_start = recover_start;
	params.recover_end = recover_end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_client__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Init                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_fatal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          recover_start                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          recover_end                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_ragdoll_component_C::ragdoll_updated_client__DelegateSignature(bool* Init, bool* is_fatal, bool* recover_start, bool* recover_end)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_client__DelegateSignature");

	Ubp_ragdoll_component_C_ragdoll_updated_client__DelegateSignature_Params params;
	params.Init = Init;
	params.is_fatal = is_fatal;
	params.recover_start = recover_start;
	params.recover_end = recover_end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
