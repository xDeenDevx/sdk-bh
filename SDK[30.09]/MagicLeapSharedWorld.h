/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MagicLeapSharedWorld.

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
/// Size: 0x00D0 (0x000310 - 0x0003E0)
class AMagicLeapSharedWorldGameMode : public AGameMode
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x0310   (0x0010)  
	FMulticastInlineDelegate                           OnNewLocalDataFromClients;                                  // 0x0320   (0x0010)  
	float                                              PinSelectionConfidenceThreshold;                            // 0x0330   (0x0004)  
	unsigned char                                      UnknownData00_5[0xA4];                                      // 0x0334   (0x00A4)  MISSED
	AMagicLeapSharedWorldPlayerController*             ChosenOne;                                                  // 0x03D8   (0x0008)  


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
	bool SendSharedWorldDataToClients();                                                                                     // [0xec4e30] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
	void SelectChosenOne();                                                                                                  // [0xec4e10] BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature();                                                            // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
	void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);                                      // [0xec4cf0] BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState
/// Size: 0x0040 (0x000298 - 0x0002D8)
class AMagicLeapSharedWorldGameState : public AGameState
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x0298   (0x0010)  
	FMagicLeapSharedWorldAlignmentTransforms           AlignmentTransforms;                                        // 0x02A8   (0x0010)  
	FMulticastInlineDelegate                           OnSharedWorldDataUpdated;                                   // 0x02B8   (0x0010)  
	FMulticastInlineDelegate                           OnAlignmentTransformsUpdated;                               // 0x02C8   (0x0010)  


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
	void OnReplicate_SharedWorldData();                                                                                      // [0xec4df0] Final|Native|Private 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
	void OnReplicate_AlignmentTransforms();                                                                                  // [0xec4dd0] Final|Native|Private 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
	void MagicLeapSharedWorldEvent__DelegateSignature();                                                                     // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
	FTransform CalculateXRCameraRootTransform();                                                                             // [0xec4ba0] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
/// Size: 0x0018 (0x000578 - 0x000590)
class AMagicLeapSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0578   (0x0018)  MISSED
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMagicLeapSharedWorldSharedData
{ 
	TArray<FGuid>                                      PinIDs;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMagicLeapSharedWorldAlignmentTransforms
{ 
	TArray<FTransform>                                 AlignmentTransforms;                                        // 0x0000   (0x0010)  
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMagicLeapSharedWorldLocalData
{ 
	TArray<FMagicLeapSharedWorldPinData>               LocalPins;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPinData
/// Size: 0x0024 (0x000000 - 0x000024)
struct FMagicLeapSharedWorldPinData
{ 
	FGuid                                              PinId;                                                      // 0x0000   (0x0010)  
	FMagicLeapARPinState                               PinState;                                                   // 0x0010   (0x0014)  
};

