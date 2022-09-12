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
//Enums
//---------------------------------------------------------------------------

// Enum AdvancedSteamSessions.FBPWorkshopFileType
enum class EFBPWorkshopFileType : uint8_t
{
	FBPWorkshopFileType__k_EWorkshopFileTypeCommunity = 0,
	FBPWorkshopFileType__k_EWorkshopFileTypeMicrotransaction = 1,
	FBPWorkshopFileType__k_EWorkshopFileTypeCollection = 2,
	FBPWorkshopFileType__k_EWorkshopFileTypeArt = 3,
	FBPWorkshopFileType__k_EWorkshopFileTypeVideo = 4,
	FBPWorkshopFileType__k_EWorkshopFileTypeScreenshot = 5,
	FBPWorkshopFileType__k_EWorkshopFileTypeGame = 6,
	FBPWorkshopFileType__k_EWorkshopFileTypeSoftware = 7,
	FBPWorkshopFileType__k_EWorkshopFileTypeConcept = 8,
	FBPWorkshopFileType__k_EWorkshopFileTypeWebGuide = 9,
	FBPWorkshopFileType__k_EWorkshopFileTypeIntegratedGuide = 10,
	FBPWorkshopFileType__k_EWorkshopFileTypeMerch = 11,
	FBPWorkshopFileType__k_EWorkshopFileTypeControllerBinding = 12,
	FBPWorkshopFileType__k_EWorkshopFileTypeSteamworksAccessInvite = 13,
	FBPWorkshopFileType__k_EWorkshopFileTypeSteamVideo = 14,
	FBPWorkshopFileType__k_EWorkshopFileTypeMax = 15,
	FBPWorkshopFileType__k_MAX     = 16
};


// Enum AdvancedSteamSessions.FBPSteamResult
enum class EFBPSteamResult : uint8_t
{
	FBPSteamResult__k_EResultOK    = 0,
	FBPSteamResult__k_EResultFail  = 1,
	FBPSteamResult__k_EResultNoConnection = 2,
	FBPSteamResult__k_EResultInvalidPassword = 3,
	FBPSteamResult__k_EResultLoggedInElsewhere = 4,
	FBPSteamResult__k_EResultInvalidProtocolVer = 5,
	FBPSteamResult__k_EResultInvalidParam = 6,
	FBPSteamResult__k_EResultFileNotFound = 7,
	FBPSteamResult__k_EResultBusy  = 8,
	FBPSteamResult__k_EResultInvalidState = 9,
	FBPSteamResult__k_EResultInvalidName = 10,
	FBPSteamResult__k_EResultInvalidEmail = 11,
	FBPSteamResult__k_EResultDuplicateName = 12,
	FBPSteamResult__k_EResultAccessDenied = 13,
	FBPSteamResult__k_EResultTimeout = 14,
	FBPSteamResult__k_EResultBanned = 15,
	FBPSteamResult__k_EResultAccountNotFound = 16,
	FBPSteamResult__k_EResultInvalidSteamID = 17,
	FBPSteamResult__k_EResultServiceUnavailable = 18,
	FBPSteamResult__k_EResultNotLoggedOn = 19,
	FBPSteamResult__k_EResultPending = 20,
	FBPSteamResult__k_EResultEncryptionFailure = 21,
	FBPSteamResult__k_EResultInsufficientPrivilege = 22,
	FBPSteamResult__k_EResultLimitExceeded = 23,
	FBPSteamResult__k_EResultRevoked = 24,
	FBPSteamResult__k_EResultExpired = 25,
	FBPSteamResult__k_EResultAlreadyRedeemed = 26,
	FBPSteamResult__k_EResultDuplicateRequest = 27,
	FBPSteamResult__k_EResultAlreadyOwned = 28,
	FBPSteamResult__k_EResultIPNotFound = 29,
	FBPSteamResult__k_EResultPersistFailed = 30,
	FBPSteamResult__k_EResultLockingFailed = 31,
	FBPSteamResult__k_EResultLogonSessionReplaced = 32,
	FBPSteamResult__k_EResultConnectFailed = 33,
	FBPSteamResult__k_EResultHandshakeFailed = 34,
	FBPSteamResult__k_EResultIOFailure = 35,
	FBPSteamResult__k_EResultRemoteDisconnect = 36,
	FBPSteamResult__k_EResultShoppingCartNotFound = 37,
	FBPSteamResult__k_EResultBlocked = 38,
	FBPSteamResult__k_EResultIgnored = 39,
	FBPSteamResult__k_EResultNoMatch = 40,
	FBPSteamResult__k_EResultAccountDisabled = 41,
	FBPSteamResult__k_EResultServiceReadOnly = 42,
	FBPSteamResult__k_EResultAccountNotFeatured = 43,
	FBPSteamResult__k_EResultAdministratorOK = 44,
	FBPSteamResult__k_EResultContentVersion = 45,
	FBPSteamResult__k_EResultTryAnotherCM = 46,
	FBPSteamResult__k_EResultPasswordRequiredToKickSession = 47,
	FBPSteamResult__k_EResultAlreadyLoggedInElsewhere = 48,
	FBPSteamResult__k_EResultSuspended = 49,
	FBPSteamResult__k_EResultCancelled = 50,
	FBPSteamResult__k_EResultDataCorruption = 51,
	FBPSteamResult__k_EResultDiskFull = 52,
	FBPSteamResult__k_EResultRemoteCallFailed = 53,
	FBPSteamResult__k_EResultPasswordUnset = 54,
	FBPSteamResult__k_EResultExternalAccountUnlinked = 55,
	FBPSteamResult__k_EResultPSNTicketInvalid = 56,
	FBPSteamResult__k_EResultExternalAccountAlreadyLinked = 57,
	FBPSteamResult__k_EResultRemoteFileConflict = 58,
	FBPSteamResult__k_EResultIllegalPassword = 59,
	FBPSteamResult__k_EResultSameAsPreviousValue = 60,
	FBPSteamResult__k_EResultAccountLogonDenied = 61,
	FBPSteamResult__k_EResultCannotUseOldPassword = 62,
	FBPSteamResult__k_EResultInvalidLoginAuthCode = 63,
	FBPSteamResult__k_EResultAccountLogonDeniedNoMail = 64,
	FBPSteamResult__k_EResultHardwareNotCapableOfIPT = 65,
	FBPSteamResult__k_EResultIPTInitError = 66,
	FBPSteamResult__k_EResultParentalControlRestricted = 67,
	FBPSteamResult__k_EResultFacebookQueryError = 68,
	FBPSteamResult__k_EResultExpiredLoginAuthCode = 69,
	FBPSteamResult__k_EResultIPLoginRestrictionFailed = 70,
	FBPSteamResult__k_EResultAccountLockedDown = 71,
	FBPSteamResult__k_EResultAccountLogonDeniedVerifiedEmailRequired = 72,
	FBPSteamResult__k_EResultNoMatchingURL = 73,
	FBPSteamResult__k_EResultBadResponse = 74,
	FBPSteamResult__k_EResultRequirePasswordReEntry = 75,
	FBPSteamResult__k_EResultValueOutOfRange = 76,
	FBPSteamResult__k_EResultUnexpectedError = 77,
	FBPSteamResult__k_EResultDisabled = 78,
	FBPSteamResult__k_EResultInvalidCEGSubmission = 79,
	FBPSteamResult__k_EResultRestrictedDevice = 80,
	FBPSteamResult__k_EResultRegionLocked = 81,
	FBPSteamResult__k_EResultRateLimitExceeded = 82,
	FBPSteamResult__k_EResultAccountLoginDeniedNeedTwoFactor = 83,
	FBPSteamResult__k_EResultItemDeleted = 84,
	FBPSteamResult__k_EResultAccountLoginDeniedThrottle = 85,
	FBPSteamResult__k_EResultTwoFactorCodeMismatch = 86,
	FBPSteamResult__k_EResultTwoFactorActivationCodeMismatch = 87,
	FBPSteamResult__k_EResultAccountAssociatedToMultiplePartners = 88,
	FBPSteamResult__k_EResultNotModified = 89,
	FBPSteamResult__k_MAX          = 90
};


// Enum AdvancedSteamSessions.ESteamUserOverlayType
enum class ESteamUserOverlayType : uint8_t
{
	ESteamUserOverlayType__steamid = 0,
	ESteamUserOverlayType__chat    = 1,
	ESteamUserOverlayType__jointrade = 2,
	ESteamUserOverlayType__stats   = 3,
	ESteamUserOverlayType__achievements = 4,
	ESteamUserOverlayType__friendadd = 5,
	ESteamUserOverlayType__friendremove = 6,
	ESteamUserOverlayType__friendrequestaccept = 7,
	ESteamUserOverlayType__friendrequestignore = 8,
	ESteamUserOverlayType__ESteamUserOverlayType_MAX = 9
};


// Enum AdvancedSteamSessions.SteamAvatarSize
enum class ESteamAvatarSize : uint8_t
{
	SteamAvatarSize__SteamAvatar_Small = 0,
	SteamAvatarSize__SteamAvatar_Medium = 1,
	SteamAvatarSize__SteamAvatar_Large = 2,
	SteamAvatarSize__SteamAvatar_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AdvancedSteamSessions.BPSteamGroupInfo
// 0x0050
struct FBPSteamGroupInfo
{
	struct FBPUniqueNetId                              GroupID;                                                  // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     GroupName;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GroupTag;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                numOnline;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                numInGame;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                numChatting;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopID
// 0x0008
struct FBPSteamWorkshopID
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AdvancedSteamSessions.BPSteamGroupOfficer
// 0x0028
struct FBPSteamGroupOfficer
{
	struct FBPUniqueNetId                              OfficerUniqueNetID;                                       // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsOwner;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopItemDetails
// 0x0060
struct FBPSteamWorkshopItemDetails
{
	EFBPSteamResult                                    ResultOfRequest;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFBPWorkshopFileType                               FileType;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                CreatorAppID;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ConsumerAppID;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Title;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ItemUrl;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                VotesUp;                                                  // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VotesDown;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CalculatedScore;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBanned;                                                  // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAcceptedForUse;                                          // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTagsTruncated;                                           // 0x004E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x004F(0x0001) MISSED OFFSET
	struct FString                                     CreatorSteamID;                                           // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
