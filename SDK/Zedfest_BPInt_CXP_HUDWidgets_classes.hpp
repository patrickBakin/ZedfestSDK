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

// BlueprintGeneratedClass BPInt_CXP_HUDWidgets.BPInt_CXP_HUDWidgets_C
// 0x0000 (0x0028 - 0x0028)
class UBPInt_CXP_HUDWidgets_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInt_CXP_HUDWidgets.BPInt_CXP_HUDWidgets_C");
		return ptr;
	}


	void UpdateSkillWidget(float* HarvestingBar, float* WeaponBar, float* AgilityBar);
	void GetScroller(class UScrollBox** Scroller);
	void SetXP(int* CurrentLevel, int* NextLevel, float* CurrentXP, float* NeededXP, float* XPBar);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
