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

// Function MainMenu.MainMenu_C.OnFailure_829FF6EE4A8F860ED1D3699F46C5AC9D
// (BlueprintCallable, BlueprintEvent)

void AMainMenu_C::OnFailure_829FF6EE4A8F860ED1D3699F46C5AC9D()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnFailure_829FF6EE4A8F860ED1D3699F46C5AC9D");

	AMainMenu_C_OnFailure_829FF6EE4A8F860ED1D3699F46C5AC9D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnSuccess_829FF6EE4A8F860ED1D3699F46C5AC9D
// (BlueprintCallable, BlueprintEvent)

void AMainMenu_C::OnSuccess_829FF6EE4A8F860ED1D3699F46C5AC9D()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnSuccess_829FF6EE4A8F860ED1D3699F46C5AC9D");

	AMainMenu_C_OnSuccess_829FF6EE4A8F860ED1D3699F46C5AC9D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMainMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ReceiveBeginPlay");

	AMainMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMainMenu_C::ExecuteUbergraph_MainMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");

	AMainMenu_C_ExecuteUbergraph_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
