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

// BlueprintGeneratedClass BPI_GenericInteractable.BPI_GenericInteractable_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_GenericInteractable_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_GenericInteractable.BPI_GenericInteractable_C");
		return ptr;
	}


	void ShouldNotSendInteractToServer(bool* bShouldNotSendInteractToServer);
	void ShouldNotInteractOnClients(bool* bShouldNotInteractOnClients);
	void GetDesiredHeldRotation(struct FRotator* RelativeHeldRotation);
	void OnPhysicsRelease(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle);
	void OnPhysicsPickup(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, class UPhysicsHandleComponent** PhysicsHandle);
	void IsPhysicsPickup(bool* bPickupable, class UPrimitiveComponent** PickupComponent);
	void GetInteractionCenterPoint(struct FVector* WorldLocation);
	void SetInteractionDebugString(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, struct FString* DebugString);
	void IsFocusable(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, bool* bFocusable);
	void GetInteractionText(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, struct FText* Text);
	void Interact1(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor);
	void SetFocused(TScriptInterface<class UBPI_GenericInteractor_C>* Interactor, bool* bIsFocused);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
