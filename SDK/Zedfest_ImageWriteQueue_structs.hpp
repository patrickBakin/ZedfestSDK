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

// Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
	EDesiredImageFormat__PNG       = 0,
	EDesiredImageFormat__JPG       = 1,
	EDesiredImageFormat__BMP       = 2,
	EDesiredImageFormat__EXR       = 3,
	EDesiredImageFormat__EDesiredImageFormat_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// 0x0060
struct FImageWriteOptions
{
	EDesiredImageFormat                                Format;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnComplete;                                               // 0x0004(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	int                                                CompressionQuality;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverwriteFile;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAsync;                                                   // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x46];                                      // 0x001A(0x0046) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
