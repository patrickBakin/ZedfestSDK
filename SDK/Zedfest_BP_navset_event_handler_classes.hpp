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

// BlueprintGeneratedClass BP_navset_event_handler.BP_navset_event_handler_C
// 0x0050 (0x0078 - 0x0028)
class UBP_navset_event_handler_C : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnClick;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseHover;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseUnhover;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEscapeCall;                                             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBackClick;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_navset_event_handler.BP_navset_event_handler_C");
		return ptr;
	}


	void OnBackClick__DelegateSignature();
	void OnEscapeCall__DelegateSignature(TEnumAsByte<EEscapeBehaviour>* Behaviour);
	void OnMouseUnhover__DelegateSignature(int* SelectedIndex, int* StepIndex);
	void OnMouseHover__DelegateSignature(int* SelectedIndex, int* StepIndex);
	void OnClick__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
