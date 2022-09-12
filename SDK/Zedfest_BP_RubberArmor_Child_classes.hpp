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

// BlueprintGeneratedClass BP_RubberArmor_Child.BP_RubberArmor_Child_C
// 0x0000 (0x0350 - 0x0350)
class ABP_RubberArmor_Child_C : public ABP_RubberArmor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RubberArmor_Child.BP_RubberArmor_Child_C");
		return ptr;
	}


	void Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds);
	void Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color);
	void Set_Widget_Title(bool* Return_Value, struct FText* Title_Text);
	void Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
