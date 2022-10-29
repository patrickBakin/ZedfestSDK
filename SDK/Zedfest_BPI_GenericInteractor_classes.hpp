#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_GenericInteractor.BPI_GenericInteractor_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_GenericInteractor_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_GenericInteractor.BPI_GenericInteractor_C");
		return ptr;
	}


	void GetPhysicsHandleTargetLocationAndRotation(struct FVector* HandleLocation, struct FRotator* HandleRotation);
	void GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandleComponent);
	void GetFocusedInteractable(TScriptInterface<class UBPI_GenericInteractable_C>* Interactable, bool* bIsValid);
	void GetInteractionCollider(class UPrimitiveComponent** Collider);
	void GetInteractionIgnoreList(TArray<class AActor*>* ActorsToIgnore);
	void GetInteractionTraceLine(struct FVector* StartPoint, struct FVector* AimDirection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
