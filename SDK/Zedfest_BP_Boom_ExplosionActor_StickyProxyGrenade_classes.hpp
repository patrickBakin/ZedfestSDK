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

// BlueprintGeneratedClass BP_Boom_ExplosionActor_StickyProxyGrenade.BP_Boom_ExplosionActor_StickyProxyGrenade_C
// 0x0048 (0x0628 - 0x05E0)
class ABP_Boom_ExplosionActor_StickyProxyGrenade_C : public ABP_Boom_ExplosionActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    MatInstance;                                              // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FItemData11                                 ItemData;                                                 // 0x05F0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Boom_ExplosionActor_StickyProxyGrenade.BP_Boom_ExplosionActor_StickyProxyGrenade_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Boom_ExplosionActor_StickyProxyGrenade(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
