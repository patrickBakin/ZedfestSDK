#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Parkour.BPI_Parkour_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Parkour_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Parkour.BPI_Parkour_C");
		return ptr;
	}


	void OnParkour(struct FVector* TargetLoc, float* PlayLength);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
