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
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_Player_Info1.S_Player_Info1
// 0x0028
struct FS_Player_Info1
{
	struct FName                                       Player_Name_30_D84094884996315385C6AA967F3A0571;          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Prestige_Level_23_F339A6654ADA578771391A8FD1B14525;       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Player_Status_32_394D76E447C26D4A82E83A8F89BD6AB3;        // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Character_Name_31_21736A1C433C27E3527F1ABF555DB8B4;       // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Class_Level_29_55E4EC6F4AF96AC23B1CBFA12587F73E;          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelMesh_35_298EA8514B68260EB586C3AAD3A4A0E1;             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
