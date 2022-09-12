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

// BlueprintGeneratedClass PickupAmmo.PickupAmmo_C
<<<<<<< HEAD
// 0x0014 (0x039C - 0x0388)
class APickupAmmo_C : public APickupBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Ammo_Class;                                               // 0x0390(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0398(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
=======
// 0x0014 (0x038C - 0x0378)
class APickupAmmo_C : public APickupBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Ammo_Class;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0388(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PickupAmmo.PickupAmmo_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PickupAmmo(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
