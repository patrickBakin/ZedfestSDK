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

// Function KevinSpel.GameMode_ServerTravel.GameMode_MyServerTravel
struct AGameMode_ServerTravel_GameMode_MyServerTravel_Params
{
	struct FString*                                    MapName;                                                  // (Parm, ZeroConstructor)
	struct FString*                                    GameMode;                                                 // (Parm, ZeroConstructor)
	bool*                                              bAbsolute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    additionalOptions;                                        // (Parm, ZeroConstructor)
};

// Function KevinSpel.SpecialServerTravel.GameMode_MyServerTravel
struct ASpecialServerTravel_GameMode_MyServerTravel_Params
{
	struct FString*                                    MapName;                                                  // (Parm, ZeroConstructor)
	struct FString*                                    GameMode;                                                 // (Parm, ZeroConstructor)
	bool*                                              bAbsolute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    additionalOptions;                                        // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
