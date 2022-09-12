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

// Function W_BossHealth.W_BossHealth_C.Get_Boss_ShieldText
struct UW_BossHealth_C_Get_Boss_ShieldText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_BossHealth.W_BossHealth_C.Get_BossNameText
struct UW_BossHealth_C_Get_BossNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_BossHealth.W_BossHealth_C.Get_Boss_HealthText
struct UW_BossHealth_C_Get_Boss_HealthText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_BossHealth.W_BossHealth_C.Construct
struct UW_BossHealth_C_Construct_Params
{
};

// Function W_BossHealth.W_BossHealth_C.ExecuteUbergraph_W_BossHealth
struct UW_BossHealth_C_ExecuteUbergraph_W_BossHealth_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
