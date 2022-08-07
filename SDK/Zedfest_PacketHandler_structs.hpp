#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PacketHandler.NetAnalyticsDataConfig
// 0x000C
struct FNetAnalyticsDataConfig
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0008(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
