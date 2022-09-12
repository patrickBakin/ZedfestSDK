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

// Function BPI_Parkour.BPI_Parkour_C.OnParkour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                TargetLoc                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayLength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Parkour_C::OnParkour(struct FVector* TargetLoc, float* PlayLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Parkour.BPI_Parkour_C.OnParkour");

	UBPI_Parkour_C_OnParkour_Params params;
	params.TargetLoc = TargetLoc;
	params.PlayLength = PlayLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
