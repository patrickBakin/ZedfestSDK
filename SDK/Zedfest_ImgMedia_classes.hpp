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
//Classes
//---------------------------------------------------------------------------

// Class ImgMedia.ImgMediaSource
// 0x0028 (0x0060 - 0x0038)
class UImgMediaSource : public UBaseMediaSource
{
public:
	struct FFrameRate                                  FrameRateOverride;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ProxyOverride;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FDirectoryPath                              SequencePath;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImgMedia.ImgMediaSource");
		return ptr;
	}


	void SetSequencePath(struct FString* Path);
	struct FString GetSequencePath();
	void GetProxies(TArray<struct FString>* OutProxies);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
