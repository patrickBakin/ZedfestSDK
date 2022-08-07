#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceSingleForObjects
struct UDonMeshEffectsRaycastHelper_DonSphereTraceSingleForObjects_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDonPaintTraceQuery                         PaintPortalSetup;                                         // (Parm, OutParm, ReferenceParm)
	struct FVector*                                    Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>*             ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceSingle
struct UDonMeshEffectsRaycastHelper_DonSphereTraceSingle_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDonPaintTraceQuery                         PaintPortalSetup;                                         // (Parm, OutParm, ReferenceParm)
	struct FVector*                                    Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceMultiForObjects
struct UDonMeshEffectsRaycastHelper_DonSphereTraceMultiForObjects_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDonPaintTraceQuery                         PaintPortalSetup;                                         // (Parm, OutParm, ReferenceParm)
	struct FVector*                                    Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>*             ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceMulti
struct UDonMeshEffectsRaycastHelper_DonSphereTraceMulti_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDonPaintTraceQuery                         PaintPortalSetup;                                         // (Parm, OutParm, ReferenceParm)
	struct FVector*                                    Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceSingleForObjects
struct UDonMeshEffectsRaycastHelper_DonLineTraceSingleForObjects_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDonPaintTraceQuery*                        PaintPortalSetup;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>*             ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceSingle
struct UDonMeshEffectsRaycastHelper_DonLineTraceSingle_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDonPaintTraceQuery*                        PaintPortalSetup;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceMultiForObjects
struct UDonMeshEffectsRaycastHelper_DonLineTraceMultiForObjects_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDonPaintTraceQuery*                        PaintPortalSetup;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>*             ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceMulti
struct UDonMeshEffectsRaycastHelper_DonLineTraceMulti_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDonPaintTraceQuery*                        PaintPortalSetup;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshPainterComponent.OnRep_MeshStrokes
struct UDonMeshPainterComponent_OnRep_MeshStrokes_Params
{
};

// Function DonMeshPainting.DonMeshPainterGlobalActor.OnRep_ActivePainterComponents
struct ADonMeshPainterGlobalActor_OnRep_ActivePainterComponents_Params
{
};

// Function DonMeshPainting.DonMeshPainterGlobalActor.MultiCast_FlushAllPaint
struct ADonMeshPainterGlobalActor_MultiCast_FlushAllPaint_Params
{
};

// Function DonMeshPainting.DonMeshPaintingHelper.QueryPaintCollisionMulti
struct UDonMeshPaintingHelper_QueryPaintCollisionMulti_Params
{
	class UPrimitiveComponent**                        Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FDonPaintCollisionQuery>*            CollisionTags;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FDonPaintCollisionQuery                     OutCollisionTag;                                          // (Parm, OutParm)
	struct FVector*                                    WorldLocation;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshPaintingHelper.QueryPaintCollision
struct UDonMeshPaintingHelper_QueryPaintCollision_Params
{
	class UPrimitiveComponent**                        Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      CollisionTag;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    WorldLocation;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MinimumPaintBlobSize;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CollisionInflationScale;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CollisionInflationInAbsoluteUnits;                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshPaintingHelper.PaintWorldDirect
struct UDonMeshPaintingHelper_PaintWorldDirect_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    WorldLocation;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EDonUvAxes*                                        WorldAxes;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               BrushColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 BrushDecalTexture;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEraseMode;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CollisionTag;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BrushOpacity;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BrushHardness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BrushDecalRotation;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         BrushRenderMaterial;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowDuplicateStrokes;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CollisionInflationScale;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPerformNetworkReplication;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshPaintingHelper.PaintTextAtComponent
struct UDonMeshPaintingHelper_PaintTextAtComponent_Params
{
	class UPrimitiveComponent**                        PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    RelativeLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm)
	struct FDonPaintableTextStyle*                     Style;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName*                                      SocketName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDrawDebugLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshPaintingHelper.PaintText
struct UDonMeshPaintingHelper_PaintText_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm)
	struct FDonPaintableTextStyle*                     Style;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshPaintingHelper.PaintStrokeAtComponent
struct UDonMeshPaintingHelper_PaintStrokeAtComponent_Params
{
	class UPrimitiveComponent**                        PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    RelativeLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               BrushColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 BrushDecalTexture;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEraseMode;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CollisionTag;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BrushOpacity;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BrushHardness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BrushDecalRotation;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         BrushRenderMaterial;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowDuplicateStrokes;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CollisionInflationScale;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDrawDebugLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshPaintingHelper.PaintStroke
struct UDonMeshPaintingHelper_PaintStroke_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               BrushColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 BrushDecalTexture;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEraseMode;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CollisionTag;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BrushOpacity;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BrushHardness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BrushDecalRotation;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         BrushRenderMaterial;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowDuplicateStrokes;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CollisionInflationScale;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshPaintingHelper.GameSaveDirectory
struct UDonMeshPaintingHelper_GameSaveDirectory_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DonMeshPainting.DonMeshPaintingHelper.FlushPaintForActor
struct UDonMeshPaintingHelper_FlushPaintForActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>*                 MaterialsFilter;                                          // (Parm, ZeroConstructor)
};

// Function DonMeshPainting.DonMeshPaintingHelper.FlushAllPaint
struct UDonMeshPaintingHelper_FlushAllPaint_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonMeshPainting.DonMeshPaintingHelper.DonExportPaintMasks
struct UDonMeshPaintingHelper_DonExportPaintMasks_Params
{
	class UObject**                                    PaintableEntity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    AbsoluteDirectoryPath;                                    // (ConstParm, Parm, ZeroConstructor)
};

// Function DonMeshPainting.DonMeshPaintSaveLoadHelper.SaveMeshPaintAsBytes
struct UDonMeshPaintSaveLoadHelper_SaveMeshPaintAsBytes_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorFilters;                                             // (Parm, ZeroConstructor)
	bool*                                              bNeedsBakedTexturesForSkinnedMeshes;                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DonMeshPainting.DonMeshPaintSaveLoadHelper.LoadMeshPaintOntoMultipleActors
struct UDonMeshPaintSaveLoadHelper_LoadMeshPaintOntoMultipleActors_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>*                             SaveData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>*                             ActorsToPaint;                                            // (Parm, ZeroConstructor)
};

// Function DonMeshPainting.DonMeshPaintSaveLoadHelper.LoadMeshPaintFromBytes
struct UDonMeshPaintSaveLoadHelper_LoadMeshPaintFromBytes_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>*                             SaveData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bFlushAllPaint;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
