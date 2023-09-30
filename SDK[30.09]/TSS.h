/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TSS.

/// Class /Script/TSS.TSSSdkTicker
/// Size: 0x0018 (0x000028 - 0x000040)
class UTSSSdkTicker : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/TSS.TSSClientComponent
/// Size: 0x0058 (0x0000B0 - 0x000108)
class UTSSClientComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00B0   (0x0058)  MISSED
};

/// Class /Script/TSS.TssSDKSettings
/// Size: 0x0018 (0x000038 - 0x000050)
class UTssSDKSettings : public UDeveloperSettings
{ 
public:
	uint32_t                                           GameID;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            AuthToken;                                                  // 0x0040   (0x0010)  
};

/// Struct /Script/TSS.TSSClientDataReport
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTSSClientDataReport
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/TSS.TSSAccountInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTSSAccountInfo
{ 
	FString                                            AccountId;                                                  // 0x0000   (0x0010)  
	ETSSAccountType                                    AccountType;                                                // 0x0010   (0x0004)  
	ETSSClientPlatformType                             PlatformType;                                               // 0x0014   (0x0004)  
	uint32_t                                           WorldId;                                                    // 0x0018   (0x0004)  
	uint32_t                                           ChannelID;                                                  // 0x001C   (0x0004)  
	uint64_t                                           RoleId;                                                     // 0x0020   (0x0008)  
	uint32_t                                           GameID;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Enum /Script/TSS.ETSSAccountType
/// Size: 0x02
enum ETSSAccountType : uint32_t
{
	ETSSAccountType__Common                                                          = 601,
	ETSSAccountType__ETSSAccountType_MAX                                             = 602
};

/// Enum /Script/TSS.ETSSAddUserResult
/// Size: 0x10
enum ETSSAddUserResult : uint8_t
{
	ETSSAddUserResult__Success                                                       = 0,
	ETSSAddUserResult__Error_NoServerInterface                                       = 1,
	ETSSAddUserResult__Error_NotServer                                               = 2,
	ETSSAddUserResult__Error_AccountInfoConversionFailure                            = 3,
	ETSSAddUserResult__Error_SdkReturnedError                                        = 4,
	ETSSAddUserResult__Error_NoServerApiHandler                                      = 5,
	ETSSAddUserResult__Error_OwnerNotPlayerController                                = 6,
	ETSSAddUserResult__Error_FailedToGetRemoteAddress                                = 7,
	ETSSAddUserResult__Error_AlreadyLoggedIn                                         = 8,
	ETSSAddUserResult__ETSSAddUserResult_MAX                                         = 9
};

/// Enum /Script/TSS.ETSSBroadcastedTextCategory
/// Size: 0x06
enum ETSSBroadcastedTextCategory : uint32_t
{
	ETSSBroadcastedTextCategory__Unknown                                             = 0,
	ETSSBroadcastedTextCategory__ProfileInformation                                  = 100,
	ETSSBroadcastedTextCategory__InstantMessages                                     = 1000,
	ETSSBroadcastedTextCategory__SocialOperation                                     = 2000,
	ETSSBroadcastedTextCategory__ForumContent                                        = 3000,
	ETSSBroadcastedTextCategory__ETSSBroadcastedTextCategory_MAX                     = 3001
};

/// Enum /Script/TSS.ETSSClientPlatformType
/// Size: 0x03
enum ETSSClientPlatformType : uint8_t
{
	ETSSClientPlatformType__PcClient                                                 = 3,
	ETSSClientPlatformType__PS                                                       = 7,
	ETSSClientPlatformType__ETSSClientPlatformType_MAX                               = 8
};

/// Enum /Script/TSS.ETSSDeleteUserResult
/// Size: 0x09
enum ETSSDeleteUserResult : uint8_t
{
	ETSSDeleteUserResult__Success                                                    = 0,
	ETSSDeleteUserResult__Error_NoServerInterface                                    = 1,
	ETSSDeleteUserResult__Error_NotServer                                            = 2,
	ETSSDeleteUserResult__Error_ClientNotFound                                       = 3,
	ETSSDeleteUserResult__Error_AccountInfoConversionFailure                         = 4,
	ETSSDeleteUserResult__Error_SdkReturnedError                                     = 5,
	ETSSDeleteUserResult__Error_NoServerApiHandler                                   = 6,
	ETSSDeleteUserResult__Error_AlreadyLoggedOut                                     = 7,
	ETSSDeleteUserResult__ETSSDeleteUserResult_MAX                                   = 8
};

/// Enum /Script/TSS.ETSSProfanityFilterResult
/// Size: 0x04
enum ETSSProfanityFilterResult : uint8_t
{
	ETSSProfanityFilterResult__NoProfanity                                           = 0,
	ETSSProfanityFilterResult__SeverProfanity                                        = 1,
	ETSSProfanityFilterResult__Profanity                                             = 2,
	ETSSProfanityFilterResult__ETSSProfanityFilterResult_MAX                         = 3
};

/// Enum /Script/TSS.ETSSReceivedClientDataResult
/// Size: 0x08
enum ETSSReceivedClientDataResult : uint8_t
{
	ETSSReceivedClientDataResult__Success                                            = 0,
	ETSSReceivedClientDataResult__Error_ClientNotFound                               = 1,
	ETSSReceivedClientDataResult__Error_AntiCheatNotInitalized                       = 2,
	ETSSReceivedClientDataResult__Error_NoClientData                                 = 3,
	ETSSReceivedClientDataResult__Error_NotServer                                    = 4,
	ETSSReceivedClientDataResult__Error_AccountInfoConversionFailure                 = 5,
	ETSSReceivedClientDataResult__Error_SdkReturnedError                             = 6,
	ETSSReceivedClientDataResult__ETSSReceivedClientDataResult_MAX                   = 7
};

/// Enum /Script/TSS.ETSSAceLogoutResult
/// Size: 0x05
enum ETSSAceLogoutResult : uint8_t
{
	ETSSAceLogoutResult__Success                                                     = 0,
	ETSSAceLogoutResult__Error_LogoutClientMismatch                                  = 1,
	ETSSAceLogoutResult__Error_NotLoggedIn                                           = 2,
	ETSSAceLogoutResult__Error_NotClientApp                                          = 3,
	ETSSAceLogoutResult__ETSSAceLogoutResult_MAX                                     = 4
};

/// Enum /Script/TSS.ETSSAceLoginResult
/// Size: 0x08
enum ETSSAceLoginResult : uint8_t
{
	ETSSAceLoginResult__Success                                                      = 0,
	ETSSAceLoginResult__Error_AlreadyLoggedIn                                        = 1,
	ETSSAceLoginResult__Error_GhostLogin                                             = 2,
	ETSSAceLoginResult__Error_AceNotInitialized                                      = 3,
	ETSSAceLoginResult__Error_AccountInfoConversionFailure                           = 4,
	ETSSAceLoginResult__Error_InternalLoginError                                     = 5,
	ETSSAceLoginResult__Error_NotClientApp                                           = 6,
	ETSSAceLoginResult__ETSSAceLoginResult_MAX                                       = 7
};

/// Enum /Script/TSS.ETSSSdkLoadState
/// Size: 0x05
enum ETSSSdkLoadState : uint8_t
{
	ETSSSdkLoadState__NotLoaded                                                      = 0,
	ETSSSdkLoadState__LoadFailed                                                     = 1,
	ETSSSdkLoadState__LoadSuccessful                                                 = 2,
	ETSSSdkLoadState__Unloaded                                                       = 3,
	ETSSSdkLoadState__ETSSSdkLoadState_MAX                                           = 4
};

/// Enum /Script/TSS.ETSSSetAccountInfoResult
/// Size: 0x07
enum ETSSSetAccountInfoResult : uint8_t
{
	ETSSSetAccountInfoResult__Success                                                = 0,
	ETSSSetAccountInfoResult__Error_AntiBotNotInitialized                            = 1,
	ETSSSetAccountInfoResult__Error_NotClient                                        = 2,
	ETSSSetAccountInfoResult__Error_AccountInfoConversionFailure                     = 3,
	ETSSSetAccountInfoResult__Error_UnhandledDataConversionResult                    = 4,
	ETSSSetAccountInfoResult__Error_AlreadyInitialized                               = 5,
	ETSSSetAccountInfoResult__ETSSSetAccountInfoResult_MAX                           = 6
};

/// Enum /Script/TSS.ETSSSubmitTextResult
/// Size: 0x08
enum ETSSSubmitTextResult : uint8_t
{
	ETSSSubmitTextResult__Success                                                    = 0,
	ETSSSubmitTextResult__Error_NotServer                                            = 1,
	ETSSSubmitTextResult__Error_UICNotInitalized                                     = 2,
	ETSSSubmitTextResult__Error_ClientNotFound                                       = 3,
	ETSSSubmitTextResult__Error_MessageLengthExceeded                                = 4,
	ETSSSubmitTextResult__Error_TextCategoryMismatch                                 = 5,
	ETSSSubmitTextResult__Error_SdkReturnedError                                     = 6,
	ETSSSubmitTextResult__ETSSSubmitTextResult_MAX                                   = 7
};

/// Enum /Script/TSS.ETSSPlatformTypeConversionResult
/// Size: 0x03
enum ETSSPlatformTypeConversionResult : uint8_t
{
	ETSSPlatformTypeConversionResult__Success                                        = 0,
	ETSSPlatformTypeConversionResult__Error_UnhandledType                            = 1,
	ETSSPlatformTypeConversionResult__ETSSPlatformTypeConversionResult_MAX           = 2
};

/// Enum /Script/TSS.ETSSAccountTypeConversionResult
/// Size: 0x03
enum ETSSAccountTypeConversionResult : uint8_t
{
	ETSSAccountTypeConversionResult__Success                                         = 0,
	ETSSAccountTypeConversionResult__Error_UnhandledType                             = 1,
	ETSSAccountTypeConversionResult__ETSSAccountTypeConversionResult_MAX             = 2
};

/// Enum /Script/TSS.ETSSAccountInfoConversionResult
/// Size: 0x05
enum ETSSAccountInfoConversionResult : uint8_t
{
	ETSSAccountInfoConversionResult__Success                                         = 0,
	ETSSAccountInfoConversionResult__Error_BadAccountId                              = 1,
	ETSSAccountInfoConversionResult__Error_UndefinedPlatform                         = 2,
	ETSSAccountInfoConversionResult__Error_UndefinedAccountType                      = 3,
	ETSSAccountInfoConversionResult__ETSSAccountInfoConversionResult_MAX             = 4
};

