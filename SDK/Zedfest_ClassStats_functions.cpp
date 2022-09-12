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

// Function ClassStats.ClassStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UClassStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClassStats.ClassStats_C.Construct");

	UClassStats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClassStats.ClassStats_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UClassStats_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClassStats.ClassStats_C.PreConstruct");

	UClassStats_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClassStats.ClassStats_C.ShowStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  NewParam2                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  NewParam3                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UClassStats_C::ShowStats(struct FText* NewParam, struct FText* NewParam2, struct FText* NewParam3)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClassStats.ClassStats_C.ShowStats");

	UClassStats_C_ShowStats_Params params;
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClassStats.ClassStats_C.ExecuteUbergraph_ClassStats
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UClassStats_C::ExecuteUbergraph_ClassStats(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClassStats.ClassStats_C.ExecuteUbergraph_ClassStats");

	UClassStats_C_ExecuteUbergraph_ClassStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
