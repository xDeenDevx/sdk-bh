/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AugmentedReality.

/// Class /Script/AugmentedReality.ARActor
/// Size: 0x0000 (0x000228 - 0x000228)
class AARActor : public AActor
{ 
public:
};

/// Class /Script/AugmentedReality.ARBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AugmentedReality.ARTraceResultLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
/// Size: 0x0030 (0x000050 - 0x000080)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0070   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);                                           // [0x24c1b00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
/// Size: 0x0048 (0x000050 - 0x000098)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0070   (0x0028)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent); // [0x24c19d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARComponent
/// Size: 0x0080 (0x000200 - 0x000280)
class UARComponent : public USceneComponent
{ 
public:
	FGuid                                              NativeID;                                                   // 0x01F8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x0208   (0x0030)  MISSED
	bool                                               bUseDefaultReplication;                                     // 0x0238   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0239   (0x0007)  MISSED
	UMaterialInterface*                                DefaultMeshMaterial;                                        // 0x0240   (0x0008)  
	UMaterialInterface*                                DefaultWireframeMeshMaterial;                               // 0x0248   (0x0008)  
	UMRMeshComponent*                                  MRMeshComponent;                                            // 0x0250   (0x0008)  
	UARTrackedGeometry*                                MyTrackedGeometry;                                          // 0x0258   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0260   (0x0020)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARComponent.UpdateVisualization
	void UpdateVisualization();                                                                                              // [0x24cc020] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.SetNativeID
	void SetNativeID(FGuid NativeID);                                                                                        // [0x24cbbb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARComponent.ReceiveRemove
	void ReceiveRemove();                                                                                                    // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.OnRep_Payload
	void OnRep_Payload();                                                                                                    // [0x24caf70] Native|Protected     
	// Function /Script/AugmentedReality.ARComponent.GetMRMesh
	UMRMeshComponent* GetMRMesh();                                                                                           // [0x24cad10] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARPlaneComponent
/// Size: 0x0080 (0x000280 - 0x000300)
class UARPlaneComponent : public UARComponent
{ 
public:
	FARPlaneUpdatePayload                              ReplicatedPayload;                                          // 0x0280   (0x0080)  


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);                                                  // [0x24cbd90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	void SetObjectClassificationDebugColors(TMap<EARObjectClassification, FLinearColor>& InColors);                          // [0x24cbc50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARPlaneUpdatePayload NewPayload);                                                              // [0x24cb630] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveUpdate
	void ReceiveUpdate(FARPlaneUpdatePayload& Payload);                                                                      // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveAdd
	void ReceiveAdd(FARPlaneUpdatePayload& Payload);                                                                         // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	TMap<EARObjectClassification, FLinearColor> GetObjectClassificationDebugColors();                                        // [0x24cad30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARPointComponent
/// Size: 0x0000 (0x000280 - 0x000280)
class UARPointComponent : public UARComponent
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARPointComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARPointUpdatePayload NewPayload);                                                              // [0x24cb780] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveUpdate
	void ReceiveUpdate(FARPointUpdatePayload& Payload);                                                                      // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveAdd
	void ReceiveAdd(FARPointUpdatePayload& Payload);                                                                         // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARFaceComponent
/// Size: 0x0060 (0x000280 - 0x0002E0)
class UARFaceComponent : public UARComponent
{ 
public:
	EARFaceTransformMixing                             TransformSetting;                                           // 0x0278   (0x0001)  
	bool                                               bUpdateVertexNormal;                                        // 0x0279   (0x0001)  
	bool                                               bFaceOutOfScreen;                                           // 0x027A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x027B   (0x0005)  MISSED
	FARFaceUpdatePayload                               ReplicatedPayload;                                          // 0x0280   (0x0040)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x02C0   (0x0020)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);                                                    // [0x24cba60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARFaceComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARFaceUpdatePayload NewPayload);                                                               // [0x24cb1f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveUpdate
	void ReceiveUpdate(FARFaceUpdatePayload& Payload);                                                                       // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveAdd
	void ReceiveAdd(FARFaceUpdatePayload& Payload);                                                                          // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARImageComponent
/// Size: 0x0060 (0x000280 - 0x0002E0)
class UARImageComponent : public UARComponent
{ 
public:
	FARImageUpdatePayload                              ReplicatedPayload;                                          // 0x0280   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);                                                  // [0x24cbb40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARImageComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARImageUpdatePayload NewPayload);                                                              // [0x24cb3f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveUpdate
	void ReceiveUpdate(FARImageUpdatePayload& Payload);                                                                      // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveAdd
	void ReceiveAdd(FARImageUpdatePayload& Payload);                                                                         // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARQRCodeComponent
/// Size: 0x0070 (0x000280 - 0x0002F0)
class UARQRCodeComponent : public UARComponent
{ 
public:
	FARQRCodeUpdatePayload                             ReplicatedPayload;                                          // 0x0280   (0x0070)  


	/// Functions
	// Function /Script/AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);                                                // [0x24cbe70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARQRCodeUpdatePayload NewPayload);                                                             // [0x24cb940] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	void ReceiveUpdate(FARQRCodeUpdatePayload& Payload);                                                                     // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveAdd
	void ReceiveAdd(FARQRCodeUpdatePayload& Payload);                                                                        // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARPoseComponent
/// Size: 0x0040 (0x000280 - 0x0002C0)
class UARPoseComponent : public UARComponent
{ 
public:
	FARPoseUpdatePayload                               ReplicatedPayload;                                          // 0x0280   (0x0040)  


	/// Functions
	// Function /Script/AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);                                                    // [0x24cbe00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPoseComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARPoseUpdatePayload NewPayload);                                                               // [0x24cb830] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveUpdate
	void ReceiveUpdate(FARPoseUpdatePayload& Payload);                                                                       // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveAdd
	void ReceiveAdd(FARPoseUpdatePayload& Payload);                                                                          // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.AREnvironmentProbeComponent
/// Size: 0x0030 (0x000280 - 0x0002B0)
class UAREnvironmentProbeComponent : public UARComponent
{ 
public:
	FAREnvironmentProbeUpdatePayload                   ReplicatedPayload;                                          // 0x0280   (0x0030)  


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	void ServerUpdatePayload(FAREnvironmentProbeUpdatePayload NewPayload);                                                   // [0x24cb110] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	void ReceiveUpdate(FAREnvironmentProbeUpdatePayload& Payload);                                                           // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	void ReceiveAdd(FAREnvironmentProbeUpdatePayload& Payload);                                                              // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARObjectComponent
/// Size: 0x0030 (0x000280 - 0x0002B0)
class UARObjectComponent : public UARComponent
{ 
public:
	FARObjectUpdatePayload                             ReplicatedPayload;                                          // 0x0280   (0x0030)  


	/// Functions
	// Function /Script/AugmentedReality.ARObjectComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARObjectUpdatePayload NewPayload);                                                             // [0x24cb110] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveUpdate
	void ReceiveUpdate(FARObjectUpdatePayload& Payload);                                                                     // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveAdd
	void ReceiveAdd(FARObjectUpdatePayload& Payload);                                                                        // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARMeshComponent
/// Size: 0x0060 (0x000280 - 0x0002E0)
class UARMeshComponent : public UARComponent
{ 
public:
	FARMeshUpdatePayload                               ReplicatedPayload;                                          // 0x0280   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARMeshComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARMeshUpdatePayload NewPayload);                                                               // [0x24cb520] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveUpdate
	void ReceiveUpdate(FARMeshUpdatePayload& Payload);                                                                       // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveAdd
	void ReceiveAdd(FARMeshUpdatePayload& Payload);                                                                          // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARGeoAnchorComponent
/// Size: 0x0070 (0x000280 - 0x0002F0)
class UARGeoAnchorComponent : public UARComponent
{ 
public:
	FARGeoAnchorUpdatePayload                          ReplicatedPayload;                                          // 0x0280   (0x0070)  


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);                                          // [0x24cbad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARGeoAnchorUpdatePayload NewPayload);                                                          // [0x24cb2c0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	void ReceiveUpdate(FARGeoAnchorUpdatePayload& Payload);                                                                  // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	void ReceiveAdd(FARGeoAnchorUpdatePayload& Payload);                                                                     // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARDependencyHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UARDependencyHandler : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARGeoTrackingSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UARGeoTrackingSupport : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0070   (0x0030)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error);                               // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(UObject* WorldContextObject, float Longitude, float Latitude); // [0x24caae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(UObject* WorldContextObject);         // [0x24caa50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0070   (0x0030)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error);          // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(UObject* WorldContextObject, FVector& WorldPosition); // [0x24cac10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARLifeCycleComponent
/// Size: 0x0030 (0x000200 - 0x000230)
class UARLifeCycleComponent : public USceneComponent
{ 
public:
	FMulticastInlineDelegate                           OnARActorSpawnedDelegate;                                   // 0x01F8   (0x0010)  
	FMulticastInlineDelegate                           OnARActorToBeDestroyedDelegate;                             // 0x0208   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0218   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	void ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID);                                                         // [0x24ced20] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	void ServerDestroyARActor(AARActor* Actor);                                                                              // [0x24cec10] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(AARActor* Actor);                                           // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	void InstanceARActorSpawnedDelegate__DelegateSignature(UClass* ComponentClass, FGuid NativeID, AARActor* SpawnedActor);  // [0x197e4f0] MulticastDelegate|Public|Delegate|HasDefaults 
};

/// Class /Script/AugmentedReality.ARLightEstimate
/// Size: 0x0000 (0x000028 - 0x000028)
class UARLightEstimate : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARBasicLightEstimate
/// Size: 0x0018 (0x000028 - 0x000040)
class UARBasicLightEstimate : public UARLightEstimate
{ 
public:
	float                                              AmbientIntensityLumens;                                     // 0x0028   (0x0004)  
	float                                              AmbientColorTemperatureKelvin;                              // 0x002C   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	float GetAmbientIntensityLumens();                                                                                       // [0x24ce6a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	float GetAmbientColorTemperatureKelvin();                                                                                // [0x24ce670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	FLinearColor GetAmbientColor();                                                                                          // [0x24ce630] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AROriginActor
/// Size: 0x0000 (0x000228 - 0x000228)
class AAROriginActor : public AActor
{ 
public:
};

/// Class /Script/AugmentedReality.ARPin
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UARPin : public UObject
{ 
public:
	UARTrackedGeometry*                                TrackedGeometry;                                            // 0x0028   (0x0008)  
	USceneComponent*                                   PinnedComponent;                                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)  
	EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1F];                                      // 0x00A1   (0x001F)  MISSED
	FMulticastInlineDelegate                           OnARTrackingStateChanged;                                   // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           OnARTransformUpdated;                                       // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPin.GetTrackingState
	EARTrackingState GetTrackingState();                                                                                     // [0x24ceb70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetTrackedGeometry
	UARTrackedGeometry* GetTrackedGeometry();                                                                                // [0x24ceb40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetPinnedComponent
	USceneComponent* GetPinnedComponent();                                                                                   // [0x24cea80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform
	FTransform GetLocalToWorldTransform();                                                                                   // [0x24ce9f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform
	FTransform GetLocalToTrackingTransform();                                                                                // [0x24ce990] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetDebugName
	FName GetDebugName();                                                                                                    // [0x24ce7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.DebugDraw
	void DebugDraw(UWorld* World, FLinearColor& Color, float Scale, float PersistForSeconds);                                // [0x24ce4a0] Native|Public|HasOutParms|HasDefaults|Const 
};

/// Class /Script/AugmentedReality.ARSessionConfig
/// Size: 0x00E0 (0x000030 - 0x000110)
class UARSessionConfig : public UDataAsset
{ 
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                       // 0x0030   (0x0001)  
	bool                                               bGenerateCollisionForMeshData;                              // 0x0031   (0x0001)  
	bool                                               bGenerateNavMeshForMeshData;                                // 0x0032   (0x0001)  
	bool                                               bUseMeshDataForOcclusion;                                   // 0x0033   (0x0001)  
	bool                                               bRenderMeshDataInWireframe;                                 // 0x0034   (0x0001)  
	bool                                               bTrackSceneObjects;                                         // 0x0035   (0x0001)  
	bool                                               bUsePersonSegmentationForOcclusion;                         // 0x0036   (0x0001)  
	bool                                               bUseSceneDepthForOcclusion;                                 // 0x0037   (0x0001)  
	bool                                               bUseAutomaticImageScaleEstimation;                          // 0x0038   (0x0001)  
	bool                                               bUseStandardOnboardingUX;                                   // 0x0039   (0x0001)  
	EARWorldAlignment                                  WorldAlignment;                                             // 0x003A   (0x0001)  
	EARSessionType                                     SESSIONTYPE;                                                // 0x003B   (0x0001)  
	EARPlaneDetectionMode                              PlaneDetectionMode;                                         // 0x003C   (0x0001)  
	bool                                               bHorizontalPlaneDetection;                                  // 0x003D   (0x0001)  
	bool                                               bVerticalPlaneDetection;                                    // 0x003E   (0x0001)  
	bool                                               bEnableAutoFocus;                                           // 0x003F   (0x0001)  
	EARLightEstimationMode                             LightEstimationMode;                                        // 0x0040   (0x0001)  
	EARFrameSyncMode                                   FrameSyncMode;                                              // 0x0041   (0x0001)  
	bool                                               bEnableAutomaticCameraOverlay;                              // 0x0042   (0x0001)  
	bool                                               bEnableAutomaticCameraTracking;                             // 0x0043   (0x0001)  
	bool                                               bResetCameraTracking;                                       // 0x0044   (0x0001)  
	bool                                               bResetTrackedObjects;                                       // 0x0045   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0046   (0x0002)  MISSED
	TArray<UARCandidateImage*>                         CandidateImages;                                            // 0x0048   (0x0010)  
	int32_t                                            MaxNumSimultaneousImagesTracked;                            // 0x0058   (0x0004)  
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                                // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	TArray<char>                                       WorldMapData;                                               // 0x0060   (0x0010)  
	TArray<UARCandidateObject*>                        CandidateObjects;                                           // 0x0070   (0x0010)  
	FARVideoFormat                                     DesiredVideoFormat;                                         // 0x0080   (0x000C)  
	bool                                               bUseOptimalVideoFormat;                                     // 0x008C   (0x0001)  
	EARFaceTrackingDirection                           FaceTrackingDirection;                                      // 0x008D   (0x0001)  
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                         // 0x008E   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x008F   (0x0001)  MISSED
	int32_t                                            MaxNumberOfTrackedFaces;                                    // 0x0090   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<char>                                       SerializedARCandidateImageDatabase;                         // 0x0098   (0x0010)  
	EARSessionTrackingFeature                          EnabledSessionTrackingFeature;                              // 0x00A8   (0x0001)  
	EARSceneReconstruction                             SceneReconstructionMethod;                                  // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	UClass*                                            PlaneComponentClass;                                        // 0x00B0   (0x0008)  
	UClass*                                            PointComponentClass;                                        // 0x00B8   (0x0008)  
	UClass*                                            FaceComponentClass;                                         // 0x00C0   (0x0008)  
	UClass*                                            ImageComponentClass;                                        // 0x00C8   (0x0008)  
	UClass*                                            QRCodeComponentClass;                                       // 0x00D0   (0x0008)  
	UClass*                                            PoseComponentClass;                                         // 0x00D8   (0x0008)  
	UClass*                                            EnvironmentProbeComponentClass;                             // 0x00E0   (0x0008)  
	UClass*                                            ObjectComponentClass;                                       // 0x00E8   (0x0008)  
	UClass*                                            MeshComponentClass;                                         // 0x00F0   (0x0008)  
	UClass*                                            GeoAnchorComponentClass;                                    // 0x00F8   (0x0008)  
	UMaterialInterface*                                DefaultMeshMaterial;                                        // 0x0100   (0x0008)  
	UMaterialInterface*                                DefaultWireframeMeshMaterial;                               // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	bool ShouldResetTrackedObjects();                                                                                        // [0x24cf780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	bool ShouldResetCameraTracking();                                                                                        // [0x24cf750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	bool ShouldRenderCameraOverlay();                                                                                        // [0x24cf720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	bool ShouldEnableCameraTracking();                                                                                       // [0x24cf6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	bool ShouldEnableAutoFocus();                                                                                            // [0x24cf6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData
	void SetWorldMapData(TArray<char> WorldMapData);                                                                         // [0x24cf5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);                              // [0x24cf550] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);                                   // [0x24cf4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	void SetResetTrackedObjects(bool bNewValue);                                                                             // [0x24cf440] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking
	void SetResetCameraTracking(bool bNewValue);                                                                             // [0x24cf3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);                                                              // [0x24cf240] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);                                                     // [0x24cf1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	void SetEnableAutoFocus(bool bNewValue);                                                                                 // [0x24cf0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	void SetDesiredVideoFormat(FARVideoFormat NewFormat);                                                                    // [0x24cf000] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList
	void SetCandidateObjectList(TArray<UARCandidateObject*>& InCandidateObjects);                                            // [0x24cef50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData
	TArray<char> GetWorldMapData();                                                                                          // [0x24cebd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment
	EARWorldAlignment GetWorldAlignment();                                                                                   // [0x24ceba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSessionType
	EARSessionType GetSessionType();                                                                                         // [0x24ceb10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	EARSceneReconstruction GetSceneReconstructionMethod();                                                                   // [0x24ceae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	EARPlaneDetectionMode GetPlaneDetectionMode();                                                                           // [0x24ceab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	int32_t GetMaxNumSimultaneousImagesTracked();                                                                            // [0x24cea50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode
	EARLightEstimationMode GetLightEstimationMode();                                                                         // [0x24ce960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode
	EARFrameSyncMode GetFrameSyncMode();                                                                                     // [0x24ce930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	EARFaceTrackingUpdate GetFaceTrackingUpdate();                                                                           // [0x24ce900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	EARFaceTrackingDirection GetFaceTrackingDirection();                                                                     // [0x24ce8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();                                                         // [0x24ce8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	EARSessionTrackingFeature GetEnabledSessionTrackingFeature();                                                            // [0x24ce870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	FARVideoFormat GetDesiredVideoFormat();                                                                                  // [0x24ce830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList
	TArray<UARCandidateObject*> GetCandidateObjectList();                                                                    // [0x24ce760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList
	TArray<UARCandidateImage*> GetCandidateImageList();                                                                      // [0x24ce6d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject
	void AddCandidateObject(UARCandidateObject* CandidateObject);                                                            // [0x24ce0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage
	void AddCandidateImage(UARCandidateImage* NewCandidateImage);                                                            // [0x24ce060] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameMode
/// Size: 0x0068 (0x000310 - 0x000378)
class AARSharedWorldGameMode : public AGameMode
{ 
public:
	int32_t                                            BufferSizePerChunk;                                         // 0x0310   (0x0004)  
	unsigned char                                      UnknownData00_6[0x64];                                      // 0x0314   (0x0064)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	void SetPreviewImageData(TArray<char> ImageData);                                                                        // [0x24cf2c0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	void SetARWorldSharingIsReady();                                                                                         // [0x24cef30] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	void SetARSharedWorldData(TArray<char> ARWorldData);                                                                     // [0x24cee40] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	AARSharedWorldGameState* GetARSharedWorldGameState();                                                                    // [0x24ce600] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameState
/// Size: 0x0038 (0x000298 - 0x0002D0)
class AARSharedWorldGameState : public AGameState
{ 
public:
	TArray<char>                                       PreviewImageData;                                           // 0x0298   (0x0010)  
	TArray<char>                                       ARWorldData;                                                // 0x02A8   (0x0010)  
	int32_t                                            PreviewImageBytesTotal;                                     // 0x02B8   (0x0004)  
	int32_t                                            ARWorldBytesTotal;                                          // 0x02BC   (0x0004)  
	int32_t                                            PreviewImageBytesDelivered;                                 // 0x02C0   (0x0004)  
	int32_t                                            ARWorldBytesDelivered;                                      // 0x02C4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	void K2_OnARWorldMapIsReady();                                                                                           // [0x197e4f0] Event|Public|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARSharedWorldPlayerController
/// Size: 0x0008 (0x000578 - 0x000580)
class AARSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0578   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARSkyLight
/// Size: 0x0010 (0x000238 - 0x000248)
class AARSkyLight : public ASkyLight
{ 
public:
	UAREnvironmentCaptureProbe*                        CaptureProbe;                                               // 0x0238   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0240   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe);                                             // [0x24cf130] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARTexture
/// Size: 0x0020 (0x0000E8 - 0x000108)
class UARTexture : public UTexture
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x00EC   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x00F0   (0x0010)  
	FVector2D                                          Size;                                                       // 0x0100   (0x0008)  
};

/// Class /Script/AugmentedReality.ARTextureCameraImage
/// Size: 0x0000 (0x000108 - 0x000108)
class UARTextureCameraImage : public UARTexture
{ 
public:
};

/// Class /Script/AugmentedReality.ARTextureCameraDepth
/// Size: 0x0008 (0x000108 - 0x000110)
class UARTextureCameraDepth : public UARTexture
{ 
public:
	EARDepthQuality                                    DepthQuality;                                               // 0x0108   (0x0001)  
	EARDepthAccuracy                                   DepthAccuracy;                                              // 0x0109   (0x0001)  
	bool                                               bIsTemporallySmoothed;                                      // 0x010A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x010B   (0x0005)  MISSED
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
/// Size: 0x0020 (0x000140 - 0x000160)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0141   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x0144   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x0148   (0x0010)  
	FVector2D                                          Size;                                                       // 0x0158   (0x0008)  
};

/// Class /Script/AugmentedReality.ARTraceResultDummy
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultDummy : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedGeometry
/// Size: 0x00D8 (0x000028 - 0x000100)
class UARTrackedGeometry : public UObject
{ 
public:
	FGuid                                              UniqueID;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)  
	EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x00A1   (0x000F)  MISSED
	UMRMeshComponent*                                  UnderlyingMesh;                                             // 0x00B0   (0x0008)  
	EARObjectClassification                            ObjectClassification;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x17];                                      // 0x00B9   (0x0017)  MISSED
	int32_t                                            LastUpdateFrameNumber;                                      // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData03_5[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FName                                              DebugName;                                                  // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x00E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked
	bool IsTracked();                                                                                                        // [0x24d4050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	UMRMeshComponent* GetUnderlyingMesh();                                                                                   // [0x24d3f60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState
	EARTrackingState GetTrackingState();                                                                                     // [0x24ceb70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification
	EARObjectClassification GetObjectClassification();                                                                       // [0x24d3ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetName
	FString GetName();                                                                                                       // [0x24d3ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	FTransform GetLocalToWorldTransform();                                                                                   // [0x24d3c20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	FTransform GetLocalToTrackingTransform();                                                                                // [0x24ce990] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	float GetLastUpdateTimestamp();                                                                                          // [0x24d3b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	int32_t GetLastUpdateFrameNumber();                                                                                      // [0x24d3b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName
	FName GetDebugName();                                                                                                    // [0x24d3960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARPlaneGeometry
/// Size: 0x0030 (0x000100 - 0x000130)
class UARPlaneGeometry : public UARTrackedGeometry
{ 
public:
	EARPlaneOrientation                                Orientation;                                                // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FVector                                            Center;                                                     // 0x00FC   (0x000C)  
	FVector                                            Extent;                                                     // 0x0108   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	TArray<FVector>                                    BoundaryPolygon;                                            // 0x0118   (0x0010)  
	UARPlaneGeometry*                                  SubsumedBy;                                                 // 0x0128   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	UARPlaneGeometry* GetSubsumedBy();                                                                                       // [0x24d3f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation
	EARPlaneOrientation GetOrientation();                                                                                    // [0x14bf8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent
	FVector GetExtent();                                                                                                     // [0x24d3a70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter
	FVector GetCenter();                                                                                                     // [0x24d3930] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	TArray<FVector> GetBoundaryPolygonInLocalSpace();                                                                        // [0x24d37f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPoint
/// Size: 0x0000 (0x000100 - 0x000100)
class UARTrackedPoint : public UARTrackedGeometry
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedImage
/// Size: 0x0010 (0x000100 - 0x000110)
class UARTrackedImage : public UARTrackedGeometry
{ 
public:
	UARCandidateImage*                                 DetectedImage;                                              // 0x00F8   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0100   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0108   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize
	FVector2D GetEstimateSize();                                                                                             // [0x24d39f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage
	UARCandidateImage* GetDetectedImage();                                                                                   // [0x24d39a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedQRCode
/// Size: 0x0010 (0x000110 - 0x000120)
class UARTrackedQRCode : public UARTrackedImage
{ 
public:
	FString                                            QRCode;                                                     // 0x0108   (0x0010)  
	int32_t                                            Version;                                                    // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Class /Script/AugmentedReality.ARFaceGeometry
/// Size: 0x00F0 (0x000100 - 0x0001F0)
class UARFaceGeometry : public UARTrackedGeometry
{ 
public:
	FVector                                            LookAtTarget;                                               // 0x00F8   (0x000C)  
	bool                                               bIsTracked;                                                 // 0x0104   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	TMap<EARFaceBlendShape, float>                     BlendShapes;                                                // 0x0108   (0x0050)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x0158   (0x0038)  MISSED
	FTransform                                         LeftEyeTransform;                                           // 0x0190   (0x0030)  
	FTransform                                         RightEyeTransform;                                          // 0x01C0   (0x0030)  


	/// Functions
	// Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	FTransform GetWorldSpaceEyeTransform(EAREye Eye);                                                                        // [0x24d3f90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	FTransform GetLocalSpaceEyeTransform(EAREye Eye);                                                                        // [0x24d3b80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	float GetBlendShapeValue(EARFaceBlendShape BlendShape);                                                                  // [0x24d3610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapes
	TMap<EARFaceBlendShape, float> GetBlendShapes();                                                                         // [0x24d36a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
/// Size: 0x0010 (0x000100 - 0x000110)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{ 
public:
	FVector                                            Extent;                                                     // 0x00F8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	UAREnvironmentCaptureProbeTexture*                 EnvironmentCaptureTexture;                                  // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	FVector GetExtent();                                                                                                     // [0x24d3a30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();                                                       // [0x24d39c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARTrackedObject
/// Size: 0x0000 (0x000100 - 0x000100)
class UARTrackedObject : public UARTrackedGeometry
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedObject.GetDetectedObject
	UARCandidateObject* GetDetectedObject();                                                                                 // [0x24d39a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPose
/// Size: 0x0050 (0x000100 - 0x000150)
class UARTrackedPose : public UARTrackedGeometry
{ 
public:
	FARPose3D                                          TrackedPose;                                                // 0x00F8   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0148   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedPose.GetTrackedPoseData
	FARPose3D GetTrackedPoseData();                                                                                          // [0x24d3f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARMeshGeometry
/// Size: 0x0000 (0x000100 - 0x000100)
class UARMeshGeometry : public UARTrackedGeometry
{ 
public:
};

/// Class /Script/AugmentedReality.ARGeoAnchor
/// Size: 0x0010 (0x000100 - 0x000110)
class UARGeoAnchor : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0100   (0x0010)  MISSED
};

/// Class /Script/AugmentedReality.ARTrackableNotifyComponent
/// Size: 0x0150 (0x0000B0 - 0x000200)
class UARTrackableNotifyComponent : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnAddTrackedGeometry;                                       // 0x00B0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedGeometry;                                    // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedGeometry;                                    // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedPlane;                                          // 0x00E0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedPlane;                                       // 0x00F0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedPlane;                                       // 0x0100   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedPoint;                                          // 0x0110   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedPoint;                                       // 0x0120   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedPoint;                                       // 0x0130   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedImage;                                          // 0x0140   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedImage;                                       // 0x0150   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedImage;                                       // 0x0160   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedFace;                                           // 0x0170   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedFace;                                        // 0x0180   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedFace;                                        // 0x0190   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedEnvProbe;                                       // 0x01A0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedEnvProbe;                                    // 0x01B0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedEnvProbe;                                    // 0x01C0   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedObject;                                         // 0x01D0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedObject;                                      // 0x01E0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedObject;                                      // 0x01F0   (0x0010)  
};

/// Class /Script/AugmentedReality.ARTypesDummyClass
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTypesDummyClass : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARCandidateImage
/// Size: 0x0028 (0x000030 - 0x000058)
class UARCandidateImage : public UDataAsset
{ 
public:
	UTexture2D*                                        CandidateTexture;                                           // 0x0030   (0x0008)  
	FString                                            FriendlyName;                                               // 0x0038   (0x0010)  
	float                                              Width;                                                      // 0x0048   (0x0004)  
	float                                              Height;                                                     // 0x004C   (0x0004)  
	EARCandidateImageOrientation                       Orientation;                                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth
	float GetPhysicalWidth();                                                                                                // [0x24d3ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight
	float GetPhysicalHeight();                                                                                               // [0x24d3ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetOrientation
	EARCandidateImageOrientation GetOrientation();                                                                           // [0x24d3eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName
	FString GetFriendlyName();                                                                                               // [0x24d3aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture
	UTexture2D* GetCandidateTexture();                                                                                       // [0x24d3910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARCandidateObject
/// Size: 0x0040 (0x000030 - 0x000070)
class UARCandidateObject : public UDataAsset
{ 
public:
	TArray<char>                                       CandidateObjectData;                                        // 0x0030   (0x0010)  
	FString                                            FriendlyName;                                               // 0x0040   (0x0010)  
	FBox                                               BoundingBox;                                                // 0x0050   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName
	void SetFriendlyName(FString NewName);                                                                                   // [0x24d41d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData
	void SetCandidateObjectData(TArray<char>& InCandidateObject);                                                            // [0x24d4120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox
	void SetBoundingBox(FBox& InBoundingBox);                                                                                // [0x24d4080] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName
	FString GetFriendlyName();                                                                                               // [0x24d3ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData
	TArray<char> GetCandidateObjectData();                                                                                   // [0x24d38e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox
	FBox GetBoundingBox();                                                                                                   // [0x24d38b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AugmentedReality.TrackedGeometryGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTrackedGeometryGroup
{ 
	AARActor*                                          ARActor;                                                    // 0x0000   (0x0008)  
	UARComponent*                                      ARComponent;                                                // 0x0008   (0x0008)  
	UARTrackedGeometry*                                TrackedGeometry;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARGeoAnchorUpdatePayload
/// Size: 0x0070 (0x000000 - 0x000070)
struct FARGeoAnchorUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	float                                              Longitude;                                                  // 0x0050   (0x0004)  
	float                                              Latitude;                                                   // 0x0054   (0x0004)  
	float                                              AltitudeMeters;                                             // 0x0058   (0x0004)  
	EARAltitudeSource                                  AltitudeSource;                                             // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	FString                                            AnchorName;                                                 // 0x0060   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARSessionPayload
/// Size: 0x0018 (0x000000 - 0x000018)
struct FARSessionPayload
{ 
	int32_t                                            ConfigFlags;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UMaterialInterface*                                DefaultMeshMaterial;                                        // 0x0008   (0x0008)  
	UMaterialInterface*                                DefaultWireframeMeshMaterial;                               // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARMeshUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
struct FARMeshUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0051   (0x000F)  MISSED
};

/// Struct /Script/AugmentedReality.ARObjectUpdatePayload
/// Size: 0x0030 (0x000000 - 0x000030)
struct FARObjectUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
};

/// Struct /Script/AugmentedReality.AREnvironmentProbeUpdatePayload
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAREnvironmentProbeUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
};

/// Struct /Script/AugmentedReality.ARPoseUpdatePayload
/// Size: 0x0040 (0x000000 - 0x000040)
struct FARPoseUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0030   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARQRCodeUpdatePayload
/// Size: 0x0070 (0x000000 - 0x000070)
struct FARQRCodeUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	FVector                                            Extents;                                                    // 0x0050   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            QRCode;                                                     // 0x0060   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARImageUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
struct FARImageUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	UARCandidateImage*                                 DetectedImage;                                              // 0x0050   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0058   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARFaceUpdatePayload
/// Size: 0x0040 (0x000000 - 0x000040)
struct FARFaceUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	FVector                                            LeftEyePosition;                                            // 0x0018   (0x000C)  
	FVector                                            RightEyePosition;                                           // 0x0024   (0x000C)  
	FVector                                            LookAtTarget;                                               // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/AugmentedReality.ARPointUpdatePayload
/// Size: 0x0001 (0x000000 - 0x000001)
struct FARPointUpdatePayload
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AugmentedReality.ARPlaneUpdatePayload
/// Size: 0x0080 (0x000000 - 0x000080)
struct FARPlaneUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	FVector                                            Center;                                                     // 0x0050   (0x000C)  
	FVector                                            Extents;                                                    // 0x005C   (0x000C)  
	TArray<FVector>                                    BoundaryVertices;                                           // 0x0068   (0x0010)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/AugmentedReality.ARSharedWorldReplicationState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FARSharedWorldReplicationState
{ 
	int32_t                                            PreviewImageOffset;                                         // 0x0000   (0x0004)  
	int32_t                                            ARWorldOffset;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARTraceResult
/// Size: 0x0060 (0x000000 - 0x000060)
struct FARTraceResult
{ 
	float                                              DistanceFromCamera;                                         // 0x0000   (0x0004)  
	EARLineTraceChannels                               TraceChannel;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0005   (0x000B)  MISSED
	FTransform                                         LocalTransform;                                             // 0x0010   (0x0030)  
	UARTrackedGeometry*                                TrackedGeometry;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Struct /Script/AugmentedReality.ARCameraIntrinsics
/// Size: 0x0018 (0x000000 - 0x000018)
struct FARCameraIntrinsics
{ 
	FIntPoint                                          ImageResolution;                                            // 0x0000   (0x0008)  
	FVector2D                                          FocalLength;                                                // 0x0008   (0x0008)  
	FVector2D                                          PrincipalPoint;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARPose3D
/// Size: 0x0050 (0x000000 - 0x000050)
struct FARPose3D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
	EARJointTransformSpace                             JointTransformSpace;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/AugmentedReality.ARSkeletonDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
struct FARSkeletonDefinition
{ 
	int32_t                                            NumJoints;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      JointNames;                                                 // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARPose2D
/// Size: 0x0048 (0x000000 - 0x000048)
struct FARPose2D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FVector2D>                                  JointLocations;                                             // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARVideoFormat
/// Size: 0x000C (0x000000 - 0x00000C)
struct FARVideoFormat
{ 
	int32_t                                            FPS;                                                        // 0x0000   (0x0004)  
	int32_t                                            Width;                                                      // 0x0004   (0x0004)  
	int32_t                                            Height;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARSessionStatus
/// Size: 0x0018 (0x000000 - 0x000018)
struct FARSessionStatus
{ 
	FString                                            AdditionalInfo;                                             // 0x0000   (0x0010)  
	EARSessionStatus                                   Status;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Enum /Script/AugmentedReality.EARTrackingState
/// Size: 0x05
enum EARTrackingState : uint8_t
{
	EARTrackingState__Unknown                                                        = 0,
	EARTrackingState__Tracking                                                       = 1,
	EARTrackingState__NotTracking                                                    = 2,
	EARTrackingState__StoppedTracking                                                = 3,
	EARTrackingState__EARTrackingState_MAX                                           = 4
};

/// Enum /Script/AugmentedReality.EGeoAnchorComponentDebugMode
/// Size: 0x03
enum EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None                                               = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData                                        = 1,
	EGeoAnchorComponentDebugMode__EGeoAnchorComponentDebugMode_MAX                   = 2
};

/// Enum /Script/AugmentedReality.EPoseComponentDebugMode
/// Size: 0x03
enum EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None                                                    = 0,
	EPoseComponentDebugMode__ShowSkeleton                                            = 1,
	EPoseComponentDebugMode__EPoseComponentDebugMode_MAX                             = 2
};

/// Enum /Script/AugmentedReality.EQRCodeComponentDebugMode
/// Size: 0x03
enum EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None                                                  = 0,
	EQRCodeComponentDebugMode__ShowQRCode                                            = 1,
	EQRCodeComponentDebugMode__EQRCodeComponentDebugMode_MAX                         = 2
};

/// Enum /Script/AugmentedReality.EImageComponentDebugMode
/// Size: 0x03
enum EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None                                                   = 0,
	EImageComponentDebugMode__ShowDetectedImage                                      = 1,
	EImageComponentDebugMode__EImageComponentDebugMode_MAX                           = 2
};

/// Enum /Script/AugmentedReality.EARFaceTransformMixing
/// Size: 0x05
enum EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly                                            = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation                         = 1,
	EARFaceTransformMixing__ComponentWithTracked                                     = 2,
	EARFaceTransformMixing__TrackingOnly                                             = 3,
	EARFaceTransformMixing__EARFaceTransformMixing_MAX                               = 4
};

/// Enum /Script/AugmentedReality.EFaceComponentDebugMode
/// Size: 0x04
enum EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None                                                    = 0,
	EFaceComponentDebugMode__ShowEyeVectors                                          = 1,
	EFaceComponentDebugMode__ShowFaceMesh                                            = 2,
	EFaceComponentDebugMode__EFaceComponentDebugMode_MAX                             = 3
};

/// Enum /Script/AugmentedReality.EPlaneComponentDebugMode
/// Size: 0x04
enum EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None                                                   = 0,
	EPlaneComponentDebugMode__ShowNetworkRole                                        = 1,
	EPlaneComponentDebugMode__ShowClassification                                     = 2,
	EPlaneComponentDebugMode__EPlaneComponentDebugMode_MAX                           = 3
};

/// Enum /Script/AugmentedReality.EARSessionConfigFlags
/// Size: 0x07
enum EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None                                                      = 0,
	EARSessionConfigFlags__GenerateMeshData                                          = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe                                 = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData                              = 4,
	EARSessionConfigFlags__GenerateNavMeshForMeshData                                = 8,
	EARSessionConfigFlags__UseMeshDataForOcclusion                                   = 16,
	EARSessionConfigFlags__EARSessionConfigFlags_MAX                                 = 17
};

/// Enum /Script/AugmentedReality.EARServicePermissionRequestResult
/// Size: 0x03
enum EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted                                       = 0,
	EARServicePermissionRequestResult__Denied                                        = 1,
	EARServicePermissionRequestResult__EARServicePermissionRequestResult_MAX         = 2
};

/// Enum /Script/AugmentedReality.EARServiceInstallRequestResult
/// Size: 0x05
enum EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed                                        = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible                              = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation                         = 2,
	EARServiceInstallRequestResult__FatalError                                       = 3,
	EARServiceInstallRequestResult__EARServiceInstallRequestResult_MAX               = 4
};

/// Enum /Script/AugmentedReality.EARServiceAvailability
/// Size: 0x08
enum EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError                                             = 0,
	EARServiceAvailability__UnknownChecking                                          = 1,
	EARServiceAvailability__UnknownTimedOut                                          = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable                              = 3,
	EARServiceAvailability__SupportedNotInstalled                                    = 4,
	EARServiceAvailability__SupportedVersionTooOld                                   = 5,
	EARServiceAvailability__SupportedInstalled                                       = 6,
	EARServiceAvailability__EARServiceAvailability_MAX                               = 7
};

/// Enum /Script/AugmentedReality.EARGeoTrackingAccuracy
/// Size: 0x05
enum EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined                                             = 0,
	EARGeoTrackingAccuracy__Low                                                      = 1,
	EARGeoTrackingAccuracy__Medium                                                   = 2,
	EARGeoTrackingAccuracy__High                                                     = 3,
	EARGeoTrackingAccuracy__EARGeoTrackingAccuracy_MAX                               = 4
};

/// Enum /Script/AugmentedReality.EARGeoTrackingStateReason
/// Size: 0x10
enum EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None                                                  = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation                                = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions                               = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow                                   = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable                                 = 4,
	EARGeoTrackingStateReason__WaitingForLocation                                    = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded                                      = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed                              = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck                           = 8,
	EARGeoTrackingStateReason__EARGeoTrackingStateReason_MAX                         = 9
};

/// Enum /Script/AugmentedReality.EARGeoTrackingState
/// Size: 0x05
enum EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing                                                = 0,
	EARGeoTrackingState__Localized                                                   = 1,
	EARGeoTrackingState__Localizing                                                  = 2,
	EARGeoTrackingState__NotAvailable                                                = 3,
	EARGeoTrackingState__EARGeoTrackingState_MAX                                     = 4
};

/// Enum /Script/AugmentedReality.EARSceneReconstruction
/// Size: 0x04
enum EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None                                                     = 0,
	EARSceneReconstruction__MeshOnly                                                 = 1,
	EARSceneReconstruction__MeshWithClassification                                   = 2,
	EARSceneReconstruction__EARSceneReconstruction_MAX                               = 3
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature
/// Size: 0x07
enum EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None                                                  = 0,
	EARSessionTrackingFeature__PoseDetection2D                                       = 1,
	EARSessionTrackingFeature__PersonSegmentation                                    = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth                           = 3,
	EARSessionTrackingFeature__SceneDepth                                            = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth                                    = 5,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX                         = 6
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate
/// Size: 0x03
enum EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo                                              = 0,
	EARFaceTrackingUpdate__CurvesOnly                                                = 1,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX                                 = 2
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType
/// Size: 0x04
enum EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None                                             = 0,
	EAREnvironmentCaptureProbeType__Manual                                           = 1,
	EAREnvironmentCaptureProbeType__Automatic                                        = 2,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX               = 3
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode
/// Size: 0x03
enum EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage                                        = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage                                     = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX                                           = 2
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode
/// Size: 0x04
enum EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None                                                     = 0,
	EARLightEstimationMode__AmbientLightEstimate                                     = 1,
	EARLightEstimationMode__DirectionalLightEstimate                                 = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX                               = 3
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode
/// Size: 0x04
enum EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None                                                      = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection                                  = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection                                    = 2,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX                                 = 3
};

/// Enum /Script/AugmentedReality.EARSessionType
/// Size: 0x09
enum EARSessionType : uint8_t
{
	EARSessionType__None                                                             = 0,
	EARSessionType__Orientation                                                      = 1,
	EARSessionType__World                                                            = 2,
	EARSessionType__Face                                                             = 3,
	EARSessionType__Image                                                            = 4,
	EARSessionType__ObjectScanning                                                   = 5,
	EARSessionType__PoseTracking                                                     = 6,
	EARSessionType__GeoTracking                                                      = 7,
	EARSessionType__EARSessionType_MAX                                               = 8
};

/// Enum /Script/AugmentedReality.EARWorldAlignment
/// Size: 0x04
enum EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity                                                       = 0,
	EARWorldAlignment__GravityAndHeading                                             = 1,
	EARWorldAlignment__Camera                                                        = 2,
	EARWorldAlignment__EARWorldAlignment_MAX                                         = 3
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy
/// Size: 0x04
enum EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown                                                         = 0,
	EARDepthAccuracy__Approximate                                                    = 1,
	EARDepthAccuracy__Accurate                                                       = 2,
	EARDepthAccuracy__EARDepthAccuracy_MAX                                           = 3
};

/// Enum /Script/AugmentedReality.EARDepthQuality
/// Size: 0x04
enum EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown                                                          = 0,
	EARDepthQuality__Low                                                             = 1,
	EARDepthQuality__High                                                            = 2,
	EARDepthQuality__EARDepthQuality_MAX                                             = 3
};

/// Enum /Script/AugmentedReality.EARTextureType
/// Size: 0x09
enum EARTextureType : uint8_t
{
	EARTextureType__Unknown                                                          = 0,
	EARTextureType__CameraImage                                                      = 1,
	EARTextureType__CameraDepth                                                      = 2,
	EARTextureType__EnvironmentCapture                                               = 3,
	EARTextureType__PersonSegmentationImage                                          = 4,
	EARTextureType__PersonSegmentationDepth                                          = 5,
	EARTextureType__SceneDepthMap                                                    = 6,
	EARTextureType__SceneDepthConfidenceMap                                          = 7,
	EARTextureType__EARTextureType_MAX                                               = 8
};

/// Enum /Script/AugmentedReality.EAREye
/// Size: 0x03
enum EAREye : uint8_t
{
	EAREye__LeftEye                                                                  = 0,
	EAREye__RightEye                                                                 = 1,
	EAREye__EAREye_MAX                                                               = 2
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape
/// Size: 0x62
enum EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft                                                  = 0,
	EARFaceBlendShape__EyeLookDownLeft                                               = 1,
	EARFaceBlendShape__EyeLookInLeft                                                 = 2,
	EARFaceBlendShape__EyeLookOutLeft                                                = 3,
	EARFaceBlendShape__EyeLookUpLeft                                                 = 4,
	EARFaceBlendShape__EyeSquintLeft                                                 = 5,
	EARFaceBlendShape__EyeWideLeft                                                   = 6,
	EARFaceBlendShape__EyeBlinkRight                                                 = 7,
	EARFaceBlendShape__EyeLookDownRight                                              = 8,
	EARFaceBlendShape__EyeLookInRight                                                = 9,
	EARFaceBlendShape__EyeLookOutRight                                               = 10,
	EARFaceBlendShape__EyeLookUpRight                                                = 11,
	EARFaceBlendShape__EyeSquintRight                                                = 12,
	EARFaceBlendShape__EyeWideRight                                                  = 13,
	EARFaceBlendShape__JawForward                                                    = 14,
	EARFaceBlendShape__JawLeft                                                       = 15,
	EARFaceBlendShape__JawRight                                                      = 16,
	EARFaceBlendShape__JawOpen                                                       = 17,
	EARFaceBlendShape__MouthClose                                                    = 18,
	EARFaceBlendShape__MouthFunnel                                                   = 19,
	EARFaceBlendShape__MouthPucker                                                   = 20,
	EARFaceBlendShape__MouthLeft                                                     = 21,
	EARFaceBlendShape__MouthRight                                                    = 22,
	EARFaceBlendShape__MouthSmileLeft                                                = 23,
	EARFaceBlendShape__MouthSmileRight                                               = 24,
	EARFaceBlendShape__MouthFrownLeft                                                = 25,
	EARFaceBlendShape__MouthFrownRight                                               = 26,
	EARFaceBlendShape__MouthDimpleLeft                                               = 27,
	EARFaceBlendShape__MouthDimpleRight                                              = 28,
	EARFaceBlendShape__MouthStretchLeft                                              = 29,
	EARFaceBlendShape__MouthStretchRight                                             = 30,
	EARFaceBlendShape__MouthRollLower                                                = 31,
	EARFaceBlendShape__MouthRollUpper                                                = 32,
	EARFaceBlendShape__MouthShrugLower                                               = 33,
	EARFaceBlendShape__MouthShrugUpper                                               = 34,
	EARFaceBlendShape__MouthPressLeft                                                = 35,
	EARFaceBlendShape__MouthPressRight                                               = 36,
	EARFaceBlendShape__MouthLowerDownLeft                                            = 37,
	EARFaceBlendShape__MouthLowerDownRight                                           = 38,
	EARFaceBlendShape__MouthUpperUpLeft                                              = 39,
	EARFaceBlendShape__MouthUpperUpRight                                             = 40,
	EARFaceBlendShape__BrowDownLeft                                                  = 41,
	EARFaceBlendShape__BrowDownRight                                                 = 42,
	EARFaceBlendShape__BrowInnerUp                                                   = 43,
	EARFaceBlendShape__BrowOuterUpLeft                                               = 44,
	EARFaceBlendShape__BrowOuterUpRight                                              = 45,
	EARFaceBlendShape__CheekPuff                                                     = 46,
	EARFaceBlendShape__CheekSquintLeft                                               = 47,
	EARFaceBlendShape__CheekSquintRight                                              = 48,
	EARFaceBlendShape__NoseSneerLeft                                                 = 49,
	EARFaceBlendShape__NoseSneerRight                                                = 50,
	EARFaceBlendShape__TongueOut                                                     = 51,
	EARFaceBlendShape__HeadYaw                                                       = 52,
	EARFaceBlendShape__HeadPitch                                                     = 53,
	EARFaceBlendShape__HeadRoll                                                      = 54,
	EARFaceBlendShape__LeftEyeYaw                                                    = 55,
	EARFaceBlendShape__LeftEyePitch                                                  = 56,
	EARFaceBlendShape__LeftEyeRoll                                                   = 57,
	EARFaceBlendShape__RightEyeYaw                                                   = 58,
	EARFaceBlendShape__RightEyePitch                                                 = 59,
	EARFaceBlendShape__RightEyeRoll                                                  = 60,
	EARFaceBlendShape__MAX                                                           = 61
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection
/// Size: 0x03
enum EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative                                           = 0,
	EARFaceTrackingDirection__FaceMirrored                                           = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX                           = 2
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation
/// Size: 0x03
enum EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape                                          = 0,
	EARCandidateImageOrientation__Portrait                                           = 1,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX                   = 2
};

/// Enum /Script/AugmentedReality.EARAltitudeSource
/// Size: 0x05
enum EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise                                                       = 0,
	EARAltitudeSource__Coarse                                                        = 1,
	EARAltitudeSource__UserDefined                                                   = 2,
	EARAltitudeSource__Unknown                                                       = 3,
	EARAltitudeSource__EARAltitudeSource_MAX                                         = 4
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace
/// Size: 0x03
enum EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model                                                    = 0,
	EARJointTransformSpace__ParentJoint                                              = 1,
	EARJointTransformSpace__EARJointTransformSpace_MAX                               = 2
};

/// Enum /Script/AugmentedReality.EARObjectClassification
/// Size: 0x15
enum EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable                                           = 0,
	EARObjectClassification__Unknown                                                 = 1,
	EARObjectClassification__Wall                                                    = 2,
	EARObjectClassification__Ceiling                                                 = 3,
	EARObjectClassification__Floor                                                   = 4,
	EARObjectClassification__Table                                                   = 5,
	EARObjectClassification__Seat                                                    = 6,
	EARObjectClassification__Face                                                    = 7,
	EARObjectClassification__Image                                                   = 8,
	EARObjectClassification__World                                                   = 9,
	EARObjectClassification__SceneObject                                             = 10,
	EARObjectClassification__HandMesh                                                = 11,
	EARObjectClassification__Door                                                    = 12,
	EARObjectClassification__Window                                                  = 13,
	EARObjectClassification__EARObjectClassification_MAX                             = 14
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation
/// Size: 0x04
enum EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal                                                  = 0,
	EARPlaneOrientation__Vertical                                                    = 1,
	EARPlaneOrientation__Diagonal                                                    = 2,
	EARPlaneOrientation__EARPlaneOrientation_MAX                                     = 3
};

/// Enum /Script/AugmentedReality.EARWorldMappingState
/// Size: 0x05
enum EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable                                               = 0,
	EARWorldMappingState__StillMappingNotRelocalizable                               = 1,
	EARWorldMappingState__StillMappingRelocalizable                                  = 2,
	EARWorldMappingState__Mapped                                                     = 3,
	EARWorldMappingState__EARWorldMappingState_MAX                                   = 4
};

/// Enum /Script/AugmentedReality.EARSessionStatus
/// Size: 0x08
enum EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted                                                     = 0,
	EARSessionStatus__Running                                                        = 1,
	EARSessionStatus__NotSupported                                                   = 2,
	EARSessionStatus__FatalError                                                     = 3,
	EARSessionStatus__PermissionNotGranted                                           = 4,
	EARSessionStatus__UnsupportedConfiguration                                       = 5,
	EARSessionStatus__Other                                                          = 6,
	EARSessionStatus__EARSessionStatus_MAX                                           = 7
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason
/// Size: 0x08
enum EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None                                                   = 0,
	EARTrackingQualityReason__Initializing                                           = 1,
	EARTrackingQualityReason__Relocalizing                                           = 2,
	EARTrackingQualityReason__ExcessiveMotion                                        = 3,
	EARTrackingQualityReason__InsufficientFeatures                                   = 4,
	EARTrackingQualityReason__InsufficientLight                                      = 5,
	EARTrackingQualityReason__BadState                                               = 6,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX                           = 7
};

/// Enum /Script/AugmentedReality.EARTrackingQuality
/// Size: 0x04
enum EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking                                                  = 0,
	EARTrackingQuality__OrientationOnly                                              = 1,
	EARTrackingQuality__OrientationAndPosition                                       = 2,
	EARTrackingQuality__EARTrackingQuality_MAX                                       = 3
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels
/// Size: 0x06
enum EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None                                                       = 0,
	EARLineTraceChannels__FeaturePoint                                               = 1,
	EARLineTraceChannels__GroundPlane                                                = 2,
	EARLineTraceChannels__PlaneUsingExtent                                           = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon                                  = 8,
	EARLineTraceChannels__EARLineTraceChannels_MAX                                   = 9
};

/// Enum /Script/AugmentedReality.EARCaptureType
/// Size: 0x05
enum EARCaptureType : uint8_t
{
	EARCaptureType__Camera                                                           = 0,
	EARCaptureType__QRCode                                                           = 1,
	EARCaptureType__SpatialMapping                                                   = 2,
	EARCaptureType__SceneUnderstanding                                               = 3,
	EARCaptureType__EARCaptureType_MAX                                               = 4
};

