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
//Classes
//---------------------------------------------------------------------------

// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// 0x0038 (0x0118 - 0x00E0)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCacheParams              Params;                                                   // 0x00E0(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheSection");
		return ptr;
	}

};


// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                        // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
