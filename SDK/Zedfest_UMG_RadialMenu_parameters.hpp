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

// Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildIndexFromRadialMenu
struct UUMG_RadialMenu_C_RemoveChildIndexFromRadialMenu_Params
{
	int*                                               IndexToRemove;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildWidgetFromRadialMenu
struct UUMG_RadialMenu_C_RemoveChildWidgetFromRadialMenu_Params
{
	class UUserWidget**                                ItemToFind;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.DebugIndex
struct UUMG_RadialMenu_C_DebugIndex_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.FixInputRotation
struct UUMG_RadialMenu_C_FixInputRotation_Params
{
	struct FVector2D*                                  Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.FixMainRotation
struct UUMG_RadialMenu_C_FixMainRotation_Params
{
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.AutoRegisterToInput
struct UUMG_RadialMenu_C_AutoRegisterToInput_Params
{
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateInput
struct UUMG_RadialMenu_C_UpdateInput_Params
{
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.RegisterPlayerInput
struct UUMG_RadialMenu_C_RegisterPlayerInput_Params
{
	class APlayerController**                          Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithJoystick
struct UUMG_RadialMenu_C_UpdateDirectionWithJoystick_Params
{
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.GetCurrentIndex
struct UUMG_RadialMenu_C_GetCurrentIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.GetChild
struct UUMG_RadialMenu_C_GetChild_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Output;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.SetIndex
struct UUMG_RadialMenu_C_SetIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateAllChildrenPositions
struct UUMG_RadialMenu_C_UpdateAllChildrenPositions_Params
{
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateChildPosition
struct UUMG_RadialMenu_C_UpdateChildPosition_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.ClearChildren
struct UUMG_RadialMenu_C_ClearChildren_Params
{
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.GetSelectedWidget
struct UUMG_RadialMenu_C_GetSelectedWidget_Params
{
	class UUserWidget*                                 Output;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.AddChildToRadialMenu
struct UUMG_RadialMenu_C_AddChildToRadialMenu_Params
{
	class UUserWidget**                                Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithMouseCursor
struct UUMG_RadialMenu_C_UpdateDirectionWithMouseCursor_Params
{
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.GetSectionDegreeSize
struct UUMG_RadialMenu_C_GetSectionDegreeSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.SetInputDirection
struct UUMG_RadialMenu_C_SetInputDirection_Params
{
	struct FVector2D*                                  Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.Construct
struct UUMG_RadialMenu_C_Construct_Params
{
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateSegments
struct UUMG_RadialMenu_C_UpdateSegments_Params
{
	int*                                               Segments;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.InDeadzone
struct UUMG_RadialMenu_C_InDeadzone_Params
{
	bool*                                              InDeadzone;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterials
struct UUMG_RadialMenu_C_UpdateMaterials_Params
{
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.PreConstruct
struct UUMG_RadialMenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.ExecuteUbergraph_UMG_RadialMenu
struct UUMG_RadialMenu_C_ExecuteUbergraph_UMG_RadialMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.ExitedDeadzone__DelegateSignature
struct UUMG_RadialMenu_C_ExitedDeadzone__DelegateSignature_Params
{
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.EnteredDeadzone__DelegateSignature
struct UUMG_RadialMenu_C_EnteredDeadzone__DelegateSignature_Params
{
};

// Function UMG_RadialMenu.UMG_RadialMenu_C.SelectionChanged__DelegateSignature
struct UUMG_RadialMenu_C_SelectionChanged__DelegateSignature_Params
{
	int*                                               NewSelection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OldSelection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
