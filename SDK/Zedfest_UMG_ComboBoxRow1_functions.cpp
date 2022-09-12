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

// Function UMG_ComboBoxRow1.UMG_ComboBoxRow1_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ComboBoxRow1_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ComboBoxRow1.UMG_ComboBoxRow1_C.Tick");

	UUMG_ComboBoxRow1_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_ComboBoxRow1.UMG_ComboBoxRow1_C.ExecuteUbergraph_UMG_ComboBoxRow1
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ComboBoxRow1_C::ExecuteUbergraph_UMG_ComboBoxRow1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ComboBoxRow1.UMG_ComboBoxRow1_C.ExecuteUbergraph_UMG_ComboBoxRow1");

	UUMG_ComboBoxRow1_C_ExecuteUbergraph_UMG_ComboBoxRow1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
