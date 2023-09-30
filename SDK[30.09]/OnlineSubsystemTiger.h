/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystemTiger.

/// Class /Script/OnlineSubsystemTiger.TigerOnlineSubsystemSettings
/// Size: 0x0028 (0x000038 - 0x000060)
class UTigerOnlineSubsystemSettings : public UDeveloperSettings
{ 
public:
	FString                                            SessionServiceUri;                                          // 0x0038   (0x0010)  
	int32_t                                            MaxRequestRetries;                                          // 0x0048   (0x0004)  
	int32_t                                            MatchmakingTimeoutSeconds;                                  // 0x004C   (0x0004)  
	FString                                            DsVersion;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/OnlineSubsystemTiger.TigerHeartbeatPush
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTigerHeartbeatPush
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/OnlineSubsystemTiger.TigerMatchedPush
/// Size: 0x0004 (0x000000 - 0x000004)
struct FTigerMatchedPush
{ 
	uint32_t                                           MatchRequestId;                                             // 0x0000   (0x0004)  
};

/// Struct /Script/OnlineSubsystemTiger.TigerMatchmakingPush
/// Size: 0x0048 (0x000000 - 0x000048)
struct FTigerMatchmakingPush
{ 
	ETigerMatchResult                                  Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Host;                                                       // 0x0008   (0x0010)  
	int32_t                                            Port;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            GameSessionId;                                              // 0x0020   (0x0010)  
	FString                                            GameSessionToken;                                           // 0x0030   (0x0010)  
	uint32_t                                           MatchRequestId;                                             // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemTiger.Request_CancelMatchmakingV2
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRequest_CancelMatchmakingV2
{ 
	FString                                            SESSIONTYPE;                                                // 0x0000   (0x0010)  
	FString                                            DsVersion;                                                  // 0x0010   (0x0010)  
	FString                                            GAMEMODEID;                                                 // 0x0020   (0x0010)  
	uint32_t                                           MatchRequestId;                                             // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemTiger.Request_CancelMatchmaking
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRequest_CancelMatchmaking
{ 
	FString                                            SESSIONTYPE;                                                // 0x0000   (0x0010)  
	FString                                            DsVersion;                                                  // 0x0010   (0x0010)  
	uint32_t                                           MatchRequestId;                                             // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemTiger.Response_StartMatchmaking
/// Size: 0x0018 (0x000000 - 0x000018)
struct FResponse_StartMatchmaking
{ 
	bool                                               OK;                                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Error;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/OnlineSubsystemTiger.Request_StartMatchmaking
/// Size: 0x0058 (0x000000 - 0x000058)
struct FRequest_StartMatchmaking
{ 
	FString                                            SESSIONTYPE;                                                // 0x0000   (0x0010)  
	FString                                            DsVersion;                                                  // 0x0010   (0x0010)  
	FString                                            MATCHMAKINGTOKEN;                                           // 0x0020   (0x0010)  
	FString                                            REGIONPINGS;                                                // 0x0030   (0x0010)  
	int32_t                                            MATCHMAKINGPLATFORM;                                        // 0x0040   (0x0004)  
	uint32_t                                           MatchRequestId;                                             // 0x0044   (0x0004)  
	FString                                            GAMEMODEID;                                                 // 0x0048   (0x0010)  
};

/// Struct /Script/OnlineSubsystemTiger.ResponseEnvelope
/// Size: 0x0018 (0x000000 - 0x000018)
struct FResponseEnvelope
{ 
	bool                                               OK;                                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Error;                                                      // 0x0008   (0x0010)  
};

/// Enum /Script/OnlineSubsystemTiger.ETigerMatchResult
/// Size: 0x07
enum ETigerMatchResult : uint8_t
{
	ETigerMatchResult__Success                                                       = 0,
	ETigerMatchResult__Failure                                                       = 1,
	ETigerMatchResult__Timeout                                                       = 2,
	ETigerMatchResult__Unavailable                                                   = 3,
	ETigerMatchResult__KeyNotFound                                                   = 4,
	ETigerMatchResult__Count                                                         = 5,
	ETigerMatchResult__ETigerMatchResult_MAX                                         = 6
};

