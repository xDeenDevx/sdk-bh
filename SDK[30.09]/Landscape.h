/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Landscape.

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x0008 (0x000228 - 0x000230)
class AControlPointMeshActor : public AActor
{ 
public:
	UControlPointMeshComponent*                        ControlPointMeshComponent;                                  // 0x0228   (0x0008)  
};

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0010 (0x0004E0 - 0x0004F0)
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
public:
	float                                              VirtualTextureMainPassMaxDrawDistance;                      // 0x04E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x04E4   (0x000C)  MISSED
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x0378 (0x000228 - 0x0005A0)
class ALandscapeProxy : public AActor
{ 
public:
	ULandscapeSplinesComponent*                        SplineComponent;                                            // 0x0228   (0x0008)  
	FGuid                                              LandscapeGuid;                                              // 0x0230   (0x0010)  
	FIntPoint                                          LandscapeSectionOffset;                                     // 0x0240   (0x0008)  
	int32_t                                            MaxLODLevel;                                                // 0x0248   (0x0004)  
	float                                              LODDistanceFactor;                                          // 0x024C   (0x0004)  
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                                 // 0x0250   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0251   (0x0003)  MISSED
	float                                              ComponentScreenSizeToUseSubSections;                        // 0x0254   (0x0004)  
	float                                              LOD0ScreenSize;                                             // 0x0258   (0x0004)  
	float                                              LOD0DistributionSetting;                                    // 0x025C   (0x0004)  
	float                                              LODDistributionSetting;                                     // 0x0260   (0x0004)  
	float                                              TessellationComponentScreenSize;                            // 0x0264   (0x0004)  
	bool                                               UseTessellationComponentScreenSizeFalloff;                  // 0x0268   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0269   (0x0003)  MISSED
	float                                              TessellationComponentScreenSizeFalloff;                     // 0x026C   (0x0004)  
	int32_t                                            OccluderGeometryLOD;                                        // 0x0270   (0x0004)  
	int32_t                                            StaticLightingLOD;                                          // 0x0274   (0x0004)  
	UPhysicalMaterial*                                 DefaultPhysMaterial;                                        // 0x0278   (0x0008)  
	float                                              StreamingDistanceMultiplier;                                // 0x0280   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0284   (0x0004)  MISSED
	UMaterialInterface*                                LandscapeMaterial;                                          // 0x0288   (0x0008)  
	unsigned char                                      UnknownData03_5[0x20];                                      // 0x0290   (0x0020)  MISSED
	UMaterialInterface*                                LandscapeHoleMaterial;                                      // 0x02B0   (0x0008)  
	TArray<FLandscapeProxyMaterialOverride>            LandscapeMaterialsOverride;                                 // 0x02B8   (0x0010)  
	bool                                               bMeshHoles;                                                 // 0x02C8   (0x0001)  
	char                                               MeshHolesMaxLod;                                            // 0x02C9   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x02CA   (0x0006)  MISSED
	TArray<URuntimeVirtualTexture*>                    RuntimeVirtualTextures;                                     // 0x02D0   (0x0010)  
	int32_t                                            VirtualTextureNumLods;                                      // 0x02E0   (0x0004)  
	int32_t                                            VirtualTextureLodBias;                                      // 0x02E4   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x02E9   (0x0003)  MISSED
	float                                              NegativeZBoundsExtension;                                   // 0x02EC   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	TArray<ULandscapeComponent*>                       LandscapeComponents;                                        // 0x02F8   (0x0010)  
	TArray<ULandscapeHeightfieldCollisionComponent*>   CollisionComponents;                                        // 0x0308   (0x0010)  
	TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                          // 0x0318   (0x0010)  
	unsigned char                                      UnknownData07_5[0x64];                                      // 0x0328   (0x0064)  MISSED
	bool                                               bHasLandscapeGrass;                                         // 0x038C   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	float                                              StaticLightingResolution;                                   // 0x0390   (0x0004)  
	bool                                               CastShadow;                                                 // 0x0394:0 (0x0001)  
	bool                                               bCastDynamicShadow;                                         // 0x0394:1 (0x0001)  
	bool                                               bCastStaticShadow;                                          // 0x0394:2 (0x0001)  
	unsigned char                                      UnknownData09_3[0x3];                                       // 0x0395   (0x0003)  MISSED
	bool                                               bCastFarShadow;                                             // 0x0398:0 (0x0001)  
	unsigned char                                      UnknownData10_3[0x3];                                       // 0x0399   (0x0003)  MISSED
	bool                                               bCastHiddenShadow;                                          // 0x039C:0 (0x0001)  
	unsigned char                                      UnknownData11_3[0x3];                                       // 0x039D   (0x0003)  MISSED
	bool                                               bCastShadowAsTwoSided;                                      // 0x03A0:0 (0x0001)  
	unsigned char                                      UnknownData12_3[0x3];                                       // 0x03A1   (0x0003)  MISSED
	bool                                               bAffectDistanceFieldLighting;                               // 0x03A4:0 (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x03A5   (0x0001)  
	unsigned char                                      UnknownData13_5[0x2];                                       // 0x03A6   (0x0002)  MISSED
	bool                                               bUseMaterialPositionOffsetInStaticLighting;                 // 0x03A8:0 (0x0001)  
	bool                                               bRenderCustomDepth;                                         // 0x03A8:1 (0x0001)  
	unsigned char                                      UnknownData14_4[0x3];                                       // 0x03A9   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x03AC   (0x0001)  
	unsigned char                                      UnknownData15_5[0x3];                                       // 0x03AD   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x03B0   (0x0004)  
	float                                              LDMaxDrawDistance;                                          // 0x03B4   (0x0004)  
	FLightmassPrimitiveSettings                        LightmassSettings;                                          // 0x03B8   (0x0018)  
	int32_t                                            CollisionMipLevel;                                          // 0x03D0   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x03D4   (0x0004)  
	float                                              CollisionThickness;                                         // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData16_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x03E0   (0x0158)  
	bool                                               bGenerateOverlapEvents;                                     // 0x0538:0 (0x0001)  
	bool                                               bBakeMaterialPositionOffsetIntoCollision;                   // 0x0538:1 (0x0001)  
	unsigned char                                      UnknownData17_4[0x3];                                       // 0x0539   (0x0003)  MISSED
	int32_t                                            ComponentSizeQuads;                                         // 0x053C   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0540   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0544   (0x0004)  
	bool                                               bUsedForNavigation;                                         // 0x0548:0 (0x0001)  
	bool                                               bFillCollisionUnderLandscapeForNavmesh;                     // 0x0548:1 (0x0001)  
	unsigned char                                      UnknownData18_4[0x3];                                       // 0x0549   (0x0003)  MISSED
	bool                                               bUseDynamicMaterialInstance;                                // 0x054C   (0x0001)  
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                            // 0x054D   (0x0001)  
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;               // 0x054E   (0x0001)  
	bool                                               bHasLayersContent;                                          // 0x054F   (0x0001)  
	TMap<UTexture2D*, ULandscapeWeightmapUsage*>       WeightmapUsageMap;                                          // 0x0550   (0x0050)  


	/// Functions
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                                  // [0x274dbe0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value);                                    // [0x274db10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                         // [0x274da40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	bool LandscapeExportHeightmapToRenderTarget(UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // [0x274d920] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	void EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial);                                               // [0x1509f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline
	void EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName); // [0x274d590] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);                        // [0x274d500] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);                    // [0x274d470] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);                                     // [0x1540190] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
	void ChangeLODDistanceFactor(float InLODDistanceFactor);                                                                 // [0x1496400] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);                             // [0x274d3e0] Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x0000 (0x0005A0 - 0x0005A0)
class ALandscape : public ALandscapeProxy
{ 
public:
};

/// Class /Script/Landscape.LandscapeBlueprintBrushBase
/// Size: 0x0000 (0x000228 - 0x000228)
class ALandscapeBlueprintBrushBase : public AActor
{ 
public:
};

/// Class /Script/Landscape.LandscapeLODStreamingProxy
/// Size: 0x0008 (0x000060 - 0x000068)
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x0220 (0x000450 - 0x000670)
class ULandscapeComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            SectionBaseX;                                               // 0x0450   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x0454   (0x0004)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0458   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x045C   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0460   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0464   (0x0004)  MISSED
	UMaterialInterface*                                OverrideMaterial;                                           // 0x0468   (0x0008)  
	UMaterialInterface*                                OverrideHoleMaterial;                                       // 0x0470   (0x0008)  
	TArray<FLandscapeComponentMaterialOverride>        OverrideMaterials;                                          // 0x0478   (0x0010)  
	TArray<UMaterialInstanceConstant*>                 MaterialInstances;                                          // 0x0488   (0x0010)  
	TArray<UMaterialInstanceDynamic*>                  MaterialInstancesDynamic;                                   // 0x0498   (0x0010)  
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                    // 0x04A8   (0x0010)  
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;                // 0x04B8   (0x0010)  
	UTexture2D*                                        XYOffsetmapTexture;                                         // 0x04C8   (0x0008)  
	FVector4                                           WeightmapScaleBias;                                         // 0x04D0   (0x0010)  
	float                                              WeightmapSubsectionOffset;                                  // 0x04E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x04E4   (0x000C)  MISSED
	FVector4                                           HeightmapScaleBias;                                         // 0x04F0   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x0500   (0x001C)  
	TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent*> CollisionComponent;                                   // 0x051C   (0x001C)  
	UTexture2D*                                        HeightmapTexture;                                           // 0x0538   (0x0008)  
	TArray<FWeightmapLayerAllocationInfo>              WeightmapLayerAllocations;                                  // 0x0540   (0x0010)  
	TArray<UTexture2D*>                                WeightmapTextures;                                          // 0x0550   (0x0010)  
	ULandscapeLODStreamingProxy*                       LODStreamingProxy;                                          // 0x0560   (0x0008)  
	FGuid                                              MapBuildDataId;                                             // 0x0568   (0x0010)  
	TArray<FGuid>                                      IrrelevantLights;                                           // 0x0578   (0x0010)  
	int32_t                                            CollisionMipLevel;                                          // 0x0588   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x058C   (0x0004)  
	float                                              NegativeZBoundsExtension;                                   // 0x0590   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x0594   (0x0004)  
	float                                              StaticLightingResolution;                                   // 0x0598   (0x0004)  
	int32_t                                            ForcedLOD;                                                  // 0x059C   (0x0004)  
	int32_t                                            LODBias;                                                    // 0x05A0   (0x0004)  
	FGuid                                              StateId;                                                    // 0x05A4   (0x0010)  
	FGuid                                              BakedTextureMaterialGuid;                                   // 0x05B4   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x05C4   (0x0004)  MISSED
	UTexture2D*                                        GIBakedBaseColorTexture;                                    // 0x05C8   (0x0008)  
	char                                               MobileBlendableLayerMask;                                   // 0x05D0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x05D1   (0x0007)  MISSED
	UMaterialInterface*                                MobileMaterialInterface;                                    // 0x05D8   (0x0008)  
	TArray<UMaterialInterface*>                        MobileMaterialInterfaces;                                   // 0x05E0   (0x0010)  
	TArray<UTexture2D*>                                MobileWeightmapTextures;                                    // 0x05F0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x70];                                      // 0x0600   (0x0070)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);                                                   // [0x274bc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName);                            // [0x274bb60] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer);                   // [0x274ba80] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x0000 (0x000228 - 0x000228)
class ALandscapeGizmoActor : public AActor
{ 
public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x0050 (0x000228 - 0x000278)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0228   (0x0050)  MISSED
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x0000 (0x000450 - 0x000450)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0038 (0x000028 - 0x000060)
class ULandscapeGrassType : public UObject
{ 
public:
	TArray<FGrassVariety>                              GrassVarieties;                                             // 0x0028   (0x0010)  
	bool                                               bEnableDensityScaling;                                      // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0039   (0x0007)  MISSED
	UStaticMesh*                                       GrassMesh;                                                  // 0x0040   (0x0008)  
	float                                              GrassDensity;                                               // 0x0048   (0x0004)  
	float                                              PlacementJitter;                                            // 0x004C   (0x0004)  
	int32_t                                            StartCullDistance;                                          // 0x0050   (0x0004)  
	int32_t                                            EndCullDistance;                                            // 0x0054   (0x0004)  
	bool                                               RandomRotation;                                             // 0x0058   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x00E0 (0x000450 - 0x000530)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
public:
	TArray<ULandscapeLayerInfoObject*>                 ComponentLayerInfos;                                        // 0x0450   (0x0010)  
	int32_t                                            SectionBaseX;                                               // 0x0460   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x0464   (0x0004)  
	int32_t                                            CollisionSizeQuads;                                         // 0x0468   (0x0004)  
	float                                              CollisionScale;                                             // 0x046C   (0x0004)  
	int32_t                                            SimpleCollisionSizeQuads;                                   // 0x0470   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0474   (0x0004)  MISSED
	TArray<char>                                       CollisionQuadFlags;                                         // 0x0478   (0x0010)  
	FGuid                                              HeightfieldGuid;                                            // 0x0488   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x0498   (0x001C)  
	TLazyObjectPtr<ULandscapeComponent*>               RenderComponent;                                            // 0x04B4   (0x001C)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x04D0   (0x0010)  MISSED
	TArray<UPhysicalMaterial*>                         CookedPhysicalMaterials;                                    // 0x04E0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x04F0   (0x0040)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	ULandscapeComponent* GetRenderComponent();                                                                               // [0x274bce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x01E8 (0x000028 - 0x000210)
class ULandscapeInfo : public UObject
{ 
public:
	TLazyObjectPtr<ALandscape*>                        LandscapeActor;                                             // 0x0028   (0x001C)  
	FGuid                                              LandscapeGuid;                                              // 0x0044   (0x0010)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0054   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0058   (0x0004)  
	int32_t                                            ComponentNumSubsections;                                    // 0x005C   (0x0004)  
	FVector                                            DrawScale;                                                  // 0x0060   (0x000C)  
	unsigned char                                      UnknownData00_5[0xA4];                                      // 0x006C   (0x00A4)  MISSED
	TArray<ALandscapeStreamingProxy*>                  Proxies;                                                    // 0x0110   (0x0010)  
	unsigned char                                      UnknownData01_6[0xF0];                                      // 0x0120   (0x00F0)  MISSED
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0058 (0x000028 - 0x000080)
class ULandscapeInfoMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeLayerInfoObject : public UObject
{ 
public:
	FName                                              LayerName;                                                  // 0x0028   (0x0008)  
	UPhysicalMaterial*                                 PhysMaterial;                                               // 0x0030   (0x0008)  
	float                                              Hardness;                                                   // 0x0038   (0x0004)  
	FLinearColor                                       LayerUsageDebugColor;                                       // 0x003C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x0018 (0x000368 - 0x000380)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
public:
	TArray<FLandscapeMaterialTextureStreamingInfo>     TextureStreamingInfo;                                       // 0x0368   (0x0010)  
	bool                                               bIsLayerThumbnail;                                          // 0x0378:0 (0x0001)  
	bool                                               bDisableTessellation;                                       // 0x0378:1 (0x0001)  
	bool                                               bMobile;                                                    // 0x0378:2 (0x0001)  
	bool                                               bEditorToolUsage;                                           // 0x0378:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0379   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0020 (0x000530 - 0x000550)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
public:
	FGuid                                              MeshGuid;                                                   // 0x0530   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0540   (0x0010)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0008 (0x000228 - 0x000230)
class ALandscapeMeshProxyActor : public AActor
{ 
public:
	ULandscapeMeshProxyComponent*                      LandscapeMeshProxyComponent;                                // 0x0228   (0x0008)  
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0030 (0x0004E0 - 0x000510)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
public:
	FGuid                                              LandscapeGuid;                                              // 0x04E0   (0x0010)  
	TArray<FIntPoint>                                  ProxyComponentBases;                                        // 0x04F0   (0x0010)  
	int8_t                                             ProxyLOD;                                                   // 0x0500   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0501   (0x000F)  MISSED
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class ULandscapeSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            MaxNumberOfLayers;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0030 (0x000450 - 0x000480)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
public:
	TArray<ULandscapeSplineControlPoint*>              ControlPoints;                                              // 0x0450   (0x0010)  
	TArray<ULandscapeSplineSegment*>                   Segments;                                                   // 0x0460   (0x0010)  
	TArray<UMeshComponent*>                            CookedForeignMeshComponents;                                // 0x0470   (0x0010)  


	/// Functions
	// Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	TArray<USplineMeshComponent*> GetSplineMeshComponents();                                                                 // [0x274f7b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x0080 (0x000028 - 0x0000A8)
class ULandscapeSplineControlPoint : public UObject
{ 
public:
	FVector                                            Location;                                                   // 0x0028   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0034   (0x000C)  
	float                                              Width;                                                      // 0x0040   (0x0004)  
	float                                              LayerWidthRatio;                                            // 0x0044   (0x0004)  
	float                                              SideFalloff;                                                // 0x0048   (0x0004)  
	float                                              LeftSideFalloffFactor;                                      // 0x004C   (0x0004)  
	float                                              RightSideFalloffFactor;                                     // 0x0050   (0x0004)  
	float                                              LeftSideLayerFalloffFactor;                                 // 0x0054   (0x0004)  
	float                                              RightSideLayerFalloffFactor;                                // 0x0058   (0x0004)  
	float                                              EndFalloff;                                                 // 0x005C   (0x0004)  
	TArray<FLandscapeSplineConnection>                 ConnectedSegments;                                          // 0x0060   (0x0010)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0070   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0080   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	UControlPointMeshComponent*                        LocalMeshComponent;                                         // 0x00A0   (0x0008)  
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x0088 (0x000028 - 0x0000B0)
class ULandscapeSplineSegment : public UObject
{ 
public:
	FLandscapeSplineSegmentConnection                  Connections;                                                // 0x0028   (0x0030)  
	FInterpCurveVector                                 SplineInfo;                                                 // 0x0058   (0x0018)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0070   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0080   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	TArray<USplineMeshComponent*>                      LocalMeshComponents;                                        // 0x00A0   (0x0010)  
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x0020 (0x0005A0 - 0x0005C0)
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
public:
	TLazyObjectPtr<ALandscape*>                        LandscapeActor;                                             // 0x05A0   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x05BC   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class ULandscapeSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightmapUsage : public UObject
{ 
public:
	ULandscapeComponent*                               ChannelUsage;                                               // 0x0028   (0x0020)  
	FGuid                                              LayerGuid;                                                  // 0x0048   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0010 (0x000040 - 0x000050)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FGrassInput>                                GrassTypes;                                                 // 0x0040   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0020 (0x000040 - 0x000060)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
public:
	TArray<FLayerBlendInput>                           Layers;                                                     // 0x0040   (0x0010)  
	FGuid                                              ExpressionGUID;                                             // 0x0050   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0018 (0x000040 - 0x000058)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                                // 0x0040   (0x0001)  
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                               // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              MappingScale;                                               // 0x0044   (0x0004)  
	float                                              MappingRotation;                                            // 0x0048   (0x0004)  
	float                                              MappingPanU;                                                // 0x004C   (0x0004)  
	float                                              MappingPanV;                                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x0020 (0x000040 - 0x000060)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{ 
public:
	FName                                              ParameterName;                                              // 0x0040   (0x0008)  
	float                                              PreviewWeight;                                              // 0x0048   (0x0004)  
	FGuid                                              ExpressionGUID;                                             // 0x004C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0048 (0x000040 - 0x000088)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
public:
	FExpressionInput                                   LayerUsed;                                                  // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x004C   (0x0008)  MISSED
	FExpressionInput                                   LayerNotUsed;                                               // 0x0054   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0060   (0x0008)  MISSED
	FName                                              ParameterName;                                              // 0x0068   (0x0008)  
	bool                                               PreviewUsed;                                                // 0x0070:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0071   (0x0003)  MISSED
	FGuid                                              ExpressionGUID;                                             // 0x0074   (0x0010)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0050 (0x000040 - 0x000090)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Base;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x004C   (0x0008)  MISSED
	FExpressionInput                                   Layer;                                                      // 0x0054   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0060   (0x0008)  MISSED
	FName                                              ParameterName;                                              // 0x0068   (0x0008)  
	float                                              PreviewWeight;                                              // 0x0070   (0x0004)  
	FVector                                            ConstBase;                                                  // 0x0074   (0x000C)  
	FGuid                                              ExpressionGUID;                                             // 0x0080   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
/// Size: 0x0010 (0x000040 - 0x000050)
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FPhysicalMaterialInput>                     Inputs;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x0010 (0x000040 - 0x000050)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{ 
public:
	FGuid                                              ExpressionGUID;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0088 (0x000000 - 0x000088)
struct FLandscapeLayer
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	bool                                               bVisible;                                                   // 0x0018   (0x0001)  
	bool                                               bLocked;                                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              HeightmapAlpha;                                             // 0x001C   (0x0004)  
	float                                              WeightmapAlpha;                                             // 0x0020   (0x0004)  
	TEnumAsByte<ELandscapeBlendMode>                   BlendMode;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	TArray<FLandscapeLayerBrush>                       Brushes;                                                    // 0x0028   (0x0010)  
	TMap<ULandscapeLayerInfoObject*, bool>             WeightmapLayerAllocationBlend;                              // 0x0038   (0x0050)  
};

/// Struct /Script/Landscape.LandscapeLayerBrush
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeLayerBrush
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLandscapeLayerComponentData
{ 
	FHeightmapData                                     HeightmapData;                                              // 0x0000   (0x0008)  
	FWeightmapData                                     WeightmapData;                                              // 0x0008   (0x0030)  
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FWeightmapData
{ 
	TArray<UTexture2D*>                                Textures;                                                   // 0x0000   (0x0010)  
	TArray<FWeightmapLayerAllocationInfo>              LayerAllocations;                                           // 0x0010   (0x0010)  
	TArray<ULandscapeWeightmapUsage*>                  TextureUsages;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWeightmapLayerAllocationInfo
{ 
	ULandscapeLayerInfoObject*                         LayerInfo;                                                  // 0x0000   (0x0008)  
	char                                               WeightmapTextureIndex;                                      // 0x0008   (0x0001)  
	char                                               WeightmapTextureChannel;                                    // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FHeightmapData
{ 
	UTexture2D*                                        Texture;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeComponentMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UMaterialInterface*                                Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLandscapeEditToolRenderData
{ 
	UMaterialInterface*                                ToolMaterial;                                               // 0x0000   (0x0008)  
	UMaterialInterface*                                GizmoMaterial;                                              // 0x0008   (0x0008)  
	int32_t                                            SelectedType;                                               // 0x0010   (0x0004)  
	int32_t                                            DebugChannelR;                                              // 0x0014   (0x0004)  
	int32_t                                            DebugChannelG;                                              // 0x0018   (0x0004)  
	int32_t                                            DebugChannelB;                                              // 0x001C   (0x0004)  
	UTexture2D*                                        DataTexture;                                                // 0x0020   (0x0008)  
	UTexture2D*                                        LayerContributionTexture;                                   // 0x0028   (0x0008)  
	UTexture2D*                                        DirtyTexture;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGizmoSelectData
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x0058 (0x000000 - 0x000058)
struct FGrassVariety
{ 
	UStaticMesh*                                       GrassMesh;                                                  // 0x0000   (0x0008)  
	TArray<UMaterialInterface*>                        OverrideMaterials;                                          // 0x0008   (0x0010)  
	FPerPlatformFloat                                  GrassDensity;                                               // 0x0018   (0x0004)  
	bool                                               bUseGrid;                                                   // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              PlacementJitter;                                            // 0x0020   (0x0004)  
	FPerPlatformInt                                    StartCullDistance;                                          // 0x0024   (0x0004)  
	FPerPlatformInt                                    EndCullDistance;                                            // 0x0028   (0x0004)  
	int32_t                                            MinLOD;                                                     // 0x002C   (0x0004)  
	EGrassScaling                                      Scaling;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0034   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x003C   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0044   (0x0008)  
	bool                                               RandomRotation;                                             // 0x004C   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x004D   (0x0001)  
	bool                                               bUseLandscapeLightmap;                                      // 0x004E   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x004F   (0x0001)  
	bool                                               bReceivesDecals;                                            // 0x0050   (0x0001)  
	bool                                               bCastDynamicShadow;                                         // 0x0051   (0x0001)  
	bool                                               bKeepInstanceBufferCPUCopy;                                 // 0x0052   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x0053   (0x0005)  MISSED
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeInfoLayerSettings
{ 
	ULandscapeLayerInfoObject*                         LayerInfoObj;                                               // 0x0000   (0x0008)  
	FName                                              LayerName;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLandscapeMaterialTextureStreamingInfo
{ 
	FName                                              TextureName;                                                // 0x0000   (0x0008)  
	float                                              TexelFactor;                                                // 0x0008   (0x0004)  
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeProxyMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UMaterialInterface*                                Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeImportLayerInfo
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLandscapeLayerStruct
{ 
	ULandscapeLayerInfoObject*                         LayerInfoObj;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeEditorLayerSettings
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeSplineConnection
{ 
	ULandscapeSplineSegment*                           Segment;                                                    // 0x0000   (0x0008)  
	bool                                               End;                                                        // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignWorldSplineData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignSplineSegmentData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignControlPointData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLandscapeSplineMeshEntry
{ 
	UStaticMesh*                                       Mesh;                                                       // 0x0000   (0x0008)  
	TArray<UMaterialInterface*>                        MaterialOverrides;                                          // 0x0008   (0x0010)  
	bool                                               bCenterH;                                                   // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0019   (0x0003)  MISSED
	FVector2D                                          CenterAdjust;                                               // 0x001C   (0x0008)  
	bool                                               bScaleToWidth;                                              // 0x0024:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0028   (0x000C)  
	TEnumAsByte<LandscapeSplineMeshOrientation>        Orientation;                                                // 0x0034   (0x0001)  
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                                // 0x0035   (0x0001)  
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                     // 0x0036   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x0037   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLandscapeSplineSegmentConnection
{ 
	ULandscapeSplineControlPoint*                      ControlPoint;                                               // 0x0000   (0x0008)  
	float                                              TangentLen;                                                 // 0x0008   (0x0004)  
	FName                                              SocketName;                                                 // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x0070 (0x000000 - 0x000070)
struct FLandscapeSplineInterpPoint
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	FVector                                            Left;                                                       // 0x000C   (0x000C)  
	FVector                                            Right;                                                      // 0x0018   (0x000C)  
	FVector                                            FalloffLeft;                                                // 0x0024   (0x000C)  
	FVector                                            FalloffRight;                                               // 0x0030   (0x000C)  
	FVector                                            LayerLeft;                                                  // 0x003C   (0x000C)  
	FVector                                            LayerRight;                                                 // 0x0048   (0x000C)  
	FVector                                            LayerFalloffLeft;                                           // 0x0054   (0x000C)  
	FVector                                            LayerFalloffRight;                                          // 0x0060   (0x000C)  
	float                                              StartEndFalloff;                                            // 0x006C   (0x0004)  
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGrassInput
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	ULandscapeGrassType*                               GrassType;                                                  // 0x0008   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x001C   (0x000C)  MISSED
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0048 (0x000000 - 0x000048)
struct FLayerBlendInput
{ 
	FName                                              LayerName;                                                  // 0x0000   (0x0008)  
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FExpressionInput                                   LayerInput;                                                 // 0x000C   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FExpressionInput                                   HeightInput;                                                // 0x0020   (0x000C)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x002C   (0x0008)  MISSED
	float                                              PreviewWeight;                                              // 0x0034   (0x0004)  
	FVector                                            ConstLayerInput;                                            // 0x0038   (0x000C)  
	float                                              ConstHeightInput;                                           // 0x0044   (0x0004)  
};

/// Struct /Script/Landscape.PhysicalMaterialInput
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPhysicalMaterialInput
{ 
	UPhysicalMaterial*                                 PhysicalMaterial;                                           // 0x0000   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Enum /Script/Landscape.ELandscapeBlendMode
/// Size: 0x03
enum ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend                                                               = 0,
	LSBM_AlphaBlend                                                                  = 1,
	LSBM_MAX                                                                         = 2
};

/// Enum /Script/Landscape.ELandscapeSetupErrors
/// Size: 0x05
enum ELandscapeSetupErrors : uint8_t
{
	LSE_None                                                                         = 0,
	LSE_NoLandscapeInfo                                                              = 1,
	LSE_CollsionXY                                                                   = 2,
	LSE_NoLayerInfo                                                                  = 3,
	LSE_MAX                                                                          = 4
};

/// Enum /Script/Landscape.ELandscapeClearMode
/// Size: 0x04
enum ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                                                                  = 1,
	Clear_Heightmap                                                                  = 2,
	Clear_All                                                                        = 3,
	Clear_MAX                                                                        = 4
};

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x04
enum ELandscapeGizmoType : uint8_t
{
	LGT_None                                                                         = 0,
	LGT_Height                                                                       = 1,
	LGT_Weight                                                                       = 2,
	LGT_MAX                                                                          = 3
};

/// Enum /Script/Landscape.EGrassScaling
/// Size: 0x04
enum EGrassScaling : uint8_t
{
	EGrassScaling__Uniform                                                           = 0,
	EGrassScaling__Free                                                              = 1,
	EGrassScaling__LockXY                                                            = 2,
	EGrassScaling__EGrassScaling_MAX                                                 = 3
};

/// Enum /Script/Landscape.ESplineModulationColorMask
/// Size: 0x05
enum ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red                                                  = 0,
	ESplineModulationColorMask__Green                                                = 1,
	ESplineModulationColorMask__Blue                                                 = 2,
	ESplineModulationColorMask__Alpha                                                = 3,
	ESplineModulationColorMask__ESplineModulationColorMask_MAX                       = 4
};

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x03
enum ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear                                                     = 0,
	ELandscapeLODFalloff__SquareRoot                                                 = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX                                   = 2
};

/// Enum /Script/Landscape.ELandscapeLayerDisplayMode
/// Size: 0x04
enum ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default                                              = 0,
	ELandscapeLayerDisplayMode__Alphabetical                                         = 1,
	ELandscapeLayerDisplayMode__UserSpecific                                         = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX                       = 3
};

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x05
enum ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None                                         = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers                                 = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly                                 = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist                        = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX       = 4
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x03
enum ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive                                           = 0,
	ELandscapeImportAlphamapType__Layered                                            = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX                   = 2
};

/// Enum /Script/Landscape.LandscapeSplineMeshOrientation
/// Size: 0x03
enum LandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                                                                         = 0,
	LSMO_YUp                                                                         = 1,
	LSMO_MAX                                                                         = 2
};

/// Enum /Script/Landscape.ELandscapeLayerBlendType
/// Size: 0x04
enum ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                                                                   = 0,
	LB_AlphaBlend                                                                    = 1,
	LB_HeightBlend                                                                   = 2,
	LB_MAX                                                                           = 3
};

/// Enum /Script/Landscape.ELandscapeCustomizedCoordType
/// Size: 0x06
enum ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                                                                        = 0,
	LCCT_CustomUV0                                                                   = 1,
	LCCT_CustomUV1                                                                   = 2,
	LCCT_CustomUV2                                                                   = 3,
	LCCT_WeightMapUV                                                                 = 4,
	LCCT_MAX                                                                         = 5
};

/// Enum /Script/Landscape.ETerrainCoordMappingType
/// Size: 0x05
enum ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                                                                        = 0,
	TCMT_XY                                                                          = 1,
	TCMT_XZ                                                                          = 2,
	TCMT_YZ                                                                          = 3,
	TCMT_MAX                                                                         = 4
};

