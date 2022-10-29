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

// Class KevinSpel.GameMode_ServerTravel
// 0x0000 (0x03D0 - 0x03D0)
class AGameMode_ServerTravel : public AGameModeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KevinSpel.GameMode_ServerTravel");
		return ptr;
	}


	void GameMode_MyServerTravel(struct FString* MapName, struct FString* GameMode, bool* bAbsolute, struct FString* additionalOptions);
};


// Class KevinSpel.SpecialServerTravel
// 0x0000 (0x0418 - 0x0418)
class ASpecialServerTravel : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KevinSpel.SpecialServerTravel");
		return ptr;
	}


	void GameMode_MyServerTravel(struct FString* MapName, struct FString* GameMode, bool* bAbsolute, struct FString* additionalOptions);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
