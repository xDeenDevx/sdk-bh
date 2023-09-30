/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Foliage.

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0030 (0x000680 - 0x0006B0)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
public:
	FMulticastInlineDelegate                           OnInstanceTakePointDamage;                                  // 0x0678   (0x0010)  
	FMulticastInlineDelegate                           OnInstanceTakeRadialDamage;                                 // 0x0688   (0x0010)  
	FGuid                                              GenerationGuid;                                             // 0x0698   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x06A8   (0x0008)  MISSED
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0000 (0x000028 - 0x000028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x0380 (0x000028 - 0x0003A8)
class UFoliageType : public UObject
{ 
public:
	FGuid                                              UpdateGuid;                                                 // 0x0028   (0x0010)  
	float                                              Density;                                                    // 0x0038   (0x0004)  
	float                                              DensityAdjustmentFactor;                                    // 0x003C   (0x0004)  
	float                                              Radius;                                                     // 0x0040   (0x0004)  
	bool                                               bSingleInstanceModeOverrideRadius;                          // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              SingleInstanceModeRadius;                                   // 0x0048   (0x0004)  
	EFoliageScaling                                    Scaling;                                                    // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0050   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x0058   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0060   (0x0008)  
	FFoliageVertexColorChannelMask                     VertexColorMaskByChannel;                                   // 0x0068   (0x0030)  
	TEnumAsByte<FoliageVertexColorMask>                VertexColorMask;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              VertexColorMaskThreshold;                                   // 0x009C   (0x0004)  
	bool                                               VertexColorMaskInvert;                                      // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FFloatInterval                                     ZOffset;                                                    // 0x00A4   (0x0008)  
	bool                                               AlignToNormal;                                              // 0x00AC:0 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              AlignMaxAngle;                                              // 0x00B0   (0x0004)  
	bool                                               RandomYaw;                                                  // 0x00B4:0 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              RandomPitchAngle;                                           // 0x00B8   (0x0004)  
	FFloatInterval                                     GroundSlopeAngle;                                           // 0x00BC   (0x0008)  
	FFloatInterval                                     Height;                                                     // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FName>                                      LandscapeLayers;                                            // 0x00D0   (0x0010)  
	float                                              MinimumLayerWeight;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FName>                                      ExclusionLandscapeLayers;                                   // 0x00E8   (0x0010)  
	float                                              MinimumExclusionLayerWeight;                                // 0x00F8   (0x0004)  
	FName                                              LandscapeLayer;                                             // 0x00FC   (0x0008)  
	bool                                               CollisionWithWorld;                                         // 0x0104:0 (0x0001)  
	unsigned char                                      UnknownData08_4[0x3];                                       // 0x0105   (0x0003)  MISSED
	FVector                                            CollisionScale;                                             // 0x0108   (0x000C)  
	FBoxSphereBounds                                   MeshBounds;                                                 // 0x0114   (0x001C)  
	FVector                                            LowBoundOriginRadius;                                       // 0x0130   (0x000C)  
	TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x013C   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x013D   (0x0003)  MISSED
	FInt32Interval                                     CullDistance;                                               // 0x0140   (0x0008)  
	bool                                               bEnableStaticLighting;                                      // 0x0148:0 (0x0001)  
	bool                                               CastShadow;                                                 // 0x0148:1 (0x0001)  
	bool                                               bAffectDynamicIndirectLighting;                             // 0x0148:2 (0x0001)  
	bool                                               bAffectDistanceFieldLighting;                               // 0x0148:3 (0x0001)  
	bool                                               bCastDynamicShadow;                                         // 0x0148:4 (0x0001)  
	bool                                               bCastStaticShadow;                                          // 0x0148:5 (0x0001)  
	bool                                               bCastShadowAsTwoSided;                                      // 0x0148:6 (0x0001)  
	bool                                               bReceivesDecals;                                            // 0x0148:7 (0x0001)  
	bool                                               bOverrideLightMapRes;                                       // 0x0149:0 (0x0001)  
	unsigned char                                      UnknownData10_4[0x2];                                       // 0x014A   (0x0002)  MISSED
	int32_t                                            OverriddenLightMapRes;                                      // 0x014C   (0x0004)  
	ELightmapType                                      LightmapType;                                               // 0x0150   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x0151   (0x0003)  MISSED
	bool                                               bUseAsOccluder;                                             // 0x0154:0 (0x0001)  
	unsigned char                                      UnknownData12_4[0x3];                                       // 0x0155   (0x0003)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x0158   (0x0158)  
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                    // 0x02B0   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x02B1   (0x0001)  
	unsigned char                                      UnknownData13_5[0x2];                                       // 0x02B2   (0x0002)  MISSED
	bool                                               bRenderCustomDepth;                                         // 0x02B4:0 (0x0001)  
	unsigned char                                      UnknownData14_4[0x3];                                       // 0x02B5   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData15_5[0x3];                                       // 0x02B9   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x02BC   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x02C0   (0x0004)  
	float                                              CollisionRadius;                                            // 0x02C4   (0x0004)  
	float                                              ShadeRadius;                                                // 0x02C8   (0x0004)  
	int32_t                                            NumSteps;                                                   // 0x02CC   (0x0004)  
	float                                              InitialSeedDensity;                                         // 0x02D0   (0x0004)  
	float                                              AverageSpreadDistance;                                      // 0x02D4   (0x0004)  
	float                                              SpreadVariance;                                             // 0x02D8   (0x0004)  
	int32_t                                            SeedsPerStep;                                               // 0x02DC   (0x0004)  
	int32_t                                            DistributionSeed;                                           // 0x02E0   (0x0004)  
	float                                              MaxInitialSeedOffset;                                       // 0x02E4   (0x0004)  
	bool                                               bCanGrowInShade;                                            // 0x02E8   (0x0001)  
	bool                                               bSpawnsInShade;                                             // 0x02E9   (0x0001)  
	unsigned char                                      UnknownData16_5[0x2];                                       // 0x02EA   (0x0002)  MISSED
	float                                              MaxInitialAge;                                              // 0x02EC   (0x0004)  
	float                                              MaxAge;                                                     // 0x02F0   (0x0004)  
	float                                              OverlapPriority;                                            // 0x02F4   (0x0004)  
	FFloatInterval                                     ProceduralScale;                                            // 0x02F8   (0x0008)  
	FRuntimeFloatCurve                                 ScaleCurve;                                                 // 0x0300   (0x0088)  
	int32_t                                            ChangeCount;                                                // 0x0388   (0x0004)  
	bool                                               ReapplyDensity;                                             // 0x038C:0 (0x0001)  
	bool                                               ReapplyRadius;                                              // 0x038C:1 (0x0001)  
	bool                                               ReapplyAlignToNormal;                                       // 0x038C:2 (0x0001)  
	bool                                               ReapplyRandomYaw;                                           // 0x038C:3 (0x0001)  
	bool                                               ReapplyScaling;                                             // 0x038C:4 (0x0001)  
	bool                                               ReapplyScaleX;                                              // 0x038C:5 (0x0001)  
	bool                                               ReapplyScaleY;                                              // 0x038C:6 (0x0001)  
	bool                                               ReapplyScaleZ;                                              // 0x038C:7 (0x0001)  
	bool                                               ReapplyRandomPitchAngle;                                    // 0x038D:0 (0x0001)  
	bool                                               ReapplyGroundSlope;                                         // 0x038D:1 (0x0001)  
	bool                                               ReapplyHeight;                                              // 0x038D:2 (0x0001)  
	bool                                               ReapplyLandscapeLayers;                                     // 0x038D:3 (0x0001)  
	bool                                               ReapplyZOffset;                                             // 0x038D:4 (0x0001)  
	bool                                               ReapplyCollisionWithWorld;                                  // 0x038D:5 (0x0001)  
	bool                                               ReapplyVertexColorMask;                                     // 0x038D:6 (0x0001)  
	bool                                               bEnableDensityScaling;                                      // 0x038D:7 (0x0001)  
	bool                                               bEnableDiscardOnLoad;                                       // 0x038E:0 (0x0001)  
	unsigned char                                      UnknownData17_4[0x1];                                       // 0x038F   (0x0001)  MISSED
	TArray<URuntimeVirtualTexture*>                    RuntimeVirtualTextures;                                     // 0x0390   (0x0010)  
	int32_t                                            VirtualTextureCullMips;                                     // 0x03A0   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x03A4   (0x0001)  
	unsigned char                                      UnknownData18_6[0x3];                                       // 0x03A5   (0x0003)  MISSED
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x0010 (0x0003A8 - 0x0003B8)
class UFoliageType_Actor : public UFoliageType
{ 
public:
	UClass*                                            ActorClass;                                                 // 0x03A8   (0x0008)  
	bool                                               bShouldAttachToBaseComponent;                               // 0x03B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x03B1   (0x0007)  MISSED
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0020 (0x0003A8 - 0x0003C8)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
public:
	UStaticMesh*                                       Mesh;                                                       // 0x03A8   (0x0008)  
	TArray<UMaterialInterface*>                        OverrideMaterials;                                          // 0x03B0   (0x0010)  
	UClass*                                            ComponentClass;                                             // 0x03C0   (0x0008)  
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0050 (0x000228 - 0x000278)
class AInstancedFoliageActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0228   (0x0050)  MISSED
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0060 (0x000238 - 0x000298)
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
public:
	UCapsuleComponent*                                 CapsuleComponent;                                           // 0x0238   (0x0008)  
	FVector                                            TouchingActorEntryPosition;                                 // 0x0240   (0x000C)  
	FVector                                            FoliageVelocity;                                            // 0x024C   (0x000C)  
	FVector                                            FoliageForce;                                               // 0x0258   (0x000C)  
	FVector                                            FoliagePosition;                                            // 0x0264   (0x000C)  
	float                                              FoliageDamageImpulseScale;                                  // 0x0270   (0x0004)  
	float                                              FoliageTouchImpulseScale;                                   // 0x0274   (0x0004)  
	float                                              FoliageStiffness;                                           // 0x0278   (0x0004)  
	float                                              FoliageStiffnessQuadratic;                                  // 0x027C   (0x0004)  
	float                                              FoliageDamping;                                             // 0x0280   (0x0004)  
	float                                              MaxDamageImpulse;                                           // 0x0284   (0x0004)  
	float                                              MaxTouchImpulse;                                            // 0x0288   (0x0004)  
	float                                              MaxForce;                                                   // 0x028C   (0x0004)  
	float                                              Mass;                                                       // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0294   (0x0004)  MISSED


	/// Functions
	// Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
	void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x2715c20] Final|Native|Protected|HasOutParms 
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x0010 (0x0004E0 - 0x0004F0)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x04E0   (0x0010)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0008 (0x000260 - 0x000268)
class AProceduralFoliageBlockingVolume : public AVolume
{ 
public:
	AProceduralFoliageVolume*                          ProceduralFoliageVolume;                                    // 0x0260   (0x0008)  
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UProceduralFoliageComponent : public UActorComponent
{ 
public:
	UProceduralFoliageSpawner*                         FoliageSpawner;                                             // 0x00B0   (0x0008)  
	float                                              TileOverlap;                                                // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	AVolume*                                           SpawningVolume;                                             // 0x00C0   (0x0008)  
	FGuid                                              ProceduralGuid;                                             // 0x00C8   (0x0010)  
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0040 (0x000028 - 0x000068)
class UProceduralFoliageSpawner : public UObject
{ 
public:
	int32_t                                            RandomSeed;                                                 // 0x0028   (0x0004)  
	float                                              TileSize;                                                   // 0x002C   (0x0004)  
	int32_t                                            NumUniqueTiles;                                             // 0x0030   (0x0004)  
	float                                              MinimumQuadTreeSize;                                        // 0x0034   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<FFoliageTypeObject>                         FoliageTypes;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
	void Simulate(int32_t NumSteps);                                                                                         // [0x27160f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0130 (0x000028 - 0x000158)
class UProceduralFoliageTile : public UObject
{ 
public:
	UProceduralFoliageSpawner*                         FoliageSpawner;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_5[0xA0];                                      // 0x0030   (0x00A0)  MISSED
	TArray<FProceduralFoliageInstance>                 InstancesArray;                                             // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x78];                                      // 0x00E0   (0x0078)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0008 (0x000260 - 0x000268)
class AProceduralFoliageVolume : public AVolume
{ 
public:
	UProceduralFoliageComponent*                       ProceduralComponent;                                        // 0x0260   (0x0008)  
};

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFoliageVertexColorChannelMask
{ 
	bool                                               UseMask;                                                    // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaskThreshold;                                              // 0x0004   (0x0004)  
	bool                                               InvertMask;                                                 // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFoliageTypeObject
{ 
	UObject*                                           FoliageTypeObject;                                          // 0x0000   (0x0008)  
	UFoliageType*                                      TypeInstance;                                               // 0x0008   (0x0008)  
	bool                                               bIsAsset;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	UClass*                                            Type;                                                       // 0x0018   (0x0008)  
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0050 (0x000000 - 0x000050)
struct FProceduralFoliageInstance
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	float                                              Age;                                                        // 0x001C   (0x0004)  
	FVector                                            Normal;                                                     // 0x0020   (0x000C)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	UFoliageType*                                      Type;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Enum /Script/Foliage.EFoliageScaling
/// Size: 0x06
enum EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform                                                         = 0,
	EFoliageScaling__Free                                                            = 1,
	EFoliageScaling__LockXY                                                          = 2,
	EFoliageScaling__LockXZ                                                          = 3,
	EFoliageScaling__LockYZ                                                          = 4,
	EFoliageScaling__EFoliageScaling_MAX                                             = 5
};

/// Enum /Script/Foliage.EVertexColorMaskChannel
/// Size: 0x06
enum EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red                                                     = 0,
	EVertexColorMaskChannel__Green                                                   = 1,
	EVertexColorMaskChannel__Blue                                                    = 2,
	EVertexColorMaskChannel__Alpha                                                   = 3,
	EVertexColorMaskChannel__MAX_None                                                = 4,
	EVertexColorMaskChannel__EVertexColorMaskChannel_MAX                             = 5
};

/// Enum /Script/Foliage.FoliageVertexColorMask
/// Size: 0x06
enum FoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled                                                  = 0,
	FOLIAGEVERTEXCOLORMASK_Red                                                       = 1,
	FOLIAGEVERTEXCOLORMASK_Green                                                     = 2,
	FOLIAGEVERTEXCOLORMASK_Blue                                                      = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha                                                     = 4,
	FOLIAGEVERTEXCOLORMASK_MAX                                                       = 5
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x05
enum ESimulationQuery : uint8_t
{
	ESimulationQuery__None                                                           = 0,
	ESimulationQuery__CollisionOverlap                                               = 1,
	ESimulationQuery__ShadeOverlap                                                   = 2,
	ESimulationQuery__AnyOverlap                                                     = 3,
	ESimulationQuery__ESimulationQuery_MAX                                           = 4
};

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x04
enum ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap                                             = 0,
	ESimulationOverlap__ShadeOverlap                                                 = 1,
	ESimulationOverlap__None                                                         = 2,
	ESimulationOverlap__ESimulationOverlap_MAX                                       = 3
};

