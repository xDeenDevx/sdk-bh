/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MagicLeapARPin.

/// Class /Script/MagicLeapARPin.MagicLeapARPinComponent
/// Size: 0x01B0 (0x000200 - 0x0003B0)
class UMagicLeapARPinComponent : public USceneComponent
{ 
public:
	FString                                            ObjectUID;                                                  // 0x01F8   (0x0010)  
	int32_t                                            UserIndex;                                                  // 0x0208   (0x0004)  
	EMagicLeapAutoPinType                              AutoPinType;                                                // 0x020C   (0x0001)  
	bool                                               bShouldPinActor;                                            // 0x020D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x020E   (0x0002)  MISSED
	UClass*                                            PinDataClass;                                               // 0x0210   (0x0008)  
	TSet<EMagicLeapARPinType>                          SearchPinTypes;                                             // 0x0218   (0x0050)  
	USphereComponent*                                  SearchVolume;                                               // 0x0268   (0x0008)  
	FMulticastInlineDelegate                           OnPersistentEntityPinned;                                   // 0x0270   (0x0010)  
	FMulticastInlineDelegate                           OnPersistentEntityPinLost;                                  // 0x0280   (0x0010)  
	FMulticastInlineDelegate                           OnPinDataLoadAttemptCompleted;                              // 0x0290   (0x0010)  
	FGuid                                              PinnedCFUID;                                                // 0x02A0   (0x0010)  
	USceneComponent*                                   PinnedSceneComponent;                                       // 0x02B0   (0x0008)  
	UMagicLeapARPinSaveGame*                           PinData;                                                    // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xF0];                                      // 0x02C0   (0x00F0)  MISSED


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.UnPin
	void UnPin();                                                                                                            // [0xec0570] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
	UMagicLeapARPinSaveGame* TryGetPinData(UClass* InPinDataClass, bool& OutPinDataValid);                                   // [0xec0350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
	bool PinToRestoredOrSyncedID();                                                                                          // [0xebfff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToID
	bool PinToID(FGuid& PinId);                                                                                              // [0xebff40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
	void PinToBestFit();                                                                                                     // [0xebff20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
	bool PinSceneComponent(USceneComponent* ComponentToPin);                                                                 // [0xebfe80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
	bool PinRestoredOrSynced();                                                                                              // [0xebfe50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinActor
	bool PinActor(AActor* ActorToPin);                                                                                       // [0xebfdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);                                                  // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
	void PersistentEntityPinLost__DelegateSignature();                                                                       // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
	void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored);                                      // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.IsPinned
	bool IsPinned();                                                                                                         // [0xebfc60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinState
	bool GetPinState(FMagicLeapARPinState& State);                                                                           // [0xebfb00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
	bool GetPinnedPinID(FGuid& PinId);                                                                                       // [0xebfbb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinData
	UMagicLeapARPinSaveGame* GetPinData(UClass* PinDataClass);                                                               // [0xebfa60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
	void AttemptPinDataRestorationAsync();                                                                                   // [0xebf020] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
	bool AttemptPinDataRestoration();                                                                                        // [0xebeff0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase
/// Size: 0x0018 (0x000228 - 0x000240)
class AMagicLeapARPinInfoActorBase : public AActor
{ 
public:
	FGuid                                              PinId;                                                      // 0x0228   (0x0010)  
	bool                                               bVisibilityOverride;                                        // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0239   (0x0007)  MISSED


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
	void OnUpdateARPinState();                                                                                               // [0x197e4f0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinRenderer
/// Size: 0x0068 (0x000228 - 0x000290)
class AMagicLeapARPinRenderer : public AActor
{ 
public:
	bool                                               bInfoActorsVisibilityOverride;                              // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0229   (0x0007)  MISSED
	TMap<FGuid, AMagicLeapARPinInfoActorBase*>         AllInfoActors;                                              // 0x0230   (0x0050)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0280   (0x0008)  MISSED
	UClass*                                            ClassToSpawn;                                               // 0x0288   (0x0008)  


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
	void SetVisibilityOverride(bool InVisibilityOverride);                                                                   // [0xec02c0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UMagicLeapARPinSettings : public UObject
{ 
public:
	float                                              UpdateCheckFrequency;                                       // 0x0028   (0x0004)  
	FMagicLeapARPinState                               OnUpdatedEventTriggerDelta;                                 // 0x002C   (0x0014)  
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSaveGame
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UMagicLeapARPinSaveGame : public USaveGame
{ 
public:
	FGuid                                              PinnedID;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         ComponentWorldTransform;                                    // 0x0040   (0x0030)  
	FTransform                                         PinTransform;                                               // 0x0070   (0x0030)  
	bool                                               bShouldPinActor;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinContentBindings
/// Size: 0x0050 (0x000028 - 0x000078)
class UMagicLeapARPinContentBindings : public USaveGame
{ 
public:
	TMap<FGuid, FMagicLeapARPinObjectIdList>           AllContentBindings;                                         // 0x0028   (0x0050)  
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinState
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMagicLeapARPinState
{ 
	float                                              Confidence;                                                 // 0x0000   (0x0004)  
	float                                              ValidRadius;                                                // 0x0004   (0x0004)  
	float                                              RotationError;                                              // 0x0008   (0x0004)  
	float                                              TranslationError;                                           // 0x000C   (0x0004)  
	EMagicLeapARPinType                                PinType;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinQuery
/// Size: 0x0068 (0x000000 - 0x000068)
struct FMagicLeapARPinQuery
{ 
	TSet<EMagicLeapARPinType>                          Types;                                                      // 0x0000   (0x0050)  
	int32_t                                            MaxResults;                                                 // 0x0050   (0x0004)  
	FVector                                            TargetPoint;                                                // 0x0054   (0x000C)  
	float                                              Radius;                                                     // 0x0060   (0x0004)  
	bool                                               bSorted;                                                    // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinObjectIdList
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMagicLeapARPinObjectIdList
{ 
	TSet<FString>                                      ObjectIdList;                                               // 0x0000   (0x0050)  
};

/// Enum /Script/MagicLeapARPin.EMagicLeapARPinType
/// Size: 0x04
enum EMagicLeapARPinType : uint8_t
{
	EMagicLeapARPinType__SingleUserSingleSession                                     = 0,
	EMagicLeapARPinType__SingleUserMultiSession                                      = 1,
	EMagicLeapARPinType__MultiUserMultiSession                                       = 2,
	EMagicLeapARPinType__EMagicLeapARPinType_MAX                                     = 3
};

/// Enum /Script/MagicLeapARPin.EMagicLeapAutoPinType
/// Size: 0x04
enum EMagicLeapAutoPinType : uint8_t
{
	EMagicLeapAutoPinType__OnlyOnDataRestoration                                     = 0,
	EMagicLeapAutoPinType__Always                                                    = 1,
	EMagicLeapAutoPinType__Never                                                     = 2,
	EMagicLeapAutoPinType__EMagicLeapAutoPinType_MAX                                 = 3
};

/// Enum /Script/MagicLeapARPin.EMagicLeapPassableWorldError
/// Size: 0x13
enum EMagicLeapPassableWorldError : uint8_t
{
	EMagicLeapPassableWorldError__None                                               = 0,
	EMagicLeapPassableWorldError__LowMapQuality                                      = 1,
	EMagicLeapPassableWorldError__UnableToLocalize                                   = 2,
	EMagicLeapPassableWorldError__Unavailable                                        = 3,
	EMagicLeapPassableWorldError__PrivilegeDenied                                    = 4,
	EMagicLeapPassableWorldError__InvalidParam                                       = 5,
	EMagicLeapPassableWorldError__UnspecifiedFailure                                 = 6,
	EMagicLeapPassableWorldError__PrivilegeRequestPending                            = 7,
	EMagicLeapPassableWorldError__StartupPending                                     = 8,
	EMagicLeapPassableWorldError__SharedWorldNotEnabled                              = 9,
	EMagicLeapPassableWorldError__NotImplemented                                     = 10,
	EMagicLeapPassableWorldError__PinNotFound                                        = 11,
	EMagicLeapPassableWorldError__EMagicLeapPassableWorldError_MAX                   = 12
};

