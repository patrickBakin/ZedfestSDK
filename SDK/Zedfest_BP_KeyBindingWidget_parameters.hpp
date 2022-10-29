#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.Set Action Text
struct UBP_KeyBindingWidget_C_Set_Action_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.Set Key Bind Text
struct UBP_KeyBindingWidget_C_Set_Key_Bind_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.Construct
struct UBP_KeyBindingWidget_C_Construct_Params
{
};

// Function BP_KeyBindingWidget.BP_KeyBindingWidget_C.ExecuteUbergraph_BP_KeyBindingWidget
struct UBP_KeyBindingWidget_C_ExecuteUbergraph_BP_KeyBindingWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
