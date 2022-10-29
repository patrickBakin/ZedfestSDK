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

// BlueprintGeneratedClass KeyboardNavigablePanel.KeyboardNavigablePanel_C
// 0x0000 (0x0028 - 0x0028)
class UKeyboardNavigablePanel_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KeyboardNavigablePanel.KeyboardNavigablePanel_C");
		return ptr;
	}


	void GetEscapeBehaviour();
	void GetEventHandler(class UBP_navset_event_handler_C** EventHandler);
	void SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour);
	void OnEscapeInput(bool* Handled);
	void SetNavManager(class UBP_navigation_manager_C** NavManagerRef);
	void SetStepIndex(int* StepIndex);
	void GetStepIndex(int* StepIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
