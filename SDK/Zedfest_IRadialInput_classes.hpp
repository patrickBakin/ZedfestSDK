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

// BlueprintGeneratedClass IRadialInput.IRadialInput_C
// 0x0000 (0x0028 - 0x0028)
class UIRadialInput_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IRadialInput.IRadialInput_C");
		return ptr;
	}


	void GetJoystickDirection(TEnumAsByte<EJoystickTypes>* Stick, struct FVector2D* StickInput);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
