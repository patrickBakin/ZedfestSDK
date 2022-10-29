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

// BlueprintGeneratedClass BP_Grenade_ExplShotGun_Lvl1.BP_Grenade_ExplShotGun_Lvl1_C
// 0x000B (0x03F0 - 0x03E5)
class ABP_Grenade_ExplShotGun_Lvl1_C : public ABP_Grenade_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_ExplShotGun_Lvl1.BP_Grenade_ExplShotGun_Lvl1_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Grenade_ExplShotGun_Lvl1(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
