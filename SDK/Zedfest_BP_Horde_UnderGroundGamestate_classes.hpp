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

// BlueprintGeneratedClass BP_Horde_UnderGroundGamestate.BP_Horde_UnderGroundGamestate_C
// 0x000F (0x04E8 - 0x04D9)
class ABP_Horde_UnderGroundGamestate_C : public ABP_Horde_Gamestate_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Horde_UnderGroundGamestate.BP_Horde_UnderGroundGamestate_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Horde_UnderGroundGamestate(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
