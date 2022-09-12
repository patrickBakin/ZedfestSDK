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
//Functions
//---------------------------------------------------------------------------

// Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildIndexFromRadialMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           IndexToRemove                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::RemoveChildIndexFromRadialMenu(int* IndexToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildIndexFromRadialMenu");

	UUMG_RadialMenu_C_RemoveChildIndexFromRadialMenu_Params params;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildWidgetFromRadialMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UUMG_RadialMenu_C::RemoveChildWidgetFromRadialMenu(class UUserWidget** ItemToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildWidgetFromRadialMenu");

	UUMG_RadialMenu_C_RemoveChildWidgetFromRadialMenu_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.DebugIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_RadialMenu_C::DebugIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.DebugIndex");

	UUMG_RadialMenu_C_DebugIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.FixInputRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_RadialMenu_C::FixInputRotation(struct FVector2D* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.FixInputRotation");

	UUMG_RadialMenu_C_FixInputRotation_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.FixMainRotation
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_RadialMenu_C::FixMainRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.FixMainRotation");

	UUMG_RadialMenu_C_FixMainRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.AutoRegisterToInput
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_RadialMenu_C::AutoRegisterToInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.AutoRegisterToInput");

	UUMG_RadialMenu_C_AutoRegisterToInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateInput
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_RadialMenu_C::UpdateInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateInput");

	UUMG_RadialMenu_C_UpdateInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.RegisterPlayerInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::RegisterPlayerInput(class APlayerController** Controller, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.RegisterPlayerInput");

	UUMG_RadialMenu_C_RegisterPlayerInput_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithJoystick
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_RadialMenu_C::UpdateDirectionWithJoystick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithJoystick");

	UUMG_RadialMenu_C_UpdateDirectionWithJoystick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.GetCurrentIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::GetCurrentIndex(int* Index, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.GetCurrentIndex");

	UUMG_RadialMenu_C_GetCurrentIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.GetChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Output                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::GetChild(int* Index, class UUserWidget** Output, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.GetChild");

	UUMG_RadialMenu_C_GetChild_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.SetIndex
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::SetIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.SetIndex");

	UUMG_RadialMenu_C_SetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateAllChildrenPositions
// (Protected, BlueprintCallable, BlueprintEvent)

void UUMG_RadialMenu_C::UpdateAllChildrenPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateAllChildrenPositions");

	UUMG_RadialMenu_C_UpdateAllChildrenPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateChildPosition
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::UpdateChildPosition(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateChildPosition");

	UUMG_RadialMenu_C_UpdateChildPosition_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.ClearChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_RadialMenu_C::ClearChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.ClearChildren");

	UUMG_RadialMenu_C_ClearChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.GetSelectedWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             Output                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_RadialMenu_C::GetSelectedWidget(class UUserWidget** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.GetSelectedWidget");

	UUMG_RadialMenu_C_GetSelectedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.AddChildToRadialMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::AddChildToRadialMenu(class UUserWidget** Content, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.AddChildToRadialMenu");

	UUMG_RadialMenu_C_AddChildToRadialMenu_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithMouseCursor
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_RadialMenu_C::UpdateDirectionWithMouseCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithMouseCursor");

	UUMG_RadialMenu_C_UpdateDirectionWithMouseCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.GetSectionDegreeSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_RadialMenu_C::GetSectionDegreeSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.GetSectionDegreeSize");

	UUMG_RadialMenu_C_GetSectionDegreeSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.SetInputDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::SetInputDirection(struct FVector2D* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.SetInputDirection");

	UUMG_RadialMenu_C_SetInputDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_RadialMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.Construct");

	UUMG_RadialMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateSegments
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Segments                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::UpdateSegments(int* Segments)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateSegments");

	UUMG_RadialMenu_C_UpdateSegments_Params params;
	params.Segments = Segments;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.InDeadzone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InDeadzone                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::InDeadzone(bool* InDeadzone)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.InDeadzone");

	UUMG_RadialMenu_C_InDeadzone_Params params;
	params.InDeadzone = InDeadzone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterials
// (BlueprintCallable, BlueprintEvent)

void UUMG_RadialMenu_C::UpdateMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterials");

	UUMG_RadialMenu_C_UpdateMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.PreConstruct");

	UUMG_RadialMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.ExecuteUbergraph_UMG_RadialMenu
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::ExecuteUbergraph_UMG_RadialMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.ExecuteUbergraph_UMG_RadialMenu");

	UUMG_RadialMenu_C_ExecuteUbergraph_UMG_RadialMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.ExitedDeadzone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_RadialMenu_C::ExitedDeadzone__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.ExitedDeadzone__DelegateSignature");

	UUMG_RadialMenu_C_ExitedDeadzone__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.EnteredDeadzone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_RadialMenu_C::EnteredDeadzone__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.EnteredDeadzone__DelegateSignature");

	UUMG_RadialMenu_C_EnteredDeadzone__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_RadialMenu.UMG_RadialMenu_C.SelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewSelection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldSelection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RadialMenu_C::SelectionChanged__DelegateSignature(int* NewSelection, int* OldSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.SelectionChanged__DelegateSignature");

	UUMG_RadialMenu_C_SelectionChanged__DelegateSignature_Params params;
	params.NewSelection = NewSelection;
	params.OldSelection = OldSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
