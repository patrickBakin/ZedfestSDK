#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

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
