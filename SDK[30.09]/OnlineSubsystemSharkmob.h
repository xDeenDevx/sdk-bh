/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystemSharkmob.

/// Class /Script/OnlineSubsystemSharkmob.AccountErrorHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UAccountErrorHandler : public UObject
{ 
public:
};

/// Class /Script/OnlineSubsystemSharkmob.INTLLoginWithEmailCallbackProxy
/// Size: 0x0060 (0x000030 - 0x000090)
class UINTLLoginWithEmailCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemSharkmob.INTLLoginWithEmailCallbackProxy.ConnectToINTLServiceWithEmail
	UINTLLoginWithEmailCallbackProxy* ConnectToINTLServiceWithEmail(UObject* WorldContextObject, FString InEmail, FString InPassword); // [0xd03690] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemSharkmob.INTLLoginWithTokenCallbackProxy
/// Size: 0x0040 (0x000030 - 0x000070)
class UINTLLoginWithTokenCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemSharkmob.INTLLoginWithTokenCallbackProxy.ConnectToINTLServiceWithToken
	UINTLLoginWithTokenCallbackProxy* ConnectToINTLServiceWithToken(UObject* WorldContextObject);                            // [0xd037d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemSharkmob.INTLQueryEmailAvailabilityCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UINTLQueryEmailAvailabilityCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemSharkmob.INTLQueryEmailAvailabilityCallbackProxy.QueryEmailAvailabilityWithINTL
	UINTLQueryEmailAvailabilityCallbackProxy* QueryEmailAvailabilityWithINTL(UObject* WorldContextObject, FString InEmail);  // [0xd03a20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemSharkmob.INTLQueryUserNameAvailabilityCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UINTLQueryUserNameAvailabilityCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemSharkmob.INTLQueryUserNameAvailabilityCallbackProxy.QueryUserNameAvailabilityWithINTL
	UINTLQueryUserNameAvailabilityCallbackProxy* QueryUserNameAvailabilityWithINTL(UObject* WorldContextObject, FString InUsername); // [0xd03b00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemSharkmob.INTLRegisterAndLoginCallbackProxy
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UINTLRegisterAndLoginCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x0050   (0x0070)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemSharkmob.INTLRegisterAndLoginCallbackProxy.RegisterAndLoginToINTL
	UINTLRegisterAndLoginCallbackProxy* RegisterAndLoginToINTL(UObject* WorldContextObject, FString InEmail, FString InPassword, FString InUsername, FString InVerificationCode, int32_t InRegionId, bool InReceiveNewsletterEmail, FDateTime InBirthday); // [0xd03be0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemSharkmob.INTLSendRegisterVerificationCodeCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UINTLSendRegisterVerificationCodeCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemSharkmob.INTLSendRegisterVerificationCodeCallbackProxy.SendRegisterVerificationCode
	UINTLSendRegisterVerificationCodeCallbackProxy* SendRegisterVerificationCode(UObject* WorldContextObject, FString InUsername); // [0xd03e80] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemSharkmob.AccountRegistrationDataSharkmob
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAccountRegistrationDataSharkmob
{ 
	FString                                            Email;                                                      // 0x0000   (0x0010)  
	FString                                            Password;                                                   // 0x0010   (0x0010)  
	int32_t                                            RegionId;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            UserName;                                                   // 0x0028   (0x0010)  
	FString                                            VerificationCode;                                           // 0x0038   (0x0010)  
	bool                                               RecieveNewsletterEmail;                                     // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/OnlineSubsystemSharkmob.LoginResultSharkmob
/// Size: 0x0060 (0x000050 - 0x0000B0)
struct FLoginResultSharkmob : FAccountRegistrationDataSharkmob
{ 
	FString                                            OpenId;                                                     // 0x0050   (0x0010)  
	FString                                            Token;                                                      // 0x0060   (0x0010)  
	FString                                            PfKey;                                                      // 0x0070   (0x0010)  
	FString                                            Pf;                                                         // 0x0080   (0x0010)  
	FString                                            SharkmobToken;                                              // 0x0090   (0x0010)  
	FString                                            OSSValue;                                                   // 0x00A0   (0x0010)  
};

/// Struct /Script/OnlineSubsystemSharkmob.INTLChannelInfoSharkmob
/// Size: 0x0040 (0x000000 - 0x000040)
struct FINTLChannelInfoSharkmob
{ 
	FString                                            steamid;                                                    // 0x0000   (0x0010)  
	FString                                            userId;                                                     // 0x0010   (0x0010)  
	FString                                            issuerId;                                                   // 0x0020   (0x0010)  
	FINTLMapInfoSharkmob                               map_info;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/OnlineSubsystemSharkmob.INTLMapInfoSharkmob
/// Size: 0x0010 (0x000000 - 0x000010)
struct FINTLMapInfoSharkmob
{ 
	FString                                            sacc_token;                                                 // 0x0000   (0x0010)  
};

/// Enum /Script/OnlineSubsystemSharkmob.EAccountThirdPartyErrorCode
/// Size: 0x09
enum EAccountThirdPartyErrorCode : uint8_t
{
	EAccountThirdPartyErrorCode__AccountServiceError                                 = 0,
	EAccountThirdPartyErrorCode__AccountServiceConnectionError                       = 1,
	EAccountThirdPartyErrorCode__AccountDoesNotExist                                 = 2,
	EAccountThirdPartyErrorCode__EmailAlreadyInUse                                   = 3,
	EAccountThirdPartyErrorCode__ProfanityInUsername                                 = 4,
	EAccountThirdPartyErrorCode__InvalidVerificationCode                             = 5,
	EAccountThirdPartyErrorCode__UsernameUnavailable                                 = 6,
	EAccountThirdPartyErrorCode__SharkmobAccountAlreadyLinkedToPSN                   = 7,
	EAccountThirdPartyErrorCode__EAccountThirdPartyErrorCode_MAX                     = 8
};

/// Enum /Script/OnlineSubsystemSharkmob.EAccountErrorType
/// Size: 0x03
enum EAccountErrorType : uint8_t
{
	EAccountErrorType__Native                                                        = 0,
	EAccountErrorType__ThirdParty                                                    = 1,
	EAccountErrorType__EAccountErrorType_MAX                                         = 2
};

