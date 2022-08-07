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

// BlueprintGeneratedClass BP_Grenade_Str8BarrelBomber_AI.BP_Grenade_Str8BarrelBomber_AI_C
// 0x000B (0x03F0 - 0x03E5)
class ABP_Grenade_Str8BarrelBomber_AI_C : public ABP_Grenade_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Str8BarrelBomber_AI.BP_Grenade_Str8BarrelBomber_AI_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Grenade_Str8BarrelBomber_AI(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
