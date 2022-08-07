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

// BlueprintGeneratedClass EQS_GetActorsSameClassContext.EQS_GetActorsSameClassContext_C
// 0x0000 (0x0030 - 0x0030)
class UEQS_GetActorsSameClassContext_C : public UEnvQueryContext_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EQS_GetActorsSameClassContext.EQS_GetActorsSameClassContext_C");
		return ptr;
	}


	void ProvideActorsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
