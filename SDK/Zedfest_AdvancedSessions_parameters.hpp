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

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
struct UAdvancedExternalUILibrary_ShowWebURLUI_Params
{
	struct FString*                                    URLToShow;                                                // (Parm, ZeroConstructor)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             AllowedDomains;                                           // (Parm, OutParm, ZeroConstructor)
	bool*                                              bEmbedded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowBackground;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowCloseButton;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OffsetX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OffsetY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SizeX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SizeY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
struct UAdvancedExternalUILibrary_ShowProfileUI_Params
{
	struct FBPUniqueNetId*                             PlayerViewingProfile;                                     // (ConstParm, Parm)
	struct FBPUniqueNetId*                             PlayerToViewProfileOf;                                    // (ConstParm, Parm)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
struct UAdvancedExternalUILibrary_ShowLeaderBoardUI_Params
{
	struct FString*                                    LeaderboardName;                                          // (Parm, ZeroConstructor)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
struct UAdvancedExternalUILibrary_ShowInviteUI_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
struct UAdvancedExternalUILibrary_ShowFriendsUI_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
struct UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Params
{
	struct FBPUniqueNetId*                             PlayerRequestingAccountUpgradeUI;                         // (ConstParm, Parm)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
struct UAdvancedExternalUILibrary_CloseWebURLUI_Params
{
};

// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
struct UAdvancedFriendsGameInstance_OnSessionInviteReceived_Params
{
	int*                                               LocalPlayerNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             PersonInviting;                                           // (Parm)
	struct FString*                                    AppId;                                                    // (Parm, ZeroConstructor)
	struct FBlueprintSessionResult*                    SessionToJoin;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
struct UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Params
{
	int*                                               LocalPlayerNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             PersonInvited;                                            // (Parm)
	struct FBlueprintSessionResult*                    SessionToJoin;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
struct UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Params
{
	struct FBPUniqueNetId*                             PlayerId;                                                 // (Parm)
	bool*                                              bIsTalking;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
struct UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Params
{
	int*                                               PlayerNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EBPLoginStatus*                                    PreviousStatus;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EBPLoginStatus*                                    NewStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             NewPlayerUniqueNetID;                                     // (Parm)
};

// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
struct UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Params
{
	int*                                               PlayerNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
struct UAdvancedFriendsInterface_OnSessionInviteReceived_Params
{
	struct FBPUniqueNetId*                             PersonInviting;                                           // (Parm)
	struct FBlueprintSessionResult*                    SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
struct UAdvancedFriendsInterface_OnSessionInviteAccepted_Params
{
	struct FBPUniqueNetId*                             PersonInvited;                                            // (Parm)
	struct FBlueprintSessionResult*                    SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
struct UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Params
{
	struct FBPUniqueNetId*                             PlayerId;                                                 // (Parm)
	bool*                                              bIsTalking;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
struct UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Params
{
	EBPLoginStatus*                                    PreviousStatus;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EBPLoginStatus*                                    NewStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             PlayerUniqueNetID;                                        // (Parm)
};

// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
struct UAdvancedFriendsInterface_OnPlayerLoginChanged_Params
{
	int*                                               PlayerNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
struct UAdvancedFriendsLibrary_SendSessionInviteToFriends_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBPUniqueNetId>*                     Friends;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
struct UAdvancedFriendsLibrary_SendSessionInviteToFriend_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             FriendUniqueNetId;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
struct UAdvancedFriendsLibrary_IsAFriend_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm)
	bool                                               IsFriend;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
struct UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Params
{
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (Parm)
	TArray<struct FBPOnlineRecentPlayer>               PlayersList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
struct UAdvancedFriendsLibrary_GetStoredFriendsList_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBPFriendInfo>                       FriendsList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend
struct UAdvancedFriendsLibrary_GetFriend_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             FriendUniqueNetId;                                        // (ConstParm, Parm)
	struct FBPFriendInfo                               Friend;                                                   // (Parm, OutParm)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
struct UAdvancedIdentityLibrary_SetUserAccountAttribute_Params
{
	struct FBPUserOnlineAccount*                       AccountInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString*                                    AttributeName;                                            // (Parm, ZeroConstructor)
	struct FString*                                    NewAttributeValue;                                        // (Parm, ZeroConstructor)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID
struct UAdvancedIdentityLibrary_GetUserID_Params
{
	struct FBPUserOnlineAccount*                       AccountInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBPUniqueNetId                              UniqueNetId;                                              // (Parm, OutParm)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
struct UAdvancedIdentityLibrary_GetUserAccountRealName_Params
{
	struct FBPUserOnlineAccount*                       AccountInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     username;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
struct UAdvancedIdentityLibrary_GetUserAccountDisplayName_Params
{
	struct FBPUserOnlineAccount*                       AccountInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     DisplayName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
struct UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Params
{
	struct FBPUserOnlineAccount*                       AccountInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString*                                    AttributeName;                                            // (Parm, ZeroConstructor)
	struct FString                                     AuthAttribute;                                            // (Parm, OutParm, ZeroConstructor)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
struct UAdvancedIdentityLibrary_GetUserAccountAttribute_Params
{
	struct FBPUserOnlineAccount*                       AccountInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString*                                    AttributeName;                                            // (Parm, ZeroConstructor)
	struct FString                                     AttributeValue;                                           // (Parm, OutParm, ZeroConstructor)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
struct UAdvancedIdentityLibrary_GetUserAccountAccessToken_Params
{
	struct FBPUserOnlineAccount*                       AccountInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     AccessToken;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
struct UAdvancedIdentityLibrary_GetUserAccount_Params
{
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBPUserOnlineAccount                        AccountInfo;                                              // (Parm, OutParm)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
struct UAdvancedIdentityLibrary_GetPlayerNickname_Params
{
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     PlayerNickname;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
struct UAdvancedIdentityLibrary_GetPlayerAuthToken_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuthToken;                                                // (Parm, OutParm, ZeroConstructor)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
struct UAdvancedIdentityLibrary_GetLoginStatus_Params
{
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	EBPLoginStatus                                     LoginStatus;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
struct UAdvancedIdentityLibrary_GetAllUserAccounts_Params
{
	TArray<struct FBPUserOnlineAccount>                AccountInfos;                                             // (Parm, OutParm, ZeroConstructor)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
struct UAdvancedSessionsLibrary_UniqueNetIdToString_Params
{
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
struct UAdvancedSessionsLibrary_SetPlayerName_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
struct UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params
{
	struct FSessionPropertyKeyPair*                    SessionSearchProperty;                                    // (Parm)
	EOnlineComparisonOpRedux*                          ComparisonOp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSessionsSearchSetting                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params
{
	struct FName*                                      Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Value;                                                    // (Parm, ZeroConstructor)
	struct FSessionPropertyKeyPair                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params
{
	struct FName*                                      Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSessionPropertyKeyPair                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params
{
	struct FName*                                      Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSessionPropertyKeyPair                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params
{
	struct FName*                                      Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSessionPropertyKeyPair                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params
{
	struct FName*                                      Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSessionPropertyKeyPair                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
struct UAdvancedSessionsLibrary_IsValidUniqueNetID_Params
{
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
struct UAdvancedSessionsLibrary_IsValidSession_Params
{
	struct FBlueprintSessionResult*                    SessionResult;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
struct UAdvancedSessionsLibrary_IsPlayerInSession_Params
{
	struct FBPUniqueNetId*                             PlayerToCheck;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsInSession;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
struct UAdvancedSessionsLibrary_HasOnlineSubsystem_Params
{
	struct FName*                                      SubSystemName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
struct UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params
{
	class APlayerState**                               PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId                              UniqueNetId;                                              // (Parm, OutParm)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
struct UAdvancedSessionsLibrary_GetUniqueNetID_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId                              UniqueNetId;                                              // (Parm, OutParm)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
struct UAdvancedSessionsLibrary_GetUniqueBuildID_Params
{
	struct FBlueprintSessionResult*                    SessionResult;                                            // (Parm)
	int                                                UniqueBuildId;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
struct UAdvancedSessionsLibrary_GetSessionState_Params
{
	EBPOnlineSessionState                              SessionState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
struct UAdvancedSessionsLibrary_GetSessionSettings_Params
{
	int                                                NumConnections;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumPrivateConnections;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLAN;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDedicated;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowInvites;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowJoinInProgress;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAnticheatEnabled;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                BuildUniqueID;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                            // (Parm, OutParm, ZeroConstructor)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
struct UAdvancedSessionsLibrary_GetSessionPropertyString_Params
{
	TArray<struct FSessionPropertyKeyPair>*            ExtraSettings;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      SettingName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESessionSettingSearchResult                        SearchResult;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SettingValue;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
struct UAdvancedSessionsLibrary_GetSessionPropertyKey_Params
{
	struct FSessionPropertyKeyPair*                    SessionProperty;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
struct UAdvancedSessionsLibrary_GetSessionPropertyInt_Params
{
	TArray<struct FSessionPropertyKeyPair>*            ExtraSettings;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      SettingName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESessionSettingSearchResult                        SearchResult;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SettingValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
struct UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params
{
	TArray<struct FSessionPropertyKeyPair>*            ExtraSettings;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      SettingName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESessionSettingSearchResult                        SearchResult;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SettingValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
struct UAdvancedSessionsLibrary_GetSessionPropertyByte_Params
{
	TArray<struct FSessionPropertyKeyPair>*            ExtraSettings;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      SettingName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESessionSettingSearchResult                        SearchResult;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SettingValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
struct UAdvancedSessionsLibrary_GetSessionPropertyBool_Params
{
	TArray<struct FSessionPropertyKeyPair>*            ExtraSettings;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      SettingName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESessionSettingSearchResult                        SearchResult;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SettingValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
struct UAdvancedSessionsLibrary_GetSessionID_AsString_Params
{
	struct FBlueprintSessionResult*                    SessionResult;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     SessionId;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
struct UAdvancedSessionsLibrary_GetPlayerName_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
struct UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumNetPlayers;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
struct UAdvancedSessionsLibrary_GetNetPlayerIndex_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NetPlayerIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
struct UAdvancedSessionsLibrary_GetExtraSettings_Params
{
	struct FBlueprintSessionResult*                    SessionResult;                                            // (Parm)
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
struct UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params
{
	int                                                UniqueBuildId;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
struct UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Params
{
	struct FString                                     SessionId;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
struct UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params
{
	TArray<struct FSessionPropertyKeyPair>*            ExtraSettings;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      SettingName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
struct UAdvancedSessionsLibrary_FindSessionPropertyByName_Params
{
	TArray<struct FSessionPropertyKeyPair>*            ExtraSettings;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      SettingsName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSessionPropertyKeyPair                     OutProperty;                                              // (Parm, OutParm)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
struct UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params
{
	struct FBPUniqueNetId*                             A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBPUniqueNetId*                             B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
struct UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params
{
	TArray<struct FSessionPropertyKeyPair>             SettingsArray;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSessionPropertyKeyPair>             NewOrChangedSettings;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSessionPropertyKeyPair>             ModifiedSettingsArray;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
struct UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Params
{
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
struct UAdvancedVoiceLibrary_UnRegisterLocalTalker_Params
{
	unsigned char*                                     LocalPlayerNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
struct UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Params
{
};

// Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
struct UAdvancedVoiceLibrary_UnMuteRemoteTalker_Params
{
	unsigned char*                                     LocalUserNum;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              bIsSystemWide;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
struct UAdvancedVoiceLibrary_StopNetworkedVoice_Params
{
	unsigned char*                                     LocalPlayerNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
struct UAdvancedVoiceLibrary_StartNetworkedVoice_Params
{
	unsigned char*                                     LocalPlayerNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
struct UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Params
{
};

// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
struct UAdvancedVoiceLibrary_RegisterRemoteTalker_Params
{
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
struct UAdvancedVoiceLibrary_RegisterLocalTalker_Params
{
	unsigned char*                                     LocalPlayerNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
struct UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Params
{
};

// Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
struct UAdvancedVoiceLibrary_MuteRemoteTalker_Params
{
	unsigned char*                                     LocalUserNum;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              bIsSystemWide;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
struct UAdvancedVoiceLibrary_IsRemotePlayerTalking_Params
{
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
struct UAdvancedVoiceLibrary_IsPlayerMuted_Params
{
	unsigned char*                                     LocalUserNumChecking;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
struct UAdvancedVoiceLibrary_IsLocalPlayerTalking_Params
{
	unsigned char*                                     LocalPlayerNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
struct UAdvancedVoiceLibrary_IsHeadsetPresent_Params
{
	bool                                               bHasHeadset;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     LocalPlayerNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
struct UAdvancedVoiceLibrary_GetNumLocalTalkers_Params
{
	int                                                NumLocalTalkers;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
struct UCancelFindSessionsCallbackProxy_CancelFindSessions_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UCancelFindSessionsCallbackProxy*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
struct UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSessionPropertyKeyPair>*            ExtraSettings;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PublicConnections;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PrivateConnections;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowInvites;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsDedicatedServer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUsePresence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowJoinViaPresence;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowJoinViaPresenceFriendsOnly;                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAntiCheatProtected;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUsesStats;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShouldAdvertise;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UCreateSessionCallbackProxyAdvanced*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.EndSessionCallbackProxy.EndSession
struct UEndSessionCallbackProxy_EndSession_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UEndSessionCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
struct UFindFriendSessionCallbackProxy_FindFriendSession_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             FriendUniqueNetId;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFindFriendSessionCallbackProxy*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
struct UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxResults;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EBPServerPresenceSearchType*                       ServerTypeToSearch;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSessionsSearchSetting>*             Filters;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bEmptyServersOnly;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bNonEmptyServersOnly;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSecureServersOnly;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MinSlotsAvailable;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UFindSessionsCallbackProxyAdvanced*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
struct UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Params
{
	TArray<struct FBlueprintSessionResult>*            SessionResults;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSessionsSearchSetting>*             Filters;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FBlueprintSessionResult>             FilteredResults;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
struct UGetFriendsCallbackProxy_GetAndStoreFriendsList_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGetFriendsCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
struct UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             UniqueNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UGetRecentPlayersCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
struct UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EBPUserPrivileges*                                 PrivilegeToCheck;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBPUniqueNetId*                             PlayerUniqueNetID;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class UGetUserPrivilegeCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.LoginUserCallbackProxy.LoginUser
struct ULoginUserCallbackProxy_LoginUser_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    userId;                                                   // (Parm, ZeroConstructor)
	struct FString*                                    UserToken;                                                // (Parm, ZeroConstructor)
	class ULoginUserCallbackProxy*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
struct ULogoutUserCallbackProxy_LogoutUser_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class ULogoutUserCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
struct USendFriendInviteCallbackProxy_SendFriendInvite_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             UniqueNetIDInvited;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	class USendFriendInviteCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
struct UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSessionPropertyKeyPair>*            ExtraSettings;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               PublicConnections;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PrivateConnections;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowInvites;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowJoinInProgress;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRefreshOnlineData;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsDedicatedServer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UUpdateSessionCallbackProxyAdvanced*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
