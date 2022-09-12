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

// Function ScreenIndicator.ScreenIndicator_C.Remove Indicator
struct UScreenIndicator_C_Remove_Indicator_Params
{
	class UScreenIndicator_C**                         Indicator_Ref;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Immediately;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenIndicator.ScreenIndicator_C.Check Actor Is Already Tracking?
struct UScreenIndicator_C_Check_Actor_Is_Already_Tracking__Params
{
	bool                                               Can_Spawn_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenIndicator.ScreenIndicator_C.Create Indicator
struct UScreenIndicator_C_Create_Indicator_Params
{
	struct FIndicatorData*                             Indicator_Data;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UScreenIndicator_C*                          Indicator_Ref;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScreenIndicator.ScreenIndicator_C.Spawn Indicator
struct UScreenIndicator_C_Spawn_Indicator_Params
{
};

// Function ScreenIndicator.ScreenIndicator_C.ReceiveEndPlay
struct UScreenIndicator_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenIndicator.ScreenIndicator_C.ExecuteUbergraph_ScreenIndicator
struct UScreenIndicator_C_ExecuteUbergraph_ScreenIndicator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
