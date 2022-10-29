#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DismemberInfo.DismemberInfo
// 0x0040
struct FDismemberInfo
{
	struct FName                                       MainBone_21_C2BE836248FABF9C71B103B221F8D4CE;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ChildrenBones_49_20A91E4E4B934EEB5AE8EEBAD7E34082;        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DamageThreshold_8_0097613C48A9E30B8E7A59B03181742C;       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InitialRotation_48_FD67A7AE43179D9A45E3DE830A549330;      // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Dismembered_23_215450A04D02BEDF229816ACFB0CDBD8;          // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<class UStaticMesh*>                         GibMeshes_40_6FE18CE04724440AF80566995CB96996;            // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
