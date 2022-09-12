#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bp_time_component.bp_time_component_C
// 0x00A0 (0x0198 - 0x00F8)
class Ubp_time_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               is_world_server;                                          // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_time_reversed;                                         // 0x0101(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
	TArray<struct Fs_time_data>                        time_data;                                                // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FPoseSnapshot                               time_pose;                                                // 0x0118(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                time_frames_record_limit;                                 // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                time_frames_restore_speed;                                // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      owner_reference;                                          // 0x0158(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         primitive_reference;                                      // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ACharacter*                                  character_reference;                                      // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_primitive;                                             // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_character;                                             // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0172(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    time_updated_client;                                      // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    time_updated_server;                                      // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bp_time_component.bp_time_component_C");
		return ptr;
	}


	void snapshot_client_build(class USkeletalMeshComponent** skeletal_mesh, struct FName* snapshot_name, TArray<struct FTransform>* bones_transform, struct FPoseSnapshot* PoseSnapshot);
	void enable_primitive(bool* is_disabled, struct Fs_time_data* time_data);
	void check_validness(bool* Success);
	void tick_restore(struct Fs_time_data* time_data);
	void enable_char(bool* is_disabled, struct Fs_time_data* time_data);
	void save_primitive(struct Fs_time_data* return_time);
	void save_char(struct Fs_time_data* return_time);
	void OnRep_owner_reference();
	void get_current_time(struct Fs_time_data* time_data);
	void restore_time();
	void remove_time(bool* remove_first);
	void snapshot_server_build(class USkeletalMeshComponent** skeletal_mesh, struct FName* snapshot_name, struct FPoseSnapshot* PoseSnapshot);
	void record_time();
	void rpc_time_reverse(bool* disable);
	void client_time_reverse(bool* disable);
	void multicast_tick(struct Fs_time_data* time_data);
	void ReceiveBeginPlay();
	void multicast_enable(bool* is_disable, struct Fs_time_data* time_data);
	void client_notify(bool* is_tick_update, bool* Disabled, struct Fs_time_data* time_data, int* time_index);
	void server_notify(bool* is_tick_update, bool* Disabled, struct Fs_time_data* time_data, int* time_index);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_bp_time_component(int* EntryPoint);
	void time_updated_server__DelegateSignature(bool* is_tick_update, bool* Disabled, struct Fs_time_data* time_data, int* time_index);
	void time_updated_client__DelegateSignature(bool* is_tick_update, bool* Disabled, struct Fs_time_data* time_data, int* time_index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
