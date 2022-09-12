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

// Function BP_navset_event_handler.BP_navset_event_handler_C.OnBackClick__DelegateSignature
struct UBP_navset_event_handler_C_OnBackClick__DelegateSignature_Params
{
};

// Function BP_navset_event_handler.BP_navset_event_handler_C.OnEscapeCall__DelegateSignature
struct UBP_navset_event_handler_C_OnEscapeCall__DelegateSignature_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     Behaviour;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseUnhover__DelegateSignature
struct UBP_navset_event_handler_C_OnMouseUnhover__DelegateSignature_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseHover__DelegateSignature
struct UBP_navset_event_handler_C_OnMouseHover__DelegateSignature_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navset_event_handler.BP_navset_event_handler_C.OnClick__DelegateSignature
struct UBP_navset_event_handler_C_OnClick__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
