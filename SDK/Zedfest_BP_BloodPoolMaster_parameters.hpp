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

// Function BP_BloodPoolMaster.BP_BloodPoolMaster_C.ReceiveTick
struct ABP_BloodPoolMaster_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BloodPoolMaster.BP_BloodPoolMaster_C.ReceiveBeginPlay
struct ABP_BloodPoolMaster_C_ReceiveBeginPlay_Params
{
};

// Function BP_BloodPoolMaster.BP_BloodPoolMaster_C.ExecuteUbergraph_BP_BloodPoolMaster
struct ABP_BloodPoolMaster_C_ExecuteUbergraph_BP_BloodPoolMaster_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
