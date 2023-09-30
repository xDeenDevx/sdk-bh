/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystemUtils.

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x00A0 (0x001AF0 - 0x001B90)
class UIpConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x1AF0   (0x0050)  MISSED
	float                                              SocketErrorDisconnectDelay;                                 // 0x1B40   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4C];                                      // 0x1B44   (0x004C)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x0070 (0x000748 - 0x0007B8)
class UIpNetDriver : public UNetDriver
{ 
public:
	bool                                               LogPortUnreach;                                             // 0x0748:0 (0x0001)  
	bool                                               AllowPlayerPortUnreach;                                     // 0x0748:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0749   (0x0003)  MISSED
	uint32_t                                           MaxPortCountToTry;                                          // 0x074C   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0750   (0x000C)  MISSED
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                      // 0x075C   (0x0004)  
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                         // 0x0760   (0x0004)  
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                      // 0x0764   (0x0004)  
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                         // 0x0768   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x076C   (0x0004)  MISSED
	double                                             MaxSecondsInReceive;                                        // 0x0770   (0x0008)  
	int32_t                                            NbPacketsBetweenReceiveTimeTest;                            // 0x0778   (0x0004)  
	float                                              ResolutionConnectionTimeout;                                // 0x077C   (0x0004)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0780   (0x0038)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	UAchievementQueryCallbackProxy* CacheAchievements(UObject* WorldContextObject, APlayerController* PlayerController);     // [0xcdd7d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	UAchievementQueryCallbackProxy* CacheAchievementDescriptions(UObject* WorldContextObject, APlayerController* PlayerController); // [0xcdd700] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	UAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag); // [0xcdf830] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	UConnectionCallbackProxy* ConnectToService(UObject* WorldContextObject, APlayerController* PlayerController);            // [0xcdd8a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x0068 (0x000030 - 0x000098)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	UCreateSessionCallbackProxy* CreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // [0xcde0d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	UDestroySessionCallbackProxy* DestroySession(UObject* WorldContextObject, APlayerController* PlayerController);          // [0xcde220] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	UEndMatchCallbackProxy* EndMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<Class> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome); // [0xcde2f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	UEndTurnCallbackProxy* EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, TScriptInterface<Class> TurnBasedMatchInterface); // [0xcde520] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0060 (0x000030 - 0x000090)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	FString GetServerName(FBlueprintSessionResult& Result);                                                                  // [0xcdf5d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	int32_t GetPingInMs(FBlueprintSessionResult& Result);                                                                    // [0xcdf3b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	int32_t GetMaxPlayers(FBlueprintSessionResult& Result);                                                                  // [0xcdf190] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	int32_t GetCurrentPlayers(FBlueprintSessionResult& Result);                                                              // [0xcdef70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	UFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // [0xcde6e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0058 (0x000030 - 0x000088)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0050   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<Class> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // [0xcde830] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy
/// Size: 0x0058 (0x000028 - 0x000080)
class UInAppPurchaseCallbackProxy : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0048   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest& ProductRequest); // [0xcdda60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UInAppPurchaseCallbackProxy2 : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController* PlayerController); // [0xcde040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController* PlayerController);          // [0xcddd70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // [0xcdd970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
/// Size: 0x0068 (0x000028 - 0x000090)
class UInAppPurchaseQueryCallbackProxy : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0xcddc60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
/// Size: 0x0040 (0x000028 - 0x000068)
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0xcddb50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
/// Size: 0x0068 (0x000028 - 0x000090)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, APlayerController* PlayerController); // [0xcddf20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, APlayerController* PlayerController); // [0xcdde00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0150 (0x000030 - 0x000180)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x130];                                     // 0x0050   (0x0130)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	UJoinSessionCallbackProxy* JoinSession(UObject* WorldContextObject, APlayerController* PlayerController, FBlueprintSessionResult& SearchResult); // [0xce3540] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0040 (0x000028 - 0x000068)
class ULeaderboardFlushCallbackProxy : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(APlayerController* PlayerController, FName SessionName);       // [0xce33a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x0070 (0x000028 - 0x000098)
class ULeaderboardQueryCallbackProxy : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(APlayerController* PlayerController, FName StatName);       // [0xce3470] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController);                          // [0xce3690] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x0030 (0x000228 - 0x000258)
class AOnlineBeacon : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0228   (0x0008)  MISSED
	float                                              BeaconConnectionInitialTimeout;                             // 0x0230   (0x0004)  
	float                                              BeaconConnectionTimeout;                                    // 0x0234   (0x0004)  
	UNetDriver*                                        NetDriver;                                                  // 0x0238   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0240   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x0060 (0x000258 - 0x0002B8)
class AOnlineBeaconClient : public AOnlineBeacon
{ 
public:
	AOnlineBeaconHostObject*                           BeaconOwner;                                                // 0x0258   (0x0008)  
	UNetConnection*                                    BeaconConnection;                                           // 0x0260   (0x0008)  
	EBeaconConnectionState                             ConnectionState;                                            // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4F];                                      // 0x0269   (0x004F)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	void ClientOnConnected();                                                                                                // [0xce3100] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x00B8 (0x000258 - 0x000310)
class AOnlineBeaconHost : public AOnlineBeacon
{ 
public:
	int32_t                                            ListenPort;                                                 // 0x0258   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x025C   (0x0004)  MISSED
	TArray<AOnlineBeaconClient*>                       ClientActors;                                               // 0x0260   (0x0010)  
	unsigned char                                      UnknownData01_6[0xA0];                                      // 0x0270   (0x00A0)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x0028 (0x000228 - 0x000250)
class AOnlineBeaconHostObject : public AActor
{ 
public:
	FString                                            BeaconTypeName;                                             // 0x0228   (0x0010)  
	UClass*                                            ClientBeaconActorClass;                                     // 0x0238   (0x0008)  
	TArray<AOnlineBeaconClient*>                       ClientActors;                                               // 0x0240   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0100 (0x000028 - 0x000128)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{ 
public:
	FName                                              VoiceSubsystemNameOverride;                                 // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0xF8];                                      // 0x0030   (0x00F8)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0018 (0x000038 - 0x000050)
class UOnlinePIESettings : public UDeveloperSettings
{ 
public:
	bool                                               bOnlinePIEEnabled;                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FPIELoginSettingsInternal>                  Logins;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x01B8 (0x000028 - 0x0001E0)
class UOnlineSessionClient : public UOnlineSession
{ 
public:
	unsigned char                                      UnknownData00_2[0x1B0];                                     // 0x0028   (0x01B0)  MISSED
	bool                                               bIsFromInvite;                                              // 0x01D8   (0x0001)  
	bool                                               bHandlingDisconnect;                                        // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x01DA   (0x0006)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x00C0 (0x0002B8 - 0x000378)
class APartyBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x02B8   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x02E8   (0x0010)  
	FPartyReservation                                  PendingReservation;                                         // 0x02F8   (0x0050)  
	EClientRequestType                                 RequestType;                                                // 0x0348   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x0349   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x034A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2D];                                      // 0x034B   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	void ServerUpdateReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                             // [0xce41b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	void ServerReservationRequest(FString SessionId, FPartyReservation Reservation);                                         // [0xce3d20] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	void ServerRemoveMemberFromReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                   // [0xce3a90] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader);                                                       // [0xce3930] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0xce3280] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	void ClientSendReservationFull();                                                                                        // [0xce3240] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                                // [0xce3140] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                          // [0xce3000] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x0078 (0x000250 - 0x0002C8)
class APartyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	UPartyBeaconState*                                 State;                                                      // 0x0250   (0x0008)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x0258   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02B9   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x02BC   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x0050 (0x000028 - 0x000078)
class UPartyBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	int32_t                                            NumTeams;                                                   // 0x0038   (0x0004)  
	int32_t                                            NumPlayersPerTeam;                                          // 0x003C   (0x0004)  
	FName                                              TeamAssignmentMethod;                                       // 0x0040   (0x0008)  
	int32_t                                            ReservedHostTeamNum;                                        // 0x0048   (0x0004)  
	int32_t                                            ForceTeamNum;                                               // 0x004C   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0050   (0x0001)  
	bool                                               bEnableRemovalRequests;                                     // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<FPartyReservation>                          Reservations;                                               // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0068   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	UQuitMatchCallbackProxy* QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32_t TurnTimeoutInSeconds); // [0xce3760] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);      // [0xce4440] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
/// Size: 0x00E8 (0x0002B8 - 0x0003A0)
class ASpectatorBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x02B8   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x02E8   (0x0010)  
	FSpectatorReservation                              PendingReservation;                                         // 0x02F8   (0x0078)  
	ESpectatorClientRequestType                        RequestType;                                                // 0x0370   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x0371   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x0372   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2D];                                      // 0x0373   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	void ServerReservationRequest(FString SessionId, FSpectatorReservation Reservation);                                     // [0xce3fb0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator);                                                         // [0xce3930] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0xce3310] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	void ClientSendReservationFull();                                                                                        // [0xce3260] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                            // [0xce31c0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                      // [0xce3080] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost
/// Size: 0x0078 (0x000250 - 0x0002C8)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	USpectatorBeaconState*                             State;                                                      // 0x0250   (0x0008)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x0258   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02B9   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x02BC   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
/// Size: 0x0038 (0x000028 - 0x000060)
class USpectatorBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FSpectatorReservation>                      Reservations;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class ATestBeaconClient : public AOnlineBeaconClient
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x0000 (0x000250 - 0x000250)
class ATestBeaconHost : public AOnlineBeaconHostObject
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x0060 (0x0006C0 - 0x000720)
class UVoipListenerSynthComponent : public USynthComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x06C0   (0x0060)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x0108 (0x000000 - 0x000108)
struct FBlueprintSessionResult
{ 
	unsigned char                                      UnknownData00_1[0x108];                                     // 0x0000   (0x0108)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseReceiptInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
/// Size: 0x0110 (0x000000 - 0x000110)
struct FOnlineProxyStoreOffer
{ 
	FString                                            OfferId;                                                    // 0x0000   (0x0010)  
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	FText                                              Description;                                                // 0x0028   (0x0018)  
	FText                                              LongDescription;                                            // 0x0040   (0x0018)  
	FText                                              RegularPriceText;                                           // 0x0058   (0x0018)  
	int32_t                                            RegularPrice;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FText                                              PriceText;                                                  // 0x0078   (0x0018)  
	int32_t                                            NumericPrice;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0098   (0x0010)  
	FDateTime                                          ReleaseDate;                                                // 0x00A8   (0x0008)  
	FDateTime                                          ExpirationDate;                                             // 0x00B0   (0x0008)  
	EOnlineProxyStoreOfferDiscountType                 DiscountType;                                               // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TMap<FString, FString>                             DynamicFields;                                              // 0x00C0   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseRestoreInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseReceiptInfo
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FInAppPurchaseProductInfo2
{ 
	FString                                            Identifier;                                                 // 0x0000   (0x0010)  
	FString                                            TransactionIdentifier;                                      // 0x0010   (0x0010)  
	FString                                            DISPLAYNAME;                                                // 0x0020   (0x0010)  
	FString                                            DisplayDescription;                                         // 0x0030   (0x0010)  
	FString                                            DisplayPrice;                                               // 0x0040   (0x0010)  
	float                                              RawPrice;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0058   (0x0010)  
	FString                                            CurrencySymbol;                                             // 0x0068   (0x0010)  
	FString                                            DecimalSeparator;                                           // 0x0078   (0x0010)  
	FString                                            GroupingSeparator;                                          // 0x0088   (0x0010)  
	FString                                            ReceiptData;                                                // 0x0098   (0x0010)  
	TMap<FString, FString>                             DynamicFields;                                              // 0x00A8   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInAppPurchaseProductRequest2
{ 
	FString                                            ProductIdentifier;                                          // 0x0000   (0x0010)  
	bool                                               bIsConsumable;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPlayerReservation
{ 
	FUniqueNetIdRepl                                   UniqueID;                                                   // 0x0000   (0x0028)  
	FString                                            ValidationStr;                                              // 0x0028   (0x0010)  
	FString                                            Platform;                                                   // 0x0038   (0x0010)  
	bool                                               bAllowCrossplay;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              ElapsedTime;                                                // 0x004C   (0x0004)  
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPIELoginSettingsInternal
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FString                                            Token;                                                      // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	TArray<char>                                       TokenBytes;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPartyReservation
{ 
	int32_t                                            TeamNum;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FUniqueNetIdRepl                                   PartyLeader;                                                // 0x0008   (0x0028)  
	TArray<FPlayerReservation>                         PartyMembers;                                               // 0x0030   (0x0010)  
	TArray<FPlayerReservation>                         RemovedPartyMembers;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.SpectatorReservation
/// Size: 0x0078 (0x000000 - 0x000078)
struct FSpectatorReservation
{ 
	FUniqueNetIdRepl                                   SpectatorId;                                                // 0x0000   (0x0028)  
	FPlayerReservation                                 Spectator;                                                  // 0x0028   (0x0050)  
};

/// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
/// Size: 0x07
enum EInAppPurchaseStatus : uint8_t
{
	EInAppPurchaseStatus__Invalid                                                    = 0,
	EInAppPurchaseStatus__Failed                                                     = 1,
	EInAppPurchaseStatus__Deferred                                                   = 2,
	EInAppPurchaseStatus__Canceled                                                   = 3,
	EInAppPurchaseStatus__Purchased                                                  = 4,
	EInAppPurchaseStatus__Restored                                                   = 5,
	EInAppPurchaseStatus__EInAppPurchaseStatus_MAX                                   = 6
};

/// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
/// Size: 0x05
enum EOnlineProxyStoreOfferDiscountType : uint8_t
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale                                    = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage                                   = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount                               = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount                                    = 3,
	EOnlineProxyStoreOfferDiscountType__EOnlineProxyStoreOfferDiscountType_MAX       = 4
};

/// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
/// Size: 0x05
enum EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid                                                  = 0,
	EBeaconConnectionState__Closed                                                   = 1,
	EBeaconConnectionState__Pending                                                  = 2,
	EBeaconConnectionState__Open                                                     = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX                               = 4
};

/// Enum /Script/OnlineSubsystemUtils.EClientRequestType
/// Size: 0x08
enum EClientRequestType : uint8_t
{
	EClientRequestType__NonePending                                                  = 0,
	EClientRequestType__ExistingSessionReservation                                   = 1,
	EClientRequestType__ReservationUpdate                                            = 2,
	EClientRequestType__EmptyServerReservation                                       = 3,
	EClientRequestType__Reconnect                                                    = 4,
	EClientRequestType__Abandon                                                      = 5,
	EClientRequestType__ReservationRemoveMembers                                     = 6,
	EClientRequestType__EClientRequestType_MAX                                       = 7
};

/// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
/// Size: 0x17
enum EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult                                                = 0,
	EPartyReservationResult__RequestPending                                          = 1,
	EPartyReservationResult__GeneralError                                            = 2,
	EPartyReservationResult__PartyLimitReached                                       = 3,
	EPartyReservationResult__IncorrectPlayerCount                                    = 4,
	EPartyReservationResult__RequestTimedOut                                         = 5,
	EPartyReservationResult__ReservationDuplicate                                    = 6,
	EPartyReservationResult__ReservationNotFound                                     = 7,
	EPartyReservationResult__ReservationAccepted                                     = 8,
	EPartyReservationResult__ReservationDenied                                       = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction                  = 10,
	EPartyReservationResult__ReservationDenied_Banned                                = 11,
	EPartyReservationResult__ReservationRequestCanceled                              = 12,
	EPartyReservationResult__ReservationInvalid                                      = 13,
	EPartyReservationResult__BadSessionId                                            = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers               = 15,
	EPartyReservationResult__EPartyReservationResult_MAX                             = 16
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
/// Size: 0x07
enum ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending                                         = 0,
	ESpectatorClientRequestType__ExistingSessionReservation                          = 1,
	ESpectatorClientRequestType__ReservationUpdate                                   = 2,
	ESpectatorClientRequestType__EmptyServerReservation                              = 3,
	ESpectatorClientRequestType__Reconnect                                           = 4,
	ESpectatorClientRequestType__Abandon                                             = 5,
	ESpectatorClientRequestType__ESpectatorClientRequestType_MAX                     = 6
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
/// Size: 0x17
enum ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult                                            = 0,
	ESpectatorReservationResult__RequestPending                                      = 1,
	ESpectatorReservationResult__GeneralError                                        = 2,
	ESpectatorReservationResult__SpectatorLimitReached                               = 3,
	ESpectatorReservationResult__IncorrectPlayerCount                                = 4,
	ESpectatorReservationResult__RequestTimedOut                                     = 5,
	ESpectatorReservationResult__ReservationDuplicate                                = 6,
	ESpectatorReservationResult__ReservationNotFound                                 = 7,
	ESpectatorReservationResult__ReservationAccepted                                 = 8,
	ESpectatorReservationResult__ReservationDenied                                   = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction              = 10,
	ESpectatorReservationResult__ReservationDenied_Banned                            = 11,
	ESpectatorReservationResult__ReservationRequestCanceled                          = 12,
	ESpectatorReservationResult__ReservationInvalid                                  = 13,
	ESpectatorReservationResult__BadSessionId                                        = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers           = 15,
	ESpectatorReservationResult__ESpectatorReservationResult_MAX                     = 16
};

