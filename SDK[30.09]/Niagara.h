/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Niagara.

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0010 (0x000078 - 0x000088)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0078   (0x0010)  
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
public:
	FNiagaraVariable                                   Parameter;                                                  // 0x0088   (0x0020)  
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
public:
	ENiagaraSystemSpawnSectionStartBehavior            SectionStartBehavior;                                       // 0x00E8   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SectionEvaluateBehavior;                                    // 0x00EC   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SectionEndBehavior;                                         // 0x00F0   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F5   (0x0003)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x0008 (0x000088 - 0x000090)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A8   (0x0008)  MISSED
	int32_t                                            ChannelsUsed;                                               // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x0010 (0x000228 - 0x000238)
class ANiagaraActor : public AActor
{ 
public:
	UNiagaraComponent*                                 NiagaraComponent;                                           // 0x0228   (0x0008)  
	bool                                               bDestroyOnSystemFinish;                                     // 0x0230:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0231   (0x0007)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                        // [0xb669f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
	void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);                                                      // [0xb66960] Final|Native|Private 
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x01B0 (0x000450 - 0x000600)
class UNiagaraComponent : public UFXSystemComponent
{ 
public:
	UNiagaraSystem*                                    Asset;                                                      // 0x0450   (0x0008)  
	ENiagaraTickBehavior                               TickBehavior;                                               // 0x0458   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0459   (0x0007)  MISSED
	FNiagaraUserRedirectionParameterStore              OverrideParameters;                                         // 0x0460   (0x00C8)  
	bool                                               bForceSolo;                                                 // 0x0528:0 (0x0001)  
	bool                                               bEnableGpuComputeDebug;                                     // 0x0528:1 (0x0001)  
	unsigned char                                      UnknownData01_3[0x2B];                                      // 0x0529   (0x002B)  MISSED
	bool                                               bAutoDestroy;                                               // 0x0554:0 (0x0001)  
	bool                                               bRenderingEnabled;                                          // 0x0554:1 (0x0001)  
	bool                                               bAutoManageAttachment;                                      // 0x0554:2 (0x0001)  
	bool                                               bAutoAttachWeldSimulatedBodies;                             // 0x0554:3 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0555   (0x0003)  MISSED
	float                                              MaxTimeBeforeForceUpdateTransform;                          // 0x0558   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x055C   (0x0004)  MISSED
	TArray<FNiagaraMaterialOverride>                   EmitterMaterials;                                           // 0x0560   (0x0010)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0570   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnSystemFinished;                                           // 0x0578   (0x0010)  
	TWeakObjectPtr<USceneComponent*>                   AutoAttachParent;                                           // 0x0588   (0x0008)  
	FName                                              AutoAttachSocketName;                                       // 0x0590   (0x0008)  
	EAttachmentRule                                    AutoAttachLocationRule;                                     // 0x0598   (0x0001)  
	EAttachmentRule                                    AutoAttachRotationRule;                                     // 0x0599   (0x0001)  
	EAttachmentRule                                    AutoAttachScaleRule;                                        // 0x059A   (0x0001)  
	unsigned char                                      UnknownData05_6[0x65];                                      // 0x059B   (0x0065)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4
	void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                           // [0xb6afc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3
	void SetVariableVec3(FName InVariableName, FVector InValue);                                                             // [0xb6aee0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2
	void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                           // [0xb6ae10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	void SetVariableTextureRenderTarget(FName InVariableName, UTextureRenderTarget* TextureRenderTarget);                    // [0xb6ad40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat
	void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                              // [0xb6ac70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableObject
	void SetVariableObject(FName InVariableName, UObject* Object);                                                           // [0xb6aba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
	void SetVariableMaterial(FName InVariableName, UMaterialInterface* Object);                                              // [0xb6aad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
	void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                                // [0xb6aa00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableInt
	void SetVariableInt(FName InVariableName, int32_t InValue);                                                              // [0xb6a930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat
	void SetVariableFloat(FName InVariableName, float InValue);                                                              // [0xb6a860] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableBool
	void SetVariableBool(FName InVariableName, bool InValue);                                                                // [0xb6a790] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableActor
	void SetVariableActor(FName InVariableName, AActor* Actor);                                                              // [0xb6a6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior
	void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                              // [0xb6a640] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta
	void SetSeekDelta(float InSeekDelta);                                                                                    // [0xb6a5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
	void SetRenderingEnabled(bool bInRenderingEnabled);                                                                      // [0xb6a530] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);                                    // [0xb6a460] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPaused
	void SetPaused(bool bInPaused);                                                                                          // [0xb6a3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
	void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                                  // [0xb6a2e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
	void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                    // [0xb6a1f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
	void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                                  // [0xb6a110] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
	void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                     // [0xb6a020] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
	void SetNiagaraVariableObject(FString InVariableName, UObject* Object);                                                  // [0xb69ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                       // [0xb69f30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
	void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                     // [0xb69e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
	void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                     // [0xb69d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
	void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                       // [0xb69c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
	void SetNiagaraVariableActor(FString InVariableName, AActor* Actor);                                                     // [0xb69ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
	void SetMaxSimTime(float InMaxTime);                                                                                     // [0xb69b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
	void SetGpuComputeDebug(bool bEnableDebug);                                                                              // [0xb69a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceSolo
	void SetForceSolo(bool bInForceSolo);                                                                                    // [0xb69a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge
	void SetDesiredAge(float InDesiredAge);                                                                                  // [0xb69980] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                            // [0xb698f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
	void SetAutoDestroy(bool bInAutoDestroy);                                                                                // [0xb69860] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAsset
	void SetAsset(UNiagaraSystem* InAsset);                                                                                  // [0xb697d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability
	void SetAllowScalability(bool bAllow);                                                                                   // [0xb69740] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                            // [0xb696c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
	void SeekToDesiredAge(float InDesiredAge);                                                                               // [0xb69640] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ResetSystem
	void ResetSystem();                                                                                                      // [0xb69620] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
	void ReinitializeSystem();                                                                                               // [0xb69600] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.IsPaused
	bool IsPaused();                                                                                                         // [0xb695d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior
	ENiagaraTickBehavior GetTickBehavior();                                                                                  // [0xb695b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta
	float GetSeekDelta();                                                                                                    // [0xb69580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	bool GetPreviewLODDistanceEnabled();                                                                                     // [0xb69560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
	int32_t GetPreviewLODDistance();                                                                                         // [0xb69540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);                       // [0xb692a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);                            // [0xb693f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);                                            // [0xb691b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
	float GetMaxSimTime();                                                                                                   // [0xb69180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceSolo
	bool GetForceSolo();                                                                                                     // [0xb69150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge
	float GetDesiredAge();                                                                                                   // [0xb69120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDataInterface
	UNiagaraDataInterface* GetDataInterface(FString Name);                                                                   // [0xb69070] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetAsset
	UNiagaraSystem* GetAsset();                                                                                              // [0xb69050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
	ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                                // [0xb69020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                                // [0xb68f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                       // [0xb68e80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0058 (0x000028 - 0x000080)
class UNiagaraComponentPool : public UObject
{ 
public:
	TMap<UNiagaraSystem*, FNCPool>                     WorldParticleSystemPools;                                   // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x0058 (0x000028 - 0x000080)
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0028   (0x0030)  
	int32_t                                            SortOrderHint;                                              // 0x0058   (0x0004)  
	ENiagaraParticleResolutionMode                     RenderResolution;                                           // 0x005C   (0x0001)  
	bool                                               bIsEnabled;                                                 // 0x005D   (0x0001)  
	bool                                               bMotionBlurEnabled;                                         // 0x005E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x21];                                      // 0x005F   (0x0021)  MISSED
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x00E0 (0x000080 - 0x000160)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
public:
	UClass*                                            ComponentType;                                              // 0x0080   (0x0008)  
	uint32_t                                           ComponentCountLimit;                                        // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0090   (0x0058)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x00E8   (0x0001)  
	bool                                               bOnlyCreateComponentsOnParticleSpawn;                       // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00EA   (0x0006)  MISSED
	USceneComponent*                                   TemplateComponent;                                          // 0x00F0   (0x0008)  
	TArray<FNiagaraComponentPropertyBinding>           PropertyBindings;                                           // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x0108   (0x0058)  MISSED
};

/// Class /Script/Niagara.NiagaraComponentSettings
/// Size: 0x00F0 (0x000028 - 0x000118)
class UNiagaraComponentSettings : public UObject
{ 
public:
	TSet<FName>                                        SuppressActivationList;                                     // 0x0028   (0x0050)  
	TSet<FName>                                        ForceAutoPooolingList;                                      // 0x0078   (0x0050)  
	TSet<FNiagaraEmitterNameSettingsRef>               SuppressEmitterList;                                        // 0x00C8   (0x0050)  
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
public:
	UTexture2DArray*                                   Texture;                                                    // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	int32_t                                            MaxElements;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<float>                                      FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector2D>                                  FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector>                                    FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector4>                                   FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FLinearColor>                               ColorData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FQuat>                                      QuatData;                                                   // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<int32_t>                                    IntData;                                                    // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<bool>                                       BoolData;                                                   // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
public:
	USoundSubmix*                                      Submix;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
public:
	USoundSubmix*                                      Submix;                                                     // 0x0038   (0x0008)  
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              ScopeInMilliseconds;                                        // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
public:
	USoundBase*                                        SoundToPlay;                                                // 0x0038   (0x0008)  
	USoundAttenuation*                                 Attenuation;                                                // 0x0040   (0x0008)  
	USoundConcurrency*                                 Concurrency;                                                // 0x0048   (0x0008)  
	TArray<FName>                                      ParameterNames;                                             // 0x0050   (0x0010)  
	bool                                               bLimitPlaysPerTick;                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            MaxPlaysPerTick;                                            // 0x0064   (0x0004)  
	bool                                               bStopWhenComponentIsDestroyed;                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0044   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0048   (0x0004)  
	float                                              NoiseFloorDb;                                               // 0x004C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
public:
	int32_t                                            PlayerControllerIndex;                                      // 0x0038   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
public:
	TArray<float>                                      ShaderLUT;                                                  // 0x0038   (0x0010)  
	float                                              LUTMinTime;                                                 // 0x0048   (0x0004)  
	float                                              LUTMaxTime;                                                 // 0x004C   (0x0004)  
	float                                              LUTInvTimeRange;                                            // 0x0050   (0x0004)  
	float                                              LUTNumSamplesMinusOne;                                      // 0x0054   (0x0004)  
	bool                                               bUseLUT;                                                    // 0x0058:0 (0x0001)  
	bool                                               bExposeCurve;                                               // 0x0058:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0059   (0x0003)  MISSED
	FName                                              ExposedName;                                                // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	UTexture2D*                                        ExposedTexture;                                             // 0x0068   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         RedCurve;                                                   // 0x0070   (0x0080)  
	FRichCurve                                         GreenCurve;                                                 // 0x00F0   (0x0080)  
	FRichCurve                                         BlueCurve;                                                  // 0x0170   (0x0080)  
	FRichCurve                                         AlphaCurve;                                                 // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
public:
	uint32_t                                           Seed;                                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x003C   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         Curve;                                                      // 0x0070   (0x0080)  
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraParticleCallbackHandler : public UInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       CallbackHandlerParameter;                                   // 0x0038   (0x0020)  
	ENDIExport_GPUAllocationMode                       GPUAllocationMode;                                          // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            GPUAllocationFixedSize;                                     // 0x005C   (0x0004)  
	float                                              GPUAllocationPerParticleSize;                               // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
public:
	TSet<int32_t>                                      OutputShaderStages;                                         // 0x0038   (0x0050)  
	TSet<int32_t>                                      IterationShaderStages;                                      // 0x0088   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0020 (0x0000D8 - 0x0000F8)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	int32_t                                            NumCellsX;                                                  // 0x00D8   (0x0004)  
	int32_t                                            NumCellsY;                                                  // 0x00DC   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x00E0   (0x0004)  
	int32_t                                            NumAttributes;                                              // 0x00E4   (0x0004)  
	bool                                               SetGridFromMaxAxis;                                         // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FVector2D                                          WorldBBoxSize;                                              // 0x00EC   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x00C8 (0x0000F8 - 0x0001C0)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
public:
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00F8   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0118   (0x0001)  
	bool                                               bOverrideFormat;                                            // 0x0119:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x56];                                      // 0x011A   (0x0056)  MISSED
	TMap<uint64_t, UTextureRenderTarget2DArray*>       ManagedRenderTargets;                                       // 0x0170   (0x0050)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	void GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                       // [0xb6e770] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	void GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                    // [0xb6e4c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	bool FillTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t AttributeIndex);                  // [0xb6db20] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	bool FillRawTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY);     // [0xb6d7b0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0070 (0x0000F8 - 0x000168)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{ 
public:
	FString                                            EmitterName;                                                // 0x00F8   (0x0010)  
	FString                                            DIName;                                                     // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0118   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0028 (0x0000D8 - 0x000100)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         NumCells;                                                   // 0x00D8   (0x000C)  
	float                                              CellSize;                                                   // 0x00E4   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x00E8   (0x0004)  
	ESetResolutionMethod                               SetResolutionMethod;                                        // 0x00EC   (0x0004)  
	FVector                                            WorldBBoxSize;                                              // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0080 (0x000100 - 0x000180)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
public:
	int32_t                                            NumAttributes;                                              // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0108   (0x0020)  
	ENiagaraGpuBufferFormat                            BufferFormat;                                               // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_6[0x57];                                      // 0x0129   (0x0057)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	void GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                       // [0xb6e8a0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	void GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                    // [0xb6e5f0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	bool FillVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t AttributeIndex);                      // [0xb6db20] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	bool FillRawVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0xb6d920] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
public:
	AActor*                                            SourceLandscape;                                            // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0008 (0x000100 - 0x000108)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
public:
	uint32_t                                           MaxNeighborsPerCell;                                        // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x0010 (0x0000D8 - 0x0000E8)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
public:
	FString                                            EmitterName;                                                // 0x00D8   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0038   (0x0030)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x00D8   (0x0008)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00E0   (0x0001)  
	bool                                               bOverrideFormat;                                            // 0x00E1:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x6];                                       // 0x00E2   (0x0006)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)  
	TMap<uint64_t, UTextureRenderTarget2D*>            ManagedRenderTargets;                                       // 0x0108   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x00D8   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00E4   (0x0001)  
	bool                                               bOverrideFormat;                                            // 0x00E5:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x00E6   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)  
	TMap<uint64_t, UTextureRenderTarget2DArray*>       ManagedRenderTargets;                                       // 0x0108   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x00D8   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00E4   (0x0001)  
	bool                                               bOverrideFormat;                                            // 0x00E5:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x00E6   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)  
	TMap<uint64_t, UTextureRenderTargetVolume*>        ManagedRenderTargets;                                       // 0x0108   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
public:
	ENDISkeletalMesh_SourceMode                        SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	AActor*                                            Source;                                                     // 0x0040   (0x0008)  
	FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0048   (0x0020)  
	USkeletalMeshComponent*                            SourceComponent;                                            // 0x0068   (0x0008)  
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<FName>                                      SamplingRegions;                                            // 0x0078   (0x0010)  
	int32_t                                            WholeMeshLOD;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<FName>                                      FilteredBones;                                              // 0x0090   (0x0010)  
	TArray<FName>                                      FilteredSockets;                                            // 0x00A0   (0x0010)  
	FName                                              ExcludeBoneName;                                            // 0x00B0   (0x0008)  
	bool                                               bExcludeBone;                                               // 0x00B8:0 (0x0001)  
	bool                                               bRequireCurrentFrameData;                                   // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x00BA   (0x0006)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
public:
	AActor*                                            Source;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x0050 (0x000038 - 0x000088)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
public:
	ENDIStaticMesh_SourceMode                          SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	UStaticMesh*                                       DefaultMesh;                                                // 0x0040   (0x0008)  
	AActor*                                            Source;                                                     // 0x0048   (0x0008)  
	UStaticMeshComponent*                              SourceComponent;                                            // 0x0050   (0x0008)  
	FNDIStaticMeshSectionFilter                        SectionFilter;                                              // 0x0058   (0x0010)  
	bool                                               bUsePhysicsBodyVelocity;                                    // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	TArray<FName>                                      FilteredSockets;                                            // 0x0070   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
public:
	UTexture*                                          Texture;                                                    // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0100 (0x000070 - 0x000170)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
	FRichCurve                                         WCurve;                                                     // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x0180 (0x000070 - 0x0001F0)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
public:
	UVectorField*                                      Field;                                                      // 0x0038   (0x0008)  
	bool                                               bTileX;                                                     // 0x0040   (0x0001)  
	bool                                               bTileY;                                                     // 0x0041   (0x0001)  
	bool                                               bTileZ;                                                     // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
public:
	UVolumeTexture*                                    Texture;                                                    // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEditorDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandler : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
public:
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x00E8 (0x000028 - 0x000110)
class UNiagaraEffectType : public UObject
{ 
public:
	ENiagaraScalabilityUpdateFrequency                 UpdateFrequency;                                            // 0x0028   (0x0004)  
	ENiagaraCullReaction                               CullReaction;                                               // 0x002C   (0x0004)  
	UNiagaraSignificanceHandler*                       SignificanceHandler;                                        // 0x0030   (0x0008)  
	TArray<FNiagaraSystemScalabilitySettings>          DetailLevelScalabilitySettings;                             // 0x0038   (0x0010)  
	FNiagaraSystemScalabilitySettingsArray             SystemScalabilitySettings;                                  // 0x0048   (0x0010)  
	FNiagaraEmitterScalabilitySettingsArray            EmitterScalabilitySettings;                                 // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x0068   (0x00A8)  MISSED
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x0278 (0x000028 - 0x0002A0)
class UNiagaraEmitter : public UObject
{ 
public:
	bool                                               bLocalSpace;                                                // 0x0028   (0x0001)  
	bool                                               bDeterminism;                                               // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x002C   (0x0004)  
	EParticleAllocationMode                            AllocationMode;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            PreAllocationCount;                                         // 0x0034   (0x0004)  
	FNiagaraEmitterScriptProperties                    UpdateScriptProps;                                          // 0x0038   (0x0028)  
	FNiagaraEmitterScriptProperties                    SpawnScriptProps;                                           // 0x0060   (0x0028)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	FBox                                               FixedBounds;                                                // 0x008C   (0x001C)  
	int32_t                                            MinDetailLevel;                                             // 0x00A8   (0x0004)  
	int32_t                                            MaxDetailLevel;                                             // 0x00AC   (0x0004)  
	FNiagaraDetailsLevelScaleOverrides                 GlobalSpawnCountScaleOverrides;                             // 0x00B0   (0x0014)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FNiagaraPlatformSet                                Platforms;                                                  // 0x00C8   (0x0030)  
	FNiagaraEmitterScalabilityOverrides                ScalabilityOverrides;                                       // 0x00F8   (0x0010)  
	bool                                               bInterpolatedSpawning;                                      // 0x0108:0 (0x0001)  
	bool                                               bFixedBounds;                                               // 0x0108:1 (0x0001)  
	bool                                               bUseMinDetailLevel;                                         // 0x0108:2 (0x0001)  
	bool                                               bUseMaxDetailLevel;                                         // 0x0108:3 (0x0001)  
	bool                                               bOverrideGlobalSpawnCountScale;                             // 0x0108:4 (0x0001)  
	bool                                               bRequiresPersistentIDs;                                     // 0x0108:5 (0x0001)  
	bool                                               bCombineEventSpawn;                                         // 0x0108:6 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              MaxDeltaTimePerTick;                                        // 0x010C   (0x0004)  
	uint32_t                                           DefaultShaderStageIndex;                                    // 0x0110   (0x0004)  
	uint32_t                                           MaxUpdateIterations;                                        // 0x0114   (0x0004)  
	TSet<uint32_t>                                     SpawnStages;                                                // 0x0118   (0x0050)  
	bool                                               bSimulationStagesEnabled;                                   // 0x0168:0 (0x0001)  
	bool                                               bDeprecatedShaderStagesEnabled;                             // 0x0168:1 (0x0001)  
	bool                                               bLimitDeltaTime;                                            // 0x0168:2 (0x0001)  
	unsigned char                                      UnknownData05_4[0x7];                                       // 0x0169   (0x0007)  MISSED
	FString                                            UniqueEmitterName;                                          // 0x0170   (0x0010)  
	TArray<UNiagaraRendererProperties*>                RendererProperties;                                         // 0x0180   (0x0010)  
	TArray<FNiagaraEventScriptProperties>              EventHandlerScriptProps;                                    // 0x0190   (0x0010)  
	TArray<UNiagaraSimulationStageBase*>               SimulationStages;                                           // 0x01A0   (0x0010)  
	UNiagaraScript*                                    GPUComputeScript;                                           // 0x01B0   (0x0008)  
	TArray<FName>                                      SharedEventGeneratorIds;                                    // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData06_6[0xD8];                                      // 0x01C8   (0x00D8)  MISSED
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0008 (0x000028 - 0x000030)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
public:
	uint32_t                                           NumParticles;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x0258 (0x000080 - 0x0002D8)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
public:
	bool                                               bUseInverseSquaredFalloff;                                  // 0x0080:0 (0x0001)  
	bool                                               bAffectsTranslucency;                                       // 0x0080:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              RadiusScale;                                                // 0x0084   (0x0004)  
	FVector                                            ColorAdd;                                                   // 0x0088   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   LightRenderingEnabledBinding;                               // 0x0098   (0x0058)  
	FNiagaraVariableAttributeBinding                   LightExponentBinding;                                       // 0x00F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0148   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x01A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RadiusBinding;                                              // 0x01F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   VolumetricScatteringBinding;                                // 0x0250   (0x0058)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x02A8   (0x0030)  MISSED
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x05F8 (0x000080 - 0x000678)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
public:
	UStaticMesh*                                       ParticleMesh;                                               // 0x0080   (0x0008)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	bool                                               bOverrideMaterials;                                         // 0x008C:0 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent;                                   // 0x008C:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x008D   (0x0003)  MISSED
	TArray<FNiagaraMeshMaterialOverride>               OverrideMaterials;                                          // 0x0090   (0x0010)  
	FVector2D                                          SubImageSize;                                               // 0x00A0   (0x0008)  
	bool                                               bSubImageBlend;                                             // 0x00A8:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x00A9   (0x0003)  MISSED
	ENiagaraMeshFacingMode                             FacingMode;                                                 // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	bool                                               bLockedAxisEnable;                                          // 0x00B0:0 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FVector                                            LockedAxis;                                                 // 0x00B4   (0x000C)  
	ENiagaraMeshLockedAxisSpace                        LockedAxisSpace;                                            // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	FVector                                            PivotOffset;                                                // 0x00C4   (0x000C)  
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	bool                                               bEnableFrustumCulling;                                      // 0x00D4:0 (0x0001)  
	bool                                               bEnableCameraDistanceCulling;                               // 0x00D4:1 (0x0001)  
	unsigned char                                      UnknownData07_4[0x3];                                       // 0x00D5   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x00D8   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x00DC   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0140   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0198   (0x0058)  
	FNiagaraVariableAttributeBinding                   MeshOrientationBinding;                                     // 0x01F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x0248   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x02A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x02F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0350   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x03A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0400   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0458   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x04B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0508   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0560   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x05B8   (0x0058)  
	unsigned char                                      UnknownData09_6[0x68];                                      // 0x0610   (0x0068)  MISSED
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraMessageDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UNiagaraParameterCollectionInstance : public UObject
{ 
public:
	UNiagaraParameterCollection*                       Collection;                                                 // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           OverridenParameters;                                        // 0x0030   (0x0010)  
	FNiagaraParameterStore                             ParameterStorage;                                           // 0x0040   (0x0078)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	void SetVectorParameter(FString InVariableName, FVector InValue);                                                        // [0xb76ac0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                     // [0xb769d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                    // [0xb768f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                           // [0xb765b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	void SetIntParameter(FString InVariableName, int32_t InValue);                                                           // [0xb764d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	void SetFloatParameter(FString InVariableName, float InValue);                                                           // [0xb763e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                    // [0xb762f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	void SetBoolParameter(FString InVariableName, bool InValue);                                                             // [0xb76210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	FVector GetVectorParameter(FString InVariableName);                                                                      // [0xb75df0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	FVector4 GetVector4Parameter(FString InVariableName);                                                                    // [0xb75d30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	FVector2D GetVector2DParameter(FString InVariableName);                                                                  // [0xb75c70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	FQuat GetQuatParameter(FString InVariableName);                                                                          // [0xb75bb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	int32_t GetIntParameter(FString InVariableName);                                                                         // [0xb75a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	float GetFloatParameter(FString InVariableName);                                                                         // [0xb75980] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	FLinearColor GetColorParameter(FString InVariableName);                                                                  // [0xb758c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	bool GetBoolParameter(FString InVariableName);                                                                           // [0xb75810] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0038 (0x000028 - 0x000060)
class UNiagaraParameterCollection : public UObject
{ 
public:
	FName                                              Namespace;                                                  // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0030   (0x0010)  
	UMaterialParameterCollection*                      SourceMaterialCollection;                                   // 0x0040   (0x0008)  
	UNiagaraParameterCollectionInstance*               DefaultInstance;                                            // 0x0048   (0x0008)  
	FGuid                                              CompileId;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraPrecompileContainer : public UObject
{ 
public:
	TArray<UNiagaraScript*>                            Scripts;                                                    // 0x0028   (0x0010)  
	UNiagaraSystem*                                    System;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0000 (0x000228 - 0x000228)
class ANiagaraPreviewBase : public AActor
{ 
public:
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraPreviewAxis : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
public:
	FName                                              Param;                                                      // 0x0028   (0x0008)  
	int32_t                                            Count;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	int32_t                                            Min;                                                        // 0x0038   (0x0004)  
	int32_t                                            Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	float                                              Min;                                                        // 0x0038   (0x0004)  
	float                                              Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector2D                                          Min;                                                        // 0x0038   (0x0008)  
	FVector2D                                          Max;                                                        // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector                                            Min;                                                        // 0x0038   (0x000C)  
	FVector                                            Max;                                                        // 0x0044   (0x000C)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector4                                           Min;                                                        // 0x0040   (0x0010)  
	FVector4                                           Max;                                                        // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FLinearColor                                       Min;                                                        // 0x0038   (0x0010)  
	FLinearColor                                       Max;                                                        // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0050 (0x000228 - 0x000278)
class ANiagaraPreviewGrid : public AActor
{ 
public:
	UNiagaraSystem*                                    System;                                                     // 0x0228   (0x0008)  
	ENiagaraPreviewGridResetMode                       ResetMode;                                                  // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0231   (0x0007)  MISSED
	UNiagaraPreviewAxis*                               PreviewAxisX;                                               // 0x0238   (0x0008)  
	UNiagaraPreviewAxis*                               PreviewAxisY;                                               // 0x0240   (0x0008)  
	UClass*                                            PreviewClass;                                               // 0x0248   (0x0008)  
	float                                              SpacingX;                                                   // 0x0250   (0x0004)  
	float                                              SpacingY;                                                   // 0x0254   (0x0004)  
	int32_t                                            NumX;                                                       // 0x0258   (0x0004)  
	int32_t                                            NumY;                                                       // 0x025C   (0x0004)  
	TArray<UChildActorComponent*>                      PreviewComponents;                                          // 0x0260   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0270   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
	void SetPaused(bool bPaused);                                                                                            // [0xb7a5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
	void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                               // [0xb7a4c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
	void DeactivatePreviews();                                                                                               // [0xb7a4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
	void ActivatePreviews(bool bReset);                                                                                      // [0xb7a290] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x0758 (0x000080 - 0x0007D8)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
public:
	UMaterialInterface*                                Material;                                                   // 0x0080   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0088   (0x0020)  
	ENiagaraRibbonFacingMode                           FacingMode;                                                 // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	FNiagaraRibbonUVSettings                           UV0Settings;                                                // 0x00AC   (0x0024)  
	FNiagaraRibbonUVSettings                           UV1Settings;                                                // 0x00D0   (0x0024)  
	ENiagaraRibbonDrawDirection                        DrawDirection;                                              // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00F5   (0x0003)  MISSED
	float                                              CurveTension;                                               // 0x00F8   (0x0004)  
	ENiagaraRibbonTessellationMode                     TessellationMode;                                           // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	int32_t                                            TessellationFactor;                                         // 0x0100   (0x0004)  
	bool                                               bUseConstantFactor;                                         // 0x0104   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	float                                              TessellationAngle;                                          // 0x0108   (0x0004)  
	bool                                               bScreenSpaceTessellation;                                   // 0x010C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x010D   (0x0003)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0110   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0168   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x01C0   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0218   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonTwistBinding;                                         // 0x0270   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonWidthBinding;                                         // 0x02C8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonFacingBinding;                                        // 0x0320   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonIdBinding;                                            // 0x0378   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonLinkOrderBinding;                                     // 0x03D0   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0428   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x0480   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x04D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0530   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0588   (0x0058)  
	FNiagaraVariableAttributeBinding                   U0OverrideBinding;                                          // 0x05E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   V0RangeOverrideBinding;                                     // 0x0638   (0x0058)  
	FNiagaraVariableAttributeBinding                   U1OverrideBinding;                                          // 0x0690   (0x0058)  
	FNiagaraVariableAttributeBinding                   V1RangeOverrideBinding;                                     // 0x06E8   (0x0058)  
	unsigned char                                      UnknownData05_6[0x98];                                      // 0x0740   (0x0098)  MISSED
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x0298 (0x000028 - 0x0002C0)
class UNiagaraScript : public UNiagaraScriptBase
{ 
public:
	ENiagaraScriptUsage                                Usage;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            UsageIndex;                                                 // 0x002C   (0x0004)  
	FGuid                                              UsageId;                                                    // 0x0030   (0x0010)  
	FNiagaraParameterStore                             RapidIterationParameters;                                   // 0x0040   (0x0078)  
	FNiagaraScriptExecutionParameterStore              ScriptExecutionParamStore;                                  // 0x00B8   (0x0098)  
	TArray<FNiagaraBoundParameter>                     ScriptExecutionBoundParameters;                             // 0x0150   (0x0010)  
	FNiagaraVMExecutableDataId                         CachedScriptVMId;                                           // 0x0160   (0x0048)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x01A8   (0x0010)  MISSED
	FNiagaraVMExecutableData                           CachedScriptVM;                                             // 0x01B8   (0x00E0)  
	TArray<UNiagaraParameterCollection*>               CachedParameterCollectionReferences;                        // 0x0298   (0x0010)  
	TArray<FNiagaraScriptDataInterfaceInfo>            CachedDefaultDataInterfaces;                                // 0x02A8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x02B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	void RaiseOnGPUCompilationComplete();                                                                                    // [0xb7a5a0] Final|Native|Public  
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UNiagaraScriptSourceBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UNiagaraSettings : public UDeveloperSettings
{ 
public:
	FSoftObjectPath                                    DefaultEffectType;                                          // 0x0038   (0x0018)  
	TArray<FText>                                      QualityLevels;                                              // 0x0050   (0x0010)  
	TMap<FString, FText>                               ComponentRendererWarningsPerClass;                          // 0x0060   (0x0050)  
	TEnumAsByte<ETextureRenderTargetFormat>            DefaultRenderTargetFormat;                                  // 0x00B0   (0x0001)  
	ENiagaraGpuBufferFormat                            DefaultGridFormat;                                          // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00B2   (0x0006)  MISSED
	UNiagaraEffectType*                                DefaultEffectTypePtr;                                       // 0x00B8   (0x0008)  
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
public:
	UNiagaraScript*                                    Script;                                                     // 0x0028   (0x0008)  
	FName                                              SimulationStageName;                                        // 0x0030   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0030 (0x000040 - 0x000070)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
public:
	ENiagaraIterationSource                            IterationSource;                                            // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x0044   (0x0004)  
	bool                                               bSpawnOnly;                                                 // 0x0048:0 (0x0001)  
	bool                                               bDisablePartialParticleUpdate;                              // 0x0048:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0049   (0x0007)  MISSED
	FNiagaraVariableDataInterfaceBinding               DataInterface;                                              // 0x0050   (0x0020)  
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x0720 (0x000080 - 0x0007A0)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
public:
	UMaterialInterface*                                Material;                                                   // 0x0080   (0x0008)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0090   (0x0020)  
	ENiagaraSpriteAlignment                            Alignment;                                                  // 0x00B0   (0x0001)  
	ENiagaraSpriteFacingMode                           FacingMode;                                                 // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	FVector2D                                          PivotInUVSpace;                                             // 0x00B4   (0x0008)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	FVector2D                                          SubImageSize;                                               // 0x00C0   (0x0008)  
	bool                                               bSubImageBlend;                                             // 0x00C8:0 (0x0001)  
	bool                                               bRemoveHMDRollInVR;                                         // 0x00C8:1 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent;                                   // 0x00C8:2 (0x0001)  
	bool                                               bGpuLowLatencyTranslucency;                                 // 0x00C8:3 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              MinFacingCameraBlendDistance;                               // 0x00CC   (0x0004)  
	float                                              MaxFacingCameraBlendDistance;                               // 0x00D0   (0x0004)  
	bool                                               bEnableCameraDistanceCulling;                               // 0x00D4:0 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x00D5   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x00D8   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x00DC   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0140   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0198   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteRotationBinding;                                      // 0x01F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteSizeBinding;                                          // 0x0248   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteFacingBinding;                                        // 0x02A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteAlignmentBinding;                                     // 0x02F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x0350   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x03A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0400   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0458   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x04B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0508   (0x0058)  
	FNiagaraVariableAttributeBinding                   UVScaleBinding;                                             // 0x0560   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x05B8   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x0610   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0668   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x06C0   (0x0058)  
	TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x0718   (0x0010)  
	unsigned char                                      UnknownData06_6[0x78];                                      // 0x0728   (0x0078)  MISSED
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x0450 (0x000030 - 0x000480)
class UNiagaraSystem : public UFXSystemAsset
{ 
public:
	bool                                               bDumpDebugSystemInfo;                                       // 0x0030   (0x0001)  
	bool                                               bDumpDebugEmitterInfo;                                      // 0x0031   (0x0001)  
	bool                                               bRequireCurrentFrameData;                                   // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0033   (0x0001)  MISSED
	bool                                               bFixedBounds;                                               // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0035   (0x0003)  MISSED
	UNiagaraEffectType*                                EffectType;                                                 // 0x0038   (0x0008)  
	bool                                               bOverrideScalabilitySettings;                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FNiagaraSystemScalabilityOverride>          ScalabilityOverrides;                                       // 0x0048   (0x0010)  
	FNiagaraSystemScalabilityOverrides                 SystemScalabilityOverrides;                                 // 0x0058   (0x0010)  
	TArray<FNiagaraEmitterHandle>                      EmitterHandles;                                             // 0x0068   (0x0010)  
	TArray<UNiagaraParameterCollectionInstance*>       ParameterCollectionOverrides;                               // 0x0078   (0x0010)  
	UNiagaraScript*                                    SystemSpawnScript;                                          // 0x0088   (0x0008)  
	UNiagaraScript*                                    SystemUpdateScript;                                         // 0x0090   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0098   (0x0010)  MISSED
	FNiagaraSystemCompiledData                         SystemCompiledData;                                         // 0x00A8   (0x0218)  
	FNiagaraUserRedirectionParameterStore              ExposedParameters;                                          // 0x02C0   (0x00C8)  
	FBox                                               FixedBounds;                                                // 0x0388   (0x001C)  
	bool                                               bAutoDeactivate;                                            // 0x03A4   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x03A5   (0x0003)  MISSED
	float                                              WarmupTime;                                                 // 0x03A8   (0x0004)  
	int32_t                                            WarmupTickCount;                                            // 0x03AC   (0x0004)  
	float                                              WarmupTickDelta;                                            // 0x03B0   (0x0004)  
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                     // 0x03B4   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x03B5   (0x0003)  MISSED
	TArray<FName>                                      UserDINamesReadInSystemScripts;                             // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData06_6[0xB8];                                      // 0x03C8   (0x00B8)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0020 (0x000020 - 0x000040)
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0020   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraVariableBase
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FNiagaraTypeDefinitionHandle                       TypeDefHandle;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraTypeDefinitionHandle
{ 
	int32_t                                            RegisteredTypeIndex;                                        // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0014 (0x00000C - 0x000020)
struct FNiagaraVariable : FNiagaraVariableBase
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<char>                                       VarData;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneBoolChannel                             BoolChannel;                                                // 0x0040   (0x0090)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0280 (0x000040 - 0x0002C0)
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            RedChannel;                                                 // 0x0040   (0x00A0)  
	FMovieSceneFloatChannel                            GreenChannel;                                               // 0x00E0   (0x00A0)  
	FMovieSceneFloatChannel                            BlueChannel;                                                // 0x0180   (0x00A0)  
	FMovieSceneFloatChannel                            AlphaChannel;                                               // 0x0220   (0x00A0)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x00A0 (0x000040 - 0x0000E0)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0040   (0x00A0)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneIntegerChannel                          IntegerChannel;                                             // 0x0040   (0x0090)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0018 (0x000010 - 0x000028)
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{ 
	FFrameNumber                                       SpawnSectionStartFrame;                                     // 0x0010   (0x0004)  
	FFrameNumber                                       SpawnSectionEndFrame;                                       // 0x0014   (0x0004)  
	ENiagaraSystemSpawnSectionStartBehavior            SpawnSectionStartBehavior;                                  // 0x0018   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SpawnSectionEvaluateBehavior;                               // 0x001C   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SpawnSectionEndBehavior;                                    // 0x0020   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0288 (0x000040 - 0x0002C8)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            VectorChannels;                                             // 0x0040   (0x0280)  
	int32_t                                            ChannelsUsed;                                               // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraRandInfo
{ 
	int32_t                                            Seed1;                                                      // 0x0000   (0x0004)  
	int32_t                                            Seed2;                                                      // 0x0004   (0x0004)  
	int32_t                                            Seed3;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraUserParameterBinding
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraScriptVariableBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraVariableDataInterfaceBinding
{ 
	FNiagaraVariable                                   BoundVariable;                                              // 0x0000   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x002C (0x000000 - 0x00002C)
struct FNiagaraMaterialAttributeBinding
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FNiagaraVariableBase                               NiagaraVariable;                                            // 0x0008   (0x000C)  
	FNiagaraVariableBase                               ResolvedNiagaraVariable;                                    // 0x0014   (0x000C)  
	FNiagaraVariableBase                               NiagaraChildVariable;                                       // 0x0020   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNiagaraVariableAttributeBinding
{ 
	FNiagaraVariableBase                               ParamMapVariable;                                           // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraVariable                                   DataSetVariable;                                            // 0x0010   (0x0020)  
	FNiagaraVariable                                   RootVariable;                                               // 0x0030   (0x0020)  
	TEnumAsByte<ENiagaraBindingSource>                 BindingSourceMode;                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	bool                                               bBindingExistsOnSource;                                     // 0x0054:0 (0x0001)  
	bool                                               bIsCachedParticleValue;                                     // 0x0054:1 (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraVariableInfo
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	FText                                              Definition;                                                 // 0x0020   (0x0018)  
	UNiagaraDataInterface*                             DataInterface;                                              // 0x0038   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0048 (0x000000 - 0x000048)
struct FNiagaraSystemUpdateContext
{ 
	TArray<UNiagaraComponent*>                         ComponentsToReset;                                          // 0x0000   (0x0010)  
	TArray<UNiagaraComponent*>                         ComponentsToReInit;                                         // 0x0010   (0x0010)  
	TArray<UNiagaraComponent*>                         ComponentsToNotifySimDestroy;                               // 0x0020   (0x0010)  
	TArray<UNiagaraSystem*>                            SystemSimsToDestroy;                                        // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FVMExternalFunctionBindingInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              OwnerName;                                                  // 0x0008   (0x0008)  
	TArray<bool>                                       InputParamLocations;                                        // 0x0010   (0x0010)  
	int32_t                                            NumOutputs;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FVMFunctionSpecifier>                       FunctionSpecifiers;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVMFunctionSpecifier
{ 
	FName                                              Key;                                                        // 0x0000   (0x0008)  
	FName                                              Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraStatScope
{ 
	FName                                              FullName;                                                   // 0x0000   (0x0008)  
	FName                                              FriendlyName;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraScriptDataInterfaceCompileInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0010   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0020   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0028   (0x0008)  
	bool                                               bIsPlaceholder;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraTypeDefinition
{ 
	UObject*                                           ClassStructOrEnum;                                          // 0x0000   (0x0008)  
	uint16_t                                           UnderlyingType;                                             // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraScriptDataInterfaceInfo
{ 
	UNiagaraDataInterface*                             DataInterface;                                              // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0018   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0028   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0030   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0090 (0x000000 - 0x000090)
struct FNiagaraFunctionSignature
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TArray<FNiagaraVariable>                           Inputs;                                                     // 0x0008   (0x0010)  
	TArray<FNiagaraVariable>                           Outputs;                                                    // 0x0018   (0x0010)  
	FName                                              OwnerName;                                                  // 0x0028   (0x0008)  
	bool                                               bRequiresContext;                                           // 0x0030:0 (0x0001)  
	bool                                               bRequiresExecPin;                                           // 0x0030:1 (0x0001)  
	bool                                               bMemberFunction;                                            // 0x0030:2 (0x0001)  
	bool                                               bExperimental;                                              // 0x0030:3 (0x0001)  
	bool                                               bSupportsCPU;                                               // 0x0030:4 (0x0001)  
	bool                                               bSupportsGPU;                                               // 0x0030:5 (0x0001)  
	bool                                               bWriteFunction;                                             // 0x0030:6 (0x0001)  
	bool                                               bSoftDeprecatedFunction;                                    // 0x0030:7 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            ModuleUsageBitmask;                                         // 0x0034   (0x0004)  
	int32_t                                            ContextStageMinIndex;                                       // 0x0038   (0x0004)  
	int32_t                                            ContextStageMaxIndex;                                       // 0x003C   (0x0004)  
	TMap<FName, FName>                                 FunctionSpecifiers;                                         // 0x0040   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraScriptDataUsageInfo
{ 
	bool                                               bReadsAttributeData;                                        // 0x0000   (0x0001)  
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraDataSetProperties
{ 
	FNiagaraDataSetID                                  ID;                                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraDataSetID
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	ENiagaraDataSetType                                Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraMaterialOverride
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraMaterialOverride
{ 
	UMaterialInterface*                                Material;                                                   // 0x0000   (0x0008)  
	uint32_t                                           MaterialSubIndex;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	UNiagaraRendererProperties*                        EmitterRendererProperty;                                    // 0x0010   (0x0008)  
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNCPool
{ 
	TArray<FNCPoolElement>                             FreeElements;                                               // 0x0000   (0x0010)  
	TArray<UNiagaraComponent*>                         InUseComponents_Auto;                                       // 0x0010   (0x0010)  
	TArray<UNiagaraComponent*>                         InUseComponents_Manual;                                     // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNCPoolElement
{ 
	UNiagaraComponent*                                 Component;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FNiagaraComponentPropertyBinding
{ 
	FNiagaraVariableAttributeBinding                   AttributeBinding;                                           // 0x0000   (0x0058)  
	FName                                              PropertyName;                                               // 0x0058   (0x0008)  
	FNiagaraTypeDefinition                             PropertyType;                                               // 0x0060   (0x0010)  
	FName                                              MetadataSetterName;                                         // 0x0070   (0x0008)  
	FNiagaraVariable                                   WritableValue;                                              // 0x0078   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterNameSettingsRef
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraEmitterNameSettingsRef
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x0008)  
	FString                                            EmitterName;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBasicParticleData
{ 
	FVector                                            Position;                                                   // 0x0000   (0x000C)  
	float                                              Size;                                                       // 0x000C   (0x0004)  
	FVector                                            Velocity;                                                   // 0x0010   (0x000C)  
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMeshTriCoordinate
{ 
	int32_t                                            Tri;                                                        // 0x0000   (0x0004)  
	FVector                                            BaryCoord;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNDIStaticMeshSectionFilter
{ 
	TArray<int32_t>                                    AllowedMaterialSlots;                                       // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraDataSetCompiledData
{ 
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0000   (0x0010)  
	TArray<FNiagaraVariableLayoutInfo>                 VariableLayouts;                                            // 0x0010   (0x0010)  
	FNiagaraDataSetID                                  ID;                                                         // 0x0020   (0x000C)  
	uint32_t                                           TotalFloatComponents;                                       // 0x002C   (0x0004)  
	uint32_t                                           TotalInt32Components;                                       // 0x0030   (0x0004)  
	uint32_t                                           TotalHalfComponents;                                        // 0x0034   (0x0004)  
	bool                                               bRequiresPersistentIDs;                                     // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FNiagaraVariableLayoutInfo
{ 
	uint32_t                                           FloatComponentStart;                                        // 0x0000   (0x0004)  
	uint32_t                                           Int32ComponentStart;                                        // 0x0004   (0x0004)  
	uint32_t                                           HalfComponentStart;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeLayoutInfo                             LayoutInfo;                                                 // 0x0010   (0x0060)  
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0060 (0x000000 - 0x000060)
struct FNiagaraTypeLayoutInfo
{ 
	TArray<uint32_t>                                   FloatComponentByteOffsets;                                  // 0x0000   (0x0010)  
	TArray<uint32_t>                                   FloatComponentRegisterOffsets;                              // 0x0010   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentByteOffsets;                                  // 0x0020   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                              // 0x0030   (0x0010)  
	TArray<uint32_t>                                   HalfComponentByteOffsets;                                   // 0x0040   (0x0010)  
	TArray<uint32_t>                                   HalfComponentRegisterOffsets;                               // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraGraphViewSettings
{ 
	FVector2D                                          Location;                                                   // 0x0000   (0x0008)  
	float                                              Zoom;                                                       // 0x0008   (0x0004)  
	bool                                               bIsValid;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraEmitterScalabilityOverrides
{ 
	TArray<FNiagaraEmitterScalabilityOverride>         Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraEmitterScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bScaleSpawnCount;                                           // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SpawnCountScale;                                            // 0x0034   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraPlatformSet
{ 
	int32_t                                            QualityLevelMask;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FNiagaraDeviceProfileStateEntry>            DeviceProfileStates;                                        // 0x0008   (0x0010)  
	TArray<FNiagaraPlatformSetCVarCondition>           CVarConditions;                                             // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraPlatformSetCVarCondition
{ 
	FName                                              CVarName;                                                   // 0x0000   (0x0008)  
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            MinInt;                                                     // 0x000C   (0x0004)  
	int32_t                                            MaxInt;                                                     // 0x0010   (0x0004)  
	float                                              MinFloat;                                                   // 0x0014   (0x0004)  
	float                                              MaxFloat;                                                   // 0x0018   (0x0004)  
	bool                                               bUseMinInt;                                                 // 0x001C:0 (0x0001)  
	bool                                               bUseMaxInt;                                                 // 0x001C:1 (0x0001)  
	bool                                               bUseMinFloat;                                               // 0x001C:2 (0x0001)  
	bool                                               bUseMaxFloat;                                               // 0x001C:3 (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x001D   (0x000B)  MISSED
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraDeviceProfileStateEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	uint32_t                                           QualityLevelMask;                                           // 0x0008   (0x0004)  
	uint32_t                                           SetQualityLevelMask;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0008 (0x000038 - 0x000040)
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{ 
	bool                                               bOverrideSpawnCountScale;                                   // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraEmitterScalabilitySettingsArray
{ 
	TArray<FNiagaraEmitterScalabilitySettings>         Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraSystemScalabilityOverrides
{ 
	TArray<FNiagaraSystemScalabilityOverride>          Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0048 (0x000000 - 0x000048)
struct FNiagaraSystemScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bCullByDistance;                                            // 0x0030:0 (0x0001)  
	bool                                               bCullMaxInstanceCount;                                      // 0x0030:1 (0x0001)  
	bool                                               bCullPerSystemMaxInstanceCount;                             // 0x0030:2 (0x0001)  
	bool                                               bCullByMaxTimeWithoutRender;                                // 0x0030:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MaxDistance;                                                // 0x0034   (0x0004)  
	int32_t                                            MaxInstances;                                               // 0x0038   (0x0004)  
	int32_t                                            MaxSystemInstances;                                         // 0x003C   (0x0004)  
	float                                              MaxTimeWithoutRender;                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0008 (0x000048 - 0x000050)
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{ 
	bool                                               bOverrideDistanceSettings;                                  // 0x0048:0 (0x0001)  
	bool                                               bOverrideInstanceCountSettings;                             // 0x0048:1 (0x0001)  
	bool                                               bOverridePerSystemInstanceCountSettings;                    // 0x0048:2 (0x0001)  
	bool                                               bOverrideTimeSinceRendererSettings;                         // 0x0048:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraSystemScalabilitySettingsArray
{ 
	TArray<FNiagaraSystemScalabilitySettings>          Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNiagaraDetailsLevelScaleOverrides
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              Medium;                                                     // 0x0004   (0x0004)  
	float                                              High;                                                       // 0x0008   (0x0004)  
	float                                              Epic;                                                       // 0x000C   (0x0004)  
	float                                              Cine;                                                       // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraEmitterScriptProperties
{ 
	UNiagaraScript*                                    Script;                                                     // 0x0000   (0x0008)  
	TArray<FNiagaraEventReceiverProperties>            EventReceivers;                                             // 0x0008   (0x0010)  
	TArray<FNiagaraEventGeneratorProperties>           EventGenerators;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNiagaraEventGeneratorProperties
{ 
	int32_t                                            MaxEventsPerFrame;                                          // 0x0000   (0x0004)  
	FName                                              ID;                                                         // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0010   (0x0040)  
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraEventReceiverProperties
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              SourceEventGenerator;                                       // 0x0008   (0x0008)  
	FName                                              SourceEmitter;                                              // 0x0010   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0030 (0x000028 - 0x000058)
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{ 
	EScriptExecutionMode                               ExecutionMode;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	uint32_t                                           SpawnNumber;                                                // 0x002C   (0x0004)  
	uint32_t                                           MaxEventsPerFrame;                                          // 0x0030   (0x0004)  
	FGuid                                              SourceEmitterID;                                            // 0x0034   (0x0010)  
	FName                                              SourceEventName;                                            // 0x0044   (0x0008)  
	bool                                               bRandomSpawnNumber;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	uint32_t                                           MinSpawnNumber;                                             // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraEmitterHandle
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FName                                              IdName;                                                     // 0x0010   (0x0008)  
	bool                                               bIsEnabled;                                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	UNiagaraEmitter*                                   Instance;                                                   // 0x0028   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x002C (0x000000 - 0x00002C)
struct FNiagaraCollisionEventPayload
{ 
	FVector                                            CollisionPos;                                               // 0x0000   (0x000C)  
	FVector                                            CollisionNormal;                                            // 0x000C   (0x000C)  
	FVector                                            CollisionVelocity;                                          // 0x0018   (0x000C)  
	int32_t                                            ParticleIndex;                                              // 0x0024   (0x0004)  
	int32_t                                            PhysicalMaterialIndex;                                      // 0x0028   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraMeshMaterialOverride
{ 
	UMaterialInterface*                                ExplicitMat;                                                // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       UserParamBinding;                                           // 0x0008   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraParameters
{ 
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0078 (0x000000 - 0x000078)
struct FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	UObject*                                           Owner;                                                      // 0x0008   (0x0008)  
	TArray<FNiagaraVariableWithOffset>                 SortedParameterOffsets;                                     // 0x0010   (0x0010)  
	TArray<char>                                       ParameterData;                                              // 0x0020   (0x0010)  
	TArray<UNiagaraDataInterface*>                     DataInterfaces;                                             // 0x0030   (0x0010)  
	TArray<UObject*>                                   UObjects;                                                   // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0050   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0004 (0x00000C - 0x000010)
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{ 
	int32_t                                            Offset;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraBoundParameter
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
	int32_t                                            SrcOffset;                                                  // 0x0020   (0x0004)  
	int32_t                                            DestOffset;                                                 // 0x0024   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraPlatformSetConflictInfo
{ 
	int32_t                                            SetAIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            SetBIndex;                                                  // 0x0004   (0x0004)  
	TArray<FNiagaraPlatformSetConflictEntry>           Conflicts;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraPlatformSetConflictEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	int32_t                                            QualityLevelMask;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FNiagaraRibbonUVSettings
{ 
	ENiagaraRibbonUVEdgeMode                           LeadingEdgeMode;                                            // 0x0000   (0x0004)  
	ENiagaraRibbonUVEdgeMode                           TrailingEdgeMode;                                           // 0x0004   (0x0004)  
	ENiagaraRibbonUVDistributionMode                   DistributionMode;                                           // 0x0008   (0x0004)  
	float                                              TilingLength;                                               // 0x000C   (0x0004)  
	FVector2D                                          Offset;                                                     // 0x0010   (0x0008)  
	FVector2D                                          Scale;                                                      // 0x0018   (0x0008)  
	bool                                               bEnablePerParticleUOverride;                                // 0x0020   (0x0001)  
	bool                                               bEnablePerParticleVRangeOverride;                           // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraScalabilityManager
{ 
	UNiagaraEffectType*                                EffectType;                                                 // 0x0000   (0x0008)  
	TArray<UNiagaraComponent*>                         ManagedComponents;                                          // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FNiagaraVMExecutableData
{ 
	TArray<char>                                       ByteCode;                                                   // 0x0000   (0x0010)  
	TArray<char>                                       OptimizedByteCode;                                          // 0x0010   (0x0010)  
	int32_t                                            NumTempRegisters;                                           // 0x0020   (0x0004)  
	int32_t                                            NumUserPtrs;                                                // 0x0024   (0x0004)  
	TArray<char>                                       ScriptLiterals;                                             // 0x0028   (0x0010)  
	TArray<FNiagaraVariable>                           Attributes;                                                 // 0x0038   (0x0010)  
	FNiagaraScriptDataUsageInfo                        DataUsage;                                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FNiagaraScriptDataInterfaceCompileInfo>     DataInterfaceInfo;                                          // 0x0050   (0x0010)  
	TArray<FVMExternalFunctionBindingInfo>             CalledVMExternalFunctions;                                  // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0070   (0x0010)  MISSED
	TArray<FNiagaraDataSetID>                          ReadDataSets;                                               // 0x0080   (0x0010)  
	TArray<FNiagaraDataSetProperties>                  WriteDataSets;                                              // 0x0090   (0x0010)  
	TArray<FNiagaraStatScope>                          StatScopes;                                                 // 0x00A0   (0x0010)  
	TArray<FNiagaraDataInterfaceGPUParamInfo>          DIParamInfo;                                                // 0x00B0   (0x0010)  
	ENiagaraScriptCompileStatus                        LastCompileStatus;                                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	TArray<FSimulationStageMetaData>                   SimulationStageMetaData;                                    // 0x00C8   (0x0010)  
	bool                                               bReadsSignificanceIndex;                                    // 0x00D8:0 (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0048 (0x000000 - 0x000048)
struct FNiagaraVMExecutableDataId
{ 
	FGuid                                              CompilerVersionID;                                          // 0x0000   (0x0010)  
	ENiagaraScriptUsage                                ScriptUsageType;                                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FGuid                                              ScriptUsageTypeID;                                          // 0x0014   (0x0010)  
	bool                                               bUsesRapidIterationParams;                                  // 0x0024:0 (0x0001)  
	bool                                               bInterpolatedSpawn;                                         // 0x0024:1 (0x0001)  
	bool                                               bRequiresPersistentIDs;                                     // 0x0024:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0025   (0x0003)  MISSED
	FGuid                                              BaseScriptID;                                               // 0x0028   (0x0010)  
	FNiagaraCompileHash                                BaseScriptCompileHash;                                      // 0x0038   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraModuleDependency
{ 
	FName                                              ID;                                                         // 0x0000   (0x0008)  
	ENiagaraModuleDependencyType                       Type;                                                       // 0x0008   (0x0001)  
	ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FText                                              Description;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0010 (0x000078 - 0x000088)
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0020 (0x000078 - 0x000098)
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{ 
	int32_t                                            ParameterSize;                                              // 0x0078   (0x0004)  
	uint32_t                                           PaddedParameterSize;                                        // 0x007C   (0x0004)  
	TArray<FNiagaraScriptExecutionPaddingInfo>         PaddingInfo;                                                // 0x0080   (0x0010)  
	bool                                               bInitialized;                                               // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraScriptExecutionPaddingInfo
{ 
	uint16_t                                           SrcOffset;                                                  // 0x0000   (0x0002)  
	uint16_t                                           DestOffset;                                                 // 0x0002   (0x0002)  
	uint16_t                                           SrcSize;                                                    // 0x0004   (0x0002)  
	uint16_t                                           DestSize;                                                   // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraScriptHighlight
{ 
	FLinearColor                                       Color;                                                      // 0x0000   (0x0010)  
	FText                                              DISPLAYNAME;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraSystemCompileRequest
/// Size: 0x0080 (0x000000 - 0x000080)
struct FNiagaraSystemCompileRequest
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<UObject*>                                   RootObjects;                                                // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x0018   (0x0068)  MISSED
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x0078 (0x000000 - 0x000078)
struct FEmitterCompiledScriptPair
{ 
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0218 (0x000000 - 0x000218)
struct FNiagaraSystemCompiledData
{ 
	FNiagaraParameterStore                             InstanceParamStore;                                         // 0x0000   (0x0078)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0078   (0x0040)  
	FNiagaraDataSetCompiledData                        SpawnInstanceParamsDataSetCompiledData;                     // 0x00B8   (0x0040)  
	FNiagaraDataSetCompiledData                        UpdateInstanceParamsDataSetCompiledData;                    // 0x00F8   (0x0040)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceGlobalBinding;                                 // 0x0138   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceSystemBinding;                                 // 0x0158   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceOwnerBinding;                                  // 0x0178   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  SpawnInstanceEmitterBindings;                               // 0x0198   (0x0010)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceGlobalBinding;                                // 0x01A8   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceSystemBinding;                                // 0x01C8   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceOwnerBinding;                                 // 0x01E8   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  UpdateInstanceEmitterBindings;                              // 0x0208   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraParameterDataSetBindingCollection
{ 
	TArray<FNiagaraParameterDataSetBinding>            FloatOffsets;                                               // 0x0000   (0x0010)  
	TArray<FNiagaraParameterDataSetBinding>            Int32Offsets;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraParameterDataSetBinding
{ 
	int32_t                                            ParameterOffset;                                            // 0x0000   (0x0004)  
	int32_t                                            DataSetComponentOffset;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x0130 (0x000000 - 0x000130)
struct FNiagaraEmitterCompiledData
{ 
	TArray<FName>                                      SpawnAttributes;                                            // 0x0000   (0x0010)  
	FNiagaraVariable                                   EmitterSpawnIntervalVar;                                    // 0x0010   (0x0020)  
	FNiagaraVariable                                   EmitterInterpSpawnStartDTVar;                               // 0x0030   (0x0020)  
	FNiagaraVariable                                   EmitterSpawnGroupVar;                                       // 0x0050   (0x0020)  
	FNiagaraVariable                                   EmitterAgeVar;                                              // 0x0070   (0x0020)  
	FNiagaraVariable                                   EmitterRandomSeedVar;                                       // 0x0090   (0x0020)  
	FNiagaraVariable                                   EmitterInstanceSeedVar;                                     // 0x00B0   (0x0020)  
	FNiagaraVariable                                   EmitterTotalSpawnedParticlesVar;                            // 0x00D0   (0x0020)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x00F0   (0x0040)  
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FNiagaraVariableMetaData
{ 
	FText                                              Description;                                                // 0x0000   (0x0018)  
	FText                                              CategoryName;                                               // 0x0018   (0x0018)  
	bool                                               bAdvancedDisplay;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            EditorSortPriority;                                         // 0x0034   (0x0004)  
	bool                                               bInlineEditConditionToggle;                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FNiagaraInputConditionMetadata                     EditCondition;                                              // 0x0040   (0x0018)  
	FNiagaraInputConditionMetadata                     VisibleCondition;                                           // 0x0058   (0x0018)  
	TMap<FName, FString>                               PropertyMetaData;                                           // 0x0070   (0x0050)  
	FName                                              ParentAttribute;                                            // 0x00C0   (0x0008)  
	FName                                              ScopeName;                                                  // 0x00C8   (0x0008)  
	ENiagaraScriptParameterUsage                       Usage;                                                      // 0x00D0   (0x0004)  
	bool                                               bIsStaticSwitch;                                            // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00D5   (0x0003)  MISSED
	int32_t                                            StaticSwitchDefaultValue;                                   // 0x00D8   (0x0004)  
	bool                                               bAddedToNodeGraphDeepCopy;                                  // 0x00DC   (0x0001)  
	bool                                               bOutputIsPersistent;                                        // 0x00DD   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x00DE   (0x0002)  MISSED
	FName                                              CachedNamespacelessVariableName;                            // 0x00E0   (0x0008)  
	bool                                               bCreatedInSystemEditor;                                     // 0x00E8   (0x0001)  
	bool                                               bUseLegacyNameString;                                       // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x00EA   (0x0006)  MISSED
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraInputConditionMetadata
{ 
	FName                                              InputName;                                                  // 0x0000   (0x0008)  
	TArray<FString>                                    TargetValues;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraParameterScopeInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraParameterScopeInfo
{ 
	ENiagaraParameterScope                             Scope;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            NamespaceString;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraCompileHashVisitorDebugInfo
{ 
	FString                                            Object;                                                     // 0x0000   (0x0010)  
	TArray<FString>                                    PropertyKeys;                                               // 0x0010   (0x0010)  
	TArray<FString>                                    PropertyValues;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraID
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	int32_t                                            AcquireTag;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraSpawnInfo
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	float                                              InterpStartDt;                                              // 0x0004   (0x0004)  
	float                                              IntervalDt;                                                 // 0x0008   (0x0004)  
	int32_t                                            SpawnGroup;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraMatrix
{ 
	FVector4                                           Row0;                                                       // 0x0000   (0x0010)  
	FVector4                                           Row1;                                                       // 0x0010   (0x0010)  
	FVector4                                           Row2;                                                       // 0x0020   (0x0010)  
	FVector4                                           Row3;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraParameterMap
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraNumeric
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraHalfVector4
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
	uint16_t                                           W;                                                          // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (0x000000 - 0x000006)
struct FNiagaraHalfVector3
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraHalfVector2
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (0x000000 - 0x000002)
struct FNiagaraHalf
{ 
	uint16_t                                           Value;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraBool
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraInt32
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x0050 (0x000078 - 0x0000C8)
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{ 
	TMap<FNiagaraVariable, FNiagaraVariable>           UserParameterRedirects;                                     // 0x0078   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraVariant
{ 
	UObject*                                           Object;                                                     // 0x0000   (0x0008)  
	UNiagaraDataInterface*                             DataInterface;                                              // 0x0008   (0x0008)  
	TArray<char>                                       Bytes;                                                      // 0x0010   (0x0010)  
	ENiagaraVariantMode                                CurrentMode;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
struct FNiagaraWorldManagerTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x04
enum ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive                         = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate                                = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None                                      = 2,
	ENiagaraSystemSpawnSectionEndBehavior__ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x03
enum ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive                   = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None                                 = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior__ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x02
enum ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate                                = 0,
	ENiagaraSystemSpawnSectionStartBehavior__ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x05
enum ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None                                                      = 0,
	ENiagaraCollisionMode__SceneGeometry                                             = 1,
	ENiagaraCollisionMode__DepthBuffer                                               = 2,
	ENiagaraCollisionMode__DistanceField                                             = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX                                 = 4
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x04
enum ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre                                         = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst                                          = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond                                         = 2,
	ENiagaraLegacyTrailWidthMode__ENiagaraLegacyTrailWidthMode_MAX                   = 3
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x03
enum ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles                                        = 0,
	ENiagaraRendererSourceDataMode__Emitter                                          = 1,
	ENiagaraRendererSourceDataMode__ENiagaraRendererSourceDataMode_MAX               = 2
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x07
enum ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource                                                               = 0,
	ExplicitParticles                                                                = 1,
	ExplicitEmitter                                                                  = 2,
	ExplicitSystem                                                                   = 3,
	ExplicitUser                                                                     = 4,
	MaxBindingSource                                                                 = 5,
	ENiagaraBindingSource_MAX                                                        = 6
};

/// Enum /Script/Niagara.ENiagaraIterationSource
/// Size: 0x03
enum ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles                                               = 0,
	ENiagaraIterationSource__DataInterface                                           = 1,
	ENiagaraIterationSource__ENiagaraIterationSource_MAX                             = 2
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x04
enum ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle                                                    = 0,
	ENiagaraScriptGroup__Emitter                                                     = 1,
	ENiagaraScriptGroup__System                                                      = 2,
	ENiagaraScriptGroup__Max                                                         = 3
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x04
enum ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System                                        = 0,
	ENiagaraScriptContextStaticSwitch__Emitter                                       = 1,
	ENiagaraScriptContextStaticSwitch__Particle                                      = 2,
	ENiagaraScriptContextStaticSwitch__ENiagaraScriptContextStaticSwitch_MAX         = 3
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x06
enum ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn                                          = 0,
	ENiagaraCompileUsageStaticSwitch__Update                                         = 1,
	ENiagaraCompileUsageStaticSwitch__Event                                          = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage                                = 3,
	ENiagaraCompileUsageStaticSwitch__Default                                        = 4,
	ENiagaraCompileUsageStaticSwitch__ENiagaraCompileUsageStaticSwitch_MAX           = 5
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x14
enum ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function                                                    = 0,
	ENiagaraScriptUsage__Module                                                      = 1,
	ENiagaraScriptUsage__DynamicInput                                                = 2,
	ENiagaraScriptUsage__ParticleSpawnScript                                         = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated                             = 4,
	ENiagaraScriptUsage__ParticleUpdateScript                                        = 5,
	ENiagaraScriptUsage__ParticleEventScript                                         = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript                               = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript                                    = 8,
	ENiagaraScriptUsage__EmitterSpawnScript                                          = 9,
	ENiagaraScriptUsage__EmitterUpdateScript                                         = 10,
	ENiagaraScriptUsage__SystemSpawnScript                                           = 11,
	ENiagaraScriptUsage__SystemUpdateScript                                          = 12,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX                                     = 13
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x08
enum ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown                                         = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty                                           = 1,
	ENiagaraScriptCompileStatus__NCS_Error                                           = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate                                        = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated                                    = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings                            = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings                     = 6,
	ENiagaraScriptCompileStatus__NCS_MAX                                             = 7
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x07
enum ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined                                                = 0,
	ENiagaraInputNodeUsage__Parameter                                                = 1,
	ENiagaraInputNodeUsage__Attribute                                                = 2,
	ENiagaraInputNodeUsage__SystemConstant                                           = 3,
	ENiagaraInputNodeUsage__TranslatorConstant                                       = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter                                  = 5,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX                               = 6
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x04
enum ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData                                                = 0,
	ENiagaraDataSetType__Shared                                                      = 1,
	ENiagaraDataSetType__Event                                                       = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX                                     = 3
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x03
enum ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent                                                 = 0,
	ENiagaraStatDisplayMode__Absolute                                                = 1,
	ENiagaraStatDisplayMode__ENiagaraStatDisplayMode_MAX                             = 2
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x03
enum ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average                                              = 0,
	ENiagaraStatEvaluationType__Maximum                                              = 1,
	ENiagaraStatEvaluationType__ENiagaraStatEvaluationType_MAX                       = 2
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x04
enum ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime                                             = 0,
	ENiagaraAgeUpdateMode__DesiredAge                                                = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek                                          = 2,
	ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX                                 = 3
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x03
enum ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim                                                        = 0,
	ENiagaraSimTarget__GPUComputeSim                                                 = 1,
	ENiagaraSimTarget__ENiagaraSimTarget_MAX                                         = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x04
enum ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value                                                       = 0,
	ENiagaraDefaultMode__Binding                                                     = 1,
	ENiagaraDefaultMode__Custom                                                      = 2,
	ENiagaraDefaultMode__ENiagaraDefaultMode_MAX                                     = 3
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x04
enum ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float                                                   = 0,
	ENiagaraGpuBufferFormat__HalfFloat                                               = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte                                  = 2,
	ENiagaraGpuBufferFormat__Max                                                     = 3
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x05
enum ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs                                                 = 0,
	ENiagaraTickBehavior__UseComponentTickGroup                                      = 1,
	ENiagaraTickBehavior__ForceTickFirst                                             = 2,
	ENiagaraTickBehavior__ForceTickLast                                              = 3,
	ENiagaraTickBehavior__ENiagaraTickBehavior_MAX                                   = 4
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x06
enum ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None                                                              = 0,
	ENCPoolMethod__AutoRelease                                                       = 1,
	ENCPoolMethod__ManualRelease                                                     = 2,
	ENCPoolMethod__ManualRelease_OnComplete                                          = 3,
	ENCPoolMethod__FreeInPool                                                        = 4,
	ENCPoolMethod__ENCPoolMethod_MAX                                                 = 5
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x03
enum ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize                                          = 0,
	ENDIExport_GPUAllocationMode__PerParticle                                        = 1,
	ENDIExport_GPUAllocationMode__ENDIExport_MAX                                     = 2
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x04
enum ESetResolutionMethod : uint8_t
{
	ESetResolutionMethod__Independent                                                = 0,
	ESetResolutionMethod__MaxAxis                                                    = 1,
	ESetResolutionMethod__CellSize                                                   = 2,
	ESetResolutionMethod__ESetResolutionMethod_MAX                                   = 3
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x05
enum ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid                                           = 255,
	ENDISkeletalMesh_SkinningMode__None                                              = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly                                      = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin                                           = 2,
	ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX                              = 256
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x04
enum ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default                                             = 0,
	ENDISkeletalMesh_SourceMode__Source                                              = 1,
	ENDISkeletalMesh_SourceMode__AttachParent                                        = 2,
	ENDISkeletalMesh_SourceMode__ENDISkeletalMesh_MAX                                = 3
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x05
enum ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default                                               = 0,
	ENDIStaticMesh_SourceMode__Source                                                = 1,
	ENDIStaticMesh_SourceMode__AttachParent                                          = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly                                       = 3,
	ENDIStaticMesh_SourceMode__ENDIStaticMesh_MAX                                    = 4
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x06
enum ENiagaraScalabilityUpdateFrequency : uint8_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly                                    = 0,
	ENiagaraScalabilityUpdateFrequency__Low                                          = 1,
	ENiagaraScalabilityUpdateFrequency__Medium                                       = 2,
	ENiagaraScalabilityUpdateFrequency__High                                         = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous                                   = 4,
	ENiagaraScalabilityUpdateFrequency__ENiagaraScalabilityUpdateFrequency_MAX       = 5
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x05
enum ENiagaraCullReaction : uint8_t
{
	ENiagaraCullReaction__Deactivate                                                 = 0,
	ENiagaraCullReaction__DeactivateImmediate                                        = 1,
	ENiagaraCullReaction__DeactivateResume                                           = 2,
	ENiagaraCullReaction__DeactivateImmediateResume                                  = 3,
	ENiagaraCullReaction__ENiagaraCullReaction_MAX                                   = 4
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x03
enum EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate                                       = 0,
	EParticleAllocationMode__ManualEstimate                                          = 1,
	EParticleAllocationMode__EParticleAllocationMode_MAX                             = 2
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x04
enum EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle                                              = 0,
	EScriptExecutionMode__SpawnedParticles                                           = 1,
	EScriptExecutionMode__SingleParticle                                             = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX                                   = 3
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x06
enum ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None                                                           = 0,
	ENiagaraSortMode__ViewDepth                                                      = 1,
	ENiagaraSortMode__ViewDistance                                                   = 2,
	ENiagaraSortMode__CustomAscending                                                = 3,
	ENiagaraSortMode__CustomDecending                                                = 4,
	ENiagaraSortMode__ENiagaraSortMode_MAX                                           = 5
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x04
enum ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation                                          = 0,
	ENiagaraMeshLockedAxisSpace__World                                               = 1,
	ENiagaraMeshLockedAxisSpace__Local                                               = 2,
	ENiagaraMeshLockedAxisSpace__ENiagaraMeshLockedAxisSpace_MAX                     = 3
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x05
enum ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh                                               = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation                                         = 1,
	ENiagaraMeshPivotOffsetSpace__World                                              = 2,
	ENiagaraMeshPivotOffsetSpace__Local                                              = 3,
	ENiagaraMeshPivotOffsetSpace__ENiagaraMeshPivotOffsetSpace_MAX                   = 4
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x05
enum ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default                                                  = 0,
	ENiagaraMeshFacingMode__Velocity                                                 = 1,
	ENiagaraMeshFacingMode__CameraPosition                                           = 2,
	ENiagaraMeshFacingMode__CameraPlane                                              = 3,
	ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX                               = 4
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x05
enum ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled                                               = 0,
	ENiagaraPlatformSetState__Enabled                                                = 1,
	ENiagaraPlatformSetState__Active                                                 = 2,
	ENiagaraPlatformSetState__Unknown                                                = 3,
	ENiagaraPlatformSetState__ENiagaraPlatformSetState_MAX                           = 4
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x04
enum ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default                                          = 0,
	ENiagaraPlatformSelectionState__Enabled                                          = 1,
	ENiagaraPlatformSelectionState__Disabled                                         = 2,
	ENiagaraPlatformSelectionState__ENiagaraPlatformSelectionState_MAX               = 3
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x04
enum ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never                                              = 0,
	ENiagaraPreviewGridResetMode__Individual                                         = 1,
	ENiagaraPreviewGridResetMode__All                                                = 2,
	ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX                   = 3
};

/// Enum /Script/Niagara.ENiagaraParticleResolutionMode
/// Size: 0x04
enum ENiagaraParticleResolutionMode : uint8_t
{
	ENiagaraParticleResolutionMode__Full                                             = 0,
	ENiagaraParticleResolutionMode__Quarter                                          = 1,
	ENiagaraParticleResolutionMode__Sixteenth                                        = 2,
	ENiagaraParticleResolutionMode__ENiagaraParticleResolutionMode_MAX               = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x04
enum ENiagaraRibbonUVDistributionMode : uint8_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly                                = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength                 = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength                          = 2,
	ENiagaraRibbonUVDistributionMode__ENiagaraRibbonUVDistributionMode_MAX           = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x03
enum ENiagaraRibbonUVEdgeMode : uint8_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition                                       = 0,
	ENiagaraRibbonUVEdgeMode__Locked                                                 = 1,
	ENiagaraRibbonUVEdgeMode__ENiagaraRibbonUVEdgeMode_MAX                           = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x04
enum ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic                                        = 0,
	ENiagaraRibbonTessellationMode__Custom                                           = 1,
	ENiagaraRibbonTessellationMode__Disabled                                         = 2,
	ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX               = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x03
enum ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack                                         = 0,
	ENiagaraRibbonDrawDirection__BackToFront                                         = 1,
	ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX                     = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x03
enum ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale                                               = 0,
	ENiagaraRibbonAgeOffsetMode__Clip                                                = 1,
	ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX                     = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x04
enum ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen                                                 = 0,
	ENiagaraRibbonFacingMode__Custom                                                 = 1,
	ENiagaraRibbonFacingMode__CustomSideVector                                       = 2,
	ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX                           = 3
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x05
enum ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid                                         = 0,
	ENiagaraScriptLibraryVisibility__Unexposed                                       = 1,
	ENiagaraScriptLibraryVisibility__Library                                         = 2,
	ENiagaraScriptLibraryVisibility__Hidden                                          = 3,
	ENiagaraScriptLibraryVisibility__ENiagaraScriptLibraryVisibility_MAX             = 4
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x03
enum ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript                             = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts                             = 1,
	ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX = 2
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x03
enum ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency                                      = 0,
	ENiagaraModuleDependencyType__PostDependency                                     = 1,
	ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX                   = 2
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x06
enum EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy                                                  = 0,
	EUnusedAttributeBehaviour__Zero                                                  = 1,
	EUnusedAttributeBehaviour__None                                                  = 2,
	EUnusedAttributeBehaviour__MarkInvalid                                           = 3,
	EUnusedAttributeBehaviour__PassThrough                                           = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX                         = 5
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x06
enum ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera                                             = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane                                        = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector                                     = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition                                     = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend                                = 4,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX                           = 5
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x04
enum ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned                                               = 0,
	ENiagaraSpriteAlignment__VelocityAligned                                         = 1,
	ENiagaraSpriteAlignment__CustomAlignment                                         = 2,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX                             = 3
};

/// Enum /Script/Niagara.ENiagaraParameterPanelCategory
/// Size: 0x15
enum ENiagaraParameterPanelCategory : uint8_t
{
	ENiagaraParameterPanelCategory__Input                                            = 0,
	ENiagaraParameterPanelCategory__Attributes                                       = 1,
	ENiagaraParameterPanelCategory__Output                                           = 2,
	ENiagaraParameterPanelCategory__Local                                            = 3,
	ENiagaraParameterPanelCategory__User                                             = 4,
	ENiagaraParameterPanelCategory__Engine                                           = 5,
	ENiagaraParameterPanelCategory__Owner                                            = 6,
	ENiagaraParameterPanelCategory__System                                           = 7,
	ENiagaraParameterPanelCategory__Emitter                                          = 8,
	ENiagaraParameterPanelCategory__Particles                                        = 9,
	ENiagaraParameterPanelCategory__ScriptTransient                                  = 10,
	ENiagaraParameterPanelCategory__StaticSwitch                                     = 11,
	ENiagaraParameterPanelCategory__None                                             = 12,
	ENiagaraParameterPanelCategory__Num                                              = 13,
	ENiagaraParameterPanelCategory__ENiagaraParameterPanelCategory_MAX               = 14
};

/// Enum /Script/Niagara.ENiagaraScriptParameterUsage
/// Size: 0x08
enum ENiagaraScriptParameterUsage : uint8_t
{
	ENiagaraScriptParameterUsage__Input                                              = 0,
	ENiagaraScriptParameterUsage__Output                                             = 1,
	ENiagaraScriptParameterUsage__Local                                              = 2,
	ENiagaraScriptParameterUsage__InputOutput                                        = 3,
	ENiagaraScriptParameterUsage__InitialValueInput                                  = 4,
	ENiagaraScriptParameterUsage__None                                               = 5,
	ENiagaraScriptParameterUsage__Num                                                = 6,
	ENiagaraScriptParameterUsage__ENiagaraScriptParameterUsage_MAX                   = 7
};

/// Enum /Script/Niagara.ENiagaraParameterScope
/// Size: 0x16
enum ENiagaraParameterScope : uint8_t
{
	ENiagaraParameterScope__Input                                                    = 0,
	ENiagaraParameterScope__User                                                     = 1,
	ENiagaraParameterScope__Engine                                                   = 2,
	ENiagaraParameterScope__Owner                                                    = 3,
	ENiagaraParameterScope__System                                                   = 4,
	ENiagaraParameterScope__Emitter                                                  = 5,
	ENiagaraParameterScope__Particles                                                = 6,
	ENiagaraParameterScope__ScriptPersistent                                         = 7,
	ENiagaraParameterScope__ScriptTransient                                          = 8,
	ENiagaraParameterScope__Local                                                    = 9,
	ENiagaraParameterScope__Custom                                                   = 10,
	ENiagaraParameterScope__DISPLAY_ONLY_StaticSwitch                                = 11,
	ENiagaraParameterScope__Output                                                   = 12,
	ENiagaraParameterScope__None                                                     = 13,
	ENiagaraParameterScope__Num                                                      = 14,
	ENiagaraParameterScope__ENiagaraParameterScope_MAX                               = 15
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x07
enum ENiagaraExecutionState : uint8_t
{
	ENiagaraExecutionState__Active                                                   = 0,
	ENiagaraExecutionState__Inactive                                                 = 1,
	ENiagaraExecutionState__InactiveClear                                            = 2,
	ENiagaraExecutionState__Complete                                                 = 3,
	ENiagaraExecutionState__Disabled                                                 = 4,
	ENiagaraExecutionState__Num                                                      = 5,
	ENiagaraExecutionState__ENiagaraExecutionState_MAX                               = 6
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x05
enum ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability                                        = 0,
	ENiagaraExecutionStateSource__Internal                                           = 1,
	ENiagaraExecutionStateSource__Owner                                              = 2,
	ENiagaraExecutionStateSource__InternalCompletion                                 = 3,
	ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX                   = 4
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x05
enum ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None                                     = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest                                  = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest                                 = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar                                   = 3,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x05
enum ENiagaraVariantMode : uint8_t
{
	ENiagaraVariantMode__None                                                        = 0,
	ENiagaraVariantMode__Object                                                      = 1,
	ENiagaraVariantMode__DataInterface                                               = 2,
	ENiagaraVariantMode__Bytes                                                       = 3,
	ENiagaraVariantMode__ENiagaraVariantMode_MAX                                     = 4
};

