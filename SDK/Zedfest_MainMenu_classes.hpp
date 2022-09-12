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

// BlueprintGeneratedClass MainMenu.MainMenu_C
// 0x0008 (0x0340 - 0x0338)
class AMainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MainMenu.MainMenu_C");
		return ptr;
	}


	void OnFailure_829FF6EE4A8F860ED1D3699F46C5AC9D();
	void OnSuccess_829FF6EE4A8F860ED1D3699F46C5AC9D();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MainMenu(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
