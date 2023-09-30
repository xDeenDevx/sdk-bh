/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystemSteam.

/// Class /Script/OnlineSubsystemSteam.SteamAuthComponentModuleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{ 
public:
};

/// Class /Script/OnlineSubsystemSteam.SteamNetConnection
/// Size: 0x0008 (0x001B90 - 0x001B98)
class USteamNetConnection : public UIpConnection
{ 
public:
	bool                                               bIsPassthrough;                                             // 0x1B90   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x1B91   (0x0007)  MISSED
};

/// Class /Script/OnlineSubsystemSteam.SteamNetDriver
/// Size: 0x0008 (0x0007B8 - 0x0007C0)
class USteamNetDriver : public UIpNetDriver
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x07B8   (0x0008)  MISSED
};

