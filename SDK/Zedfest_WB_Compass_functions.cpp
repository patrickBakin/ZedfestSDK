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

// Function WB_Compass.WB_Compass_C.CreateMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ActorToMark                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                MarkerIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter**             PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraComponent**       PlayerCamera                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWB_Compass_C::CreateMarker(class AActor** ActorToMark, class UObject** MarkerIcon, class ACharacter** PlayerCharacter, class UCameraComponent** PlayerCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Compass.WB_Compass_C.CreateMarker");

	UWB_Compass_C_CreateMarker_Params params;
	params.ActorToMark = ActorToMark;
	params.MarkerIcon = MarkerIcon;
	params.PlayerCharacter = PlayerCharacter;
	params.PlayerCamera = PlayerCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Compass.WB_Compass_C.RemoveMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor_To_Mark                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Compass_C::RemoveMarker(class AActor** Actor_To_Mark)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Compass.WB_Compass_C.RemoveMarker");

	UWB_Compass_C_RemoveMarker_Params params;
	params.Actor_To_Mark = Actor_To_Mark;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Compass.WB_Compass_C.UpdateMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ActorToMark                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MarkerPrecision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ParticleVisible                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           ParticleColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Compass_C::UpdateMarker(class AActor** ActorToMark, float* MarkerPrecision, bool* ParticleVisible, struct FLinearColor* ParticleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Compass.WB_Compass_C.UpdateMarker");

	UWB_Compass_C_UpdateMarker_Params params;
	params.ActorToMark = ActorToMark;
	params.MarkerPrecision = MarkerPrecision;
	params.ParticleVisible = ParticleVisible;
	params.ParticleColor = ParticleColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Compass.WB_Compass_C.ExecuteUbergraph_WB_Compass
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Compass_C::ExecuteUbergraph_WB_Compass(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Compass.WB_Compass_C.ExecuteUbergraph_WB_Compass");

	UWB_Compass_C_ExecuteUbergraph_WB_Compass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
