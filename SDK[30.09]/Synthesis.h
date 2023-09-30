/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Synthesis.

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0010 (0x000028 - 0x000038)
class UModularSynthPresetBank : public UObject
{ 
public:
	TArray<FModularSynthPresetBankEntry>               Presets;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x06C0 (0x0006C0 - 0x000D80)
class UModularSynthComponent : public USynthComponent
{ 
public:
	int32_t                                            VoiceCount;                                                 // 0x06C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x6BC];                                     // 0x06C4   (0x06BC)  MISSED


	/// Functions
	// Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset
	void SetSynthPreset(FModularSynthPreset& SynthPreset);                                                                   // [0xfa05d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSustainGain
	void SetSustainGain(float SustainGain);                                                                                  // [0xfa0550] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	void SetStereoDelayWetlevel(float DelayWetlevel);                                                                        // [0xfa04d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime
	void SetStereoDelayTime(float DelayTimeMsec);                                                                            // [0xfa0450] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio
	void SetStereoDelayRatio(float DelayRatio);                                                                              // [0xfa03d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode
	void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);                                                          // [0xfa0350] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);                                                                   // [0xfa02c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	void SetStereoDelayFeedback(float DelayFeedback);                                                                        // [0xfa0240] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSpread
	void SetSpread(float Spread);                                                                                            // [0xfa01c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime
	void SetReleaseTime(float ReleaseTimeMsec);                                                                              // [0xfa0140] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPortamento
	void SetPortamento(float Portamento);                                                                                    // [0xfa00c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPitchBend
	void SetPitchBend(float PitchBend);                                                                                      // [0xfa0040] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPan
	void SetPan(float Pan);                                                                                                  // [0xf9ffc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscType
	void SetOscType(int32_t OscIndex, ESynth1OscType OscType);                                                               // [0xf9fef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSync
	void SetOscSync(bool bIsSynced);                                                                                         // [0xf9fe60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones
	void SetOscSemitones(int32_t OscIndex, float Semitones);                                                                 // [0xf9fd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);                                                               // [0xf9fcc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscOctave
	void SetOscOctave(int32_t OscIndex, float Octave);                                                                       // [0xf9fbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod
	void SetOscGainMod(int32_t OscIndex, float OscGainMod);                                                                  // [0xf9fb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGain
	void SetOscGain(int32_t OscIndex, float OscGain);                                                                        // [0xf9fa50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);                                                             // [0xf9f980] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscCents
	void SetOscCents(int32_t OscIndex, float Cents);                                                                         // [0xf9f8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain
	void SetModEnvSustainGain(float SustainGain);                                                                            // [0xf9f830] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	void SetModEnvReleaseTime(float Release);                                                                                // [0xf9f7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch
	void SetModEnvPatch(ESynthModEnvPatch InPatchType);                                                                      // [0xf9f730] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert
	void SetModEnvInvert(bool bInvert);                                                                                      // [0xf9f6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth
	void SetModEnvDepth(float Depth);                                                                                        // [0xf9f620] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime
	void SetModEnvDecayTime(float DecayTimeMsec);                                                                            // [0xf9f5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);                                                              // [0xf9f520] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	void SetModEnvBiasInvert(bool bInvert);                                                                                  // [0xf9f490] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime
	void SetModEnvAttackTime(float AttackTimeMsec);                                                                          // [0xf9f410] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOType
	void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);                                                                // [0xf9f340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch
	void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);                                                     // [0xf9f270] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOMode
	void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);                                                                // [0xf9f1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod
	void SetLFOGainMod(int32_t LFOIndex, float GainMod);                                                                     // [0xf9f0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGain
	void SetLFOGain(int32_t LFOIndex, float Gain);                                                                           // [0xf9f000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);                                                         // [0xf9ef30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);                                                               // [0xf9ee60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetGainDb
	void SetGainDb(float GainDb);                                                                                            // [0xf9ede0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterType
	void SetFilterType(ESynthFilterType FilterType);                                                                         // [0xf9ed60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod
	void SetFilterQMod(float FilterQ);                                                                                       // [0xf9ece0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQ
	void SetFilterQ(float FilterQ);                                                                                          // [0xf9ec60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	void SetFilterFrequencyMod(float FilterFrequencyHz);                                                                     // [0xf9ebe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency
	void SetFilterFrequency(float FilterFrequencyHz);                                                                        // [0xf9eb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm
	void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);                                                          // [0xf9eae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison
	void SetEnableUnison(bool EnableUnison);                                                                                 // [0xf9ea50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger
	void SetEnableRetrigger(bool RetriggerEnabled);                                                                          // [0xf9e9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony
	void SetEnablePolyphony(bool bEnablePolyphony);                                                                          // [0xf9e930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch
	bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);                                                                  // [0xf9e860] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato
	void SetEnableLegato(bool LegatoEnabled);                                                                                // [0xf9e7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetDecayTime
	void SetDecayTime(float DecayTimeMsec);                                                                                  // [0xf9e750] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency
	void SetChorusFrequency(float Frequency);                                                                                // [0xf9e6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback
	void SetChorusFeedback(float Feedback);                                                                                  // [0xf9e650] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled
	void SetChorusEnabled(bool EnableChorus);                                                                                // [0xf9e5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth
	void SetChorusDepth(float Depth);                                                                                        // [0xf9e540] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetAttackTime
	void SetAttackTime(float AttackTimeMsec);                                                                                // [0xf9e4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOn
	void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0xf9e3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOff
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);                                                         // [0xf9e280] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.CreatePatch
	FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);     // [0xf9e130] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x0088 (0x000068 - 0x0000F0)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0068   (0x0058)  MISSED
	FSourceEffectBitCrusherSettings                    Settings;                                                   // 0x00C0   (0x0030)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings
	void SetSettings(FSourceEffectBitCrusherBaseSettings& Settings);                                                         // [0xfa5a50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	void SetSampleRateModulator(USoundModulatorBase* Modulator);                                                             // [0xfa59c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	void SetSampleRate(float SampleRate);                                                                                    // [0xfa5940] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	void SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings);                                         // [0xfa5790] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBits
	void SetBits(float Bits);                                                                                                // [0xfa52d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
	void SetBitModulator(USoundModulatorBase* Modulator);                                                                    // [0xfa5240] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x0118 (0x000068 - 0x000180)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0068   (0x00A0)  MISSED
	FSourceEffectChorusSettings                        Settings;                                                   // 0x0108   (0x0078)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulator
	void SetWetModulator(USoundModulatorBase* Modulator);                                                                    // [0xfa6390] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWet
	void SetWet(float WetAmount);                                                                                            // [0xfa6310] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	void SetSpreadModulator(USoundModulatorBase* Modulator);                                                                 // [0xfa6280] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpread
	void SetSpread(float Spread);                                                                                            // [0xfa6200] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings
	void SetSettings(FSourceEffectChorusBaseSettings& Settings);                                                             // [0xfa5b00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetModulationSettings
	void SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings);                                             // [0xfa5840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	void SetFrequencyModulator(USoundModulatorBase* Modulator);                                                              // [0xfa5700] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequency
	void SetFrequency(float Frequency);                                                                                      // [0xfa5680] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	void SetFeedbackModulator(USoundModulatorBase* Modulator);                                                               // [0xfa55f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedback
	void SetFeedback(float Feedback);                                                                                        // [0xfa5570] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulator
	void SetDryModulator(USoundModulatorBase* Modulator);                                                                    // [0xfa54e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDry
	void SetDry(float DryAmount);                                                                                            // [0xfa5460] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulator
	void SetDepthModulator(USoundModulatorBase* Modulator);                                                                  // [0xfa53d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepth
	void SetDepth(float Depth);                                                                                              // [0xfa5350] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x0078 (0x000068 - 0x0000E0)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0068   (0x0050)  MISSED
	FSourceEffectDynamicsProcessorSettings             Settings;                                                   // 0x00B8   (0x0028)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings);                                                    // [0xfa5bb0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UEnvelopeFollowerListener : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnEnvelopeFollowerUpdate;                                   // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00C0   (0x0010)  MISSED
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSourceEffectEnvelopeFollowerSettings              Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);                            // [0xfa6420] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings);                                                     // [0xfa5d10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);                              // [0xfa51b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSourceEffectEQSettings                            Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEQPreset.SetSettings
	void SetSettings(FSourceEffectEQSettings& InSettings);                                                                   // [0xfa5c60] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x0068 (0x000068 - 0x0000D0)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSourceEffectFilterSettings                        Settings;                                                   // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings
	void SetSettings(FSourceEffectFilterSettings& InSettings);                                                               // [0xfa5dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSourceEffectFoldbackDistortionSettings            Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings);                                                   // [0xfa5e90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectMidSideSpreaderSettings               Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings);                                                      // [0xfa5f40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectPannerSettings                        Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings
	void SetSettings(FSourceEffectPannerSettings& InSettings);                                                               // [0xfa5ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSourceEffectPhaserSettings                        Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings
	void SetSettings(FSourceEffectPhaserSettings& InSettings);                                                               // [0xfa60a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x0068 (0x000068 - 0x0000D0)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSourceEffectRingModulationSettings                Settings;                                                   // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings
	void SetSettings(FSourceEffectRingModulationSettings& InSettings);                                                       // [0xfa6160] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x0058 (0x000068 - 0x0000C0)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0068   (0x0040)  MISSED
	FSourceEffectSimpleDelaySettings                   Settings;                                                   // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	void SetSettings(FSourceEffectSimpleDelaySettings& InSettings);                                                          // [0xfaa8e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x4C];                                      // 0x0068   (0x004C)  MISSED
	FSourceEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings
	void SetSettings(FSourceEffectStereoDelaySettings& InSettings);                                                          // [0xfaa990] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectWaveShaperSettings                    Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings
	void SetSettings(FSourceEffectWaveShaperSettings& InSettings);                                                           // [0xfa5ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0030 (0x000028 - 0x000058)
class UAudioImpulseResponse : public UObject
{ 
public:
	TArray<float>                                      ImpulseResponse;                                            // 0x0028   (0x0010)  
	int32_t                                            NumChannels;                                                // 0x0038   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x003C   (0x0004)  
	float                                              NormalizationVolumeDb;                                      // 0x0040   (0x0004)  
	bool                                               bTrueStereo;                                                // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	TArray<float>                                      IRData;                                                     // 0x0048   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x0088 (0x000068 - 0x0000F0)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	UAudioImpulseResponse*                             ImpulseResponse;                                            // 0x0068   (0x0008)  
	FSubmixEffectConvolutionReverbSettings             Settings;                                                   // 0x0070   (0x0028)  
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x0098   (0x0001)  
	bool                                               bEnableHardwareAcceleration;                                // 0x0099   (0x0001)  
	unsigned char                                      UnknownData00_6[0x56];                                      // 0x009A   (0x0056)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings);                                                    // [0xfaaa60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);                                                       // [0xfaa630] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x0050 (0x000068 - 0x0000B8)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSubmixEffectDelaySettings                         Settings;                                                   // 0x009C   (0x000C)  
	FSubmixEffectDelaySettings                         DynamicSettings;                                            // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings
	void SetSettings(FSubmixEffectDelaySettings& InSettings);                                                                // [0xfaab00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	void SetInterpolationTime(float Time);                                                                                   // [0xfaa750] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay
	void SetDelay(float Length);                                                                                             // [0xfaa2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	float GetMaxDelayInMilliseconds();                                                                                       // [0xfaa010] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSubmixEffectFilterSettings                        Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings
	void SetSettings(FSubmixEffectFilterSettings& InSettings);                                                               // [0xfaabc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType
	void SetFilterType(ESubmixFilterType InType);                                                                            // [0xfaa5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	void SetFilterQMod(float InQ);                                                                                           // [0xfaa530] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ
	void SetFilterQ(float InQ);                                                                                              // [0xfaa4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	void SetFilterCutoffFrequencyMod(float InFrequency);                                                                     // [0xfaa430] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	void SetFilterCutoffFrequency(float InFrequency);                                                                        // [0xfaa3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);                                                             // [0xfaa330] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSubmixEffectFlexiverbSettings                     Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	void SetSettings(FSubmixEffectFlexiverbSettings& InSettings);                                                            // [0xfaac70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
/// Size: 0x0068 (0x000068 - 0x0000D0)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSubmixEffectMultibandCompressorSettings           Settings;                                                   // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
	void SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings);                                                  // [0xfaad30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectStereoDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x4C];                                      // 0x0068   (0x004C)  MISSED
	FSubmixEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoDelayPreset.SetSettings
	void SetSettings(FSubmixEffectStereoDelaySettings& InSettings);                                                          // [0xfaa990] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0068   (0x0040)  MISSED
	FSubmixEffectTapDelaySettings                      Settings;                                                   // 0x00A8   (0x0018)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00C0   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap
	void SetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0xfaafc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings
	void SetSettings(FSubmixEffectTapDelaySettings& InSettings);                                                             // [0xfaadf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	void SetInterpolationTime(float Time);                                                                                   // [0xfaa7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	void RemoveTap(int32_t TapId);                                                                                           // [0xfaa220] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	void GetTapIds(TArray<int32_t>& TapIds);                                                                                 // [0xfaa130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap
	void GetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0xfaa050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	float GetMaxDelayInMilliseconds();                                                                                       // [0xfaa030] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap
	void AddTap(int32_t& TapId);                                                                                             // [0xfa9f80] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x0370 (0x000108 - 0x000478)
class USynth2DSlider : public UWidget
{ 
public:
	float                                              ValueX;                                                     // 0x0108   (0x0004)  
	float                                              ValueY;                                                     // 0x010C   (0x0004)  
	FDelegateProperty                                  ValueXDelegate;                                             // 0x0110   (0x0010)  
	FDelegateProperty                                  ValueYDelegate;                                             // 0x0120   (0x0010)  
	FSynth2DSliderStyle                                WidgetStyle;                                                // 0x0130   (0x02B8)  
	FLinearColor                                       SliderHandleColor;                                          // 0x03E8   (0x0010)  
	bool                                               IndentHandle;                                               // 0x03F8   (0x0001)  
	bool                                               Locked;                                                     // 0x03F9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x03FA   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x03FC   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0400   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0401   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x0408   (0x0010)  
	FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x0418   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x0428   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x0438   (0x0010)  
	FMulticastInlineDelegate                           OnValueChangedX;                                            // 0x0448   (0x0010)  
	FMulticastInlineDelegate                           OnValueChangedY;                                            // 0x0458   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0468   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.Synth2DSlider.SetValue
	void SetValue(FVector2D InValue);                                                                                        // [0xfab0a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetStepSize
	void SetStepSize(float InValue);                                                                                         // [0xfaaf40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor
	void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0xfaaeb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetLocked
	void SetLocked(bool InValue);                                                                                            // [0xfaa850] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetIndentHandle
	void SetIndentHandle(bool InValue);                                                                                      // [0xfaa6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.GetValue
	FVector2D GetValue();                                                                                                    // [0xfaa1e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x03C0 (0x0006C0 - 0x000A80)
class UGranularSynth : public USynthComponent
{ 
public:
	USoundWave*                                        GranulatedSoundWave;                                        // 0x06C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x3B8];                                     // 0x06C8   (0x03B8)  MISSED


	/// Functions
	// Function /Script/Synthesis.GranularSynth.SetSustainGain
	void SetSustainGain(float SustainGain);                                                                                  // [0xfaf590] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetSoundWave
	void SetSoundWave(USoundWave* InSoundWave);                                                                              // [0xfaf470] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetScrubMode
	void SetScrubMode(bool bScrubMode);                                                                                      // [0xfaf2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec
	void SetReleaseTimeMsec(float ReleaseTimeMsec);                                                                          // [0xfaf250] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlayheadTime
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);                           // [0xfaeba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed
	void SetPlaybackSpeed(float InPlayheadRate);                                                                             // [0xfaeb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainVolume
	void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);                                                            // [0xfae890] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond
	void SetGrainsPerSecond(float InGrainsPerSecond);                                                                        // [0xfae950] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainProbability
	void SetGrainProbability(float InGrainProbability);                                                                      // [0xfae810] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPitch
	void SetGrainPitch(float BasePitch, FVector2D PitchRange);                                                               // [0xfae750] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPan
	void SetGrainPan(float BasePan, FVector2D PanRange);                                                                     // [0xfae690] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType
	void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);                                                      // [0xfae610] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainDuration
	void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);                                                  // [0xfae550] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetDecayTime
	void SetDecayTime(float DecayTimeMsec);                                                                                  // [0xfadc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetAttackTime
	void SetAttackTime(float AttackTimeMsec);                                                                                // [0xfadc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOn
	void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0xfad420] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOff
	void NoteOff(float Note, bool bKill);                                                                                    // [0xfad2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.IsLoaded
	bool IsLoaded();                                                                                                         // [0xfad260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetSampleDuration
	float GetSampleDuration();                                                                                               // [0xfad200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime
	float GetCurrentPlayheadTime();                                                                                          // [0xfacc80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0148 (0x000028 - 0x000170)
class UMonoWaveTableSynthPreset : public UObject
{ 
public:
	FString                                            PresetName;                                                 // 0x0028   (0x0010)  
	bool                                               bLockKeyframesToGridBool;                                   // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            LockKeyframesToGrid;                                        // 0x003C   (0x0004)  
	int32_t                                            WaveTableResolution;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FRuntimeFloatCurve>                         WaveTable;                                                  // 0x0048   (0x0010)  
	bool                                               bNormalizeWaveTables;                                       // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x117];                                     // 0x0059   (0x0117)  MISSED
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0740 (0x0006C0 - 0x000E00)
class USynthComponentMonoWaveTable : public USynthComponent
{ 
public:
	FMulticastInlineDelegate                           OnTableAltered;                                             // 0x06C0   (0x0010)  
	FMulticastInlineDelegate                           OnNumTablesChanged;                                         // 0x06D0   (0x0010)  
	UMonoWaveTableSynthPreset*                         CurrentPreset;                                              // 0x06E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x718];                                     // 0x06E8   (0x0718)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	void SetWaveTablePosition(float InPosition);                                                                             // [0xfaf720] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	void SetSustainPedalState(bool InSustainPedalState);                                                                     // [0xfaf610] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	void SetPosLfoType(ESynthLFOType InLfoType);                                                                             // [0xfaedb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	void SetPosLfoFrequency(float InLfoFrequency);                                                                           // [0xfaed30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	void SetPosLfoDepth(float InLfoDepth);                                                                                   // [0xfaecb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	void SetPositionEnvelopeSustainGain(float InSustainGain);                                                                // [0xfaf1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);                                                            // [0xfaf150] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	void SetPositionEnvelopeInvert(bool bInInvert);                                                                          // [0xfaf0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	void SetPositionEnvelopeDepth(float InDepth);                                                                            // [0xfaf040] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);                                                                // [0xfaefc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);                                                                  // [0xfaef30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	void SetPositionEnvelopeBiasDepth(float InDepth);                                                                        // [0xfaeeb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);                                                              // [0xfaee30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	void SetLowPassFilterResonance(float InNewQ);                                                                            // [0xfae9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	void SetFrequencyWithMidiNote(float InMidiNote);                                                                         // [0xfae4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	void SetFrequencyPitchBend(float FrequencyOffsetCents);                                                                  // [0xfae450] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency
	void SetFrequency(float FrequencyHz);                                                                                    // [0xfae350] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	void SetFilterEnvelopeSustainGain(float InSustainGain);                                                                  // [0xfae250] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);                                                              // [0xfae1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);                                                                 // [0xfae2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	void SetFilterEnvelopeInvert(bool bInInvert);                                                                            // [0xfae140] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	void SetFilterEnvelopeDepth(float InDepth);                                                                              // [0xfae0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);                                                                    // [0xfae030] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	void SetFilterEnvelopeBiasDepth(float InDepth);                                                                          // [0xfadfb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);                                                                // [0xfadf30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);                                           // [0xfade20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent);                                                            // [0xfadd50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex);                            // [0xfadc80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	void SetAmpEnvelopeSustainGain(float InSustainGain);                                                                     // [0xfadb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);                                                                 // [0xfadb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	void SetAmpEnvelopeInvert(bool bInInvert);                                                                               // [0xfada70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	void SetAmpEnvelopeDepth(float InDepth);                                                                                 // [0xfad9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);                                                                     // [0xfad970] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);                                                                       // [0xfad8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	void SetAmpEnvelopeBiasDepth(float InDepth);                                                                             // [0xfad860] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);                                                                   // [0xfad7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	void RefreshWaveTable(int32_t Index);                                                                                    // [0xfad630] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	void RefreshAllWaveTables();                                                                                             // [0xfad610] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn
	void NoteOn(float InMidiNote, float InVelocity);                                                                         // [0xfad540] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff
	void NoteOff(float InMidiNote);                                                                                          // [0xfad3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	int32_t GetNumTableEntries();                                                                                            // [0xfad1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	int32_t GetMaxTableIndex();                                                                                              // [0xfad190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	TArray<float> GetKeyFrameValuesForTable(float TableIndex);                                                               // [0xfacd50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	float GetCurveTangent(int32_t TableIndex);                                                                               // [0xfaccb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthComponentToneGenerator
/// Size: 0x0020 (0x0006C0 - 0x0006E0)
class USynthComponentToneGenerator : public USynthComponent
{ 
public:
	float                                              Frequency;                                                  // 0x06C0   (0x0004)  
	float                                              Volume;                                                     // 0x06C4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x06C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetVolume
	void SetVolume(float InVolume);                                                                                          // [0xfaf6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetFrequency
	void SetFrequency(float InFrequency);                                                                                    // [0xfae3d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x0130 (0x0006C0 - 0x0007F0)
class USynthSamplePlayer : public USynthComponent
{ 
public:
	USoundWave*                                        SoundWave;                                                  // 0x06C0   (0x0008)  
	FMulticastInlineDelegate                           OnSampleLoaded;                                             // 0x06C8   (0x0010)  
	FMulticastInlineDelegate                           OnSamplePlaybackProgress;                                   // 0x06D8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x108];                                     // 0x06E8   (0x0108)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave
	void SetSoundWave(USoundWave* InSoundWave);                                                                              // [0xfaf500] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	void SetScrubTimeWidth(float InScrubTimeWidthSec);                                                                       // [0xfaf3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode
	void SetScrubMode(bool bScrubMode);                                                                                      // [0xfaf360] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetPitch
	void SetPitch(float InPitch, float TimeSec);                                                                             // [0xfaea50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SeekToTime
	void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);                                              // [0xfad6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.IsLoaded
	bool IsLoaded();                                                                                                         // [0xfad290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration
	float GetSampleDuration();                                                                                               // [0xfad230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	float GetCurrentPlaybackProgressTime();                                                                                  // [0xfacc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	float GetCurrentPlaybackProgressPercent();                                                                               // [0xfacc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x02F8 (0x000108 - 0x000400)
class USynthKnob : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0108   (0x0004)  
	float                                              StepSize;                                                   // 0x010C   (0x0004)  
	float                                              MouseSpeed;                                                 // 0x0110   (0x0004)  
	float                                              MouseFineTuneSpeed;                                         // 0x0114   (0x0004)  
	bool                                               ShowTooltipInfo;                                            // 0x0118:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0119   (0x0007)  MISSED
	FText                                              ParameterName;                                              // 0x0120   (0x0018)  
	FText                                              ParameterUnits;                                             // 0x0138   (0x0018)  
	FDelegateProperty                                  ValueDelegate;                                              // 0x0150   (0x0010)  
	FSynthKnobStyle                                    WidgetStyle;                                                // 0x0160   (0x0238)  
	bool                                               Locked;                                                     // 0x0398   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0399   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x039A   (0x0006)  MISSED
	FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x03A0   (0x0010)  
	FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x03B0   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x03C0   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x03D0   (0x0010)  
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x03E0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x03F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthKnob.SetValue
	void SetValue(float InValue);                                                                                            // [0xfb0040] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetStepSize
	void SetStepSize(float InValue);                                                                                         // [0xfaffc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetLocked
	void SetLocked(bool InValue);                                                                                            // [0xfaff30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.GetValue
	float GetValue();                                                                                                        // [0xfaff00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FModularSynthPresetBankEntry
{ 
	FString                                            PresetName;                                                 // 0x0000   (0x0010)  
	FModularSynthPreset                                Preset;                                                     // 0x0010   (0x00E0)  
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FModularSynthPreset : FTableRowBase
{ 
	bool                                               bEnablePolyphony;                                           // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	ESynth1OscType                                     Osc1Type;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Osc1Gain;                                                   // 0x0010   (0x0004)  
	float                                              Osc1Octave;                                                 // 0x0014   (0x0004)  
	float                                              Osc1Semitones;                                              // 0x0018   (0x0004)  
	float                                              Osc1Cents;                                                  // 0x001C   (0x0004)  
	float                                              Osc1PulseWidth;                                             // 0x0020   (0x0004)  
	ESynth1OscType                                     Osc2Type;                                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Osc2Gain;                                                   // 0x0028   (0x0004)  
	float                                              Osc2Octave;                                                 // 0x002C   (0x0004)  
	float                                              Osc2Semitones;                                              // 0x0030   (0x0004)  
	float                                              Osc2Cents;                                                  // 0x0034   (0x0004)  
	float                                              Osc2PulseWidth;                                             // 0x0038   (0x0004)  
	float                                              Portamento;                                                 // 0x003C   (0x0004)  
	bool                                               bEnableUnison;                                              // 0x0040:0 (0x0001)  
	bool                                               bEnableOscillatorSync;                                      // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Spread;                                                     // 0x0044   (0x0004)  
	float                                              Pan;                                                        // 0x0048   (0x0004)  
	float                                              LFO1Frequency;                                              // 0x004C   (0x0004)  
	float                                              LFO1Gain;                                                   // 0x0050   (0x0004)  
	ESynthLFOType                                      LFO1Type;                                                   // 0x0054   (0x0001)  
	ESynthLFOMode                                      LFO1Mode;                                                   // 0x0055   (0x0001)  
	ESynthLFOPatchType                                 LFO1PatchType;                                              // 0x0056   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              LFO2Frequency;                                              // 0x0058   (0x0004)  
	float                                              LFO2Gain;                                                   // 0x005C   (0x0004)  
	ESynthLFOType                                      LFO2Type;                                                   // 0x0060   (0x0001)  
	ESynthLFOMode                                      LFO2Mode;                                                   // 0x0061   (0x0001)  
	ESynthLFOPatchType                                 LFO2PatchType;                                              // 0x0062   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0063   (0x0001)  MISSED
	float                                              GainDb;                                                     // 0x0064   (0x0004)  
	float                                              AttackTime;                                                 // 0x0068   (0x0004)  
	float                                              DecayTime;                                                  // 0x006C   (0x0004)  
	float                                              SustainGain;                                                // 0x0070   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0074   (0x0004)  
	ESynthModEnvPatch                                  ModEnvPatchType;                                            // 0x0078   (0x0001)  
	ESynthModEnvBiasPatch                              ModEnvBiasPatchType;                                        // 0x0079   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	bool                                               bInvertModulationEnvelope;                                  // 0x007C:0 (0x0001)  
	bool                                               bInvertModulationEnvelopeBias;                              // 0x007C:1 (0x0001)  
	unsigned char                                      UnknownData07_4[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              ModulationEnvelopeDepth;                                    // 0x0080   (0x0004)  
	float                                              ModulationEnvelopeAttackTime;                               // 0x0084   (0x0004)  
	float                                              ModulationEnvelopeDecayTime;                                // 0x0088   (0x0004)  
	float                                              ModulationEnvelopeSustainGain;                              // 0x008C   (0x0004)  
	float                                              ModulationEnvelopeReleaseTime;                              // 0x0090   (0x0004)  
	bool                                               bLegato;                                                    // 0x0094:0 (0x0001)  
	bool                                               bRetrigger;                                                 // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData08_4[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              FilterFrequency;                                            // 0x0098   (0x0004)  
	float                                              FilterQ;                                                    // 0x009C   (0x0004)  
	ESynthFilterType                                   FilterType;                                                 // 0x00A0   (0x0001)  
	ESynthFilterAlgorithm                              FilterAlgorithm;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData09_5[0x2];                                       // 0x00A2   (0x0002)  MISSED
	bool                                               bStereoDelayEnabled;                                        // 0x00A4:0 (0x0001)  
	unsigned char                                      UnknownData10_4[0x3];                                       // 0x00A5   (0x0003)  MISSED
	ESynthStereoDelayMode                              StereoDelayMode;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              StereoDelayTime;                                            // 0x00AC   (0x0004)  
	float                                              StereoDelayFeedback;                                        // 0x00B0   (0x0004)  
	float                                              StereoDelayWetlevel;                                        // 0x00B4   (0x0004)  
	float                                              StereoDelayRatio;                                           // 0x00B8   (0x0004)  
	bool                                               bChorusEnabled;                                             // 0x00BC:0 (0x0001)  
	unsigned char                                      UnknownData12_4[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              ChorusDepth;                                                // 0x00C0   (0x0004)  
	float                                              ChorusFeedback;                                             // 0x00C4   (0x0004)  
	float                                              ChorusFrequency;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FEpicSynth1Patch>                           Patches;                                                    // 0x00D0   (0x0010)  
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEpicSynth1Patch
{ 
	ESynth1PatchSource                                 PatchSource;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSynth1PatchCable>                          PatchCables;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSynth1PatchCable
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	ESynth1PatchDestination                            Destination;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPatchId
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSourceEffectBitCrusherSettings
{ 
	float                                              CrushedSampleRate;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSoundModulationDestinationSettings                SampleRateModulation;                                       // 0x0008   (0x0010)  
	float                                              CrushedBits;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSoundModulationDestinationSettings                BitModulation;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherBaseSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectBitCrusherBaseSettings
{ 
	float                                              SampleRate;                                                 // 0x0000   (0x0004)  
	float                                              BitDepth;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0078 (0x000000 - 0x000078)
struct FSourceEffectChorusSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
	FSoundModulationDestinationSettings                DepthModulation;                                            // 0x0018   (0x0010)  
	FSoundModulationDestinationSettings                FrequencyModulation;                                        // 0x0028   (0x0010)  
	FSoundModulationDestinationSettings                FeedbackModulation;                                         // 0x0038   (0x0010)  
	FSoundModulationDestinationSettings                WetModulation;                                              // 0x0048   (0x0010)  
	FSoundModulationDestinationSettings                DryModulation;                                              // 0x0058   (0x0010)  
	FSoundModulationDestinationSettings                SpreadModulation;                                           // 0x0068   (0x0010)  
};

/// Struct /Script/Synthesis.SourceEffectChorusBaseSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSourceEffectChorusBaseSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSourceEffectDynamicsProcessorSettings
{ 
	ESourceEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESourceEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0008   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x000C   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0010   (0x0004)  
	float                                              Ratio;                                                      // 0x0014   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0018   (0x0004)  
	float                                              InputGainDb;                                                // 0x001C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0020   (0x0004)  
	bool                                               bStereoLinked;                                              // 0x0024:0 (0x0001)  
	bool                                               bAnalogMode;                                                // 0x0024:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectEnvelopeFollowerSettings
{ 
	float                                              AttackTime;                                                 // 0x0000   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0004   (0x0004)  
	EEnvelopeFollowerPeakMode                          PeakMode;                                                   // 0x0008   (0x0001)  
	bool                                               bIsAnalogMode;                                              // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectEQSettings
{ 
	TArray<FSourceEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled;                                                   // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSourceEffectFilterSettings
{ 
	ESourceEffectFilterCircuit                         FilterCircuit;                                              // 0x0000   (0x0001)  
	ESourceEffectFilterType                            FilterType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CutoffFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSourceEffectFilterAudioBusModulationSettings
{ 
	UAudioBus*                                         AudioBus;                                                   // 0x0000   (0x0008)  
	int32_t                                            EnvelopeFollowerAttackTimeMsec;                             // 0x0008   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTimeMsec;                            // 0x000C   (0x0004)  
	float                                              EnvelopeGainMultiplier;                                     // 0x0010   (0x0004)  
	ESourceEffectFilterParam                           FilterParam;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              MinFrequencyModulation;                                     // 0x0018   (0x0004)  
	float                                              MaxFrequencyModulation;                                     // 0x001C   (0x0004)  
	float                                              MinResonanceModulation;                                     // 0x0020   (0x0004)  
	float                                              MaxResonanceModulation;                                     // 0x0024   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectFoldbackDistortionSettings
{ 
	float                                              InputGainDb;                                                // 0x0000   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0004   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectMidSideSpreaderSettings
{ 
	float                                              SpreadAmount;                                               // 0x0000   (0x0004)  
	EStereoChannelMode                                 InputMode;                                                  // 0x0004   (0x0001)  
	EStereoChannelMode                                 OutputMode;                                                 // 0x0005   (0x0001)  
	bool                                               bEqualPower;                                                // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0007   (0x0001)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectPannerSettings
{ 
	float                                              Spread;                                                     // 0x0000   (0x0004)  
	float                                              Pan;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectPhaserSettings
{ 
	float                                              WetLevel;                                                   // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	EPhaserLFOType                                     LFOType;                                                    // 0x000C   (0x0001)  
	bool                                               UseQuadraturePhase;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSourceEffectRingModulationSettings
{ 
	ERingModulatorTypeSourceEffect                     ModulatorType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Depth;                                                      // 0x0008   (0x0004)  
	float                                              DryLevel;                                                   // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	UAudioBus*                                         AudioBusModulator;                                          // 0x0018   (0x0008)  
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSourceEffectSimpleDelaySettings
{ 
	float                                              SpeedOfSound;                                               // 0x0000   (0x0004)  
	float                                              DelayAmount;                                                // 0x0004   (0x0004)  
	float                                              DryAmount;                                                  // 0x0008   (0x0004)  
	float                                              WetAmount;                                                  // 0x000C   (0x0004)  
	float                                              Feedback;                                                   // 0x0010   (0x0004)  
	bool                                               bDelayBasedOnDistance;                                      // 0x0014:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FSourceEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectWaveShaperSettings
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSubmixEffectConvolutionReverbSettings
{ 
	float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)  
	bool                                               bBypass;                                                    // 0x0004   (0x0001)  
	bool                                               bMixInputChannelFormatToImpulseResponseFormat;              // 0x0005   (0x0001)  
	bool                                               bMixReverbOutputToOutputChannelFormat;                      // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0007   (0x0001)  MISSED
	float                                              SurroundRearChannelBleedDb;                                 // 0x0008   (0x0004)  
	bool                                               bInvertRearChannelBleedPhase;                               // 0x000C   (0x0001)  
	bool                                               bSurroundRearChannelFlip;                                   // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              SurroundRearChannelBleedAmount;                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	UAudioImpulseResponse*                             ImpulseResponse;                                            // 0x0018   (0x0008)  
	bool                                               AllowHArdwareAcceleration;                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	float                                              DelayLength;                                                // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectFilterSettings
{ 
	ESubmixFilterType                                  FilterType;                                                 // 0x0000   (0x0001)  
	ESubmixFilterAlgorithm                             FilterAlgorithm;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectFlexiverbSettings
{ 
	float                                              PreDelay;                                                   // 0x0000   (0x0004)  
	float                                              DecayTime;                                                  // 0x0004   (0x0004)  
	float                                              RoomDampening;                                              // 0x0008   (0x0004)  
	int32_t                                            Complexity;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectMultibandCompressorSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSubmixEffectMultibandCompressorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	bool                                               bLinkChannels;                                              // 0x0008   (0x0001)  
	bool                                               bAnalogMode;                                                // 0x0009   (0x0001)  
	bool                                               bFourPole;                                                  // 0x000A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x000B   (0x0005)  MISSED
	TArray<FDynamicsBandSettings>                      Bands;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Synthesis.DynamicsBandSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDynamicsBandSettings
{ 
	float                                              CrossoverTopFrequency;                                      // 0x0000   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0004   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x0008   (0x0004)  
	float                                              ThresholdDb;                                                // 0x000C   (0x0004)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0014   (0x0004)  
	float                                              InputGainDb;                                                // 0x0018   (0x0004)  
	float                                              OutputGainDb;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FSubmixEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSubmixEffectTapDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	TArray<FTapDelayInfo>                              Taps;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTapDelayInfo
{ 
	ETapLineMode                                       TapLineMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayLength;                                                // 0x0004   (0x0004)  
	float                                              Gain;                                                       // 0x0008   (0x0004)  
	int32_t                                            OutputChannel;                                              // 0x000C   (0x0004)  
	float                                              PanInDegrees;                                               // 0x0010   (0x0004)  
	int32_t                                            TapId;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x02B0 (0x000008 - 0x0002B8)
struct FSynth2DSliderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        NormalThumbImage;                                           // 0x0008   (0x0088)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x0090   (0x0088)  
	FSlateBrush                                        NormalBarImage;                                             // 0x0118   (0x0088)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x01A0   (0x0088)  
	FSlateBrush                                        BackgroundImage;                                            // 0x0228   (0x0088)  
	float                                              BarThickness;                                               // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02B4   (0x0004)  MISSED
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0230 (0x000008 - 0x000238)
struct FSynthKnobStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        LargeKnob;                                                  // 0x0008   (0x0088)  
	FSlateBrush                                        LargeKnobOverlay;                                           // 0x0090   (0x0088)  
	FSlateBrush                                        MediumKnob;                                                 // 0x0118   (0x0088)  
	FSlateBrush                                        MediumKnobOverlay;                                          // 0x01A0   (0x0088)  
	float                                              MinValueAngle;                                              // 0x0228   (0x0004)  
	float                                              MaxValueAngle;                                              // 0x022C   (0x0004)  
	ESynthKnobSize                                     KnobSize;                                                   // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0231   (0x0007)  MISSED
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0008 (0x000008 - 0x000010)
struct FSynthSlateStyle : FSlateWidgetStyle
{ 
	ESynthSlateSizeType                                SizeType;                                                   // 0x0008   (0x0001)  
	ESynthSlateColorStyle                              ColorStyle;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x16
enum ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain                                                = 0,
	ESynth1PatchDestination__Osc1Frequency                                           = 1,
	ESynth1PatchDestination__Osc1Pulsewidth                                          = 2,
	ESynth1PatchDestination__Osc2Gain                                                = 3,
	ESynth1PatchDestination__Osc2Frequency                                           = 4,
	ESynth1PatchDestination__Osc2Pulsewidth                                          = 5,
	ESynth1PatchDestination__FilterFrequency                                         = 6,
	ESynth1PatchDestination__FilterQ                                                 = 7,
	ESynth1PatchDestination__Gain                                                    = 8,
	ESynth1PatchDestination__Pan                                                     = 9,
	ESynth1PatchDestination__LFO1Frequency                                           = 10,
	ESynth1PatchDestination__LFO1Gain                                                = 11,
	ESynth1PatchDestination__LFO2Frequency                                           = 12,
	ESynth1PatchDestination__LFO2Gain                                                = 13,
	ESynth1PatchDestination__Count                                                   = 14,
	ESynth1PatchDestination__ESynth1PatchDestination_MAX                             = 15
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x06
enum ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1                                                         = 0,
	ESynth1PatchSource__LFO2                                                         = 1,
	ESynth1PatchSource__Envelope                                                     = 2,
	ESynth1PatchSource__BiasEnvelope                                                 = 3,
	ESynth1PatchSource__Count                                                        = 4,
	ESynth1PatchSource__ESynth1PatchSource_MAX                                       = 5
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x05
enum ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal                                                    = 0,
	ESynthStereoDelayMode__Cross                                                     = 1,
	ESynthStereoDelayMode__PingPong                                                  = 2,
	ESynthStereoDelayMode__Count                                                     = 3,
	ESynthStereoDelayMode__ESynthStereoDelayMode_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x05
enum ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole                                                   = 0,
	ESynthFilterAlgorithm__StateVariable                                             = 1,
	ESynthFilterAlgorithm__Ladder                                                    = 2,
	ESynthFilterAlgorithm__Count                                                     = 3,
	ESynthFilterAlgorithm__ESynthFilterAlgorithm_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x06
enum ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass                                                        = 0,
	ESynthFilterType__HighPass                                                       = 1,
	ESynthFilterType__BandPass                                                       = 2,
	ESynthFilterType__BandStop                                                       = 3,
	ESynthFilterType__Count                                                          = 4,
	ESynthFilterType__ESynthFilterType_MAX                                           = 5
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x10
enum ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone                                               = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq                                            = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq                                         = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ                                            = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain                                           = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain                                           = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq                                           = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq                                           = 7,
	ESynthModEnvBiasPatch__Count                                                     = 8,
	ESynthModEnvBiasPatch__ESynthModEnvBiasPatch_MAX                                 = 9
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x10
enum ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone                                                   = 0,
	ESynthModEnvPatch__PatchToOscFreq                                                = 1,
	ESynthModEnvPatch__PatchToFilterFreq                                             = 2,
	ESynthModEnvPatch__PatchToFilterQ                                                = 3,
	ESynthModEnvPatch__PatchToLFO1Gain                                               = 4,
	ESynthModEnvPatch__PatchToLFO2Gain                                               = 5,
	ESynthModEnvPatch__PatchToLFO1Freq                                               = 6,
	ESynthModEnvPatch__PatchToLFO2Freq                                               = 7,
	ESynthModEnvPatch__Count                                                         = 8,
	ESynthModEnvPatch__ESynthModEnvPatch_MAX                                         = 9
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x11
enum ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone                                                  = 0,
	ESynthLFOPatchType__PatchToGain                                                  = 1,
	ESynthLFOPatchType__PatchToOscFreq                                               = 2,
	ESynthLFOPatchType__PatchToFilterFreq                                            = 3,
	ESynthLFOPatchType__PatchToFilterQ                                               = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth                                         = 5,
	ESynthLFOPatchType__PatchToOscPan                                                = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency                                     = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain                                          = 8,
	ESynthLFOPatchType__Count                                                        = 9,
	ESynthLFOPatchType__ESynthLFOPatchType_MAX                                       = 10
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x05
enum ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync                                                              = 0,
	ESynthLFOMode__OneShot                                                           = 1,
	ESynthLFOMode__Free                                                              = 2,
	ESynthLFOMode__Count                                                             = 3,
	ESynthLFOMode__ESynthLFOMode_MAX                                                 = 4
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x09
enum ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine                                                              = 0,
	ESynthLFOType__UpSaw                                                             = 1,
	ESynthLFOType__DownSaw                                                           = 2,
	ESynthLFOType__Square                                                            = 3,
	ESynthLFOType__Triangle                                                          = 4,
	ESynthLFOType__Exponential                                                       = 5,
	ESynthLFOType__RandomSampleHold                                                  = 6,
	ESynthLFOType__Count                                                             = 7,
	ESynthLFOType__ESynthLFOType_MAX                                                 = 8
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x07
enum ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine                                                             = 0,
	ESynth1OscType__Saw                                                              = 1,
	ESynth1OscType__Triangle                                                         = 2,
	ESynth1OscType__Square                                                           = 3,
	ESynth1OscType__Noise                                                            = 4,
	ESynth1OscType__Count                                                            = 5,
	ESynth1OscType__ESynth1OscType_MAX                                               = 6
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x05
enum ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESourceEffectDynamicsPeakMode__Peak                                              = 2,
	ESourceEffectDynamicsPeakMode__Count                                             = 3,
	ESourceEffectDynamicsPeakMode__ESourceEffectDynamicsPeakMode_MAX                 = 4
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x06
enum ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor                                   = 0,
	ESourceEffectDynamicsProcessorType__Limiter                                      = 1,
	ESourceEffectDynamicsProcessorType__Expander                                     = 2,
	ESourceEffectDynamicsProcessorType__Gate                                         = 3,
	ESourceEffectDynamicsProcessorType__Count                                        = 4,
	ESourceEffectDynamicsProcessorType__ESourceEffectDynamicsProcessorType_MAX       = 5
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x05
enum EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared                                           = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared                                       = 1,
	EEnvelopeFollowerPeakMode__Peak                                                  = 2,
	EEnvelopeFollowerPeakMode__Count                                                 = 3,
	EEnvelopeFollowerPeakMode__EEnvelopeFollowerPeakMode_MAX                         = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterParam
/// Size: 0x04
enum ESourceEffectFilterParam : uint8_t
{
	ESourceEffectFilterParam__FilterFrequency                                        = 0,
	ESourceEffectFilterParam__FilterResonance                                        = 1,
	ESourceEffectFilterParam__Count                                                  = 2,
	ESourceEffectFilterParam__ESourceEffectFilterParam_MAX                           = 3
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x06
enum ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass                                                 = 0,
	ESourceEffectFilterType__HighPass                                                = 1,
	ESourceEffectFilterType__BandPass                                                = 2,
	ESourceEffectFilterType__BandStop                                                = 3,
	ESourceEffectFilterType__Count                                                   = 4,
	ESourceEffectFilterType__ESourceEffectFilterType_MAX                             = 5
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x05
enum ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole                                              = 0,
	ESourceEffectFilterCircuit__StateVariable                                        = 1,
	ESourceEffectFilterCircuit__Ladder                                               = 2,
	ESourceEffectFilterCircuit__Count                                                = 3,
	ESourceEffectFilterCircuit__ESourceEffectFilterCircuit_MAX                       = 4
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x04
enum EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide                                                      = 0,
	EStereoChannelMode__LeftRight                                                    = 1,
	EStereoChannelMode__count                                                        = 2,
	EStereoChannelMode__EStereoChannelMode_MAX                                       = 3
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x09
enum EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine                                                             = 0,
	EPhaserLFOType__UpSaw                                                            = 1,
	EPhaserLFOType__DownSaw                                                          = 2,
	EPhaserLFOType__Square                                                           = 3,
	EPhaserLFOType__Triangle                                                         = 4,
	EPhaserLFOType__Exponential                                                      = 5,
	EPhaserLFOType__RandomSampleHold                                                 = 6,
	EPhaserLFOType__Count                                                            = 7,
	EPhaserLFOType__EPhaserLFOType_MAX                                               = 8
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x06
enum ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine                                             = 0,
	ERingModulatorTypeSourceEffect__Saw                                              = 1,
	ERingModulatorTypeSourceEffect__Triangle                                         = 2,
	ERingModulatorTypeSourceEffect__Square                                           = 3,
	ERingModulatorTypeSourceEffect__Count                                            = 4,
	ERingModulatorTypeSourceEffect__ERingModulatorTypeSourceEffect_MAX               = 5
};

/// Enum /Script/Synthesis.EStereoDelayFiltertype
/// Size: 0x06
enum EStereoDelayFiltertype : uint8_t
{
	EStereoDelayFiltertype__Lowpass                                                  = 0,
	EStereoDelayFiltertype__Highpass                                                 = 1,
	EStereoDelayFiltertype__Bandpass                                                 = 2,
	EStereoDelayFiltertype__Notch                                                    = 3,
	EStereoDelayFiltertype__Count                                                    = 4,
	EStereoDelayFiltertype__EStereoDelayFiltertype_MAX                               = 5
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x05
enum EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal                                                 = 0,
	EStereoDelaySourceEffect__Cross                                                  = 1,
	EStereoDelaySourceEffect__PingPong                                               = 2,
	EStereoDelaySourceEffect__Count                                                  = 3,
	EStereoDelaySourceEffect__EStereoDelaySourceEffect_MAX                           = 4
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x04
enum ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256                            = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512                            = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024                           = 2,
	ESubmixEffectConvolutionReverbBlockSize__ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x05
enum ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole                                                  = 0,
	ESubmixFilterAlgorithm__StateVariable                                            = 1,
	ESubmixFilterAlgorithm__Ladder                                                   = 2,
	ESubmixFilterAlgorithm__Count                                                    = 3,
	ESubmixFilterAlgorithm__ESubmixFilterAlgorithm_MAX                               = 4
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x06
enum ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass                                                       = 0,
	ESubmixFilterType__HighPass                                                      = 1,
	ESubmixFilterType__BandPass                                                      = 2,
	ESubmixFilterType__BandStop                                                      = 3,
	ESubmixFilterType__Count                                                         = 4,
	ESubmixFilterType__ESubmixFilterType_MAX                                         = 5
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x04
enum ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel                                                      = 0,
	ETapLineMode__Panning                                                            = 1,
	ETapLineMode__Disabled                                                           = 2,
	ETapLineMode__ETapLineMode_MAX                                                   = 3
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x04
enum EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning                                            = 0,
	EGranularSynthSeekType__FromCurrentPosition                                      = 1,
	EGranularSynthSeekType__Count                                                    = 2,
	EGranularSynthSeekType__EGranularSynthSeekType_MAX                               = 3
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x16
enum EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular                                          = 0,
	EGranularSynthEnvelopeType__Triangle                                             = 1,
	EGranularSynthEnvelopeType__DownwardTriangle                                     = 2,
	EGranularSynthEnvelopeType__UpwardTriangle                                       = 3,
	EGranularSynthEnvelopeType__ExponentialDecay                                     = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease                                  = 5,
	EGranularSynthEnvelopeType__Gaussian                                             = 6,
	EGranularSynthEnvelopeType__Hanning                                              = 7,
	EGranularSynthEnvelopeType__Lanczos                                              = 8,
	EGranularSynthEnvelopeType__Cosine                                               = 9,
	EGranularSynthEnvelopeType__CosineSquared                                        = 10,
	EGranularSynthEnvelopeType__Welch                                                = 11,
	EGranularSynthEnvelopeType__Blackman                                             = 12,
	EGranularSynthEnvelopeType__BlackmanHarris                                       = 13,
	EGranularSynthEnvelopeType__Count                                                = 14,
	EGranularSynthEnvelopeType__EGranularSynthEnvelopeType_MAX                       = 15
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x04
enum CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP                                               = 0,
	CurveInterpolationType__LINEAR                                                   = 1,
	CurveInterpolationType__CONSTANT                                                 = 2,
	CurveInterpolationType__CurveInterpolationType_MAX                               = 3
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x05
enum ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning                                             = 0,
	ESamplePlayerSeekType__FromCurrentPosition                                       = 1,
	ESamplePlayerSeekType__FromEnd                                                   = 2,
	ESamplePlayerSeekType__Count                                                     = 3,
	ESamplePlayerSeekType__ESamplePlayerSeekType_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x04
enum ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium                                                           = 0,
	ESynthKnobSize__Large                                                            = 1,
	ESynthKnobSize__Count                                                            = 2,
	ESynthKnobSize__ESynthKnobSize_MAX                                               = 3
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x04
enum ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light                                                     = 0,
	ESynthSlateColorStyle__Dark                                                      = 1,
	ESynthSlateColorStyle__Count                                                     = 2,
	ESynthSlateColorStyle__ESynthSlateColorStyle_MAX                                 = 3
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x05
enum ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small                                                       = 0,
	ESynthSlateSizeType__Medium                                                      = 1,
	ESynthSlateSizeType__Large                                                       = 2,
	ESynthSlateSizeType__Count                                                       = 3,
	ESynthSlateSizeType__ESynthSlateSizeType_MAX                                     = 4
};

