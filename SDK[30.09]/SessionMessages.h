/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SessionMessages.

/// Struct /Script/SessionMessages.SessionServiceLogUnsubscribe
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSessionServiceLogUnsubscribe
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLogSubscribe
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSessionServiceLogSubscribe
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLog
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSessionServiceLog
{ 
	FName                                              Category;                                                   // 0x0000   (0x0008)  
	FString                                            Data;                                                       // 0x0008   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0018   (0x0010)  
	double                                             TimeSeconds;                                                // 0x0028   (0x0008)  
	char                                               Verbosity;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/SessionMessages.SessionServicePong
/// Size: 0x0090 (0x000000 - 0x000090)
struct FSessionServicePong
{ 
	bool                                               Authorized;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            BuildDate;                                                  // 0x0008   (0x0010)  
	FString                                            DeviceName;                                                 // 0x0018   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0028   (0x0010)  
	FString                                            InstanceName;                                               // 0x0038   (0x0010)  
	FString                                            PlatformName;                                               // 0x0048   (0x0010)  
	FGuid                                              SessionId;                                                  // 0x0058   (0x0010)  
	FString                                            SessionName;                                                // 0x0068   (0x0010)  
	FString                                            SessionOwner;                                               // 0x0078   (0x0010)  
	bool                                               Standalone;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/SessionMessages.SessionServicePing
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSessionServicePing
{ 
	FString                                            UserName;                                                   // 0x0000   (0x0010)  
};

