#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DonMeshPainting.DonMeshEffectsRaycastHelper
// 0x0000 (0x0028 - 0x0028)
class UDonMeshEffectsRaycastHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonMeshPainting.DonMeshEffectsRaycastHelper");
		return ptr;
	}


	bool STATIC_DonSphereTraceSingleForObjects(class UObject** WorldContextObject, struct FVector* Start, struct FVector* End, float* Radius, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FDonPaintTraceQuery* PaintPortalSetup, struct FHitResult* OutHit);
	bool STATIC_DonSphereTraceSingle(class UObject** WorldContextObject, struct FVector* Start, struct FVector* End, float* Radius, TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FDonPaintTraceQuery* PaintPortalSetup, struct FHitResult* OutHit);
	bool STATIC_DonSphereTraceMultiForObjects(class UObject** WorldContextObject, struct FVector* Start, struct FVector* End, float* Radius, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FDonPaintTraceQuery* PaintPortalSetup, TArray<struct FHitResult>* OutHits);
	bool STATIC_DonSphereTraceMulti(class UObject** WorldContextObject, struct FVector* Start, struct FVector* End, float* Radius, TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FDonPaintTraceQuery* PaintPortalSetup, TArray<struct FHitResult>* OutHits);
	bool STATIC_DonLineTraceSingleForObjects(class UObject** WorldContextObject, struct FDonPaintTraceQuery* PaintPortalSetup, struct FVector* Start, struct FVector* End, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FHitResult* OutHit);
	bool STATIC_DonLineTraceSingle(class UObject** WorldContextObject, struct FDonPaintTraceQuery* PaintPortalSetup, struct FVector* Start, struct FVector* End, TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FHitResult* OutHit);
	bool STATIC_DonLineTraceMultiForObjects(class UObject** WorldContextObject, struct FDonPaintTraceQuery* PaintPortalSetup, struct FVector* Start, struct FVector* End, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, TArray<struct FHitResult>* OutHits);
	bool STATIC_DonLineTraceMulti(class UObject** WorldContextObject, struct FDonPaintTraceQuery* PaintPortalSetup, struct FVector* Start, struct FVector* End, TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, TArray<struct FHitResult>* OutHits);
};


// Class DonMeshPainting.DonMeshPainterComponent
// 0x00F0 (0x01E8 - 0x00F8)
class UDonMeshPainterComponent : public UActorComponent
{
public:
	class ADonMeshPainterGlobalActor*                  GlobalMeshPainterActor;                                   // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDonPaintableMeshData>               Rep_MeshPaintStrokes;                                     // 0x0100(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0110(0x00B8) MISSED OFFSET
	TArray<class UTextureRenderTarget2D*>              ActiveRenderTargets;                                      // 0x01C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET
	bool                                               bDisplayLogWarningsOnScreen;                              // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonMeshPainting.DonMeshPainterComponent");
		return ptr;
	}


	void OnRep_MeshStrokes();
};


// Class DonMeshPainting.DonMeshPainterGlobalActor
// 0x0218 (0x0548 - 0x0330)
class ADonMeshPainterGlobalActor : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    UVPositionsCaptureComponent;                              // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          UnwrapperMaterial;                                        // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DilationMaterial;                                         // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          HiddenMaterial;                                           // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SaveTextureToRTMaterial;                                  // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    UnwrapperMaterialInstance;                                // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DilationMaterialInstance;                                 // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SaveTextureToRTMaterialInstance;                          // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultBrushRenderMaterial;                               // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          EraserBrushRenderMaterial;                                // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                GlobalMeshPaintingParameters;                             // 0x0388(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0390(0x0050) MISSED OFFSET
	TMap<class UObject*, class UPrimitiveComponent*>   PositionsTextureMeshes;                                   // 0x03E0(0x0050) (ExportObject, ZeroConstructor)
	TArray<class UPrimitiveComponent*>                 CommonPositionCaptureMeshes;                              // 0x0430(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0440(0x00A0) MISSED OFFSET
	TArray<class UDonMeshPainterComponent*>            ActivePainterComponents;                                  // 0x04E0(0x0010) (ExportObject, Net, ZeroConstructor)
	TArray<class UTextureRenderTarget2D*>              ActiveRenderTargets;                                      // 0x04F0(0x0010) (ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            ActiveRenderMaterials;                                    // 0x0500(0x0010) (ZeroConstructor)
	class UTextureRenderTarget2D*                      RenderTargetWorldSpaceXY;                                 // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture*                                    CurrentUnwrap;                                            // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UMaterialInterface*                          CurrentAdditiveBrush;                                     // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UMaterialInterface*                          LastPaintedMaterial;                                      // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class UTextureRenderTarget2D*>              RenderTargetPool;                                         // 0x0530(0x0010) (ZeroConstructor)
	class USkeletalMeshComponent*                      DebugCaptureMesh;                                         // 0x0540(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonMeshPainting.DonMeshPainterGlobalActor");
		return ptr;
	}


	void OnRep_ActivePainterComponents();
	void MultiCast_FlushAllPaint();
};


// Class DonMeshPainting.DonMeshPaintingHelper
// 0x0000 (0x0028 - 0x0028)
class UDonMeshPaintingHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonMeshPainting.DonMeshPaintingHelper");
		return ptr;
	}


	bool STATIC_QueryPaintCollisionMulti(class UPrimitiveComponent** Primitive, TArray<struct FDonPaintCollisionQuery>* CollisionTags, struct FVector* WorldLocation, struct FDonPaintCollisionQuery* OutCollisionTag);
	bool STATIC_QueryPaintCollision(class UPrimitiveComponent** Primitive, struct FName* CollisionTag, struct FVector* WorldLocation, float* MinimumPaintBlobSize, float* CollisionInflationScale, float* CollisionInflationInAbsoluteUnits, int* Layer);
	bool STATIC_PaintWorldDirect(class UObject** WorldContextObject, struct FVector* WorldLocation, EDonUvAxes* WorldAxes, float* BrushSize, struct FLinearColor* BrushColor, class UTexture2D** BrushDecalTexture, int* PaintLayer, bool* bEraseMode, struct FName* CollisionTag, float* BrushOpacity, float* BrushHardness, int* BrushDecalRotation, class UMaterialInterface** BrushRenderMaterial, bool* bAllowDuplicateStrokes, float* CollisionInflationScale, bool* bPerformNetworkReplication);
	bool STATIC_PaintTextAtComponent(class UPrimitiveComponent** PrimitiveComponent, struct FVector* RelativeLocation, struct FText* Text, struct FDonPaintableTextStyle* Style, struct FName* SocketName, struct FLinearColor* Color, int* Rotation, int* PaintLayer, bool* bDrawDebugLocation);
	bool STATIC_PaintText(struct FHitResult* Hit, struct FText* Text, struct FDonPaintableTextStyle* Style, struct FLinearColor* Color, int* Rotation, int* PaintLayer);
	bool STATIC_PaintStrokeAtComponent(class UPrimitiveComponent** PrimitiveComponent, struct FVector* RelativeLocation, struct FName* SocketName, float* BrushSize, struct FLinearColor* BrushColor, class UTexture2D** BrushDecalTexture, int* PaintLayer, bool* bEraseMode, struct FName* CollisionTag, float* BrushOpacity, float* BrushHardness, int* BrushDecalRotation, class UMaterialInterface** BrushRenderMaterial, bool* bAllowDuplicateStrokes, float* CollisionInflationScale, bool* bDrawDebugLocation);
	bool STATIC_PaintStroke(struct FHitResult* Hit, float* BrushSize, struct FLinearColor* BrushColor, class UTexture2D** BrushDecalTexture, int* PaintLayer, bool* bEraseMode, struct FName* CollisionTag, float* BrushOpacity, float* BrushHardness, int* BrushDecalRotation, class UMaterialInterface** BrushRenderMaterial, bool* bAllowDuplicateStrokes, float* CollisionInflationScale);
	struct FString STATIC_GameSaveDirectory();
	void STATIC_FlushPaintForActor(class AActor** Actor, TArray<class UMaterialInterface*>* MaterialsFilter);
	void STATIC_FlushAllPaint(class UObject** WorldContextObject);
	void STATIC_DonExportPaintMasks(class UObject** PaintableEntity, struct FString* AbsoluteDirectoryPath);
};


// Class DonMeshPainting.DonMeshPaintSaveLoadHelper
// 0x0000 (0x0028 - 0x0028)
class UDonMeshPaintSaveLoadHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonMeshPainting.DonMeshPaintSaveLoadHelper");
		return ptr;
	}


	TArray<unsigned char> STATIC_SaveMeshPaintAsBytes(class UObject** WorldContextObject, TArray<class AActor*>* ActorFilters, bool* bNeedsBakedTexturesForSkinnedMeshes);
	void STATIC_LoadMeshPaintOntoMultipleActors(class UObject** WorldContextObject, TArray<unsigned char>* SaveData, TArray<class AActor*>* ActorsToPaint);
	void STATIC_LoadMeshPaintFromBytes(class UObject** WorldContextObject, TArray<unsigned char>* SaveData, bool* bFlushAllPaint);
};


// Class DonMeshPainting.DonSmartProjectileComponent
// 0x0030 (0x0230 - 0x0200)
class UDonSmartProjectileComponent : public UProjectileMovementComponent
{
public:
	TArray<struct FName>                               PaintPortalNames;                                         // 0x0200(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              PortalCollisionSafetyNet;                                 // 0x0210(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PortalTravelDuration;                                     // 0x0214(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0218(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonMeshPainting.DonSmartProjectileComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
