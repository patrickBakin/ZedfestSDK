// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceSingleForObjects
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDonPaintTraceQuery     PaintPortalSetup               (Parm, OutParm, ReferenceParm)
// struct FVector*                Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool*                          bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshEffectsRaycastHelper::STATIC_DonSphereTraceSingleForObjects(class UObject** WorldContextObject, struct FVector* Start, struct FVector* End, float* Radius, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FDonPaintTraceQuery* PaintPortalSetup, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceSingleForObjects");

	UDonMeshEffectsRaycastHelper_DonSphereTraceSingleForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PaintPortalSetup != nullptr)
		*PaintPortalSetup = params.PaintPortalSetup;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceSingle
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDonPaintTraceQuery     PaintPortalSetup               (Parm, OutParm, ReferenceParm)
// struct FVector*                Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETraceTypeQuery>*  TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool*                          bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshEffectsRaycastHelper::STATIC_DonSphereTraceSingle(class UObject** WorldContextObject, struct FVector* Start, struct FVector* End, float* Radius, TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FDonPaintTraceQuery* PaintPortalSetup, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceSingle");

	UDonMeshEffectsRaycastHelper_DonSphereTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PaintPortalSetup != nullptr)
		*PaintPortalSetup = params.PaintPortalSetup;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceMultiForObjects
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDonPaintTraceQuery     PaintPortalSetup               (Parm, OutParm, ReferenceParm)
// struct FVector*                Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      OutHits                        (Parm, OutParm, ZeroConstructor)
// bool*                          bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshEffectsRaycastHelper::STATIC_DonSphereTraceMultiForObjects(class UObject** WorldContextObject, struct FVector* Start, struct FVector* End, float* Radius, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FDonPaintTraceQuery* PaintPortalSetup, TArray<struct FHitResult>* OutHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceMultiForObjects");

	UDonMeshEffectsRaycastHelper_DonSphereTraceMultiForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PaintPortalSetup != nullptr)
		*PaintPortalSetup = params.PaintPortalSetup;
	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceMulti
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDonPaintTraceQuery     PaintPortalSetup               (Parm, OutParm, ReferenceParm)
// struct FVector*                Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETraceTypeQuery>*  TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      OutHits                        (Parm, OutParm, ZeroConstructor)
// bool*                          bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshEffectsRaycastHelper::STATIC_DonSphereTraceMulti(class UObject** WorldContextObject, struct FVector* Start, struct FVector* End, float* Radius, TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FDonPaintTraceQuery* PaintPortalSetup, TArray<struct FHitResult>* OutHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonSphereTraceMulti");

	UDonMeshEffectsRaycastHelper_DonSphereTraceMulti_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PaintPortalSetup != nullptr)
		*PaintPortalSetup = params.PaintPortalSetup;
	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceSingleForObjects
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDonPaintTraceQuery*    PaintPortalSetup               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool*                          bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshEffectsRaycastHelper::STATIC_DonLineTraceSingleForObjects(class UObject** WorldContextObject, struct FDonPaintTraceQuery* PaintPortalSetup, struct FVector* Start, struct FVector* End, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceSingleForObjects");

	UDonMeshEffectsRaycastHelper_DonLineTraceSingleForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PaintPortalSetup = PaintPortalSetup;
	params.Start = Start;
	params.End = End;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceSingle
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDonPaintTraceQuery*    PaintPortalSetup               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETraceTypeQuery>*  TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool*                          bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshEffectsRaycastHelper::STATIC_DonLineTraceSingle(class UObject** WorldContextObject, struct FDonPaintTraceQuery* PaintPortalSetup, struct FVector* Start, struct FVector* End, TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceSingle");

	UDonMeshEffectsRaycastHelper_DonLineTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PaintPortalSetup = PaintPortalSetup;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceMultiForObjects
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDonPaintTraceQuery*    PaintPortalSetup               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      OutHits                        (Parm, OutParm, ZeroConstructor)
// bool*                          bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshEffectsRaycastHelper::STATIC_DonLineTraceMultiForObjects(class UObject** WorldContextObject, struct FDonPaintTraceQuery* PaintPortalSetup, struct FVector* Start, struct FVector* End, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, TArray<struct FHitResult>* OutHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceMultiForObjects");

	UDonMeshEffectsRaycastHelper_DonLineTraceMultiForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PaintPortalSetup = PaintPortalSetup;
	params.Start = Start;
	params.End = End;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceMulti
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDonPaintTraceQuery*    PaintPortalSetup               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETraceTypeQuery>*  TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      OutHits                        (Parm, OutParm, ZeroConstructor)
// bool*                          bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshEffectsRaycastHelper::STATIC_DonLineTraceMulti(class UObject** WorldContextObject, struct FDonPaintTraceQuery* PaintPortalSetup, struct FVector* Start, struct FVector* End, TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, TArray<struct FHitResult>* OutHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshEffectsRaycastHelper.DonLineTraceMulti");

	UDonMeshEffectsRaycastHelper_DonLineTraceMulti_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PaintPortalSetup = PaintPortalSetup;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshPainterComponent.OnRep_MeshStrokes
// (Final, Native, Private)

void UDonMeshPainterComponent::OnRep_MeshStrokes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPainterComponent.OnRep_MeshStrokes");

	UDonMeshPainterComponent_OnRep_MeshStrokes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonMeshPainting.DonMeshPainterGlobalActor.OnRep_ActivePainterComponents
// (Final, Native, Private)

void ADonMeshPainterGlobalActor::OnRep_ActivePainterComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPainterGlobalActor.OnRep_ActivePainterComponents");

	ADonMeshPainterGlobalActor_OnRep_ActivePainterComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonMeshPainting.DonMeshPainterGlobalActor.MultiCast_FlushAllPaint
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void ADonMeshPainterGlobalActor::MultiCast_FlushAllPaint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPainterGlobalActor.MultiCast_FlushAllPaint");

	ADonMeshPainterGlobalActor_MultiCast_FlushAllPaint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonMeshPainting.DonMeshPaintingHelper.QueryPaintCollisionMulti
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    Primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FDonPaintCollisionQuery>* CollisionTags                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FDonPaintCollisionQuery OutCollisionTag                (Parm, OutParm)
// struct FVector*                WorldLocation                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshPaintingHelper::STATIC_QueryPaintCollisionMulti(class UPrimitiveComponent** Primitive, TArray<struct FDonPaintCollisionQuery>* CollisionTags, struct FVector* WorldLocation, struct FDonPaintCollisionQuery* OutCollisionTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintingHelper.QueryPaintCollisionMulti");

	UDonMeshPaintingHelper_QueryPaintCollisionMulti_Params params;
	params.Primitive = Primitive;
	params.CollisionTags = CollisionTags;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCollisionTag != nullptr)
		*OutCollisionTag = params.OutCollisionTag;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshPaintingHelper.QueryPaintCollision
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    Primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  CollisionTag                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                WorldLocation                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinimumPaintBlobSize           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CollisionInflationScale        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CollisionInflationInAbsoluteUnits (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshPaintingHelper::STATIC_QueryPaintCollision(class UPrimitiveComponent** Primitive, struct FName* CollisionTag, struct FVector* WorldLocation, float* MinimumPaintBlobSize, float* CollisionInflationScale, float* CollisionInflationInAbsoluteUnits, int* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintingHelper.QueryPaintCollision");

	UDonMeshPaintingHelper_QueryPaintCollision_Params params;
	params.Primitive = Primitive;
	params.CollisionTag = CollisionTag;
	params.WorldLocation = WorldLocation;
	params.MinimumPaintBlobSize = MinimumPaintBlobSize;
	params.CollisionInflationScale = CollisionInflationScale;
	params.CollisionInflationInAbsoluteUnits = CollisionInflationInAbsoluteUnits;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshPaintingHelper.PaintWorldDirect
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                WorldLocation                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EDonUvAxes*                    WorldAxes                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BrushSize                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           BrushColor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             BrushDecalTexture              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEraseMode                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CollisionTag                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BrushOpacity                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BrushHardness                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           BrushDecalRotation             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     BrushRenderMaterial            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowDuplicateStrokes         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CollisionInflationScale        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPerformNetworkReplication     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshPaintingHelper::STATIC_PaintWorldDirect(class UObject** WorldContextObject, struct FVector* WorldLocation, EDonUvAxes* WorldAxes, float* BrushSize, struct FLinearColor* BrushColor, class UTexture2D** BrushDecalTexture, int* PaintLayer, bool* bEraseMode, struct FName* CollisionTag, float* BrushOpacity, float* BrushHardness, int* BrushDecalRotation, class UMaterialInterface** BrushRenderMaterial, bool* bAllowDuplicateStrokes, float* CollisionInflationScale, bool* bPerformNetworkReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintingHelper.PaintWorldDirect");

	UDonMeshPaintingHelper_PaintWorldDirect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WorldLocation = WorldLocation;
	params.WorldAxes = WorldAxes;
	params.BrushSize = BrushSize;
	params.BrushColor = BrushColor;
	params.BrushDecalTexture = BrushDecalTexture;
	params.PaintLayer = PaintLayer;
	params.bEraseMode = bEraseMode;
	params.CollisionTag = CollisionTag;
	params.BrushOpacity = BrushOpacity;
	params.BrushHardness = BrushHardness;
	params.BrushDecalRotation = BrushDecalRotation;
	params.BrushRenderMaterial = BrushRenderMaterial;
	params.bAllowDuplicateStrokes = bAllowDuplicateStrokes;
	params.CollisionInflationScale = CollisionInflationScale;
	params.bPerformNetworkReplication = bPerformNetworkReplication;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshPaintingHelper.PaintTextAtComponent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                RelativeLocation               (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm)
// struct FDonPaintableTextStyle* Style                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName*                  SocketName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDrawDebugLocation             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshPaintingHelper::STATIC_PaintTextAtComponent(class UPrimitiveComponent** PrimitiveComponent, struct FVector* RelativeLocation, struct FText* Text, struct FDonPaintableTextStyle* Style, struct FName* SocketName, struct FLinearColor* Color, int* Rotation, int* PaintLayer, bool* bDrawDebugLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintingHelper.PaintTextAtComponent");

	UDonMeshPaintingHelper_PaintTextAtComponent_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.RelativeLocation = RelativeLocation;
	params.Text = Text;
	params.Style = Style;
	params.SocketName = SocketName;
	params.Color = Color;
	params.Rotation = Rotation;
	params.PaintLayer = PaintLayer;
	params.bDrawDebugLocation = bDrawDebugLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshPaintingHelper.PaintText
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm)
// struct FDonPaintableTextStyle* Style                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinearColor*           Color                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshPaintingHelper::STATIC_PaintText(struct FHitResult* Hit, struct FText* Text, struct FDonPaintableTextStyle* Style, struct FLinearColor* Color, int* Rotation, int* PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintingHelper.PaintText");

	UDonMeshPaintingHelper_PaintText_Params params;
	params.Hit = Hit;
	params.Text = Text;
	params.Style = Style;
	params.Color = Color;
	params.Rotation = Rotation;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshPaintingHelper.PaintStrokeAtComponent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                RelativeLocation               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SocketName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BrushSize                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           BrushColor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             BrushDecalTexture              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEraseMode                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CollisionTag                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BrushOpacity                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BrushHardness                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           BrushDecalRotation             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     BrushRenderMaterial            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowDuplicateStrokes         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CollisionInflationScale        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDrawDebugLocation             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshPaintingHelper::STATIC_PaintStrokeAtComponent(class UPrimitiveComponent** PrimitiveComponent, struct FVector* RelativeLocation, struct FName* SocketName, float* BrushSize, struct FLinearColor* BrushColor, class UTexture2D** BrushDecalTexture, int* PaintLayer, bool* bEraseMode, struct FName* CollisionTag, float* BrushOpacity, float* BrushHardness, int* BrushDecalRotation, class UMaterialInterface** BrushRenderMaterial, bool* bAllowDuplicateStrokes, float* CollisionInflationScale, bool* bDrawDebugLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintingHelper.PaintStrokeAtComponent");

	UDonMeshPaintingHelper_PaintStrokeAtComponent_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.RelativeLocation = RelativeLocation;
	params.SocketName = SocketName;
	params.BrushSize = BrushSize;
	params.BrushColor = BrushColor;
	params.BrushDecalTexture = BrushDecalTexture;
	params.PaintLayer = PaintLayer;
	params.bEraseMode = bEraseMode;
	params.CollisionTag = CollisionTag;
	params.BrushOpacity = BrushOpacity;
	params.BrushHardness = BrushHardness;
	params.BrushDecalRotation = BrushDecalRotation;
	params.BrushRenderMaterial = BrushRenderMaterial;
	params.bAllowDuplicateStrokes = bAllowDuplicateStrokes;
	params.CollisionInflationScale = CollisionInflationScale;
	params.bDrawDebugLocation = bDrawDebugLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshPaintingHelper.PaintStroke
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         BrushSize                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           BrushColor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             BrushDecalTexture              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEraseMode                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CollisionTag                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BrushOpacity                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BrushHardness                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           BrushDecalRotation             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     BrushRenderMaterial            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowDuplicateStrokes         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CollisionInflationScale        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDonMeshPaintingHelper::STATIC_PaintStroke(struct FHitResult* Hit, float* BrushSize, struct FLinearColor* BrushColor, class UTexture2D** BrushDecalTexture, int* PaintLayer, bool* bEraseMode, struct FName* CollisionTag, float* BrushOpacity, float* BrushHardness, int* BrushDecalRotation, class UMaterialInterface** BrushRenderMaterial, bool* bAllowDuplicateStrokes, float* CollisionInflationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintingHelper.PaintStroke");

	UDonMeshPaintingHelper_PaintStroke_Params params;
	params.Hit = Hit;
	params.BrushSize = BrushSize;
	params.BrushColor = BrushColor;
	params.BrushDecalTexture = BrushDecalTexture;
	params.PaintLayer = PaintLayer;
	params.bEraseMode = bEraseMode;
	params.CollisionTag = CollisionTag;
	params.BrushOpacity = BrushOpacity;
	params.BrushHardness = BrushHardness;
	params.BrushDecalRotation = BrushDecalRotation;
	params.BrushRenderMaterial = BrushRenderMaterial;
	params.bAllowDuplicateStrokes = bAllowDuplicateStrokes;
	params.CollisionInflationScale = CollisionInflationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshPaintingHelper.GameSaveDirectory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UDonMeshPaintingHelper::STATIC_GameSaveDirectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintingHelper.GameSaveDirectory");

	UDonMeshPaintingHelper_GameSaveDirectory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshPaintingHelper.FlushPaintForActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInterface*>* MaterialsFilter                (Parm, ZeroConstructor)

void UDonMeshPaintingHelper::STATIC_FlushPaintForActor(class AActor** Actor, TArray<class UMaterialInterface*>* MaterialsFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintingHelper.FlushPaintForActor");

	UDonMeshPaintingHelper_FlushPaintForActor_Params params;
	params.Actor = Actor;
	params.MaterialsFilter = MaterialsFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonMeshPainting.DonMeshPaintingHelper.FlushAllPaint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UDonMeshPaintingHelper::STATIC_FlushAllPaint(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintingHelper.FlushAllPaint");

	UDonMeshPaintingHelper_FlushAllPaint_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonMeshPainting.DonMeshPaintingHelper.DonExportPaintMasks
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                PaintableEntity                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                AbsoluteDirectoryPath          (ConstParm, Parm, ZeroConstructor)

void UDonMeshPaintingHelper::STATIC_DonExportPaintMasks(class UObject** PaintableEntity, struct FString* AbsoluteDirectoryPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintingHelper.DonExportPaintMasks");

	UDonMeshPaintingHelper_DonExportPaintMasks_Params params;
	params.PaintableEntity = PaintableEntity;
	params.AbsoluteDirectoryPath = AbsoluteDirectoryPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonMeshPainting.DonMeshPaintSaveLoadHelper.SaveMeshPaintAsBytes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorFilters                   (Parm, ZeroConstructor)
// bool*                          bNeedsBakedTexturesForSkinnedMeshes (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UDonMeshPaintSaveLoadHelper::STATIC_SaveMeshPaintAsBytes(class UObject** WorldContextObject, TArray<class AActor*>* ActorFilters, bool* bNeedsBakedTexturesForSkinnedMeshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintSaveLoadHelper.SaveMeshPaintAsBytes");

	UDonMeshPaintSaveLoadHelper_SaveMeshPaintAsBytes_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorFilters = ActorFilters;
	params.bNeedsBakedTexturesForSkinnedMeshes = bNeedsBakedTexturesForSkinnedMeshes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonMeshPainting.DonMeshPaintSaveLoadHelper.LoadMeshPaintOntoMultipleActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>*         SaveData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>*         ActorsToPaint                  (Parm, ZeroConstructor)

void UDonMeshPaintSaveLoadHelper::STATIC_LoadMeshPaintOntoMultipleActors(class UObject** WorldContextObject, TArray<unsigned char>* SaveData, TArray<class AActor*>* ActorsToPaint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintSaveLoadHelper.LoadMeshPaintOntoMultipleActors");

	UDonMeshPaintSaveLoadHelper_LoadMeshPaintOntoMultipleActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SaveData = SaveData;
	params.ActorsToPaint = ActorsToPaint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonMeshPainting.DonMeshPaintSaveLoadHelper.LoadMeshPaintFromBytes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>*         SaveData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bFlushAllPaint                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDonMeshPaintSaveLoadHelper::STATIC_LoadMeshPaintFromBytes(class UObject** WorldContextObject, TArray<unsigned char>* SaveData, bool* bFlushAllPaint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonMeshPainting.DonMeshPaintSaveLoadHelper.LoadMeshPaintFromBytes");

	UDonMeshPaintSaveLoadHelper_LoadMeshPaintFromBytes_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SaveData = SaveData;
	params.bFlushAllPaint = bFlushAllPaint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
