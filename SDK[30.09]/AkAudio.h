/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AkAudio.

/// Class /Script/AkAudio.AkPortalComponent
/// Size: 0x00C0 (0x000200 - 0x0002C0)
class UAkPortalComponent : public USceneComponent
{ 
public:
	bool                                               bDynamic;                                                   // 0x01F8   (0x0001)  
	AkAcousticPortalState                              InitialState;                                               // 0x01F9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01FA   (0x0002)  MISSED
	float                                              ObstructionRefreshInterval;                                 // 0x01FC   (0x0004)  
	float                                              ObstructionUpdateThresholdDistance2DSqrd;                   // 0x0200   (0x0004)  
	float                                              ObstructionDistantRefreshInterval;                          // 0x0204   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     ObstructionCollisionChannel;                                // 0x0208   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB7];                                      // 0x0209   (0x00B7)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkPortalComponent.PortalPlacementValid
	bool PortalPlacementValid();                                                                                             // [0x95a1b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.OpenPortal
	void OpenPortal();                                                                                                       // [0x95a190] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkPortalComponent.GetPrimitiveParent
	UPrimitiveComponent* GetPrimitiveParent();                                                                               // [0x95a050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.GetCurrentState
	AkAcousticPortalState GetCurrentState();                                                                                 // [0x959f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.ClosePortal
	void ClosePortal();                                                                                                      // [0x959e20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAcousticPortal
/// Size: 0x0010 (0x000260 - 0x000270)
class AAkAcousticPortal : public AVolume
{ 
public:
	UAkPortalComponent*                                Portal;                                                     // 0x0260   (0x0008)  
	AkAcousticPortalState                              InitialState;                                               // 0x0268   (0x0001)  
	bool                                               bRequiresStateMigration;                                    // 0x0269   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x026A   (0x0006)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAcousticPortal.OpenPortal
	void OpenPortal();                                                                                                       // [0x95a170] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAcousticPortal.GetCurrentState
	AkAcousticPortalState GetCurrentState();                                                                                 // [0x959f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAcousticPortal.ClosePortal
	void ClosePortal();                                                                                                      // [0x959e00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAudioType
/// Size: 0x0018 (0x000028 - 0x000040)
class UAkAudioType : public UObject
{ 
public:
	uint32_t                                           ShortID;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<UObject*>                                   UserData;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/AkAudio.AkAcousticTexture
/// Size: 0x0000 (0x000040 - 0x000040)
class UAkAcousticTexture : public UAkAudioType
{ 
public:
};

/// Class /Script/AkAudio.AkAcousticTextureSetComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class UAkAcousticTextureSetComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0200   (0x0010)  MISSED
};

/// Class /Script/AkAudio.AkAmbientSound
/// Size: 0x0040 (0x000228 - 0x000268)
class AAkAmbientSound : public AActor
{ 
public:
	UAkAudioEvent*                                     AkAudioEvent;                                               // 0x0228   (0x0008)  
	UAkComponent*                                      AkComponent;                                                // 0x0230   (0x0008)  
	bool                                               StopWhenOwnerIsDestroyed;                                   // 0x0238   (0x0001)  
	bool                                               AutoPost;                                                   // 0x0239   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2E];                                      // 0x023A   (0x002E)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAmbientSound.StopAmbientSound
	void StopAmbientSound();                                                                                                 // [0x95b340] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAmbientSound.StartAmbientSound
	void StartAmbientSound();                                                                                                // [0x95b320] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAndroidInitializationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAkAndroidInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0028   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0090   (0x0028)  
	FAkAndroidAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00B8   (0x0038)  


	/// Functions
	// Function /Script/AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x95a0e0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPlatformInfo
/// Size: 0x0048 (0x000028 - 0x000070)
class UAkPlatformInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0028   (0x0048)  MISSED
};

/// Class /Script/AkAudio.AkAndroidPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkAssetData
/// Size: 0x0040 (0x000028 - 0x000068)
class UAkAssetData : public UObject
{ 
public:
	uint32_t                                           CachedHash;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x002C   (0x003C)  MISSED
};

/// Class /Script/AkAudio.AkAssetDataWithMedia
/// Size: 0x0010 (0x000068 - 0x000078)
class UAkAssetDataWithMedia : public UAkAssetData
{ 
public:
	TArray<UAkMediaAsset*>                             MediaList;                                                  // 0x0068   (0x0010)  
};

/// Class /Script/AkAudio.AkAssetPlatformData
/// Size: 0x0008 (0x000028 - 0x000030)
class UAkAssetPlatformData : public UObject
{ 
public:
	UAkAssetData*                                      CurrentAssetData;                                           // 0x0028   (0x0008)  
};

/// Class /Script/AkAudio.AkAssetBase
/// Size: 0x0010 (0x000040 - 0x000050)
class UAkAssetBase : public UAkAudioType
{ 
public:
	UAkAssetPlatformData*                              PlatformAssetData;                                          // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkAudioBank
/// Size: 0x00D8 (0x000050 - 0x000128)
class UAkAudioBank : public UAkAssetBase
{ 
public:
	bool                                               AutoLoad;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	TMap<FString, TWeakObjectPtr>                      LocalizedPlatformAssetDataMap;                              // 0x0058   (0x0050)  
	TSet<TWeakObjectPtr>                               LinkedAkEvents;                                             // 0x00A8   (0x0050)  
	UAkAssetPlatformData*                              CurrentLocalizedPlatformAssetData;                          // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0100   (0x0028)  MISSED
};

/// Class /Script/AkAudio.AkAssetDataSwitchContainerData
/// Size: 0x0050 (0x000028 - 0x000078)
class UAkAssetDataSwitchContainerData : public UObject
{ 
public:
	TWeakObjectPtr<UAkGroupValue*>                     GroupValue;                                                 // 0x0028   (0x0028)  
	UAkGroupValue*                                     DefaultGroupValue;                                          // 0x0050   (0x0008)  
	TArray<UAkMediaAsset*>                             MediaList;                                                  // 0x0058   (0x0010)  
	TArray<UAkAssetDataSwitchContainerData*>           Children;                                                   // 0x0068   (0x0010)  
};

/// Class /Script/AkAudio.AkAssetDataSwitchContainer
/// Size: 0x0018 (0x000078 - 0x000090)
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{ 
public:
	TArray<UAkAssetDataSwitchContainerData*>           SwitchContainers;                                           // 0x0078   (0x0010)  
	UAkGroupValue*                                     DefaultGroupValue;                                          // 0x0088   (0x0008)  
};

/// Class /Script/AkAudio.AkAudioEventData
/// Size: 0x01C8 (0x000090 - 0x000258)
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{ 
public:
	float                                              MaxAttenuationRadius;                                       // 0x0090   (0x0004)  
	bool                                               IsInfinite;                                                 // 0x0094   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              MinimumDuration;                                            // 0x0098   (0x0004)  
	float                                              MaximumDuration;                                            // 0x009C   (0x0004)  
	TMap<FString, UAkAssetDataSwitchContainer*>        LocalizedMedia;                                             // 0x00A0   (0x0050)  
	TSet<UAkAudioEvent*>                               PostedEvents;                                               // 0x00F0   (0x0050)  
	TSet<UAkAuxBus*>                                   UserDefinedSends;                                           // 0x0140   (0x0050)  
	TSet<UAkTrigger*>                                  PostedTriggers;                                             // 0x0190   (0x0050)  
	TSet<UAkGroupValue*>                               GroupValues;                                                // 0x01E0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0230   (0x0028)  MISSED
};

/// Class /Script/AkAudio.AkAudioEvent
/// Size: 0x0090 (0x000050 - 0x0000E0)
class UAkAudioEvent : public UAkAssetBase
{ 
public:
	TMap<FString, TWeakObjectPtr>                      LocalizedPlatformAssetDataMap;                              // 0x0050   (0x0050)  
	UAkAudioBank*                                      RequiredBank;                                               // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00A8   (0x0008)  MISSED
	UAkAssetPlatformData*                              CurrentLocalizedPlatformData;                               // 0x00B0   (0x0008)  
	float                                              MaxAttenuationRadius;                                       // 0x00B8   (0x0004)  
	bool                                               IsInfinite;                                                 // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              MinimumDuration;                                            // 0x00C0   (0x0004)  
	float                                              MaximumDuration;                                            // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x00C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAudioEvent.GetMinimumDuration
	float GetMinimumDuration();                                                                                              // [0x95a020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetMaximumDuration
	float GetMaximumDuration();                                                                                              // [0x959ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	float GetMaxAttenuationRadius();                                                                                         // [0x959fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetIsInfinite
	bool GetIsInfinite();                                                                                                    // [0x959f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkGameObject
/// Size: 0x0020 (0x000200 - 0x000220)
class UAkGameObject : public USceneComponent
{ 
public:
	UAkAudioEvent*                                     AkAudioEvent;                                               // 0x01F8   (0x0008)  
	FString                                            EventName;                                                  // 0x0200   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0210   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkGameObject.Stop
	void Stop();                                                                                                             // [0x960f00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.SetRTPCValue
	void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, FString RTPC);                           // [0x960380] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEventAsync
	void PostAssociatedAkEventAsync(UObject* WorldContextObject, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo, int32_t& PlayingID); // [0x95eb90] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEvent
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources); // [0x95e9f0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEventAsync
	void PostAkEventAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x95e230] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEvent
	int32_t PostAkEvent(UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FString in_EventName); // [0x95e000] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.GetRTPCValue
	void GetRTPCValue(UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32_t PlayingID); // [0x95d570] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkComponent
/// Size: 0x01C0 (0x000220 - 0x0003E0)
class UAkComponent : public UAkGameObject
{ 
public:
	bool                                               bUseSpatialAudio;                                           // 0x0218   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0219   (0x0007)  MISSED
	TEnumAsByte<ECollisionChannel>                     OcclusionCollisionChannel;                                  // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0221   (0x0003)  MISSED
	bool                                               EnableSpotReflectors;                                       // 0x0224:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0225   (0x0003)  MISSED
	float                                              OuterRadius;                                                // 0x0228   (0x0004)  
	float                                              InnerRadius;                                                // 0x022C   (0x0004)  
	UAkAuxBus*                                         EarlyReflectionAuxBus;                                      // 0x0230   (0x0008)  
	FString                                            EarlyReflectionAuxBusName;                                  // 0x0238   (0x0010)  
	int32_t                                            EarlyReflectionOrder;                                       // 0x0248   (0x0004)  
	float                                              EarlyReflectionBusSendGain;                                 // 0x024C   (0x0004)  
	float                                              EarlyReflectionMaxPathLength;                               // 0x0250   (0x0004)  
	float                                              roomReverbAuxBusGain;                                       // 0x0254   (0x0004)  
	int32_t                                            diffractionMaxEdges;                                        // 0x0258   (0x0004)  
	int32_t                                            diffractionMaxPaths;                                        // 0x025C   (0x0004)  
	float                                              diffractionMaxPathLength;                                   // 0x0260   (0x0004)  
	bool                                               DrawFirstOrderReflections;                                  // 0x0264:0 (0x0001)  
	bool                                               DrawSecondOrderReflections;                                 // 0x0264:1 (0x0001)  
	bool                                               DrawHigherOrderReflections;                                 // 0x0264:2 (0x0001)  
	bool                                               DrawDiffraction;                                            // 0x0264:3 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0265   (0x0003)  MISSED
	bool                                               StopWhenOwnerDestroyed;                                     // 0x0268   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0269   (0x0003)  MISSED
	float                                              AttenuationScalingFactor;                                   // 0x026C   (0x0004)  
	float                                              OcclusionRefreshInterval;                                   // 0x0270   (0x0004)  
	bool                                               bUseReverbVolumes;                                          // 0x0274   (0x0001)  
	unsigned char                                      UnknownData05_6[0x16B];                                     // 0x0275   (0x016B)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkComponent.UseReverbVolumes
	void UseReverbVolumes(bool inUseReverbVolumes);                                                                          // [0x95b550] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.UseEarlyReflections
	void UseEarlyReflections(UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x95b360] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetSwitch
	void SetSwitch(UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);                                   // [0x95b170] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);                                                            // [0x95b0e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetOutputBusVolume
	void SetOutputBusVolume(float BusVolume);                                                                                // [0x95b060] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetListeners
	void SetListeners(TArray<UAkComponent*>& Listeners);                                                                     // [0x95afb0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetGameObjectRadius
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);                                                    // [0x95ae50] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsVolume
	void SetEarlyReflectionsVolume(float SendVolume);                                                                        // [0x95add0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	void SetEarlyReflectionsAuxBus(FString AuxBusName);                                                                      // [0x95ad30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetAttenuationScalingFactor
	void SetAttenuationScalingFactor(float Value);                                                                           // [0x95ac30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostTrigger
	void PostTrigger(UAkTrigger* TriggerValue, FString Trigger);                                                             // [0x95a9c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x95a7f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	int32_t PostAssociatedAkEventAndWaitForEnd(TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x95a680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventByName
	int32_t PostAkEventByName(FString in_EventName);                                                                         // [0x95a5d0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	void PostAkEventAndWaitForEndAsync(UAkAudioEvent* AkEvent, int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x95a400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEnd
	int32_t PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, FString in_EventName, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x95a210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetAttenuationRadius
	float GetAttenuationRadius();                                                                                            // [0x959ed0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAudioInputComponent
/// Size: 0x0010 (0x0003E0 - 0x0003F0)
class UAkAudioInputComponent : public UAkComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x03E0   (0x0010)  MISSED
};

/// Class /Script/AkAudio.AkAuxBus
/// Size: 0x0008 (0x000050 - 0x000058)
class UAkAuxBus : public UAkAssetBase
{ 
public:
	UAkAudioBank*                                      RequiredBank;                                               // 0x0050   (0x0008)  
};

/// Class /Script/AkAudio.AkCheckBox
/// Size: 0x0A08 (0x000120 - 0x000B28)
class UAkCheckBox : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x398];                                     // 0x0120   (0x0398)  MISSED
	ECheckBoxState                                     CheckedState;                                               // 0x04B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x04B9   (0x0003)  MISSED
	FDelegateProperty                                  CheckedStateDelegate;                                       // 0x04BC   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x04CC   (0x0004)  MISSED
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x04D0   (0x0580)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0A50   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0A51   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x0A52   (0x0006)  MISSED
	FAkBoolPropertyToControl                           ThePropertyToControl;                                       // 0x0A58   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x0A68   (0x0040)  
	FMulticastInlineDelegate                           AkOnCheckStateChanged;                                      // 0x0AA8   (0x0010)  
	FMulticastInlineDelegate                           OnItemDropped;                                              // 0x0AB8   (0x0010)  
	FMulticastInlineDelegate                           OnPropertyDropped;                                          // 0x0AC8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x50];                                      // 0x0AD8   (0x0050)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkCheckBox.SetIsChecked
	void SetIsChecked(bool InIsChecked);                                                                                     // [0x95af20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetCheckedState
	void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x95acb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkItemId
	void SetAkItemId(FGuid& ItemId);                                                                                         // [0x95ab90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkBoolProperty
	void SetAkBoolProperty(FString ItemProperty);                                                                            // [0x95aaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.IsPressed
	bool IsPressed();                                                                                                        // [0x95a0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.IsChecked
	bool IsChecked();                                                                                                        // [0x95a080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetCheckedState
	ECheckBoxState GetCheckedState();                                                                                        // [0x959f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkProperty
	FString GetAkProperty();                                                                                                 // [0x959e80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkItemId
	FGuid GetAkItemId();                                                                                                     // [0x959e40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.DrawPortalComponent
/// Size: 0x0000 (0x000450 - 0x000450)
class UDrawPortalComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/AkAudio.DrawRoomComponent
/// Size: 0x0000 (0x000450 - 0x000450)
class UDrawRoomComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/AkAudio.AkFolder
/// Size: 0x0078 (0x000040 - 0x0000B8)
class UAkFolder : public UAkAudioType
{ 
public:
	FString                                            UnrealFolderPath;                                           // 0x0040   (0x0010)  
	FString                                            WwiseFolderPath;                                            // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0060   (0x0058)  MISSED
};

/// Class /Script/AkAudio.AkGameplayStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AkAudio.AkCallbackInfo
/// Size: 0x0008 (0x000028 - 0x000030)
class UAkCallbackInfo : public UObject
{ 
public:
	UAkComponent*                                      AkComponent;                                                // 0x0028   (0x0008)  
};

/// Class /Script/AkAudio.AkEventCallbackInfo
/// Size: 0x0008 (0x000030 - 0x000038)
class UAkEventCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0030   (0x0004)  
	int32_t                                            EventId;                                                    // 0x0034   (0x0004)  
};

/// Class /Script/AkAudio.AkMIDIEventCallbackInfo
/// Size: 0x0010 (0x000038 - 0x000048)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/AkAudio.AkMarkerCallbackInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	int32_t                                            Identifier;                                                 // 0x0038   (0x0004)  
	int32_t                                            Position;                                                   // 0x003C   (0x0004)  
	FString                                            Label;                                                      // 0x0040   (0x0010)  
};

/// Class /Script/AkAudio.AkDurationCallbackInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	float                                              Duration;                                                   // 0x0038   (0x0004)  
	float                                              EstimatedDuration;                                          // 0x003C   (0x0004)  
	int32_t                                            AudioNodeID;                                                // 0x0040   (0x0004)  
	int32_t                                            MediaID;                                                    // 0x0044   (0x0004)  
	bool                                               bStreaming;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AkAudio.AkMusicSyncCallbackInfo
/// Size: 0x0040 (0x000030 - 0x000070)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0030   (0x0004)  
	FAkSegmentInfo                                     SegmentInfo;                                                // 0x0034   (0x0024)  
	EAkCallbackType                                    MusicSyncType;                                              // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	FString                                            UserCueName;                                                // 0x0060   (0x0010)  
};

/// Class /Script/AkAudio.AkGeometryComponent
/// Size: 0x0190 (0x000210 - 0x0003A0)
class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{ 
public:
	AkMeshType                                         MeshType;                                                   // 0x0210   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0211   (0x0003)  MISSED
	int32_t                                            LOD;                                                        // 0x0214   (0x0004)  
	float                                              WeldingThreshold;                                           // 0x0218   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x021C   (0x0004)  MISSED
	TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                               // 0x0220   (0x0050)  
	FAkGeometrySurfaceOverride                         CollisionMeshSurfaceOverride;                               // 0x0270   (0x0018)  
	bool                                               bEnableDiffraction;                                         // 0x0288:0 (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges;                          // 0x0288:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x7];                                       // 0x0289   (0x0007)  MISSED
	AActor*                                            AssociatedRoom;                                             // 0x0290   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0298   (0x0010)  MISSED
	FAkGeometryData                                    GeometryData;                                               // 0x02A8   (0x0050)  
	TMap<int32_t, float>                               SurfaceAreas;                                               // 0x02F8   (0x0050)  
	unsigned char                                      UnknownData04_6[0x58];                                      // 0x0348   (0x0058)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkGeometryComponent.UpdateGeometry
	void UpdateGeometry();                                                                                                   // [0x966230] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.SendGeometry
	void SendGeometry();                                                                                                     // [0x966210] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.RemoveGeometry
	void RemoveGeometry();                                                                                                   // [0x9661f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.ConvertMesh
	void ConvertMesh();                                                                                                      // [0x965bf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGroupValue
/// Size: 0x0028 (0x000040 - 0x000068)
class UAkGroupValue : public UAkAudioType
{ 
public:
	TArray<TWeakObjectPtr>                             MediaDependencies;                                          // 0x0040   (0x0010)  
	uint32_t                                           GroupShortID;                                               // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0054   (0x0014)  MISSED
};

/// Class /Script/AkAudio.AkHololensInitializationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAkHololensInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0028   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0090   (0x0028)  
	FAkHololensAdvancedInitializationSettings          AdvancedSettings;                                           // 0x00B8   (0x0034)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x95a0e0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkHololensPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkHololensPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkInitBankAssetData
/// Size: 0x0010 (0x000078 - 0x000088)
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{ 
public:
	TArray<FAkPluginInfo>                              PluginInfos;                                                // 0x0078   (0x0010)  
};

/// Class /Script/AkAudio.AkInitBank
/// Size: 0x0020 (0x000050 - 0x000070)
class UAkInitBank : public UAkAssetBase
{ 
public:
	TArray<FString>                                    AvailableAudioCultures;                                     // 0x0050   (0x0010)  
	FString                                            DefaultLanguage;                                            // 0x0060   (0x0010)  
};

/// Class /Script/AkAudio.AkIOSInitializationSettings
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UAkIOSInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0028   (0x0068)  
	FAkAudioSession                                    AudioSession;                                               // 0x0090   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkAdvancedInitializationSettings                  AdvancedSettings;                                           // 0x00C8   (0x002C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkIOSPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkIOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkItemBoolPropertiesConv
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AkAudio.AkItemBoolProperties
/// Size: 0x0040 (0x000108 - 0x000148)
class UAkItemBoolProperties : public UWidget
{ 
public:
	FMulticastInlineDelegate                           OnSelectionChanged;                                         // 0x0108   (0x0010)  
	FMulticastInlineDelegate                           OnPropertyDragged;                                          // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0128   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkItemBoolProperties.SetSearchText
	void SetSearchText(FString newText);                                                                                     // [0x96aaa0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSelectedProperty
	FString GetSelectedProperty();                                                                                           // [0x96a680] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSearchText
	FString GetSearchText();                                                                                                 // [0x96a600] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkItemPropertiesConv
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AkAudio.AkItemProperties
/// Size: 0x0040 (0x000108 - 0x000148)
class UAkItemProperties : public UWidget
{ 
public:
	FMulticastInlineDelegate                           OnSelectionChanged;                                         // 0x0108   (0x0010)  
	FMulticastInlineDelegate                           OnPropertyDragged;                                          // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0128   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkItemProperties.SetSearchText
	void SetSearchText(FString newText);                                                                                     // [0x96aaa0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemProperties.GetSelectedProperty
	FString GetSelectedProperty();                                                                                           // [0x96a700] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemProperties.GetSearchText
	FString GetSearchText();                                                                                                 // [0x96a600] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkLateReverbComponent
/// Size: 0x0080 (0x000200 - 0x000280)
class UAkLateReverbComponent : public USceneComponent
{ 
public:
	bool                                               bEnable;                                                    // 0x01F8:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x01F9   (0x0003)  MISSED
	float                                              SendLevel;                                                  // 0x01FC   (0x0004)  
	float                                              FadeRate;                                                   // 0x0200   (0x0004)  
	float                                              Priority;                                                   // 0x0204   (0x0004)  
	bool                                               AutoAssignAuxBus;                                           // 0x0208   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0209   (0x0007)  MISSED
	UAkAuxBus*                                         AuxBus;                                                     // 0x0210   (0x0008)  
	FString                                            AuxBusName;                                                 // 0x0218   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0228   (0x0008)  MISSED
	UAkAuxBus*                                         AuxBusManual;                                               // 0x0230   (0x0008)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x0238   (0x0048)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
	void AssociateAkTextureSetComponent(UAkAcousticTextureSetComponent* textureSetComponent);                                // [0x96a2c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkLinuxInitializationSettings
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UAkLinuxInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0028   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0090   (0x0028)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00B8   (0x0030)  


	/// Functions
	// Function /Script/AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x95a0e0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLinuxPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkMacInitializationSettings
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UAkMacInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0028   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0090   (0x0028)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00B8   (0x0030)  


	/// Functions
	// Function /Script/AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x95a0e0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMacPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkMacPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkMediaAssetData
/// Size: 0x0030 (0x000028 - 0x000058)
class UAkMediaAssetData : public UObject
{ 
public:
	bool                                               IsStreamed;                                                 // 0x0028   (0x0001)  
	bool                                               UseDeviceMemory;                                            // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2E];                                      // 0x002A   (0x002E)  MISSED
};

/// Class /Script/AkAudio.AkMediaAsset
/// Size: 0x0028 (0x000028 - 0x000050)
class UAkMediaAsset : public UObject
{ 
public:
	uint32_t                                           ID;                                                         // 0x0028   (0x0004)  
	bool                                               AutoLoad;                                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	TArray<UObject*>                                   UserData;                                                   // 0x0030   (0x0010)  
	UAkMediaAssetData*                                 CurrentMediaAssetData;                                      // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkLocalizedMediaAsset
/// Size: 0x0000 (0x000050 - 0x000050)
class UAkLocalizedMediaAsset : public UAkMediaAsset
{ 
public:
};

/// Class /Script/AkAudio.AkExternalMediaAsset
/// Size: 0x0060 (0x000050 - 0x0000B0)
class UAkExternalMediaAsset : public UAkMediaAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0050   (0x0060)  MISSED
};

/// Class /Script/AkAudio.AkPS4InitializationSettings
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UAkPS4InitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0028   (0x0060)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0088   (0x0028)  
	FAkPS4AdvancedInitializationSettings               AdvancedSettings;                                           // 0x00B0   (0x0038)  


	/// Functions
	// Function /Script/AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
	void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x96a7b0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPS4PlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkPS4PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkPS5InitializationSettings
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UAkPS5InitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0028   (0x0060)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0088   (0x0028)  
	FAkPS5AdvancedInitializationSettings               AdvancedSettings;                                           // 0x00B0   (0x0034)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkDPXInitializationSettings
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkPS5PlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkPS5PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkReverbVolume
/// Size: 0x0038 (0x000260 - 0x000298)
class AAkReverbVolume : public AVolume
{ 
public:
	bool                                               bEnabled;                                                   // 0x0260:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0261   (0x0007)  MISSED
	UAkAuxBus*                                         AuxBus;                                                     // 0x0268   (0x0008)  
	FString                                            AuxBusName;                                                 // 0x0270   (0x0010)  
	float                                              SendLevel;                                                  // 0x0280   (0x0004)  
	float                                              FadeRate;                                                   // 0x0284   (0x0004)  
	float                                              Priority;                                                   // 0x0288   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x028C   (0x0004)  MISSED
	UAkLateReverbComponent*                            LateReverbComponent;                                        // 0x0290   (0x0008)  
};

/// Class /Script/AkAudio.AkRoomComponent
/// Size: 0x0030 (0x000220 - 0x000250)
class UAkRoomComponent : public UAkGameObject
{ 
public:
	bool                                               bEnable;                                                    // 0x0218:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0219   (0x0003)  MISSED
	bool                                               bDynamic;                                                   // 0x021C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x021D   (0x0003)  MISSED
	float                                              Priority;                                                   // 0x0220   (0x0004)  
	float                                              WallOcclusion;                                              // 0x0224   (0x0004)  
	float                                              AuxSendLevel;                                               // 0x0228   (0x0004)  
	bool                                               AutoPost;                                                   // 0x022C   (0x0001)  
	unsigned char                                      UnknownData02_5[0xB];                                       // 0x022D   (0x000B)  MISSED
	UAkAcousticTextureSetComponent*                    GeometryComponent;                                          // 0x0238   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0240   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkRoomComponent.GetPrimitiveParent
	UPrimitiveComponent* GetPrimitiveParent();                                                                               // [0x96a5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkRtpc
/// Size: 0x0000 (0x000040 - 0x000040)
class UAkRtpc : public UAkAudioType
{ 
public:
};

/// Class /Script/AkAudio.AkSettings
/// Size: 0x0290 (0x000028 - 0x0002B8)
class UAkSettings : public UObject
{ 
public:
	char                                               MaxSimultaneousReverbVolumes;                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FFilePath                                          WwiseProjectPath;                                           // 0x0030   (0x0010)  
	FDirectoryPath                                     WwiseSoundDataFolder;                                       // 0x0040   (0x0010)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x0050   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     DefaultOcclusionCollisionChannel;                           // 0x0051   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     DefaultFitToGeometryCollisionChannel;                       // 0x0052   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0053   (0x0005)  MISSED
	TMap<TWeakObjectPtr, FAkGeometrySurfacePropertiesToMap> AkGeometryMap;                                         // 0x0058   (0x0050)  
	float                                              GlobalDecayAbsorption;                                      // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	TWeakObjectPtr<UAkAuxBus*>                         DefaultReverbAuxBus;                                        // 0x00B0   (0x0028)  
	TMap<float, TWeakObjectPtr>                        EnvironmentDecayAuxBusMap;                                  // 0x00D8   (0x0050)  
	FString                                            HFDampingName;                                              // 0x0128   (0x0010)  
	FString                                            DecayEstimateName;                                          // 0x0138   (0x0010)  
	FString                                            TimeToFirstReflectionName;                                  // 0x0148   (0x0010)  
	TWeakObjectPtr<UAkRtpc*>                           HFDampingRTPC;                                              // 0x0158   (0x0028)  
	TWeakObjectPtr<UAkRtpc*>                           DecayEstimateRTPC;                                          // 0x0180   (0x0028)  
	TWeakObjectPtr<UAkRtpc*>                           TimeToFirstReflectionRTPC;                                  // 0x01A8   (0x0028)  
	TMap<FGuid, FAkAcousticTextureParams>              AcousticTextureParamsMap;                                   // 0x01D0   (0x0050)  
	bool                                               SplitSwitchContainerMedia;                                  // 0x0220   (0x0001)  
	bool                                               SplitMediaPerFolder;                                        // 0x0221   (0x0001)  
	bool                                               UseEventBasedPackaging;                                     // 0x0222   (0x0001)  
	bool                                               EnableAutomaticAssetSynchronization;                        // 0x0223   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0224   (0x0004)  MISSED
	FString                                            CommandletCommitMessage;                                    // 0x0228   (0x0010)  
	TMap<FString, FString>                             UnrealCultureToWwiseCulture;                                // 0x0238   (0x0050)  
	bool                                               AskedToUseNewAssetManagement;                               // 0x0288   (0x0001)  
	bool                                               bEnableMultiCoreRendering;                                  // 0x0289   (0x0001)  
	bool                                               MigratedEnableMultiCoreRendering;                           // 0x028A   (0x0001)  
	bool                                               FixupRedirectorsDuringMigration;                            // 0x028B   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x028C   (0x0004)  MISSED
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x0290   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x02A0   (0x0010)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x02B0   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkSettingsPerUser
/// Size: 0x0058 (0x000028 - 0x000080)
class UAkSettingsPerUser : public UObject
{ 
public:
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x0028   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x0038   (0x0010)  
	bool                                               EnableAutomaticAssetSynchronization;                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FString                                            WaapiIPAddress;                                             // 0x0050   (0x0010)  
	uint32_t                                           WaapiPort;                                                  // 0x0060   (0x0004)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x0064   (0x0001)  
	bool                                               AutoSyncSelection;                                          // 0x0065   (0x0001)  
	bool                                               SuppressWwiseProjectPathWarnings;                           // 0x0066   (0x0001)  
	bool                                               SoundDataGenerationSkipLanguage;                            // 0x0067   (0x0001)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Class /Script/AkAudio.AkSlider
/// Size: 0x0428 (0x000108 - 0x000530)
class UAkSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0108   (0x0004)  
	FDelegateProperty                                  ValueDelegate;                                              // 0x010C   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FSliderStyle                                       WidgetStyle;                                                // 0x0120   (0x0340)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0460   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0461   (0x0003)  MISSED
	FLinearColor                                       SliderBarColor;                                             // 0x0464   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x0474   (0x0010)  
	bool                                               IndentHandle;                                               // 0x0484   (0x0001)  
	bool                                               Locked;                                                     // 0x0485   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0486   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x0488   (0x0004)  
	bool                                               IsFocusable;                                                // 0x048C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x048D   (0x0003)  MISSED
	FAkPropertyToControl                               ThePropertyToControl;                                       // 0x0490   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x04A0   (0x0040)  
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x04E0   (0x0010)  
	FMulticastInlineDelegate                           OnItemDropped;                                              // 0x04F0   (0x0010)  
	FMulticastInlineDelegate                           OnPropertyDropped;                                          // 0x0500   (0x0010)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0510   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkSlider.SetValue
	void SetValue(float InValue);                                                                                            // [0x96ace0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetStepSize
	void SetStepSize(float InValue);                                                                                         // [0x96ac60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderHandleColor
	void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x96abd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderBarColor
	void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x96ab40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetLocked
	void SetLocked(bool InValue);                                                                                            // [0x96aa10] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetIndentHandle
	void SetIndentHandle(bool InValue);                                                                                      // [0x96a980] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemProperty
	void SetAkSliderItemProperty(FString ItemProperty);                                                                      // [0x96a8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemId
	void SetAkSliderItemId(FGuid& ItemId);                                                                                   // [0x96a840] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.GetValue
	float GetValue();                                                                                                        // [0x96a780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemProperty
	FString GetAkSliderItemProperty();                                                                                       // [0x96a580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemId
	FGuid GetAkSliderItemId();                                                                                               // [0x96a540] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkSpatialAudioVolume
/// Size: 0x0020 (0x000260 - 0x000280)
class AAkSpatialAudioVolume : public AVolume
{ 
public:
	UAkSurfaceReflectorSetComponent*                   SurfaceReflectorSet;                                        // 0x0260   (0x0008)  
	UAkLateReverbComponent*                            LateReverb;                                                 // 0x0268   (0x0008)  
	UAkRoomComponent*                                  Room;                                                       // 0x0270   (0x0008)  
	bool                                               EnableSurfaceReflectorSets;                                 // 0x0278   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0279   (0x0007)  MISSED
};

/// Class /Script/AkAudio.AkSpotReflector
/// Size: 0x0028 (0x000228 - 0x000250)
class AAkSpotReflector : public AActor
{ 
public:
	UAkAuxBus*                                         EarlyReflectionAuxBus;                                      // 0x0228   (0x0008)  
	FString                                            EarlyReflectionAuxBusName;                                  // 0x0230   (0x0010)  
	UAkAcousticTexture*                                AcousticTexture;                                            // 0x0240   (0x0008)  
	float                                              DistanceScalingFactor;                                      // 0x0248   (0x0004)  
	float                                              Level;                                                      // 0x024C   (0x0004)  
};

/// Class /Script/AkAudio.AkStateValue
/// Size: 0x0000 (0x000068 - 0x000068)
class UAkStateValue : public UAkGroupValue
{ 
public:
};

/// Class /Script/AkAudio.AkSurfaceReflectorSetComponent
/// Size: 0x0030 (0x000210 - 0x000240)
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{ 
public:
	bool                                               bEnableSurfaceReflectors;                                   // 0x0210:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0211   (0x0007)  MISSED
	TArray<FAkPoly>                                    AcousticPolys;                                              // 0x0218   (0x0010)  
	bool                                               bEnableDiffraction;                                         // 0x0228:0 (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges;                          // 0x0228:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0229   (0x0007)  MISSED
	AActor*                                            AssociatedRoom;                                             // 0x0230   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0238   (0x0008)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	void UpdateSurfaceReflectorSet();                                                                                        // [0x970a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	void SendSurfaceReflectorSet();                                                                                          // [0x96f9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	void RemoveSurfaceReflectorSet();                                                                                        // [0x96f980] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkSwitchInitializationSettings
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UAkSwitchInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0028   (0x0068)  
	FAkCommunicationSettingsWithCommSelection          CommunicationSettings;                                      // 0x0090   (0x0028)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00B8   (0x0030)  


	/// Functions
	// Function /Script/AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
	void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x95a0e0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkSwitchPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkSwitchValue
/// Size: 0x0000 (0x000068 - 0x000068)
class UAkSwitchValue : public UAkGroupValue
{ 
public:
};

/// Class /Script/AkAudio.AkTrigger
/// Size: 0x0000 (0x000040 - 0x000040)
class UAkTrigger : public UAkAudioType
{ 
public:
};

/// Class /Script/AkAudio.AkTVOSInitializationSettings
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UAkTVOSInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0028   (0x0068)  
	FAkAudioSession                                    AudioSession;                                               // 0x0090   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkAdvancedInitializationSettings                  AdvancedSettings;                                           // 0x00C8   (0x002C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkTVOSPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWaapiCalls
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AkAudio.SAkWaapiFieldNamesConv
/// Size: 0x0000 (0x000028 - 0x000028)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AkAudio.AkWaapiJsonManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AkAudio.AkWaapiUriConv
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AkAudio.AkWindowsInitializationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAkWindowsInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0028   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0090   (0x0028)  
	FAkWindowsAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00B8   (0x0038)  


	/// Functions
	// Function /Script/AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x95a0e0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWin32PlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWin32PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWin64PlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWin64PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWindowsPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWinGDKInitializationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAkWinGDKInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0028   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0090   (0x0028)  
	FAkWinGDKAdvancedInitializationSettings            AdvancedSettings;                                           // 0x00B8   (0x0034)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
	void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x95a0e0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWinAnvilInitializationSettings
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkWinGDKPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWinAnvilPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWwiseTree
/// Size: 0x0040 (0x000108 - 0x000148)
class UAkWwiseTree : public UWidget
{ 
public:
	FMulticastInlineDelegate                           OnSelectionChanged;                                         // 0x0108   (0x0010)  
	FMulticastInlineDelegate                           OnItemDragged;                                              // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0128   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkWwiseTree.SetSearchText
	void SetSearchText(FString newText);                                                                                     // [0x9703a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkWwiseTree.GetSelectedItem
	FAkWwiseObjectDetails GetSelectedItem();                                                                                 // [0x96f4e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkWwiseTree.GetSearchText
	FString GetSearchText();                                                                                                 // [0x96f460] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkWwiseTreeSelector
/// Size: 0x0060 (0x000108 - 0x000168)
class UAkWwiseTreeSelector : public UWidget
{ 
public:
	FMulticastInlineDelegate                           OnSelectionChanged;                                         // 0x0108   (0x0010)  
	FMulticastInlineDelegate                           OnItemDragged;                                              // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0128   (0x0040)  MISSED
};

/// Class /Script/AkAudio.AkXboxOneGDKInitializationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAkXboxOneGDKInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0028   (0x0060)  
	FAkXboxOneGDKApuHeapInitializationSettings         ApuHeapSettings;                                            // 0x0088   (0x0008)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0090   (0x0028)  
	FAkXboxOneGDKAdvancedInitializationSettings        AdvancedSettings;                                           // 0x00B8   (0x0034)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
	void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x95a0e0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOneAnvilInitializationSettings
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkXboxOneGDKPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkXboxOneAnvilPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkXboxOneInitializationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAkXboxOneInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0028   (0x0060)  
	FAkXboxOneApuHeapInitializationSettings            ApuHeapSettings;                                            // 0x0088   (0x0008)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0090   (0x0028)  
	FAkXboxOneAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00B8   (0x0034)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
	void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x95a0e0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOnePlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.InterpTrackAkAudioEvent
/// Size: 0x0018 (0x000090 - 0x0000A8)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{ 
public:
	TArray<FAkAudioEventTrackKey>                      Events;                                                     // 0x0090   (0x0010)  
	bool                                               bContinueEventOnMatineeEnd;                                 // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/AkAudio.InterpTrackAkAudioRTPC
/// Size: 0x0018 (0x000090 - 0x0000A8)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{ 
public:
	FString                                            Param;                                                      // 0x0090   (0x0010)  
	bool                                               bPlayOnReverse;                                             // 0x00A0:0 (0x0001)  
	bool                                               bContinueRTPCOnMatineeEnd;                                  // 0x00A0:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/AkAudio.InterpTrackInstAkAudioEvent
/// Size: 0x0008 (0x000028 - 0x000030)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{ 
public:
	float                                              LastUpdatePosition;                                         // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/AkAudio.InterpTrackInstAkAudioRTPC
/// Size: 0x0008 (0x000028 - 0x000030)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{ 
public:
	float                                              LastUpdatePosition;                                         // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventSection
/// Size: 0x00E8 (0x0000E8 - 0x0001D0)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x00E8   (0x0040)  MISSED
	UAkAudioEvent*                                     Event;                                                      // 0x0128   (0x0008)  
	bool                                               RetriggerEvent;                                             // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	int32_t                                            ScrubTailLengthMs;                                          // 0x0134   (0x0004)  
	bool                                               StopAtSectionEnd;                                           // 0x0138   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	FString                                            EventName;                                                  // 0x0140   (0x0010)  
	unsigned char                                      UnknownData03_5[0x20];                                      // 0x0150   (0x0020)  MISSED
	float                                              MaxSourceDuration;                                          // 0x0170   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	FString                                            MaxDurationSourceID;                                        // 0x0178   (0x0010)  
	unsigned char                                      UnknownData05_6[0x48];                                      // 0x0188   (0x0048)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkTrack
/// Size: 0x0018 (0x000078 - 0x000090)
class UMovieSceneAkTrack : public UMovieSceneTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0078   (0x0010)  
	bool                                               bIsAMasterTrack;                                            // 0x0088:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventTrack
/// Size: 0x0008 (0x000090 - 0x000098)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCSection
/// Size: 0x0168 (0x0000E8 - 0x000250)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{ 
public:
	UAkRtpc*                                           RTPC;                                                       // 0x00E8   (0x0008)  
	FString                                            Name;                                                       // 0x00F0   (0x0010)  
	FRichCurve                                         FloatCurve;                                                 // 0x0100   (0x0080)  
	FMovieSceneFloatChannelSerializationHelper         FloatChannelSerializationHelper;                            // 0x0180   (0x0030)  
	FMovieSceneFloatChannel                            RTPCChannel;                                                // 0x01B0   (0x00A0)  
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCTrack
/// Size: 0x0008 (0x000090 - 0x000098)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Class /Script/AkAudio.PostEventAsync
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UPostEventAsync : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           Completed;                                                  // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0040   (0x0060)  MISSED


	/// Functions
	// Function /Script/AkAudio.PostEventAsync.PostEventAsync
	UPostEventAsync* PostEventAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // [0x973d40] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAsync.PollPostEventFuture
	void PollPostEventFuture();                                                                                              // [0x973d00] Final|Native|Private 
};

/// Class /Script/AkAudio.PostEventAtLocationAsync
/// Size: 0x0050 (0x000030 - 0x000080)
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           Completed;                                                  // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0040   (0x0040)  MISSED


	/// Functions
	// Function /Script/AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	UPostEventAtLocationAsync* PostEventAtLocationAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation); // [0x973fd0] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	void PollPostEventFuture();                                                                                              // [0x973d20] Final|Native|Private 
};

/// Struct /Script/AkAudio.AKWaapiJsonObject
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAKWaapiJsonObject
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/AkAudio.AkWaapiSubscriptionId
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAkWaapiSubscriptionId
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettings
/// Size: 0x002C (0x000000 - 0x00002C)
struct FAkAdvancedInitializationSettings
{ 
	uint32_t                                           IO_MemorySize;                                              // 0x0000   (0x0004)  
	uint32_t                                           IO_Granularity;                                             // 0x0004   (0x0004)  
	float                                              TargetAutoStreamBufferLength;                               // 0x0008   (0x0004)  
	bool                                               UseStreamCache;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	uint32_t                                           MaximumPinnedBytesInCache;                                  // 0x0010   (0x0004)  
	bool                                               EnableGameSyncPreparation;                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	uint32_t                                           ContinuousPlaybackLookAhead;                                // 0x0018   (0x0004)  
	uint32_t                                           MonitorQueuePoolSize;                                       // 0x001C   (0x0004)  
	uint32_t                                           MaximumHardwareTimeoutMs;                                   // 0x0020   (0x0004)  
	bool                                               DebugOutOfRangeCheckEnabled;                                // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              DebugOutOfRangeLimit;                                       // 0x0028   (0x0004)  
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
/// Size: 0x0004 (0x00002C - 0x000030)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings
{ 
	bool                                               EnableMultiCoreRendering;                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/AkAudio.AkAndroidAdvancedInitializationSettings
/// Size: 0x0008 (0x000030 - 0x000038)
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           AudioAPI;                                                   // 0x0030   (0x0004)  
	bool                                               RoundFrameSizeToHardwareSize;                               // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/AkAudio.AkAudioSession
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAkAudioSession
{ 
	EAkAudioSessionCategory                            AudioSessionCategory;                                       // 0x0000   (0x0004)  
	uint32_t                                           AudioSessionCategoryOptions;                                // 0x0004   (0x0004)  
	EAkAudioSessionMode                                AudioSessionMode;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/AkAudio.AkDeviceInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAkDeviceInfo
{ 
	uint32_t                                           ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/AkAudio.AkExternalSourceInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAkExternalSourceInfo
{ 
	FString                                            ExternalSrcName;                                            // 0x0000   (0x0010)  
	AkCodecId                                          CodecID;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            Filename;                                                   // 0x0018   (0x0010)  
	UAkExternalMediaAsset*                             ExternalSourceAsset;                                        // 0x0028   (0x0008)  
	bool                                               IsStreamed;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkSegmentInfo
/// Size: 0x0024 (0x000000 - 0x000024)
struct FAkSegmentInfo
{ 
	int32_t                                            CurrentPosition;                                            // 0x0000   (0x0004)  
	int32_t                                            PreEntryDuration;                                           // 0x0004   (0x0004)  
	int32_t                                            ActiveDuration;                                             // 0x0008   (0x0004)  
	int32_t                                            PostExitDuration;                                           // 0x000C   (0x0004)  
	int32_t                                            RemainingLookAheadTime;                                     // 0x0010   (0x0004)  
	float                                              BeatDuration;                                               // 0x0014   (0x0004)  
	float                                              BarDuration;                                                // 0x0018   (0x0004)  
	float                                              GridDuration;                                               // 0x001C   (0x0004)  
	float                                              GridOffset;                                                 // 0x0020   (0x0004)  
};

/// Struct /Script/AkAudio.AkMidiEventBase
/// Size: 0x0002 (0x000000 - 0x000002)
struct FAkMidiEventBase
{ 
	EAkMidiEventType                                   Type;                                                       // 0x0000   (0x0001)  
	char                                               Chan;                                                       // 0x0001   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiProgramChange
/// Size: 0x0001 (0x000002 - 0x000003)
struct FAkMidiProgramChange : FAkMidiEventBase
{ 
	char                                               ProgramNum;                                                 // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiChannelAftertouch
/// Size: 0x0001 (0x000002 - 0x000003)
struct FAkMidiChannelAftertouch : FAkMidiEventBase
{ 
	char                                               Value;                                                      // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiNoteAftertouch
/// Size: 0x0002 (0x000002 - 0x000004)
struct FAkMidiNoteAftertouch : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               Value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiPitchBend
/// Size: 0x0006 (0x000002 - 0x000008)
struct FAkMidiPitchBend : FAkMidiEventBase
{ 
	char                                               ValueLsb;                                                   // 0x0002   (0x0001)  
	char                                               ValueMsb;                                                   // 0x0003   (0x0001)  
	int32_t                                            FullValue;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkMidiCc
/// Size: 0x0002 (0x000002 - 0x000004)
struct FAkMidiCc : FAkMidiEventBase
{ 
	EAkMidiCcValues                                    Cc;                                                         // 0x0002   (0x0001)  
	char                                               Value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiNoteOnOff
/// Size: 0x0002 (0x000002 - 0x000004)
struct FAkMidiNoteOnOff : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               Velocity;                                                   // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiGeneric
/// Size: 0x0002 (0x000002 - 0x000004)
struct FAkMidiGeneric : FAkMidiEventBase
{ 
	char                                               Param1;                                                     // 0x0002   (0x0001)  
	char                                               Param2;                                                     // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkOutputSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAkOutputSettings
{ 
	FString                                            AudioDeviceSharesetName;                                    // 0x0000   (0x0010)  
	int32_t                                            IdDevice;                                                   // 0x0010   (0x0004)  
	PanningRule                                        PanRule;                                                    // 0x0014   (0x0001)  
	AkChannelConfiguration                             ChannelConfig;                                              // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/AkAudio.AkChannelMask
/// Size: 0x0004 (0x000000 - 0x000004)
struct FAkChannelMask
{ 
	int32_t                                            ChannelMask;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/AkAudio.AkGeometrySurfaceOverride
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAkGeometrySurfaceOverride
{ 
	UAkAcousticTexture*                                AcousticTexture;                                            // 0x0000   (0x0008)  
	bool                                               bEnableOcclusionOverride;                                   // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              OcclusionValue;                                             // 0x000C   (0x0004)  
	float                                              SurfaceArea;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkGeometryData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAkGeometryData
{ 
	TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)  
	TArray<FAkAcousticSurface>                         Surfaces;                                                   // 0x0010   (0x0010)  
	TArray<FAkTriangle>                                Triangles;                                                  // 0x0020   (0x0010)  
	TArray<UPhysicalMaterial*>                         ToOverrideAcousticTexture;                                  // 0x0030   (0x0010)  
	TArray<UPhysicalMaterial*>                         ToOverrideOcclusion;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/AkAudio.AkTriangle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAkTriangle
{ 
	uint16_t                                           Point0;                                                     // 0x0000   (0x0002)  
	uint16_t                                           Point1;                                                     // 0x0002   (0x0002)  
	uint16_t                                           Point2;                                                     // 0x0004   (0x0002)  
	uint16_t                                           Surface;                                                    // 0x0006   (0x0002)  
};

/// Struct /Script/AkAudio.AkAcousticSurface
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAkAcousticSurface
{ 
	uint32_t                                           Texture;                                                    // 0x0000   (0x0004)  
	float                                              Occlusion;                                                  // 0x0004   (0x0004)  
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/AkAudio.AkHololensAdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
};

/// Struct /Script/AkAudio.AkPluginInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAkPluginInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	uint32_t                                           PluginID;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            dll;                                                        // 0x0018   (0x0010)  
};

/// Struct /Script/AkAudio.AkCommonInitializationSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FAkCommonInitializationSettings
{ 
	uint32_t                                           MaximumNumberOfMemoryPools;                                 // 0x0000   (0x0004)  
	uint32_t                                           MaximumNumberOfPositioningPaths;                            // 0x0004   (0x0004)  
	uint32_t                                           CommandQueueSize;                                           // 0x0008   (0x0004)  
	uint32_t                                           SamplesPerFrame;                                            // 0x000C   (0x0004)  
	FAkMainOutputSettings                              MainOutputSettings;                                         // 0x0010   (0x0028)  
	float                                              StreamingLookAheadRatio;                                    // 0x0038   (0x0004)  
	uint16_t                                           NumberOfRefillsInVoice;                                     // 0x003C   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003E   (0x0002)  MISSED
	FAkSpatialAudioSettings                            SpatialAudioSettings;                                       // 0x0040   (0x0020)  
};

/// Struct /Script/AkAudio.AkSpatialAudioSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAkSpatialAudioSettings
{ 
	uint32_t                                           MaxSoundPropagationDepth;                                   // 0x0000   (0x0004)  
	float                                              MovementThreshold;                                          // 0x0004   (0x0004)  
	uint32_t                                           NumberOfPrimaryRays;                                        // 0x0008   (0x0004)  
	uint32_t                                           ReflectionOrder;                                            // 0x000C   (0x0004)  
	float                                              MaximumPathLength;                                          // 0x0010   (0x0004)  
	float                                              CPULimitPercentage;                                         // 0x0014   (0x0004)  
	bool                                               EnableDiffractionOnReflections;                             // 0x0018   (0x0001)  
	bool                                               EnableGeometricDiffractionAndTransmission;                  // 0x0019   (0x0001)  
	bool                                               CalcEmitterVirtualPosition;                                 // 0x001A   (0x0001)  
	bool                                               UseObstruction;                                             // 0x001B   (0x0001)  
	bool                                               UseOcclusion;                                               // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/AkAudio.AkMainOutputSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAkMainOutputSettings
{ 
	FString                                            AudioDeviceShareset;                                        // 0x0000   (0x0010)  
	uint32_t                                           DeviceID;                                                   // 0x0010   (0x0004)  
	EAkPanningRule                                     PanningRule;                                                // 0x0014   (0x0004)  
	EAkChannelConfigType                               ChannelConfigType;                                          // 0x0018   (0x0004)  
	uint32_t                                           ChannelMask;                                                // 0x001C   (0x0004)  
	uint32_t                                           NumberOfChannels;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkCommonInitializationSettingsWithSampleRate
/// Size: 0x0008 (0x000060 - 0x000068)
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings
{ 
	uint32_t                                           SampleRate;                                                 // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkCommunicationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAkCommunicationSettings
{ 
	uint32_t                                           PoolSize;                                                   // 0x0000   (0x0004)  
	uint16_t                                           DiscoveryBroadcastPort;                                     // 0x0004   (0x0002)  
	uint16_t                                           CommandPort;                                                // 0x0006   (0x0002)  
	uint16_t                                           NotificationPort;                                           // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FString                                            NetworkName;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithCommSelection
/// Size: 0x0008 (0x000020 - 0x000028)
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings
{ 
	EAkCommSystem                                      CommunicationSystem;                                        // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithSystemInitialization
/// Size: 0x0008 (0x000020 - 0x000028)
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings
{ 
	bool                                               InitializeSystemComms;                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkBoolPropertyToControl
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAkBoolPropertyToControl
{ 
	FString                                            ItemProperty;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkPropertyToControl
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAkPropertyToControl
{ 
	FString                                            ItemProperty;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkPS4AdvancedInitializationSettings
/// Size: 0x0008 (0x000030 - 0x000038)
struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           ACPBatchBufferSize;                                         // 0x0030   (0x0004)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/AkAudio.AkPS5AdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
struct FAkPS5AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0030   (0x0001)  
	bool                                               bVorbisHwAcceleration;                                      // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
};

/// Struct /Script/AkAudio.AkReverbDescriptor
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAkReverbDescriptor
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/AkAudio.AkAcousticTextureParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAkAcousticTextureParams
{ 
	FVector4                                           AbsorptionValues;                                           // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/AkAudio.AkGeometrySurfacePropertiesToMap
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAkGeometrySurfacePropertiesToMap
{ 
	TWeakObjectPtr<UAkAcousticTexture*>                AcousticTexture;                                            // 0x0000   (0x0028)  
	float                                              OcclusionValue;                                             // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkWwiseItemToControl
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAkWwiseItemToControl
{ 
	FAkWwiseObjectDetails                              ItemPicked;                                                 // 0x0000   (0x0030)  
	FString                                            ItemPath;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/AkAudio.AkWwiseObjectDetails
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAkWwiseObjectDetails
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemPath;                                                   // 0x0010   (0x0010)  
	FString                                            ItemId;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/AkAudio.AkSurfaceProperties
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAkSurfaceProperties
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/AkAudio.AkEdgeInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAkEdgeInfo
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/AkAudio.AkPoly
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAkPoly
{ 
	UAkAcousticTexture*                                Texture;                                                    // 0x0000   (0x0008)  
	float                                              Occlusion;                                                  // 0x0008   (0x0004)  
	bool                                               EnableSurface;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SurfaceArea;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkWaapiFieldNames
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAkWaapiFieldNames
{ 
	FString                                            FieldName;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWaapiUri
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAkWaapiUri
{ 
	FString                                            Uri;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWindowsAdvancedInitializationSettings
/// Size: 0x0008 (0x000030 - 0x000038)
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	uint32_t                                           MaxSystemAudioObjects;                                      // 0x0034   (0x0004)  
};

/// Struct /Script/AkAudio.AkWinGDKAdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
struct FAkWinGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
};

/// Struct /Script/AkAudio.AkXboxOneGDKApuHeapInitializationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAkXboxOneGDKApuHeapInitializationSettings
{ 
	uint32_t                                           CachedSize;                                                 // 0x0000   (0x0004)  
	uint32_t                                           NonCachedSize;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkXboxOneGDKAdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
struct FAkXboxOneGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint16_t                                           MaximumNumberOfXMAVoices;                                   // 0x0030   (0x0002)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0033   (0x0001)  MISSED
};

/// Struct /Script/AkAudio.AkXboxOneApuHeapInitializationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAkXboxOneApuHeapInitializationSettings
{ 
	uint32_t                                           CachedSize;                                                 // 0x0000   (0x0004)  
	uint32_t                                           NonCachedSize;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkXboxOneAdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint16_t                                           MaximumNumberOfXMAVoices;                                   // 0x0030   (0x0002)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0033   (0x0001)  MISSED
};

/// Struct /Script/AkAudio.AkAudioEventTrackKey
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAkAudioEventTrackKey
{ 
	float                                              Time;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UAkAudioEvent*                                     AkAudioEvent;                                               // 0x0008   (0x0008)  
	FString                                            EventName;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioEventTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate
{ 
	UMovieSceneAkAudioEventSection*                    Section;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioRTPCTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate
{ 
	UMovieSceneAkAudioRTPCSection*                     Section;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/AkAudio.MovieSceneFloatChannelSerializationHelper
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneFloatChannelSerializationHelper
{ 
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                          // 0x0000   (0x0001)  
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                         // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<int32_t>                                    Times;                                                      // 0x0008   (0x0010)  
	TArray<FMovieSceneFloatValueSerializationHelper>   Values;                                                     // 0x0018   (0x0010)  
	float                                              DefaultValue;                                               // 0x0028   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/AkAudio.MovieSceneFloatValueSerializationHelper
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMovieSceneFloatValueSerializationHelper
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                                 // 0x0004   (0x0001)  
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                                // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FMovieSceneTangentDataSerializationHelper          Tangent;                                                    // 0x0008   (0x0014)  
};

/// Struct /Script/AkAudio.MovieSceneTangentDataSerializationHelper
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneTangentDataSerializationHelper
{ 
	float                                              ArriveTangent;                                              // 0x0000   (0x0004)  
	float                                              LeaveTangent;                                               // 0x0004   (0x0004)  
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ArriveTangentWeight;                                        // 0x000C   (0x0004)  
	float                                              LeaveTangentWeight;                                         // 0x0010   (0x0004)  
};

/// Enum /Script/AkAudio.EAkCallbackType
/// Size: 0x14
enum EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent                                                      = 0,
	EAkCallbackType__Marker                                                          = 2,
	EAkCallbackType__Duration                                                        = 3,
	EAkCallbackType__Starvation                                                      = 5,
	EAkCallbackType__MusicPlayStarted                                                = 7,
	EAkCallbackType__MusicSyncBeat                                                   = 8,
	EAkCallbackType__MusicSyncBar                                                    = 9,
	EAkCallbackType__MusicSyncEntry                                                  = 10,
	EAkCallbackType__MusicSyncExit                                                   = 11,
	EAkCallbackType__MusicSyncGrid                                                   = 12,
	EAkCallbackType__MusicSyncUserCue                                                = 13,
	EAkCallbackType__MusicSyncPoint                                                  = 14,
	EAkCallbackType__MIDIEvent                                                       = 16,
	EAkCallbackType__EAkCallbackType_MAX                                             = 17
};

/// Enum /Script/AkAudio.EAkResult
/// Size: 0x59
enum EAkResult : uint8_t
{
	EAkResult__NotImplemented                                                        = 0,
	EAkResult__Success                                                               = 1,
	EAkResult__Fail                                                                  = 2,
	EAkResult__PartialSuccess                                                        = 3,
	EAkResult__NotCompatible                                                         = 4,
	EAkResult__AlreadyConnected                                                      = 5,
	EAkResult__InvalidFile                                                           = 7,
	EAkResult__AudioFileHeaderTooLarge                                               = 8,
	EAkResult__MaxReached                                                            = 9,
	EAkResult__InvalidID                                                             = 14,
	EAkResult__IDNotFound                                                            = 15,
	EAkResult__InvalidInstanceID                                                     = 16,
	EAkResult__NoMoreData                                                            = 17,
	EAkResult__InvalidStateGroup                                                     = 20,
	EAkResult__ChildAlreadyHasAParent                                                = 21,
	EAkResult__InvalidLanguage                                                       = 22,
	EAkResult__CannotAddItseflAsAChild                                               = 23,
	EAkResult__InvalidParameter                                                      = 31,
	EAkResult__ElementAlreadyInList                                                  = 35,
	EAkResult__PathNotFound                                                          = 36,
	EAkResult__PathNoVertices                                                        = 37,
	EAkResult__PathNotRunning                                                        = 38,
	EAkResult__PathNotPaused                                                         = 39,
	EAkResult__PathNodeAlreadyInList                                                 = 40,
	EAkResult__PathNodeNotInList                                                     = 41,
	EAkResult__DataNeeded                                                            = 43,
	EAkResult__NoDataNeeded                                                          = 44,
	EAkResult__DataReady                                                             = 45,
	EAkResult__NoDataReady                                                           = 46,
	EAkResult__InsufficientMemory                                                    = 52,
	EAkResult__Cancelled                                                             = 53,
	EAkResult__UnknownBankID                                                         = 54,
	EAkResult__BankReadError                                                         = 56,
	EAkResult__InvalidSwitchType                                                     = 57,
	EAkResult__FormatNotReady                                                        = 63,
	EAkResult__WrongBankVersion                                                      = 64,
	EAkResult__FileNotFound                                                          = 66,
	EAkResult__DeviceNotReady                                                        = 67,
	EAkResult__BankAlreadyLoaded                                                     = 69,
	EAkResult__RenderedFX                                                            = 71,
	EAkResult__ProcessNeeded                                                         = 72,
	EAkResult__ProcessDone                                                           = 73,
	EAkResult__MemManagerNotInitialized                                              = 74,
	EAkResult__StreamMgrNotInitialized                                               = 75,
	EAkResult__SSEInstructionsNotSupported                                           = 76,
	EAkResult__Busy                                                                  = 77,
	EAkResult__UnsupportedChannelConfig                                              = 78,
	EAkResult__PluginMediaNotAvailable                                               = 79,
	EAkResult__MustBeVirtualized                                                     = 80,
	EAkResult__CommandTooLarge                                                       = 81,
	EAkResult__RejectedByFilter                                                      = 82,
	EAkResult__InvalidCustomPlatformName                                             = 83,
	EAkResult__DLLCannotLoad                                                         = 84,
	EAkResult__DLLPathNotFound                                                       = 85,
	EAkResult__NoJavaVM                                                              = 86,
	EAkResult__OpenSLError                                                           = 87,
	EAkResult__PluginNotRegistered                                                   = 88,
	EAkResult__DataAlignmentError                                                    = 89,
	EAkResult__EAkResult_MAX                                                         = 90
};

/// Enum /Script/AkAudio.EAkAndroidAudioAPI
/// Size: 0x03
enum EAkAndroidAudioAPI : uint8_t
{
	EAkAndroidAudioAPI__AAudio                                                       = 0,
	EAkAndroidAudioAPI__OpenSL_ES                                                    = 1,
	EAkAndroidAudioAPI__EAkAndroidAudioAPI_MAX                                       = 2
};

/// Enum /Script/AkAudio.EAkAudioSessionMode
/// Size: 0x08
enum EAkAudioSessionMode : uint8_t
{
	EAkAudioSessionMode__Default                                                     = 0,
	EAkAudioSessionMode__VoiceChat                                                   = 1,
	EAkAudioSessionMode__GameChat                                                    = 2,
	EAkAudioSessionMode__VideoRecording                                              = 3,
	EAkAudioSessionMode__Measurement                                                 = 4,
	EAkAudioSessionMode__MoviePlayback                                               = 5,
	EAkAudioSessionMode__VideoChat                                                   = 6,
	EAkAudioSessionMode__EAkAudioSessionMode_MAX                                     = 7
};

/// Enum /Script/AkAudio.EAkAudioSessionCategoryOptions
/// Size: 0x05
enum EAkAudioSessionCategoryOptions : uint8_t
{
	EAkAudioSessionCategoryOptions__MixWithOthers                                    = 0,
	EAkAudioSessionCategoryOptions__DuckOthers                                       = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth                                   = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker                                 = 3,
	EAkAudioSessionCategoryOptions__EAkAudioSessionCategoryOptions_MAX               = 4
};

/// Enum /Script/AkAudio.EAkAudioSessionCategory
/// Size: 0x04
enum EAkAudioSessionCategory : uint8_t
{
	EAkAudioSessionCategory__Ambient                                                 = 0,
	EAkAudioSessionCategory__SoloAmbient                                             = 1,
	EAkAudioSessionCategory__PlayAndRecord                                           = 2,
	EAkAudioSessionCategory__EAkAudioSessionCategory_MAX                             = 3
};

/// Enum /Script/AkAudio.EReflectionFilterBits
/// Size: 0x04
enum EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall                                                      = 0,
	EReflectionFilterBits__Ceiling                                                   = 1,
	EReflectionFilterBits__Floor                                                     = 2,
	EReflectionFilterBits__EReflectionFilterBits_MAX                                 = 3
};

/// Enum /Script/AkAudio.AkCodecId
/// Size: 0x11
enum AkCodecId : uint8_t
{
	AkCodecId__None                                                                  = 0,
	AkCodecId__PCM                                                                   = 1,
	AkCodecId__ADPCM                                                                 = 2,
	AkCodecId__XMA                                                                   = 3,
	AkCodecId__Vorbis                                                                = 4,
	AkCodecId__AAC                                                                   = 10,
	AkCodecId__ATRAC9                                                                = 12,
	AkCodecId__OpusNX                                                                = 17,
	AkCodecId__AkOpus                                                                = 19,
	AkCodecId__AkOpusWEM                                                             = 20,
	AkCodecId__AkCodecId_MAX                                                         = 21
};

/// Enum /Script/AkAudio.EAkMidiCcValues
/// Size: 0x98
enum EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse                                        = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse                                          = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse                                        = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse                                             = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse                                         = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse                                        = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse                                         = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse                                            = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse                                           = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse                                             = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse                                       = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse                                        = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse                                       = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse                                       = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse                                            = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse                                            = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1                                              = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2                                              = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3                                              = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4                                              = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse                                            = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse                                            = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse                                            = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse                                            = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse                                            = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse                                            = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse                                            = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse                                            = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse                                            = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse                                            = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse                                            = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse                                            = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine                                          = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine                                            = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine                                          = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine                                               = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine                                           = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine                                          = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine                                           = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine                                              = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine                                             = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine                                               = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine                                         = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine                                          = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine                                         = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine                                         = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine                                              = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine                                              = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine                                              = 52,
	EAkMidiCcValues__AkMidiCcCtrl21Fine                                              = 53,
	EAkMidiCcValues__AkMidiCcCtrl22Fine                                              = 54,
	EAkMidiCcValues__AkMidiCcCtrl23Fine                                              = 55,
	EAkMidiCcValues__AkMidiCcCtrl24Fine                                              = 56,
	EAkMidiCcValues__AkMidiCcCtrl25Fine                                              = 57,
	EAkMidiCcValues__AkMidiCcCtrl26Fine                                              = 58,
	EAkMidiCcValues__AkMidiCcCtrl27Fine                                              = 59,
	EAkMidiCcValues__AkMidiCcCtrl28Fine                                              = 60,
	EAkMidiCcValues__AkMidiCcCtrl29Fine                                              = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Fine                                              = 62,
	EAkMidiCcValues__AkMidiCcCtrl31Fine                                              = 63,
	EAkMidiCcValues__AkMidiCcHoldPedal                                               = 64,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff                                         = 65,
	EAkMidiCcValues__AkMidiCcSustenutoPedal                                          = 66,
	EAkMidiCcValues__AkMidiCcSoftPedal                                               = 67,
	EAkMidiCcValues__AkMidiCcLegatoPedal                                             = 68,
	EAkMidiCcValues__AkMidiCcHoldPedal2                                              = 69,
	EAkMidiCcValues__AkMidiCcSoundVariation                                          = 70,
	EAkMidiCcValues__AkMidiCcSoundTimbre                                             = 71,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime                                        = 72,
	EAkMidiCcValues__AkMidiCcSoundAttackTime                                         = 73,
	EAkMidiCcValues__AkMidiCcSoundBrightness                                         = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl6                                              = 75,
	EAkMidiCcValues__AkMidiCcSoundCtrl7                                              = 76,
	EAkMidiCcValues__AkMidiCcSoundCtrl8                                              = 77,
	EAkMidiCcValues__AkMidiCcSoundCtrl9                                              = 78,
	EAkMidiCcValues__AkMidiCcSoundCtrl10                                             = 79,
	EAkMidiCcValues__AkMidiCcGeneralButton1                                          = 80,
	EAkMidiCcValues__AkMidiCcGeneralButton2                                          = 81,
	EAkMidiCcValues__AkMidiCcGeneralButton3                                          = 82,
	EAkMidiCcValues__AkMidiCcGeneralButton4                                          = 83,
	EAkMidiCcValues__AkMidiCcReverbLevel                                             = 91,
	EAkMidiCcValues__AkMidiCcTremoloLevel                                            = 92,
	EAkMidiCcValues__AkMidiCcChorusLevel                                             = 93,
	EAkMidiCcValues__AkMidiCcCelesteLevel                                            = 94,
	EAkMidiCcValues__AkMidiCcPhaserLevel                                             = 95,
	EAkMidiCcValues__AkMidiCcDataButtonP1                                            = 96,
	EAkMidiCcValues__AkMidiCcDataButtonM1                                            = 97,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse                                       = 98,
	EAkMidiCcValues__AkMidiCcNonRegisterFine                                         = 99,
	EAkMidiCcValues__AkMidiCcAllSoundOff                                             = 120,
	EAkMidiCcValues__AkMidiCcAllControllersOff                                       = 121,
	EAkMidiCcValues__AkMidiCcLocalKeyboard                                           = 122,
	EAkMidiCcValues__AkMidiCcAllNotesOff                                             = 123,
	EAkMidiCcValues__AkMidiCcOmniModeOff                                             = 124,
	EAkMidiCcValues__AkMidiCcOmniModeOn                                              = 125,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn                                        = 126,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn                                        = 127,
	EAkMidiCcValues__EAkMidiCcValues_MAX                                             = 128
};

/// Enum /Script/AkAudio.EAkMidiEventType
/// Size: 0x12
enum EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid                                         = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff                                         = 128,
	EAkMidiEventType__AkMidiEventTypeNoteOn                                          = 144,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch                                  = 160,
	EAkMidiEventType__AkMidiEventTypeController                                      = 176,
	EAkMidiEventType__AkMidiEventTypeProgramChange                                   = 192,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch                               = 208,
	EAkMidiEventType__AkMidiEventTypePitchBend                                       = 224,
	EAkMidiEventType__AkMidiEventTypeSysex                                           = 240,
	EAkMidiEventType__AkMidiEventTypeEscape                                          = 247,
	EAkMidiEventType__AkMidiEventTypeMeta                                            = 255,
	EAkMidiEventType__EAkMidiEventType_MAX                                           = 256
};

/// Enum /Script/AkAudio.ERTPCValueType
/// Size: 0x06
enum ERTPCValueType : uint8_t
{
	ERTPCValueType__Default                                                          = 0,
	ERTPCValueType__Global                                                           = 1,
	ERTPCValueType__GameObject                                                       = 2,
	ERTPCValueType__PlayingID                                                        = 3,
	ERTPCValueType__Unavailable                                                      = 4,
	ERTPCValueType__ERTPCValueType_MAX                                               = 5
};

/// Enum /Script/AkAudio.EAkCurveInterpolation
/// Size: 0x12
enum EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3                                                      = 0,
	EAkCurveInterpolation__Sine                                                      = 1,
	EAkCurveInterpolation__Log1                                                      = 2,
	EAkCurveInterpolation__InvSCurve                                                 = 3,
	EAkCurveInterpolation__Linear                                                    = 4,
	EAkCurveInterpolation__SCurve                                                    = 5,
	EAkCurveInterpolation__Exp1                                                      = 6,
	EAkCurveInterpolation__SineRecip                                                 = 7,
	EAkCurveInterpolation__Exp3                                                      = 8,
	EAkCurveInterpolation__LastFadeCurve                                             = 8,
	EAkCurveInterpolation__Constant                                                  = 9,
	EAkCurveInterpolation__EAkCurveInterpolation_MAX                                 = 10
};

/// Enum /Script/AkAudio.AkActionOnEventType
/// Size: 0x06
enum AkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop                                                        = 0,
	AkActionOnEventType__Pause                                                       = 1,
	AkActionOnEventType__Resume                                                      = 2,
	AkActionOnEventType__Break                                                       = 3,
	AkActionOnEventType__ReleaseEnvelope                                             = 4,
	AkActionOnEventType__AkActionOnEventType_MAX                                     = 5
};

/// Enum /Script/AkAudio.AkMultiPositionType
/// Size: 0x04
enum AkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource                                                = 0,
	AkMultiPositionType__MultiSources                                                = 1,
	AkMultiPositionType__MultiDirections                                             = 2,
	AkMultiPositionType__AkMultiPositionType_MAX                                     = 3
};

/// Enum /Script/AkAudio.AkSpeakerConfiguration
/// Size: 0x17
enum AkSpeakerConfiguration : uint32_t
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left                                    = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right                                   = 2,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center                                  = 4,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency                                 = 8,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left                                     = 16,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right                                    = 32,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center                                   = 256,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left                                     = 512,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right                                    = 1024,
	AkSpeakerConfiguration__Ak_Speaker_Top                                           = 2048,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left                             = 4096,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center                           = 8192,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right                            = 16384,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left                              = 32768,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center                            = 65536,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right                             = 131072,
	AkSpeakerConfiguration__Ak_Speaker_MAX                                           = 131073
};

/// Enum /Script/AkAudio.AkChannelConfiguration
/// Size: 0x28
enum AkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent                                                = 0,
	AkChannelConfiguration__Ak_MainMix                                               = 1,
	AkChannelConfiguration__Ak_Passthrough                                           = 2,
	AkChannelConfiguration__Ak_LFE                                                   = 3,
	AkChannelConfiguration__AK_Audio_Objects                                         = 4,
	AkChannelConfiguration__Ak_1                                                     = 5,
	AkChannelConfiguration__Ak_2                                                     = 6,
	AkChannelConfiguration__Ak_2                                                     = 7,
	AkChannelConfiguration__Ak_3                                                     = 8,
	AkChannelConfiguration__Ak_3                                                     = 9,
	AkChannelConfiguration__Ak_4                                                     = 10,
	AkChannelConfiguration__Ak_4                                                     = 11,
	AkChannelConfiguration__Ak_5                                                     = 12,
	AkChannelConfiguration__Ak_5                                                     = 13,
	AkChannelConfiguration__Ak_7                                                     = 14,
	AkChannelConfiguration__Ak_5_1                                                   = 15,
	AkChannelConfiguration__Ak_7_1                                                   = 16,
	AkChannelConfiguration__Ak_7_1                                                   = 17,
	AkChannelConfiguration__Ak_Auro_9                                                = 18,
	AkChannelConfiguration__Ak_Auro_10                                               = 19,
	AkChannelConfiguration__Ak_Auro_11                                               = 20,
	AkChannelConfiguration__Ak_Auro_13                                               = 21,
	AkChannelConfiguration__Ak_Ambisonics_1st_order                                  = 22,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order                                  = 23,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order                                  = 24,
	AkChannelConfiguration__Ak_Ambisonics_4th_order                                  = 25,
	AkChannelConfiguration__Ak_Ambisonics_5th_order                                  = 26,
	AkChannelConfiguration__AkChannelConfiguration_MAX                               = 27
};

/// Enum /Script/AkAudio.AkAcousticPortalState
/// Size: 0x03
enum AkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed                                                    = 0,
	AkAcousticPortalState__Open                                                      = 1,
	AkAcousticPortalState__AkAcousticPortalState_MAX                                 = 2
};

/// Enum /Script/AkAudio.PanningRule
/// Size: 0x03
enum PanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers                                                = 0,
	PanningRule__PanningRule_Headphones                                              = 1,
	PanningRule__PanningRule_MAX                                                     = 2
};

/// Enum /Script/AkAudio.AkMeshType
/// Size: 0x03
enum AkMeshType : uint8_t
{
	AkMeshType__StaticMesh                                                           = 0,
	AkMeshType__CollisionMesh                                                        = 1,
	AkMeshType__AkMeshType_MAX                                                       = 2
};

/// Enum /Script/AkAudio.EAkCommSystem
/// Size: 0x03
enum EAkCommSystem : uint8_t
{
	EAkCommSystem__Socket                                                            = 0,
	EAkCommSystem__HTCS                                                              = 1,
	EAkCommSystem__EAkCommSystem_MAX                                                 = 2
};

/// Enum /Script/AkAudio.EAkChannelMask
/// Size: 0x17
enum EAkChannelMask : uint8_t
{
	EAkChannelMask__FrontLeft                                                        = 0,
	EAkChannelMask__FrontRight                                                       = 1,
	EAkChannelMask__FrontCenter                                                      = 2,
	EAkChannelMask__LowFrequency                                                     = 3,
	EAkChannelMask__BackLeft                                                         = 4,
	EAkChannelMask__BackRight                                                        = 5,
	EAkChannelMask__BackCenter                                                       = 8,
	EAkChannelMask__SideLeft                                                         = 9,
	EAkChannelMask__SideRight                                                        = 10,
	EAkChannelMask__Top                                                              = 11,
	EAkChannelMask__HeightFrontLeft                                                  = 12,
	EAkChannelMask__HeightFrontCenter                                                = 13,
	EAkChannelMask__HeightFrontRight                                                 = 14,
	EAkChannelMask__HeightBackLeft                                                   = 15,
	EAkChannelMask__HeightBackCenter                                                 = 16,
	EAkChannelMask__HeightBackRight                                                  = 17,
	EAkChannelMask__EAkChannelMask_MAX                                               = 18
};

/// Enum /Script/AkAudio.EAkChannelConfigType
/// Size: 0x04
enum EAkChannelConfigType : uint8_t
{
	EAkChannelConfigType__Anonymous                                                  = 0,
	EAkChannelConfigType__Standard                                                   = 1,
	EAkChannelConfigType__Ambisonic                                                  = 2,
	EAkChannelConfigType__EAkChannelConfigType_MAX                                   = 3
};

/// Enum /Script/AkAudio.EAkPanningRule
/// Size: 0x03
enum EAkPanningRule : uint8_t
{
	EAkPanningRule__Speakers                                                         = 0,
	EAkPanningRule__Headphones                                                       = 1,
	EAkPanningRule__EAkPanningRule_MAX                                               = 2
};

/// Enum /Script/AkAudio.EAkFitToGeometryMode
/// Size: 0x04
enum EAkFitToGeometryMode : uint8_t
{
	EAkFitToGeometryMode__OrientedBox                                                = 0,
	EAkFitToGeometryMode__AlignedBox                                                 = 1,
	EAkFitToGeometryMode__ConvexPolyhedron                                           = 2,
	EAkFitToGeometryMode__EAkFitToGeometryMode_MAX                                   = 3
};

