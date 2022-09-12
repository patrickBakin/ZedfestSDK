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

// Function TabButtons.TabButtons_C.GetSelected
struct UTabButtons_C_GetSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TabButtons.TabButtons_C.SetSelected
struct UTabButtons_C_SetSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabButtons.TabButtons_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTabButtons_C_BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TabButtons.TabButtons_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UTabButtons_C_BndEvt__Button_79_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TabButtons.TabButtons_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UTabButtons_C_BndEvt__Button_79_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TabButtons.TabButtons_C.PreConstruct
struct UTabButtons_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabButtons.TabButtons_C.ExecuteUbergraph_TabButtons
struct UTabButtons_C_ExecuteUbergraph_TabButtons_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabButtons.TabButtons_C.OnUnhovered__DelegateSignature
struct UTabButtons_C_OnUnhovered__DelegateSignature_Params
{
};

// Function TabButtons.TabButtons_C.OnHovered__DelegateSignature
struct UTabButtons_C_OnHovered__DelegateSignature_Params
{
};

// Function TabButtons.TabButtons_C.OnClicked__DelegateSignature
struct UTabButtons_C_OnClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
