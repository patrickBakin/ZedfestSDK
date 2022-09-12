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

// Function HeadNameWidget.HeadNameWidget_C.RotateNameToCamera
struct AHeadNameWidget_C_RotateNameToCamera_Params
{
};

// Function HeadNameWidget.HeadNameWidget_C.ReceiveBeginPlay
struct AHeadNameWidget_C_ReceiveBeginPlay_Params
{
};

// Function HeadNameWidget.HeadNameWidget_C.SetTextName
struct AHeadNameWidget_C_SetTextName_Params
{
	struct FString*                                    PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class APlayerState**                               PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadNameWidget.HeadNameWidget_C.ExecuteUbergraph_HeadNameWidget
struct AHeadNameWidget_C_ExecuteUbergraph_HeadNameWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
