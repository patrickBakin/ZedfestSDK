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

// Function BP_AIStorage.BP_AIStorage_C.AddAIActorToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ActorRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AIStorage_C::AddAIActorToList(class AActor** ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIStorage.BP_AIStorage_C.AddAIActorToList");

	ABP_AIStorage_C_AddAIActorToList_Params params;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIStorage.BP_AIStorage_C.AddActorToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ActorRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AIStorage_C::AddActorToList(class AActor** ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIStorage.BP_AIStorage_C.AddActorToList");

	ABP_AIStorage_C_AddActorToList_Params params;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIStorage.BP_AIStorage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AIStorage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIStorage.BP_AIStorage_C.ReceiveBeginPlay");

	ABP_AIStorage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIStorage.BP_AIStorage_C.AddActor
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ActorRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AIStorage_C::AddActor(class AActor** ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIStorage.BP_AIStorage_C.AddActor");

	ABP_AIStorage_C_AddActor_Params params;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIStorage.BP_AIStorage_C.AddAIActor
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ActorRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AIStorage_C::AddAIActor(class AActor** ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIStorage.BP_AIStorage_C.AddAIActor");

	ABP_AIStorage_C_AddAIActor_Params params;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIStorage.BP_AIStorage_C.ExecuteUbergraph_BP_AIStorage
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AIStorage_C::ExecuteUbergraph_BP_AIStorage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIStorage.BP_AIStorage_C.ExecuteUbergraph_BP_AIStorage");

	ABP_AIStorage_C_ExecuteUbergraph_BP_AIStorage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
