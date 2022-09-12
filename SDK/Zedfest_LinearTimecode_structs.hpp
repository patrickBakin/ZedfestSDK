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
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LinearTimecode.DropTimecode
// 0x001C
struct FDropTimecode
{
	struct FTimecode                                   Timecode;                                                 // 0x0000(0x0014) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrameRate;                                                // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bColorFraming;                                            // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunningForward;                                          // 0x0019(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNewFrame;                                                // 0x001A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
