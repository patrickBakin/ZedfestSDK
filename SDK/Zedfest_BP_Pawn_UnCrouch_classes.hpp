#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Pawn_UnCrouch.BP_Pawn_UnCrouch_C
// 0x0008 (0x00A0 - 0x0098)
class UBP_Pawn_UnCrouch_C : public UPawnAction_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pawn_UnCrouch.BP_Pawn_UnCrouch_C");
		return ptr;
	}


	void ActionStart(class APawn** ControlledPawn);
	void ExecuteUbergraph_BP_Pawn_UnCrouch(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
