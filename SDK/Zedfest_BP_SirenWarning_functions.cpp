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

// Function BP_SirenWarning.BP_SirenWarning_C.EventSirenWarning
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Internmission                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SirenWarning_C::EventSirenWarning(class USoundBase** Sound, bool* Internmission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SirenWarning.BP_SirenWarning_C.EventSirenWarning");

	ABP_SirenWarning_C_EventSirenWarning_Params params;
	params.Sound = Sound;
	params.Internmission = Internmission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SirenWarning.BP_SirenWarning_C.ExecuteUbergraph_BP_SirenWarning
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SirenWarning_C::ExecuteUbergraph_BP_SirenWarning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SirenWarning.BP_SirenWarning_C.ExecuteUbergraph_BP_SirenWarning");

	ABP_SirenWarning_C_ExecuteUbergraph_BP_SirenWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
