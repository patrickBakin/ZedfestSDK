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

// BlueprintGeneratedClass BP_PatrolRoute.BP_PatrolRoute_C
// 0x0014 (0x0344 - 0x0330)
class ABP_PatrolRoute_C : public AActor
{
public:
	class UBillboardComponent*                         Billboard;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PathCorners;                                              // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PatrolRoute.BP_PatrolRoute_C");
		return ptr;
	}


	void GetSplinePointNum(int* Num);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
