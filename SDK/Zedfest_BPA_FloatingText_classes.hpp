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

// BlueprintGeneratedClass BPA_FloatingText.BPA_FloatingText_C
// 0x0031 (0x0361 - 0x0330)
class ABPA_FloatingText_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            TextWidget;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       DamageText;                                               // 0x0348(0x0018) (Edit, BlueprintVisible, Net)
	bool                                               IsCritical;                                               // 0x0360(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPA_FloatingText.BPA_FloatingText_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPA_FloatingText(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
