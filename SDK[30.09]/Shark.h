/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Shark.

/// Class /Script/Shark.SharkLocalDeveloperSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class USharkLocalDeveloperSettings : public UDeveloperSettings
{ 
public:
};

/// Class /Script/Shark.SharkA2SProtocolHandler
/// Size: 0x0098 (0x000030 - 0x0000C8)
class USharkA2SProtocolHandler : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0030   (0x0098)  MISSED
};

/// Class /Script/Shark.SharkLoginHelperLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USharkLoginHelperLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Shark.SharkAccounts
/// Size: 0x0068 (0x000028 - 0x000090)
class USharkAccounts : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0028   (0x0060)  MISSED
	UShAccountSettings*                                Settings;                                                   // 0x0088   (0x0008)  


	/// Functions
	// Function /Script/Shark.SharkAccounts.SharkUsernameRegisteredQueryCallback__DelegateSignature
	void SharkUsernameRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bIsAvailable, bool bIsProfanity, FString InUsername); // [0x197e4f0] Public|Delegate      
	// Function /Script/Shark.SharkAccounts.SharkLoginCallback__DelegateSignature
	void SharkLoginCallback__DelegateSignature(FSharkLoginResult InResult);                                                  // [0x197e4f0] Public|Delegate      
	// Function /Script/Shark.SharkAccounts.SharkEmailRegisteredQueryCallback__DelegateSignature
	void SharkEmailRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bInRegistered, FString InEmail);         // [0x197e4f0] Public|Delegate      
	// Function /Script/Shark.SharkAccounts.SharkAccountActionCallback__DelegateSignature
	void SharkAccountActionCallback__DelegateSignature(FSharkAccountActionResult InResult);                                  // [0x197e4f0] Public|Delegate      
	// Function /Script/Shark.SharkAccounts.SendRegistrationVerificationCode
	void SendRegistrationVerificationCode(FString InEmail, FDelegateProperty InCallback);                                    // [0x34c8b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Shark.SharkAccounts.RegisterAndLogin
	void RegisterAndLogin(FSharkAccountRegistrationData InRegistrationData, FDelegateProperty InCallback);                   // [0x34c8930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Shark.SharkAccounts.QueryUsernameRegisterStatus
	void QueryUsernameRegisterStatus(FString InUsername, FDelegateProperty InCallback);                                      // [0x34c87e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Shark.SharkAccounts.QueryEmailRegisterStatus
	void QueryEmailRegisterStatus(FString InEmail, FDelegateProperty InCallback);                                            // [0x34c8690] Final|Native|Public|BlueprintCallable 
	// Function /Script/Shark.SharkAccounts.PlatformLogin
	void PlatformLogin(FDelegateProperty InCallback, bool bIsSharkmobAccountLoginEnabled);                                   // [0x34c85a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Shark.SharkAccounts.Login
	void Login(FString InEmail, FString InPassword, FDelegateProperty InCallback);                                           // [0x34c83d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Shark.ShAccountSettings
/// Size: 0x0028 (0x000038 - 0x000060)
class UShAccountSettings : public UDeveloperSettings
{ 
public:
	bool                                               LogEnabled;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            SandboxUrl;                                                 // 0x0040   (0x0010)  
	FString                                            ProductionUrl;                                              // 0x0050   (0x0010)  
};

/// Class /Script/Shark.SharkBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USharkBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Shark.ShOnlineServerSettings
/// Size: 0x0058 (0x000038 - 0x000090)
class UShOnlineServerSettings : public UDeveloperSettings
{ 
public:
	FString                                            ServerSecretDev;                                            // 0x0038   (0x0010)  
	FString                                            ServerSecretUat;                                            // 0x0048   (0x0010)  
	FString                                            ServerSecretProd;                                           // 0x0058   (0x0010)  
	FString                                            ServerSecretLocal;                                          // 0x0068   (0x0010)  
	FString                                            ServerSecretTracker;                                        // 0x0078   (0x0010)  
	uint32_t                                           SeasonConfigId;                                             // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/Shark.SharkOnlineSettings
/// Size: 0x0010 (0x000038 - 0x000048)
class USharkOnlineSettings : public UDeveloperSettings
{ 
public:
	float                                              MaximumRetryDelaySeconds;                                   // 0x0038   (0x0004)  
	int32_t                                            MinimumAccountCreationAge;                                  // 0x003C   (0x0004)  
	int32_t                                            PartyMaintenancePollIntervalSeconds;                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/Shark.SharkPlatformSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class USharkPlatformSettings : public USharkLocalDeveloperSettings
{ 
public:
	ESharkPlatformType                                 PlatformType;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/Shark.SharkRenderingSettings
/// Size: 0x01C0 (0x000038 - 0x0001F8)
class USharkRenderingSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            CustomPrimitiveFloatDataNameMapping;                        // 0x0038   (0x00E8)  
	int32_t                                            CustomPrimitiveVector2DataNameMapping;                      // 0x0120   (0x004C)  
	int32_t                                            CustomPrimitiveVector3DataNameMapping;                      // 0x016C   (0x0064)  
	int32_t                                            CustomPrimitiveVector4DataNameMapping;                      // 0x01D0   (0x0024)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01F4   (0x0004)  MISSED
};

/// Class /Script/Shark.SharkRoundRobinSettings
/// Size: 0x0018 (0x000038 - 0x000050)
class USharkRoundRobinSettings : public UDeveloperSettings
{ 
public:
	bool                                               bEnabled;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FSharkRoundRobinClassSettings>              GroupSettings;                                              // 0x0040   (0x0010)  
};

/// Class /Script/Shark.SharkRoundRobinSubsystem
/// Size: 0x0090 (0x000030 - 0x0000C0)
class USharkRoundRobinSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0030   (0x0090)  MISSED
};

/// Class /Script/Shark.SharkRuntimeTextSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class USharkRuntimeTextSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/Shark.SharkServerMetrics
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class USharkServerMetrics : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0030   (0x00B0)  MISSED
};

/// Class /Script/Shark.SharkTelemetry
/// Size: 0x00E8 (0x000028 - 0x000110)
class USharkTelemetry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	FSharkTelemetrySettings                            TelemetryApplicationSettings;                               // 0x0038   (0x0050)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0088   (0x0018)  MISSED
	TArray<FSharkTelemtryEventData>                    BufferedEvents;                                             // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x50];                                      // 0x00B0   (0x0050)  MISSED
	UGameInstance*                                     GameInstance;                                               // 0x0100   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Class /Script/Shark.ShUserSecrets
/// Size: 0x0000 (0x000028 - 0x000028)
class UShUserSecrets : public UObject
{ 
public:
};

/// Struct /Script/Shark.SharkAccountActionResult
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSharkAccountActionResult
{ 
	bool                                               Success;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            InternalErrorMessage;                                       // 0x0008   (0x0010)  
	FString                                            InternalThirdPartyErrorMessage;                             // 0x0018   (0x0010)  
	int32_t                                            ErrorCode;                                                  // 0x0028   (0x0004)  
	int32_t                                            ThirdPartyErrorCode;                                        // 0x002C   (0x0004)  
};

/// Struct /Script/Shark.SharkLoginResult
/// Size: 0x0068 (0x000030 - 0x000098)
struct FSharkLoginResult : FSharkAccountActionResult
{ 
	FString                                            UserName;                                                   // 0x0030   (0x0010)  
	FString                                            OpenId;                                                     // 0x0040   (0x0010)  
	FString                                            Token;                                                      // 0x0050   (0x0010)  
	FString                                            PfKey;                                                      // 0x0060   (0x0010)  
	FString                                            Pf;                                                         // 0x0070   (0x0010)  
	FString                                            SharkmobToken;                                              // 0x0080   (0x0010)  
	EShAccountChannel                                  AuthenticationChannelId;                                    // 0x0090   (0x0001)  
	bool                                               IsNewAccount;                                               // 0x0091   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0092   (0x0006)  MISSED
};

/// Struct /Script/Shark.SharkAccountRegistrationData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSharkAccountRegistrationData
{ 
	FString                                            Email;                                                      // 0x0000   (0x0010)  
	FString                                            Password;                                                   // 0x0010   (0x0010)  
	int32_t                                            RegionId;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            UserName;                                                   // 0x0028   (0x0010)  
	FString                                            VerificationCode;                                           // 0x0038   (0x0010)  
	int32_t                                            RecieveEmail;                                               // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/Shark.SharkRandomDeviation
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSharkRandomDeviation
{ 
	float                                              Min;                                                        // 0x0000   (0x0004)  
	float                                              Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/Shark.SharkRuntimeTextNetSerializer
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSharkRuntimeTextNetSerializer
{ 
	FName                                              TextKey;                                                    // 0x0000   (0x0008)  
	TArray<FSharkRuntimeTextLocalizationPair>          Localizations;                                              // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/Shark.SharkRuntimeTextLocalizationPair
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSharkRuntimeTextLocalizationPair
{ 
	FString                                            Culture;                                                    // 0x0000   (0x0010)  
	FString                                            DisplayString;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/Shark.SharkUserId
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSharkUserId
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
};

/// Struct /Script/Shark.SharkInt8Vector
/// Size: 0x0003 (0x000000 - 0x000003)
struct FSharkInt8Vector
{ 
	int8_t                                             X;                                                          // 0x0000   (0x0001)  
	int8_t                                             Y;                                                          // 0x0001   (0x0001)  
	int8_t                                             Z;                                                          // 0x0002   (0x0001)  
};

/// Struct /Script/Shark.SharkTokenBucket
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSharkTokenBucket
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
	float                                              Capacity;                                                   // 0x0004   (0x0004)  
	float                                              TokenFillRatePerSecond;                                     // 0x0008   (0x0004)  
};

/// Struct /Script/Shark.SharkRandomDeviationInt
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSharkRandomDeviationInt
{ 
	int32_t                                            Min;                                                        // 0x0000   (0x0004)  
	int32_t                                            Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/Shark.SharkTelemetryEventBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSharkTelemetryEventBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Shark.SharkTelemetryDateTime
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSharkTelemetryDateTime
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Shark.ShChannelInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FShChannelInfo
{ 
	FShMapInfo                                         map_info;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Shark.ShMapInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FShMapInfo
{ 
	FString                                            sacc_token;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/Shark.SharkGameInstanceId
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSharkGameInstanceId
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/Shark.SharkRoundRobinClassSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSharkRoundRobinClassSettings
{ 
	TWeakObjectPtr<UClass*>                            Class;                                                      // 0x0000   (0x0028)  
	TEnumAsByte<ETickingGroup>                         TickingGroup;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	uint32_t                                           FramesBetweenUpdates;                                       // 0x002C   (0x0004)  
};

/// Struct /Script/Shark.SharkServerMetricsConfig
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSharkServerMetricsConfig
{ 
	float                                              UploadIntervalSeconds;                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            UploadURI;                                                  // 0x0008   (0x0010)  
	FString                                            Database;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/Shark.SharkTelemtryEventData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSharkTelemtryEventData
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
	UStruct*                                           StaticPropertyStruct;                                       // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/Shark.SharkTelemetrySettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSharkTelemetrySettings
{ 
	FString                                            DomainURL;                                                  // 0x0000   (0x0010)  
	FString                                            SecretKey;                                                  // 0x0010   (0x0010)  
	FString                                            ApplicationName;                                            // 0x0020   (0x0010)  
	FString                                            ApplicationID;                                              // 0x0030   (0x0010)  
	int32_t                                            DefaultRequestRetryCount;                                   // 0x0040   (0x0004)  
	int32_t                                            ChunkDispatchMaxBodySizeBytes;                              // 0x0044   (0x0004)  
	int32_t                                            ChunkDispatchAmountThreshold;                               // 0x0048   (0x0004)  
	float                                              ChunkDispatchTimeSecondsThreshold;                          // 0x004C   (0x0004)  
};

/// Struct /Script/Shark.SharkTelemetryHTTPSResponse
/// Size: 0x0098 (0x000000 - 0x000098)
struct FSharkTelemetryHTTPSResponse
{ 
	FSharkTelemetryHTTPSRequestHeader                  Title;                                                      // 0x0000   (0x0080)  
	FSharkTelemetryHTTPSResponseDataChunk              Data;                                                       // 0x0080   (0x0018)  
};

/// Struct /Script/Shark.SharkTelemetryHTTPSResponseDataChunk
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSharkTelemetryHTTPSResponseDataChunk
{ 
	int32_t                                            code;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Msg;                                                        // 0x0008   (0x0010)  
};

/// Struct /Script/Shark.SharkTelemetryHTTPSRequestHeader
/// Size: 0x0080 (0x000000 - 0x000080)
struct FSharkTelemetryHTTPSRequestHeader
{ 
	FString                                            app_id;                                                     // 0x0000   (0x0010)  
	FString                                            app_name;                                                   // 0x0010   (0x0010)  
	FString                                            Timestamp;                                                  // 0x0020   (0x0010)  
	FString                                            seq_id;                                                     // 0x0030   (0x0010)  
	FString                                            retry_times;                                                // 0x0040   (0x0010)  
	FString                                            key_x;                                                      // 0x0050   (0x0010)  
	FString                                            key_y;                                                      // 0x0060   (0x0010)  
	FString                                            key_z;                                                      // 0x0070   (0x0010)  
};

/// Struct /Script/Shark.SharkTelemetryDataBundle
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSharkTelemetryDataBundle
{ 
	TArray<FSharkTelemetryHTTPSRequestDataChunk>       Data;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/Shark.SharkTelemetryHTTPSRequestDataChunk
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSharkTelemetryHTTPSRequestDataChunk
{ 
	FString                                            log_name;                                                   // 0x0000   (0x0010)  
	FString                                            log_fields;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Shark.SharkTelemetryHTTPSRequest
/// Size: 0x0090 (0x000000 - 0x000090)
struct FSharkTelemetryHTTPSRequest
{ 
	FSharkTelemetryHTTPSRequestHeader                  Title;                                                      // 0x0000   (0x0080)  
	TArray<FSharkTelemetryHTTPSRequestDataChunk>       Data;                                                       // 0x0080   (0x0010)  
};

/// Enum /Script/Shark.EShAccountChannel
/// Size: 0x06
enum EShAccountChannel : uint8_t
{
	EShAccountChannel__DEV                                                           = 0,
	EShAccountChannel__STEAM                                                         = 21,
	EShAccountChannel__SHARKNET                                                      = 25,
	EShAccountChannel__PS5                                                           = 27,
	EShAccountChannel__UNKNOWN                                                       = 255,
	EShAccountChannel__EShAccountChannel_MAX                                         = 256
};

/// Enum /Script/Shark.ESharkPlatformType
/// Size: 0x03
enum ESharkPlatformType : uint8_t
{
	ESharkPlatformType__Windows                                                      = 0,
	ESharkPlatformType__PS5                                                          = 1,
	ESharkPlatformType__ESharkPlatformType_MAX                                       = 2
};

/// Enum /Script/Shark.ESharkCustomPrimitiveFloatDataName
/// Size: 0x60
enum ESharkCustomPrimitiveFloatDataName : uint8_t
{
	ESharkCustomPrimitiveFloatDataName__AlbedoHueShift                               = 0,
	ESharkCustomPrimitiveFloatDataName__Alpha                                        = 1,
	ESharkCustomPrimitiveFloatDataName__AmbientOcclusion                             = 2,
	ESharkCustomPrimitiveFloatDataName__DiffuseDesaturation                          = 3,
	ESharkCustomPrimitiveFloatDataName__DirtAmount                                   = 4,
	ESharkCustomPrimitiveFloatDataName__EmissiveMultiplier                           = 5,
	ESharkCustomPrimitiveFloatDataName__Height                                       = 6,
	ESharkCustomPrimitiveFloatDataName__Metallic                                     = 7,
	ESharkCustomPrimitiveFloatDataName__Roughness                                    = 8,
	ESharkCustomPrimitiveFloatDataName__RoughnessOffset                              = 9,
	ESharkCustomPrimitiveFloatDataName__WindStrength                                 = 10,
	ESharkCustomPrimitiveFloatDataName__GlassDestruction_Use                         = 11,
	ESharkCustomPrimitiveFloatDataName__GlassDestruction_UseUv                       = 12,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Roughness                            = 13,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Rustiness                            = 14,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Dirtiness                            = 15,
	ESharkCustomPrimitiveFloatDataName__Vehicle_EmissiveStrength                     = 16,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Metalness                            = 17,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushAllZones                        = 18,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone0                           = 19,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone1                           = 20,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone2                           = 21,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone3                           = 22,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone4                           = 23,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CanBounce                            = 24,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CanSquash                            = 25,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 26,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 27,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 28,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 29,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 30,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 31,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 32,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 33,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 34,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 35,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 36,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 37,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 38,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 39,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 40,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 41,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 42,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 43,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 44,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 45,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 46,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 47,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 48,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 49,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 50,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 51,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 52,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 53,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 54,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 55,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 56,
	ESharkCustomPrimitiveFloatDataName__Custom                                       = 57,
	ESharkCustomPrimitiveFloatDataName__Count                                        = 58,
	ESharkCustomPrimitiveFloatDataName__ESharkCustomPrimitiveFloatDataName_MAX       = 59
};

/// Enum /Script/Shark.ESharkCustomPrimitiveVector2DataName
/// Size: 0x21
enum ESharkCustomPrimitiveVector2DataName : uint8_t
{
	ESharkCustomPrimitiveVector2DataName__UvOffset                                   = 0,
	ESharkCustomPrimitiveVector2DataName__UvScale                                    = 1,
	ESharkCustomPrimitiveVector2DataName__GlassDestruction_Tiling                    = 2,
	ESharkCustomPrimitiveVector2DataName__Custom_0                                   = 3,
	ESharkCustomPrimitiveVector2DataName__Custom_2                                   = 4,
	ESharkCustomPrimitiveVector2DataName__Custom_4                                   = 5,
	ESharkCustomPrimitiveVector2DataName__Custom_6                                   = 6,
	ESharkCustomPrimitiveVector2DataName__Custom_8                                   = 7,
	ESharkCustomPrimitiveVector2DataName__Custom_10                                  = 8,
	ESharkCustomPrimitiveVector2DataName__Custom_12                                  = 9,
	ESharkCustomPrimitiveVector2DataName__Custom_14                                  = 10,
	ESharkCustomPrimitiveVector2DataName__Custom_16                                  = 11,
	ESharkCustomPrimitiveVector2DataName__Custom_18                                  = 12,
	ESharkCustomPrimitiveVector2DataName__Custom_20                                  = 13,
	ESharkCustomPrimitiveVector2DataName__Custom_22                                  = 14,
	ESharkCustomPrimitiveVector2DataName__Custom_24                                  = 15,
	ESharkCustomPrimitiveVector2DataName__Custom_26                                  = 16,
	ESharkCustomPrimitiveVector2DataName__Custom_28                                  = 17,
	ESharkCustomPrimitiveVector2DataName__Custom_30                                  = 18,
	ESharkCustomPrimitiveVector2DataName__Count                                      = 19,
	ESharkCustomPrimitiveVector2DataName__ESharkCustomPrimitiveVector2DataName_MAX   = 20
};

/// Enum /Script/Shark.ESharkCustomPrimitiveVector3DataName
/// Size: 0x27
enum ESharkCustomPrimitiveVector3DataName : uint8_t
{
	ESharkCustomPrimitiveVector3DataName__Color1_Rgb                                 = 0,
	ESharkCustomPrimitiveVector3DataName__Color2_Rgb                                 = 1,
	ESharkCustomPrimitiveVector3DataName__EmissiveColor_Rgb                          = 2,
	ESharkCustomPrimitiveVector3DataName__GlassDestruction_Pos                       = 3,
	ESharkCustomPrimitiveVector3DataName__GlassDestruction_ProjX                     = 4,
	ESharkCustomPrimitiveVector3DataName__GlassDestruction_ProjY                     = 5,
	ESharkCustomPrimitiveVector3DataName__Vehicle_ColorTintRgb                       = 6,
	ESharkCustomPrimitiveVector3DataName__Vehicle_InteriorColorTintRgb               = 7,
	ESharkCustomPrimitiveVector3DataName__Vehicle_BounceXyz                          = 8,
	ESharkCustomPrimitiveVector3DataName__Custom_0                                   = 9,
	ESharkCustomPrimitiveVector3DataName__Custom_1                                   = 10,
	ESharkCustomPrimitiveVector3DataName__Custom_4                                   = 11,
	ESharkCustomPrimitiveVector3DataName__Custom_5                                   = 12,
	ESharkCustomPrimitiveVector3DataName__Custom_8                                   = 13,
	ESharkCustomPrimitiveVector3DataName__Custom_9                                   = 14,
	ESharkCustomPrimitiveVector3DataName__Custom_12                                  = 15,
	ESharkCustomPrimitiveVector3DataName__Custom_13                                  = 16,
	ESharkCustomPrimitiveVector3DataName__Custom_16                                  = 17,
	ESharkCustomPrimitiveVector3DataName__Custom_17                                  = 18,
	ESharkCustomPrimitiveVector3DataName__Custom_20                                  = 19,
	ESharkCustomPrimitiveVector3DataName__Custom_21                                  = 20,
	ESharkCustomPrimitiveVector3DataName__Custom_24                                  = 21,
	ESharkCustomPrimitiveVector3DataName__Custom_25                                  = 22,
	ESharkCustomPrimitiveVector3DataName__Custom_28                                  = 23,
	ESharkCustomPrimitiveVector3DataName__Custom_29                                  = 24,
	ESharkCustomPrimitiveVector3DataName__Count                                      = 25,
	ESharkCustomPrimitiveVector3DataName__ESharkCustomPrimitiveVector3DataName_MAX   = 26
};

/// Enum /Script/Shark.ESharkCustomPrimitiveVector4DataName
/// Size: 0x11
enum ESharkCustomPrimitiveVector4DataName : uint8_t
{
	ESharkCustomPrimitiveVector4DataName__ColorRgba                                  = 0,
	ESharkCustomPrimitiveVector4DataName__Custom_0                                   = 1,
	ESharkCustomPrimitiveVector4DataName__Custom_4                                   = 2,
	ESharkCustomPrimitiveVector4DataName__Custom_8                                   = 3,
	ESharkCustomPrimitiveVector4DataName__Custom_12                                  = 4,
	ESharkCustomPrimitiveVector4DataName__Custom_16                                  = 5,
	ESharkCustomPrimitiveVector4DataName__Custom_20                                  = 6,
	ESharkCustomPrimitiveVector4DataName__Custom_24                                  = 7,
	ESharkCustomPrimitiveVector4DataName__Custom_28                                  = 8,
	ESharkCustomPrimitiveVector4DataName__Count                                      = 9,
	ESharkCustomPrimitiveVector4DataName__ESharkCustomPrimitiveVector4DataName_MAX   = 10
};

/// Enum /Script/Shark.ESharkFourWayDirection
/// Size: 0x06
enum ESharkFourWayDirection : uint8_t
{
	ESharkFourWayDirection__Forward                                                  = 0,
	ESharkFourWayDirection__Right                                                    = 1,
	ESharkFourWayDirection__Back                                                     = 2,
	ESharkFourWayDirection__Left                                                     = 3,
	ESharkFourWayDirection__Count                                                    = 4,
	ESharkFourWayDirection__ESharkFourWayDirection_MAX                               = 5
};

/// Enum /Script/Shark.ESharkTelemtryResponseCodes
/// Size: 0x11
enum ESharkTelemtryResponseCodes : uint32_t
{
	ESharkTelemtryResponseCodes__UNKNOWN_CODE                                        = 0,
	ESharkTelemtryResponseCodes__Success                                             = 1,
	ESharkTelemtryResponseCodes__StandardHTTPCode                                    = 2,
	ESharkTelemtryResponseCodes__InvalidMessage                                      = 1000,
	ESharkTelemtryResponseCodes__IllegalTitleInput                                   = 1001,
	ESharkTelemtryResponseCodes__IllegalDataInput                                    = 1002,
	ESharkTelemtryResponseCodes__IllegalMessage                                      = 1003,
	ESharkTelemtryResponseCodes__ServerException                                     = 1004,
	ESharkTelemtryResponseCodes__InvalidURL                                          = 1005,
	ESharkTelemtryResponseCodes__InvalidVerbOrContentType                            = 1006,
	ESharkTelemtryResponseCodes__ESharkTelemtryResponseCodes_MAX                     = 1007
};

