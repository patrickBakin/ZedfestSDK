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

// Function TabbedPanel.TabbedPanel_C.SetTabSwitching
struct UTabbedPanel_C_SetTabSwitching_Params
{
	bool*                                              Enable_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabbedPanel.TabbedPanel_C.GetPanel
struct UTabbedPanel_C_GetPanel_Params
{
	class UUserWidget*                                 PanelRef;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabbedPanel.TabbedPanel_C.OnEscapeHandle
struct UTabbedPanel_C_OnEscapeHandle_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TabbedPanel.TabbedPanel_C.LoadPanel
struct UTabbedPanel_C_LoadPanel_Params
{
	int*                                               index_val;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     PanelWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabbedPanel.TabbedPanel_C.NavigateTab
struct UTabbedPanel_C_NavigateTab_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabbedPanel.TabbedPanel_C.OnInput
struct UTabbedPanel_C_OnInput_Params
{
	struct FKeyEvent*                                  In_Key_Event;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TabbedPanel.TabbedPanel_C.PreConstruct
struct UTabbedPanel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabbedPanel.TabbedPanel_C.LoadStartPanel
struct UTabbedPanel_C_LoadStartPanel_Params
{
};

// Function TabbedPanel.TabbedPanel_C.LoadOutPreviewFromLobby
struct UTabbedPanel_C_LoadOutPreviewFromLobby_Params
{
};

// Function TabbedPanel.TabbedPanel_C.ExecuteUbergraph_TabbedPanel
struct UTabbedPanel_C_ExecuteUbergraph_TabbedPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabbedPanel.TabbedPanel_C.OnTabChange__DelegateSignature
struct UTabbedPanel_C_OnTabChange__DelegateSignature_Params
{
	class UWidget**                                    TabPanel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
