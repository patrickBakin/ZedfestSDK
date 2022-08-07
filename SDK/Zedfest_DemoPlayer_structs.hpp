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

// Enum DemoPlayer.EVRMoveMode
enum class EVRMoveMode : uint8_t
{
	EVRMoveMode__FLY               = 0,
	EVRMoveMode__TELEPORT          = 1,
	EVRMoveMode__MOTION            = 2,
	EVRMoveMode__HYBRID            = 3,
	EVRMoveMode__EVRMoveMode_MAX   = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DemoPlayer.DemoEntry
// 0x00B0
struct FDemoEntry
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
	struct FString                                     StreamName;                                               // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     FriendlyName;                                             // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Date;                                                     // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Timespan;                                                 // 0x0078(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Size;                                                     // 0x0088(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                ResultsIndex;                                             // 0x0098(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLive;                                                  // 0x009C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	int                                                NumViewers;                                               // 0x00A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumHours;                                                 // 0x00A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumMinutes;                                               // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSeconds;                                               // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
