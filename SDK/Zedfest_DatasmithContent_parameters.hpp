#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    StringToMatch;                                            // (Parm, ZeroConstructor)
	TArray<struct FName>                               OutKeys;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             OutValues;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDatasmithAssetUserData*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
