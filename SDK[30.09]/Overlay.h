/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Overlay.

/// Class /Script/Overlay.Overlays
/// Size: 0x0000 (0x000028 - 0x000028)
class UOverlays : public UObject
{ 
public:
};

/// Class /Script/Overlay.BasicOverlays
/// Size: 0x0010 (0x000028 - 0x000038)
class UBasicOverlays : public UOverlays
{ 
public:
	TArray<FOverlayItem>                               Overlays;                                                   // 0x0028   (0x0010)  
};

/// Class /Script/Overlay.LocalizedOverlays
/// Size: 0x0058 (0x000028 - 0x000080)
class ULocalizedOverlays : public UOverlays
{ 
public:
	UBasicOverlays*                                    DefaultOverlays;                                            // 0x0028   (0x0008)  
	TMap<FString, UBasicOverlays*>                     LocaleToOverlaysMap;                                        // 0x0030   (0x0050)  
};

/// Struct /Script/Overlay.OverlayItem
/// Size: 0x0028 (0x000000 - 0x000028)
struct FOverlayItem
{ 
	FTimespan                                          StartTime;                                                  // 0x0000   (0x0008)  
	FTimespan                                          EndTime;                                                    // 0x0008   (0x0008)  
	FString                                            Text;                                                       // 0x0010   (0x0010)  
	FVector2D                                          Position;                                                   // 0x0020   (0x0008)  
};

