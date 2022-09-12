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

// Function BP_ProgressBar_Functions.BP_ProgressBar_Functions_C.GetProgressBarManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_Base_C**             ProgressBar                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBPi_ProgressBars_C> Manager                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ProgressBar_Functions_C::STATIC_GetProgressBarManager(class UWB_Base_C** ProgressBar, class UObject** __WorldContext, TScriptInterface<class UBPi_ProgressBars_C>* Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProgressBar_Functions.BP_ProgressBar_Functions_C.GetProgressBarManager");

	UBP_ProgressBar_Functions_C_GetProgressBarManager_Params params;
	params.ProgressBar = ProgressBar;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Manager != nullptr)
		*Manager = params.Manager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
