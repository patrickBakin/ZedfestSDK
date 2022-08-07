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

// BlueprintGeneratedClass IRadialSlot.IRadialSlot_C
// 0x0000 (0x0028 - 0x0028)
class UIRadialSlot_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IRadialSlot.IRadialSlot_C");
		return ptr;
	}


	void OnUnhighlight();
	void OnHighlight();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
