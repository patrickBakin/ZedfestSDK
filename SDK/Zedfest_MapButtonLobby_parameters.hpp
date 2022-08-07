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

// Function MapButtonLobby.MapButtonLobby_C.GetNavigationAction
struct UMapButtonLobby_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MapButtonLobby.MapButtonLobby_C.GetIndex
struct UMapButtonLobby_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapButtonLobby.MapButtonLobby_C.GetEventHandler
struct UMapButtonLobby_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapButtonLobby.MapButtonLobby_C.GetIsSelected
struct UMapButtonLobby_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapButtonLobby.MapButtonLobby_C.UpdateButtonStyle
struct UMapButtonLobby_C_UpdateButtonStyle_Params
{
	struct FLinearColor*                               Specified_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButtonLobby.MapButtonLobby_C.SetIsActive
struct UMapButtonLobby_C_SetIsActive_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButtonLobby.MapButtonLobby_C.ChangeValue
struct UMapButtonLobby_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButtonLobby.MapButtonLobby_C.PreConstruct
struct UMapButtonLobby_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButtonLobby.MapButtonLobby_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMapButtonLobby_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MapButtonLobby.MapButtonLobby_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UMapButtonLobby_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MapButtonLobby.MapButtonLobby_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UMapButtonLobby_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MapButtonLobby.MapButtonLobby_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UMapButtonLobby_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function MapButtonLobby.MapButtonLobby_C.HoverSelect
struct UMapButtonLobby_C_HoverSelect_Params
{
};

// Function MapButtonLobby.MapButtonLobby_C.HoverDeselect
struct UMapButtonLobby_C_HoverDeselect_Params
{
};

// Function MapButtonLobby.MapButtonLobby_C.SetIsSelected
struct UMapButtonLobby_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButtonLobby.MapButtonLobby_C.OnClick
struct UMapButtonLobby_C_OnClick_Params
{
};

// Function MapButtonLobby.MapButtonLobby_C.SetEventHandler
struct UMapButtonLobby_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MapButtonLobby.MapButtonLobby_C.SetIndex
struct UMapButtonLobby_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButtonLobby.MapButtonLobby_C.SetFocus
struct UMapButtonLobby_C_SetFocus_Params
{
};

// Function MapButtonLobby.MapButtonLobby_C.RemoveFocus
struct UMapButtonLobby_C_RemoveFocus_Params
{
};

// Function MapButtonLobby.MapButtonLobby_C.ExecuteUbergraph_MapButtonLobby
struct UMapButtonLobby_C_ExecuteUbergraph_MapButtonLobby_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButtonLobby.MapButtonLobby_C.OnUnhover__DelegateSignature
struct UMapButtonLobby_C_OnUnhover__DelegateSignature_Params
{
};

// Function MapButtonLobby.MapButtonLobby_C.OnHover__DelegateSignature
struct UMapButtonLobby_C_OnHover__DelegateSignature_Params
{
};

// Function MapButtonLobby.MapButtonLobby_C.OnClicked__DelegateSignature
struct UMapButtonLobby_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
