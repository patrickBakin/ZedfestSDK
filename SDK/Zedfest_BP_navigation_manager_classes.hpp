#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_navigation_manager.BP_navigation_manager_C
// 0x0058 (0x0080 - 0x0028)
class UBP_navigation_manager_C : public UObject
{
public:
	TArray<struct FNavItemStruct>                      NavigableItemArray_raw;                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentlyFocusedStep;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideEscape;                                           // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEscape;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEscapeWhenOverrideEnabled;                              // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOverrideEscape;                                         // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNavigation;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_navigation_manager.BP_navigation_manager_C");
		return ptr;
	}


	void GetCurrentStep(int* CurrentStep);
	void NavigateTo(int* Index);
	void CustomNavigation(struct FString* CustomAction);
	void GetNavigableItemList(TArray<struct FNavItemStruct>* NavigableItemArray);
	void RemoveUnfocusedSteps(bool* EscKeyPress);
	void SetOverrideEscape(bool* OverrideEscape);
	void Remove(int* StepIndex, bool* RemoveFromArrayOnly);
	void SimulateClick();
	void UpdateValue(bool* Decrease);
	void CycleFirst();
	void CycleLast();
	void Navigate(struct FKey* PressedKey, TEnumAsByte<ENavActionTypes>* ActionType, struct FString* CustomAction, TArray<struct FKey>* ExpectedKey);
	void NavigateRight();
	void NavigateLeft();
	void NavigateDown();
	void NavigateUp();
	void NavItemMouseUnhover(int* SelectedIndex, int* StepIndex);
	void NavItemMouseHover(int* SelectedIndex, int* StepIndex);
	void SetNavigationFocus(bool* Clear, int* StepIndex);
	void GetNavItemsFromContainer(bool* Vertical, class UWidget** Box, TArray<struct FWidgetFix>* Navigable_Widgets);
	void AddToNavigableArray(struct FNavItemStruct* Nav_Item, TArray<struct FWidgetFix>* Final_Array);
	void ModifyNavigableArray(int* StepIndex, int* ItemIndex, bool* Remove, struct FWidgetFix* ItemToInsert);
	struct FEventReply OnInput(struct FKey* Key);
	void OnNavigation__DelegateSignature();
	void OnOverrideEscape__DelegateSignature();
	void OnEscapeWhenOverrideEnabled__DelegateSignature();
	void OnEscape__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
