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

// BlueprintGeneratedClass InteractionFunctions.InteractionFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UInteractionFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InteractionFunctions.InteractionFunctions_C");
		return ptr;
	}


	void STATIC_Get_Quality_Color(struct FDataTableRowHandle* Row_Name, class UObject** __WorldContext, bool* Return_Value, struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
