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

// BlueprintGeneratedClass EpicLeaderboardEntryInterface.EpicLeaderboardEntryInterface_C
// 0x0000 (0x0028 - 0x0028)
class UEpicLeaderboardEntryInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EpicLeaderboardEntryInterface.EpicLeaderboardEntryInterface_C");
		return ptr;
	}


	void InitFields(bool* Highlight, struct FEpicLeaderboardEntry* ScoreEntry);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
