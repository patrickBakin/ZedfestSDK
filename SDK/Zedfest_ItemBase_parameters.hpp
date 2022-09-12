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

// Function ItemBase.ItemBase_C.Get Amount
struct AItemBase_C_Get_Amount_Params
{
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemBase.ItemBase_C.Decrease Amount
struct AItemBase_C_Decrease_Amount_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryType>*                       Inventory_Type;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemBase.ItemBase_C.Increase Amount
struct AItemBase_C_Increase_Amount_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Bar_Selection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemBase.ItemBase_C.UserConstructionScript
struct AItemBase_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
