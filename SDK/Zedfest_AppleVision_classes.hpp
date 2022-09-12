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

// Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy
// 0x0050 (0x0078 - 0x0028)
class UAppleVisionDetectFacesAsyncTaskBlueprintProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	struct FFaceDetectionResult                        FaceDetectionResult;                                      // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy");
		return ptr;
	}


	class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForDetectFaces(class UTexture** SourceImage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
