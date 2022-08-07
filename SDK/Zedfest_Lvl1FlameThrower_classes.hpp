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

// BlueprintGeneratedClass Lvl1FlameThrower.Lvl1FlameThrower_C
// 0x000E (0x0740 - 0x0732)
class ALvl1FlameThrower_C : public AWeaponFirearmBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0732(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Lvl1FlameThrower.Lvl1FlameThrower_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Lvl1FlameThrower(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
