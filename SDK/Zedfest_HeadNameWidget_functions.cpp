// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HeadNameWidget.HeadNameWidget_C.RotateNameToCamera
// (Public, BlueprintCallable, BlueprintEvent)

void AHeadNameWidget_C::RotateNameToCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadNameWidget.HeadNameWidget_C.RotateNameToCamera");

	AHeadNameWidget_C_RotateNameToCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadNameWidget.HeadNameWidget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHeadNameWidget_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadNameWidget.HeadNameWidget_C.ReceiveBeginPlay");

	AHeadNameWidget_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadNameWidget.HeadNameWidget_C.SetTextName
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class APlayerState**           PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHeadNameWidget_C::SetTextName(struct FString* PlayerName, class APlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadNameWidget.HeadNameWidget_C.SetTextName");

	AHeadNameWidget_C_SetTextName_Params params;
	params.PlayerName = PlayerName;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadNameWidget.HeadNameWidget_C.ExecuteUbergraph_HeadNameWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHeadNameWidget_C::ExecuteUbergraph_HeadNameWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadNameWidget.HeadNameWidget_C.ExecuteUbergraph_HeadNameWidget");

	AHeadNameWidget_C_ExecuteUbergraph_HeadNameWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
