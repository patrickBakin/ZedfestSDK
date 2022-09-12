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

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetIsSelected
struct ULoadOutPreviewCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetEventHandler
struct ULoadOutPreviewCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetIndex
struct ULoadOutPreviewCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetNavigationAction
struct ULoadOutPreviewCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.HoverSelect
struct ULoadOutPreviewCard_C_HoverSelect_Params
{
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.HoverDeselect
struct ULoadOutPreviewCard_C_HoverDeselect_Params
{
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.ChangeValue
struct ULoadOutPreviewCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetFocus
struct ULoadOutPreviewCard_C_SetFocus_Params
{
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.RemoveFocus
struct ULoadOutPreviewCard_C_RemoveFocus_Params
{
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetIsSelected
struct ULoadOutPreviewCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnClick
struct ULoadOutPreviewCard_C_OnClick_Params
{
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetEventHandler
struct ULoadOutPreviewCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.Construct
struct ULoadOutPreviewCard_C_Construct_Params
{
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.LoadOutInfo
struct ULoadOutPreviewCard_C_LoadOutInfo_Params
{
	struct FText*                                      WeaponName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor*                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               WeaponInt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarities>*                        Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InventoryBarSlot;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.PreConstruct
struct ULoadOutPreviewCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetIndex
struct ULoadOutPreviewCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct ULoadOutPreviewCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct ULoadOutPreviewCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct ULoadOutPreviewCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.ExecuteUbergraph_LoadOutPreviewCard
struct ULoadOutPreviewCard_C_ExecuteUbergraph_LoadOutPreviewCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnUnhover__DelegateSignature
struct ULoadOutPreviewCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnHover__DelegateSignature
struct ULoadOutPreviewCard_C_OnHover__DelegateSignature_Params
{
};

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnClicked__DelegateSignature
struct ULoadOutPreviewCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
