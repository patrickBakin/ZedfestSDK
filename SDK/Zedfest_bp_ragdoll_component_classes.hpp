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

// BlueprintGeneratedClass bp_ragdoll_component.bp_ragdoll_component_C
// 0x01C8 (0x02C0 - 0x00F8)
class Ubp_ragdoll_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ACharacter*                                  character_reference;                                      // 0x0100(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      skeletal_mesh;                                            // 0x0108(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               is_world_owner;                                           // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_world_server;                                          // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_pelvis_found;                                          // 0x0112(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll;                                               // 0x0113(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll_grounded;                                      // 0x0114(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll_recovering;                                    // 0x0115(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll_baked;                                         // 0x0116(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll_fatal;                                         // 0x0117(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll_animated;                                      // 0x0118(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	struct FVector                                     pelvis_offset;                                            // 0x011C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     capsule_location;                                         // 0x0128(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FPoseSnapshot                               server_ragdoll_pose;                                      // 0x0138(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPoseSnapshot                               server_baked_pose;                                        // 0x0170(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPoseSnapshot                               client_ragdoll_pose;                                      // 0x01A8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPoseSnapshot                               client_baked_pose;                                        // 0x01E0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       pelvis_name;                                              // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               client_sided_pose_check;                                  // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	float                                              ragdoll_blend;                                            // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              recover_alpha;                                            // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              recover_yaw;                                              // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              pelvis_ground_distance;                                   // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              animation_spring_power;                                   // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              capsule_interp;                                           // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ragdoll_updated_client;                                   // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              current_anim_duration;                                    // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ragdoll_blend_in;                                         // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ragdoll_blend_out;                                        // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              disable_prediction_speed;                                 // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              net_min_fps;                                              // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              net_max_fps;                                              // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                recover_backward;                                         // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                recover_forward;                                          // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ragdoll_reset_timer;                                      // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              server_recover_timer;                                     // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              recover_backward_apex;                                    // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              recover_forward_apex;                                     // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              trace_hit_collision;                                      // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EDrawDebugTrace>                       debug_trace_mode;                                         // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ragdoll_updated_server;                                   // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FName>                               BoneArray;                                                // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bp_ragdoll_component.bp_ragdoll_component_C");
		return ptr;
	}


	void snapshot_client_build(struct FName* snapshot_name, TArray<struct FTransform>* bones_transform, struct FPoseSnapshot* PoseSnapshot);
	void check_reference(bool* Success);
	void server_disable_prediction();
	void server_refresh_ragdolls();
	void server_auto_reset();
	void tick_update_location();
	void tick_ragdoll_blend();
	void tick_update_rotation();
	void OnRep_character_reference();
	void recover_ragdoll(bool* disable_no_anim, int* Pose, float* Yaw, struct FVector* recover_velocity, float* reset_time);
	void init_ragdoll(bool* is_fatal, struct FVector* init_velocity);
	void snapshot_server_build(struct FName* snapshot_name, struct FPoseSnapshot* PoseSnapshot);
	void get_character_velocity(bool* ragdoll_velocity, struct FVector* Velocity);
	void tick_capsule_location(struct FVector* pelvis_location, struct FVector* capsule_location, struct FVector* trace_hit_location, bool* trace_hit_ground, bool* pelvis_fully_grounded, bool* pelvis_distance_grounded, float* pelvis_distance_to_ground);
	void get_pelvis_rotation(int* pose_id, float* pelvis_yaw);
	void server_find_pelvis_offset();
	void multicast_ragdoll_bake(TArray<struct FTransform>* bones_transform);
	void rpc_ragdoll_bake();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void multicast_rotation();
	void multicast_ragdoll_start(bool* is_fatal, struct FVector* init_velocity);
	void client_ragdoll_bake();
	void multicast_location();
	void client_ragdoll_start(bool* is_fatal);
	void rpc_ragdoll_start(bool* is_fatal);
	void client_refresh_ragdolls();
	void rpc_ragdoll_recover(bool* disable_no_anim, int* pose_id, float* pose_yaw);
	void multicast_ragdoll_recover_start(bool* disable_no_anim, int* pose_id, float* pose_yaw, struct FVector* recover_velocity);
	void client_ragdoll_recover(bool* disable_no_anim);
	void client_ragdoll_notify(bool* Init, bool* is_fatal, bool* recover_start, bool* recover_end);
	void server_ragdoll_notify(bool* Init, bool* is_fatal, bool* recover_start, bool* recover_end);
	void multicast_ragdoll_recover_end();
	void multicast_pose(TArray<struct FTransform>* bones_transform);
	void ExecuteUbergraph_bp_ragdoll_component(int* EntryPoint);
	void ragdoll_updated_server__DelegateSignature(bool* Init, bool* is_fatal, bool* recover_start, bool* recover_end);
	void ragdoll_updated_client__DelegateSignature(bool* Init, bool* is_fatal, bool* recover_start, bool* recover_end);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
