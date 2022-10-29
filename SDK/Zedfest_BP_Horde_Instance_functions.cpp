// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Horde_Instance.BP_Horde_Instance_C.OnFailure_6159D3B54A7A8C07A1ED83B0BFC56C75
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::OnFailure_6159D3B54A7A8C07A1ED83B0BFC56C75()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.OnFailure_6159D3B54A7A8C07A1ED83B0BFC56C75");

	UBP_Horde_Instance_C_OnFailure_6159D3B54A7A8C07A1ED83B0BFC56C75_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.OnSuccess_6159D3B54A7A8C07A1ED83B0BFC56C75
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::OnSuccess_6159D3B54A7A8C07A1ED83B0BFC56C75()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.OnSuccess_6159D3B54A7A8C07A1ED83B0BFC56C75");

	UBP_Horde_Instance_C_OnSuccess_6159D3B54A7A8C07A1ED83B0BFC56C75_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.OnFailure_ADFC0EF542F1B27C889384BE50B9D085
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::OnFailure_ADFC0EF542F1B27C889384BE50B9D085()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.OnFailure_ADFC0EF542F1B27C889384BE50B9D085");

	UBP_Horde_Instance_C_OnFailure_ADFC0EF542F1B27C889384BE50B9D085_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.OnSuccess_ADFC0EF542F1B27C889384BE50B9D085
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::OnSuccess_ADFC0EF542F1B27C889384BE50B9D085()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.OnSuccess_ADFC0EF542F1B27C889384BE50B9D085");

	UBP_Horde_Instance_C_OnSuccess_ADFC0EF542F1B27C889384BE50B9D085_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.OnFailure_B5CCDC1445F0188FC71C25AC3E353195
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::OnFailure_B5CCDC1445F0188FC71C25AC3E353195()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.OnFailure_B5CCDC1445F0188FC71C25AC3E353195");

	UBP_Horde_Instance_C_OnFailure_B5CCDC1445F0188FC71C25AC3E353195_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.OnSuccess_B5CCDC1445F0188FC71C25AC3E353195
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::OnSuccess_B5CCDC1445F0188FC71C25AC3E353195()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.OnSuccess_B5CCDC1445F0188FC71C25AC3E353195");

	UBP_Horde_Instance_C_OnSuccess_B5CCDC1445F0188FC71C25AC3E353195_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.JoinServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* SessionToJoin                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                LevelImage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::JoinServer(struct FBlueprintSessionResult* SessionToJoin, class UObject** LevelImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.JoinServer");

	UBP_Horde_Instance_C_JoinServer_Params params;
	params.SessionToJoin = SessionToJoin;
	params.LevelImage = LevelImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.LaunchGame
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumberOfPlayers                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          EnableLan_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Servername                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FSessionPropertyKeyPair>* PropertyString                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  Map                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HasPassword_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WaveAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                LevelImage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_GameModeState>*  GameModeState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Server_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_Horde_Instance_C::LaunchGame(int* NumberOfPlayers, bool* EnableLan_, struct FText* Servername, TArray<struct FSessionPropertyKeyPair>* PropertyString, struct FName* Map, bool* HasPassword_, struct FString* Password, int* Difficulty, int* WaveAmount, class UObject** LevelImage, TEnumAsByte<E_GameModeState>* GameModeState, struct FString* Server_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.LaunchGame");

	UBP_Horde_Instance_C_LaunchGame_Params params;
	params.NumberOfPlayers = NumberOfPlayers;
	params.EnableLan_ = EnableLan_;
	params.Servername = Servername;
	params.PropertyString = PropertyString;
	params.Map = Map;
	params.HasPassword_ = HasPassword_;
	params.Password = Password;
	params.Difficulty = Difficulty;
	params.WaveAmount = WaveAmount;
	params.LevelImage = LevelImage;
	params.GameModeState = GameModeState;
	params.Server_ID = Server_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.ShowLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                LevelImage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::ShowLoadingScreen(class UObject** LevelImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.ShowLoadingScreen");

	UBP_Horde_Instance_C_ShowLoadingScreen_Params params;
	params.LevelImage = LevelImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.SPLoadingScreen
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::SPLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.SPLoadingScreen");

	UBP_Horde_Instance_C_SPLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UBP_Horde_Instance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.ReceiveInit");

	UBP_Horde_Instance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeMenuCharInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::ChangeMenuCharInstance(int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeMenuCharInstance");

	UBP_Horde_Instance_C_ChangeMenuCharInstance_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.SetPlayerStart
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::SetPlayerStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.SetPlayerStart");

	UBP_Horde_Instance_C_SetPlayerStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.SaveData
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::SaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.SaveData");

	UBP_Horde_Instance_C_SaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.OnLoad
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::OnLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.OnLoad");

	UBP_Horde_Instance_C_OnLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeCharIngameInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          AssaultMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          NukerMesh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          StalkerMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          GunnerMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::ChangeCharIngameInstance(class USkeletalMesh** AssaultMesh, class USkeletalMesh** NukerMesh, class USkeletalMesh** StalkerMesh, class USkeletalMesh** GunnerMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeCharIngameInstance");

	UBP_Horde_Instance_C_ChangeCharIngameInstance_Params params;
	params.AssaultMesh = AssaultMesh;
	params.NukerMesh = NukerMesh;
	params.StalkerMesh = StalkerMesh;
	params.GunnerMesh = GunnerMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeMenuCharInstance1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          AssaultMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          NukerMesh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          StalkerMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          DoctorMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          SavageMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::ChangeMenuCharInstance1(class USkeletalMesh** AssaultMesh, class USkeletalMesh** NukerMesh, class USkeletalMesh** StalkerMesh, class USkeletalMesh** DoctorMesh, class USkeletalMesh** SavageMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeMenuCharInstance1");

	UBP_Horde_Instance_C_ChangeMenuCharInstance1_Params params;
	params.AssaultMesh = AssaultMesh;
	params.NukerMesh = NukerMesh;
	params.StalkerMesh = StalkerMesh;
	params.DoctorMesh = DoctorMesh;
	params.SavageMesh = SavageMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangePrimaryWeaponInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 AssaultClass                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 NukerClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 StalkerClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DoctorClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SavageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WeaponInt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WeaponLvlInt                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          P_U_G_S_Upgrade_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ChangeClass_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::MenuChangePrimaryWeaponInstance(class UClass** AssaultClass, class UClass** NukerClass, class UClass** StalkerClass, class UClass** DoctorClass, class UClass** SavageClass, int* WeaponInt, int* WeaponLvlInt, bool* P_U_G_S_Upgrade_, bool* ChangeClass_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangePrimaryWeaponInstance");

	UBP_Horde_Instance_C_MenuChangePrimaryWeaponInstance_Params params;
	params.AssaultClass = AssaultClass;
	params.NukerClass = NukerClass;
	params.StalkerClass = StalkerClass;
	params.DoctorClass = DoctorClass;
	params.SavageClass = SavageClass;
	params.WeaponInt = WeaponInt;
	params.WeaponLvlInt = WeaponLvlInt;
	params.P_U_G_S_Upgrade_ = P_U_G_S_Upgrade_;
	params.ChangeClass_ = ChangeClass_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.SetMeshWhenJoiningLobby
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::SetMeshWhenJoiningLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.SetMeshWhenJoiningLobby");

	UBP_Horde_Instance_C_SetMeshWhenJoiningLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeClassHPInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         _0_                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         _1_                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         _2_                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         _3_                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::ChangeClassHPInstance(float* _0_, float* _1_, float* _2_, float* _3_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeClassHPInstance");

	UBP_Horde_Instance_C_ChangeClassHPInstance_Params params;
	params._0_ = _0_;
	params._1_ = _1_;
	params._2_ = _2_;
	params._3_ = _3_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeSecondaryWeaponInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 AssaultClass                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 NukerClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 StalkerClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DoctorClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SavageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WeaponInt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WeaponLvlInt                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          P_U_G_S_Upgrade_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ChangeClass_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::MenuChangeSecondaryWeaponInstance(class UClass** AssaultClass, class UClass** NukerClass, class UClass** StalkerClass, class UClass** DoctorClass, class UClass** SavageClass, int* WeaponInt, int* WeaponLvlInt, bool* P_U_G_S_Upgrade_, bool* ChangeClass_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeSecondaryWeaponInstance");

	UBP_Horde_Instance_C_MenuChangeSecondaryWeaponInstance_Params params;
	params.AssaultClass = AssaultClass;
	params.NukerClass = NukerClass;
	params.StalkerClass = StalkerClass;
	params.DoctorClass = DoctorClass;
	params.SavageClass = SavageClass;
	params.WeaponInt = WeaponInt;
	params.WeaponLvlInt = WeaponLvlInt;
	params.P_U_G_S_Upgrade_ = P_U_G_S_Upgrade_;
	params.ChangeClass_ = ChangeClass_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeCharFromLobbyClassButtons
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::ChangeCharFromLobbyClassButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeCharFromLobbyClassButtons");

	UBP_Horde_Instance_C_ChangeCharFromLobbyClassButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.PreviewCharacterMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          AssaultMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          NukerMesh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          StalkerMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          GunnerMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::PreviewCharacterMenu(class USkeletalMesh** AssaultMesh, class USkeletalMesh** NukerMesh, class USkeletalMesh** StalkerMesh, class USkeletalMesh** GunnerMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.PreviewCharacterMenu");

	UBP_Horde_Instance_C_PreviewCharacterMenu_Params params;
	params.AssaultMesh = AssaultMesh;
	params.NukerMesh = NukerMesh;
	params.StalkerMesh = StalkerMesh;
	params.GunnerMesh = GunnerMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.CharacterPreviewEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Bought_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          PreviewMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::CharacterPreviewEvent(bool* Bought_, class USkeletalMesh** PreviewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.CharacterPreviewEvent");

	UBP_Horde_Instance_C_CharacterPreviewEvent_Params params;
	params.Bought_ = Bought_;
	params.PreviewMesh = PreviewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.CharacterPreviewRelease
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::CharacterPreviewRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.CharacterPreviewRelease");

	UBP_Horde_Instance_C_CharacterPreviewRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.WeaponsPreviewEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 PreviewWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::WeaponsPreviewEvent(class UClass** PreviewWeapon, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.WeaponsPreviewEvent");

	UBP_Horde_Instance_C_WeaponsPreviewEvent_Params params;
	params.PreviewWeapon = PreviewWeapon;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.CharSelectionPanelRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterSelectionPanel1_C** Ref                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Horde_Instance_C::CharSelectionPanelRef(class UCharacterSelectionPanel1_C** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.CharSelectionPanelRef");

	UBP_Horde_Instance_C_CharSelectionPanelRef_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.WeaponSkinPreviewEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance**      SkinMaterial                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::WeaponSkinPreviewEvent(class UMaterialInstance** SkinMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.WeaponSkinPreviewEvent");

	UBP_Horde_Instance_C_WeaponSkinPreviewEvent_Params params;
	params.SkinMaterial = SkinMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeWeaponSkinInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance**      SkinMat                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::MenuChangeWeaponSkinInstance(class UMaterialInstance** SkinMat, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeWeaponSkinInstance");

	UBP_Horde_Instance_C_MenuChangeWeaponSkinInstance_Params params;
	params.SkinMat = SkinMat;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.LockMenuCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          LockMenuCamera                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::LockMenuCamera(bool* LockMenuCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.LockMenuCamera");

	UBP_Horde_Instance_C_LockMenuCamera_Params params;
	params.LockMenuCamera = LockMenuCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.EventCharVoiceCaller
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::EventCharVoiceCaller()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.EventCharVoiceCaller");

	UBP_Horde_Instance_C_EventCharVoiceCaller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeMeleeWeaponInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 AssaultClass                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 NukerClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 StalkerClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DoctorClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SavageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WeaponInt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WeaponLvlInt                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          P_U_G_S_Upgrade_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ChangeClass_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::MenuChangeMeleeWeaponInstance(class UClass** AssaultClass, class UClass** NukerClass, class UClass** StalkerClass, class UClass** DoctorClass, class UClass** SavageClass, int* WeaponInt, int* WeaponLvlInt, bool* P_U_G_S_Upgrade_, bool* ChangeClass_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeMeleeWeaponInstance");

	UBP_Horde_Instance_C_MenuChangeMeleeWeaponInstance_Params params;
	params.AssaultClass = AssaultClass;
	params.NukerClass = NukerClass;
	params.StalkerClass = StalkerClass;
	params.DoctorClass = DoctorClass;
	params.SavageClass = SavageClass;
	params.WeaponInt = WeaponInt;
	params.WeaponLvlInt = WeaponLvlInt;
	params.P_U_G_S_Upgrade_ = P_U_G_S_Upgrade_;
	params.ChangeClass_ = ChangeClass_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.EmotePreviewEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           PreviewAnimationMontage        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Selected_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::EmotePreviewEvent(class UAnimMontage** PreviewAnimationMontage, bool* Selected_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.EmotePreviewEvent");

	UBP_Horde_Instance_C_EmotePreviewEvent_Params params;
	params.PreviewAnimationMontage = PreviewAnimationMontage;
	params.Selected_ = Selected_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.EventPlayTaunt
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::EventPlayTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.EventPlayTaunt");

	UBP_Horde_Instance_C_EventPlayTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.EventUpdateWeeklyCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           MonthIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::EventUpdateWeeklyCard(int* MonthIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.EventUpdateWeeklyCard");

	UBP_Horde_Instance_C_EventUpdateWeeklyCard_Params params;
	params.MonthIndex = MonthIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.MainMenuRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMainMenu_CardViewTabbed_C** Ref                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Horde_Instance_C::MainMenuRef(class UMainMenu_CardViewTabbed_C** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.MainMenuRef");

	UBP_Horde_Instance_C_MainMenuRef_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.EventCloseSeasonalObjectivesBorder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Close_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::EventCloseSeasonalObjectivesBorder(bool* Close_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.EventCloseSeasonalObjectivesBorder");

	UBP_Horde_Instance_C_EventCloseSeasonalObjectivesBorder_Params params;
	params.Close_ = Close_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeClassInLobbyFromCharselection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ClassInt                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::ChangeClassInLobbyFromCharselection(int* ClassInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeClassInLobbyFromCharselection");

	UBP_Horde_Instance_C_ChangeClassInLobbyFromCharselection_Params params;
	params.ClassInt = ClassInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.LobbyScreeenRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Lobby_Main_C**      LobbyRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Horde_Instance_C::LobbyScreeenRef(class UWBP_Lobby_Main_C** LobbyRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.LobbyScreeenRef");

	UBP_Horde_Instance_C_LobbyScreeenRef_Params params;
	params.LobbyRef = LobbyRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.MeleeWeaponPreviewEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 MeleeWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::MeleeWeaponPreviewEvent(class UClass** MeleeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.MeleeWeaponPreviewEvent");

	UBP_Horde_Instance_C_MeleeWeaponPreviewEvent_Params params;
	params.MeleeWeapon = MeleeWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeGrenadeWeaponInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 AssaultClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 NukerClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 StalkerClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DoctorClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SavageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ChangeClass_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::MenuChangeGrenadeWeaponInstance(class UClass** AssaultClass, class UClass** NukerClass, class UClass** StalkerClass, class UClass** DoctorClass, class UClass** SavageClass, bool* ChangeClass_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeGrenadeWeaponInstance");

	UBP_Horde_Instance_C_MenuChangeGrenadeWeaponInstance_Params params;
	params.AssaultClass = AssaultClass;
	params.NukerClass = NukerClass;
	params.StalkerClass = StalkerClass;
	params.DoctorClass = DoctorClass;
	params.SavageClass = SavageClass;
	params.ChangeClass_ = ChangeClass_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.GrenadeWeaponPreviewEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 GrenadeWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::GrenadeWeaponPreviewEvent(class UClass** GrenadeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.GrenadeWeaponPreviewEvent");

	UBP_Horde_Instance_C_GrenadeWeaponPreviewEvent_Params params;
	params.GrenadeWeapon = GrenadeWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.CheatConsoleClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                CheatText                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_Horde_Instance_C::CheatConsoleClose(struct FString* CheatText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.CheatConsoleClose");

	UBP_Horde_Instance_C_CheatConsoleClose_Params params;
	params.CheatText = CheatText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.1_WhenTabIsClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_Horde_Instance_C::_1_WhenTabIsClicked(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.1_WhenTabIsClicked");

	UBP_Horde_Instance_C__1_WhenTabIsClicked_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.PauseScreenRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPauseMenu_CardViewTabbed_C** PauseRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Horde_Instance_C::PauseScreenRef(class UPauseMenu_CardViewTabbed_C** PauseRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.PauseScreenRef");

	UBP_Horde_Instance_C_PauseScreenRef_Params params;
	params.PauseRef = PauseRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.EndScreenRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDemoWidget_C**          EndScreenRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Horde_Instance_C::EndScreenRef(class UDemoWidget_C** EndScreenRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.EndScreenRef");

	UBP_Horde_Instance_C_EndScreenRef_Params params;
	params.EndScreenRef = EndScreenRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.PlaceCurrentSelectedCharInFrontEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::PlaceCurrentSelectedCharInFrontEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.PlaceCurrentSelectedCharInFrontEvent");

	UBP_Horde_Instance_C_PlaceCurrentSelectedCharInFrontEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.SendDiscordRPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscordRichPresence*   Discord_RPC                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Horde_Instance_C::SendDiscordRPC(struct FDiscordRichPresence* Discord_RPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.SendDiscordRPC");

	UBP_Horde_Instance_C_SendDiscordRPC_Params params;
	params.Discord_RPC = Discord_RPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.LobbyToCharSelectionWeaponInt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WeaponSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::LobbyToCharSelectionWeaponInt(int* WeaponSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.LobbyToCharSelectionWeaponInt");

	UBP_Horde_Instance_C_LobbyToCharSelectionWeaponInt_Params params;
	params.WeaponSlot = WeaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.OnSessionInviteAccepted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           LocalPlayerNum                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBPUniqueNetId*         PersonInvited                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBlueprintSessionResult* SessionToJoin                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Horde_Instance_C::OnSessionInviteAccepted(int* LocalPlayerNum, struct FBPUniqueNetId* PersonInvited, struct FBlueprintSessionResult* SessionToJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.OnSessionInviteAccepted");

	UBP_Horde_Instance_C_OnSessionInviteAccepted_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.PersonInvited = PersonInvited;
	params.SessionToJoin = SessionToJoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.HordeInsOpenCheatConsole
// (BlueprintCallable, BlueprintEvent)

void UBP_Horde_Instance_C::HordeInsOpenCheatConsole()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.HordeInsOpenCheatConsole");

	UBP_Horde_Instance_C_HordeInsOpenCheatConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.StorePugsRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Store_C**             WStoreRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Horde_Instance_C::StorePugsRef(class UW_Store_C** WStoreRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.StorePugsRef");

	UBP_Horde_Instance_C_StorePugsRef_Params params;
	params.WStoreRef = WStoreRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_Instance.BP_Horde_Instance_C.ExecuteUbergraph_BP_Horde_Instance
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Horde_Instance_C::ExecuteUbergraph_BP_Horde_Instance(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_Instance.BP_Horde_Instance_C.ExecuteUbergraph_BP_Horde_Instance");

	UBP_Horde_Instance_C_ExecuteUbergraph_BP_Horde_Instance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
