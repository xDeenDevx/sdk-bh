/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryCollectionTracks.

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSection
/// Size: 0x0030 (0x0000E8 - 0x000118)
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{ 
public:
	FMovieSceneGeometryCollectionParams                Params;                                                     // 0x00E8   (0x0030)  
};

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
/// Size: 0x0018 (0x000078 - 0x000090)
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0078   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        AnimationSections;                                          // 0x0080   (0x0010)  
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionParams
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneGeometryCollectionParams
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FSoftObjectPath                                    GeometryCollectionCache;                                    // 0x0008   (0x0018)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x0020   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0024   (0x0004)  
	float                                              PlayRate;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
/// Size: 0x0038 (0x000020 - 0x000058)
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                                 // 0x0020   (0x0038)  
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
/// Size: 0x0008 (0x000030 - 0x000038)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0030   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x0034   (0x0004)  
};

