<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_LegalPermanent.W_LegalPermanent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_LegalPermanent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LegalPermanent.W_LegalPermanent_C.Construct");

	UW_LegalPermanent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_LegalPermanent.W_LegalPermanent_C.ExecuteUbergraph_W_LegalPermanent
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_LegalPermanent_C::ExecuteUbergraph_W_LegalPermanent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LegalPermanent.W_LegalPermanent_C.ExecuteUbergraph_W_LegalPermanent");

	UW_LegalPermanent_C_ExecuteUbergraph_W_LegalPermanent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
