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

// BlueprintGeneratedClass InteractionInterface.InteractionInterface_C
// 0x0000 (0x0028 - 0x0028)
class UInteractionInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InteractionInterface.InteractionInterface_C");
		return ptr;
	}


	void Interact(struct FKey* Key, class APawn** Pawn);
	void Toggle_Widget(bool* Widget);
	void Clear_Target();
	void Current_Target(class APawn** Pawn);
	void Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds);
	void Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color);
	void Set_Widget_Amount(bool* Return_Value, int* Amount_Value);
	void Set_Widget_Level(bool* Return_Value, struct FText* Level_Text);
	void Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text);
	void Set_Widget_Title(bool* Return_Value, struct FText* Title_Text);
	void Set_Widget_Type(TEnumAsByte<E_WidgetTypes>* Widget_Type);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
