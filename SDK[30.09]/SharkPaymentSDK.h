/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SharkPaymentSDK.

/// Class /Script/SharkPaymentSDK.ShPaymentSettings
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UShPaymentSettings : public UDeveloperSettings
{ 
public:
	FString                                            IdcInfo;                                                    // 0x0038   (0x0010)  
	FString                                            OfferId;                                                    // 0x0048   (0x0010)  
	FString                                            ZoneId;                                                     // 0x0058   (0x0010)  
	FString                                            GoodsZoneId;                                                // 0x0068   (0x0010)  
	FString                                            ProvideType;                                                // 0x0078   (0x0010)  
	bool                                               LogEnabled;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	FString                                            StoreServiceUri;                                            // 0x0090   (0x0010)  
	FString                                            ClientId;                                                   // 0x00A0   (0x0010)  
	FString                                            ClientScope;                                                // 0x00B0   (0x0010)  
};

/// Class /Script/SharkPaymentSDK.ShStoreService
/// Size: 0x0068 (0x000028 - 0x000090)
class UShStoreService : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0028   (0x0068)  MISSED
};

/// Struct /Script/SharkPaymentSDK.ShReponse_Finalize
/// Size: 0x0010 (0x000000 - 0x000010)
struct FShReponse_Finalize
{ 
	FString                                            Status;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/SharkPaymentSDK.ShRequest_Finalize
/// Size: 0x0020 (0x000000 - 0x000020)
struct FShRequest_Finalize
{ 
	FString                                            Ticket;                                                     // 0x0000   (0x0010)  
	FString                                            TransactionId;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/SharkPaymentSDK.ShResponse_CreateTicket
/// Size: 0x0010 (0x000000 - 0x000010)
struct FShResponse_CreateTicket
{ 
	FString                                            Ticket;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/SharkPaymentSDK.ShRequest_CreateTicket
/// Size: 0x0038 (0x000000 - 0x000038)
struct FShRequest_CreateTicket
{ 
	FString                                            AppId;                                                      // 0x0000   (0x0010)  
	FString                                            userId;                                                     // 0x0010   (0x0010)  
	FString                                            AuthCode;                                                   // 0x0020   (0x0010)  
	char                                               PlatformBackend;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Enum /Script/SharkPaymentSDK.EShPaymentResult
/// Size: 0x11
enum EShPaymentResult : uint8_t
{
	NOT_SUPPORTED                                                                    = -2,
	GENERAL_ERROR                                                                    = -1,
	OK                                                                               = 0,
	Cancel                                                                           = 1,
	LOGIN_EXPIRED                                                                    = 2,
	DISCONNECTED                                                                     = 3,
	CONNECTION_ERROR                                                                 = 4,
	ABORTED_DUE_TO_FRAUD                                                             = 5,
	PAYMENT_SYSTEM_FAILED                                                            = 6,
	THIRDPARTY_NOT_ENABLED                                                           = 7,
	EShPaymentResult_MAX                                                             = 8
};

