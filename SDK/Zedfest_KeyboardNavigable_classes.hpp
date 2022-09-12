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

// BlueprintGeneratedClass KeyboardNavigable.KeyboardNavigable_C
// 0x0000 (0x0028 - 0x0028)
class UKeyboardNavigable_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KeyboardNavigable.KeyboardNavigable_C");
		return ptr;
	}


	void GetNavigationAction(struct FNavItemActionStruct* Action);
	void RemoveFocus();
	void SetFocus();
	void GetIndex(int* SelectedIndex, int* StepIndex);
	void SetIndex(int* SelectedIndex, int* StepIndex);
	void GetEventHandler(class UBP_navset_event_handler_C** Event_Handler);
	void SetEventHandler(class UBP_navset_event_handler_C** Event_Handler);
	void OnClick();
	void ChangeValue(bool* Right);
	void GetIsSelected(bool* IsSelected);
	void SetIsSelected(bool* IsSelected);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
