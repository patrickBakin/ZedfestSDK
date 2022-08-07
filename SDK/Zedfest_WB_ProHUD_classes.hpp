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

// WidgetBlueprintGeneratedClass WB_ProHUD.WB_ProHUD_C
// 0x0038 (0x0268 - 0x0230)
class UWB_ProHUD_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            BlendCompass;                                             // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWB_CrosshairBase_C*                         WB_CrosshairBase;                                         // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWB_GlobalNotificator_C*                     WB_GlobalNotificator;                                     // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWB_IngameTutorial_C*                        WB_IngameTutorial;                                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWB_IngameTutorialPlainText_C*               WB_IngameTutorialPlainText;                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWB_ObjectiveNotificator_C*                  WB_ObjectiveNotificator;                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ProHUD.WB_ProHUD_C");
		return ptr;
	}


	void RemoveObjectiveNotification();
	void DisplayObjectiveNotification(float* DisplayTime, struct FText* TypeText, struct FText* HeadlineText, struct FText* TextRow3Line, struct FText* TextRow4, struct FText* TextRow5, struct FText* TextRow6, struct FText* TextRow7, struct FLinearColor* BackgroundColor, struct FLinearColor* ParticlesColor);
	void RemoveIngameText();
	void DisplayIngameText(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2);
	void CrosshairVisibility(bool* bVisible);
	void RemoveGlobalNotification();
	void DisplayGlobalNotification(float* DisplayTime, struct FText* TypeText, struct FText* HeadlineText, struct FText* TextRow3Line, struct FText* TextRow4, struct FText* TextRow5, struct FText* TextRow6, struct FText* TextRow7, struct FLinearColor* BackgroundColor, struct FLinearColor* ParticlesColor);
	void DisplaySingleRecoil();
	void DisplayRecoil(bool* bRecoil);
	void RemoveIngameTutorial();
	void DisplayHitIndicator(float* IndicationTime, struct FLinearColor* Color);
	void DisplayCrosshair(TEnumAsByte<E_CrosshairTypes>* CrosshairType, bool* bCrosshairVisible, struct FLinearColor* Crosshair_Color, TEnumAsByte<E_HitIndicatorTypes>* HitIndicatorType, bool* bHitIndicatorVisible);
	void DisplayIngameTutorial(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2);
	void HideCrosshair(float* Duration);
	void ExecuteUbergraph_WB_ProHUD(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
