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

// Enum DiscordRpc.EDiscordPartyPrivacy
enum class EDiscordPartyPrivacy : uint8_t
{
	EDiscordPartyPrivacy__DISCORD_PARTY_PRIVATE = 0,
	EDiscordPartyPrivacy__DISCORD_PARTY_PUBLIC = 1,
	EDiscordPartyPrivacy__DISCORD_PARTY_MAX = 2
};


// Enum DiscordRpc.EDiscordJoinResponseCodes
enum class EDiscordJoinResponseCodes : uint8_t
{
	EDiscordJoinResponseCodes__DISCORD_REPLY_NO = 0,
	EDiscordJoinResponseCodes__DISCORD_REPLY_YES = 1,
	EDiscordJoinResponseCodes__DISCORD_REPLY_IGNORE = 2,
	EDiscordJoinResponseCodes__DISCORD_REPLY_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DiscordRpc.DiscordRichPresence
// 0x00C0
struct FDiscordRichPresence
{
	struct FString                                     State;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     details;                                                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                startTimestamp;                                           // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                endTimestamp;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     largeImageKey;                                            // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     largeImageText;                                           // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     smallImageKey;                                            // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     smallImageText;                                           // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     partyId;                                                  // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                partySize;                                                // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                partyMax;                                                 // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDiscordPartyPrivacy                               partyPrivacy;                                             // 0x0080(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     matchSecret;                                              // 0x0088(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     joinSecret;                                               // 0x0098(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     spectateSecret;                                           // 0x00A8(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               instance;                                                 // 0x00B8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct DiscordRpc.DiscordUserData
// 0x0040
struct FDiscordUserData
{
	struct FString                                     userId;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     username;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     discriminator;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     avatar;                                                   // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
