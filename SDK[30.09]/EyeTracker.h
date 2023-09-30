/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EyeTracker.

/// Class /Script/EyeTracker.EyeTrackerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Struct /Script/EyeTracker.EyeTrackerStereoGazeData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FEyeTrackerStereoGazeData
{ 
	FVector                                            LeftEyeOrigin;                                              // 0x0000   (0x000C)  
	FVector                                            LeftEyeDirection;                                           // 0x000C   (0x000C)  
	FVector                                            RightEyeOrigin;                                             // 0x0018   (0x000C)  
	FVector                                            RightEyeDirection;                                          // 0x0024   (0x000C)  
	FVector                                            FixationPoint;                                              // 0x0030   (0x000C)  
	float                                              ConfidenceValue;                                            // 0x003C   (0x0004)  
};

/// Struct /Script/EyeTracker.EyeTrackerGazeData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FEyeTrackerGazeData
{ 
	FVector                                            GazeOrigin;                                                 // 0x0000   (0x000C)  
	FVector                                            GazeDirection;                                              // 0x000C   (0x000C)  
	FVector                                            FixationPoint;                                              // 0x0018   (0x000C)  
	float                                              ConfidenceValue;                                            // 0x0024   (0x0004)  
};

/// Enum /Script/EyeTracker.EEyeTrackerStatus
/// Size: 0x04
enum EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected                                                  = 0,
	EEyeTrackerStatus__NotTracking                                                   = 1,
	EEyeTrackerStatus__Tracking                                                      = 2,
	EEyeTrackerStatus__EEyeTrackerStatus_MAX                                         = 3
};

