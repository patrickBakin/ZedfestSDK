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

// Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
	EFFTWindowType__None           = 0,
	EFFTWindowType__Hamming        = 1,
	EFFTWindowType__Hann           = 2,
	EFFTWindowType__Blackman       = 3,
	EFFTWindowType__EFFTWindowType_MAX = 4
};


// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
	EFFTPeakInterpolationMethod__NearestNeighbor = 0,
	EFFTPeakInterpolationMethod__Linear = 1,
	EFFTPeakInterpolationMethod__Quadratic = 2,
	EFFTPeakInterpolationMethod__EFFTPeakInterpolationMethod_MAX = 3
};


// Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8_t
{
	EFFTSize__DefaultSize          = 0,
	EFFTSize__Min                  = 1,
	EFFTSize__Small                = 2,
	EFFTSize__Medium               = 3,
	EFFTSize__Large                = 4,
	EFFTSize__Max                  = 5
};


// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared = 1,
	ESubmixEffectDynamicsPeakMode__Peak = 2,
	ESubmixEffectDynamicsPeakMode__Count = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor = 0,
	ESubmixEffectDynamicsProcessorType__Limiter = 1,
	ESubmixEffectDynamicsProcessorType__Expander = 2,
	ESubmixEffectDynamicsProcessorType__Gate = 3,
	ESubmixEffectDynamicsProcessorType__Count = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// 0x0028
struct FSubmixEffectDynamicsProcessorSettings
{
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              LookAheadMsec;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackTimeMsec;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTimeMsec;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdDb;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KneeBandwidthDb;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputGainDb;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutputGainDb;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bChannelLinked : 1;                                       // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAnalogMode : 1;                                          // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// 0x0010
struct FSubmixEffectEQBand
{
	float                                              Frequency;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GainDb;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0010
struct FSubmixEffectSubmixEQSettings
{
	TArray<struct FSubmixEffectEQBand>                 EQBands;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0034
struct FSubmixEffectReverbSettings
{
	float                                              Density;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Diffusion;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gain;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GainHF;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayTime;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayHFRatio;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionsGain;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionsDelay;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LateGain;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LateDelay;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirAbsorptionGainHF;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
