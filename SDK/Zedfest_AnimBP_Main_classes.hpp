#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_Main.AnimBP_Main_C
// 0x99FC (0x9C6C - 0x0270)
class UAnimBP_Main_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C1841D764EA0D73C03AD34B6AAAB4EC7;// 0x0278(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF68C6C54CCB4D43B80BF0B5DB805E47;// 0x02F0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F5F85CE4086803688E4F6837B77D598;// 0x0368(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_99D96C6E4ED8194B61669D936AB4A2A4;// 0x03E0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8214E49F406CAA295943229526949DE7;// 0x0480(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_42845D834B44BB3385F1EF80B2E0B30C;// 0x0520(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D4CD98D64096A20FE91A2CBE22649569;// 0x0548(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F32275494D80DE8E9F070BAF82216A18;// 0x0600(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EF90FEEF4E5B088E0FF41F8388483220;// 0x0628(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EC4F00FA40F9B9CDC33DEBA3DBC80E81;// 0x0648(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0668(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_CD2FDF6342F98E924A29D098AB6CA54A; // 0x0670(0x01E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D666765F4847EAA35204C18FA42BBE69;// 0x0850(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0878(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_05829AEC47B30D742EA22A8CA1273325;    // 0x0880(0x0190)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AA5C0A244F615B69B29C0BB55B3A60A8;// 0x0A10(0x0020)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_D661A658470E574B27407695FFA48E7A;    // 0x0A30(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CE8CE0DD4F096FF92ACFD6AB92C8459F;// 0x0BC0(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F20F8B2647AC4159B4E6428E0A7CB02C;// 0x0C60(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0B65994E4C99ECF9353766AD6A563ECC;// 0x0C80(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E126DE404905E5E861E97898A7215573;// 0x0CA8(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6A3E6E1546D9939B7C8DAD9EFEF56827;// 0x0D48(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3F04DED8481ED42ED579B48C1EF8A0D1;// 0x0D68(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_87FE9AD9474791CF447FDABD13AC3D37;// 0x0D90(0x0020)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_8FB781344E837DEF7825499B9260B7AF;    // 0x0DB0(0x0190)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_CB15BCFD4542406E5F2AA698DD5F099D;    // 0x0F40(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A70B8B8846DA87A840F701BE9B27C5B5;// 0x10D0(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_72960B904EDFF16A768077AE5A60302B;// 0x1170(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_50DA1FC04D13AD1808ADB298A40965BE;// 0x1228(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_09EF28F743070627AC5E31807532AA5D;// 0x1250(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EF245CC6414DB1188B7E8EB2C4146D35;// 0x1270(0x0020)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_630030604401AEC86746E79CA70D2DDB; // 0x1290(0x01E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_88BABD894B4082896663A9ACDAC40CBE;// 0x1470(0x00A0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_F76EAAA74D15494C53BD4ABF62172E07; // 0x1510(0x01E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6065C4894A6E2691CEFD31AADC9EF3A5;// 0x16F0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_ABD67C4740ADCF60D74B978469DD8F35;// 0x1710(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5BECB2BB4CE4A436E3E2FBA9070E91D2;// 0x1730(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_EBEC2FB24998362A8819549B80D79495;// 0x1758(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E19C2C7343E893481909F28689ACB5AA;// 0x1810(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2AC2A6F9452C09E707CA24A31BB479EA;// 0x1838(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_85ECC22F429D8F44724FC5B2734C7FD0;// 0x1858(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5C6B3BD2478A38B9300B4486AE2352EA;// 0x1878(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AE6438DF42F6E12183E51AB23A67A2CB;      // 0x1930(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BFD58B584F705F24D11C8B9238DEE528;// 0x1978(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DC88740748FD9BBCAB6687ACF90A58C2;// 0x1998(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D88D72484F5B91F58AC8CEAC79B54716;// 0x1AA0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4BAB8F9246EF512211433A853A2C0498;// 0x1BA8(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C46EF0AD4A3E505264AD0BB94F7A3825;// 0x1CB0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_360D57AB4D36B8EDF8D9F9A8BE8590C5;// 0x1D28(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_6EBEABE947F7ABE6E2BC97A1EBD97D61;// 0x1DC8(0x0188)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_C635CC7745535E3C88ECCF9DE3A93D7B; // 0x1F50(0x01E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D1D98D8640B7955E7647CB9DDAD48BAF;// 0x2130(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7CFD798F41302B6C6912C5AC4372BD0E;// 0x21A8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_08ABCEEA4F00E558F98F498FFFEBCAC3;// 0x2260(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F9D00CE4494294079A446CA47A1AC302;// 0x2288(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D982F8E84332DB54E21B21B2A173C0C1;// 0x22A8(0x0020)
	unsigned char                                      UnknownData02[0x8];                                       // 0x22C8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_A91317DF43C44AE61C8EFD9FE88104B3; // 0x22D0(0x01E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E4B47840476CE879D26AA8BB42262632;// 0x24B0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FE9E802E482BBC5E701D53A9B6FC9707;// 0x2528(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_46180A0B4319E98C4C92BD9DB7689A00;// 0x25C8(0x0188)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_925BEFC34857C9626878939C5FC99E08; // 0x2750(0x01E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_502D71F5436EE6F7D415D29BC6854C63;// 0x2930(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8F66B5CB4ABC6610B4C6CAB3825E51FA;// 0x29A8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_81B3E693489CABB3680D569B62B3E839;// 0x2A60(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_86E921FC4F737E1C12AD9688EBFCCC1D;// 0x2A88(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3C3234D6467A5824A9D04F9FC9DEA7D7;// 0x2AA8(0x0020)
	unsigned char                                      UnknownData03[0x8];                                       // 0x2AC8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_7941A23C49A24B8BE37DD7B284C4AF07; // 0x2AD0(0x01E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57A558A0475FFE3A0B30D2973A9C5D5A;// 0x2CB0(0x0078)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_300F3E6D4C352067628E778D9331A6F3;// 0x2D28(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_68EAF231428ECF56A566EF880C2C9645;// 0x2D48(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_34791BA34569AE217EC0CFAC83F006D7;// 0x2E00(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_17E2F9364D5FCC50D44FC8A4EDB26120;// 0x2E28(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_470C81524189331A688B899A5DC40A17;// 0x2E48(0x0020)
	unsigned char                                      UnknownData04[0x8];                                       // 0x2E68(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_9B5D55C846355EF2413BB987A2596DCC; // 0x2E70(0x01E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_FB06FCFB4AED0D127DF9438E724EC377;// 0x3050(0x0188)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8EE1F62A40D4530952931B8148429CB9;// 0x31D8(0x0078)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9525660C4D24E74B3DC768B574CF6F5C;// 0x3250(0x0188)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_102510EC4A26A609A0F2CEAF051A8E88;// 0x33D8(0x0188)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_E70FA8754801B237CE0A7AAFF4F6E936;// 0x3560(0x0188)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_BE80E0D04618D6A00187D5BE2BF61BED;// 0x36E8(0x0188)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_152A6D0A4F1E77641CAF6FA46970A275;// 0x3870(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A0544EB647FE946FFB3DC2B35F249620;// 0x3910(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C12FBD5F4C5D46FC34ABAA957DABD6CA;// 0x3988(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4553B71640A430CC168D05940D5BF36D;// 0x3A40(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1A203B90446907DF7A636CB41F27A528;// 0x3A68(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7CA09EF241573BAF501289B99AD0203A;// 0x3A88(0x0020)
	unsigned char                                      UnknownData05[0x8];                                       // 0x3AA8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_D817B9BE4085C647086C0D8964BCDFA9; // 0x3AB0(0x01E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6D5420254F9654849FDC2E8717FD2580;// 0x3C90(0x0078)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_C6444F934C7B5CD574078FADED5722FD;// 0x3D08(0x0188)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_B63AD28345327A85D505C9AE1972D602; // 0x3E90(0x01E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1151735049894C8938D155A2E6AEFF6C;// 0x4070(0x0078)
	unsigned char                                      UnknownData06[0x8];                                       // 0x40E8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_CA2824774FC6F2A1FEFF04ADDCE3CA7A; // 0x40F0(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_BFD86B414215A374354B569962AC3CB6; // 0x42D0(0x01E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F0B6260647B8C5395BFC8786B5010F46;// 0x44B0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_45B57AF74EC949196D4A118FD0C98B89;// 0x44D0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3BDFE9B44EA462E021E5F4AE4F867A30;// 0x44F0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9CDA3E244B9459883FA28A9DCA72C134;// 0x4510(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FAAA9E0B46367853352696943BD7ACAB;// 0x4538(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B5A0F2AD4B2EB0B2C93F5CB1B7523EB5;// 0x4560(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9459CD784320CCCBAAA3DEB7CB108635;// 0x4580(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E860556D490380220B128D8D806B224A;// 0x45A0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8BB9111848860EB14182F0BFEA25F169;// 0x45C8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3DE73A8048572317E0AAE595D0ABE4C7;// 0x4680(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5DCDBDBE465627D7D5CC07A131DF748D;// 0x46A8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F9B07C4C49D93CAE5B9E0D82FED81FFD;// 0x4748(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F8C9CB041BA851A8924B4A27F864764;// 0x47E8(0x0078)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B703D49445CDD1CF5FD7A4A978848443;// 0x4860(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A949FB5C471017DEECFA2AB568303348;// 0x4880(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_568C32264390EFC9442D3EA05528AF1F;// 0x48A8(0x0078)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_B06420CB4994F1BC07833D84AAAA97D3; // 0x4920(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_CE79762A47BF9A73B01A3EB86FB20893; // 0x4B00(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_494F8987489981EAF4D166B8F9B8B7CE; // 0x4CE0(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_52293B4F4ECB88178DD66686D34B004D; // 0x4EC0(0x01E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A2B6353347FA05E7A5BB8CAF5F8F6F4F;// 0x50A0(0x00B8)
	unsigned char                                      UnknownData07[0x8];                                       // 0x5158(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_5FB8B97E42ABA5B36FD3059B6FA24826; // 0x5160(0x01E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_C98DB81B4A7526FED371E8A9EBACE5E3;// 0x5340(0x0188)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_EB04B723427DC0B12B3077A657E47296;// 0x54C8(0x00B0)
	unsigned char                                      UnknownData08[0x8];                                       // 0x5578(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_CC970CCF404D8FF7EE13C389586A6ECD; // 0x5580(0x01E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_019F3FE84AF9D4E9530ADFBAB8D3A884;// 0x5760(0x00B8)
	unsigned char                                      UnknownData09[0x8];                                       // 0x5818(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_527A54F1445C847C61B4B898BF555DF9; // 0x5820(0x01E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D27E00846D9B072C30A2E914BDA5C30;// 0x5A00(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3DAD14742177FBB0572D0AD0C53DD7F;// 0x5A78(0x0078)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9506DA5945FB7553271D56B83EDE0D70;// 0x5AF0(0x0188)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_444CE0FB43576360343ED693D37855B2;// 0x5C78(0x0188)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C06565C04D2ADA762337F5A3AB8E4B3A;// 0x5E00(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_610C300D4A6CEDD23329BDB678C07A82;// 0x5EB8(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4DE9E7CD416B33F095A91BA843188075;// 0x5EE0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_06F1415042E22B18C49B1581EB4F51AE;// 0x5F00(0x0020)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_5E59E3A440A41BE24B4D7FB8D626674F; // 0x5F20(0x01E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_FE0750CE4A2D6773326800A9B77911B4;// 0x6100(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_48C5F0DC46877C8A158BCFA70695F345;// 0x6288(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53F83ED94BE66609B23A93AA56F5A80E;// 0x62B0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B822F3614F2CAD9C5DC421844EDCF1BA;// 0x62D8(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B343080D4B9DC69599B0A0ADE112DD73;// 0x6390(0x00B8)
	unsigned char                                      UnknownData10[0x8];                                       // 0x6448(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3A2A404D4C301E42FAEDCF927C323953; // 0x6450(0x01E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7BAED3DE44E3D480B4FFB087082A3CB2;// 0x6630(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9F7F38224516D12AD05E4CB812797E1F;// 0x66A8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_69BB73574FA28E49A71FD88C6428FA39;      // 0x66D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_153A3F424280E42665CBEC8C48ACB6AF;// 0x6718(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B660DEDD4A145018F020739EA6751B99;// 0x6790(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1425B5BC40145258C9FB7FBCC55798E1;// 0x6830(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47E7205D46E1B90B400ACF9A3CD70939;// 0x68E8(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93BB5E0248717BE78A3D24952F67081B;// 0x6960(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B8F2AACE4B4597DC8D93DCAF3C0E1629;// 0x6988(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D35717EE4D78D28E03F606856F015A04;// 0x69B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A9B78D64CD8B92D97275E88AF4662AA;// 0x69D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0776353D459B715480A3359B10C7BA73;// 0x6A00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_00C99B3F44B01BD3C19B67B99860D42D;// 0x6A28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_953D679B44AD34B224CA698EEB90BDC0;// 0x6A50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9892F87B438D5FE72B07FB8029CC461F;// 0x6A78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9E6D365C4D007FFC6C35F48A9F9598CD;// 0x6AA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F2BDF07E4A8167CD31AC6C9E113310B7;// 0x6AC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C10C87F487047E3028931BFD58A6902;// 0x6AF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65F80A24428F68171DA3A8BF591C5C49;// 0x6B18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BCD5078C4976E4A62E9A898E128EEAD4;// 0x6B40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14B4F4214BC4C0984FBC73A9E1E38B6B;// 0x6B68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7773B72F40F8A88C7578EF9FDF238D04;// 0x6B90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8A8C272E4A64D8D07A177FAE2D31AC3A;// 0x6BB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27844DDF4C00C36FD3260AAA11724F25;// 0x6BE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_671DE63D403CF255341AD99C77603BD8;// 0x6C08(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF83AE2346444427C12B7086A6F35A0D;// 0x6C30(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A024A6D542F1AD4351D77785FDA20579;// 0x6C58(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C58F9C240DDB091E0A1C6838EFDC376;// 0x6C80(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F72E8A6A4954EE436BA00483582F8FFD;// 0x6CA8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EE03388949E721D419E5F88C84D782AA;// 0x6CD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BA510AC14A74E0F0605171A30A7B7C19;// 0x6CF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EF85E614117F9D97C7214875EA491BC;// 0x6D20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9B5F7EEC4BE5215C0CD0B5A1D67C745C;// 0x6D48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0981883745CA83E28E922695E3D9BAEF;// 0x6D70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CC631E7D438BF3D8CAF0EC911AD4800E;// 0x6D98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C609D59941D8CB9CBA8161BAC0D2C961;// 0x6DC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C16CB3F94785CAA93D6C21B65DEC1A7E;// 0x6DE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0BFA5FB24902301644487ABBD5894BC9;// 0x6E10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E10CC1954F862DC839EB898A26CAF537;// 0x6E38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C6C0CE54F56F6F0017AD798D12AA5B2;// 0x6E60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E6DF84154D6543C4689FE093DBCBFF50;// 0x6E88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3B19A384ABFC649928369B2A90733AF;// 0x6EB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F93BE024452F35783C68895685EE3D2;// 0x6ED8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_77863D2648F71199105BBC9DEBBCF659;// 0x6F00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8BD02FD54C6B7359ECACC1993C91161B;// 0x6F28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9539F4DC4EA9378B11F0C0B11A733646;// 0x6F50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2E3CE6BA40C058E1993DE798CB060CE5;// 0x6F78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_093CCE7C454C2F77A6F4FF8EB789A1C4;// 0x6FA0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B011C1C5427BEBD6D1E8A49D3C5BB9ED;// 0x6FC8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5A76048A43BAC4A25C54BC87D0AF08E3;// 0x7040(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3B36C82C4EAA99C7BDB1FAB6436EFC05;// 0x7060(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16B7C40D4B504E940B0874ACAA079377;// 0x70D8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A8B518A34F8AC698098DA88B994A8E7B;// 0x70F8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ADF45A0544D947ACDCFD3BB625024A4F;// 0x7170(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51048630406E917C6C88CBB30A3A6E78;// 0x71E8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D3A9A8B3435ED51633EAB69ADA05BC5C;// 0x7260(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E491B7804723E1E9B33C3699259EDD7C;// 0x72D8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B270D324117CC5CE1AF07B4FA9AA300;// 0x7350(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE00BA564E707DB5BAEECAA1CC2E74AB;// 0x73C8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B693F34A48C5A0C4DEF77185E40F3D2F;// 0x7440(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_42D90FDA4EC806BA0A6820B5A1F1E852;// 0x74B8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D89C3543494499A0DF86C9B4007FA070;// 0x7568(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6ED86AAB47164AD8A39B7C904A832C64;// 0x75E0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13E580F84A707490AA112288728A9F01;// 0x7600(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE3A72A64F7435D398238596ECD583C1;// 0x7678(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F65CC91467A3D0E8A810BA2D6945C6C;// 0x76F0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_314EBD324E51E445D0C9BC92156E501F;// 0x7768(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_412838244F54F7CC4B12D89D5C12B2BD;// 0x77E0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_04D980C5424EB654BD5677A6B4D04E25;// 0x7858(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_97A0E27C43F3C7E0C406619F7CCBECCD;// 0x78D0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_03AD006C4052560D5A1527B9CD284165;// 0x7948(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_22B0ABD541DB5872BF5941B743CCC903;// 0x79C0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36776C9E410FA7F59C6AFC89474292B0;// 0x7A70(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_165B91384C39CAC5943E48AEBA18C522;// 0x7AE8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A5BDB99A4C2FDE28B45986B6F8500631;// 0x7B08(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B0316C024184ACB1A03B4487C1F0C7B7;// 0x7B80(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64C4E63944C4F4A97B5EB79C6CB0C7AA;// 0x7BA0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_689CE35C40EDF42047C522B6DB3B9E7A;// 0x7C18(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58F08BB649A8A54A14CE6F822CB65E08;// 0x7C38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CD96852D4E759968F090799A01F19612;// 0x7CB0(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0343650649E8714FD7018D868AAC5E6D;// 0x7CD0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A7FC98444780BF7DC5044A9BD6554BB5;// 0x7DB0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F583DDDF4A53943AC69E0599932A9832;// 0x7DD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E34A04BE440B9D491F025298F842BA78;// 0x7E48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_074825D14E5F5C73583C4FB6B6E21C11;// 0x7E68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4F05477C4BFA06572F078BA2C1D4790F;// 0x7EE0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_004D9A234227019F970D8CBD9D5D18C5;// 0x7F00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E5BE359A48052021D03BBE9905036F72;// 0x7F78(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EA5A6759440A17BF763706B11AFCADA9;// 0x7F98(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_97B85F74474430D5AB4E2BAD4AF71DF6;// 0x8010(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6E2783BE4D9A7FFA98874CA64A9C2717;// 0x8030(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_29ABAB9F4E589F32FC7439BB4D587CCF;// 0x80A8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8FE60FC2430DAE78E85E48BD7FC7A822;// 0x80C8(0x0078)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_623BED7D466641DCB3C72280E9437E6D;// 0x8140(0x0090)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_34C42C9D4609E61A45A3CD81538D11C9;// 0x81D0(0x00A0)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_5E55E6EE4A38A51FB5EB3CA3F7E2D1E9;// 0x8270(0x0090)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1E9B9ED84244CD317C44B89E7AEDD08F;// 0x8300(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B0133CF3413CD5CF5B1A54A8C299E96B;// 0x83A0(0x00A0)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_0A9B3ED0469DC90FC09ED19E56C3EC45;// 0x8440(0x0090)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4E7D36484E7C9CABE96A95B434B9D800;// 0x84D0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_84895A9E4EB4ADCC8D4C5C8EC8763952;// 0x8570(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C319EF6C426ED93F6D3B059E81864AB9;// 0x8590(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A044EAD948F5FAA6F38F808F034D1C49;// 0x8608(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4FB983A4730BE892399998F672861D4;// 0x8680(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4ABA194F40F828B56913FB84DAF85C07;// 0x86F8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F1A696D0476A1C25B22DEAB2331DD6A2;// 0x8770(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5C7D4C7542611DD1294A3D88BF41D46A;// 0x87E8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2F82C7E5465B1676F31FAD9B3277068D;// 0x8860(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2132692E4F97B6CC0E71348E71BF3E9B;// 0x88D8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46F17E0F45812FDD253C38BF35DE81EB;// 0x8950(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8A0D609A451329794AE4D48B03252FA7;// 0x89C8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C6D20E6443F383481B8927B959716143;// 0x8A78(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A53F660243CEE576EAB24D95BF98EECA;// 0x8AF0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_77878D2B49FD37AF317CD38DDDC47006;// 0x8B68(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_915197D54BEE433B34130FA0F64DA1E4;// 0x8BE0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46AC559043806AEB6335EB8B4EA699C2;// 0x8C58(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_354E362F48CB61B261369FABBEB263F3;// 0x8CF8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_788309AF406749CC8B7B859BBBF38CBC;// 0x8D70(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4FEF9BCB4F4D315285C51CBE1319B052;// 0x8D90(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CE8370B64E7E82DB70E36D8D7E7B12C0;// 0x8E70(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B1381D4D48ED1E27CE7C58B5E2C0F14E;// 0x8E90(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_685FD38048026578234C9E873435ECA0;// 0x8F08(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2BEBCDAD4D968413B781C2A9F9DE2036;// 0x8FA8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EC1D28ED4DD96CF50C0359AFE816E4B9;// 0x9020(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A9CABDA4AF17AE506A4B19F5D3693A4;// 0x9040(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3CE0FE314A532908063AC1A481EE2EDE;// 0x90B8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E4CBCCE45B10FDCE4F1E5A014DBEE4D;// 0x9130(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A9D6DAB43E103C067FBE68AAB92045F;// 0x91A8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3C66040C46B7BE359F9155BAD64F8303;// 0x9220(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_986172C242D3F2F53E07B6BD7B6BFD18;// 0x9298(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7C6CDB814D7E49942F312F95C89ED893;// 0x9310(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9083B95344EFBBB6CD44EAABF598A201;// 0x93C0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_89EA40044FDDA73CDCAC5FB56101505E;// 0x9438(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_69F9EAA14AA0F0F29FA050BED858B952;// 0x94B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13A9DA47428D424501BD17BF0517A3F5;// 0x9528(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DFDEC6F04313AEA79D4B6DBB5A1F948F;// 0x9548(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_99F6860445829D18831AA4830629758C;// 0x9628(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3CB808594BEB85942CA56E9194A9E313;// 0x9648(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_EBFCC0C54253C5021C4BFCB00618CA39;      // 0x96F8(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_147E74B343A44DEEE54AC7AE418C5C0B;// 0x9718(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5A64F83E401FF9E43BE943BC09AE536D;// 0x9740(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0BF16FD94B6B0BE92ADBFCBC0C61929D;// 0x97B8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7DCDAD74485D5D9859CEAEBC0F2B4138;// 0x97D8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_55CD6DFB47A6E8728D95FDB4C50D752E;// 0x9850(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F5F5C14D42E87F38D5F5A4B2849C8B25;// 0x9870(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8DEB89DD490A544DF6BAB9A330478FD4;// 0x9920(0x00A0)
	float                                              Speed;                                                    // 0x99C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x99C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Jumping;                                                  // 0x99C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Crouching;                                                // 0x99C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sprinting;                                                // 0x99CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x99CB(0x0001) MISSED OFFSET
	float                                              Yaw;                                                      // 0x99CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pitch;                                                    // 0x99D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimDeltaX;                                               // 0x99D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_WeaponTypes>                         CurrentWeaponType;                                        // 0x99D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x99D9(0x0003) MISSED OFFSET
	struct FVector                                     RightHandOffset;                                          // 0x99DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftHandOffset;                                           // 0x99E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Fire;                                                     // 0x99F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingAnims;                                           // 0x99F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Death;                                                    // 0x99F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasWeapon;                                                // 0x99F7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACharacter*                                  CharacterReference;                                       // 0x99F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Zooming;                                                  // 0x9A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x9A01(0x0003) MISSED OFFSET
	struct FRotator                                    HeadRotation;                                             // 0x9A04(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_Pawn_C*                                  CharRef;                                                  // 0x9A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              BonesHeight;                                              // 0x9A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKoffsetRightFoot;                                        // 0x9A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     JointTargetRight;                                         // 0x9A20(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     JointTargetLeft;                                          // 0x9A2C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKoffsetLeftFoot;                                         // 0x9A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RightFootRot;                                             // 0x9A3C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LeftFootRot;                                              // 0x9A48(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropHeight;                                               // 0x9A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RelativeHeight;                                           // 0x9A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKDistance;                                               // 0x9A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootSocket;                                          // 0x9A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKInterpSpeed;                                            // 0x9A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftFootSocket;                                           // 0x9A6C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActorScale;                                               // 0x9A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotateToController_;                                      // 0x9A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x9A79(0x0003) MISSED OFFSET
	struct FRotator                                    ControllerRotation;                                       // 0x9A7C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ToClimb_;                                                 // 0x9A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x9A89(0x0007) MISSED OFFSET
	struct FString                                     WeaponName;                                               // 0x9A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CurrentWeapon;                                            // 0x9AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               is_server;                                                // 0x9AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x9AB1(0x0007) MISSED OFFSET
	class APawn*                                       PawnOwner;                                                // 0x9AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class Ubp_ragdoll_component_C*                     bp_ragdoll_comp;                                          // 0x9AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class Ubp_time_component_C*                        bp_time_comp;                                             // 0x9AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               is_ragdoll;                                               // 0x9AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll_recovering;                                    // 0x9AD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll_fatal;                                         // 0x9AD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll_animated;                                      // 0x9AD3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_ragdoll_baked;                                         // 0x9AD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x9AD5(0x0003) MISSED OFFSET
	struct FPoseSnapshot                               baked_pose;                                               // 0x9AD8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPoseSnapshot                               update_pose;                                              // 0x9B10(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               is_falling;                                               // 0x9B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x9B49(0x0003) MISSED OFFSET
	float                                              current_speed;                                            // 0x9B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_jumped;                                                // 0x9B50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x9B51(0x0007) MISSED OFFSET
	struct FPoseSnapshot                               time_pose;                                                // 0x9B58(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               is_time_reversed;                                         // 0x9B90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDriver;                                                 // 0x9B91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPassenger;                                              // 0x9B92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0xD];                                       // 0x9B93(0x000D) MISSED OFFSET
	struct FTransform                                  DriverRightHandIK;                                        // 0x9BA0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DriverLeftHandIK;                                         // 0x9BD0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PassengerRightHandIK;                                     // 0x9C00(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PassengerLeftHandIK;                                      // 0x9C30(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               InterpDirection_;                                         // 0x9C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ragdolling;                                               // 0x9C61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Swimming;                                                 // 0x9C62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sliding_;                                                 // 0x9C63(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BodyRoll_;                                                // 0x9C64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnRight_;                                               // 0x9C65(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnLeft_;                                                // 0x9C66(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SoloRagdoll_;                                             // 0x9C67(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponAnimRunning_;                                       // 0x9C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeBlock_;                                              // 0x9C69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeParry_;                                              // 0x9C6A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanPlayerBeDamaged_;                                      // 0x9C6B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Main.AnimBP_Main_C");
		return ptr;
	}


	void CharacterInVehicle();
	void time_vars();
	void locomotion_vars();
	void ragdoll_vars();
	void load_vars();
	void init_reference();
	void F_IkFootTrace(float* InputPin, struct FName* InputPin1, struct FVector* InputPin2, float* Offset, bool* Hit_, float* Distance, struct FRotator* HitRot);
	void F_SetHeadRotation();
	void Can_Jump(bool* Should_Jump, bool* bJumping);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_925BEFC34857C9626878939C5FC99E08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_C635CC7745535E3C88ECCF9DE3A93D7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_93BB5E0248717BE78A3D24952F67081B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_ModifyBone_DC88740748FD9BBCAB6687ACF90A58C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_88BABD894B4082896663A9ACDAC40CBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_A70B8B8846DA87A840F701BE9B27C5B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_B8F2AACE4B4597DC8D93DCAF3C0E1629();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_D35717EE4D78D28E03F606856F015A04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_1A9B78D64CD8B92D97275E88AF4662AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0776353D459B715480A3359B10C7BA73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_7773B72F40F8A88C7578EF9FDF238D04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_BF83AE2346444427C12B7086A6F35A0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_EE03388949E721D419E5F88C84D782AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0981883745CA83E28E922695E3D9BAEF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_CC631E7D438BF3D8CAF0EC911AD4800E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_0BFA5FB24902301644487ABBD5894BC9();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_EquipWeapon();
	void AnimNotify_UnequipWeapon();
	void ReloadWeapon(class UAnimMontage** ReloadAnimMontage);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_4C6C0CE54F56F6F0017AD798D12AA5B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_B0133CF3413CD5CF5B1A54A8C299E96B();
	void PlayAnimationMontage(class UAnimMontage** AnimMontage, float* PlayRate);
	void BlueprintBeginPlay();
	void MeleeWeaponAnim(class UAnimMontage** Anim_Montage);
	void AnimNotify_RightFootSound();
	void AnimNotify_LeftFootSound();
	void AnimNotify_EquipConsume();
	void AnimNotify_UnequipConsume();
	void AnimNotify_EquipThrowable();
	void AnimNotify_UnequipThrowable();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_BlendListByBool_5DCDBDBE465627D7D5CC07A131DF748D();
	void SlotCharWeaponEvent(class ASlotCharParent_BP_C** NewParam, bool* Main_);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_E6DF84154D6543C4689FE093DBCBFF50();
	void AnimNotify_EquipMelee();
	void AnimNotify_UnequipMelee();
	void AnimNotify_StopMeleeTrace();
	void AnimNotify_EquipSpecialItem();
	void AnimNotify_UnequipSpecialItem();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TwoBoneIK_CA2824774FC6F2A1FEFF04ADDCE3CA7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_77863D2648F71199105BBC9DEBBCF659();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Main_AnimGraphNode_TransitionResult_9539F4DC4EA9378B11F0C0B11A733646();
	void AnimNotify_Transform();
	void AnimNotify_ClimbFinish();
	void ExecuteUbergraph_AnimBP_Main(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
