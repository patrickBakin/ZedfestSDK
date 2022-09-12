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

// UserDefinedStruct Struct_BasicBehavior.Struct_BasicBehavior
// 0x00AB
struct FStruct_BasicBehavior
{
	TEnumAsByte<Enum_BehaviorType>                     BehaviorType_2_D699B7194817EACFC527B8949BCD5FEC;          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MovementSpeed_34_B716D9754BC12E288BC6EF99E151DD9F;        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FStruct_ActorTrigger>                OnSightTriggers_50_3224A6F24F55E7CC58F2998B590297CB;      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStruct_ActorTrigger>                LoseSightTriggers_49_A18A98624FCC4ECF2C770A9ABFEE1E90;    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStruct_TagTrigger>                  MessageTriggers_55_4BA7591A4081E99E8729D79955A65776;      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FStruct_DelayTrigger                        DelayTrigger_38_5C8C6C6149AAC5846DD7578B341E44F1;         // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FStruct_ActorDistanceTrigger>        WithinDistanceTriggers_44_12A33C1E4F2159016C210985F0BCD8D2;// 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStruct_ActorDistanceTrigger>        BeyondDistanceTriggers_45_B80166C2426C3DB58AA1B1B46D24A079;// 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStruct_NumberTrigger>               HealthTriggers_63_A5C73CF34962E294FD5009BE1F5E2154;       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        Animations_12_238A696D49F94C7AACEF9D9D093E5803;           // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class USoundBase*>                          Audio_64_82C07DD940FCA8760AF124A6DD3382C4;                // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               TargetTags_54_03DAC2AD452002D87E6949B6124BAC3A;           // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               RandomAnim_57_32B894544143D1037551E982DEBE9461;           // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AscendingOrderAnim_59_6C2027964B8F9F8F327106A47FEC81E4;   // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PrioritizeList_66_A06242444024145CA7747196CD1AFED3;       // 0x00AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
