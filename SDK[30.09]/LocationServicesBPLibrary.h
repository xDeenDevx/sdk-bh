/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LocationServicesBPLibrary.

/// Class /Script/LocationServicesBPLibrary.LocationServices
/// Size: 0x0000 (0x000028 - 0x000028)
class ULocationServices : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/LocationServicesBPLibrary.LocationServicesImpl
/// Size: 0x0010 (0x000028 - 0x000038)
class ULocationServicesImpl : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnLocationChanged;                                          // 0x0028   (0x0010)  
};

/// Struct /Script/LocationServicesBPLibrary.LocationServicesData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLocationServicesData
{ 
	float                                              Timestamp;                                                  // 0x0000   (0x0004)  
	float                                              Longitude;                                                  // 0x0004   (0x0004)  
	float                                              Latitude;                                                   // 0x0008   (0x0004)  
	float                                              HorizontalAccuracy;                                         // 0x000C   (0x0004)  
	float                                              VerticalAccuracy;                                           // 0x0010   (0x0004)  
	float                                              Altitude;                                                   // 0x0014   (0x0004)  
};

/// Enum /Script/LocationServicesBPLibrary.ELocationAccuracy
/// Size: 0x07
enum ELocationAccuracy : uint8_t
{
	ELocationAccuracy__LA_ThreeKilometers                                            = 0,
	ELocationAccuracy__LA_OneKilometer                                               = 1,
	ELocationAccuracy__LA_HundredMeters                                              = 2,
	ELocationAccuracy__LA_TenMeters                                                  = 3,
	ELocationAccuracy__LA_Best                                                       = 4,
	ELocationAccuracy__LA_Navigation                                                 = 5,
	ELocationAccuracy__LA_MAX                                                        = 6
};

