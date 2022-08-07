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

// BlueprintGeneratedClass BP_HomingGrenade_Frag.BP_HomingGrenade_Frag_C
// 0x0023 (0x0408 - 0x03E5)
class ABP_HomingGrenade_Frag_C : public ABP_Grenade_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      HomingMissileTarget;                                      // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              AllowedTargets;                                           // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HomingGrenade_Frag.BP_HomingGrenade_Frag_C");
		return ptr;
	}


	bool IsAllowedTarget();
	void ReceiveBeginPlay();
	void FanTimer();
	void ExecuteUbergraph_BP_HomingGrenade_Frag(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
