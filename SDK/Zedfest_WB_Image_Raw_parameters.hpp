#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WB_Image_Raw.WB_Image_Raw_C.SetColor
struct UWB_Image_Raw_C_SetColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Image_Raw.WB_Image_Raw_C.SetBackgroundBlur
struct UWB_Image_Raw_C_SetBackgroundBlur_Params
{
	bool*                                              IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlurStrength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Image_Raw.WB_Image_Raw_C.ExecuteUbergraph_WB_Image_Raw
struct UWB_Image_Raw_C_ExecuteUbergraph_WB_Image_Raw_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
