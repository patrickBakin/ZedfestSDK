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

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                URLToShow                      (Parm, ZeroConstructor)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         AllowedDomains                 (Parm, OutParm, ZeroConstructor)
// bool*                          bEmbedded                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowBackground                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowCloseButton               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OffsetX                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OffsetY                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SizeX                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SizeY                          (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedExternalUILibrary::STATIC_ShowWebURLUI(struct FString* URLToShow, bool* bEmbedded, bool* bShowBackground, bool* bShowCloseButton, int* OffsetX, int* OffsetY, int* SizeX, int* SizeY, EBlueprintResultSwitch* Result, TArray<struct FString>* AllowedDomains)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI");

	UAdvancedExternalUILibrary_ShowWebURLUI_Params params;
	params.URLToShow = URLToShow;
	params.bEmbedded = bEmbedded;
	params.bShowBackground = bShowBackground;
	params.bShowCloseButton = bShowCloseButton;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (AllowedDomains != nullptr)
		*AllowedDomains = params.AllowedDomains;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         PlayerViewingProfile           (ConstParm, Parm)
// struct FBPUniqueNetId*         PlayerToViewProfileOf          (ConstParm, Parm)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedExternalUILibrary::STATIC_ShowProfileUI(struct FBPUniqueNetId* PlayerViewingProfile, struct FBPUniqueNetId* PlayerToViewProfileOf, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI");

	UAdvancedExternalUILibrary_ShowProfileUI_Params params;
	params.PlayerViewingProfile = PlayerViewingProfile;
	params.PlayerToViewProfileOf = PlayerToViewProfileOf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                LeaderboardName                (Parm, ZeroConstructor)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedExternalUILibrary::STATIC_ShowLeaderBoardUI(struct FString* LeaderboardName, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI");

	UAdvancedExternalUILibrary_ShowLeaderBoardUI_Params params;
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedExternalUILibrary::STATIC_ShowInviteUI(class APlayerController** PlayerController, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI");

	UAdvancedExternalUILibrary_ShowInviteUI_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedExternalUILibrary::STATIC_ShowFriendsUI(class APlayerController** PlayerController, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI");

	UAdvancedExternalUILibrary_ShowFriendsUI_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         PlayerRequestingAccountUpgradeUI (ConstParm, Parm)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedExternalUILibrary::STATIC_ShowAccountUpgradeUI(struct FBPUniqueNetId* PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI");

	UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Params params;
	params.PlayerRequestingAccountUpgradeUI = PlayerRequestingAccountUpgradeUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
// (Final, Native, Static, Public, BlueprintCallable)

void UAdvancedExternalUILibrary::STATIC_CloseWebURLUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI");

	UAdvancedExternalUILibrary_CloseWebURLUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         PersonInviting                 (Parm)
// struct FString*                AppId                          (Parm, ZeroConstructor)
// struct FBlueprintSessionResult* SessionToJoin                  (ConstParm, Parm, OutParm, ReferenceParm)

void UAdvancedFriendsGameInstance::OnSessionInviteReceived(int* LocalPlayerNum, struct FBPUniqueNetId* PersonInviting, struct FString* AppId, struct FBlueprintSessionResult* SessionToJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived");

	UAdvancedFriendsGameInstance_OnSessionInviteReceived_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.PersonInviting = PersonInviting;
	params.AppId = AppId;
	params.SessionToJoin = SessionToJoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         PersonInvited                  (Parm)
// struct FBlueprintSessionResult* SessionToJoin                  (ConstParm, Parm, OutParm, ReferenceParm)

void UAdvancedFriendsGameInstance::OnSessionInviteAccepted(int* LocalPlayerNum, struct FBPUniqueNetId* PersonInvited, struct FBlueprintSessionResult* SessionToJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted");

	UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.PersonInvited = PersonInvited;
	params.SessionToJoin = SessionToJoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId*         PlayerId                       (Parm)
// bool*                          bIsTalking                     (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedFriendsGameInstance::OnPlayerTalkingStateChanged(struct FBPUniqueNetId* PlayerId, bool* bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged");

	UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Params params;
	params.PlayerId = PlayerId;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PlayerNum                      (Parm, ZeroConstructor, IsPlainOldData)
// EBPLoginStatus*                PreviousStatus                 (Parm, ZeroConstructor, IsPlainOldData)
// EBPLoginStatus*                NewStatus                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         NewPlayerUniqueNetID           (Parm)

void UAdvancedFriendsGameInstance::OnPlayerLoginStatusChanged(int* PlayerNum, EBPLoginStatus* PreviousStatus, EBPLoginStatus* NewStatus, struct FBPUniqueNetId* NewPlayerUniqueNetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged");

	UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Params params;
	params.PlayerNum = PlayerNum;
	params.PreviousStatus = PreviousStatus;
	params.NewStatus = NewStatus;
	params.NewPlayerUniqueNetID = NewPlayerUniqueNetID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PlayerNum                      (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedFriendsGameInstance::OnPlayerLoginChanged(int* PlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged");

	UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId*         PersonInviting                 (Parm)
// struct FBlueprintSessionResult* SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm)

void UAdvancedFriendsInterface::OnSessionInviteReceived(struct FBPUniqueNetId* PersonInviting, struct FBlueprintSessionResult* SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived");

	UAdvancedFriendsInterface_OnSessionInviteReceived_Params params;
	params.PersonInviting = PersonInviting;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId*         PersonInvited                  (Parm)
// struct FBlueprintSessionResult* SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm)

void UAdvancedFriendsInterface::OnSessionInviteAccepted(struct FBPUniqueNetId* PersonInvited, struct FBlueprintSessionResult* SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted");

	UAdvancedFriendsInterface_OnSessionInviteAccepted_Params params;
	params.PersonInvited = PersonInvited;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId*         PlayerId                       (Parm)
// bool*                          bIsTalking                     (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedFriendsInterface::OnPlayerVoiceStateChanged(struct FBPUniqueNetId* PlayerId, bool* bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged");

	UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Params params;
	params.PlayerId = PlayerId;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EBPLoginStatus*                PreviousStatus                 (Parm, ZeroConstructor, IsPlainOldData)
// EBPLoginStatus*                NewStatus                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         PlayerUniqueNetID              (Parm)

void UAdvancedFriendsInterface::OnPlayerLoginStatusChanged(EBPLoginStatus* PreviousStatus, EBPLoginStatus* NewStatus, struct FBPUniqueNetId* PlayerUniqueNetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged");

	UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Params params;
	params.PreviousStatus = PreviousStatus;
	params.NewStatus = NewStatus;
	params.PlayerUniqueNetID = PlayerUniqueNetID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PlayerNum                      (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedFriendsInterface::OnPlayerLoginChanged(int* PlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged");

	UAdvancedFriendsInterface_OnPlayerLoginChanged_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBPUniqueNetId>* Friends                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedFriendsLibrary::STATIC_SendSessionInviteToFriends(class APlayerController** PlayerController, TArray<struct FBPUniqueNetId>* Friends, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends");

	UAdvancedFriendsLibrary_SendSessionInviteToFriends_Params params;
	params.PlayerController = PlayerController;
	params.Friends = Friends;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedFriendsLibrary::STATIC_SendSessionInviteToFriend(class APlayerController** PlayerController, struct FBPUniqueNetId* FriendUniqueNetId, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend");

	UAdvancedFriendsLibrary_SendSessionInviteToFriend_Params params;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm)
// bool                           IsFriend                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedFriendsLibrary::STATIC_IsAFriend(class APlayerController** PlayerController, struct FBPUniqueNetId* UniqueNetId, bool* IsFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend");

	UAdvancedFriendsLibrary_IsAFriend_Params params;
	params.PlayerController = PlayerController;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFriend != nullptr)
		*IsFriend = params.IsFriend;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (Parm)
// TArray<struct FBPOnlineRecentPlayer> PlayersList                    (Parm, OutParm, ZeroConstructor)

void UAdvancedFriendsLibrary::STATIC_GetStoredRecentPlayersList(struct FBPUniqueNetId* UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList");

	UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayersList != nullptr)
		*PlayersList = params.PlayersList;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBPFriendInfo>   FriendsList                    (Parm, OutParm, ZeroConstructor)

void UAdvancedFriendsLibrary::STATIC_GetStoredFriendsList(class APlayerController** PlayerController, TArray<struct FBPFriendInfo>* FriendsList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList");

	UAdvancedFriendsLibrary_GetStoredFriendsList_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendsList != nullptr)
		*FriendsList = params.FriendsList;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         FriendUniqueNetId              (ConstParm, Parm)
// struct FBPFriendInfo           Friend                         (Parm, OutParm)

void UAdvancedFriendsLibrary::STATIC_GetFriend(class APlayerController** PlayerController, struct FBPUniqueNetId* FriendUniqueNetId, struct FBPFriendInfo* Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend");

	UAdvancedFriendsLibrary_GetFriend_Params params;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friend != nullptr)
		*Friend = params.Friend;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount*   AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString*                AttributeName                  (Parm, ZeroConstructor)
// struct FString*                NewAttributeValue              (Parm, ZeroConstructor)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedIdentityLibrary::STATIC_SetUserAccountAttribute(struct FBPUserOnlineAccount* AccountInfo, struct FString* AttributeName, struct FString* NewAttributeValue, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute");

	UAdvancedIdentityLibrary_SetUserAccountAttribute_Params params;
	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;
	params.NewAttributeValue = NewAttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount*   AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBPUniqueNetId          UniqueNetId                    (Parm, OutParm)

void UAdvancedIdentityLibrary::STATIC_GetUserID(struct FBPUserOnlineAccount* AccountInfo, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID");

	UAdvancedIdentityLibrary_GetUserID_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount*   AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 username                       (Parm, OutParm, ZeroConstructor)

void UAdvancedIdentityLibrary::STATIC_GetUserAccountRealName(struct FBPUserOnlineAccount* AccountInfo, struct FString* username)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName");

	UAdvancedIdentityLibrary_GetUserAccountRealName_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (username != nullptr)
		*username = params.username;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount*   AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 DisplayName                    (Parm, OutParm, ZeroConstructor)

void UAdvancedIdentityLibrary::STATIC_GetUserAccountDisplayName(struct FBPUserOnlineAccount* AccountInfo, struct FString* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName");

	UAdvancedIdentityLibrary_GetUserAccountDisplayName_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount*   AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString*                AttributeName                  (Parm, ZeroConstructor)
// struct FString                 AuthAttribute                  (Parm, OutParm, ZeroConstructor)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedIdentityLibrary::STATIC_GetUserAccountAuthAttribute(struct FBPUserOnlineAccount* AccountInfo, struct FString* AttributeName, struct FString* AuthAttribute, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute");

	UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Params params;
	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AuthAttribute != nullptr)
		*AuthAttribute = params.AuthAttribute;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount*   AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString*                AttributeName                  (Parm, ZeroConstructor)
// struct FString                 AttributeValue                 (Parm, OutParm, ZeroConstructor)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedIdentityLibrary::STATIC_GetUserAccountAttribute(struct FBPUserOnlineAccount* AccountInfo, struct FString* AttributeName, struct FString* AttributeValue, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute");

	UAdvancedIdentityLibrary_GetUserAccountAttribute_Params params;
	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeValue != nullptr)
		*AttributeValue = params.AttributeValue;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount*   AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 AccessToken                    (Parm, OutParm, ZeroConstructor)

void UAdvancedIdentityLibrary::STATIC_GetUserAccountAccessToken(struct FBPUserOnlineAccount* AccountInfo, struct FString* AccessToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken");

	UAdvancedIdentityLibrary_GetUserAccountAccessToken_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AccessToken != nullptr)
		*AccessToken = params.AccessToken;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBPUserOnlineAccount    AccountInfo                    (Parm, OutParm)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedIdentityLibrary::STATIC_GetUserAccount(struct FBPUniqueNetId* UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount");

	UAdvancedIdentityLibrary_GetUserAccount_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AccountInfo != nullptr)
		*AccountInfo = params.AccountInfo;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 PlayerNickname                 (Parm, OutParm, ZeroConstructor)

void UAdvancedIdentityLibrary::STATIC_GetPlayerNickname(struct FBPUniqueNetId* UniqueNetId, struct FString* PlayerNickname)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname");

	UAdvancedIdentityLibrary_GetPlayerNickname_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerNickname != nullptr)
		*PlayerNickname = params.PlayerNickname;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AuthToken                      (Parm, OutParm, ZeroConstructor)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedIdentityLibrary::STATIC_GetPlayerAuthToken(class APlayerController** PlayerController, struct FString* AuthToken, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken");

	UAdvancedIdentityLibrary_GetPlayerAuthToken_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AuthToken != nullptr)
		*AuthToken = params.AuthToken;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// EBPLoginStatus                 LoginStatus                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedIdentityLibrary::STATIC_GetLoginStatus(struct FBPUniqueNetId* UniqueNetId, EBPLoginStatus* LoginStatus, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus");

	UAdvancedIdentityLibrary_GetLoginStatus_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoginStatus != nullptr)
		*LoginStatus = params.LoginStatus;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBPUserOnlineAccount> AccountInfos                   (Parm, OutParm, ZeroConstructor)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedIdentityLibrary::STATIC_GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts");

	UAdvancedIdentityLibrary_GetAllUserAccounts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AccountInfos != nullptr)
		*AccountInfos = params.AccountInfos;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UAdvancedSessionsLibrary::STATIC_UniqueNetIdToString(struct FBPUniqueNetId* UniqueNetId, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString");

	UAdvancedSessionsLibrary_UniqueNetIdToString_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                PlayerName                     (Parm, ZeroConstructor)

void UAdvancedSessionsLibrary::STATIC_SetPlayerName(class APlayerController** PlayerController, struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName");

	UAdvancedSessionsLibrary_SetPlayerName_Params params;
	params.PlayerController = PlayerController;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSessionPropertyKeyPair* SessionSearchProperty          (Parm)
// EOnlineComparisonOpRedux*      ComparisonOp                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSessionsSearchSetting  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSessionsSearchSetting UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionSearchProperty(struct FSessionPropertyKeyPair* SessionSearchProperty, EOnlineComparisonOpRedux* ComparisonOp)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty");

	UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params params;
	params.SessionSearchProperty = SessionSearchProperty;
	params.ComparisonOp = ComparisonOp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Value                          (Parm, ZeroConstructor)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyString(struct FName* Key, struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  Key                            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyInt(struct FName* Key, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  Key                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyFloat(struct FName* Key, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  Key                            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyByte(struct FName* Key, unsigned char* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  Key                            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyBool(struct FName* Key, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedSessionsLibrary::STATIC_IsValidUniqueNetID(struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID");

	UAdvancedSessionsLibrary_IsValidUniqueNetID_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult* SessionResult                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedSessionsLibrary::STATIC_IsValidSession(struct FBlueprintSessionResult* SessionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession");

	UAdvancedSessionsLibrary_IsValidSession_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         PlayerToCheck                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bIsInSession                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_IsPlayerInSession(struct FBPUniqueNetId* PlayerToCheck, bool* bIsInSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession");

	UAdvancedSessionsLibrary_IsPlayerInSession_Params params;
	params.PlayerToCheck = PlayerToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInSession != nullptr)
		*bIsInSession = params.bIsInSession;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  SubSystemName                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedSessionsLibrary::STATIC_HasOnlineSubsystem(struct FName* SubSystemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem");

	UAdvancedSessionsLibrary_HasOnlineSubsystem_Params params;
	params.SubSystemName = SubSystemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState**           PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId          UniqueNetId                    (Parm, OutParm)

void UAdvancedSessionsLibrary::STATIC_GetUniqueNetIDFromPlayerState(class APlayerState** PlayerState, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState");

	UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId          UniqueNetId                    (Parm, OutParm)

void UAdvancedSessionsLibrary::STATIC_GetUniqueNetID(class APlayerController** PlayerController, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID");

	UAdvancedSessionsLibrary_GetUniqueNetID_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult* SessionResult                  (Parm)
// int                            UniqueBuildId                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_GetUniqueBuildID(struct FBlueprintSessionResult* SessionResult, int* UniqueBuildId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID");

	UAdvancedSessionsLibrary_GetUniqueBuildID_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = params.UniqueBuildId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EBPOnlineSessionState          SessionState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_GetSessionState(EBPOnlineSessionState* SessionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState");

	UAdvancedSessionsLibrary_GetSessionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SessionState != nullptr)
		*SessionState = params.SessionState;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumConnections                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumPrivateConnections          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsLAN                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDedicated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowInvites                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowJoinInProgress           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsAnticheatEnabled            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            BuildUniqueID                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (Parm, OutParm, ZeroConstructor)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_GetSessionSettings(int* NumConnections, int* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings");

	UAdvancedSessionsLibrary_GetSessionSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumConnections != nullptr)
		*NumConnections = params.NumConnections;
	if (NumPrivateConnections != nullptr)
		*NumPrivateConnections = params.NumPrivateConnections;
	if (bIsLAN != nullptr)
		*bIsLAN = params.bIsLAN;
	if (bIsDedicated != nullptr)
		*bIsDedicated = params.bIsDedicated;
	if (bAllowInvites != nullptr)
		*bAllowInvites = params.bAllowInvites;
	if (bAllowJoinInProgress != nullptr)
		*bAllowJoinInProgress = params.bAllowJoinInProgress;
	if (bIsAnticheatEnabled != nullptr)
		*bIsAnticheatEnabled = params.bIsAnticheatEnabled;
	if (BuildUniqueID != nullptr)
		*BuildUniqueID = params.BuildUniqueID;
	if (ExtraSettings != nullptr)
		*ExtraSettings = params.ExtraSettings;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>* ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  SettingName                    (Parm, ZeroConstructor, IsPlainOldData)
// ESessionSettingSearchResult    SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 SettingValue                   (Parm, OutParm, ZeroConstructor)

void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair>* ExtraSettings, struct FName* SettingName, ESessionSettingSearchResult* SearchResult, struct FString* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString");

	UAdvancedSessionsLibrary_GetSessionPropertyString_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSessionPropertyKeyPair* SessionProperty                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAdvancedSessionsLibrary::STATIC_GetSessionPropertyKey(struct FSessionPropertyKeyPair* SessionProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey");

	UAdvancedSessionsLibrary_GetSessionPropertyKey_Params params;
	params.SessionProperty = SessionProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>* ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  SettingName                    (Parm, ZeroConstructor, IsPlainOldData)
// ESessionSettingSearchResult    SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair>* ExtraSettings, struct FName* SettingName, ESessionSettingSearchResult* SearchResult, int* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt");

	UAdvancedSessionsLibrary_GetSessionPropertyInt_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>* ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  SettingName                    (Parm, ZeroConstructor, IsPlainOldData)
// ESessionSettingSearchResult    SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair>* ExtraSettings, struct FName* SettingName, ESessionSettingSearchResult* SearchResult, float* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat");

	UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>* ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  SettingName                    (Parm, ZeroConstructor, IsPlainOldData)
// ESessionSettingSearchResult    SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair>* ExtraSettings, struct FName* SettingName, ESessionSettingSearchResult* SearchResult, unsigned char* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte");

	UAdvancedSessionsLibrary_GetSessionPropertyByte_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>* ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  SettingName                    (Parm, ZeroConstructor, IsPlainOldData)
// ESessionSettingSearchResult    SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair>* ExtraSettings, struct FName* SettingName, ESessionSettingSearchResult* SearchResult, bool* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool");

	UAdvancedSessionsLibrary_GetSessionPropertyBool_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult* SessionResult                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 SessionId                      (Parm, OutParm, ZeroConstructor)

void UAdvancedSessionsLibrary::STATIC_GetSessionID_AsString(struct FBlueprintSessionResult* SessionResult, struct FString* SessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString");

	UAdvancedSessionsLibrary_GetSessionID_AsString_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SessionId != nullptr)
		*SessionId = params.SessionId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (Parm, OutParm, ZeroConstructor)

void UAdvancedSessionsLibrary::STATIC_GetPlayerName(class APlayerController** PlayerController, struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName");

	UAdvancedSessionsLibrary_GetPlayerName_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumNetPlayers                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_GetNumberOfNetworkPlayers(class UObject** WorldContextObject, int* NumNetPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers");

	UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumNetPlayers != nullptr)
		*NumNetPlayers = params.NumNetPlayers;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            NetPlayerIndex                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_GetNetPlayerIndex(class APlayerController** PlayerController, int* NetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex");

	UAdvancedSessionsLibrary_GetNetPlayerIndex_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NetPlayerIndex != nullptr)
		*NetPlayerIndex = params.NetPlayerIndex;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult* SessionResult                  (Parm)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (Parm, OutParm, ZeroConstructor)

void UAdvancedSessionsLibrary::STATIC_GetExtraSettings(struct FBlueprintSessionResult* SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings");

	UAdvancedSessionsLibrary_GetExtraSettings_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraSettings != nullptr)
		*ExtraSettings = params.ExtraSettings;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            UniqueBuildId                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_GetCurrentUniqueBuildID(int* UniqueBuildId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID");

	UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = params.UniqueBuildId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SessionId                      (Parm, OutParm, ZeroConstructor)

void UAdvancedSessionsLibrary::STATIC_GetCurrentSessionID_AsString(struct FString* SessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString");

	UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SessionId != nullptr)
		*SessionId = params.SessionId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>* ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  SettingName                    (Parm, ZeroConstructor, IsPlainOldData)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedSessionsLibrary::STATIC_FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair>* ExtraSettings, struct FName* SettingName, EBlueprintResultSwitch* Result, int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName");

	UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>* ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  SettingsName                   (Parm, ZeroConstructor, IsPlainOldData)
// EBlueprintResultSwitch         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSessionPropertyKeyPair OutProperty                    (Parm, OutParm)

void UAdvancedSessionsLibrary::STATIC_FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair>* ExtraSettings, struct FName* SettingsName, EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName");

	UAdvancedSessionsLibrary_FindSessionPropertyByName_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingsName = SettingsName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (OutProperty != nullptr)
		*OutProperty = params.OutProperty;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId*         A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBPUniqueNetId*         B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedSessionsLibrary::STATIC_EqualEqual_UNetIDUnetID(struct FBPUniqueNetId* A, struct FBPUniqueNetId* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID");

	UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> SettingsArray                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSessionPropertyKeyPair> NewOrChangedSettings           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSessionPropertyKeyPair> ModifiedSettingsArray          (Parm, OutParm, ZeroConstructor)

void UAdvancedSessionsLibrary::STATIC_AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings");

	UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SettingsArray != nullptr)
		*SettingsArray = params.SettingsArray;
	if (NewOrChangedSettings != nullptr)
		*NewOrChangedSettings = params.NewOrChangedSettings;
	if (ModifiedSettingsArray != nullptr)
		*ModifiedSettingsArray = params.ModifiedSettingsArray;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedVoiceLibrary::STATIC_UnRegisterRemoteTalker(struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker");

	UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char*                 LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedVoiceLibrary::STATIC_UnRegisterLocalTalker(unsigned char* LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker");

	UAdvancedVoiceLibrary_UnRegisterLocalTalker_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
// (Final, Native, Static, Public, BlueprintCallable)

void UAdvancedVoiceLibrary::STATIC_UnRegisterAllLocalTalkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers");

	UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// unsigned char*                 LocalUserNum                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          bIsSystemWide                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedVoiceLibrary::STATIC_UnMuteRemoteTalker(unsigned char* LocalUserNum, struct FBPUniqueNetId* UniqueNetId, bool* bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker");

	UAdvancedVoiceLibrary_UnMuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UniqueNetId = UniqueNetId;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char*                 LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedVoiceLibrary::STATIC_StopNetworkedVoice(unsigned char* LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice");

	UAdvancedVoiceLibrary_StopNetworkedVoice_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char*                 LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedVoiceLibrary::STATIC_StartNetworkedVoice(unsigned char* LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice");

	UAdvancedVoiceLibrary_StartNetworkedVoice_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
// (Final, Native, Static, Public, BlueprintCallable)

void UAdvancedVoiceLibrary::STATIC_RemoveAllRemoteTalkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers");

	UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedVoiceLibrary::STATIC_RegisterRemoteTalker(struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker");

	UAdvancedVoiceLibrary_RegisterRemoteTalker_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char*                 LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedVoiceLibrary::STATIC_RegisterLocalTalker(unsigned char* LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker");

	UAdvancedVoiceLibrary_RegisterLocalTalker_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
// (Final, Native, Static, Public, BlueprintCallable)

void UAdvancedVoiceLibrary::STATIC_RegisterAllLocalTalkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers");

	UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// unsigned char*                 LocalUserNum                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          bIsSystemWide                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedVoiceLibrary::STATIC_MuteRemoteTalker(unsigned char* LocalUserNum, struct FBPUniqueNetId* UniqueNetId, bool* bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker");

	UAdvancedVoiceLibrary_MuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UniqueNetId = UniqueNetId;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedVoiceLibrary::STATIC_IsRemotePlayerTalking(struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking");

	UAdvancedVoiceLibrary_IsRemotePlayerTalking_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char*                 LocalUserNumChecking           (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedVoiceLibrary::STATIC_IsPlayerMuted(unsigned char* LocalUserNumChecking, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted");

	UAdvancedVoiceLibrary_IsPlayerMuted_Params params;
	params.LocalUserNumChecking = LocalUserNumChecking;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char*                 LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdvancedVoiceLibrary::STATIC_IsLocalPlayerTalking(unsigned char* LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking");

	UAdvancedVoiceLibrary_IsLocalPlayerTalking_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bHasHeadset                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedVoiceLibrary::STATIC_IsHeadsetPresent(unsigned char* LocalPlayerNum, bool* bHasHeadset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent");

	UAdvancedVoiceLibrary_IsHeadsetPresent_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasHeadset != nullptr)
		*bHasHeadset = params.bHasHeadset;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            NumLocalTalkers                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAdvancedVoiceLibrary::STATIC_GetNumLocalTalkers(int* NumLocalTalkers)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers");

	UAdvancedVoiceLibrary_GetNumLocalTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumLocalTalkers != nullptr)
		*NumLocalTalkers = params.NumLocalTalkers;
}


// Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UCancelFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCancelFindSessionsCallbackProxy* UCancelFindSessionsCallbackProxy::STATIC_CancelFindSessions(class UObject** WorldContextObject, class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions");

	UCancelFindSessionsCallbackProxy_CancelFindSessions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSessionPropertyKeyPair>* ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PublicConnections              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PrivateConnections             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowInvites                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsDedicatedServer             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUsePresence                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowJoinViaPresence          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowJoinViaPresenceFriendsOnly (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAntiCheatProtected            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUsesStats                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShouldAdvertise               (Parm, ZeroConstructor, IsPlainOldData)
// class UCreateSessionCallbackProxyAdvanced* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreateSessionCallbackProxyAdvanced* UCreateSessionCallbackProxyAdvanced::STATIC_CreateAdvancedSession(class UObject** WorldContextObject, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, class APlayerController** PlayerController, int* PublicConnections, int* PrivateConnections, bool* bUseLAN, bool* bAllowInvites, bool* bIsDedicatedServer, bool* bUsePresence, bool* bAllowJoinViaPresence, bool* bAllowJoinViaPresenceFriendsOnly, bool* bAntiCheatProtected, bool* bUsesStats, bool* bShouldAdvertise)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession");

	UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExtraSettings = ExtraSettings;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.PrivateConnections = PrivateConnections;
	params.bUseLAN = bUseLAN;
	params.bAllowInvites = bAllowInvites;
	params.bIsDedicatedServer = bIsDedicatedServer;
	params.bUsePresence = bUsePresence;
	params.bAllowJoinViaPresence = bAllowJoinViaPresence;
	params.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
	params.bAntiCheatProtected = bAntiCheatProtected;
	params.bUsesStats = bUsesStats;
	params.bShouldAdvertise = bShouldAdvertise;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.EndSessionCallbackProxy.EndSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UEndSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEndSessionCallbackProxy* UEndSessionCallbackProxy::STATIC_EndSession(class UObject** WorldContextObject, class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.EndSessionCallbackProxy.EndSession");

	UEndSessionCallbackProxy_EndSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm)
// class UFindFriendSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFindFriendSessionCallbackProxy* UFindFriendSessionCallbackProxy::STATIC_FindFriendSession(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FBPUniqueNetId* FriendUniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession");

	UFindFriendSessionCallbackProxy_FindFriendSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxResults                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// EBPServerPresenceSearchType*   ServerTypeToSearch             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSessionsSearchSetting>* Filters                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bEmptyServersOnly              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNonEmptyServersOnly           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSecureServersOnly             (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MinSlotsAvailable              (Parm, ZeroConstructor, IsPlainOldData)
// class UFindSessionsCallbackProxyAdvanced* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFindSessionsCallbackProxyAdvanced* UFindSessionsCallbackProxyAdvanced::STATIC_FindSessionsAdvanced(class UObject** WorldContextObject, class APlayerController** PlayerController, int* MaxResults, bool* bUseLAN, EBPServerPresenceSearchType* ServerTypeToSearch, TArray<struct FSessionsSearchSetting>* Filters, bool* bEmptyServersOnly, bool* bNonEmptyServersOnly, bool* bSecureServersOnly, int* MinSlotsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced");

	UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;
	params.ServerTypeToSearch = ServerTypeToSearch;
	params.Filters = Filters;
	params.bEmptyServersOnly = bEmptyServersOnly;
	params.bNonEmptyServersOnly = bNonEmptyServersOnly;
	params.bSecureServersOnly = bSecureServersOnly;
	params.MinSlotsAvailable = MinSlotsAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBlueprintSessionResult>* SessionResults                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSessionsSearchSetting>* Filters                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FBlueprintSessionResult> FilteredResults                (Parm, OutParm, ZeroConstructor)

void UFindSessionsCallbackProxyAdvanced::STATIC_FilterSessionResults(TArray<struct FBlueprintSessionResult>* SessionResults, TArray<struct FSessionsSearchSetting>* Filters, TArray<struct FBlueprintSessionResult>* FilteredResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults");

	UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Params params;
	params.SessionResults = SessionResults;
	params.Filters = Filters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FilteredResults != nullptr)
		*FilteredResults = params.FilteredResults;
}


// Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UGetFriendsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetFriendsCallbackProxy* UGetFriendsCallbackProxy::STATIC_GetAndStoreFriendsList(class UObject** WorldContextObject, class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList");

	UGetFriendsCallbackProxy_GetAndStoreFriendsList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UGetRecentPlayersCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetRecentPlayersCallbackProxy* UGetRecentPlayersCallbackProxy::STATIC_GetAndStoreRecentPlayersList(class UObject** WorldContextObject, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList");

	UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// EBPUserPrivileges*             PrivilegeToCheck               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBPUniqueNetId*         PlayerUniqueNetID              (ConstParm, Parm, OutParm, ReferenceParm)
// class UGetUserPrivilegeCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetUserPrivilegeCallbackProxy* UGetUserPrivilegeCallbackProxy::STATIC_GetUserPrivilege(class UObject** WorldContextObject, EBPUserPrivileges* PrivilegeToCheck, struct FBPUniqueNetId* PlayerUniqueNetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege");

	UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PrivilegeToCheck = PrivilegeToCheck;
	params.PlayerUniqueNetID = PlayerUniqueNetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.LoginUserCallbackProxy.LoginUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                userId                         (Parm, ZeroConstructor)
// struct FString*                UserToken                      (Parm, ZeroConstructor)
// class ULoginUserCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULoginUserCallbackProxy* ULoginUserCallbackProxy::STATIC_LoginUser(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FString* userId, struct FString* UserToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.LoginUserCallbackProxy.LoginUser");

	ULoginUserCallbackProxy_LoginUser_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.userId = userId;
	params.UserToken = UserToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class ULogoutUserCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULogoutUserCallbackProxy* ULogoutUserCallbackProxy::STATIC_LogoutUser(class UObject** WorldContextObject, class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser");

	ULogoutUserCallbackProxy_LogoutUser_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         UniqueNetIDInvited             (ConstParm, Parm, OutParm, ReferenceParm)
// class USendFriendInviteCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USendFriendInviteCallbackProxy* USendFriendInviteCallbackProxy::STATIC_SendFriendInvite(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FBPUniqueNetId* UniqueNetIDInvited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite");

	USendFriendInviteCallbackProxy_SendFriendInvite_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.UniqueNetIDInvited = UniqueNetIDInvited;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSessionPropertyKeyPair>* ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           PublicConnections              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PrivateConnections             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowInvites                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowJoinInProgress           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRefreshOnlineData             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsDedicatedServer             (Parm, ZeroConstructor, IsPlainOldData)
// class UUpdateSessionCallbackProxyAdvanced* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUpdateSessionCallbackProxyAdvanced* UUpdateSessionCallbackProxyAdvanced::STATIC_UpdateSession(class UObject** WorldContextObject, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, int* PublicConnections, int* PrivateConnections, bool* bUseLAN, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bRefreshOnlineData, bool* bIsDedicatedServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession");

	UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExtraSettings = ExtraSettings;
	params.PublicConnections = PublicConnections;
	params.PrivateConnections = PrivateConnections;
	params.bUseLAN = bUseLAN;
	params.bAllowInvites = bAllowInvites;
	params.bAllowJoinInProgress = bAllowJoinInProgress;
	params.bRefreshOnlineData = bRefreshOnlineData;
	params.bIsDedicatedServer = bIsDedicatedServer;

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
