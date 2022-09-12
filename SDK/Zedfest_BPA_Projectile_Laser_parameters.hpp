#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPA_Projectile_Laser.BPA_Projectile_Laser_C.ReceiveBeginPlay
struct ABPA_Projectile_Laser_C_ReceiveBeginPlay_Params
{
};

// Function BPA_Projectile_Laser.BPA_Projectile_Laser_C.AskSRVtoApplyDmg
struct ABPA_Projectile_Laser_C_AskSRVtoApplyDmg_Params
{
};

// Function BPA_Projectile_Laser.BPA_Projectile_Laser_C.ExecuteUbergraph_BPA_Projectile_Laser
struct ABPA_Projectile_Laser_C_ExecuteUbergraph_BPA_Projectile_Laser_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
