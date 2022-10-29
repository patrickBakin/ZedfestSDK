#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DonMeshPainting.EDonUvAxes
enum class EDonUvAxes : uint8_t
{
	EDonUvAxes__XY                 = 0,
	EDonUvAxes__XZ                 = 1,
	EDonUvAxes__YZ                 = 2,
	EDonUvAxes__Invalid            = 3,
	EDonUvAxes__EDonUvAxes_MAX     = 4
};


// Enum DonMeshPainting.EDonUvAcquisitionMethod
enum class EDonUvAcquisitionMethod : uint8_t
{
	EDonUvAcquisitionMethod__UnwrappedPositionsTexture = 0,
	EDonUvAcquisitionMethod__ByCollisionUVs = 1,
	EDonUvAcquisitionMethod__PlanarMappingInWorldSpaceXY = 2,
	EDonUvAcquisitionMethod__PlanarMappingInWorldSpaceXZ = 3,
	EDonUvAcquisitionMethod__PlanarMappingInWorldSpaceYZ = 4,
	EDonUvAcquisitionMethod__PlanarMappingInLocalSpaceXY = 5,
	EDonUvAcquisitionMethod__PlanarMappingInLocalSpaceXZ = 6,
	EDonUvAcquisitionMethod__PlanarMappingInLocalSpaceYZ = 7,
	EDonUvAcquisitionMethod__Unspecified = 8,
	EDonUvAcquisitionMethod__EDonUvAcquisitionMethod_MAX = 9
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DonMeshPainting.DonPaintCollisionQuery
// 0x0018
struct FDonPaintCollisionQuery
{
	int                                                Layer;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionTag;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumPaintBlobSize;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionInflationScale;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionInflationInAbsoluteUnits;                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DonMeshPainting.DonPaintTraceQuery
// 0x0004 (0x001C - 0x0018)
struct FDonPaintTraceQuery : public FDonPaintCollisionQuery
{
	int                                                MaxRecursion;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DonMeshPainting.DonPaintStrokeParameters
// 0x0030
struct FDonPaintStrokeParameters
{
	int                                                PaintLayerIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UTexture2D*                                  BrushDecalTexture;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          BrushRenderMaterial;                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              BrushOpacity;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrushHardness;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionTag;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionInflationScale;                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct DonMeshPainting.DonPaintableTextStyle
// 0x0020
struct FDonPaintableTextStyle
{
	class UObject*                                     FontObject;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     FontMaterial;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TypefaceFontName;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FontSize;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Kerning;                                                  // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DonMeshPainting.DonPaintStroke
// 0x00A0
struct FDonPaintStroke
{
	struct FVector                                     WorldLocation;                                            // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              BrushSizeWS;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BrushDecalRotation;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BrushColor;                                               // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                FaceIndex;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDonPaintStrokeParameters                   StrokeParams;                                             // 0x0028(0x0030)
	EDonUvAcquisitionMethod                            ExplicitUvMethod;                                         // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0060(0x0018)
	struct FDonPaintableTextStyle                      TextStyle;                                                // 0x0078(0x0020)
	bool                                               bEraseMode;                                               // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct DonMeshPainting.DonPaintableMeshData
// 0x0060
struct FDonPaintableMeshData
{
	TWeakObjectPtr<class UObject>                      Paintable;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDonPaintStroke>                     PaintStrokes;                                             // 0x0008(0x0010) (ZeroConstructor)
	int                                                NumPaintStrokes;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       PaintableName;                                            // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FTransform                                  ReferenceTransform;                                       // 0x0030(0x0030) (IsPlainOldData)
};

// ScriptStruct DonMeshPainting.DonMeshPaintSaveDataActorUnit
// 0x0030
struct FDonMeshPaintSaveDataActorUnit
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDonPaintableMeshData>               PaintStrokesPerPrimitive;                                 // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
	struct FName                                       AuditLog;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DonMeshPainting.DonMeshPaintSaveData
// 0x0018
struct FDonMeshPaintSaveData
{
	TArray<struct FDonMeshPaintSaveDataActorUnit>      Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bNeedsBakedTexturesForSkinnedMeshes;                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
