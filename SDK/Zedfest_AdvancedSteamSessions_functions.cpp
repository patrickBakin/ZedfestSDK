// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm)
// bool*                          bRequireNameOnly               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedSteamFriendsLibrary::STATIC_RequestSteamFriendInfo(struct FBPUniqueNetId* UniqueNetId, bool* bRequireNameOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo");

	UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo_Params params;
	params.UniqueNetId = UniqueNetId;
	params.bRequireNameOnly = bRequireNameOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm)
// ESteamUserOverlayType*         DialogType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedSteamFriendsLibrary::STATIC_OpenSteamUserOverlay(struct FBPUniqueNetId* UniqueNetId, ESteamUserOverlayType* DialogType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay");

	UAdvancedSteamFriendsLibrary_OpenSteamUserOverlay_Params params;
	params.UniqueNetId = UniqueNetId;
	params.DialogType = DialogType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAdvancedSteamFriendsLibrary::STATIC_GetSteamPersonaName(struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName");

	UAdvancedSteamFriendsLibrary_GetSteamPersonaName_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBPSteamGroupInfo> SteamGroups                    (Parm, OutParm, ZeroConstructor)

void UAdvancedSteamFriendsLibrary::STATIC_GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups");

	UAdvancedSteamFriendsLibrary_GetSteamGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SteamGroups != nullptr)
		*SteamGroups = params.SteamGroups;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AppId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSteamFriendsLibrary::STATIC_GetSteamFriendGamePlayed(struct FBPUniqueNetId* UniqueNetId, EBlueprintResultSwitch* Result, int* AppId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed");

	UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (AppId != nullptr)
		*AppId = params.AppId;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm)
// EBlueprintAsyncResultSwitch    Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// ESteamAvatarSize*              AvatarSize                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UAdvancedSteamFriendsLibrary::STATIC_GetSteamFriendAvatar(struct FBPUniqueNetId* UniqueNetId, ESteamAvatarSize* AvatarSize, EBlueprintAsyncResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar");

	UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar_Params params;
	params.UniqueNetId = UniqueNetId;
	params.AvatarSize = AvatarSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::STATIC_GetLocalSteamIDFromSteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam");

	UAdvancedSteamFriendsLibrary_GetLocalSteamIDFromSteam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAdvancedSteamFriendsLibrary::STATIC_GetFriendSteamLevel(struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel");

	UAdvancedSteamFriendsLibrary_GetFriendSteamLevel_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString*                SteamID64                      (ConstParm, Parm, ZeroConstructor)
// struct FBPUniqueNetId          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::STATIC_CreateSteamIDFromString(struct FString* SteamID64)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString");

	UAdvancedSteamFriendsLibrary_CreateSteamIDFromString_Params params;
	params.SteamID64 = SteamID64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumberOfItems                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBPSteamWorkshopID> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBPSteamWorkshopID> UAdvancedSteamWorkshopLibrary::STATIC_GetSubscribedWorkshopItems(int* NumberOfItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems");

	UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfItems != nullptr)
		*NumberOfItems = params.NumberOfItems;

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumberOfItems                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSteamWorkshopLibrary::STATIC_GetNumSubscribedWorkshopItems(int* NumberOfItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems");

	UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfItems != nullptr)
		*NumberOfItems = params.NumberOfItems;
}


// Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         GroupUniqueNetID               (Parm)
// class USteamRequestGroupOfficersCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USteamRequestGroupOfficersCallbackProxy* USteamRequestGroupOfficersCallbackProxy::STATIC_GetSteamGroupOfficerList(class UObject** WorldContextObject, struct FBPUniqueNetId* GroupUniqueNetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList");

	USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupUniqueNetID = GroupUniqueNetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPSteamWorkshopID*     WorkShopID                     (Parm)
// class USteamWSRequestUGCDetailsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USteamWSRequestUGCDetailsCallbackProxy* USteamWSRequestUGCDetailsCallbackProxy::STATIC_GetWorkshopItemDetails(class UObject** WorldContextObject, struct FBPSteamWorkshopID* WorkShopID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails");

	USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WorkShopID = WorkShopID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
