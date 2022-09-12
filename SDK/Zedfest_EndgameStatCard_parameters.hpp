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

// Function EndgameStatCard.EndgameStatCard_C.GetIsSelected
struct UEndgameStatCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndgameStatCard.EndgameStatCard_C.GetEventHandler
struct UEndgameStatCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndgameStatCard.EndgameStatCard_C.GetIndex
struct UEndgameStatCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndgameStatCard.EndgameStatCard_C.GetNavigationAction
struct UEndgameStatCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function EndgameStatCard.EndgameStatCard_C.SetFocus
struct UEndgameStatCard_C_SetFocus_Params
{
};

// Function EndgameStatCard.EndgameStatCard_C.RemoveFocus
struct UEndgameStatCard_C_RemoveFocus_Params
{
};

// Function EndgameStatCard.EndgameStatCard_C.SetIndex
struct UEndgameStatCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndgameStatCard.EndgameStatCard_C.OnClick
struct UEndgameStatCard_C_OnClick_Params
{
};

// Function EndgameStatCard.EndgameStatCard_C.Construct
struct UEndgameStatCard_C_Construct_Params
{
};

// Function EndgameStatCard.EndgameStatCard_C.EventUpdateEndGameStats
struct UEndgameStatCard_C_EventUpdateEndGameStats_Params
{
	struct FText*                                      StatText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor*                               Specified_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndgameStatCard.EndgameStatCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UEndgameStatCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function EndgameStatCard.EndgameStatCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UEndgameStatCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function EndgameStatCard.EndgameStatCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UEndgameStatCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EndgameStatCard.EndgameStatCard_C.PreConstruct
struct UEndgameStatCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndgameStatCard.EndgameStatCard_C.ChangeValue
struct UEndgameStatCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndgameStatCard.EndgameStatCard_C.SetEventHandler
struct UEndgameStatCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EndgameStatCard.EndgameStatCard_C.SetIsSelected
struct UEndgameStatCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndgameStatCard.EndgameStatCard_C.HoverDeselect
struct UEndgameStatCard_C_HoverDeselect_Params
{
};

// Function EndgameStatCard.EndgameStatCard_C.HoverSelect
struct UEndgameStatCard_C_HoverSelect_Params
{
};

// Function EndgameStatCard.EndgameStatCard_C.ExecuteUbergraph_EndgameStatCard
struct UEndgameStatCard_C_ExecuteUbergraph_EndgameStatCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndgameStatCard.EndgameStatCard_C.OnUnhover__DelegateSignature
struct UEndgameStatCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function EndgameStatCard.EndgameStatCard_C.OnHover__DelegateSignature
struct UEndgameStatCard_C_OnHover__DelegateSignature_Params
{
};

// Function EndgameStatCard.EndgameStatCard_C.OnClicked__DelegateSignature
struct UEndgameStatCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
