/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioSynesthesia.

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{ 
public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRT
/// Size: 0x0000 (0x000078 - 0x000078)
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{ 
public:
};

/// Class /Script/AudioSynesthesia.ConstantQNRTSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	float                                              StartingFrequency;                                          // 0x0028   (0x0004)  
	int32_t                                            NumBands;                                                   // 0x002C   (0x0004)  
	float                                              NumBandsPerOctave;                                          // 0x0030   (0x0004)  
	float                                              AnalysisPeriod;                                             // 0x0034   (0x0004)  
	bool                                               bDownmixToMono;                                             // 0x0038   (0x0001)  
	EConstantQFFTSizeEnum                              FFTSize;                                                    // 0x0039   (0x0001)  
	EFFTWindowType                                     WindowType;                                                 // 0x003A   (0x0001)  
	EAudioSpectrumType                                 SpectrumType;                                               // 0x003B   (0x0001)  
	float                                              BandWidthStretch;                                           // 0x003C   (0x0004)  
	EConstantQNormalizationEnum                        CQTNormalization;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0044   (0x0004)  
};

/// Class /Script/AudioSynesthesia.ConstantQNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class UConstantQNRT : public UAudioSynesthesiaNRT
{ 
public:
	UConstantQNRTSettings*                             Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);               // [0xfbda10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
	void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);                         // [0xfbd500] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.LoudnessNRTSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0028   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x002C   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0030   (0x0004)  
	ELoudnessNRTCurveTypeEnum                          CurveType;                                                  // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.LoudnessNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class ULoudnessNRT : public UAudioSynesthesiaNRT
{ 
public:
	ULoudnessNRTSettings*                              Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness);                                                   // [0xfbde40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                         // [0xfbdb40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	void GetLoudnessAtTime(float InSeconds, float& OutLoudness);                                                             // [0xfbd930] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
	void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                                   // [0xfbd630] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.OnsetNRTSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	bool                                               bDownmixToMono;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              GranularityInSeconds;                                       // 0x002C   (0x0004)  
	float                                              Sensitivity;                                                // 0x0030   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0034   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.OnsetNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class UOnsetNRT : public UAudioSynesthesiaNRT
{ 
public:
	UOnsetNRTSettings*                                 Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0xfbdc60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0xfbd750] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum
/// Size: 0x09
enum EConstantQFFTSizeEnum : uint8_t
{
	EConstantQFFTSizeEnum__Min                                                       = 0,
	EConstantQFFTSizeEnum__XXSmall                                                   = 1,
	EConstantQFFTSizeEnum__XSmall                                                    = 2,
	EConstantQFFTSizeEnum__Small                                                     = 3,
	EConstantQFFTSizeEnum__Medium                                                    = 4,
	EConstantQFFTSizeEnum__Large                                                     = 5,
	EConstantQFFTSizeEnum__XLarge                                                    = 6,
	EConstantQFFTSizeEnum__XXLarge                                                   = 7,
	EConstantQFFTSizeEnum__Max                                                       = 8
};

/// Enum /Script/AudioSynesthesia.EConstantQNormalizationEnum
/// Size: 0x04
enum EConstantQNormalizationEnum : uint8_t
{
	EConstantQNormalizationEnum__EqualEuclideanNorm                                  = 0,
	EConstantQNormalizationEnum__EqualEnergy                                         = 1,
	EConstantQNormalizationEnum__EqualAmplitude                                      = 2,
	EConstantQNormalizationEnum__EConstantQNormalizationEnum_MAX                     = 3
};

/// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
/// Size: 0x06
enum ELoudnessNRTCurveTypeEnum : uint8_t
{
	ELoudnessNRTCurveTypeEnum__A                                                     = 0,
	ELoudnessNRTCurveTypeEnum__B                                                     = 1,
	ELoudnessNRTCurveTypeEnum__C                                                     = 2,
	ELoudnessNRTCurveTypeEnum__D                                                     = 3,
	ELoudnessNRTCurveTypeEnum__None                                                  = 4,
	ELoudnessNRTCurveTypeEnum__ELoudnessNRTCurveTypeEnum_MAX                         = 5
};

