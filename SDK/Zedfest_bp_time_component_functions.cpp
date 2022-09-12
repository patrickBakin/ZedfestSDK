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

// Function bp_time_component.bp_time_component_C.snapshot_client_build
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>      bones_transform                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent** skeletal_mesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  snapshot_name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseSnapshot           PoseSnapshot                   (Parm, OutParm)

void Ubp_time_component_C::snapshot_client_build(class USkeletalMeshComponent** skeletal_mesh, struct FName* snapshot_name, TArray<struct FTransform>* bones_transform, struct FPoseSnapshot* PoseSnapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.snapshot_client_build");

	Ubp_time_component_C_snapshot_client_build_Params params;
	params.skeletal_mesh = skeletal_mesh;
	params.snapshot_name = snapshot_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bones_transform != nullptr)
		*bones_transform = params.bones_transform;
	if (PoseSnapshot != nullptr)
		*PoseSnapshot = params.PoseSnapshot;
}


// Function bp_time_component.bp_time_component_C.enable_primitive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_disabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fs_time_data*           time_data                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubp_time_component_C::enable_primitive(bool* is_disabled, struct Fs_time_data* time_data)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.enable_primitive");

	Ubp_time_component_C_enable_primitive_Params params;
	params.is_disabled = is_disabled;
	params.time_data = time_data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.check_validness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubp_time_component_C::check_validness(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.check_validness");

	Ubp_time_component_C_check_validness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function bp_time_component.bp_time_component_C.tick_restore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fs_time_data*           time_data                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubp_time_component_C::tick_restore(struct Fs_time_data* time_data)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.tick_restore");

	Ubp_time_component_C_tick_restore_Params params;
	params.time_data = time_data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.enable_char
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_disabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fs_time_data*           time_data                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubp_time_component_C::enable_char(bool* is_disabled, struct Fs_time_data* time_data)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.enable_char");

	Ubp_time_component_C_enable_char_Params params;
	params.is_disabled = is_disabled;
	params.time_data = time_data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.save_primitive
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fs_time_data            return_time                    (Parm, OutParm)

void Ubp_time_component_C::save_primitive(struct Fs_time_data* return_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.save_primitive");

	Ubp_time_component_C_save_primitive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_time != nullptr)
		*return_time = params.return_time;
}


// Function bp_time_component.bp_time_component_C.save_char
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fs_time_data            return_time                    (Parm, OutParm)

void Ubp_time_component_C::save_char(struct Fs_time_data* return_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.save_char");

	Ubp_time_component_C_save_char_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_time != nullptr)
		*return_time = params.return_time;
}


// Function bp_time_component.bp_time_component_C.OnRep_owner_reference
// (BlueprintCallable, BlueprintEvent)

void Ubp_time_component_C::OnRep_owner_reference()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.OnRep_owner_reference");

	Ubp_time_component_C_OnRep_owner_reference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.get_current_time
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct Fs_time_data            time_data                      (Parm, OutParm)

void Ubp_time_component_C::get_current_time(struct Fs_time_data* time_data)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.get_current_time");

	Ubp_time_component_C_get_current_time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (time_data != nullptr)
		*time_data = params.time_data;
}


// Function bp_time_component.bp_time_component_C.restore_time
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ubp_time_component_C::restore_time()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.restore_time");

	Ubp_time_component_C_restore_time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.remove_time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          remove_first                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_time_component_C::remove_time(bool* remove_first)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.remove_time");

	Ubp_time_component_C_remove_time_Params params;
	params.remove_first = remove_first;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.snapshot_server_build
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent** skeletal_mesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  snapshot_name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseSnapshot           PoseSnapshot                   (Parm, OutParm)

void Ubp_time_component_C::snapshot_server_build(class USkeletalMeshComponent** skeletal_mesh, struct FName* snapshot_name, struct FPoseSnapshot* PoseSnapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.snapshot_server_build");

	Ubp_time_component_C_snapshot_server_build_Params params;
	params.skeletal_mesh = skeletal_mesh;
	params.snapshot_name = snapshot_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PoseSnapshot != nullptr)
		*PoseSnapshot = params.PoseSnapshot;
}


// Function bp_time_component.bp_time_component_C.record_time
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ubp_time_component_C::record_time()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.record_time");

	Ubp_time_component_C_record_time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.rpc_time_reverse
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_time_component_C::rpc_time_reverse(bool* disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.rpc_time_reverse");

	Ubp_time_component_C_rpc_time_reverse_Params params;
	params.disable = disable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.client_time_reverse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_time_component_C::client_time_reverse(bool* disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.client_time_reverse");

	Ubp_time_component_C_client_time_reverse_Params params;
	params.disable = disable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.multicast_tick
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fs_time_data*           time_data                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubp_time_component_C::multicast_tick(struct Fs_time_data* time_data)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.multicast_tick");

	Ubp_time_component_C_multicast_tick_Params params;
	params.time_data = time_data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ubp_time_component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.ReceiveBeginPlay");

	Ubp_time_component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.multicast_enable
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_disable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fs_time_data*           time_data                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubp_time_component_C::multicast_enable(bool* is_disable, struct Fs_time_data* time_data)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.multicast_enable");

	Ubp_time_component_C_multicast_enable_Params params;
	params.is_disable = is_disable;
	params.time_data = time_data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.client_notify
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_tick_update                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Disabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fs_time_data*           time_data                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           time_index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_time_component_C::client_notify(bool* is_tick_update, bool* Disabled, struct Fs_time_data* time_data, int* time_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.client_notify");

	Ubp_time_component_C_client_notify_Params params;
	params.is_tick_update = is_tick_update;
	params.Disabled = Disabled;
	params.time_data = time_data;
	params.time_index = time_index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.server_notify
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_tick_update                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Disabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fs_time_data*           time_data                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           time_index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_time_component_C::server_notify(bool* is_tick_update, bool* Disabled, struct Fs_time_data* time_data, int* time_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.server_notify");

	Ubp_time_component_C_server_notify_Params params;
	params.is_tick_update = is_tick_update;
	params.Disabled = Disabled;
	params.time_data = time_data;
	params.time_index = time_index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_time_component_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.ReceiveTick");

	Ubp_time_component_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.ExecuteUbergraph_bp_time_component
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_time_component_C::ExecuteUbergraph_bp_time_component(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.ExecuteUbergraph_bp_time_component");

	Ubp_time_component_C_ExecuteUbergraph_bp_time_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.time_updated_server__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_tick_update                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Disabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fs_time_data*           time_data                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           time_index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_time_component_C::time_updated_server__DelegateSignature(bool* is_tick_update, bool* Disabled, struct Fs_time_data* time_data, int* time_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.time_updated_server__DelegateSignature");

	Ubp_time_component_C_time_updated_server__DelegateSignature_Params params;
	params.is_tick_update = is_tick_update;
	params.Disabled = Disabled;
	params.time_data = time_data;
	params.time_index = time_index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_time_component.bp_time_component_C.time_updated_client__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_tick_update                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Disabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fs_time_data*           time_data                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           time_index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_time_component_C::time_updated_client__DelegateSignature(bool* is_tick_update, bool* Disabled, struct Fs_time_data* time_data, int* time_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_time_component.bp_time_component_C.time_updated_client__DelegateSignature");

	Ubp_time_component_C_time_updated_client__DelegateSignature_Params params;
	params.is_tick_update = is_tick_update;
	params.Disabled = Disabled;
	params.time_data = time_data;
	params.time_index = time_index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
