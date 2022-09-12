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

// Function CyberAlertBoss_BP.CyberAlertBoss_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACyberAlertBoss_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CyberAlertBoss_BP.CyberAlertBoss_BP_C.ReceiveBeginPlay");

	ACyberAlertBoss_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CyberAlertBoss_BP.CyberAlertBoss_BP_C.ExecuteUbergraph_CyberAlertBoss_BP
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACyberAlertBoss_BP_C::ExecuteUbergraph_CyberAlertBoss_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CyberAlertBoss_BP.CyberAlertBoss_BP_C.ExecuteUbergraph_CyberAlertBoss_BP");

	ACyberAlertBoss_BP_C_ExecuteUbergraph_CyberAlertBoss_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
