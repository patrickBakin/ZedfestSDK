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

// Class DemoPlayer.DemoPlayerController
// 0x0018 (0x0690 - 0x0678)
class ADemoPlayerController : public APlayerController
{
public:
	TArray<float>                                      DemoPlaybackSpeeds;                                       // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PlaybackSpeed;                                            // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x068C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DemoPlayer.DemoPlayerController");
		return ptr;
	}


	void TakeOverVRPawn(class APawn** APawn);
	void ReleaseVRPawn();
	void OnTakeScreenShot();
	void OnIncreasePlaybackSpeed();
	void OnDecreasePlaybackSpeed();
	float GetPlaybackSpeed();
	void ChangeState(struct FName* NewState);
	void BP_ToggleMenu();
};


// Class DemoPlayer.DemoPlayerGameInstance
// 0x0088 (0x01F0 - 0x0168)
class UDemoPlayerGameInstance : public UGameInstance
{
public:
	bool                                               bIsDemoPausedAfterScrub;                                  // 0x0168(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	float                                              StepSize;                                                 // 0x016C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_OnDemoPauseChanged;                                    // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0188(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_OnBuildDemoListFinished;                               // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET
	bool                                               bUpdatingDemoList;                                        // 0x01C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	TArray<struct FDemoEntry>                          DemoList;                                                 // 0x01C8(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               PlayerWantsVROn;                                          // 0x01D8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x17];                                      // 0x01D9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DemoPlayer.DemoPlayerGameInstance");
		return ptr;
	}


	void StopRecordingReplayBP();
	void StopMovieCapture();
	void StopDemo();
	void StepForward();
	void StepBackward();
	void StartRecordingReplayBP(struct FString* InName, struct FString* FriendlyName);
	void StartMovieCapture();
	void SetScrubDemoState(bool* IsEnabled);
	void ScrubDemoTimeInSeconds(float* Time);
	void ResumePauseDemo();
	float ReplayPercentage();
	void PlayQueuedDemo();
	void PlayDemo(struct FString* DemoName, float* StartTime);
	void PauseDemo(bool* IsPaused, class APlayerController** PlayerOwner);
	bool IsDemoPaused();
	void GotoDemoTimeInSeconds(float* Time);
	struct FString GetLastScreenShotPath();
	float DemoTotalTime();
	int DemoTotalFrames();
	float DemoTimeDilation();
	float DemoCurrentTime();
	int DemoCurrentFrame();
	void DeleteDemo(struct FString* DemoName);
	void BuildDemoList();
};


// Class DemoPlayer.DemoPlayerGameState
// 0x0008 (0x0398 - 0x0390)
class ADemoPlayerGameState : public AGameState
{
public:
	bool                                               bAutoRecordServer;                                        // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRecordClient;                                        // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DemoPlayer.DemoPlayerGameState");
		return ptr;
	}

};


// Class DemoPlayer.DemoPlayerState
// 0x0008 (0x0460 - 0x0458)
class ADemoPlayerState : public APlayerState
{
public:
	bool                                               bIsDemoSpectator;                                         // 0x0458(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0459(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DemoPlayer.DemoPlayerState");
		return ptr;
	}

};


// Class DemoPlayer.DemoVRMotionPawn
// 0x0010 (0x03A0 - 0x0390)
class ADemoVRMotionPawn : public APawn
{
public:
	TArray<class AActor*>                              ActorsAttached;                                           // 0x0390(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DemoPlayer.DemoVRMotionPawn");
		return ptr;
	}


	void ShowPawn(bool* bInShow);
	void SetNetStartup();
};


// Class DemoPlayer.DemoVRPawn
// 0x0018 (0x03A8 - 0x0390)
class ADemoVRPawn : public APawn
{
public:
	float                                              BaseTurnRate;                                             // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BaseLookUpRate;                                           // 0x0394(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UPawnMovementComponent*                      MovementComponent;                                        // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bAddDefaultMovementBindings : 1;                          // 0x03A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	bool                                               bOverrideTurning;                                         // 0x03A4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DemoPlayer.DemoVRPawn");
		return ptr;
	}


	void TurnAtRate(float* Rate);
	void Turn(float* Val);
	void MoveUp_World(float* Val);
	void MoveRight(float* Val);
	void MoveForward(float* Val);
	void LookUpAtRate(float* Rate);
	void LookUp(float* Val);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
