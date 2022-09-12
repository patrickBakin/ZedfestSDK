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

// BlueprintGeneratedClass ThrowablesBase.ThrowablesBase_C
// 0x0058 (0x03E8 - 0x0390)
class AThrowablesBase_C : public AItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FThrowablesData                             Throwables_Data;                                          // 0x03A0(0x0048) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ThrowablesBase.ThrowablesBase_C");
		return ptr;
	}


	void Use_Throwables();
	void SetThrowableMesh(class UStaticMesh** NewMesh, struct FVector* MeshScale);
	void ExecuteUbergraph_ThrowablesBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
