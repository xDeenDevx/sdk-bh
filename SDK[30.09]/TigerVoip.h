/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TigerVoip.

/// Class /Script/TigerVoip.TigerVoipTencentBackendSettings
/// Size: 0x0060 (0x000038 - 0x000098)
class UTigerVoipTencentBackendSettings : public UDeveloperSettings
{ 
public:
	FString                                            ProductionGMEAppId;                                         // 0x0038   (0x0010)  
	FString                                            ProductionGMEAppKey;                                        // 0x0048   (0x0010)  
	FString                                            CertificationGMEAppId;                                      // 0x0058   (0x0010)  
	FString                                            CertificationGMEAppKey;                                     // 0x0068   (0x0010)  
	FString                                            DevelopmentGMEAppId;                                        // 0x0078   (0x0010)  
	FString                                            DevelopmentGMEAppKey;                                       // 0x0088   (0x0010)  
};

/// Class /Script/TigerVoip.TigerVoipTalkerState
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UTigerVoipTalkerState : public UObject
{ 
public:
	FMulticastInlineDelegate                           InputDeviceChanged;                                         // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OutputDeviceChanged;                                        // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/TigerVoip.TigerVoipTalkerState.VoipDeviceChanged__DelegateSignature
	void VoipDeviceChanged__DelegateSignature();                                                                             // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/TigerVoip.TigerVoipTalkerState.IsPlayerTalking
	bool IsPlayerTalking(FTigerPersistentVoipID& InPlayerId);                                                                // [0x36be4b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TigerVoip.TigerVoipTalkerState.IsPlayerBlocked
	bool IsPlayerBlocked(FTigerPersistentVoipID& InPlayerId);                                                                // [0x36be3f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TigerVoip.TigerVoipTalkerState.HasAcknowledgedPlayerHasJoined
	bool HasAcknowledgedPlayerHasJoined(FTigerPersistentVoipID& InPlayerId);                                                 // [0x36be330] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TigerVoip.TigerVoipTalkerState.GetOutputDevices
	TArray<FText> GetOutputDevices();                                                                                        // [0x36be300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TigerVoip.TigerVoipTalkerState.GetInputDevices
	TArray<FText> GetInputDevices();                                                                                         // [0x36be2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TigerVoip.TigerVoipTalkerState.AcknowledgedPlayerHasJoined
	bool AcknowledgedPlayerHasJoined(FTigerPersistentVoipID& InPlayerId, bool bInReset);                                     // [0x36be1d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/TigerVoip.TigerPersistentVoipID
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTigerPersistentVoipID
{ 
	FString                                            UniqueID;                                                   // 0x0000   (0x0010)  
};

/// Enum /Script/TigerVoip.ETalkingVisiblityState
/// Size: 0x05
enum ETalkingVisiblityState : uint8_t
{
	ETalkingVisiblityState__UnableToCommunicate                                      = 0,
	ETalkingVisiblityState__NotTalking                                               = 1,
	ETalkingVisiblityState__Talking                                                  = 2,
	ETalkingVisiblityState__Blocked                                                  = 3,
	ETalkingVisiblityState__ETalkingVisiblityState_MAX                               = 4
};

