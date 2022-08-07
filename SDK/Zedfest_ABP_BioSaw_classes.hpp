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

// AnimBlueprintGeneratedClass ABP_BioSaw.ABP_BioSaw_C
// 0x01E4 (0x0454 - 0x0270)
class UABP_BioSaw_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0E43E1004AEE43CE693BECB24AEA136B;      // 0x0278(0x0020)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_5A3AECFE4750C1A01EDF508EF38042EB;// 0x0298(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0ACC04C744D46AFB53181B896A8BEA8A;// 0x0360(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66AEF6894910B6B8D1C13780D83500B2;// 0x03D8(0x0078)
	float                                              Throttle;                                                 // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BioSaw.ABP_BioSaw_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_BioSaw(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
