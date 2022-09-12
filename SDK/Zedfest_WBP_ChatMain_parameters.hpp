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

// Function WBP_ChatMain.WBP_ChatMain_C.UpdateChatWindow
struct UWBP_ChatMain_C_UpdateChatWindow_Params
{
	struct FText*                                      Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              SomeoneIsTyping_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              StoppedTyping_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ChatMain.WBP_ChatMain_C.BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_ChatMain_C_BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ChatMain.WBP_ChatMain_C.CustomEvent_1
struct UWBP_ChatMain_C_CustomEvent_1_Params
{
};

// Function WBP_ChatMain.WBP_ChatMain_C.ShowChatBoxWhenPressingEnter
struct UWBP_ChatMain_C_ShowChatBoxWhenPressingEnter_Params
{
};

// Function WBP_ChatMain.WBP_ChatMain_C.BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_ChatMain_C_BndEvt__ChatSubmit_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ChatMain.WBP_ChatMain_C.ResetOnTextChangedEvent
struct UWBP_ChatMain_C_ResetOnTextChangedEvent_Params
{
};

// Function WBP_ChatMain.WBP_ChatMain_C.Construct
struct UWBP_ChatMain_C_Construct_Params
{
};

// Function WBP_ChatMain.WBP_ChatMain_C.ExecuteUbergraph_WBP_ChatMain
struct UWBP_ChatMain_C_ExecuteUbergraph_WBP_ChatMain_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
