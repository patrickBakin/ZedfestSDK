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

// Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected = 0,
	EEyeTrackerStatus__NotTracking = 1,
	EEyeTrackerStatus__Tracking    = 2,
	EEyeTrackerStatus__EEyeTrackerStatus_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// 0x0040
struct FEyeTrackerStereoGazeData
{
	struct FVector                                     LeftEyeOrigin;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftEyeDirection;                                         // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEyeOrigin;                                           // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEyeDirection;                                        // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FixationPoint;                                            // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConfidenceValue;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
// 0x0028
struct FEyeTrackerGazeData
{
	struct FVector                                     GazeOrigin;                                               // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GazeDirection;                                            // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FixationPoint;                                            // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConfidenceValue;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
