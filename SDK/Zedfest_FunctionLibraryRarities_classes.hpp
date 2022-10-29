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

// BlueprintGeneratedClass FunctionLibraryRarities.FunctionLibraryRarities_C
// 0x0000 (0x0028 - 0x0028)
class UFunctionLibraryRarities_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibraryRarities.FunctionLibraryRarities_C");
		return ptr;
	}


	void STATIC_Get_Rarity(TEnumAsByte<EItemRarities>* Rarity, class UObject** __WorldContext, struct FLinearColor* Output);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
