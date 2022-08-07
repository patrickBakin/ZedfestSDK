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

// BlueprintGeneratedClass EQS_GetTargetActorContext.EQS_GetTargetActorContext_C
// 0x0000 (0x0030 - 0x0030)
class UEQS_GetTargetActorContext_C : public UEnvQueryContext_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EQS_GetTargetActorContext.EQS_GetTargetActorContext_C");
		return ptr;
	}


	void ProvideSingleActor(class UObject** QuerierObject, class AActor** QuerierActor, class AActor** ResultingActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
