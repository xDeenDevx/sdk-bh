/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MediaAssets.

/// Class /Script/MediaAssets.MediaSource
/// Size: 0x0058 (0x000028 - 0x000080)
class UMediaSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/MediaAssets.BaseMediaSource
/// Size: 0x0008 (0x000080 - 0x000088)
class UBaseMediaSource : public UMediaSource
{ 
public:
	FName                                              PlayerName;                                                 // 0x0080   (0x0008)  
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UFileMediaSource : public UBaseMediaSource
{ 
public:
	FString                                            FilePath;                                                   // 0x0088   (0x0010)  
	bool                                               PrecacheFile;                                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0099   (0x0017)  MISSED


	/// Functions
	// Function /Script/MediaAssets.FileMediaSource.SetFilePath
	void SetFilePath(FString Path);                                                                                          // [0x2b426e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMediaComponent : public UActorComponent
{ 
public:
	UMediaTexture*                                     MediaTexture;                                               // 0x00B0   (0x0008)  
	UMediaPlayer*                                      MediaPlayer;                                                // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/MediaAssets.MediaComponent.GetMediaTexture
	UMediaTexture* GetMediaTexture();                                                                                        // [0x24d3f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaComponent.GetMediaPlayer
	UMediaPlayer* GetMediaPlayer();                                                                                          // [0x15701a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaTimeStampInfo : public UObject
{ 
public:
	FTimespan                                          Time;                                                       // 0x0028   (0x0008)  
	int64_t                                            SequenceIndex;                                              // 0x0030   (0x0008)  
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0110 (0x000028 - 0x000138)
class UMediaPlayer : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnEndReached;                                               // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnMediaClosed;                                              // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnMediaOpened;                                              // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnMediaOpenFailed;                                          // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnPlaybackResumed;                                          // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           OnPlaybackSuspended;                                        // 0x0078   (0x0010)  
	FMulticastInlineDelegate                           OnSeekCompleted;                                            // 0x0088   (0x0010)  
	FMulticastInlineDelegate                           OnTracksChanged;                                            // 0x0098   (0x0010)  
	FTimespan                                          CacheAhead;                                                 // 0x00A8   (0x0008)  
	FTimespan                                          CacheBehind;                                                // 0x00B0   (0x0008)  
	FTimespan                                          CacheBehindGame;                                            // 0x00B8   (0x0008)  
	bool                                               NativeAudioOut;                                             // 0x00C0   (0x0001)  
	bool                                               PlayOnOpen;                                                 // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00C2   (0x0002)  MISSED
	bool                                               Shuffle;                                                    // 0x00C4:0 (0x0001)  
	bool                                               Loop;                                                       // 0x00C4:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00C5   (0x0003)  MISSED
	UMediaPlaylist*                                    Playlist;                                                   // 0x00C8   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FTimespan                                          TimeDelay;                                                  // 0x00D8   (0x0008)  
	float                                              HorizontalFieldOfView;                                      // 0x00E0   (0x0004)  
	float                                              VerticalFieldOfView;                                        // 0x00E4   (0x0004)  
	FRotator                                           ViewRotation;                                               // 0x00E8   (0x000C)  
	unsigned char                                      UnknownData03_5[0x2C];                                      // 0x00F4   (0x002C)  MISSED
	FGuid                                              PlayerGuid;                                                 // 0x0120   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0130   (0x0008)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaPlayer.SupportsSeeking
	bool SupportsSeeking();                                                                                                  // [0x2b43550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing
	bool SupportsScrubbing();                                                                                                // [0x2b43520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsRate
	bool SupportsRate(float Rate, bool Unthinned);                                                                           // [0x2b43450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SetViewRotation
	bool SetViewRotation(FRotator& Rotation, bool Absolute);                                                                 // [0x2b43370] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetViewField
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);                                                      // [0x2b43250] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);                                   // [0x2b43140] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTrackFormat
	bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);                               // [0x2b43030] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTimeDelay
	void SetTimeDelay(FTimespan TimeDelay);                                                                                  // [0x2b42fb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetRate
	bool SetRate(float Rate);                                                                                                // [0x2b42df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetNativeVolume
	bool SetNativeVolume(float Volume);                                                                                      // [0x2b42d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetMediaOptions
	void SetMediaOptions(UMediaSource* Options);                                                                             // [0x2b42bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetLooping
	bool SetLooping(bool Looping);                                                                                           // [0x2b42780] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName
	void SetDesiredPlayerName(FName PlayerName);                                                                             // [0x2b42460] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime
	void SetBlockOnTime(FTimespan& Time);                                                                                    // [0x2b423d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SelectTrack
	bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                       // [0x2b42300] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Seek
	bool Seek(FTimespan& Time);                                                                                              // [0x2b42260] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Rewind
	bool Rewind();                                                                                                           // [0x2b42230] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Reopen
	bool Reopen();                                                                                                           // [0x2b42130] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Previous
	bool Previous();                                                                                                         // [0x2b41fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.PlayAndSeek
	void PlayAndSeek();                                                                                                      // [0x2b41fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Play
	bool Play();                                                                                                             // [0x2b41f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Pause
	bool Pause();                                                                                                            // [0x2b41f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenUrl
	bool OpenUrl(FString URL);                                                                                               // [0x2b41e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions
	bool OpenSourceWithOptions(UMediaSource* MediaSource, FMediaPlayerOptions& Options);                                     // [0x2b41d80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent
	void OpenSourceLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, FMediaPlayerOptions& Options, bool& bSuccess); // [0x2b41b90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSource
	bool OpenSource(UMediaSource* MediaSource);                                                                              // [0x2b41af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex
	bool OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32_t Index);                                                       // [0x2b41a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylist
	bool OpenPlaylist(UMediaPlaylist* InPlaylist);                                                                           // [0x2b41980] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenFile
	bool OpenFile(FString FilePath);                                                                                         // [0x2b418d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Next
	bool Next();                                                                                                             // [0x2b41880] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.IsReady
	bool IsReady();                                                                                                          // [0x2b41850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPreparing
	bool IsPreparing();                                                                                                      // [0x2b41820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPlaying
	bool IsPlaying();                                                                                                        // [0x2b417f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPaused
	bool IsPaused();                                                                                                         // [0x2b417c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsLooping
	bool IsLooping();                                                                                                        // [0x2b41790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsConnecting
	bool IsConnecting();                                                                                                     // [0x2b41760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsClosed
	bool IsClosed();                                                                                                         // [0x2b41730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsBuffering
	bool IsBuffering();                                                                                                      // [0x2b41700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.HasError
	bool HasError();                                                                                                         // [0x2b41600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetViewRotation
	FRotator GetViewRotation();                                                                                              // [0x2b41590] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType
	FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x2b41480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);                                            // [0x2b413b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);                                                   // [0x2b412e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions
	FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);                                              // [0x2b41200] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);                                                 // [0x2b41130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView
	float GetVerticalFieldOfView();                                                                                          // [0x2b41100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetUrl
	FString GetUrl();                                                                                                        // [0x2b41040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage
	FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                               // [0x2b40f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackFormat
	int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                 // [0x2b40e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackDisplayName
	FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                              // [0x2b40d30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeStamp
	UMediaTimeStampInfo* GetTimeStamp();                                                                                     // [0x2b40d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeDelay
	FTimespan GetTimeDelay();                                                                                                // [0x2b40cc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTime
	FTimespan GetTime();                                                                                                     // [0x2b40c80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSupportedRates
	void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);                                                   // [0x2b40b80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack
	int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);                                                                   // [0x2b40a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetRate
	float GetRate();                                                                                                         // [0x2b40a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex
	int32_t GetPlaylistIndex();                                                                                              // [0x15d3df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylist
	UMediaPlaylist* GetPlaylist();                                                                                           // [0x152e9f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlayerName
	FName GetPlayerName();                                                                                                   // [0x2b408c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTracks
	int32_t GetNumTracks(EMediaPlayerTrack TrackType);                                                                       // [0x2b40830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats
	int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                             // [0x2b40760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaName
	FText GetMediaName();                                                                                                    // [0x2b40540] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	float GetHorizontalFieldOfView();                                                                                        // [0x2b40510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDuration
	FTimespan GetDuration();                                                                                                 // [0x2b40470] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName
	FName GetDesiredPlayerName();                                                                                            // [0x2b40430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType
	FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x2b40320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);                                                // [0x2b40250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);                                                  // [0x2b40180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.Close
	void Close();                                                                                                            // [0x2b3fca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlayUrl
	bool CanPlayUrl(FString URL);                                                                                            // [0x2b3fbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlaySource
	bool CanPlaySource(UMediaSource* MediaSource);                                                                           // [0x2b3fb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPause
	bool CanPause();                                                                                                         // [0x2b3fb20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaPlaylist
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaPlaylist : public UObject
{ 
public:
	TArray<UMediaSource*>                              Items;                                                      // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/MediaAssets.MediaPlaylist.Replace
	bool Replace(int32_t Index, UMediaSource* Replacement);                                                                  // [0x2b42160] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.RemoveAt
	bool RemoveAt(int32_t Index);                                                                                            // [0x2b42090] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Remove
	bool Remove(UMediaSource* MediaSource);                                                                                  // [0x2b41ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Num
	int32_t Num();                                                                                                           // [0x2b418b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Insert
	void Insert(UMediaSource* MediaSource, int32_t Index);                                                                   // [0x2b41630] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetRandom
	UMediaSource* GetRandom(int32_t& OutIndex);                                                                              // [0x2b409a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetPrevious
	UMediaSource* GetPrevious(int32_t& InOutIndex);                                                                          // [0x2b40900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetNext
	UMediaSource* GetNext(int32_t& InOutIndex);                                                                              // [0x2b40640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Get
	UMediaSource* Get(int32_t Index);                                                                                        // [0x2b400b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddUrl
	bool AddUrl(FString URL);                                                                                                // [0x2b3f820] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddFile
	bool AddFile(FString FilePath);                                                                                          // [0x2b3f770] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Add
	bool Add(UMediaSource* MediaSource);                                                                                     // [0x2b3f6d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x0220 (0x0006C0 - 0x0008E0)
class UMediaSoundComponent : public USynthComponent
{ 
public:
	EMediaSoundChannels                                Channels;                                                   // 0x06C0   (0x0004)  
	bool                                               DynamicRateAdjustment;                                      // 0x06C4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06C5   (0x0003)  MISSED
	float                                              RateAdjustmentFactor;                                       // 0x06C8   (0x0004)  
	FFloatRange                                        RateAdjustmentRange;                                        // 0x06CC   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x06DC   (0x0004)  MISSED
	UMediaPlayer*                                      MediaPlayer;                                                // 0x06E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x1F8];                                     // 0x06E8   (0x01F8)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);           // [0x2b42e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer
	void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);                                                                       // [0x2b42c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);                                      // [0x2b42610] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);                                                         // [0x2b42580] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);                                                              // [0x2b424f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData
	TArray<FMediaSoundComponentSpectralData> GetSpectralData();                                                              // [0x2b40b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();                                                    // [0x2b406e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer
	UMediaPlayer* GetMediaPlayer();                                                                                          // [0x2b405e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue
	float GetEnvelopeValue();                                                                                                // [0x2b404b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);                                // [0x2b3f8d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaTexture
/// Size: 0x00D8 (0x0000E8 - 0x0001C0)
class UMediaTexture : public UTexture
{ 
public:
	TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x00E8   (0x0001)  
	TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x00E9   (0x0001)  
	bool                                               AutoClear;                                                  // 0x00EA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x00EB   (0x0001)  MISSED
	FLinearColor                                       ClearColor;                                                 // 0x00EC   (0x0010)  
	bool                                               EnableGenMips;                                              // 0x00FC   (0x0001)  
	char                                               NumMips;                                                    // 0x00FD   (0x0001)  
	bool                                               NewStyleOutput;                                             // 0x00FE   (0x0001)  
	TEnumAsByte<MediaTextureOutputFormat>              OutputFormat;                                               // 0x00FF   (0x0001)  
	float                                              CurrentAspectRatio;                                         // 0x0100   (0x0004)  
	TEnumAsByte<MediaTextureOrientation>               CurrentOrientation;                                         // 0x0104   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	UMediaPlayer*                                      MediaPlayer;                                                // 0x0108   (0x0008)  
	unsigned char                                      UnknownData02_6[0xB0];                                      // 0x0110   (0x00B0)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaTexture.SetMediaPlayer
	void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);                                                                       // [0x2b42cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.GetWidth
	int32_t GetWidth();                                                                                                      // [0x2b415d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetMediaPlayer
	UMediaPlayer* GetMediaPlayer();                                                                                          // [0x2b40610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetHeight
	int32_t GetHeight();                                                                                                     // [0x2b404e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetAspectRatio
	float GetAspectRatio();                                                                                                  // [0x2b40150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0008 (0x000080 - 0x000088)
class UPlatformMediaSource : public UMediaSource
{ 
public:
	UMediaSource*                                      MediaSource;                                                // 0x0080   (0x0008)  
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0010 (0x000088 - 0x000098)
class UStreamMediaSource : public UBaseMediaSource
{ 
public:
	FString                                            StreamUrl;                                                  // 0x0088   (0x0010)  
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x0010 (0x000088 - 0x000098)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               bUseTimeSynchronization;                                    // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            FrameDelay;                                                 // 0x008C   (0x0004)  
	double                                             TimeDelay;                                                  // 0x0090   (0x0008)  
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMediaCaptureDevice
{ 
	FText                                              DISPLAYNAME;                                                // 0x0000   (0x0018)  
	FString                                            URL;                                                        // 0x0018   (0x0010)  
};

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMediaSoundComponentSpectralData
{ 
	float                                              FrequencyHz;                                                // 0x0000   (0x0004)  
	float                                              Magnitude;                                                  // 0x0004   (0x0004)  
};

/// Enum /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
/// Size: 0x06
enum EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None                                            = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor                                     = 1,
	EMediaWebcamCaptureDeviceFilter__Front                                           = 2,
	EMediaWebcamCaptureDeviceFilter__Rear                                            = 4,
	EMediaWebcamCaptureDeviceFilter__Unknown                                         = 8,
	EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX             = 9
};

/// Enum /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
/// Size: 0x06
enum EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None                                             = 0,
	EMediaVideoCaptureDeviceFilter__Card                                             = 1,
	EMediaVideoCaptureDeviceFilter__Software                                         = 2,
	EMediaVideoCaptureDeviceFilter__Unknown                                          = 4,
	EMediaVideoCaptureDeviceFilter__Webcam                                           = 8,
	EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX               = 9
};

/// Enum /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
/// Size: 0x06
enum EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None                                             = 0,
	EMediaAudioCaptureDeviceFilter__Card                                             = 1,
	EMediaAudioCaptureDeviceFilter__Microphone                                       = 2,
	EMediaAudioCaptureDeviceFilter__Software                                         = 4,
	EMediaAudioCaptureDeviceFilter__Unknown                                          = 8,
	EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX               = 9
};

/// Enum /Script/MediaAssets.EMediaPlayerTrack
/// Size: 0x08
enum EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio                                                         = 0,
	EMediaPlayerTrack__Caption                                                       = 1,
	EMediaPlayerTrack__Metadata                                                      = 2,
	EMediaPlayerTrack__Script                                                        = 3,
	EMediaPlayerTrack__Subtitle                                                      = 4,
	EMediaPlayerTrack__Text                                                          = 5,
	EMediaPlayerTrack__Video                                                         = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX                                         = 7
};

/// Enum /Script/MediaAssets.EMediaSoundComponentFFTSize
/// Size: 0x05
enum EMediaSoundComponentFFTSize : uint8_t
{
	EMediaSoundComponentFFTSize__Min                                                 = 0,
	EMediaSoundComponentFFTSize__Small                                               = 1,
	EMediaSoundComponentFFTSize__Medium                                              = 2,
	EMediaSoundComponentFFTSize__Large                                               = 3,
	EMediaSoundComponentFFTSize__EMediaSoundComponentFFTSize_MAX                     = 4
};

/// Enum /Script/MediaAssets.EMediaSoundChannels
/// Size: 0x04
enum EMediaSoundChannels : uint8_t
{
	EMediaSoundChannels__Mono                                                        = 0,
	EMediaSoundChannels__Stereo                                                      = 1,
	EMediaSoundChannels__Surround                                                    = 2,
	EMediaSoundChannels__EMediaSoundChannels_MAX                                     = 3
};

/// Enum /Script/MediaAssets.MediaTextureOrientation
/// Size: 0x05
enum MediaTextureOrientation : uint8_t
{
	MTORI_Original                                                                   = 0,
	MTORI_CW90                                                                       = 1,
	MTORI_CW180                                                                      = 2,
	MTORI_CW270                                                                      = 3,
	MTORI_MAX                                                                        = 4
};

/// Enum /Script/MediaAssets.MediaTextureOutputFormat
/// Size: 0x03
enum MediaTextureOutputFormat : uint8_t
{
	MTOF_Default                                                                     = 0,
	MTOF_SRGB_LINOUT                                                                 = 1,
	MTOF_MAX                                                                         = 2
};

