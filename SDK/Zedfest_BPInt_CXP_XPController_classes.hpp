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

// BlueprintGeneratedClass BPInt_CXP_XPController.BPInt_CXP_XPController_C
// 0x0000 (0x0028 - 0x0028)
class UBPInt_CXP_XPController_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInt_CXP_XPController.BPInt_CXP_XPController_C");
		return ptr;
	}


	void SkillMaxReached(TEnumAsByte<E_SkillTree>* SkillReached);
	void AddOnlySkillXp(TEnumAsByte<E_SkillTree>* Skill, float* XP);
	void LevelUp();
	void AddXP(float* XpToAdd);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
