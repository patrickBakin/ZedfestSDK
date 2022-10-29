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

// Function KevinSpel.GameMode_ServerTravel.GameMode_MyServerTravel
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// struct FString*                MapName                        (Parm, ZeroConstructor)
// struct FString*                GameMode                       (Parm, ZeroConstructor)
// bool*                          bAbsolute                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                additionalOptions              (Parm, ZeroConstructor)

void AGameMode_ServerTravel::GameMode_MyServerTravel(struct FString* MapName, struct FString* GameMode, bool* bAbsolute, struct FString* additionalOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinSpel.GameMode_ServerTravel.GameMode_MyServerTravel");

	AGameMode_ServerTravel_GameMode_MyServerTravel_Params params;
	params.MapName = MapName;
	params.GameMode = GameMode;
	params.bAbsolute = bAbsolute;
	params.additionalOptions = additionalOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KevinSpel.SpecialServerTravel.GameMode_MyServerTravel
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// struct FString*                MapName                        (Parm, ZeroConstructor)
// struct FString*                GameMode                       (Parm, ZeroConstructor)
// bool*                          bAbsolute                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                additionalOptions              (Parm, ZeroConstructor)

void ASpecialServerTravel::GameMode_MyServerTravel(struct FString* MapName, struct FString* GameMode, bool* bAbsolute, struct FString* additionalOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function KevinSpel.SpecialServerTravel.GameMode_MyServerTravel");

	ASpecialServerTravel_GameMode_MyServerTravel_Params params;
	params.MapName = MapName;
	params.GameMode = GameMode;
	params.bAbsolute = bAbsolute;
	params.additionalOptions = additionalOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
