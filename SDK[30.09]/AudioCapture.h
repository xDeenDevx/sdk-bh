/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioCapture.

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UAudioCapture : public UAudioGenerator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x00C0 (0x0006C0 - 0x000780)
class UAudioCaptureComponent : public USynthComponent
{ 
public:
	int32_t                                            JitterLatencyFrames;                                        // 0x06C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xBC];                                      // 0x06C4   (0x00BC)  MISSED
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAudioCaptureDeviceInfo
{ 
	FName                                              DeviceName;                                                 // 0x0000   (0x0008)  
	int32_t                                            NumInputChannels;                                           // 0x0008   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x000C   (0x0004)  
};

