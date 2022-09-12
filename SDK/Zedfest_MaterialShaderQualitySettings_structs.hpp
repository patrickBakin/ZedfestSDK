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

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{
	EMobileCSMQuality__NoFiltering = 0,
	EMobileCSMQuality__PCF_1x1     = 1,
	EMobileCSMQuality__PCF_2x2     = 2,
	EMobileCSMQuality__EMobileCSMQuality_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0008
struct FMaterialQualityOverrides
{
	bool                                               bDiscardQualityDuringCook;                                // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableOverride;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceFullyRough;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceNonMetal;                                           // 0x0003(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceDisableLMDirectionality;                            // 0x0004(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceLQReflections;                                      // 0x0005(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisableMaterialNormalCalculation;                        // 0x0006(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EMobileCSMQuality                                  MobileCSMQuality;                                         // 0x0007(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
