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

// BlueprintGeneratedClass BPI_GenericInteractionReceiver.BPI_GenericInteractionReceiver_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_GenericInteractionReceiver_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_GenericInteractionReceiver.BPI_GenericInteractionReceiver_C");
		return ptr;
	}


	void InteractDecrement(TScriptInterface<class UBPI_GenericInteractor_C>* NewParam, TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1, float* Decrement);
	void InteractIncrement(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, float* Increment);
	void InteractSimple(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, int* Mode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
