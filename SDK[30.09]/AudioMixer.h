/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioMixer.

/// Class /Script/AudioMixer.SynthComponent
/// Size: 0x04C0 (0x000200 - 0x0006C0)
class USynthComponent : public USceneComponent
{ 
public:
	bool                                               bAutoDestroy;                                               // 0x01F8:0 (0x0001)  
	bool                                               bStopWhenOwnerDestroyed;                                    // 0x01F8:1 (0x0001)  
	bool                                               bAllowSpatialization;                                       // 0x01F8:2 (0x0001)  
	bool                                               bOverrideAttenuation;                                       // 0x01F8:3 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x01F9   (0x0003)  MISSED
	bool                                               bOutputToBusOnly;                                           // 0x01FC:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x01FD   (0x0003)  MISSED
	USoundAttenuation*                                 AttenuationSettings;                                        // 0x0200   (0x0008)  
	FSoundAttenuationSettings                          AttenuationOverrides;                                       // 0x0208   (0x03A0)  
	USoundConcurrency*                                 ConcurrencySettings;                                        // 0x05A8   (0x0008)  
	TSet<USoundConcurrency*>                           ConcurrencySet;                                             // 0x05B0   (0x0050)  
	USoundClass*                                       SoundClass;                                                 // 0x0600   (0x0008)  
	USoundEffectSourcePresetChain*                     SourceEffectChain;                                          // 0x0608   (0x0008)  
	USoundSubmixBase*                                  SoundSubmix;                                                // 0x0610   (0x0008)  
	TArray<FSoundSubmixSendInfo>                       SoundSubmixSends;                                           // 0x0618   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    BusSends;                                                   // 0x0628   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    PreEffectBusSends;                                          // 0x0638   (0x0010)  
	bool                                               bIsUISound;                                                 // 0x0648:0 (0x0001)  
	bool                                               bIsPreviewSound;                                            // 0x0648:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0649   (0x0003)  MISSED
	int32_t                                            EnvelopeFollowerAttackTime;                                 // 0x064C   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTime;                                // 0x0650   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0654   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnAudioEnvelopeValue;                                       // 0x0658   (0x0010)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x0668   (0x0020)  MISSED
	USynthSound*                                       Synth;                                                      // 0x0688   (0x0008)  
	UAudioComponent*                                   AudioComponent;                                             // 0x0690   (0x0008)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x0698   (0x0028)  MISSED


	/// Functions
	// Function /Script/AudioMixer.SynthComponent.Stop
	void Stop();                                                                                                             // [0x2a64bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.Start
	void Start();                                                                                                            // [0x2a647c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetVolumeMultiplier
	void SetVolumeMultiplier(float VolumeMultiplier);                                                                        // [0x2a64740] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSubmixSend
	void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);                                                           // [0x2a642f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterFrequency
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);                                                          // [0x2a63a20] Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterEnabled
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);                                                               // [0x2a63990] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.IsPlaying
	bool IsPlaying();                                                                                                        // [0x2a62660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioMixer.AudioGenerator
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UAudioGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0028   (0x0080)  MISSED
};

/// Class /Script/AudioMixer.AudioMixerBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AudioMixer.QuartzClockHandle
/// Size: 0x0168 (0x000028 - 0x000190)
class UQuartzClockHandle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x168];                                     // 0x0028   (0x0168)  MISSED
};

/// Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
/// Size: 0x00C8 (0x000068 - 0x000130)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x0068   (0x0078)  MISSED
	FSubmixEffectDynamicsProcessorSettings             Settings;                                                   // 0x00E0   (0x0050)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	void SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings);                                                      // [0x2a63e30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	void SetExternalSubmix(USoundSubmix* Submix);                                                                            // [0x2a63900] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectSubmixEQPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSubmixEffectSubmixEQSettings                      Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	void SetSettings(FSubmixEffectSubmixEQSettings& InSettings);                                                             // [0xfa5c60] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectReverbPreset
/// Size: 0x00A8 (0x000068 - 0x000110)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0068   (0x0068)  MISSED
	FSubmixEffectReverbSettings                        Settings;                                                   // 0x00D0   (0x0040)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	void SetSettingsWithReverbEffect(UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);                         // [0x2a64050] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettings
	void SetSettings(FSubmixEffectReverbSettings& InSettings);                                                               // [0x2a63f40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.QuartzSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UQuartzSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/AudioMixer.SynthSound
/// Size: 0x0020 (0x0003C0 - 0x0003E0)
class USynthSound : public USoundWaveProcedural
{ 
public:
	USynthComponent*                                   OwningSynthComponent;                                       // 0x03C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x03C8   (0x0018)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSubmixEffectDynamicsProcessorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	ESubmixEffectDynamicsChannelLinkMode               LinkMode;                                                   // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              InputGainDb;                                                // 0x0004   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0008   (0x0004)  
	float                                              Ratio;                                                      // 0x000C   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0010   (0x0004)  
	float                                              LookAheadMsec;                                              // 0x0014   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0018   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x001C   (0x0004)  
	USoundSubmix*                                      ExternalSubmix;                                             // 0x0020   (0x0008)  
	bool                                               bChannelLinked;                                             // 0x0028:0 (0x0001)  
	bool                                               bAnalogMode;                                                // 0x0028:1 (0x0001)  
	bool                                               bKeyAudition;                                               // 0x0028:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              KeyGainDb;                                                  // 0x002C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0030   (0x0004)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyHighshelf;                                               // 0x0034   (0x000C)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyLowshelf;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicProcessorFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectDynamicProcessorFilterSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Cutoff;                                                     // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/AudioMixer.SubmixEffectSubmixEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectSubmixEQSettings
{ 
	TArray<FSubmixEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/AudioMixer.SubmixEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled;                                                   // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectReverbSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSubmixEffectReverbSettings
{ 
	bool                                               bBypassEarlyReflections;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ReflectionsDelay;                                           // 0x0004   (0x0004)  
	float                                              GainHF;                                                     // 0x0008   (0x0004)  
	float                                              ReflectionsGain;                                            // 0x000C   (0x0004)  
	bool                                               bBypassLateReflections;                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LateDelay;                                                  // 0x0014   (0x0004)  
	float                                              DecayTime;                                                  // 0x0018   (0x0004)  
	float                                              Density;                                                    // 0x001C   (0x0004)  
	float                                              Diffusion;                                                  // 0x0020   (0x0004)  
	float                                              AirAbsorptionGainHF;                                        // 0x0024   (0x0004)  
	float                                              DecayHFRatio;                                               // 0x0028   (0x0004)  
	float                                              LateGain;                                                   // 0x002C   (0x0004)  
	float                                              Gain;                                                       // 0x0030   (0x0004)  
	float                                              WetLevel;                                                   // 0x0034   (0x0004)  
	float                                              DryLevel;                                                   // 0x0038   (0x0004)  
	bool                                               bBypass;                                                    // 0x003C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Enum /Script/AudioMixer.EMusicalNoteName
/// Size: 0x13
enum EMusicalNoteName : uint8_t
{
	EMusicalNoteName__C                                                              = 0,
	EMusicalNoteName__Db                                                             = 1,
	EMusicalNoteName__D                                                              = 2,
	EMusicalNoteName__Eb                                                             = 3,
	EMusicalNoteName__E                                                              = 4,
	EMusicalNoteName__F                                                              = 5,
	EMusicalNoteName__Gb                                                             = 6,
	EMusicalNoteName__G                                                              = 7,
	EMusicalNoteName__Ab                                                             = 8,
	EMusicalNoteName__A                                                              = 9,
	EMusicalNoteName__Bb                                                             = 10,
	EMusicalNoteName__B                                                              = 11,
	EMusicalNoteName__EMusicalNoteName_MAX                                           = 12
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsChannelLinkMode
/// Size: 0x05
enum ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	ESubmixEffectDynamicsChannelLinkMode__Disabled                                   = 0,
	ESubmixEffectDynamicsChannelLinkMode__Average                                    = 1,
	ESubmixEffectDynamicsChannelLinkMode__Peak                                       = 2,
	ESubmixEffectDynamicsChannelLinkMode__Count                                      = 3,
	ESubmixEffectDynamicsChannelLinkMode__ESubmixEffectDynamicsChannelLinkMode_MAX   = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsPeakMode
/// Size: 0x05
enum ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESubmixEffectDynamicsPeakMode__Peak                                              = 2,
	ESubmixEffectDynamicsPeakMode__Count                                             = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX                 = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
/// Size: 0x06
enum ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor                                   = 0,
	ESubmixEffectDynamicsProcessorType__Limiter                                      = 1,
	ESubmixEffectDynamicsProcessorType__Expander                                     = 2,
	ESubmixEffectDynamicsProcessorType__Gate                                         = 3,
	ESubmixEffectDynamicsProcessorType__Count                                        = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX       = 5
};

