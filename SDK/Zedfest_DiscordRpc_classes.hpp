#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DiscordRpc.DiscordRpc
// 0x0128 (0x0150 - 0x0028)
class UDiscordRpc : public UObject
{
public:
	bool                                               IsConnected;                                              // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnConnected;                                              // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisconnected;                                           // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnErrored;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJoin;                                                   // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectate;                                               // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJoinRequest;                                            // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FDiscordRichPresence                        RichPresence;                                             // 0x0090(0x00C0) (BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DiscordRpc.DiscordRpc");
		return ptr;
	}


	void UpdatePresence();
	void Shutdown();
	void RunCallbacks();
	void Respond(struct FString* userId, int* Reply);
	void Initialize(struct FString* applicationId, bool* autoRegister, struct FString* optionalSteamId);
	void ClearPresence();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
