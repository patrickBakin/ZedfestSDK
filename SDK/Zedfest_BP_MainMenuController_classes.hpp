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

// BlueprintGeneratedClass BP_MainMenuController.BP_MainMenuController_C
// 0x0018 (0x0690 - 0x0678)
class ABP_MainMenuController_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UC_CXP_Component_C*                          C_CXP_Component;                                          // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_DemoList_C*                             UI_ReplayBrowser;                                         // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainMenuController.BP_MainMenuController_C");
		return ptr;
	}


	void LevelUp();
	void AddOnlySkillXp(TEnumAsByte<E_SkillTree>* Skill, float* XP);
	void SkillMaxReached(TEnumAsByte<E_SkillTree>* SkillReached);
	void AddXP(float* XpToAdd);
	void ExecuteUbergraph_BP_MainMenuController(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
