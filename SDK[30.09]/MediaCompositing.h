/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MediaCompositing.

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{ 
public:
	UMediaSource*                                      MediaSource;                                                // 0x00E8   (0x0008)  
	bool                                               bLoop;                                                      // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
};

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertyTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MediaCompositing.MovieSceneMediaSection
/// Size: 0x0030 (0x0000E8 - 0x000118)
class UMovieSceneMediaSection : public UMovieSceneSection
{ 
public:
	UMediaSource*                                      MediaSource;                                                // 0x00E8   (0x0008)  
	bool                                               bLooping;                                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x00F4   (0x0004)  
	UMediaTexture*                                     MediaTexture;                                               // 0x00F8   (0x0008)  
	UMediaSoundComponent*                              MediaSoundComponent;                                        // 0x0100   (0x0008)  
	bool                                               bUseExternalMediaPlayer;                                    // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	UMediaPlayer*                                      ExternalMediaPlayer;                                        // 0x0110   (0x0008)  
};

/// Class /Script/MediaCompositing.MovieSceneMediaTrack
/// Size: 0x0018 (0x000078 - 0x000090)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0078   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        MediaSections;                                              // 0x0080   (0x0010)  
};

/// Struct /Script/MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
/// Size: 0x0010 (0x000038 - 0x000048)
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	UMediaSource*                                      MediaSource;                                                // 0x0038   (0x0008)  
	FFrameNumber                                       SectionStartFrame;                                          // 0x0040   (0x0004)  
	bool                                               bLoop;                                                      // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneMediaSectionParams                      Params;                                                     // 0x0020   (0x0030)  
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionParams
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneMediaSectionParams
{ 
	UMediaSoundComponent*                              MediaSoundComponent;                                        // 0x0000   (0x0008)  
	UMediaSource*                                      MediaSource;                                                // 0x0008   (0x0008)  
	UMediaTexture*                                     MediaTexture;                                               // 0x0010   (0x0008)  
	UMediaPlayer*                                      MediaPlayer;                                                // 0x0018   (0x0008)  
	FFrameNumber                                       SectionStartFrame;                                          // 0x0020   (0x0004)  
	FFrameNumber                                       SectionEndFrame;                                            // 0x0024   (0x0004)  
	bool                                               bLooping;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x002C   (0x0004)  
};

