/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Paper2D.

/// Class /Script/Paper2D.MaterialExpressionSpriteTextureSampler
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{ 
public:
	bool                                               bSampleAdditionalTextures;                                  // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            AdditionalSlotIndex;                                        // 0x0084   (0x0004)  
	FText                                              SlotDisplayName;                                            // 0x0088   (0x0018)  
};

/// Class /Script/Paper2D.PaperCharacter
/// Size: 0x0000 (0x0004C0 - 0x0004C0)
class APaperCharacter : public ACharacter
{ 
public:
};

/// Class /Script/Paper2D.PaperFlipbook
/// Size: 0x0028 (0x000028 - 0x000050)
class UPaperFlipbook : public UObject
{ 
public:
	float                                              FramesPerSecond;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FPaperFlipbookKeyFrame>                     KeyFrames;                                                  // 0x0030   (0x0010)  
	UMaterialInterface*                                DefaultMaterial;                                            // 0x0040   (0x0008)  
	TEnumAsByte<EFlipbookCollisionMode>                CollisionSource;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED


	/// Functions
	// Function /Script/Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	bool IsValidKeyFrameIndex(int32_t Index);                                                                                // [0xd8a4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetTotalDuration
	float GetTotalDuration();                                                                                                // [0xd8a430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtTime
	UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);                                                            // [0xd89b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtFrame
	UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex);                                                                      // [0xd89af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetNumKeyFrames
	int32_t GetNumKeyFrames();                                                                                               // [0xd89a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetNumFrames
	int32_t GetNumFrames();                                                                                                  // [0xd89a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);                                                           // [0xd89760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Paper2D.PaperFlipbookActor
/// Size: 0x0008 (0x000228 - 0x000230)
class APaperFlipbookActor : public AActor
{ 
public:
	UPaperFlipbookComponent*                           RenderComponent;                                            // 0x0228   (0x0008)  
};

/// Class /Script/Paper2D.PaperFlipbookComponent
/// Size: 0x0040 (0x000480 - 0x0004C0)
class UPaperFlipbookComponent : public UMeshComponent
{ 
public:
	UPaperFlipbook*                                    SourceFlipbook;                                             // 0x0478   (0x0008)  
	UMaterialInterface*                                Material;                                                   // 0x0480   (0x0008)  
	float                                              PlayRate;                                                   // 0x0488   (0x0004)  
	bool                                               bLooping;                                                   // 0x048C:0 (0x0001)  
	bool                                               bReversePlayback;                                           // 0x048C:1 (0x0001)  
	bool                                               bPlaying;                                                   // 0x048C:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x048D   (0x0003)  MISSED
	float                                              AccumulatedTime;                                            // 0x0490   (0x0004)  
	int32_t                                            CachedFrameIndex;                                           // 0x0494   (0x0004)  
	FLinearColor                                       SpriteColor;                                                // 0x0498   (0x0010)  
	UBodySetup*                                        CachedBodySetup;                                            // 0x04A8   (0x0008)  
	FMulticastInlineDelegate                           OnFinishedPlaying;                                          // 0x04B0   (0x0010)  


	/// Functions
	// Function /Script/Paper2D.PaperFlipbookComponent.Stop
	void Stop();                                                                                                             // [0xd8b810] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetSpriteColor
	void SetSpriteColor(FLinearColor NewColor);                                                                              // [0xd8b3c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlayRate
	void SetPlayRate(float NewRate);                                                                                         // [0xd8b190] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents);                                            // [0xd8b2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);                                                           // [0xd8b210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetNewTime
	void SetNewTime(float NewTime);                                                                                          // [0xd8b110] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetLooping
	void SetLooping(bool bNewLooping);                                                                                       // [0xd8b080] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetFlipbook
	bool SetFlipbook(UPaperFlipbook* NewFlipbook);                                                                           // [0xd8acd0] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.ReverseFromEnd
	void ReverseFromEnd();                                                                                                   // [0xd8abd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.Reverse
	void Reverse();                                                                                                          // [0xd8abb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.PlayFromStart
	void PlayFromStart();                                                                                                    // [0xd8aa00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.Play
	void Play();                                                                                                             // [0xd8a9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	void OnRep_SourceFlipbook(UPaperFlipbook* OldFlipbook);                                                                  // [0xd8a920] Final|Native|Protected 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsReversing
	bool IsReversing();                                                                                                      // [0xd8a4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsPlaying
	bool IsPlaying();                                                                                                        // [0xd8a490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsLooping
	bool IsLooping();                                                                                                        // [0xd8a460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetSpriteColor
	FLinearColor GetSpriteColor();                                                                                           // [0xd89c70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlayRate
	float GetPlayRate();                                                                                                     // [0xd89a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	int32_t GetPlaybackPositionInFrames();                                                                                   // [0xd89ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	float GetPlaybackPosition();                                                                                             // [0xd89a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	int32_t GetFlipbookLengthInFrames();                                                                                     // [0xd895a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLength
	float GetFlipbookLength();                                                                                               // [0xd89570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	float GetFlipbookFramerate();                                                                                            // [0xd89540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbook
	UPaperFlipbook* GetFlipbook();                                                                                           // [0xd89510] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Paper2D.PaperGroupedSpriteActor
/// Size: 0x0008 (0x000228 - 0x000230)
class APaperGroupedSpriteActor : public AActor
{ 
public:
	UPaperGroupedSpriteComponent*                      RenderComponent;                                            // 0x0228   (0x0008)  
};

/// Class /Script/Paper2D.PaperGroupedSpriteComponent
/// Size: 0x0030 (0x000480 - 0x0004B0)
class UPaperGroupedSpriteComponent : public UMeshComponent
{ 
public:
	TArray<UMaterialInterface*>                        InstanceMaterials;                                          // 0x0478   (0x0010)  
	TArray<FSpriteInstanceData>                        PerInstanceSpriteData;                                      // 0x0488   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0498   (0x0018)  MISSED


	/// Functions
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	bool UpdateInstanceTransform(int32_t InstanceIndex, FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // [0xd8b950] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	bool UpdateInstanceColor(int32_t InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);              // [0xd8b830] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);                                                                 // [0xd8b780] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	bool RemoveInstance(int32_t InstanceIndex);                                                                              // [0xd8aa40] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	bool GetInstanceTransform(int32_t InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);                    // [0xd89600] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	int32_t GetInstanceCount();                                                                                              // [0xd895d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.ClearInstances
	void ClearInstances();                                                                                                   // [0xd89320] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.AddInstance
	int32_t AddInstance(FTransform& Transform, UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);                  // [0xd88ef0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Paper2D.PaperRuntimeSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UPaperRuntimeSettings : public UObject
{ 
public:
	bool                                               bEnableSpriteAtlasGroups;                                   // 0x0028   (0x0001)  
	bool                                               bEnableTerrainSplineEditing;                                // 0x0029   (0x0001)  
	bool                                               bResizeSpriteDataToMatchTextures;                           // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Class /Script/Paper2D.PaperSprite
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPaperSprite : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	TArray<UTexture*>                                  AdditionalSourceTextures;                                   // 0x0038   (0x0010)  
	FVector2D                                          BakedSourceUV;                                              // 0x0048   (0x0008)  
	FVector2D                                          BakedSourceDimension;                                       // 0x0050   (0x0008)  
	UTexture2D*                                        BakedSourceTexture;                                         // 0x0058   (0x0008)  
	UMaterialInterface*                                DefaultMaterial;                                            // 0x0060   (0x0008)  
	UMaterialInterface*                                AlternateMaterial;                                          // 0x0068   (0x0008)  
	TArray<FPaperSpriteSocket>                         Sockets;                                                    // 0x0070   (0x0010)  
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              PixelsPerUnrealUnit;                                        // 0x0084   (0x0004)  
	UBodySetup*                                        BodySetup;                                                  // 0x0088   (0x0008)  
	int32_t                                            AlternateMaterialSplitIndex;                                // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<FVector4>                                   BakedRenderData;                                            // 0x0098   (0x0010)  
};

/// Class /Script/Paper2D.PaperSpriteActor
/// Size: 0x0008 (0x000228 - 0x000230)
class APaperSpriteActor : public AActor
{ 
public:
	UPaperSpriteComponent*                             RenderComponent;                                            // 0x0228   (0x0008)  
};

/// Class /Script/Paper2D.PaperSpriteAtlas
/// Size: 0x0000 (0x000028 - 0x000028)
class UPaperSpriteAtlas : public UObject
{ 
public:
};

/// Class /Script/Paper2D.PaperSpriteBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Paper2D.PaperSpriteComponent
/// Size: 0x0020 (0x000480 - 0x0004A0)
class UPaperSpriteComponent : public UMeshComponent
{ 
public:
	UPaperSprite*                                      SourceSprite;                                               // 0x0478   (0x0008)  
	UMaterialInterface*                                MaterialOverride;                                           // 0x0480   (0x0008)  
	FLinearColor                                       SpriteColor;                                                // 0x0488   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0498   (0x0008)  MISSED


	/// Functions
	// Function /Script/Paper2D.PaperSpriteComponent.SetSpriteColor
	void SetSpriteColor(FLinearColor NewColor);                                                                              // [0xd8b450] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperSpriteComponent.SetSprite
	bool SetSprite(UPaperSprite* NewSprite);                                                                                 // [0xd8acd0] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperSpriteComponent.GetSprite
	UPaperSprite* GetSprite();                                                                                               // [0xd89510] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Paper2D.PaperTerrainActor
/// Size: 0x0018 (0x000228 - 0x000240)
class APaperTerrainActor : public AActor
{ 
public:
	USceneComponent*                                   DummyRoot;                                                  // 0x0228   (0x0008)  
	UPaperTerrainSplineComponent*                      SplineComponent;                                            // 0x0230   (0x0008)  
	UPaperTerrainComponent*                            RenderComponent;                                            // 0x0238   (0x0008)  
};

/// Class /Script/Paper2D.PaperTerrainComponent
/// Size: 0x0060 (0x000450 - 0x0004B0)
class UPaperTerrainComponent : public UPrimitiveComponent
{ 
public:
	UPaperTerrainMaterial*                             TerrainMaterial;                                            // 0x0450   (0x0008)  
	bool                                               bClosedSpline;                                              // 0x0458   (0x0001)  
	bool                                               bFilledSpline;                                              // 0x0459   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x045A   (0x0006)  MISSED
	UPaperTerrainSplineComponent*                      AssociatedSpline;                                           // 0x0460   (0x0008)  
	int32_t                                            RandomSeed;                                                 // 0x0468   (0x0004)  
	float                                              SegmentOverlapAmount;                                       // 0x046C   (0x0004)  
	FLinearColor                                       TerrainColor;                                               // 0x0470   (0x0010)  
	int32_t                                            ReparamStepsPerSegment;                                     // 0x0480   (0x0004)  
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                      // 0x0484   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0485   (0x0003)  MISSED
	float                                              CollisionThickness;                                         // 0x0488   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x048C   (0x0004)  MISSED
	UBodySetup*                                        CachedBodySetup;                                            // 0x0490   (0x0008)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0498   (0x0018)  MISSED


	/// Functions
	// Function /Script/Paper2D.PaperTerrainComponent.SetTerrainColor
	void SetTerrainColor(FLinearColor NewColor);                                                                             // [0xd8b4e0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/Paper2D.PaperTerrainMaterial
/// Size: 0x0018 (0x000030 - 0x000048)
class UPaperTerrainMaterial : public UDataAsset
{ 
public:
	TArray<FPaperTerrainMaterialRule>                  Rules;                                                      // 0x0030   (0x0010)  
	UPaperSprite*                                      InteriorFill;                                               // 0x0040   (0x0008)  
};

/// Class /Script/Paper2D.PaperTerrainSplineComponent
/// Size: 0x0010 (0x000550 - 0x000560)
class UPaperTerrainSplineComponent : public USplineComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0550   (0x0010)  MISSED
};

/// Class /Script/Paper2D.PaperTileLayer
/// Size: 0x0070 (0x000028 - 0x000098)
class UPaperTileLayer : public UObject
{ 
public:
	FText                                              LayerName;                                                  // 0x0028   (0x0018)  
	int32_t                                            LayerWidth;                                                 // 0x0040   (0x0004)  
	int32_t                                            LayerHeight;                                                // 0x0044   (0x0004)  
	bool                                               bHiddenInGame;                                              // 0x0048:0 (0x0001)  
	bool                                               bLayerCollides;                                             // 0x0048:1 (0x0001)  
	bool                                               bOverrideCollisionThickness;                                // 0x0048:2 (0x0001)  
	bool                                               bOverrideCollisionOffset;                                   // 0x0048:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              CollisionThicknessOverride;                                 // 0x004C   (0x0004)  
	float                                              CollisionOffsetOverride;                                    // 0x0050   (0x0004)  
	FLinearColor                                       LayerColor;                                                 // 0x0054   (0x0010)  
	int32_t                                            AllocatedWidth;                                             // 0x0064   (0x0004)  
	int32_t                                            AllocatedHeight;                                            // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<FPaperTileInfo>                             AllocatedCells;                                             // 0x0070   (0x0010)  
	UPaperTileSet*                                     TileSet;                                                    // 0x0080   (0x0008)  
	TArray<int32_t>                                    AllocatedGrid;                                              // 0x0088   (0x0010)  
};

/// Class /Script/Paper2D.PaperTileMap
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPaperTileMap : public UObject
{ 
public:
	int32_t                                            MapWidth;                                                   // 0x0028   (0x0004)  
	int32_t                                            MapHeight;                                                  // 0x002C   (0x0004)  
	int32_t                                            TileWidth;                                                  // 0x0030   (0x0004)  
	int32_t                                            TileHeight;                                                 // 0x0034   (0x0004)  
	float                                              PixelsPerUnrealUnit;                                        // 0x0038   (0x0004)  
	float                                              SeparationPerTileX;                                         // 0x003C   (0x0004)  
	float                                              SeparationPerTileY;                                         // 0x0040   (0x0004)  
	float                                              SeparationPerLayer;                                         // 0x0044   (0x0004)  
	TWeakObjectPtr<UPaperTileSet*>                     SelectedTileSet;                                            // 0x0048   (0x0028)  
	UMaterialInterface*                                Material;                                                   // 0x0070   (0x0008)  
	TArray<UPaperTileLayer*>                           TileLayers;                                                 // 0x0078   (0x0010)  
	float                                              CollisionThickness;                                         // 0x0088   (0x0004)  
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                      // 0x008C   (0x0001)  
	TEnumAsByte<ETileMapProjectionMode>                ProjectionMode;                                             // 0x008D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x008E   (0x0002)  MISSED
	int32_t                                            HexSideLength;                                              // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	UBodySetup*                                        BodySetup;                                                  // 0x0098   (0x0008)  
	int32_t                                            LayerNameIndex;                                             // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/Paper2D.PaperTileMapActor
/// Size: 0x0008 (0x000228 - 0x000230)
class APaperTileMapActor : public AActor
{ 
public:
	UPaperTileMapComponent*                            RenderComponent;                                            // 0x0228   (0x0008)  
};

/// Class /Script/Paper2D.PaperTileMapComponent
/// Size: 0x0050 (0x000480 - 0x0004D0)
class UPaperTileMapComponent : public UMeshComponent
{ 
public:
	int32_t                                            MapWidth;                                                   // 0x0478   (0x0004)  
	int32_t                                            MapHeight;                                                  // 0x047C   (0x0004)  
	int32_t                                            TileWidth;                                                  // 0x0480   (0x0004)  
	int32_t                                            TileHeight;                                                 // 0x0484   (0x0004)  
	UPaperTileSet*                                     DefaultLayerTileSet;                                        // 0x0488   (0x0008)  
	UMaterialInterface*                                Material;                                                   // 0x0490   (0x0008)  
	TArray<UPaperTileLayer*>                           TileLayers;                                                 // 0x0498   (0x0010)  
	FLinearColor                                       TileMapColor;                                               // 0x04A8   (0x0010)  
	int32_t                                            UseSingleLayerIndex;                                        // 0x04B8   (0x0004)  
	bool                                               bUseSingleLayer;                                            // 0x04BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04BD   (0x0003)  MISSED
	UPaperTileMap*                                     TileMap;                                                    // 0x04C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x04C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMapColor
	void SetTileMapColor(FLinearColor NewColor);                                                                             // [0xd8b6f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMap
	bool SetTileMap(UPaperTileMap* NewTileMap);                                                                              // [0xd8acd0] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetTile
	void SetTile(int32_t X, int32_t Y, int32_t Layer, FPaperTileInfo NewValue);                                              // [0xd8b570] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerColor
	void SetLayerColor(FLinearColor NewColor, int32_t Layer);                                                                // [0xd8afb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerCollision
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // [0xd8ad70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);                                              // [0xd8abf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.ResizeMap
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles);                                                       // [0xd8aae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.RebuildCollision
	void RebuildCollision();                                                                                                 // [0xd8aa20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.OwnsTileMap
	bool OwnsTileMap();                                                                                                      // [0xd8a9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.MakeTileMapEditable
	void MakeTileMapEditable();                                                                                              // [0xd8a900] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTilePolygon
	void GetTilePolygon(int32_t TileX, int32_t TileY, TArray<FVector>& Points, int32_t LayerIndex, bool bWorldSpace);        // [0xd8a0e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileMapColor
	FLinearColor GetTileMapColor();                                                                                          // [0xd8a0a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCornerPosition
	FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);                       // [0xd89f30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCenterPosition
	FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);                       // [0xd89dc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTile
	FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer);                                                             // [0xd89ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetMapSize
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers);                                              // [0xd898d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.GetLayerColor
	FLinearColor GetLayerColor(int32_t Layer);                                                                               // [0xd89830] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.CreateNewTileMap
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // [0xd89340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.AddNewLayer
	UPaperTileLayer* AddNewLayer();                                                                                          // [0xd890c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Paper2D.PaperTileSet
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPaperTileSet : public UObject
{ 
public:
	FIntPoint                                          TileSize;                                                   // 0x0028   (0x0008)  
	UTexture2D*                                        TileSheet;                                                  // 0x0030   (0x0008)  
	TArray<UTexture*>                                  AdditionalSourceTextures;                                   // 0x0038   (0x0010)  
	FIntMargin                                         BorderMargin;                                               // 0x0048   (0x0010)  
	FIntPoint                                          PerTileSpacing;                                             // 0x0058   (0x0008)  
	FIntPoint                                          DrawingOffset;                                              // 0x0060   (0x0008)  
	int32_t                                            WidthInTiles;                                               // 0x0068   (0x0004)  
	int32_t                                            HeightInTiles;                                              // 0x006C   (0x0004)  
	int32_t                                            AllocatedWidth;                                             // 0x0070   (0x0004)  
	int32_t                                            AllocatedHeight;                                            // 0x0074   (0x0004)  
	TArray<FPaperTileMetadata>                         PerTileData;                                                // 0x0078   (0x0010)  
	TArray<FPaperTileSetTerrain>                       Terrains;                                                   // 0x0088   (0x0010)  
	int32_t                                            TileWidth;                                                  // 0x0098   (0x0004)  
	int32_t                                            TileHeight;                                                 // 0x009C   (0x0004)  
	int32_t                                            Margin;                                                     // 0x00A0   (0x0004)  
	int32_t                                            Spacing;                                                    // 0x00A4   (0x0004)  
};

/// Class /Script/Paper2D.TileMapBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Struct /Script/Paper2D.IntMargin
/// Size: 0x0010 (0x000000 - 0x000010)
struct FIntMargin
{ 
	int32_t                                            Left;                                                       // 0x0000   (0x0004)  
	int32_t                                            Top;                                                        // 0x0004   (0x0004)  
	int32_t                                            Right;                                                      // 0x0008   (0x0004)  
	int32_t                                            Bottom;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/Paper2D.PaperFlipbookKeyFrame
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPaperFlipbookKeyFrame
{ 
	UPaperSprite*                                      Sprite;                                                     // 0x0000   (0x0008)  
	int32_t                                            FrameRun;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/Paper2D.SpriteInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSpriteInstanceData
{ 
	FMatrix                                            Transform;                                                  // 0x0000   (0x0040)  
	UPaperSprite*                                      SourceSprite;                                               // 0x0040   (0x0008)  
	FColor                                             VertexColor;                                                // 0x0048   (0x0004)  
	int32_t                                            MaterialIndex;                                              // 0x004C   (0x0004)  
};

/// Struct /Script/Paper2D.PaperSpriteSocket
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPaperSpriteSocket
{ 
	FTransform                                         LocalTransform;                                             // 0x0000   (0x0030)  
	FName                                              SocketName;                                                 // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/Paper2D.PaperSpriteAtlasSlot
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPaperSpriteAtlasSlot
{ 
	TWeakObjectPtr<UPaperSprite*>                      SpriteRef;                                                  // 0x0000   (0x0028)  
	int32_t                                            AtlasIndex;                                                 // 0x0028   (0x0004)  
	int32_t                                            X;                                                          // 0x002C   (0x0004)  
	int32_t                                            Y;                                                          // 0x0030   (0x0004)  
	int32_t                                            Width;                                                      // 0x0034   (0x0004)  
	int32_t                                            Height;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/Paper2D.PaperTerrainMaterialRule
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPaperTerrainMaterialRule
{ 
	UPaperSprite*                                      StartCap;                                                   // 0x0000   (0x0008)  
	TArray<UPaperSprite*>                              Body;                                                       // 0x0008   (0x0010)  
	UPaperSprite*                                      EndCap;                                                     // 0x0018   (0x0008)  
	float                                              MinimumAngle;                                               // 0x0020   (0x0004)  
	float                                              MaximumAngle;                                               // 0x0024   (0x0004)  
	bool                                               bEnableCollision;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              CollisionOffset;                                            // 0x002C   (0x0004)  
	int32_t                                            DrawOrder;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/Paper2D.PaperTileInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPaperTileInfo
{ 
	UPaperTileSet*                                     TileSet;                                                    // 0x0000   (0x0008)  
	int32_t                                            PackedTileIndex;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/Paper2D.PaperTileSetTerrain
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPaperTileSetTerrain
{ 
	FString                                            TerrainName;                                                // 0x0000   (0x0010)  
	int32_t                                            CenterTileIndex;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Paper2D.PaperTileMetadata
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPaperTileMetadata
{ 
	FName                                              UserDataName;                                               // 0x0000   (0x0008)  
	FSpriteGeometryCollection                          CollisionData;                                              // 0x0008   (0x0030)  
	char                                               TerrainMembership;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/Paper2D.SpriteGeometryCollection
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSpriteGeometryCollection
{ 
	TArray<FSpriteGeometryShape>                       Shapes;                                                     // 0x0000   (0x0010)  
	TEnumAsByte<ESpritePolygonMode>                    GeometryType;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            PixelsPerSubdivisionX;                                      // 0x0014   (0x0004)  
	int32_t                                            PixelsPerSubdivisionY;                                      // 0x0018   (0x0004)  
	bool                                               bAvoidVertexMerging;                                        // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              AlphaThreshold;                                             // 0x0020   (0x0004)  
	float                                              DetailAmount;                                               // 0x0024   (0x0004)  
	float                                              SimplifyEpsilon;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/Paper2D.SpriteGeometryShape
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSpriteGeometryShape
{ 
	ESpriteShapeType                                   ShapeType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FVector2D>                                  Vertices;                                                   // 0x0008   (0x0010)  
	FVector2D                                          BoxSize;                                                    // 0x0018   (0x0008)  
	FVector2D                                          BoxPosition;                                                // 0x0020   (0x0008)  
	float                                              Rotation;                                                   // 0x0028   (0x0004)  
	bool                                               bNegativeWinding;                                           // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/Paper2D.SpriteDrawCallRecord
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FSpriteDrawCallRecord
{ 
	FVector                                            Destination;                                                // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	UTexture*                                          BaseTexture;                                                // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0018   (0x0030)  MISSED
	FColor                                             Color;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_6[0x84];                                      // 0x004C   (0x0084)  MISSED
};

/// Struct /Script/Paper2D.SpriteAssetInitParameters
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSpriteAssetInitParameters
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Enum /Script/Paper2D.EFlipbookCollisionMode
/// Size: 0x04
enum EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision                                              = 0,
	EFlipbookCollisionMode__FirstFrameCollision                                      = 1,
	EFlipbookCollisionMode__EachFrameCollision                                       = 2,
	EFlipbookCollisionMode__EFlipbookCollisionMode_MAX                               = 3
};

/// Enum /Script/Paper2D.EPaperSpriteAtlasPadding
/// Size: 0x03
enum EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder                                           = 0,
	EPaperSpriteAtlasPadding__PadWithZero                                            = 1,
	EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX                           = 2
};

/// Enum /Script/Paper2D.ETileMapProjectionMode
/// Size: 0x05
enum ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal                                               = 0,
	ETileMapProjectionMode__IsometricDiamond                                         = 1,
	ETileMapProjectionMode__IsometricStaggered                                       = 2,
	ETileMapProjectionMode__HexagonalStaggered                                       = 3,
	ETileMapProjectionMode__ETileMapProjectionMode_MAX                               = 4
};

/// Enum /Script/Paper2D.ESpritePivotMode
/// Size: 0x11
enum ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left                                                       = 0,
	ESpritePivotMode__Top_Center                                                     = 1,
	ESpritePivotMode__Top_Right                                                      = 2,
	ESpritePivotMode__Center_Left                                                    = 3,
	ESpritePivotMode__Center_Center                                                  = 4,
	ESpritePivotMode__Center_Right                                                   = 5,
	ESpritePivotMode__Bottom_Left                                                    = 6,
	ESpritePivotMode__Bottom_Center                                                  = 7,
	ESpritePivotMode__Bottom_Right                                                   = 8,
	ESpritePivotMode__Custom                                                         = 9,
	ESpritePivotMode__ESpritePivotMode_MAX                                           = 10
};

/// Enum /Script/Paper2D.ESpritePolygonMode
/// Size: 0x06
enum ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox                                            = 0,
	ESpritePolygonMode__TightBoundingBox                                             = 1,
	ESpritePolygonMode__ShrinkWrapped                                                = 2,
	ESpritePolygonMode__FullyCustom                                                  = 3,
	ESpritePolygonMode__Diced                                                        = 4,
	ESpritePolygonMode__ESpritePolygonMode_MAX                                       = 5
};

/// Enum /Script/Paper2D.ESpriteShapeType
/// Size: 0x04
enum ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box                                                            = 0,
	ESpriteShapeType__Circle                                                         = 1,
	ESpriteShapeType__Polygon                                                        = 2,
	ESpriteShapeType__ESpriteShapeType_MAX                                           = 3
};

/// Enum /Script/Paper2D.ESpriteCollisionMode
/// Size: 0x04
enum ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None                                                       = 0,
	ESpriteCollisionMode__Use2DPhysics                                               = 1,
	ESpriteCollisionMode__Use3DPhysics                                               = 2,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX                                   = 3
};

