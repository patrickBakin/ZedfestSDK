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

// Function ServerBrowserPanel.ServerBrowserPanel_C.OnEscapeInput
struct UServerBrowserPanel_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.GetEventHandler
struct UServerBrowserPanel_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.GetStepIndex
struct UServerBrowserPanel_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.GetFoundServers
struct UServerBrowserPanel_C_GetFoundServers_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.GetStatus
struct UServerBrowserPanel_C_GetStatus_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.OnFailure_D6711AF64C98DDCA346BA098DF70A3F8
struct UServerBrowserPanel_C_OnFailure_D6711AF64C98DDCA346BA098DF70A3F8_Params
{
	TArray<struct FBlueprintSessionResult>*            Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.OnSuccess_D6711AF64C98DDCA346BA098DF70A3F8
struct UServerBrowserPanel_C_OnSuccess_D6711AF64C98DDCA346BA098DF70A3F8_Params
{
	TArray<struct FBlueprintSessionResult>*            Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.GetEscapeBehaviour
struct UServerBrowserPanel_C_GetEscapeBehaviour_Params
{
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.Construct
struct UServerBrowserPanel_C_Construct_Params
{
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.Destruct
struct UServerBrowserPanel_C_Destruct_Params
{
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.SetNavManager
struct UServerBrowserPanel_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.SetStepIndex
struct UServerBrowserPanel_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UServerBrowserPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.OnNavigationScroll
struct UServerBrowserPanel_C_OnNavigationScroll_Params
{
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.SetOnEscapeBehaviour
struct UServerBrowserPanel_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     EscapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__Button_125_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature
struct UServerBrowserPanel_C_BndEvt__Button_125_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
struct UServerBrowserPanel_C_BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UServerBrowserPanel_C_BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct UServerBrowserPanel_C_BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
struct UServerBrowserPanel_C_BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
struct UServerBrowserPanel_C_BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__ServerIDTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UServerBrowserPanel_C_BndEvt__ServerIDTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ServerBrowserPanel.ServerBrowserPanel_C.ExecuteUbergraph_ServerBrowserPanel
struct UServerBrowserPanel_C_ExecuteUbergraph_ServerBrowserPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
