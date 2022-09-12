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

// Class SignificanceManager.SignificanceManager
// 0x00F0 (0x0118 - 0x0028)
class USignificanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET
	struct FSoftClassPath                              SignificanceManagerClassName;                             // 0x0100(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SignificanceManager.SignificanceManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
