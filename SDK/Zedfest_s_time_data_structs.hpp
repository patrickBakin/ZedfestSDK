#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct s_time_data.s_time_data
// 0x0052
struct Fs_time_data
{
	struct FTransform                                  transform_data_2_F06622424E8FC7BCAEDFE8A51D3DB5D6;        // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     velocity_data_5_604C03594F4F73F4FFD780A2C9DAC530;         // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          bones_data_17_373AE67B493B9E4FC92639A9CE12D72C;           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               physics_data_8_E34D52DA4B38B4DAAD1B69957124D415;          // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               custom_data_01_14_173557F24EAC85141A2D3395E05108A1;       // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
