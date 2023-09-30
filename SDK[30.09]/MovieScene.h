/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MovieScene.

/// Class /Script/MovieScene.MovieSceneSignedObject
/// Size: 0x0028 (0x000028 - 0x000050)
class UMovieSceneSignedObject : public UObject
{ 
public:
	FGuid                                              Signature;                                                  // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSection
/// Size: 0x0098 (0x000050 - 0x0000E8)
class UMovieSceneSection : public UMovieSceneSignedObject
{ 
public:
	FMovieSceneSectionEvalOptions                      EvalOptions;                                                // 0x0050   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	FMovieSceneEasingSettings                          Easing;                                                     // 0x0058   (0x0038)  
	FMovieSceneFrameRange                              SectionRange;                                               // 0x0090   (0x0010)  
	FFrameNumber                                       PreRollFrames;                                              // 0x00A0   (0x0004)  
	FFrameNumber                                       PostRollFrames;                                             // 0x00A4   (0x0004)  
	int32_t                                            RowIndex;                                                   // 0x00A8   (0x0004)  
	int32_t                                            OverlapPriority;                                            // 0x00AC   (0x0004)  
	bool                                               bIsActive;                                                  // 0x00B0:0 (0x0001)  
	bool                                               bIsLocked;                                                  // 0x00B0:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              StartTime;                                                  // 0x00B4   (0x0004)  
	float                                              EndTime;                                                    // 0x00B8   (0x0004)  
	float                                              PrerollTime;                                                // 0x00BC   (0x0004)  
	float                                              PostrollTime;                                               // 0x00C0   (0x0004)  
	bool                                               bIsInfinite;                                                // 0x00C4:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x00C5   (0x0003)  MISSED
	bool                                               bSupportsInfiniteRange;                                     // 0x00C8   (0x0001)  
	FOptionalMovieSceneBlendType                       BlendType;                                                  // 0x00C9   (0x0002)  
	unsigned char                                      UnknownData03_6[0x1D];                                      // 0x00CB   (0x001D)  MISSED


	/// Functions
	// Function /Script/MovieScene.MovieSceneSection.SetRowIndex
	void SetRowIndex(int32_t NewRowIndex);                                                                                   // [0x27daf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetPreRollFrames
	void SetPreRollFrames(int32_t InPreRollFrames);                                                                          // [0x27dae70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetPostRollFrames
	void SetPostRollFrames(int32_t InPostRollFrames);                                                                        // [0x27dade0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetOverlapPriority
	void SetOverlapPriority(int32_t NewPriority);                                                                            // [0x27dac30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetIsLocked
	void SetIsLocked(bool bInIsLocked);                                                                                      // [0x27daba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetIsActive
	void SetIsActive(bool bInIsActive);                                                                                      // [0x27dab10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetCompletionMode
	void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);                                                      // [0x27da860] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetBlendType
	void SetBlendType(EMovieSceneBlendType InBlendType);                                                                     // [0x27da7e0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.IsLocked
	bool IsLocked();                                                                                                         // [0x27d9c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.IsActive
	bool IsActive();                                                                                                         // [0x27d9bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetRowIndex
	int32_t GetRowIndex();                                                                                                   // [0xfaa010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetPreRollFrames
	int32_t GetPreRollFrames();                                                                                              // [0x27d9b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetPostRollFrames
	int32_t GetPostRollFrames();                                                                                             // [0x27d9b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetOverlapPriority
	int32_t GetOverlapPriority();                                                                                            // [0x27d9b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetCompletionMode
	EMovieSceneCompletionMode GetCompletionMode();                                                                           // [0x27d98c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetBlendType
	FOptionalMovieSceneBlendType GetBlendType();                                                                             // [0x27d9780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieScene.MovieSceneTrack
/// Size: 0x0028 (0x000050 - 0x000078)
class UMovieSceneTrack : public UMovieSceneSignedObject
{ 
public:
	FMovieSceneTrackEvalOptions                        EvalOptions;                                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0054   (0x0001)  MISSED
	bool                                               bIsEvalDisabled;                                            // 0x0055   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0056   (0x0002)  MISSED
	FGuid                                              EvaluationFieldGuid;                                        // 0x0058   (0x0010)  
	FMovieSceneTrackEvaluationField                    EvaluationField;                                            // 0x0068   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneNameableTrack
/// Size: 0x0000 (0x000078 - 0x000078)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSequence
/// Size: 0x0010 (0x000050 - 0x000060)
class UMovieSceneSequence : public UMovieSceneSignedObject
{ 
public:
	UMovieSceneCompiledData*                           CompiledData;                                               // 0x0050   (0x0008)  
	EMovieSceneCompletionMode                          DefaultCompletionMode;                                      // 0x0058   (0x0001)  
	bool                                               bParentContextsAreSignificant;                              // 0x0059   (0x0001)  
	bool                                               bPlayableDirectly;                                          // 0x005A   (0x0001)  
	EMovieSceneSequenceFlags                           SequenceFlags;                                              // 0x005B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MovieScene.MovieSceneSequence.FindBindingsByTag
	TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);                                               // [0x27d96a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequence.FindBindingByTag
	FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName);                                                        // [0x27d95f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieScene.MovieSceneSequencePlayer
/// Size: 0x0658 (0x000028 - 0x000680)
class UMovieSceneSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x3E8];                                     // 0x0028   (0x03E8)  MISSED
	FMulticastInlineDelegate                           OnPlay;                                                     // 0x0410   (0x0010)  
	FMulticastInlineDelegate                           OnPlayReverse;                                              // 0x0420   (0x0010)  
	FMulticastInlineDelegate                           OnStop;                                                     // 0x0430   (0x0010)  
	FMulticastInlineDelegate                           OnPause;                                                    // 0x0440   (0x0010)  
	FMulticastInlineDelegate                           OnFinished;                                                 // 0x0450   (0x0010)  
	TEnumAsByte<EMovieScenePlayerStatus>               Status;                                                     // 0x0460   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0461   (0x0003)  MISSED
	bool                                               bReversePlayback;                                           // 0x0464:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0465   (0x0003)  MISSED
	UMovieSceneSequence*                               Sequence;                                                   // 0x0468   (0x0008)  
	FFrameNumber                                       StartTime;                                                  // 0x0470   (0x0004)  
	int32_t                                            DurationFrames;                                             // 0x0474   (0x0004)  
	float                                              DurationSubFrames;                                          // 0x0478   (0x0004)  
	int32_t                                            CurrentNumLoops;                                            // 0x047C   (0x0004)  
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0480   (0x0014)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0494   (0x0004)  MISSED
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0498   (0x00E8)  
	unsigned char                                      UnknownData04_5[0x68];                                      // 0x0580   (0x0068)  MISSED
	FMovieSceneSequenceReplProperties                  NetSyncProps;                                               // 0x05E8   (0x0010)  
	TScriptInterface<Class>                            PlaybackClient;                                             // 0x05F8   (0x0010)  
	UMovieSceneSequenceTickManager*                    TickManager;                                                // 0x0608   (0x0008)  
	unsigned char                                      UnknownData05_6[0x70];                                      // 0x0610   (0x0070)  MISSED


	/// Functions
	// Function /Script/MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	void StopAtCurrentTime();                                                                                                // [0x27db080] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Stop
	void Stop();                                                                                                             // [0x27db060] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetTimeRange
	void SetTimeRange(float StartTime, float Duration);                                                                      // [0x27daf90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlayRate
	void SetPlayRate(float PlayRate);                                                                                        // [0xd8b190] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	void SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams);                                              // [0x27dacc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetFrameRate
	void SetFrameRate(FFrameRate FrameRate);                                                                                 // [0x27daa80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetFrameRange
	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames);                                               // [0x27da970] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	void SetDisableCameraCuts(bool bInDisableCameraCuts);                                                                    // [0x27da8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	void ScrubToSeconds(float TimeInSeconds);                                                                                // [0x27da730] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	bool ScrubToMarkedFrame(FString InLabel);                                                                                // [0x27da620] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	void ScrubToFrame(FFrameTime NewPosition);                                                                               // [0x27da570] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Scrub
	void Scrub();                                                                                                            // [0x27da550] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	void RPC_OnStopEvent(FFrameTime StoppedTime);                                                                            // [0x27da4b0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);                               // [0x27da3d0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	void PlayToSeconds(float TimeInSeconds);                                                                                 // [0x27da320] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	bool PlayToMarkedFrame(FString InLabel);                                                                                 // [0x27da210] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToFrame
	void PlayToFrame(FFrameTime NewPosition);                                                                                // [0x27da160] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayTo
	void PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams);                                                           // [0x27da040] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayReverse
	void PlayReverse();                                                                                                      // [0x27da020] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayLooping
	void PlayLooping(int32_t NumLoops);                                                                                      // [0x27d9f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Play
	void Play();                                                                                                             // [0x27d9f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Pause
	void Pause();                                                                                                            // [0x27d9f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	void JumpToSeconds(float TimeInSeconds);                                                                                 // [0x27d9ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	bool JumpToMarkedFrame(FString InLabel);                                                                                 // [0x27d9d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToFrame
	void JumpToFrame(FFrameTime NewPosition);                                                                                // [0x27d9ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsReversed
	bool IsReversed();                                                                                                       // [0x27d9cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsPlaying
	bool IsPlaying();                                                                                                        // [0x27d9c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsPaused
	bool IsPaused();                                                                                                         // [0x27d9c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	void GoToEndAndStop();                                                                                                   // [0x27d9bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetStartTime
	FQualifiedFrameTime GetStartTime();                                                                                      // [0x27d9b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetPlayRate
	float GetPlayRate();                                                                                                     // [0xd89a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	TArray<FMovieSceneObjectBindingID> GetObjectBindings(UObject* InObject);                                                 // [0x27d9a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetFrameRate
	FFrameRate GetFrameRate();                                                                                               // [0x27d9a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	int32_t GetFrameDuration();                                                                                              // [0x27d99f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetEndTime
	FQualifiedFrameTime GetEndTime();                                                                                        // [0x27d9990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetDuration
	FQualifiedFrameTime GetDuration();                                                                                       // [0x27d9950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	bool GetDisableCameraCuts();                                                                                             // [0x27d9920] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	FQualifiedFrameTime GetCurrentTime();                                                                                    // [0x27d98e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x27d97b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	void ChangePlaybackDirection();                                                                                          // [0x27d95d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieScene.MovieSceneSubSection
/// Size: 0x0078 (0x0000E8 - 0x000160)
class UMovieSceneSubSection : public UMovieSceneSection
{ 
public:
	FMovieSceneSectionParameters                       Parameters;                                                 // 0x00E8   (0x0024)  
	float                                              StartOffset;                                                // 0x010C   (0x0004)  
	float                                              TimeScale;                                                  // 0x0110   (0x0004)  
	float                                              PrerollTime;                                                // 0x0114   (0x0004)  
	UMovieSceneSequence*                               SubSequence;                                                // 0x0118   (0x0008)  
	TLazyObjectPtr<AActor*>                            ActorToRecord;                                              // 0x0120   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	FString                                            TargetSequenceName;                                         // 0x0140   (0x0010)  
	FDirectoryPath                                     TargetPathToRecordTo;                                       // 0x0150   (0x0010)  


	/// Functions
	// Function /Script/MovieScene.MovieSceneSubSection.SetSequence
	void SetSequence(UMovieSceneSequence* Sequence);                                                                         // [0x27ddba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSubSection.GetSequence
	UMovieSceneSequence* GetSequence();                                                                                      // [0x27ddb70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieScene.MovieSceneEntitySystem
/// Size: 0x0018 (0x000028 - 0x000040)
class UMovieSceneEntitySystem : public UObject
{ 
public:
	UMovieSceneEntitySystemLinker*                     Linker;                                                     // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSubTrack
/// Size: 0x0010 (0x000078 - 0x000088)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0078   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneCustomClockSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCustomClockSource : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneEntityProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEntityProvider : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieScenePlaybackClient
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePlaybackClient : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneTrackTemplateProducer
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneTrackTemplateProducer : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.NodeAndChannelMappings
/// Size: 0x0000 (0x000028 - 0x000028)
class UNodeAndChannelMappings : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneNodeGroup
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneNodeGroup : public UObject
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneNodeGroupCollection
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneNodeGroupCollection : public UObject
{ 
public:
};

/// Class /Script/MovieScene.MovieScene
/// Size: 0x00F8 (0x000050 - 0x000148)
class UMovieScene : public UMovieSceneSignedObject
{ 
public:
	TArray<FMovieSceneSpawnable>                       Spawnables;                                                 // 0x0050   (0x0010)  
	TArray<FMovieScenePossessable>                     Possessables;                                               // 0x0060   (0x0010)  
	TArray<FMovieSceneBinding>                         ObjectBindings;                                             // 0x0070   (0x0010)  
	TMap<FName, FMovieSceneObjectBindingIDs>           BindingGroups;                                              // 0x0080   (0x0050)  
	TArray<UMovieSceneTrack*>                          MasterTracks;                                               // 0x00D0   (0x0010)  
	UMovieSceneTrack*                                  CameraCutTrack;                                             // 0x00E0   (0x0008)  
	FMovieSceneFrameRange                              SelectionRange;                                             // 0x00E8   (0x0010)  
	FMovieSceneFrameRange                              PlaybackRange;                                              // 0x00F8   (0x0010)  
	FFrameRate                                         TickResolution;                                             // 0x0108   (0x0008)  
	FFrameRate                                         DisplayRate;                                                // 0x0110   (0x0008)  
	EMovieSceneEvaluationType                          EvaluationType;                                             // 0x0118   (0x0001)  
	EUpdateClockSource                                 ClockSource;                                                // 0x0119   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x011A   (0x0006)  MISSED
	FSoftObjectPath                                    CustomClockSourcePath;                                      // 0x0120   (0x0018)  
	TArray<FMovieSceneMarkedFrame>                     MarkedFrames;                                               // 0x0138   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneBindingOverrides
/// Size: 0x0068 (0x000028 - 0x000090)
class UMovieSceneBindingOverrides : public UObject
{ 
public:
	TArray<FMovieSceneBindingOverrideData>             BindingData;                                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0038   (0x0058)  MISSED
};

/// Class /Script/MovieScene.MovieSceneBindingOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneBindingOwnerInterface : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneBlenderSystem
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/MovieScene.MovieSceneBoolSection
/// Size: 0x0098 (0x0000E8 - 0x000180)
class UMovieSceneBoolSection : public UMovieSceneSection
{ 
public:
	bool                                               DefaultValue;                                               // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FMovieSceneBoolChannel                             BoolCurve;                                                  // 0x00F0   (0x0090)  
};

/// Class /Script/MovieScene.MovieSceneEntityInstantiatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneGenericBoundObjectInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneBoundSceneComponentInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSceneComponentImpersonator
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneSceneComponentImpersonator : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneCompiledData
/// Size: 0x03D0 (0x000028 - 0x0003F8)
class UMovieSceneCompiledData : public UObject
{ 
public:
	FMovieSceneEvaluationTemplate                      EvaluationTemplate;                                         // 0x0028   (0x0160)  
	FMovieSceneSequenceHierarchy                       Hierarchy;                                                  // 0x0188   (0x0118)  
	FMovieSceneEntityComponentField                    EntityComponentField;                                       // 0x02A0   (0x00F0)  
	FMovieSceneEvaluationField                         TrackTemplateField;                                         // 0x0390   (0x0030)  
	TArray<FFrameTime>                                 DeterminismFences;                                          // 0x03C0   (0x0010)  
	FGuid                                              CompiledSignature;                                          // 0x03D0   (0x0010)  
	FGuid                                              CompilerVersion;                                            // 0x03E0   (0x0010)  
	FMovieSceneSequenceCompilerMaskStruct              AccumulatedMask;                                            // 0x03F0   (0x0001)  
	FMovieSceneSequenceCompilerMaskStruct              AllocatedMask;                                              // 0x03F1   (0x0001)  
	EMovieSceneSequenceFlags                           AccumulatedFlags;                                           // 0x03F2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x03F3   (0x0005)  MISSED
};

/// Class /Script/MovieScene.MovieSceneCompiledDataManager
/// Size: 0x0208 (0x000028 - 0x000230)
class UMovieSceneCompiledDataManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0028   (0x00B0)  MISSED
	TMap<int32_t, FMovieSceneSequenceHierarchy>        Hierarchies;                                                // 0x00D8   (0x0050)  
	TMap<int32_t, FMovieSceneEvaluationTemplate>       TrackTemplates;                                             // 0x0128   (0x0050)  
	TMap<int32_t, FMovieSceneEvaluationField>          TrackTemplateFields;                                        // 0x0178   (0x0050)  
	TMap<int32_t, FMovieSceneEntityComponentField>     EntityComponentFields;                                      // 0x01C8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0218   (0x0018)  MISSED
};

/// Class /Script/MovieScene.MovieSceneFloatDecomposer
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneFloatDecomposer : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneBuiltInEasingFunction
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieSceneBuiltInEasingFunction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	EMovieSceneBuiltInEasing                           Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/MovieScene.MovieSceneEasingExternalCurve
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieSceneEasingExternalCurve : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UCurveFloat*                                       Curve;                                                      // 0x0030   (0x0008)  
};

/// Class /Script/MovieScene.MovieSceneEasingFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEasingFunction : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneEntitySystemLinker
/// Size: 0x0430 (0x000028 - 0x000458)
class UMovieSceneEntitySystemLinker : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x210];                                     // 0x0028   (0x0210)  MISSED
	FMovieSceneEntitySystemGraph                       SystemGraph;                                                // 0x0238   (0x0138)  
	unsigned char                                      UnknownData01_6[0xE8];                                      // 0x0370   (0x00E8)  MISSED
};

/// Class /Script/MovieScene.MovieSceneEvalTimeSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/MovieScene.MovieSceneFolder
/// Size: 0x0048 (0x000028 - 0x000070)
class UMovieSceneFolder : public UObject
{ 
public:
	FName                                              FolderName;                                                 // 0x0028   (0x0008)  
	TArray<UMovieSceneFolder*>                         ChildFolders;                                               // 0x0030   (0x0010)  
	TArray<UMovieSceneTrack*>                          ChildMasterTracks;                                          // 0x0040   (0x0010)  
	TArray<FString>                                    ChildObjectBindingStrings;                                  // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/MovieScene.MovieSceneKeyProxy
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneKeyProxy : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneMasterInstantiatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieScenePreAnimatedStateSystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePreAnimatedStateSystemInterface : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneCachePreAnimatedStateSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneRestorePreAnimatedStateSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSequenceTickManager
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UMovieSceneSequenceTickManager : public UObject
{ 
public:
	TArray<AActor*>                                    SequenceActors;                                             // 0x0028   (0x0010)  
	UMovieSceneEntitySystemLinker*                     Linker;                                                     // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x0040   (0x0090)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSpawnablesSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSpawnSection
/// Size: 0x0008 (0x000180 - 0x000188)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0180   (0x0008)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSpawnTrack
/// Size: 0x0020 (0x000078 - 0x000098)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0078   (0x0010)  
	FGuid                                              ObjectGuid;                                                 // 0x0088   (0x0010)  
};

/// Class /Script/MovieScene.TestMovieSceneTrack
/// Size: 0x0020 (0x000078 - 0x000098)
class UTestMovieSceneTrack : public UMovieSceneTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0078   (0x0008)  MISSED
	bool                                               bHighPassFilter;                                            // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	TArray<UMovieSceneSection*>                        SectionArray;                                               // 0x0088   (0x0010)  
};

/// Class /Script/MovieScene.TestMovieSceneSection
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UTestMovieSceneSection : public UMovieSceneSection
{ 
public:
};

/// Class /Script/MovieScene.TestMovieSceneSequence
/// Size: 0x0008 (0x000060 - 0x000068)
class UTestMovieSceneSequence : public UMovieSceneSequence
{ 
public:
	UMovieScene*                                       MovieScene;                                                 // 0x0060   (0x0008)  
};

/// Class /Script/MovieScene.TestMovieSceneSubTrack
/// Size: 0x0010 (0x000088 - 0x000098)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{ 
public:
	TArray<UMovieSceneSection*>                        SectionArray;                                               // 0x0088   (0x0010)  
};

/// Class /Script/MovieScene.TestMovieSceneSubSection
/// Size: 0x0000 (0x000160 - 0x000160)
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneTrackInstance
/// Size: 0x0028 (0x000028 - 0x000050)
class UMovieSceneTrackInstance : public UObject
{ 
public:
	UObject*                                           AnimatedObject;                                             // 0x0028   (0x0008)  
	bool                                               bIsMasterTrackInstance;                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	UMovieSceneEntitySystemLinker*                     Linker;                                                     // 0x0038   (0x0008)  
	TArray<FMovieSceneTrackInstanceInput>              Inputs;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneTrackInstanceInstantiator
/// Size: 0x00B0 (0x000040 - 0x0000F0)
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0040   (0x00B0)  MISSED
};

/// Class /Script/MovieScene.MovieSceneTrackInstanceSystem
/// Size: 0x0008 (0x000040 - 0x000048)
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{ 
public:
	UMovieSceneTrackInstanceInstantiator*              Instantiator;                                               // 0x0040   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplateBase
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEvalTemplateBase
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplate
/// Size: 0x0010 (0x000010 - 0x000020)
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
{ 
	EMovieSceneCompletionMode                          CompletionMode;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	TWeakObjectPtr<UMovieSceneSection*>                SourceSectionPtr;                                           // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneChannel
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneChannel
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneBoolChannel
/// Size: 0x0088 (0x000008 - 0x000090)
struct FMovieSceneBoolChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0008   (0x0010)  
	bool                                               DefaultValue;                                               // 0x0018   (0x0001)  
	bool                                               bHasDefaultValue;                                           // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	TArray<bool>                                       Values;                                                     // 0x0020   (0x0010)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0030   (0x0060)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneFloatChannel
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FMovieSceneFloatChannel : FMovieSceneChannel
{ 
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                          // 0x0008   (0x0001)  
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                         // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	TArray<FFrameNumber>                               Times;                                                      // 0x0010   (0x0010)  
	TArray<FMovieSceneFloatValue>                      Values;                                                     // 0x0020   (0x0010)  
	float                                              DefaultValue;                                               // 0x0030   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0038   (0x0060)  
	FFrameRate                                         TickResolution;                                             // 0x0098   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneKeyHandleMap
/// Size: 0x0000 (0x000060 - 0x000060)
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable
{ 
};

/// Struct /Script/MovieScene.MovieSceneFloatValue
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMovieSceneFloatValue
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	FMovieSceneTangentData                             Tangent;                                                    // 0x0004   (0x0014)  
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                                 // 0x0018   (0x0001)  
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                                // 0x0019   (0x0001)  
	char                                               PaddingByte;                                                // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001B   (0x0001)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTangentData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneTangentData
{ 
	float                                              ArriveTangent;                                              // 0x0000   (0x0004)  
	float                                              LeaveTangent;                                               // 0x0004   (0x0004)  
	float                                              ArriveTangentWeight;                                        // 0x0008   (0x0004)  
	float                                              LeaveTangentWeight;                                         // 0x000C   (0x0004)  
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneIntegerChannel
/// Size: 0x0088 (0x000008 - 0x000090)
struct FMovieSceneIntegerChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0008   (0x0010)  
	int32_t                                            DefaultValue;                                               // 0x0018   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	TArray<int32_t>                                    Values;                                                     // 0x0020   (0x0010)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0030   (0x0060)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackImplementation
/// Size: 0x0000 (0x000010 - 0x000010)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
{ 
};

/// Struct /Script/MovieScene.MovieScenePropertySectionTemplate
/// Size: 0x0018 (0x000020 - 0x000038)
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieScenePropertySectionData                     PropertyData;                                               // 0x0020   (0x0018)  
};

/// Struct /Script/MovieScene.MovieScenePropertySectionData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieScenePropertySectionData
{ 
	FName                                              PropertyName;                                               // 0x0000   (0x0008)  
	FString                                            PropertyPath;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/MovieScene.TrackInstanceInputComponent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTrackInstanceInputComponent
{ 
	UMovieSceneSection*                                Section;                                                    // 0x0000   (0x0008)  
	int32_t                                            OutputIndex;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceComponent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackInstanceComponent
{ 
	UMovieSceneSection*                                Owner;                                                      // 0x0000   (0x0008)  
	UClass*                                            TrackInstanceClass;                                         // 0x0008   (0x0008)  
};

/// Struct /Script/MovieScene.EasingComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FEasingComponentData
{ 
	UMovieSceneSection*                                Section;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/MovieScene.MovieScenePropertyBinding
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieScenePropertyBinding
{ 
	FName                                              PropertyName;                                               // 0x0000   (0x0008)  
	FName                                              PropertyPath;                                               // 0x0008   (0x0008)  
	bool                                               bCanUseClassLookup;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSectionGroup
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneSectionGroup
{ 
	TArray<TWeakObjectPtr>                             Sections;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneObjectBindingIDs
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneObjectBindingIDs
{ 
	TArray<FMovieSceneObjectBindingID>                 Ids;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneObjectBindingID
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneObjectBindingID
{ 
	int32_t                                            SequenceID;                                                 // 0x0000   (0x0004)  
	EMovieSceneObjectBindingSpace                      Space;                                                      // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FGuid                                              Guid;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneTrackLabels
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackLabels
{ 
	TArray<FString>                                    Strings;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEditorData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FMovieSceneEditorData
{ 
	TMap<FString, FMovieSceneExpansionState>           ExpansionStates;                                            // 0x0000   (0x0050)  
	TArray<FString>                                    PinnedNodes;                                                // 0x0050   (0x0010)  
	double                                             ViewStart;                                                  // 0x0060   (0x0008)  
	double                                             ViewEnd;                                                    // 0x0068   (0x0008)  
	double                                             WorkStart;                                                  // 0x0070   (0x0008)  
	double                                             WorkEnd;                                                    // 0x0078   (0x0008)  
	TSet<FFrameNumber>                                 MarkedFrames;                                               // 0x0080   (0x0050)  
	FFloatRange                                        WorkingRange;                                               // 0x00D0   (0x0010)  
	FFloatRange                                        ViewRange;                                                  // 0x00E0   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneExpansionState
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneExpansionState
{ 
	bool                                               bExpanded;                                                  // 0x0000   (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneMarkedFrame
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneMarkedFrame
{ 
	FFrameNumber                                       FrameNumber;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Label;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneTimecodeSource
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneTimecodeSource
{ 
	FTimecode                                          Timecode;                                                   // 0x0000   (0x0014)  
	FFrameNumber                                       DeltaFrame;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneBinding
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneBinding
{ 
	FGuid                                              ObjectGuid;                                                 // 0x0000   (0x0010)  
	FString                                            BindingName;                                                // 0x0010   (0x0010)  
	TArray<UMovieSceneTrack*>                          Tracks;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneBindingOverrideData
/// Size: 0x0024 (0x000000 - 0x000024)
struct FMovieSceneBindingOverrideData
{ 
	FMovieSceneObjectBindingID                         ObjectBindingId;                                            // 0x0000   (0x0018)  
	TWeakObjectPtr<UObject*>                           Object;                                                     // 0x0018   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.OptionalMovieSceneBlendType
/// Size: 0x0002 (0x000000 - 0x000002)
struct FOptionalMovieSceneBlendType
{ 
	EMovieSceneBlendType                               BlendType;                                                  // 0x0000   (0x0001)  
	bool                                               bIsValid;                                                   // 0x0001   (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneByteChannel
/// Size: 0x0090 (0x000008 - 0x000098)
struct FMovieSceneByteChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0008   (0x0010)  
	char                                               DefaultValue;                                               // 0x0018   (0x0001)  
	bool                                               bHasDefaultValue;                                           // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	TArray<char>                                       Values;                                                     // 0x0020   (0x0010)  
	UEnum*                                             Enum;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0038   (0x0060)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequenceCompilerMaskStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneSequenceCompilerMaskStruct
{ 
	bool                                               bHierarchy;                                                 // 0x0000:0 (0x0001)  
	bool                                               bEvaluationTemplate;                                        // 0x0000:1 (0x0001)  
	bool                                               bEvaluationTemplateField;                                   // 0x0000:2 (0x0001)  
	bool                                               bEntityComponentField;                                      // 0x0000:3 (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraph
/// Size: 0x0138 (0x000000 - 0x000138)
struct FMovieSceneEntitySystemGraph
{ 
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0000   (0x0080)  MISSED
	FMovieSceneEntitySystemGraphNodes                  Nodes;                                                      // 0x0080   (0x0038)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x00B8   (0x0080)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraphNodes
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneEntitySystemGraphNodes
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraphNode
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneEntitySystemGraphNode
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	UMovieSceneEntitySystem*                           System;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplatePtr
/// Size: 0x0088 (0x000000 - 0x000088)
struct FMovieSceneEvalTemplatePtr
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEmptyStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneEmptyStruct
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationField
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneEvaluationField
{ 
	TArray<FMovieSceneFrameRange>                      Ranges;                                                     // 0x0000   (0x0010)  
	TArray<FMovieSceneEvaluationGroup>                 Groups;                                                     // 0x0010   (0x0010)  
	TArray<FMovieSceneEvaluationMetaData>              MetaData;                                                   // 0x0020   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationMetaData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneEvaluationMetaData
{ 
	TArray<FMovieSceneSequenceID>                      ActiveSequences;                                            // 0x0000   (0x0010)  
	TArray<FMovieSceneOrderedEvaluationKey>            ActiveEntities;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneOrderedEvaluationKey
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneOrderedEvaluationKey
{ 
	FMovieSceneEvaluationKey                           Key;                                                        // 0x0000   (0x000C)  
	uint16_t                                           SetupIndex;                                                 // 0x000C   (0x0002)  
	uint16_t                                           TearDownIndex;                                              // 0x000E   (0x0002)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationKey
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneEvaluationKey
{ 
	FMovieSceneSequenceID                              SequenceID;                                                 // 0x0000   (0x0004)  
	FMovieSceneTrackIdentifier                         TrackIdentifier;                                            // 0x0004   (0x0004)  
	uint32_t                                           SectionIndex;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneTrackIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTrackIdentifier
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceID
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneSequenceID
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationGroup
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneEvaluationGroup
{ 
	TArray<FMovieSceneEvaluationGroupLUTIndex>         LUTIndices;                                                 // 0x0000   (0x0010)  
	TArray<FMovieSceneFieldEntry_EvaluationTrack>      TrackLUT;                                                   // 0x0010   (0x0010)  
	TArray<FMovieSceneFieldEntry_ChildTemplate>        SectionLUT;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneFieldEntry_ChildTemplate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneFieldEntry_ChildTemplate
{ 
	uint16_t                                           ChildIndex;                                                 // 0x0000   (0x0002)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	FFrameNumber                                       ForcedTime;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneFieldEntry_EvaluationTrack
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneFieldEntry_EvaluationTrack
{ 
	FMovieSceneEvaluationFieldTrackPtr                 TrackPtr;                                                   // 0x0000   (0x0008)  
	uint16_t                                           NumChildren;                                                // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldTrackPtr
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneEvaluationFieldTrackPtr
{ 
	FMovieSceneSequenceID                              SequenceID;                                                 // 0x0000   (0x0004)  
	FMovieSceneTrackIdentifier                         TrackIdentifier;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationGroupLUTIndex
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneEvaluationGroupLUTIndex
{ 
	int32_t                                            NumInitPtrs;                                                // 0x0000   (0x0004)  
	int32_t                                            NumEvalPtrs;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneFrameRange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneFrameRange
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldSegmentPtr
/// Size: 0x0004 (0x000008 - 0x00000C)
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr
{ 
	FMovieSceneSegmentIdentifier                       SegmentID;                                                  // 0x0008   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSegmentIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneSegmentIdentifier
{ 
	int32_t                                            IdentifierIndex;                                            // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEntityComponentField
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FMovieSceneEntityComponentField
{ 
	FMovieSceneEvaluationFieldEntityTree               PersistentEntityTree;                                       // 0x0000   (0x0060)  
	FMovieSceneEvaluationFieldEntityTree               OneShotEntityTree;                                          // 0x0060   (0x0060)  
	TArray<FMovieSceneEvaluationFieldEntity>           Entities;                                                   // 0x00C0   (0x0010)  
	TArray<FMovieSceneEvaluationFieldEntityMetaData>   EntityMetaData;                                             // 0x00D0   (0x0010)  
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;                                         // 0x00E0   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{ 
	FGuid                                              ObjectBindingId;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityMetaData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneEvaluationFieldEntityMetaData
{ 
	FFrameNumber                                       ForcedTime;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	ESectionEvaluationFlags                            Flags;                                                      // 0x0008   (0x0001)  
	bool                                               bEvaluateInSequencePreRoll;                                 // 0x0009:0 (0x0001)  
	bool                                               bEvaluateInSequencePostRoll;                                // 0x0009:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntity
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEvaluationFieldEntity
{ 
	FMovieSceneEvaluationFieldEntityKey                Key;                                                        // 0x0000   (0x000C)  
	int32_t                                            SharedMetaDataIndex;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityKey
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneEvaluationFieldEntityKey
{ 
	TWeakObjectPtr<UObject*>                           EntityOwner;                                                // 0x0000   (0x0008)  
	uint32_t                                           EntityID;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityTree
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMovieSceneEvaluationFieldEntityTree
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationOperand
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneEvaluationOperand
{ 
	FGuid                                              ObjectBindingId;                                            // 0x0000   (0x0010)  
	FMovieSceneSequenceID                              SequenceID;                                                 // 0x0010   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTemplate
/// Size: 0x0160 (0x000000 - 0x000160)
struct FMovieSceneEvaluationTemplate
{ 
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks;                                           // 0x0000   (0x0050)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0050   (0x0050)  MISSED
	FGuid                                              SequenceSignature;                                          // 0x00A0   (0x0010)  
	FMovieSceneEvaluationTemplateSerialNumber          TemplateSerialNumber;                                       // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FMovieSceneTemplateGenerationLedger                TemplateLedger;                                             // 0x00B8   (0x00A8)  
};

/// Struct /Script/MovieScene.MovieSceneTemplateGenerationLedger
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FMovieSceneTemplateGenerationLedger
{ 
	FMovieSceneTrackIdentifier                         LastTrackIdentifier;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TMap<FGuid, FMovieSceneTrackIdentifier>            TrackSignatureToTrackIdentifier;                            // 0x0008   (0x0050)  
	TMap<FGuid, FMovieSceneFrameRange>                 SubSectionRanges;                                           // 0x0058   (0x0050)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTemplateSerialNumber
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneEvaluationTemplateSerialNumber
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTrack
/// Size: 0x0078 (0x000000 - 0x000078)
struct FMovieSceneEvaluationTrack
{ 
	FGuid                                              ObjectBindingId;                                            // 0x0000   (0x0010)  
	uint16_t                                           EvaluationPriority;                                         // 0x0010   (0x0002)  
	EEvaluationMethod                                  EvaluationMethod;                                           // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0013   (0x0001)  MISSED
	TWeakObjectPtr<UMovieSceneTrack*>                  SourceTrack;                                                // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FMovieSceneEvalTemplatePtr>                 ChildTemplates;                                             // 0x0020   (0x0010)  
	FMovieSceneTrackImplementationPtr                  TrackTemplate;                                              // 0x0030   (0x0038)  
	FName                                              EvaluationGroup;                                            // 0x0068   (0x0008)  
	bool                                               bEvaluateInPreroll;                                         // 0x0070:0 (0x0001)  
	bool                                               bEvaluateInPostroll;                                        // 0x0070:1 (0x0001)  
	bool                                               bTearDownPriority;                                          // 0x0070:2 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackImplementationPtr
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneTrackImplementationPtr
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSubSectionData
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMovieSceneSubSectionData
{ 
	TWeakObjectPtr<UMovieSceneSubSection*>             Section;                                                    // 0x0000   (0x0008)  
	FGuid                                              ObjectBindingId;                                            // 0x0008   (0x0010)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneRootEvaluationTemplateInstance
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FMovieSceneRootEvaluationTemplateInstance
{ 
	TWeakObjectPtr<UMovieSceneSequence*>               WeakRootSequence;                                           // 0x0000   (0x0008)  
	UMovieSceneCompiledDataManager*                    CompiledDataManager;                                        // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0010   (0x0008)  MISSED
	UMovieSceneEntitySystemLinker*                     EntitySystemLinker;                                         // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_5[0x70];                                      // 0x0020   (0x0070)  MISSED
	TMap<FMovieSceneSequenceID, UObject*>              DirectorInstances;                                          // 0x0090   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00E0   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneKeyStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneKeyStruct
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneKeyTimeStruct
/// Size: 0x0020 (0x000008 - 0x000028)
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct
{ 
	FFrameNumber                                       Time;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x000C   (0x001C)  MISSED
};

/// Struct /Script/MovieScene.GeneratedMovieSceneKeyStruct
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGeneratedMovieSceneKeyStruct
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneObjectPathChannel
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FMovieSceneObjectPathChannel : FMovieSceneChannel
{ 
	UClass*                                            PropertyClass;                                              // 0x0008   (0x0008)  
	TArray<FFrameNumber>                               Times;                                                      // 0x0010   (0x0010)  
	TArray<FMovieSceneObjectPathChannelKeyValue>       Values;                                                     // 0x0020   (0x0010)  
	FMovieSceneObjectPathChannelKeyValue               DefaultValue;                                               // 0x0030   (0x0030)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0060   (0x0060)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneObjectPathChannelKeyValue
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneObjectPathChannelKeyValue
{ 
	TWeakObjectPtr<UObject*>                           SoftPtr;                                                    // 0x0000   (0x0028)  
	UObject*                                           HardPtr;                                                    // 0x0028   (0x0008)  
};

/// Struct /Script/MovieScene.MovieScenePossessable
/// Size: 0x0048 (0x000000 - 0x000048)
struct FMovieScenePossessable
{ 
	TArray<FName>                                      Tags;                                                       // 0x0000   (0x0010)  
	FGuid                                              Guid;                                                       // 0x0010   (0x0010)  
	FString                                            Name;                                                       // 0x0020   (0x0010)  
	UClass*                                            PossessedObjectClass;                                       // 0x0030   (0x0008)  
	FGuid                                              ParentGuid;                                                 // 0x0038   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEasingSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneEasingSettings
{ 
	int32_t                                            AutoEaseInDuration;                                         // 0x0000   (0x0004)  
	int32_t                                            AutoEaseOutDuration;                                        // 0x0004   (0x0004)  
	TScriptInterface<Class>                            EaseIn;                                                     // 0x0008   (0x0010)  
	bool                                               bManualEaseIn;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            ManualEaseInDuration;                                       // 0x001C   (0x0004)  
	TScriptInterface<Class>                            EaseOut;                                                    // 0x0020   (0x0010)  
	bool                                               bManualEaseOut;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            ManualEaseOutDuration;                                      // 0x0034   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSectionEvalOptions
/// Size: 0x0002 (0x000000 - 0x000002)
struct FMovieSceneSectionEvalOptions
{ 
	bool                                               bCanEditCompletionMode;                                     // 0x0000   (0x0001)  
	EMovieSceneCompletionMode                          CompletionMode;                                             // 0x0001   (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneSectionParameters
/// Size: 0x0024 (0x000000 - 0x000024)
struct FMovieSceneSectionParameters
{ 
	FFrameNumber                                       StartFrameOffset;                                           // 0x0000   (0x0004)  
	bool                                               bCanLoop;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FFrameNumber                                       EndFrameOffset;                                             // 0x0008   (0x0004)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x000C   (0x0004)  
	float                                              TimeScale;                                                  // 0x0010   (0x0004)  
	int32_t                                            HierarchicalBias;                                           // 0x0014   (0x0004)  
	float                                              StartOffset;                                                // 0x0018   (0x0004)  
	float                                              PrerollTime;                                                // 0x001C   (0x0004)  
	float                                              PostrollTime;                                               // 0x0020   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSegment
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMovieSceneSegment
{ 
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/MovieScene.SectionEvaluationData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSectionEvaluationData
{ 
	int32_t                                            ImplIndex;                                                  // 0x0000   (0x0004)  
	FFrameNumber                                       ForcedTime;                                                 // 0x0004   (0x0004)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequenceHierarchy
/// Size: 0x0118 (0x000000 - 0x000118)
struct FMovieSceneSequenceHierarchy
{ 
	FMovieSceneSequenceHierarchyNode                   RootNode;                                                   // 0x0000   (0x0018)  
	FMovieSceneSubSequenceTree                         Tree;                                                       // 0x0018   (0x0060)  
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences;                                          // 0x0078   (0x0050)  
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy;                                       // 0x00C8   (0x0050)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceHierarchyNode
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneSequenceHierarchyNode
{ 
	FMovieSceneSequenceID                              ParentId;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FMovieSceneSequenceID>                      Children;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FMovieSceneSubSequenceData
{ 
	FSoftObjectPath                                    Sequence;                                                   // 0x0000   (0x0018)  
	FMovieSceneSequenceTransform                       RootToSequenceTransform;                                    // 0x0018   (0x0020)  
	FFrameRate                                         TickResolution;                                             // 0x0038   (0x0008)  
	FMovieSceneSequenceID                              DeterministicSequenceID;                                    // 0x0040   (0x0004)  
	FMovieSceneFrameRange                              PlayRange;                                                  // 0x0044   (0x0010)  
	FMovieSceneFrameRange                              FullPlayRange;                                              // 0x0054   (0x0010)  
	FMovieSceneFrameRange                              UnwarpedPlayRange;                                          // 0x0064   (0x0010)  
	FMovieSceneFrameRange                              PreRollRange;                                               // 0x0074   (0x0010)  
	FMovieSceneFrameRange                              PostRollRange;                                              // 0x0084   (0x0010)  
	int16_t                                            HierarchicalBias;                                           // 0x0094   (0x0002)  
	bool                                               bHasHierarchicalEasing;                                     // 0x0096   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0097   (0x0001)  MISSED
	FMovieSceneSequenceInstanceDataPtr                 InstanceData;                                               // 0x0098   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00B0   (0x0008)  MISSED
	FGuid                                              SubSectionSignature;                                        // 0x00B8   (0x0010)  
	FMovieSceneSequenceTransform                       OuterToInnerTransform;                                      // 0x00C8   (0x0020)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceTransform
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneSequenceTransform
{ 
	FMovieSceneTimeTransform                           LinearTransform;                                            // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FMovieSceneNestedSequenceTransform>         NestedTransforms;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneNestedSequenceTransform
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneNestedSequenceTransform
{ 
	FMovieSceneTimeTransform                           LinearTransform;                                            // 0x0000   (0x000C)  
	FMovieSceneTimeWarping                             Warping;                                                    // 0x000C   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneTimeWarping
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneTimeWarping
{ 
	FFrameNumber                                       Start;                                                      // 0x0000   (0x0004)  
	FFrameNumber                                       End;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneTimeTransform
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneTimeTransform
{ 
	float                                              TimeScale;                                                  // 0x0000   (0x0004)  
	FFrameTime                                         Offset;                                                     // 0x0004   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceInstanceDataPtr
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneSequenceInstanceDataPtr
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceTree
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMovieSceneSubSequenceTree
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceTreeEntry
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneSubSequenceTreeEntry
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequenceInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneSequenceInstanceData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequencePlaybackParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneSequencePlaybackParams
{ 
	FFrameTime                                         Frame;                                                      // 0x0000   (0x0008)  
	float                                              Time;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            MarkedFrame;                                                // 0x0010   (0x0010)  
	EMovieScenePositionType                            PositionType;                                               // 0x0020   (0x0001)  
	EUpdatePositionMethod                              UpdateMethod;                                               // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequencePlaybackSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneSequencePlaybackSettings
{ 
	bool                                               bAutoPlay;                                                  // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	FMovieSceneSequenceLoopCount                       LoopCount;                                                  // 0x0004   (0x0004)  
	float                                              PlayRate;                                                   // 0x0008   (0x0004)  
	float                                              StartTime;                                                  // 0x000C   (0x0004)  
	bool                                               bRandomStartTime;                                           // 0x0010:0 (0x0001)  
	bool                                               bRestoreState;                                              // 0x0010:1 (0x0001)  
	bool                                               bDisableMovementInput;                                      // 0x0010:2 (0x0001)  
	bool                                               bDisableLookAtInput;                                        // 0x0010:3 (0x0001)  
	bool                                               bHidePlayer;                                                // 0x0010:4 (0x0001)  
	bool                                               bHideHud;                                                   // 0x0010:5 (0x0001)  
	bool                                               bDisableCameraCuts;                                         // 0x0010:6 (0x0001)  
	bool                                               bPauseAtEnd;                                                // 0x0010:7 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequenceLoopCount
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneSequenceLoopCount
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceReplProperties
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneSequenceReplProperties
{ 
	FFrameTime                                         LastKnownPosition;                                          // 0x0000   (0x0008)  
	TEnumAsByte<EMovieScenePlayerStatus>               LastKnownStatus;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            LastKnownNumLoops;                                          // 0x000C   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneWarpCounter
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneWarpCounter
{ 
	TArray<uint32_t>                                   WarpCounts;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneSpawnable
/// Size: 0x0090 (0x000000 - 0x000090)
struct FMovieSceneSpawnable
{ 
	FTransform                                         SpawnTransform;                                             // 0x0000   (0x0030)  
	TArray<FName>                                      Tags;                                                       // 0x0030   (0x0010)  
	bool                                               bContinuouslyRespawn;                                       // 0x0040   (0x0001)  
	bool                                               bEvaluateTracksWhenNotSpawned;                              // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	FGuid                                              Guid;                                                       // 0x0044   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0058   (0x0010)  
	UObject*                                           ObjectTemplate;                                             // 0x0068   (0x0008)  
	TArray<FGuid>                                      ChildPossessables;                                          // 0x0070   (0x0010)  
	ESpawnOwnership                                    Ownership;                                                  // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	FName                                              LevelName;                                                  // 0x0084   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/MovieScene.TestMovieSceneEvalTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/MovieScene.MovieSceneTrackDisplayOptions
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTrackDisplayOptions
{ 
	bool                                               bShowVerticalFrames;                                        // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackEvalOptions
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTrackEvalOptions
{ 
	bool                                               bCanEvaluateNearestSection;                                 // 0x0000:0 (0x0001)  
	bool                                               bEvalNearestSection;                                        // 0x0000:1 (0x0001)  
	bool                                               bEvaluateInPreroll;                                         // 0x0000:2 (0x0001)  
	bool                                               bEvaluateInPostroll;                                        // 0x0000:3 (0x0001)  
	bool                                               bEvaluateNearestSection;                                    // 0x0000:4 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackEvaluationField
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackEvaluationField
{ 
	TArray<FMovieSceneTrackEvaluationFieldEntry>       Entries;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneTrackEvaluationFieldEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneTrackEvaluationFieldEntry
{ 
	UMovieSceneSection*                                Section;                                                    // 0x0000   (0x0008)  
	FFrameNumberRange                                  Range;                                                      // 0x0008   (0x0010)  
	FFrameNumber                                       ForcedTime;                                                 // 0x0018   (0x0004)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x001D   (0x0001)  MISSED
	int16_t                                            LegacySortOrder;                                            // 0x001E   (0x0002)  
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceInput
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackInstanceInput
{ 
	UMovieSceneSection*                                Section;                                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackInstanceEntry
{ 
	UObject*                                           BoundObject;                                                // 0x0000   (0x0008)  
	UMovieSceneTrackInstance*                          TrackInstance;                                              // 0x0008   (0x0008)  
};

/// Enum /Script/MovieScene.EMovieSceneKeyInterpolation
/// Size: 0x06
enum EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto                                                = 0,
	EMovieSceneKeyInterpolation__User                                                = 1,
	EMovieSceneKeyInterpolation__Break                                               = 2,
	EMovieSceneKeyInterpolation__Linear                                              = 3,
	EMovieSceneKeyInterpolation__Constant                                            = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX                     = 5
};

/// Enum /Script/MovieScene.EMovieSceneBlendType
/// Size: 0x06
enum EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Invalid                                                    = 0,
	EMovieSceneBlendType__Absolute                                                   = 1,
	EMovieSceneBlendType__Additive                                                   = 2,
	EMovieSceneBlendType__Relative                                                   = 4,
	EMovieSceneBlendType__AdditiveFromBase                                           = 8,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX                                   = 9
};

/// Enum /Script/MovieScene.EMovieSceneCompletionMode
/// Size: 0x04
enum EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState                                             = 0,
	EMovieSceneCompletionMode__RestoreState                                          = 1,
	EMovieSceneCompletionMode__ProjectDefault                                        = 2,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX                         = 3
};

/// Enum /Script/MovieScene.EMovieSceneBuiltInEasing
/// Size: 0x23
enum EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear                                                 = 0,
	EMovieSceneBuiltInEasing__SinIn                                                  = 1,
	EMovieSceneBuiltInEasing__SinOut                                                 = 2,
	EMovieSceneBuiltInEasing__SinInOut                                               = 3,
	EMovieSceneBuiltInEasing__QuadIn                                                 = 4,
	EMovieSceneBuiltInEasing__QuadOut                                                = 5,
	EMovieSceneBuiltInEasing__QuadInOut                                              = 6,
	EMovieSceneBuiltInEasing__CubicIn                                                = 7,
	EMovieSceneBuiltInEasing__CubicOut                                               = 8,
	EMovieSceneBuiltInEasing__CubicInOut                                             = 9,
	EMovieSceneBuiltInEasing__QuartIn                                                = 10,
	EMovieSceneBuiltInEasing__QuartOut                                               = 11,
	EMovieSceneBuiltInEasing__QuartInOut                                             = 12,
	EMovieSceneBuiltInEasing__QuintIn                                                = 13,
	EMovieSceneBuiltInEasing__QuintOut                                               = 14,
	EMovieSceneBuiltInEasing__QuintInOut                                             = 15,
	EMovieSceneBuiltInEasing__ExpoIn                                                 = 16,
	EMovieSceneBuiltInEasing__ExpoOut                                                = 17,
	EMovieSceneBuiltInEasing__ExpoInOut                                              = 18,
	EMovieSceneBuiltInEasing__CircIn                                                 = 19,
	EMovieSceneBuiltInEasing__CircOut                                                = 20,
	EMovieSceneBuiltInEasing__CircInOut                                              = 21,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX                           = 22
};

/// Enum /Script/MovieScene.EEvaluationMethod
/// Size: 0x03
enum EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static                                                        = 0,
	EEvaluationMethod__Swept                                                         = 1,
	EEvaluationMethod__EEvaluationMethod_MAX                                         = 2
};

/// Enum /Script/MovieScene.EMovieSceneSequenceFlags
/// Size: 0x05
enum EMovieSceneSequenceFlags : uint8_t
{
	EMovieSceneSequenceFlags__None                                                   = 0,
	EMovieSceneSequenceFlags__Volatile                                               = 1,
	EMovieSceneSequenceFlags__BlockingEvaluation                                     = 2,
	EMovieSceneSequenceFlags__InheritedFlags                                         = 1,
	EMovieSceneSequenceFlags__EMovieSceneSequenceFlags_MAX                           = 3
};

/// Enum /Script/MovieScene.EUpdateClockSource
/// Size: 0x07
enum EUpdateClockSource : uint8_t
{
	EUpdateClockSource__Tick                                                         = 0,
	EUpdateClockSource__Platform                                                     = 1,
	EUpdateClockSource__Audio                                                        = 2,
	EUpdateClockSource__RelativeTimecode                                             = 3,
	EUpdateClockSource__Timecode                                                     = 4,
	EUpdateClockSource__Custom                                                       = 5,
	EUpdateClockSource__EUpdateClockSource_MAX                                       = 6
};

/// Enum /Script/MovieScene.EMovieSceneEvaluationType
/// Size: 0x03
enum EMovieSceneEvaluationType : uint8_t
{
	EMovieSceneEvaluationType__FrameLocked                                           = 0,
	EMovieSceneEvaluationType__WithSubFrames                                         = 1,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX                         = 2
};

/// Enum /Script/MovieScene.EMovieScenePlayerStatus
/// Size: 0x08
enum EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped                                                 = 0,
	EMovieScenePlayerStatus__Playing                                                 = 1,
	EMovieScenePlayerStatus__Recording                                               = 2,
	EMovieScenePlayerStatus__Scrubbing                                               = 3,
	EMovieScenePlayerStatus__Jumping                                                 = 4,
	EMovieScenePlayerStatus__Stepping                                                = 5,
	EMovieScenePlayerStatus__Paused                                                  = 6,
	EMovieScenePlayerStatus__MAX                                                     = 7
};

/// Enum /Script/MovieScene.EMovieSceneObjectBindingSpace
/// Size: 0x03
enum EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local                                             = 0,
	EMovieSceneObjectBindingSpace__Root                                              = 1,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX                 = 2
};

/// Enum /Script/MovieScene.ESectionEvaluationFlags
/// Size: 0x04
enum ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None                                                    = 0,
	ESectionEvaluationFlags__PreRoll                                                 = 1,
	ESectionEvaluationFlags__PostRoll                                                = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX                             = 3
};

/// Enum /Script/MovieScene.EMovieScenePositionType
/// Size: 0x04
enum EMovieScenePositionType : uint8_t
{
	EMovieScenePositionType__Frame                                                   = 0,
	EMovieScenePositionType__Time                                                    = 1,
	EMovieScenePositionType__MarkedFrame                                             = 2,
	EMovieScenePositionType__EMovieScenePositionType_MAX                             = 3
};

/// Enum /Script/MovieScene.EUpdatePositionMethod
/// Size: 0x04
enum EUpdatePositionMethod : uint8_t
{
	EUpdatePositionMethod__Play                                                      = 0,
	EUpdatePositionMethod__Jump                                                      = 1,
	EUpdatePositionMethod__Scrub                                                     = 2,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX                                 = 3
};

/// Enum /Script/MovieScene.ESpawnOwnership
/// Size: 0x04
enum ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence                                                   = 0,
	ESpawnOwnership__MasterSequence                                                  = 1,
	ESpawnOwnership__External                                                        = 2,
	ESpawnOwnership__ESpawnOwnership_MAX                                             = 3
};

