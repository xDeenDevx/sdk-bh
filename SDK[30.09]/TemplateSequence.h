/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TemplateSequence.

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00A8 (0x000060 - 0x000108)
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	UMovieScene*                                       MovieScene;                                                 // 0x0060   (0x0008)  
	TWeakObjectPtr<UClass*>                            BoundActorClass;                                            // 0x0068   (0x0028)  
	TWeakObjectPtr<AActor*>                            BoundPreviewActor;                                          // 0x0090   (0x0028)  
	TMap<FGuid, FName>                                 BoundActorComponents;                                       // 0x00B8   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x000108 - 0x000108)
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
/// Size: 0x0048 (0x000028 - 0x000070)
class USequenceCameraShakeCameraStandIn : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	float                                              FieldOfView;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x3C];                                      // 0x0034   (0x003C)  MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShake
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class USequenceCameraShake : public UCameraShakeBase
{ 
public:
	UCameraAnimationSequence*                          Sequence;                                                   // 0x0098   (0x0008)  
	float                                              PlayRate;                                                   // 0x00A0   (0x0004)  
	float                                              Scale;                                                      // 0x00A4   (0x0004)  
	float                                              BlendInTime;                                                // 0x00A8   (0x0004)  
	float                                              BlendOutTime;                                               // 0x00AC   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x00B0   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	USequenceCameraShakeSequencePlayer*                Player;                                                     // 0x00B8   (0x0008)  
	USequenceCameraShakeCameraStandIn*                 CameraStandIn;                                              // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
/// Size: 0x05B0 (0x000028 - 0x0005D8)
class USequenceCameraShakeSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x458];                                     // 0x0028   (0x0458)  MISSED
	UObject*                                           BoundObjectOverride;                                        // 0x0480   (0x0008)  
	UMovieSceneSequence*                               Sequence;                                                   // 0x0488   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0490   (0x00E8)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0578   (0x0060)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0050 (0x000228 - 0x000278)
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0228   (0x0008)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0230   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	UTemplateSequencePlayer*                           SequencePlayer;                                             // 0x0248   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x0250   (0x0018)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x0268   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0274   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	void SetSequence(UTemplateSequence* InSequence);                                                                         // [0xf29920] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	void SetBinding(AActor* Actor);                                                                                          // [0xf29890] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	UTemplateSequence* LoadSequence();                                                                                       // [0xf29860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	UTemplateSequencePlayer* GetSequencePlayer();                                                                            // [0xf29830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	UTemplateSequence* GetSequence();                                                                                        // [0xf29800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (0x000680 - 0x000688)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0680   (0x0008)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0008 (0x000160 - 0x000168)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0160   (0x0008)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FTemplateSequenceBindingOverrideData
{ 
	TWeakObjectPtr<UObject*>                           Object;                                                     // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

