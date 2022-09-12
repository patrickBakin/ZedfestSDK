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

// WidgetBlueprintGeneratedClass WB_Container_Linear.WB_Container_Linear_C
// 0x00D3 (0x0303 - 0x0230)
class UWB_Container_Linear_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWB_PB_Linear_Base_C*                        BaseProgressBar;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWB_Marquee_Linear_C*                        BaseProgressBar_Marquee;                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWB_Marquee_Linear_C*                        OnTop_Marquee;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    OV_BaseProgressBar_Marquee;                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    OV_OnTop_Marquee;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    OV_TargetProgressBar;                                     // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    OV_TargetProgressBar_Marquee;                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UProgressBar*                                PB_DefaultMarquee;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             Switcher;                                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWB_PB_Linear_Target_C*                      TargetProgressBar;                                        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWB_Marquee_Linear_C*                        TargetProgressBar_Marquee;                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWB_LinearProgress_Separated_C*              WB_LinearProgress_Separated;                              // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector2D                                   Size;                                                     // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPercent;                                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TargetFillColor_Positive;                                 // 0x02A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TargetFillColor_Negative;                                 // 0x02B4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetPercent;                                            // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsNegativeFillValue;                                     // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	float                                              DeltaTime;                                                // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Timer;                                                    // 0x02D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bUseTargetPercent;                                        // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDesignTime;                                            // 0x02D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EProgressMethod>                       ProgressMethod;                                           // 0x02DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMarquee;                                              // 0x02DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMarqueeMethod>                        MarqueeMethod;                                            // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSeparation;                                           // 0x02DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02DE(0x0002) MISSED OFFSET
	struct FLinearColor                                FillColor;                                                // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ProgressChangeColor;                                      // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseProgressChangeColor;                                  // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsProgressChanging;                                      // 0x0301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              // 0x0302(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Container_Linear.WB_Container_Linear_C");
		return ptr;
	}


	void Set_Mirror_OV_OnTopMarquee(bool* Mirror);
	void Set_Mirror_OV_TargetPB_Marquee(bool* Mirror);
	void Set_Mirror_OV_BasePB_Marquee(bool* Mirror);
	void Handle_SetUseSeparation(bool* bUseSeparation);
	void Set_DefaultMarquee_Visibility(bool* bVisible);
	void Set_MarqueeMask(TEnumAsByte<EMarqueeMask>* MaskType, class UTexture2D** CustomMask);
	void Hide_AllMarquees();
	void Interp_BasePB_Color(struct FLinearColor* Target, float* InterpSpeed, bool* bIsChanging);
	void SetMirrorY_OV_Target(bool* MirrorY);
	void SetMirrorX_OV_Target(bool* MirrorX);
	void GetSizeY(float* Current_Size_Y);
	void GetPercent_Separated(float* Percent);
	float GetAbsoluteTargetPercent();
	float FindHighestPercentValue();
	bool IsMarqueeMethod(TEnumAsByte<EMarqueeMethod>* Method);
	class UWB_Marquee_Linear_C* FindMarquee();
	void UpdateStaticPercent();
	bool IsProgressMethodStatic();
	bool IsProgressMethodInterpolate();
	void GetTargetPercent(float* Percent);
	float FindTargetPercentValue();
	struct FLinearColor FindTargetFillColor();
	bool IsNegativeFillValue();
	void GetSizeX(float* Current_Size_X);
	void FindTargetProgressBarPosition(float* Percent);
	void GetPercent(float* Percent);
	void SetPercent(float* InPercent);
	void SetFillColor(struct FLinearColor* InColor, float* GradientPower, TEnumAsByte<ESlateBrushTileType>* Tiling);
	void SetSize(struct FVector2D* Size);
	void SetUseGradient(bool* UseGradient);
	void SetTargetPercent(float* TargetPercent);
	void SetTargetFillColorPositive(struct FLinearColor* Color);
	void SetTargetFillColorNegative(struct FLinearColor* Color);
	void SetUseTargetPercent(bool* UseTargetPercent);
	void UpdateTargetPercent();
	void UpdatePercent();
	void SetProgressMethod(TEnumAsByte<EProgressMethod>* ProgressMethod);
	void SetFillColorMask(class UObject** Value);
	void SetGradientMask(class UTexture2D** GradientTexture);
	void SetCustomMarqueeAppearance(bool* bIsMarquee, TEnumAsByte<EMarqueeMethod>* MarqueeMethod);
	void SetCustomMarqueeSpeed(float* Speed);
	void SetCustomMarqueeMask(TEnumAsByte<EMarqueeMask>* MaskType, class UTexture2D** CustomMask, TEnumAsByte<ESlateBrushTileType>* MaskTiling);
	void SetCustomMarqueePercent_Current();
	void SetCustomMarqueePercent_Target(float* Percent);
	void SetCustomMarqueePercent_CurrentAndTarget();
	void SetDefaultMarquee_IsMarquee(bool* IsMarquee);
	void SetDefaultMarquee_Image(class UTexture2D** Image);
	void SetDefaultMarquee_ImageSize(struct FVector2D* Image_Size);
	void SetDefaultMarquee_Tint(struct FLinearColor* Color);
	void SetDefaultMarquee_DrawAs(TEnumAsByte<ESlateBrushDrawType>* Draw_As);
	void SetDefaultMarquee_Tiling(TEnumAsByte<ESlateBrushTileType>* Tiling);
	void SetCustomMarqueeColor(struct FLinearColor* InColorAndOpacity);
	void SetUseSeparation(bool* bUseSeparation);
	void AddSegments(int* NumSegments, float* Spacing, struct FVector2D* Size, struct FLinearColor* FillColor, TEnumAsByte<EProgressBarFillType>* FillType, bool* bIsFillFromCenter);
	void AddBackground(struct FLinearColor* Color, bool* bUseBackgroundBlur, float* BlurStrength);
	void UpdateSeparationPercent(float* Percent);
	void SetUseAbsoluteFillMethod(bool* bAbsoluteFill);
	void SetBarFillType(TEnumAsByte<EProgressBarFillType>* FillType);
	void UpdateMarqueeFillType();
	void StartTriggerProgressChangeColor(struct FLinearColor* ProgressChangeColor);
	void StopTriggerProgressChangeColor();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_WB_Container_Linear(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
