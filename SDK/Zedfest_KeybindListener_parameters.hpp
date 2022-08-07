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

// Function KeybindListener.KeybindListener_C.KeyDown
struct UKeybindListener_C_KeyDown_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KeybindListener.KeybindListener_C.OnPreviewMouseButtonDown
struct UKeybindListener_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KeybindListener.KeybindListener_C.RemoveDuplicateAxisKey
struct UKeybindListener_C_RemoveDuplicateAxisKey_Params
{
};

// Function KeybindListener.KeybindListener_C.RemoveDuplicateActionKey
struct UKeybindListener_C_RemoveDuplicateActionKey_Params
{
};

// Function KeybindListener.KeybindListener_C.OnPreviewKeyDown
struct UKeybindListener_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KeybindListener.KeybindListener_C.Construct
struct UKeybindListener_C_Construct_Params
{
};

// Function KeybindListener.KeybindListener_C.ExecuteUbergraph_KeybindListener
struct UKeybindListener_C_ExecuteUbergraph_KeybindListener_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeybindListener.KeybindListener_C.OnKeybindWizardCancel__DelegateSignature
struct UKeybindListener_C_OnKeybindWizardCancel__DelegateSignature_Params
{
};

// Function KeybindListener.KeybindListener_C.ProperKeyPressed__DelegateSignature
struct UKeybindListener_C_ProperKeyPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
