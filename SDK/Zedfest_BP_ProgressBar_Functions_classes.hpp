#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProgressBar_Functions.BP_ProgressBar_Functions_C
// 0x0000 (0x0028 - 0x0028)
class UBP_ProgressBar_Functions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProgressBar_Functions.BP_ProgressBar_Functions_C");
		return ptr;
	}


	void STATIC_GetProgressBarManager(class UWB_Base_C** ProgressBar, class UObject** __WorldContext, TScriptInterface<class UBPi_ProgressBars_C>* Manager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
