/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EngineMessages.

/// Struct /Script/EngineMessages.EngineServiceNotification
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEngineServiceNotification
{ 
	FString                                            Text;                                                       // 0x0000   (0x0010)  
	double                                             TimeSeconds;                                                // 0x0010   (0x0008)  
};

/// Struct /Script/EngineMessages.EngineServiceTerminate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEngineServiceTerminate
{ 
	FString                                            UserName;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/EngineMessages.EngineServiceExecuteCommand
/// Size: 0x0020 (0x000000 - 0x000020)
struct FEngineServiceExecuteCommand
{ 
	FString                                            Command;                                                    // 0x0000   (0x0010)  
	FString                                            UserName;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/EngineMessages.EngineServiceAuthGrant
/// Size: 0x0020 (0x000000 - 0x000020)
struct FEngineServiceAuthGrant
{ 
	FString                                            UserName;                                                   // 0x0000   (0x0010)  
	FString                                            UserToGrant;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/EngineMessages.EngineServiceAuthDeny
/// Size: 0x0020 (0x000000 - 0x000020)
struct FEngineServiceAuthDeny
{ 
	FString                                            UserName;                                                   // 0x0000   (0x0010)  
	FString                                            UserToDeny;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/EngineMessages.EngineServicePong
/// Size: 0x0050 (0x000000 - 0x000050)
struct FEngineServicePong
{ 
	FString                                            CurrentLevel;                                               // 0x0000   (0x0010)  
	int32_t                                            EngineVersion;                                              // 0x0010   (0x0004)  
	bool                                               HasBegunPlay;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FGuid                                              InstanceId;                                                 // 0x0018   (0x0010)  
	FString                                            InstanceType;                                               // 0x0028   (0x0010)  
	FGuid                                              SessionId;                                                  // 0x0038   (0x0010)  
	float                                              WorldTimeSeconds;                                           // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/EngineMessages.EngineServicePing
/// Size: 0x0001 (0x000000 - 0x000001)
struct FEngineServicePing
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

