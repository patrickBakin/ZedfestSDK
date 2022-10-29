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

// BlueprintGeneratedClass BP_RadialMenuHelpers.BP_RadialMenuHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UBP_RadialMenuHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialMenuHelpers.BP_RadialMenuHelpers_C");
		return ptr;
	}


	void STATIC_CenterMousePosition(int* PlayerIndex, class UObject** __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
