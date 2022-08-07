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

// Function HostGamePanel1.HostGamePanel1_C.OnEscapeInput
struct UHostGamePanel1_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HostGamePanel1.HostGamePanel1_C.GetEventHandler
struct UHostGamePanel1_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HostGamePanel1.HostGamePanel1_C.GetStepIndex
struct UHostGamePanel1_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HostGamePanel1.HostGamePanel1_C.HordeModeToolTip
struct UHostGamePanel1_C_HordeModeToolTip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HostGamePanel1.HostGamePanel1_C.ObjectiveModeToolTip
struct UHostGamePanel1_C_ObjectiveModeToolTip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__PassWordBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UHostGamePanel1_C_BndEvt__PassWordBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UHostGamePanel1_C_BndEvt__EasyButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__NormalButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UHostGamePanel1_C_BndEvt__NormalButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__HardButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UHostGamePanel1_C_BndEvt__HardButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UHostGamePanel1_C_BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
struct UHostGamePanel1_C_BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
struct UHostGamePanel1_C_BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Randomizer_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__Randomizer_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__HostButton_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature
struct UHostGamePanel1_C_BndEvt__HostButton_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__3WavesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__3WavesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__6WavesButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__6WavesButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__10WavesButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__10WavesButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__EndlessButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__EndlessButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Endless+Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__Endless_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.SetOnEscapeBehaviour
struct UHostGamePanel1_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     escapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__GameModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__GameModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_2_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__Button1_C_2_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.SetStepIndex
struct UHostGamePanel1_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HostGamePanel1.HostGamePanel1_C.SetNavManager
struct UHostGamePanel1_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HostGamePanel1.HostGamePanel1_C.Destruct
struct UHostGamePanel1_C_Destruct_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.MapButtonClicked
struct UHostGamePanel1_C_MapButtonClicked_Params
{
	struct FText*                                      LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName*                                      LevelRawName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 MapImage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      LevelDescription;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HostGamePanel1.HostGamePanel1_C.Construct
struct UHostGamePanel1_C_Construct_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.GetEscapeBehaviour
struct UHostGamePanel1_C_GetEscapeBehaviour_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.HostgameButtonEvent
struct UHostGamePanel1_C_HostgameButtonEvent_Params
{
	bool*                                              Solo_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UHostGamePanel1_C_BndEvt__ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Kamikaze+Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
struct UHostGamePanel1_C_BndEvt__Kamikaze_Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.CustomEvent_4
struct UHostGamePanel1_C_CustomEvent_4_Params
{
};

// Function HostGamePanel1.HostGamePanel1_C.ExecuteUbergraph_HostGamePanel1
struct UHostGamePanel1_C_ExecuteUbergraph_HostGamePanel1_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
