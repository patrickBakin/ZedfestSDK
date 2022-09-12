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

// BlueprintGeneratedClass PickupBase.PickupBase_C
<<<<<<< HEAD
// 0x0058 (0x0388 - 0x0330)
=======
// 0x0048 (0x0378 - 0x0330)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
class APickupBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TraceBox;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        InteractMesh;                                             // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DoubleGunMesh;                                            // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Particle;                                                 // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Pickup_Mesh;                                              // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EItemCategory>                         Pickup_Category;                                          // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              InitialZLocation;                                         // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
<<<<<<< HEAD
	bool                                               SetColor;                                                 // 0x0378(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0380(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PickupBase.PickupBase_C");
		return ptr;
	}


	void Set_Widget_Type(TEnumAsByte<E_WidgetTypes>* Widget_Type);
	void Set_Widget_Title(bool* Return_Value, struct FText* Title_Text);
	void Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text);
	void Set_Widget_Level(bool* Return_Value, struct FText* Level_Text);
	void Set_Widget_Amount(bool* Return_Value, int* Amount_Value);
	void Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color);
	void Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds);
	void Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
<<<<<<< HEAD
	void OnRep_ItemClass();
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void Set_Rarity_Color(class UClass** Item_Class);
	void Toggle_Widget(bool* Widget);
	void Interact(struct FKey* Key, class APawn** Pawn);
	void MultiCast_Set_Rarity_Color(class UClass** Item_Class, TEnumAsByte<EItemCategory>* Pickup_Category);
	void Current_Target(class APawn** Pawn);
	void Clear_Target();
	void BndEvt__Pickup_Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
<<<<<<< HEAD
	void SetRarityColorEvent();
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void ExecuteUbergraph_PickupBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
