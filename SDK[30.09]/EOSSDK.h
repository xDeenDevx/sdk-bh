/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EOSSDK.

/// Class /Script/EOSSDK.EOSSdkSettings
/// Size: 0x0020 (0x000038 - 0x000058)
class UEOSSdkSettings : public UDeveloperSettings
{ 
public:
	FString                                            ProductName;                                                // 0x0038   (0x0010)  
	FString                                            ProductVersion;                                             // 0x0048   (0x0010)  
};

/// Class /Script/EOSSDK.EOSPlatformClientSettings
/// Size: 0x0020 (0x000038 - 0x000058)
class UEOSPlatformClientSettings : public UDeveloperSettings
{ 
public:
	FString                                            ClientId;                                                   // 0x0038   (0x0010)  
	FString                                            ClientSecret;                                               // 0x0048   (0x0010)  
};

/// Class /Script/EOSSDK.EOSPlatformSettings
/// Size: 0x0040 (0x000038 - 0x000078)
class UEOSPlatformSettings : public UDeveloperSettings
{ 
public:
	FString                                            DeploymentId;                                               // 0x0038   (0x0010)  
	FString                                            EncryptionKey;                                              // 0x0048   (0x0010)  
	FString                                            ProductId;                                                  // 0x0058   (0x0010)  
	FString                                            SandboxId;                                                  // 0x0068   (0x0010)  
};

/// Class /Script/EOSSDK.EOSUserComponent
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class UEOSUserComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x00B0   (0x00A8)  MISSED
};

/// Struct /Script/EOSSDK.EOSAntiCheatActionContext
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEOSAntiCheatActionContext
{ 
	FString                                            ActionDetailString;                                         // 0x0000   (0x0010)  
	EEOSAntiCheatAction                                Action;                                                     // 0x0010   (0x0001)  
	EEOSAntiCheatActionReason                          ActionReason;                                               // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Enum /Script/EOSSDK.EEOSConnectType
/// Size: 0x02
enum EEOSConnectType : uint8_t
{
	EEOSConnectType__OpenID                                                          = 9,
	EEOSConnectType__EEOSConnectType_MAX                                             = 10
};

/// Enum /Script/EOSSDK.EEOSInterfaceResult
/// Size: 0x28
enum EEOSInterfaceResult : uint8_t
{
	EEOSInterfaceResult__Success                                                     = 0,
	EEOSInterfaceResult__NoViolationSinceLastPoll                                    = 1,
	EEOSInterfaceResult__ViolationDetected                                           = 2,
	EEOSInterfaceResult__Error_UnsupportedPlatform                                   = 3,
	EEOSInterfaceResult__Error_NoPlatform                                            = 4,
	EEOSInterfaceResult__Error_NoConnectHandle                                       = 5,
	EEOSInterfaceResult__Error_NoReportHandle                                        = 6,
	EEOSInterfaceResult__Error_NoServerHandle                                        = 7,
	EEOSInterfaceResult__Error_NoClientHandle                                        = 8,
	EEOSInterfaceResult__Error_CallbackInitFail                                      = 9,
	EEOSInterfaceResult__Error_InternalEosSdkFail                                    = 10,
	EEOSInterfaceResult__Error_CallbackUnsubFail                                     = 11,
	EEOSInterfaceResult__Error_AlreadyInitialized                                    = 12,
	EEOSInterfaceResult__Error_NotInitialized                                        = 13,
	EEOSInterfaceResult__Error_SessionAlreadyBegun                                   = 14,
	EEOSInterfaceResult__Error_NoSessionRunning                                      = 15,
	EEOSInterfaceResult__Error_UserAlreadyRegistered                                 = 16,
	EEOSInterfaceResult__Error_NoUserRegistered                                      = 17,
	EEOSInterfaceResult__Error_RegisteredUserLost                                    = 18,
	EEOSInterfaceResult__Error_MismatchingUser                                       = 19,
	EEOSInterfaceResult__Error_InvalidAccountId                                      = 20,
	EEOSInterfaceResult__Error_UserNotFound                                          = 21,
	EEOSInterfaceResult__Error_PollTriesExhausted                                    = 22,
	EEOSInterfaceResult__Error_LoginPending                                          = 23,
	EEOSInterfaceResult__Error_NoLoginPending                                        = 24,
	EEOSInterfaceResult__Error_NullPayload                                           = 25,
	EEOSInterfaceResult__Error_DefaultResultCode                                     = 26,
	EEOSInterfaceResult__EEOSInterfaceResult_MAX                                     = 27
};

/// Enum /Script/EOSSDK.EEOSUserLoginStatus
/// Size: 0x05
enum EEOSUserLoginStatus : uint8_t
{
	EEOSUserLoginStatus__NotLoggedIn                                                 = 0,
	EEOSUserLoginStatus__LocalUser                                                   = 1,
	EEOSUserLoginStatus__LoggedIn                                                    = 2,
	EEOSUserLoginStatus__UnhandledStatus                                             = 3,
	EEOSUserLoginStatus__EEOSUserLoginStatus_MAX                                     = 4
};

/// Enum /Script/EOSSDK.EEOSReportCategory
/// Size: 0x09
enum EEOSReportCategory : uint8_t
{
	EEOSReportCategory__Invalid                                                      = 0,
	EEOSReportCategory__Cheating                                                     = 1,
	EEOSReportCategory__Exploiting                                                   = 2,
	EEOSReportCategory__OffensiveProfile                                             = 3,
	EEOSReportCategory__VerbalAbuse                                                  = 4,
	EEOSReportCategory__Scamming                                                     = 5,
	EEOSReportCategory__Spamming                                                     = 6,
	EEOSReportCategory__Other                                                        = 7,
	EEOSReportCategory__EEOSReportCategory_MAX                                       = 8
};

/// Enum /Script/EOSSDK.EEOSAntiCheatActionReason
/// Size: 0x12
enum EEOSAntiCheatActionReason : uint8_t
{
	EEOSAntiCheatActionReason__Invalid                                               = 0,
	EEOSAntiCheatActionReason__InternalError                                         = 1,
	EEOSAntiCheatActionReason__InvalidMessage                                        = 2,
	EEOSAntiCheatActionReason__AuthenticaionFailed                                   = 3,
	EEOSAntiCheatActionReason__NullClient                                            = 4,
	EEOSAntiCheatActionReason__HeartbeatTimeout                                      = 5,
	EEOSAntiCheatActionReason__ClientViolation                                       = 6,
	EEOSAntiCheatActionReason__BackendViolation                                      = 7,
	EEOSAntiCheatActionReason__TemporaryCooldown                                     = 8,
	EEOSAntiCheatActionReason__TemporaryBanned                                       = 9,
	EEOSAntiCheatActionReason__PermanentBanned                                       = 10,
	EEOSAntiCheatActionReason__EEOSAntiCheatActionReason_MAX                         = 11
};

/// Enum /Script/EOSSDK.EEOSAntiCheatAction
/// Size: 0x03
enum EEOSAntiCheatAction : uint8_t
{
	EEOSAntiCheatAction__Invalid                                                     = 0,
	EEOSAntiCheatAction__RemovePlayer                                                = 1,
	EEOSAntiCheatAction__EEOSAntiCheatAction_MAX                                     = 2
};

