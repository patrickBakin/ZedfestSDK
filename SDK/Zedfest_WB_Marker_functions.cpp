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

// Function WB_Marker.WB_Marker_C.UpdateMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MarkerPrecision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ParticleVisible                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           ParticleColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Marker_C::UpdateMarker(float* MarkerPrecision, bool* ParticleVisible, struct FLinearColor* ParticleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Marker.WB_Marker_C.UpdateMarker");

	UWB_Marker_C_UpdateMarker_Params params;
	params.MarkerPrecision = MarkerPrecision;
	params.ParticleVisible = ParticleVisible;
	params.ParticleColor = ParticleColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Marker.WB_Marker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Marker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Marker.WB_Marker_C.Construct");

	UWB_Marker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Marker.WB_Marker_C.ExecuteUbergraph_WB_Marker
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Marker_C::ExecuteUbergraph_WB_Marker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Marker.WB_Marker_C.ExecuteUbergraph_WB_Marker");

	UWB_Marker_C_ExecuteUbergraph_WB_Marker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
