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

// WidgetBlueprintGeneratedClass WB_PB_Raw.WB_PB_Raw_C
// 0x0010 (0x0240 - 0x0230)
class UWB_PB_Raw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWB_BaseProgressBar_C*                       WB_BaseProgressBar;                                       // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_PB_Raw.WB_PB_Raw_C");
		return ptr;
	}


	void SetMarqueeTiling(TEnumAsByte<ESlateBrushTileType>* Tiling);
	void SetMarqueeDrawAs(TEnumAsByte<ESlateBrushDrawType>* DrawAs);
	void SetBarFillType(TEnumAsByte<EProgressBarFillType>* BarFillType);
	void SetMarqueeTint(struct FLinearColor* Tint);
	void SetFillColorAndOpacity(struct FLinearColor* InColor);
	void SetMarqueeImageSize(struct FVector2D* ImageSize);
	void SetBackgroundTint(struct FLinearColor* InColor);
	void SetMarqueeImage(class UObject** Image);
	void SetFillImage(class UObject** FillImage);
	void SetMarquee(bool* IsMarquee);
	void SetFillImageSize(struct FVector2D* FillImageSize);
	void SetColor(struct FLinearColor* InColor);
	void SetFillImageTiling(TEnumAsByte<ESlateBrushTileType>* Tiling);
	void SetPercent(float* InPercent);
	void SetFillImageMargin(float* Margin);
	void SetFillImageDrawAs(TEnumAsByte<ESlateBrushDrawType>* Draw_As);
	void ExecuteUbergraph_WB_PB_Raw(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
