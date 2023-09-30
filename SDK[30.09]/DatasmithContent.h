/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DatasmithContent.

/// Class /Script/DatasmithContent.DatasmithObjectTemplate
/// Size: 0x0008 (0x000028 - 0x000030)
class UDatasmithObjectTemplate : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithActorTemplate
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	TSet<FName>                                        Layers;                                                     // 0x0030   (0x0050)  
	TSet<FName>                                        Tags;                                                       // 0x0080   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithAdditionalData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithAdditionalData : public UObject
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActor
/// Size: 0x0058 (0x000228 - 0x000280)
class ADatasmithAreaLightActor : public AActor
{ 
public:
	EDatasmithAreaLightActorType                       LightType;                                                  // 0x0228   (0x0001)  
	EDatasmithAreaLightActorShape                      LightShape;                                                 // 0x0229   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x022A   (0x0002)  MISSED
	FVector2D                                          Dimensions;                                                 // 0x022C   (0x0008)  
	float                                              Intensity;                                                  // 0x0234   (0x0004)  
	ELightUnits                                        IntensityUnits;                                             // 0x0238   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0239   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x023C   (0x0010)  
	float                                              Temperature;                                                // 0x024C   (0x0004)  
	UTextureLightProfile*                              IESTexture;                                                 // 0x0250   (0x0008)  
	bool                                               bUseIESBrightness;                                          // 0x0258   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0259   (0x0003)  MISSED
	float                                              IESBrightnessScale;                                         // 0x025C   (0x0004)  
	FRotator                                           Rotation;                                                   // 0x0260   (0x000C)  
	float                                              SourceRadius;                                               // 0x026C   (0x0004)  
	float                                              SourceLength;                                               // 0x0270   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x0274   (0x0004)  
	float                                              SpotlightInnerAngle;                                        // 0x0278   (0x0004)  
	float                                              SpotlightOuterAngle;                                        // 0x027C   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActorTemplate
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	EDatasmithAreaLightActorType                       LightType;                                                  // 0x0030   (0x0001)  
	EDatasmithAreaLightActorShape                      LightShape;                                                 // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	FVector2D                                          Dimensions;                                                 // 0x0034   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x003C   (0x0010)  
	float                                              Intensity;                                                  // 0x004C   (0x0004)  
	ELightUnits                                        IntensityUnits;                                             // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              Temperature;                                                // 0x0054   (0x0004)  
	TWeakObjectPtr<UTextureLightProfile*>              IESTexture;                                                 // 0x0058   (0x0028)  
	bool                                               bUseIESBrightness;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              IESBrightnessScale;                                         // 0x0084   (0x0004)  
	FRotator                                           Rotation;                                                   // 0x0088   (0x000C)  
	float                                              SourceRadius;                                               // 0x0094   (0x0004)  
	float                                              SourceLength;                                               // 0x0098   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x009C   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithAssetImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithAssetImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshCADImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithSceneImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithSceneImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithTranslatedSceneImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithCADImportSceneData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithMDLSceneImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithGLTFSceneImportData
/// Size: 0x0048 (0x000028 - 0x000070)
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{ 
public:
	FString                                            Generator;                                                  // 0x0028   (0x0010)  
	float                                              Version;                                                    // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            Author;                                                     // 0x0040   (0x0010)  
	FString                                            License;                                                    // 0x0050   (0x0010)  
	FString                                            Source;                                                     // 0x0060   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshGLTFImportData
/// Size: 0x0010 (0x000028 - 0x000038)
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{ 
public:
	FString                                            SourceMeshName;                                             // 0x0028   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithFBXSceneImportData
/// Size: 0x0020 (0x000028 - 0x000048)
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{ 
public:
	bool                                               bGenerateLightmapUVs;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            TexturesDir;                                                // 0x0030   (0x0010)  
	char                                               IntermediateSerialization;                                  // 0x0040   (0x0001)  
	bool                                               bColorizeMaterials;                                         // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenAssetImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenSceneImportData
/// Size: 0x0048 (0x000048 - 0x000090)
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{ 
public:
	bool                                               bMergeNodes;                                                // 0x0048   (0x0001)  
	bool                                               bOptimizeDuplicatedNodes;                                   // 0x0049   (0x0001)  
	bool                                               bRemoveInvisibleNodes;                                      // 0x004A   (0x0001)  
	bool                                               bSimplifyNodeHierarchy;                                     // 0x004B   (0x0001)  
	bool                                               bImportVar;                                                 // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FString                                            VarPath;                                                    // 0x0050   (0x0010)  
	bool                                               bImportPos;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	FString                                            PosPath;                                                    // 0x0068   (0x0010)  
	bool                                               bImportTml;                                                 // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	FString                                            TmlPath;                                                    // 0x0080   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithVREDAssetImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithVREDSceneImportData
/// Size: 0x0060 (0x000048 - 0x0000A8)
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{ 
public:
	bool                                               bMergeNodes;                                                // 0x0048   (0x0001)  
	bool                                               bOptimizeDuplicatedNodes;                                   // 0x0049   (0x0001)  
	bool                                               bImportMats;                                                // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x004B   (0x0005)  MISSED
	FString                                            MatsPath;                                                   // 0x0050   (0x0010)  
	bool                                               bImportVar;                                                 // 0x0060   (0x0001)  
	bool                                               bCleanVar;                                                  // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0062   (0x0006)  MISSED
	FString                                            VarPath;                                                    // 0x0068   (0x0010)  
	bool                                               bImportLightInfo;                                           // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	FString                                            LightInfoPath;                                              // 0x0080   (0x0010)  
	bool                                               bImportClipInfo;                                            // 0x0090   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	FString                                            ClipInfoPath;                                               // 0x0098   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithIFCSceneImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshIFCImportData
/// Size: 0x0010 (0x000028 - 0x000038)
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{ 
public:
	FString                                            SourceGlobalId;                                             // 0x0028   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithAssetUserData
/// Size: 0x0050 (0x000028 - 0x000078)
class UDatasmithAssetUserData : public UAssetUserData
{ 
public:
	TMap<FName, FString>                               MetaData;                                                   // 0x0028   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithCineCameraActorTemplate
/// Size: 0x0030 (0x000030 - 0x000060)
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithCameraLookatTrackingSettingsTemplate     LookatTrackingSettings;                                     // 0x0030   (0x0030)  
};

/// Class /Script/DatasmithContent.DatasmithCineCameraComponentTemplate
/// Size: 0x0060 (0x000030 - 0x000090)
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithCameraFilmbackSettingsTemplate           FilmbackSettings;                                           // 0x0030   (0x0008)  
	FDatasmithCameraLensSettingsTemplate               LensSettings;                                               // 0x0038   (0x0004)  
	FDatasmithCameraFocusSettingsTemplate              FocusSettings;                                              // 0x003C   (0x0008)  
	float                                              CurrentFocalLength;                                         // 0x0044   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FDatasmithPostProcessSettingsTemplate              PostProcessSettings;                                        // 0x0050   (0x0040)  
};

/// Class /Script/DatasmithContent.DatasmithContentBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithCustomActionBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UDatasmithCustomActionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithDecalComponentTemplate
/// Size: 0x0018 (0x000030 - 0x000048)
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	int32_t                                            SortOrder;                                                  // 0x0030   (0x0004)  
	FVector                                            DecalSize;                                                  // 0x0034   (0x000C)  
	UMaterialInterface*                                Material;                                                   // 0x0040   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithImportedSequencesActor
/// Size: 0x0010 (0x000228 - 0x000238)
class ADatasmithImportedSequencesActor : public AActor
{ 
public:
	TArray<ULevelSequence*>                            ImportedSequences;                                          // 0x0228   (0x0010)  


	/// Functions
	// Function /Script/DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
	void PlayLevelSequence(ULevelSequence* SequenceToPlay);                                                                  // [0xda0670] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DatasmithContent.DatasmithOptionsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithOptionsBase : public UObject
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithCommonTessellationOptions
/// Size: 0x0010 (0x000028 - 0x000038)
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{ 
public:
	FDatasmithTessellationOptions                      Options;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithImportOptions
/// Size: 0x0050 (0x000028 - 0x000078)
class UDatasmithImportOptions : public UDatasmithOptionsBase
{ 
public:
	EDatasmithImportSearchPackagePolicy                SearchPackagePolicy;                                        // 0x0028   (0x0001)  
	EDatasmithImportAssetConflictPolicy                MaterialConflictPolicy;                                     // 0x0029   (0x0001)  
	EDatasmithImportAssetConflictPolicy                TextureConflictPolicy;                                      // 0x002A   (0x0001)  
	EDatasmithImportActorPolicy                        StaticMeshActorImportPolicy;                                // 0x002B   (0x0001)  
	EDatasmithImportActorPolicy                        LightImportPolicy;                                          // 0x002C   (0x0001)  
	EDatasmithImportActorPolicy                        CameraImportPolicy;                                         // 0x002D   (0x0001)  
	EDatasmithImportActorPolicy                        OtherActorImportPolicy;                                     // 0x002E   (0x0001)  
	EDatasmithImportMaterialQuality                    MaterialQuality;                                            // 0x002F   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0030   (0x0004)  MISSED
	FDatasmithImportBaseOptions                        BaseOptions;                                                // 0x0034   (0x0014)  
	FDatasmithReimportOptions                          ReimportOptions;                                            // 0x0048   (0x0002)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x004A   (0x0006)  MISSED
	FString                                            Filename;                                                   // 0x0050   (0x0010)  
	FString                                            FilePath;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithLandscapeTemplate
/// Size: 0x0010 (0x000030 - 0x000040)
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{ 
public:
	UMaterialInterface*                                LandscapeMaterial;                                          // 0x0030   (0x0008)  
	int32_t                                            StaticLightingLOD;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithLightComponentTemplate
/// Size: 0x0038 (0x000030 - 0x000068)
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	bool                                               bVisible;                                                   // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0031   (0x0003)  MISSED
	bool                                               CastShadows;                                                // 0x0034:0 (0x0001)  
	bool                                               bUseTemperature;                                            // 0x0034:1 (0x0001)  
	bool                                               bUseIESBrightness;                                          // 0x0034:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              Intensity;                                                  // 0x0038   (0x0004)  
	float                                              Temperature;                                                // 0x003C   (0x0004)  
	float                                              IESBrightnessScale;                                         // 0x0040   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x0044   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	UMaterialInterface*                                LightFunctionMaterial;                                      // 0x0058   (0x0008)  
	UTextureLightProfile*                              IESTexture;                                                 // 0x0060   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithMaterialInstanceTemplate
/// Size: 0x0168 (0x000030 - 0x000198)
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{ 
public:
	TWeakObjectPtr<UMaterialInterface*>                ParentMaterial;                                             // 0x0030   (0x0028)  
	TMap<FName, float>                                 ScalarParameterValues;                                      // 0x0058   (0x0050)  
	TMap<FName, FLinearColor>                          VectorParameterValues;                                      // 0x00A8   (0x0050)  
	TMap<FName, TWeakObjectPtr>                        TextureParameterValues;                                     // 0x00F8   (0x0050)  
	FDatasmithStaticParameterSetTemplate               StaticParameters;                                           // 0x0148   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithPointLightComponentTemplate
/// Size: 0x0010 (0x000030 - 0x000040)
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	ELightUnits                                        IntensityUnits;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SourceRadius;                                               // 0x0034   (0x0004)  
	float                                              SourceLength;                                               // 0x0038   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x003C   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithPostProcessVolumeTemplate
/// Size: 0x0050 (0x000030 - 0x000080)
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithPostProcessSettingsTemplate              Settings;                                                   // 0x0030   (0x0040)  
	bool                                               bEnabled;                                                   // 0x0070:0 (0x0001)  
	bool                                               bUnbound;                                                   // 0x0070:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithScene
/// Size: 0x0008 (0x000028 - 0x000030)
class UDatasmithScene : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithSceneActor
/// Size: 0x0058 (0x000228 - 0x000280)
class ADatasmithSceneActor : public AActor
{ 
public:
	UDatasmithScene*                                   Scene;                                                      // 0x0228   (0x0008)  
	TMap<FName, TWeakObjectPtr>                        RelatedActors;                                              // 0x0230   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithSceneComponentTemplate
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	FTransform                                         RelativeTransform;                                          // 0x0030   (0x0030)  
	TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	TWeakObjectPtr<USceneComponent*>                   AttachParent;                                               // 0x0068   (0x0028)  
	bool                                               bVisible;                                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	TSet<FName>                                        Tags;                                                       // 0x0098   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithSkyLightComponentTemplate
/// Size: 0x0010 (0x000030 - 0x000040)
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	TEnumAsByte<ESkyLightSourceType>                   SourceType;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            CubemapResolution;                                          // 0x0034   (0x0004)  
	UTextureCube*                                      Cubemap;                                                    // 0x0038   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithSpotLightComponentTemplate
/// Size: 0x0008 (0x000030 - 0x000038)
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	float                                              InnerConeAngle;                                             // 0x0030   (0x0004)  
	float                                              OuterConeAngle;                                             // 0x0034   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshComponentTemplate
/// Size: 0x0018 (0x000030 - 0x000048)
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	UStaticMesh*                                       StaticMesh;                                                 // 0x0030   (0x0008)  
	TArray<UMaterialInterface*>                        OverrideMaterials;                                          // 0x0038   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshTemplate
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithMeshSectionInfoMapTemplate               SectionInfoMap;                                             // 0x0030   (0x0050)  
	int32_t                                            LightMapCoordinateIndex;                                    // 0x0080   (0x0004)  
	int32_t                                            LightMapResolution;                                         // 0x0084   (0x0004)  
	TArray<FDatasmithMeshBuildSettingsTemplate>        BuildSettings;                                              // 0x0088   (0x0010)  
	TArray<FDatasmithStaticMaterialTemplate>           StaticMaterials;                                            // 0x0098   (0x0010)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDatasmithCameraLookatTrackingSettingsTemplate
{ 
	bool                                               bEnableLookAtTracking;                                      // 0x0000:0 (0x0001)  
	bool                                               bAllowRoll;                                                 // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0001   (0x0007)  MISSED
	TWeakObjectPtr<AActor*>                            ActorToTrack;                                               // 0x0008   (0x0028)  
};

/// Struct /Script/DatasmithContent.DatasmithPostProcessSettingsTemplate
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDatasmithPostProcessSettingsTemplate
{ 
	bool                                               bOverride_WhiteTemp;                                        // 0x0000:0 (0x0001)  
	bool                                               bOverride_ColorSaturation;                                  // 0x0000:1 (0x0001)  
	bool                                               bOverride_VignetteIntensity;                                // 0x0000:2 (0x0001)  
	bool                                               bOverride_FilmWhitePoint;                                   // 0x0000:3 (0x0001)  
	bool                                               bOverride_AutoExposureMethod;                               // 0x0000:4 (0x0001)  
	bool                                               bOverride_CameraISO;                                        // 0x0000:5 (0x0001)  
	bool                                               bOverride_CameraShutterSpeed;                               // 0x0000:6 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	bool                                               bOverride_DepthOfFieldFstop;                                // 0x0004:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              WhiteTemp;                                                  // 0x0008   (0x0004)  
	float                                              VignetteIntensity;                                          // 0x000C   (0x0004)  
	FLinearColor                                       FilmWhitePoint;                                             // 0x0010   (0x0010)  
	FVector4                                           ColorSaturation;                                            // 0x0020   (0x0010)  
	TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              CameraISO;                                                  // 0x0034   (0x0004)  
	float                                              CameraShutterSpeed;                                         // 0x0038   (0x0004)  
	float                                              DepthOfFieldFstop;                                          // 0x003C   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraFocusSettingsTemplate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDatasmithCameraFocusSettingsTemplate
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraLensSettingsTemplate
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDatasmithCameraLensSettingsTemplate
{ 
	float                                              MaxFStop;                                                   // 0x0000   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDatasmithCameraFilmbackSettingsTemplate
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithTessellationOptions
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDatasmithTessellationOptions
{ 
	float                                              ChordTolerance;                                             // 0x0000   (0x0004)  
	float                                              MaxEdgeLength;                                              // 0x0004   (0x0004)  
	float                                              NormalTolerance;                                            // 0x0008   (0x0004)  
	EDatasmithCADStitchingTechnique                    StitchingTechnique;                                         // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/DatasmithContent.DatasmithRetessellationOptions
/// Size: 0x0004 (0x000010 - 0x000014)
struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions
{ 
	EDatasmithCADRetessellationRule                    RetessellationRule;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/DatasmithContent.DatasmithImportBaseOptions
/// Size: 0x0014 (0x000000 - 0x000014)
struct FDatasmithImportBaseOptions
{ 
	EDatasmithImportScene                              SceneHandling;                                              // 0x0000   (0x0001)  
	bool                                               bIncludeGeometry;                                           // 0x0001   (0x0001)  
	bool                                               bIncludeMaterial;                                           // 0x0002   (0x0001)  
	bool                                               bIncludeLight;                                              // 0x0003   (0x0001)  
	bool                                               bIncludeCamera;                                             // 0x0004   (0x0001)  
	bool                                               bIncludeAnimation;                                          // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FDatasmithAssetImportOptions                       AssetOptions;                                               // 0x0008   (0x0008)  
	FDatasmithStaticMeshImportOptions                  StaticMeshOptions;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticMeshImportOptions
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDatasmithStaticMeshImportOptions
{ 
	EDatasmithImportLightmapMin                        MinLightmapResolution;                                      // 0x0000   (0x0001)  
	EDatasmithImportLightmapMax                        MaxLightmapResolution;                                      // 0x0001   (0x0001)  
	bool                                               bGenerateLightmapUVs;                                       // 0x0002   (0x0001)  
	bool                                               bRemoveDegenerates;                                         // 0x0003   (0x0001)  
};

/// Struct /Script/DatasmithContent.DatasmithAssetImportOptions
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDatasmithAssetImportOptions
{ 
	FName                                              PackagePath;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/DatasmithContent.DatasmithReimportOptions
/// Size: 0x0002 (0x000000 - 0x000002)
struct FDatasmithReimportOptions
{ 
	bool                                               bUpdateActors;                                              // 0x0000   (0x0001)  
	bool                                               bRespawnDeletedActors;                                      // 0x0001   (0x0001)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticParameterSetTemplate
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDatasmithStaticParameterSetTemplate
{ 
	TMap<FName, bool>                                  StaticSwitchParameters;                                     // 0x0000   (0x0050)  
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoMapTemplate
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDatasmithMeshSectionInfoMapTemplate
{ 
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate>  Map;                                                        // 0x0000   (0x0050)  
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoTemplate
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDatasmithMeshSectionInfoTemplate
{ 
	int32_t                                            MaterialIndex;                                              // 0x0000   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticMaterialTemplate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDatasmithStaticMaterialTemplate
{ 
	FName                                              MaterialSlotName;                                           // 0x0000   (0x0008)  
	UMaterialInterface*                                MaterialInterface;                                          // 0x0008   (0x0008)  
};

/// Struct /Script/DatasmithContent.DatasmithMeshBuildSettingsTemplate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDatasmithMeshBuildSettingsTemplate
{ 
	bool                                               bUseMikkTSpace;                                             // 0x0000:0 (0x0001)  
	bool                                               bRecomputeNormals;                                          // 0x0000:1 (0x0001)  
	bool                                               bRecomputeTangents;                                         // 0x0000:2 (0x0001)  
	bool                                               bRemoveDegenerates;                                         // 0x0000:3 (0x0001)  
	bool                                               bBuildAdjacencyBuffer;                                      // 0x0000:4 (0x0001)  
	bool                                               bUseHighPrecisionTangentBasis;                              // 0x0000:5 (0x0001)  
	bool                                               bUseFullPrecisionUVs;                                       // 0x0000:6 (0x0001)  
	bool                                               bGenerateLightmapUVs;                                       // 0x0000:7 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MinLightmapResolution;                                      // 0x0004   (0x0004)  
	int32_t                                            SrcLightmapIndex;                                           // 0x0008   (0x0004)  
	int32_t                                            DstLightmapIndex;                                           // 0x000C   (0x0004)  
};

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorType
/// Size: 0x04
enum EDatasmithAreaLightActorType : uint8_t
{
	EDatasmithAreaLightActorType__Point                                              = 0,
	EDatasmithAreaLightActorType__Spot                                               = 1,
	EDatasmithAreaLightActorType__Rect                                               = 2,
	EDatasmithAreaLightActorType__EDatasmithAreaLightActorType_MAX                   = 3
};

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorShape
/// Size: 0x06
enum EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle                                         = 0,
	EDatasmithAreaLightActorShape__Disc                                              = 1,
	EDatasmithAreaLightActorShape__Sphere                                            = 2,
	EDatasmithAreaLightActorShape__Cylinder                                          = 3,
	EDatasmithAreaLightActorShape__None                                              = 4,
	EDatasmithAreaLightActorShape__EDatasmithAreaLightActorShape_MAX                 = 5
};

/// Enum /Script/DatasmithContent.EDatasmithCADRetessellationRule
/// Size: 0x03
enum EDatasmithCADRetessellationRule : uint8_t
{
	EDatasmithCADRetessellationRule__All                                             = 0,
	EDatasmithCADRetessellationRule__SkipDeletedSurfaces                             = 1,
	EDatasmithCADRetessellationRule__EDatasmithCADRetessellationRule_MAX             = 2
};

/// Enum /Script/DatasmithContent.EDatasmithCADStitchingTechnique
/// Size: 0x04
enum EDatasmithCADStitchingTechnique : uint8_t
{
	EDatasmithCADStitchingTechnique__StitchingNone                                   = 0,
	EDatasmithCADStitchingTechnique__StitchingHeal                                   = 1,
	EDatasmithCADStitchingTechnique__StitchingSew                                    = 2,
	EDatasmithCADStitchingTechnique__EDatasmithCADStitchingTechnique_MAX             = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportHierarchy
/// Size: 0x04
enum EDatasmithImportHierarchy : uint8_t
{
	EDatasmithImportHierarchy__UseMultipleActors                                     = 0,
	EDatasmithImportHierarchy__UseSingleActor                                        = 1,
	EDatasmithImportHierarchy__UseOneBlueprint                                       = 2,
	EDatasmithImportHierarchy__EDatasmithImportHierarchy_MAX                         = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportScene
/// Size: 0x04
enum EDatasmithImportScene : uint8_t
{
	EDatasmithImportScene__NewLevel                                                  = 0,
	EDatasmithImportScene__CurrentLevel                                              = 1,
	EDatasmithImportScene__AssetsOnly                                                = 2,
	EDatasmithImportScene__EDatasmithImportScene_MAX                                 = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMax
/// Size: 0x08
enum EDatasmithImportLightmapMax : uint8_t
{
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 1,
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 2,
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 3,
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 4,
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 5,
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 6,
	EDatasmithImportLightmapMax__LIGHTMAP_MAX                                        = 7
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMin
/// Size: 0x07
enum EDatasmithImportLightmapMin : uint8_t
{
	EDatasmithImportLightmapMin__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMin__LIGHTMAP                                            = 1,
	EDatasmithImportLightmapMin__LIGHTMAP                                            = 2,
	EDatasmithImportLightmapMin__LIGHTMAP                                            = 3,
	EDatasmithImportLightmapMin__LIGHTMAP                                            = 4,
	EDatasmithImportLightmapMin__LIGHTMAP                                            = 5,
	EDatasmithImportLightmapMin__LIGHTMAP_MAX                                        = 6
};

/// Enum /Script/DatasmithContent.EDatasmithImportMaterialQuality
/// Size: 0x04
enum EDatasmithImportMaterialQuality : uint8_t
{
	EDatasmithImportMaterialQuality__UseNoFresnelCurves                              = 0,
	EDatasmithImportMaterialQuality__UseSimplifierFresnelCurves                      = 1,
	EDatasmithImportMaterialQuality__UseRealFresnelCurves                            = 2,
	EDatasmithImportMaterialQuality__EDatasmithImportMaterialQuality_MAX             = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportActorPolicy
/// Size: 0x04
enum EDatasmithImportActorPolicy : uint8_t
{
	EDatasmithImportActorPolicy__Update                                              = 0,
	EDatasmithImportActorPolicy__Full                                                = 1,
	EDatasmithImportActorPolicy__Ignore                                              = 2,
	EDatasmithImportActorPolicy__EDatasmithImportActorPolicy_MAX                     = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportAssetConflictPolicy
/// Size: 0x05
enum EDatasmithImportAssetConflictPolicy : uint8_t
{
	EDatasmithImportAssetConflictPolicy__Replace                                     = 0,
	EDatasmithImportAssetConflictPolicy__Update                                      = 1,
	EDatasmithImportAssetConflictPolicy__Use                                         = 2,
	EDatasmithImportAssetConflictPolicy__Ignore                                      = 3,
	EDatasmithImportAssetConflictPolicy__EDatasmithImportAssetConflictPolicy_MAX     = 4
};

/// Enum /Script/DatasmithContent.EDatasmithImportSearchPackagePolicy
/// Size: 0x03
enum EDatasmithImportSearchPackagePolicy : uint8_t
{
	EDatasmithImportSearchPackagePolicy__Current                                     = 0,
	EDatasmithImportSearchPackagePolicy__All                                         = 1,
	EDatasmithImportSearchPackagePolicy__EDatasmithImportSearchPackagePolicy_MAX     = 2
};

