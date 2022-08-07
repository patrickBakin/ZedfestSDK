#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AdvancedSessions.EBPOnlinePresenceState
enum class EBPOnlinePresenceState : uint8_t
{
	EBPOnlinePresenceState__Online = 0,
	EBPOnlinePresenceState__Offline = 1,
	EBPOnlinePresenceState__Away   = 2,
	EBPOnlinePresenceState__ExtendedAway = 3,
	EBPOnlinePresenceState__DoNotDisturb = 4,
	EBPOnlinePresenceState__Chat   = 5,
	EBPOnlinePresenceState__EBPOnlinePresenceState_MAX = 6
};


// Enum AdvancedSessions.EBPUserPrivileges
enum class EBPUserPrivileges : uint8_t
{
	EBPUserPrivileges__CanPlay     = 0,
	EBPUserPrivileges__CanPlayOnline = 1,
	EBPUserPrivileges__CanCommunicateOnline = 2,
	EBPUserPrivileges__CanUseUserGeneratedContent = 3,
	EBPUserPrivileges__EBPUserPrivileges_MAX = 4
};


// Enum AdvancedSessions.EOnlineComparisonOpRedux
enum class EOnlineComparisonOpRedux : uint8_t
{
	EOnlineComparisonOpRedux__Equals = 0,
	EOnlineComparisonOpRedux__NotEquals = 1,
	EOnlineComparisonOpRedux__GreaterThan = 2,
	EOnlineComparisonOpRedux__GreaterThanEquals = 3,
	EOnlineComparisonOpRedux__LessThan = 4,
	EOnlineComparisonOpRedux__LessThanEquals = 5,
	EOnlineComparisonOpRedux__EOnlineComparisonOpRedux_MAX = 6
};


// Enum AdvancedSessions.EBPOnlineSessionState
enum class EBPOnlineSessionState : uint8_t
{
	EBPOnlineSessionState__NoSession = 0,
	EBPOnlineSessionState__Creating = 1,
	EBPOnlineSessionState__Pending = 2,
	EBPOnlineSessionState__Starting = 3,
	EBPOnlineSessionState__InProgress = 4,
	EBPOnlineSessionState__Ending  = 5,
	EBPOnlineSessionState__Ended   = 6,
	EBPOnlineSessionState__Destroying = 7,
	EBPOnlineSessionState__EBPOnlineSessionState_MAX = 8
};


// Enum AdvancedSessions.EBPServerPresenceSearchType
enum class EBPServerPresenceSearchType : uint8_t
{
	EBPServerPresenceSearchType__AllServers = 0,
	EBPServerPresenceSearchType__ClientServersOnly = 1,
	EBPServerPresenceSearchType__DedicatedServersOnly = 2,
	EBPServerPresenceSearchType__EBPServerPresenceSearchType_MAX = 3
};


// Enum AdvancedSessions.EBlueprintAsyncResultSwitch
enum class EBlueprintAsyncResultSwitch : uint8_t
{
	EBlueprintAsyncResultSwitch__OnSuccess = 0,
	EBlueprintAsyncResultSwitch__AsyncLoading = 1,
	EBlueprintAsyncResultSwitch__OnFailure = 2,
	EBlueprintAsyncResultSwitch__EBlueprintAsyncResultSwitch_MAX = 3
};


// Enum AdvancedSessions.EBlueprintResultSwitch
enum class EBlueprintResultSwitch : uint8_t
{
	EBlueprintResultSwitch__OnSuccess = 0,
	EBlueprintResultSwitch__OnFailure = 1,
	EBlueprintResultSwitch__EBlueprintResultSwitch_MAX = 2
};


// Enum AdvancedSessions.ESessionSettingSearchResult
enum class ESessionSettingSearchResult : uint8_t
{
	ESessionSettingSearchResult__Found = 0,
	ESessionSettingSearchResult__NotFound = 1,
	ESessionSettingSearchResult__WrongType = 2,
	ESessionSettingSearchResult__ESessionSettingSearchResult_MAX = 3
};


// Enum AdvancedSessions.EBPLoginStatus
enum class EBPLoginStatus : uint8_t
{
	EBPLoginStatus__NotLoggedIn    = 0,
	EBPLoginStatus__UsingLocalProfile = 1,
	EBPLoginStatus__LoggedIn       = 2,
	EBPLoginStatus__EBPLoginStatus_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AdvancedSessions.BPUniqueNetId
// 0x0020
struct FBPUniqueNetId
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AdvancedSessions.BPOnlineUser
// 0x0040
struct FBPOnlineUser
{
	struct FBPUniqueNetId                              UniqueNetId;                                              // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FString                                     DisplayName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RealName;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AdvancedSessions.BPOnlineRecentPlayer
// 0x0010 (0x0050 - 0x0040)
struct FBPOnlineRecentPlayer : public FBPOnlineUser
{
	struct FString                                     LastSeen;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AdvancedSessions.BPFriendPresenceInfo
// 0x0018
struct FBPFriendPresenceInfo
{
	bool                                               bIsOnline;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaying;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayingThisGame;                                       // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsJoinable;                                              // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasVoiceSupport;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBPOnlinePresenceState                             PresenceState;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FString                                     StatusString;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AdvancedSessions.BPFriendInfo
// 0x0068
struct FBPFriendInfo
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RealName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EBPOnlinePresenceState                             OnlineState;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FBPUniqueNetId                              UniqueNetId;                                              // 0x0028(0x0020) (Edit, BlueprintVisible)
	bool                                               bIsPlayingSameGame;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FBPFriendPresenceInfo                       PresenceInfo;                                             // 0x0050(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct AdvancedSessions.BPUserOnlineAccount
// 0x0010
struct FBPUserOnlineAccount
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AdvancedSessions.SessionPropertyKeyPair
// 0x0020
struct FSessionPropertyKeyPair
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AdvancedSessions.SessionsSearchSetting
// 0x0028
struct FSessionsSearchSetting
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
