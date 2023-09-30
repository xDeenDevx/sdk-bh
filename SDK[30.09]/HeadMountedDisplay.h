/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package HeadMountedDisplay.

/// Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x00C0 (0x000450 - 0x000510)
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x0450   (0x0004)  
	EControllerHand                                    Hand;                                                       // 0x0454   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0455   (0x0003)  MISSED
	FName                                              MotionSource;                                               // 0x0458   (0x0008)  
	bool                                               bDisableLowLatencyUpdate;                                   // 0x0460:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0461   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x0464   (0x0001)  
	bool                                               bDisplayDeviceModel;                                        // 0x0465   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0466   (0x0002)  MISSED
	FName                                              DisplayModelSource;                                         // 0x0468   (0x0008)  
	UStaticMesh*                                       CustomDisplayMesh;                                          // 0x0470   (0x0008)  
	TArray<UMaterialInterface*>                        DisplayMeshMaterialOverrides;                               // 0x0478   (0x0010)  
	unsigned char                                      UnknownData03_5[0x68];                                      // 0x0488   (0x0068)  MISSED
	UPrimitiveComponent*                               DisplayComponent;                                           // 0x04F0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x04F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	void SetTrackingSource(EControllerHand NewSource);                                                                       // [0x24e7b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	void SetTrackingMotionSource(FName NewSource);                                                                           // [0x24e7a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	void SetShowDeviceModel(bool bShowControllerModel);                                                                      // [0x24e7680] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	void SetDisplayModelSource(FName NewDisplayModelSource);                                                                 // [0x24e73b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh);                                                                  // [0x24e7320] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                        // [0x24e71d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	void OnMotionControllerUpdated();                                                                                        // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	bool IsTracked();                                                                                                        // [0x24ab6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	EControllerHand GetTrackingSource();                                                                                     // [0x24e6950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	float GetParameterValue(FName InName, bool& bValueFound);                                                                // [0x24e61b0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                     // [0x24e5df0] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HeadMountedDisplay.VRNotificationsComponent
/// Size: 0x0090 (0x0000B0 - 0x000140)
class UVRNotificationsComponent : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;      // 0x00B0   (0x0010)  
	FMulticastInlineDelegate                           HMDTrackingInitializedDelegate;                             // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           HMDRecenteredDelegate;                                      // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           HMDLostDelegate;                                            // 0x00E0   (0x0010)  
	FMulticastInlineDelegate                           HMDReconnectedDelegate;                                     // 0x00F0   (0x0010)  
	FMulticastInlineDelegate                           HMDConnectCanceledDelegate;                                 // 0x0100   (0x0010)  
	FMulticastInlineDelegate                           HMDPutOnHeadDelegate;                                       // 0x0110   (0x0010)  
	FMulticastInlineDelegate                           HMDRemovedFromHeadDelegate;                                 // 0x0120   (0x0010)  
	FMulticastInlineDelegate                           VRControllerRecenteredDelegate;                             // 0x0130   (0x0010)  
};

/// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
/// Size: 0x0030 (0x000030 - 0x000060)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnModelLoaded;                                              // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnLoadFailure;                                              // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0050   (0x0008)  MISSED
	UPrimitiveComponent*                               SpawnedComponent;                                           // 0x0058   (0x0008)  


	/// Functions
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent); // [0x24e4570] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent); // [0x24e3f70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FXRMotionControllerData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	EXRVisualType                                      DeviceVisualType;                                           // 0x001C   (0x0001)  
	EControllerHand                                    HandIndex;                                                  // 0x001D   (0x0001)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x001F   (0x0001)  MISSED
	FVector                                            GripPosition;                                               // 0x0020   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              GripRotation;                                               // 0x0030   (0x0010)  
	FVector                                            AimPosition;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FQuat                                              AimRotation;                                                // 0x0050   (0x0010)  
	TArray<FVector>                                    HandKeyPositions;                                           // 0x0060   (0x0010)  
	TArray<FQuat>                                      HandKeyRotations;                                           // 0x0070   (0x0010)  
	TArray<float>                                      HandKeyRadii;                                               // 0x0080   (0x0010)  
	bool                                               bIsGrasped;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData04_6[0xF];                                       // 0x0091   (0x000F)  MISSED
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FXRHMDData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FVector                                            Position;                                                   // 0x0020   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Rotation;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x000C (0x000000 - 0x00000C)
struct FXRDeviceId
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x0008)  
	int32_t                                            DeviceID;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (0x000000 - 0x000006)
struct FXRGestureConfig
{ 
	bool                                               bTap;                                                       // 0x0000   (0x0001)  
	bool                                               bHold;                                                      // 0x0001   (0x0001)  
	ESpatialInputGestureAxis                           AxisGesture;                                                // 0x0002   (0x0001)  
	bool                                               bNavigationAxisX;                                           // 0x0003   (0x0001)  
	bool                                               bNavigationAxisY;                                           // 0x0004   (0x0001)  
	bool                                               bNavigationAxisZ;                                           // 0x0005   (0x0001)  
};

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x03
enum EXRVisualType : uint8_t
{
	EXRVisualType__Controller                                                        = 0,
	EXRVisualType__Hand                                                              = 1,
	EXRVisualType__EXRVisualType_MAX                                                 = 2
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x27
enum EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm                                                              = 0,
	EHandKeypoint__Wrist                                                             = 1,
	EHandKeypoint__ThumbMetacarpal                                                   = 2,
	EHandKeypoint__ThumbProximal                                                     = 3,
	EHandKeypoint__ThumbDistal                                                       = 4,
	EHandKeypoint__ThumbTip                                                          = 5,
	EHandKeypoint__IndexMetacarpal                                                   = 6,
	EHandKeypoint__IndexProximal                                                     = 7,
	EHandKeypoint__IndexIntermediate                                                 = 8,
	EHandKeypoint__IndexDistal                                                       = 9,
	EHandKeypoint__IndexTip                                                          = 10,
	EHandKeypoint__MiddleMetacarpal                                                  = 11,
	EHandKeypoint__MiddleProximal                                                    = 12,
	EHandKeypoint__MiddleIntermediate                                                = 13,
	EHandKeypoint__MiddleDistal                                                      = 14,
	EHandKeypoint__MiddleTip                                                         = 15,
	EHandKeypoint__RingMetacarpal                                                    = 16,
	EHandKeypoint__RingProximal                                                      = 17,
	EHandKeypoint__RingIntermediate                                                  = 18,
	EHandKeypoint__RingDistal                                                        = 19,
	EHandKeypoint__RingTip                                                           = 20,
	EHandKeypoint__LittleMetacarpal                                                  = 21,
	EHandKeypoint__LittleProximal                                                    = 22,
	EHandKeypoint__LittleIntermediate                                                = 23,
	EHandKeypoint__LittleDistal                                                      = 24,
	EHandKeypoint__LittleTip                                                         = 25,
	EHandKeypoint__EHandKeypoint_MAX                                                 = 26
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x07
enum EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Other                                                      = 3,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX                                   = 256
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x09
enum ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX                                   = 8
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x06
enum EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags                                                          = 0,
	EXRSystemFlags__IsAR                                                             = 1,
	EXRSystemFlags__IsTablet                                                         = 2,
	EXRSystemFlags__IsHeadMounted                                                    = 4,
	EXRSystemFlags__SupportsHandTracking                                             = 8,
	EXRSystemFlags__EXRSystemFlags_MAX                                               = 9
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x06
enum EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem                                      = 0,
	EXRDeviceConnectionResult__FeatureNotSupported                                   = 1,
	EXRDeviceConnectionResult__NoValidViewport                                       = 2,
	EXRDeviceConnectionResult__MiscFailure                                           = 3,
	EXRDeviceConnectionResult__Success                                               = 4,
	EXRDeviceConnectionResult__EXRDeviceConnectionResult_MAX                         = 5
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x04
enum EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2,
	EHMDWornState__EHMDWornState_MAX                                                 = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x05
enum EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2,
	EHMDTrackingOrigin__Unbounded                                                    = 3,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX                                       = 4
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x04
enum EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX                             = 3
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x04
enum ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2,
	ETrackingStatus__ETrackingStatus_MAX                                             = 3
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x05
enum ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None                                                   = 0,
	ESpatialInputGestureAxis__Manipulation                                           = 1,
	ESpatialInputGestureAxis__Navigation                                             = 2,
	ESpatialInputGestureAxis__NavigationRails                                        = 3,
	ESpatialInputGestureAxis__ESpatialInputGestureAxis_MAX                           = 4
};

