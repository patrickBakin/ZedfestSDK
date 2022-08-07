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

// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Create Key Bind Widgets
struct UBP_ItemInteractionWidget_C_Create_Key_Bind_Widgets_Params
{
};

// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Widget Color
struct UBP_ItemInteractionWidget_C_Get_Widget_Color_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Amount Text
struct UBP_ItemInteractionWidget_C_Get_Amount_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Level Text
struct UBP_ItemInteractionWidget_C_Get_Level_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Title Text
struct UBP_ItemInteractionWidget_C_Get_Title_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Get Sub Title Text
struct UBP_ItemInteractionWidget_C_Get_Sub_Title_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.Construct
struct UBP_ItemInteractionWidget_C_Construct_Params
{
};

// Function BP_ItemInteractionWidget.BP_ItemInteractionWidget_C.ExecuteUbergraph_BP_ItemInteractionWidget
struct UBP_ItemInteractionWidget_C_ExecuteUbergraph_BP_ItemInteractionWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
