#pragma once

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
//Parameters
//---------------------------------------------------------------------------

// Function FadeOut.FadeOut_C.Construct
struct UFadeOut_C_Construct_Params
{
};

// Function FadeOut.FadeOut_C.OnAnimFinish
struct UFadeOut_C_OnAnimFinish_Params
{
};

// Function FadeOut.FadeOut_C.ExecuteUbergraph_FadeOut
struct UFadeOut_C_ExecuteUbergraph_FadeOut_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FadeOut.FadeOut_C.FadeOutFinished__DelegateSignature
struct UFadeOut_C_FadeOutFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
