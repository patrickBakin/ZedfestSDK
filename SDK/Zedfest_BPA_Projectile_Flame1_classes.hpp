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

// BlueprintGeneratedClass BPA_Projectile_Flame1.BPA_Projectile_Flame1_C
// 0x0010 (0x038C - 0x037C)
class ABPA_Projectile_Flame1_C : public ABPA_ParentProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              MaxDistance;                                              // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Projectile_Flame1.BPA_Projectile_Flame1_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void AskSRVtoApplyDmg();
	void ExecuteUbergraph_BPA_Projectile_Flame1(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
