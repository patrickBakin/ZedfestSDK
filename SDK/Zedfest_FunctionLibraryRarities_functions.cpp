// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FunctionLibraryRarities.FunctionLibraryRarities_C.Get Rarity
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EItemRarities>*    Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFunctionLibraryRarities_C::STATIC_Get_Rarity(TEnumAsByte<EItemRarities>* Rarity, class UObject** __WorldContext, struct FLinearColor* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibraryRarities.FunctionLibraryRarities_C.Get Rarity");

	UFunctionLibraryRarities_C_Get_Rarity_Params params;
	params.Rarity = Rarity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
