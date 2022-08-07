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

// BlueprintGeneratedClass BTD_CheckDistance.BTD_CheckDistance_C
// 0x0085 (0x0125 - 0x00A0)
class UBTD_CheckDistance_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      ActorA;                                                   // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ActorB;                                                   // 0x00C8(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<Enum_OperationType>                    Operator;                                                 // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      Distance;                                                 // 0x00F8(0x0028) (Edit, BlueprintVisible)
	float                                              DistanceFloat;                                            // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseFloatDistance;                                         // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTD_CheckDistance.BTD_CheckDistance_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor** OwnerActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
