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

// WidgetBlueprintGeneratedClass UMG_RadialMenu.UMG_RadialMenu_C
// 0x00C2 (0x02F2 - 0x0230)
class UUMG_RadialMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      RadialBackground;                                         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      RadiusDebug;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    RootOverlay;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Segments;                                                 // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MaterialBase;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IndexRaw;                                                 // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Index;                                                    // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    dynaMat;                                                  // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UUserWidget*>                         Children;                                                 // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AllowResizing;                                            // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	float                                              ItemOffsetRadius;                                         // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    SelectionChanged;                                         // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class APlayerController*                           InputController;                                          // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EJoystickTypes>                        JoystickToUse;                                            // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              MouseDeadzone;                                            // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInDeadzone;                                              // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    EnteredDeadzone;                                          // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ExitedDeadzone;                                           // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector2D                                   CurrentInput;                                             // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JoystickDeadzone;                                         // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DefaultToMouseIfNoJoystick;                               // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	int                                                DefaultPlayerIndex;                                       // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseDeadzoneEvents;                                        // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	class USoundBase*                                  SelectionChangedSound;                                    // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoCenterMouse;                                          // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoRotateForUp;                                          // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RadialMenu.UMG_RadialMenu_C");
		return ptr;
	}


	void RemoveChildIndexFromRadialMenu(int* IndexToRemove);
	void RemoveChildWidgetFromRadialMenu(class UUserWidget** ItemToFind);
	struct FText DebugIndex();
	struct FVector2D FixInputRotation(struct FVector2D* Input);
	void FixMainRotation();
	void AutoRegisterToInput();
	void UpdateInput();
	void RegisterPlayerInput(class APlayerController** Controller, bool* Success);
	void UpdateDirectionWithJoystick();
	void GetCurrentIndex(int* Index, bool* Valid);
	void GetChild(int* Index, class UUserWidget** Output, bool* Success);
	void SetIndex(int* Index);
	void UpdateAllChildrenPositions();
	void UpdateChildPosition(int* Index);
	void ClearChildren();
	void GetSelectedWidget(class UUserWidget** Output);
	void AddChildToRadialMenu(class UUserWidget** Content, bool* Success);
	void UpdateDirectionWithMouseCursor();
	float GetSectionDegreeSize();
	void SetInputDirection(struct FVector2D* Direction);
	void Construct();
	void UpdateSegments(int* Segments);
	void InDeadzone(bool* InDeadzone);
	void UpdateMaterials();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_UMG_RadialMenu(int* EntryPoint);
	void ExitedDeadzone__DelegateSignature();
	void EnteredDeadzone__DelegateSignature();
	void SelectionChanged__DelegateSignature(int* NewSelection, int* OldSelection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
