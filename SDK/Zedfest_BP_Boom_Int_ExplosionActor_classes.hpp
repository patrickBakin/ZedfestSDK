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

// BlueprintGeneratedClass BP_Boom_Int_ExplosionActor.BP_Boom_Int_ExplosionActor_C
// 0x0000 (0x0028 - 0x0028)
class UBP_Boom_Int_ExplosionActor_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Boom_Int_ExplosionActor.BP_Boom_Int_ExplosionActor_C");
		return ptr;
	}


	void GetStuck(bool* Stuck_);
	void SetOwningPawn(class APawn** Pawn);
	void GetState(bool* GetState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
