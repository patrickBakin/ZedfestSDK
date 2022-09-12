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

// BlueprintGeneratedClass BP_MoneyDropPickup.BP_MoneyDropPickup_C
// 0x0061 (0x0391 - 0x0330)
class ABP_MoneyDropPickup_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TraceBox;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Eye2;                                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Eye;                                                      // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Widget;                                                   // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DasBootMesh;                                              // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Money;                                                    // 0x0370(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKey                                        InteractKey;                                              // 0x0378(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CanPickupMoney_;                                          // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MoneyDropPickup.BP_MoneyDropPickup_C");
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
	void OnRep_HealthAdded();
	void UserConstructionScript();
	void Toggle_Widget(bool* Widget);
	void Current_Target(class APawn** Pawn);
	void Clear_Target();
	void Interact(struct FKey* Key, class APawn** Pawn);
	void CollisionDasBootAll();
	void BndEvt__DasBootMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MoneyDropPickup(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
