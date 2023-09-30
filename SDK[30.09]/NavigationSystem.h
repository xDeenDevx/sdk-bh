/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NavigationSystem.

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x0210 (0x000228 - 0x000438)
class ANavigationData : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0228   (0x0008)  MISSED
	UPrimitiveComponent*                               RenderingComp;                                              // 0x0230   (0x0008)  
	FNavDataConfig                                     NavDataConfig;                                              // 0x0238   (0x0080)  
	bool                                               bEnableDrawing;                                             // 0x02B8:0 (0x0001)  
	bool                                               bForceRebuildOnLoad;                                        // 0x02B8:1 (0x0001)  
	bool                                               bAutoDestroyWhenNoNavigation;                               // 0x02B8:2 (0x0001)  
	bool                                               bCanBeMainNavData;                                          // 0x02B8:3 (0x0001)  
	bool                                               bCanSpawnOnRebuild;                                         // 0x02B8:4 (0x0001)  
	bool                                               bRebuildAtRuntime;                                          // 0x02B8:5 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x02B9   (0x0003)  MISSED
	ERuntimeGenerationType                             RuntimeGeneration;                                          // 0x02BC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02BD   (0x0003)  MISSED
	float                                              ObservedPathsTickInterval;                                  // 0x02C0   (0x0004)  
	uint32_t                                           DataVersion;                                                // 0x02C4   (0x0004)  
	unsigned char                                      UnknownData03_5[0x108];                                     // 0x02C8   (0x0108)  MISSED
	TArray<FSupportedAreaData>                         SupportedAreas;                                             // 0x03D0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x58];                                      // 0x03E0   (0x0058)  MISSED
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x0000 (0x000438 - 0x000438)
class AAbstractNavData : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrowdManagerBase : public UObject
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0018 (0x000030 - 0x000048)
class UNavArea : public UNavAreaBase
{ 
public:
	float                                              DefaultCost;                                                // 0x0030   (0x0004)  
	float                                              FixedAreaEnteringCost;                                      // 0x0034   (0x0004)  
	FColor                                             DrawColor;                                                  // 0x0038   (0x0004)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x003C   (0x0004)  
	bool                                               bSupportsAgent0;                                            // 0x0040:0 (0x0001)  
	bool                                               bSupportsAgent1;                                            // 0x0040:1 (0x0001)  
	bool                                               bSupportsAgent2;                                            // 0x0040:2 (0x0001)  
	bool                                               bSupportsAgent3;                                            // 0x0040:3 (0x0001)  
	bool                                               bSupportsAgent4;                                            // 0x0040:4 (0x0001)  
	bool                                               bSupportsAgent5;                                            // 0x0040:5 (0x0001)  
	bool                                               bSupportsAgent6;                                            // 0x0040:6 (0x0001)  
	bool                                               bSupportsAgent7;                                            // 0x0040:7 (0x0001)  
	bool                                               bSupportsAgent8;                                            // 0x0041:0 (0x0001)  
	bool                                               bSupportsAgent9;                                            // 0x0041:1 (0x0001)  
	bool                                               bSupportsAgent10;                                           // 0x0041:2 (0x0001)  
	bool                                               bSupportsAgent11;                                           // 0x0041:3 (0x0001)  
	bool                                               bSupportsAgent12;                                           // 0x0041:4 (0x0001)  
	bool                                               bSupportsAgent13;                                           // 0x0041:5 (0x0001)  
	bool                                               bSupportsAgent14;                                           // 0x0041:6 (0x0001)  
	bool                                               bSupportsAgent15;                                           // 0x0041:7 (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Default : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_LowHeight : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Null : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Obstacle : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavAreaMeta : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{ 
public:
	UClass*                                            Agent0Area;                                                 // 0x0048   (0x0008)  
	UClass*                                            Agent1Area;                                                 // 0x0050   (0x0008)  
	UClass*                                            Agent2Area;                                                 // 0x0058   (0x0008)  
	UClass*                                            Agent3Area;                                                 // 0x0060   (0x0008)  
	UClass*                                            Agent4Area;                                                 // 0x0068   (0x0008)  
	UClass*                                            Agent5Area;                                                 // 0x0070   (0x0008)  
	UClass*                                            Agent6Area;                                                 // 0x0078   (0x0008)  
	UClass*                                            Agent7Area;                                                 // 0x0080   (0x0008)  
	UClass*                                            Agent8Area;                                                 // 0x0088   (0x0008)  
	UClass*                                            Agent9Area;                                                 // 0x0090   (0x0008)  
	UClass*                                            Agent10Area;                                                // 0x0098   (0x0008)  
	UClass*                                            Agent11Area;                                                // 0x00A0   (0x0008)  
	UClass*                                            Agent12Area;                                                // 0x00A8   (0x0008)  
	UClass*                                            Agent13Area;                                                // 0x00B0   (0x0008)  
	UClass*                                            Agent14Area;                                                // 0x00B8   (0x0008)  
	UClass*                                            Agent15Area;                                                // 0x00C0   (0x0008)  
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UNavCollision : public UNavCollisionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0070   (0x0010)  MISSED
	TArray<FNavCollisionCylinder>                      CylinderCollision;                                          // 0x0080   (0x0010)  
	TArray<FNavCollisionBox>                           BoxCollision;                                               // 0x0090   (0x0010)  
	UClass*                                            AreaClass;                                                  // 0x00A0   (0x0008)  
	bool                                               bGatherConvexGeometry;                                      // 0x00A8:0 (0x0001)  
	bool                                               bCreateOnClient;                                            // 0x00A8:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x2F];                                      // 0x00A9   (0x002F)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x0000 (0x000438 - 0x000438)
class ANavigationGraph : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x0000 (0x000228 - 0x000228)
class ANavigationGraphNode : public AActor
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0020 (0x000200 - 0x000220)
class UNavigationGraphNodeComponent : public USceneComponent
{ 
public:
	FNavGraphNode                                      Node;                                                       // 0x01F8   (0x0018)  
	UNavigationGraphNodeComponent*                     NextNodeComponent;                                          // 0x0210   (0x0008)  
	UNavigationGraphNodeComponent*                     PrevNodeComponent;                                          // 0x0218   (0x0008)  
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UNavigationInvokerComponent : public UActorComponent
{ 
public:
	float                                              TileGenerationRadius;                                       // 0x00B0   (0x0004)  
	float                                              TileRemovalRadius;                                          // 0x00B4   (0x0004)  
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0060 (0x000028 - 0x000088)
class UNavigationPath : public UObject
{ 
public:
	FMulticastInlineDelegate                           PathUpdatedNotifier;                                        // 0x0028   (0x0010)  
	TArray<FVector>                                    PathPoints;                                                 // 0x0038   (0x0010)  
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3F];                                      // 0x0049   (0x003F)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationPath.IsValid
	bool IsValid();                                                                                                          // [0x35a4e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsStringPulled
	bool IsStringPulled();                                                                                                   // [0x15a0770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsPartial
	bool IsPartial();                                                                                                        // [0x35a4e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathLength
	float GetPathLength();                                                                                                   // [0x35a46c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathCost
	float GetPathCost();                                                                                                     // [0x35a4460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetDebugString
	FString GetDebugString();                                                                                                // [0x35a4350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);                              // [0x35a3ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing
	void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);                                              // [0x35a3e10] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavigationPathGenerator : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0020 (0x000028 - 0x000048)
class UNavigationQueryFilter : public UObject
{ 
public:
	TArray<FNavigationFilterArea>                      Areas;                                                      // 0x0028   (0x0010)  
	FNavigationFilterFlags                             IncludeFlags;                                               // 0x0038   (0x0004)  
	FNavigationFilterFlags                             ExcludeFlags;                                               // 0x003C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x1600 (0x000028 - 0x001628)
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
public:
	ANavigationData*                                   MainNavData;                                                // 0x0028   (0x0008)  
	ANavigationData*                                   AbstractNavData;                                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0038   (0x0004)  MISSED
	FName                                              DefaultAgentName;                                           // 0x003C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TWeakObjectPtr<UClass*>                            CrowdManagerClass;                                          // 0x0048   (0x0028)  
	bool                                               bAutoCreateNavigationData;                                  // 0x0070:0 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel;                              // 0x0070:1 (0x0001)  
	bool                                               bAllowClientSideNavigation;                                 // 0x0070:2 (0x0001)  
	bool                                               bShouldDiscardSubLevelNavData;                              // 0x0070:3 (0x0001)  
	bool                                               bTickWhilePaused;                                           // 0x0070:4 (0x0001)  
	bool                                               bSupportRebuilding;                                         // 0x0070:5 (0x0001)  
	bool                                               bInitialBuildingLocked;                                     // 0x0070:6 (0x0001)  
	unsigned char                                      UnknownBit02 : 1;                                           // 0x0070:7 (0x0001)  MISSED
	bool                                               bSkipAgentHeightCheckWhenPickingNavData;                    // 0x0071:0 (0x0001)  
	bool                                               bGenerateNavigationOnlyAroundNavigationInvokers;            // 0x0071:1 (0x0001)  
	unsigned char                                      UnknownData03_4[0x2];                                       // 0x0072   (0x0002)  MISSED
	float                                              ActiveTilesUpdateInterval;                                  // 0x0074   (0x0004)  
	ENavDataGatheringModeConfig                        DataGatheringMode;                                          // 0x0078   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              DirtyAreaWarningSizeThreshold;                              // 0x007C   (0x0004)  
	TArray<FNavDataConfig>                             SupportedAgents;                                            // 0x0080   (0x0010)  
	FNavAgentSelector                                  SupportedAgentsMask;                                        // 0x0090   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<ANavigationData*>                           NavDataSet;                                                 // 0x0098   (0x0010)  
	TArray<ANavigationData*>                           NavDataRegistrationQueue;                                   // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData06_5[0x10];                                      // 0x00B8   (0x0010)  MISSED
	FMulticastInlineDelegate                           OnNavDataRegisteredEvent;                                   // 0x00C8   (0x0010)  
	FMulticastInlineDelegate                           OnNavigationGenerationFinishedDelegate;                     // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData07_5[0xDC];                                      // 0x00E8   (0x00DC)  MISSED
	FNavigationSystemRunMode                           OperationMode;                                              // 0x01C4   (0x0001)  
	unsigned char                                      UnknownData08_5[0x143F];                                    // 0x01C5   (0x143F)  MISSED
	float                                              DirtyAreasUpdateFreq;                                       // 0x1604   (0x0004)  
	unsigned char                                      UnknownData09_6[0x20];                                      // 0x1608   (0x0020)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	void UnregisterNavigationInvoker(AActor* Invoker);                                                                       // [0x35a5e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	void SimpleMoveToLocation(AController* Controller, FVector& Goal);                                                       // [0x35a5d60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	void SimpleMoveToActor(AController* Controller, AActor* Goal);                                                           // [0x35a5ca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);                                                 // [0x35a5c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);                                                      // [0x35a5b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	void ResetMaxSimultaneousTileGenerationJobsCount();                                                                      // [0x35a5b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	void RegisterNavigationInvoker(AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);                    // [0x35a5a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	FVector ProjectPointToNavigation(UObject* WorldContextObject, FVector& Point, ANavigationData* NavData, UClass* FilterClass, FVector QueryExtent); // [0x35a5870] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	void OnNavigationBoundsUpdated(ANavMeshBoundsVolume* NavVolume);                                                         // [0x35a57e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast
	bool NavigationRaycast(UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, UClass* FilterClass, AController* Querier); // [0x35a55b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	bool K2_ReplaceAreaInOctreeData(UObject* Object, UClass* OldArea, UClass* NewArea);                                      // [0x35a54a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	bool K2_ProjectPointToNavigation(UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, UClass* FilterClass, FVector QueryExtent); // [0x35a52a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	bool K2_GetRandomReachablePointInRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass); // [0x35a5080] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	bool K2_GetRandomPointInNavigableRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass); // [0x35a4e60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	bool K2_GetRandomLocationInNavigableRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass); // [0x35a4e60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	bool IsNavigationBeingBuiltOrLocked(UObject* WorldContextObject);                                                        // [0x35a4d70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	bool IsNavigationBeingBuilt(UObject* WorldContextObject);                                                                // [0x35a4ce0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	FVector GetRandomReachablePointInRadius(UObject* WorldContextObject, FVector& Origin, float Radius, ANavigationData* NavData, UClass* FilterClass); // [0x35a4b00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	FVector GetRandomPointInNavigableRadius(UObject* WorldContextObject, FVector& Origin, float Radius, ANavigationData* NavData, UClass* FilterClass); // [0x35a4920] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength
	TEnumAsByte<ENavigationQueryResult> GetPathLength(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathLength, ANavigationData* NavData, UClass* FilterClass); // [0x35a46f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost
	TEnumAsByte<ENavigationQueryResult> GetPathCost(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathCost, ANavigationData* NavData, UClass* FilterClass); // [0x35a4490] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem
	UNavigationSystemV1* GetNavigationSystem(UObject* WorldContextObject);                                                   // [0x35a43d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	UNavigationPath* FindPathToLocationSynchronously(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, AActor* PathfindingContext, UClass* FilterClass); // [0x35a4180] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	UNavigationPath* FindPathToActorSynchronously(UObject* WorldContextObject, FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, UClass* FilterClass); // [0x35a3f70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0008 (0x000050 - 0x000058)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
public:
	bool                                               bStrictlyStatic;                                            // 0x0050:0 (0x0001)  
	bool                                               bCreateOnClient;                                            // 0x0050:1 (0x0001)  
	bool                                               bAutoSpawnMissingNavData;                                   // 0x0050:2 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel;                              // 0x0050:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x00F0 (0x000228 - 0x000318)
class ANavigationTestingActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0228   (0x0010)  MISSED
	UCapsuleComponent*                                 CapsuleComponent;                                           // 0x0238   (0x0008)  
	UNavigationInvokerComponent*                       InvokerComponent;                                           // 0x0240   (0x0008)  
	bool                                               bActAsNavigationInvoker;                                    // 0x0248:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0249   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProps;                                              // 0x0250   (0x0030)  
	FVector                                            QueryingExtent;                                             // 0x0280   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x028C   (0x0004)  MISSED
	ANavigationData*                                   MyNavData;                                                  // 0x0290   (0x0008)  
	FVector                                            ProjectedLocation;                                          // 0x0298   (0x000C)  
	bool                                               bProjectedLocationValid;                                    // 0x02A4:0 (0x0001)  
	bool                                               bSearchStart;                                               // 0x02A4:1 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x02A5   (0x0003)  MISSED
	float                                              CostLimitFactor;                                            // 0x02A8   (0x0004)  
	float                                              MinimumCostLimit;                                           // 0x02AC   (0x0004)  
	bool                                               bBacktracking;                                              // 0x02B0:0 (0x0001)  
	bool                                               bUseHierarchicalPathfinding;                                // 0x02B0:1 (0x0001)  
	bool                                               bGatherDetailedInfo;                                        // 0x02B0:2 (0x0001)  
	bool                                               bDrawDistanceToWall;                                        // 0x02B0:3 (0x0001)  
	bool                                               bShowNodePool;                                              // 0x02B0:4 (0x0001)  
	bool                                               bShowBestPath;                                              // 0x02B0:5 (0x0001)  
	bool                                               bShowDiffWithPreviousStep;                                  // 0x02B0:6 (0x0001)  
	bool                                               bShouldBeVisibleInGame;                                     // 0x02B0:7 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x02B1   (0x0003)  MISSED
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                            // 0x02B4   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x02B5   (0x0003)  MISSED
	FVector2D                                          TextCanvasOffset;                                           // 0x02B8   (0x0008)  
	bool                                               bPathExist;                                                 // 0x02C0:0 (0x0001)  
	bool                                               bPathIsPartial;                                             // 0x02C0:1 (0x0001)  
	bool                                               bPathSearchOutOfNodes;                                      // 0x02C0:2 (0x0001)  
	unsigned char                                      UnknownData06_4[0x3];                                       // 0x02C1   (0x0003)  MISSED
	float                                              PathfindingTime;                                            // 0x02C4   (0x0004)  
	float                                              PathCost;                                                   // 0x02C8   (0x0004)  
	int32_t                                            PathfindingSteps;                                           // 0x02CC   (0x0004)  
	ANavigationTestingActor*                           OtherActor;                                                 // 0x02D0   (0x0008)  
	UClass*                                            FilterClass;                                                // 0x02D8   (0x0008)  
	int32_t                                            ShowStepIndex;                                              // 0x02E0   (0x0004)  
	float                                              OffsetFromCornersDistance;                                  // 0x02E4   (0x0004)  
	unsigned char                                      UnknownData07_6[0x30];                                      // 0x02E8   (0x0030)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0020 (0x000450 - 0x000470)
class UNavLinkComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0450   (0x0008)  MISSED
	TArray<FNavigationLink>                            Links;                                                      // 0x0458   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0468   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UNavRelevantComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x24];                                      // 0x00B0   (0x0024)  MISSED
	bool                                               bAttachToOwnersRoot;                                        // 0x00D4:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00D5   (0x0003)  MISSED
	UObject*                                           CachedNavParent;                                            // 0x00D8   (0x0008)  


	/// Functions
	// Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	void SetNavigationRelevancy(bool bRelevant);                                                                             // [0x35a7e20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x00B0 (0x0000E0 - 0x000190)
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00E0   (0x0008)  MISSED
	uint32_t                                           NavLinkUserId;                                              // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	UClass*                                            EnabledAreaClass;                                           // 0x00F0   (0x0008)  
	UClass*                                            DisabledAreaClass;                                          // 0x00F8   (0x0008)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0100   (0x0004)  
	FVector                                            LinkRelativeStart;                                          // 0x0104   (0x000C)  
	FVector                                            LinkRelativeEnd;                                            // 0x0110   (0x000C)  
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                              // 0x011C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x011D   (0x0003)  MISSED
	bool                                               bLinkEnabled;                                               // 0x0120:0 (0x0001)  
	bool                                               bNotifyWhenEnabled;                                         // 0x0120:1 (0x0001)  
	bool                                               bNotifyWhenDisabled;                                        // 0x0120:2 (0x0001)  
	bool                                               bCreateBoxObstacle;                                         // 0x0120:3 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0121   (0x0003)  MISSED
	FVector                                            ObstacleOffset;                                             // 0x0124   (0x000C)  
	FVector                                            ObstacleExtent;                                             // 0x0130   (0x000C)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	UClass*                                            ObstacleAreaClass;                                          // 0x0140   (0x0008)  
	float                                              BroadcastRadius;                                            // 0x0148   (0x0004)  
	float                                              BroadcastInterval;                                          // 0x014C   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                           // 0x0150   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3F];                                      // 0x0151   (0x003F)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkCustomInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkHostInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x0000 (0x000450 - 0x000450)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavLinkTrivial : public UNavLinkDefinition
{ 
public:
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x0008 (0x000260 - 0x000268)
class ANavMeshBoundsVolume : public AVolume
{ 
public:
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0260   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0264   (0x0004)  MISSED
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0010 (0x000450 - 0x000460)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0450   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x0060 (0x0000E0 - 0x000140)
class UNavModifierComponent : public UNavRelevantComponent
{ 
public:
	UClass*                                            AreaClass;                                                  // 0x00E0   (0x0008)  
	FVector                                            FailsafeExtent;                                             // 0x00E8   (0x000C)  
	bool                                               bIncludeAgentHeight;                                        // 0x00F4:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x4B];                                      // 0x00F5   (0x004B)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass
	void SetAreaClass(UClass* NewAreaClass);                                                                                 // [0x35a7d90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0018 (0x000260 - 0x000278)
class ANavModifierVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0260   (0x0008)  MISSED
	UClass*                                            AreaClass;                                                  // 0x0268   (0x0008)  
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                     // 0x0270   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0271   (0x0007)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass
	void SetAreaClass(UClass* NewAreaClass);                                                                                 // [0x35a7d00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavNodeInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x0010 (0x000228 - 0x000238)
class ANavSystemConfigOverride : public AActor
{ 
public:
	UNavigationSystemConfig*                           NavigationSystemConfig;                                     // 0x0228   (0x0008)  
	ENavSystemOverridePolicy                           OverridePolicy;                                             // 0x0230   (0x0001)  
	bool                                               bLoadOnClient;                                              // 0x0231:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0232   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x0000 (0x000450 - 0x000450)
class UNavTestRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0000 (0x000048 - 0x000048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x00B0 (0x000438 - 0x0004E8)
class ARecastNavMesh : public ANavigationData
{ 
public:
	bool                                               bDrawTriangleEdges;                                         // 0x0438:0 (0x0001)  
	bool                                               bDrawPolyEdges;                                             // 0x0438:1 (0x0001)  
	bool                                               bDrawFilledPolys;                                           // 0x0438:2 (0x0001)  
	bool                                               bDrawNavMeshEdges;                                          // 0x0438:3 (0x0001)  
	bool                                               bDrawTileBounds;                                            // 0x0438:4 (0x0001)  
	bool                                               bDrawPathCollidingGeometry;                                 // 0x0438:5 (0x0001)  
	bool                                               bDrawTileLabels;                                            // 0x0438:6 (0x0001)  
	bool                                               bDrawPolygonLabels;                                         // 0x0438:7 (0x0001)  
	bool                                               bDrawDefaultPolygonCost;                                    // 0x0439:0 (0x0001)  
	bool                                               bDrawLabelsOnPathNodes;                                     // 0x0439:1 (0x0001)  
	bool                                               bDrawNavLinks;                                              // 0x0439:2 (0x0001)  
	bool                                               bDrawFailedNavLinks;                                        // 0x0439:3 (0x0001)  
	bool                                               bDrawClusters;                                              // 0x0439:4 (0x0001)  
	bool                                               bDrawOctree;                                                // 0x0439:5 (0x0001)  
	bool                                               bDrawOctreeDetails;                                         // 0x0439:6 (0x0001)  
	bool                                               bDrawMarkedForbiddenPolys;                                  // 0x0439:7 (0x0001)  
	bool                                               bDistinctlyDrawTilesBeingBuilt;                             // 0x043A:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x043B   (0x0001)  MISSED
	float                                              DrawOffset;                                                 // 0x043C   (0x0004)  
	bool                                               bFixedTilePoolSize;                                         // 0x0440:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0441   (0x0003)  MISSED
	int32_t                                            TilePoolSize;                                               // 0x0444   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0448   (0x0004)  
	float                                              CellSize;                                                   // 0x044C   (0x0004)  
	float                                              CellHeight;                                                 // 0x0450   (0x0004)  
	float                                              AgentRadius;                                                // 0x0454   (0x0004)  
	float                                              AgentHeight;                                                // 0x0458   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x045C   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x0460   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0464   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0468   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x046C   (0x0004)  
	int32_t                                            MaxSimultaneousTileGenerationJobsCount;                     // 0x0470   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x0474   (0x0004)  
	int32_t                                            PolyRefTileBits;                                            // 0x0478   (0x0004)  
	int32_t                                            PolyRefNavPolyBits;                                         // 0x047C   (0x0004)  
	int32_t                                            PolyRefSaltBits;                                            // 0x0480   (0x0004)  
	FVector                                            NavMeshOriginOffset;                                        // 0x0484   (0x000C)  
	float                                              DefaultDrawDistance;                                        // 0x0490   (0x0004)  
	float                                              DefaultMaxSearchNodes;                                      // 0x0494   (0x0004)  
	float                                              DefaultMaxHierarchicalSearchNodes;                          // 0x0498   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x049C   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x049D   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x049E   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x04A0   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x04A4   (0x0004)  
	bool                                               bSortNavigationAreasByCost;                                 // 0x04A8:0 (0x0001)  
	bool                                               bPerformVoxelFiltering;                                     // 0x04A8:1 (0x0001)  
	bool                                               bMarkLowHeightAreas;                                        // 0x04A8:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas;                           // 0x04A8:3 (0x0001)  
	bool                                               bFilterLowSpanSequences;                                    // 0x04A8:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache;                                // 0x04A8:5 (0x0001)  
	bool                                               bDoFullyAsyncNavDataGathering;                              // 0x04A8:6 (0x0001)  
	bool                                               bUseBetterOffsetsFromCorners;                               // 0x04A8:7 (0x0001)  
	bool                                               bStoreEmptyTileLayers;                                      // 0x04A9:0 (0x0001)  
	bool                                               bUseVirtualFilters;                                         // 0x04A9:1 (0x0001)  
	bool                                               bAllowNavLinkAsPathEnd;                                     // 0x04A9:2 (0x0001)  
	bool                                               bUseVoxelCache;                                             // 0x04A9:3 (0x0001)  
	unsigned char                                      UnknownData03_4[0x2];                                       // 0x04AA   (0x0002)  MISSED
	float                                              TileSetUpdateInterval;                                      // 0x04AC   (0x0004)  
	float                                              HeuristicScale;                                             // 0x04B0   (0x0004)  
	float                                              VerticalDeviationFromGroundCompensation;                    // 0x04B4   (0x0004)  
	unsigned char                                      UnknownData04_6[0x30];                                      // 0x04B8   (0x0030)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	bool K2_ReplaceAreaInTileBounds(FBox Bounds, UClass* OldArea, UClass* NewArea, bool ReplaceLinks);                       // [0x35a7b60] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0010 (0x000030 - 0x000040)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavCollisionBox
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	FVector                                            Extent;                                                     // 0x000C   (0x000C)  
};

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNavCollisionCylinder
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	float                                              Radius;                                                     // 0x000C   (0x0004)  
	float                                              Height;                                                     // 0x0010   (0x0004)  
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSupportedAreaData
{ 
	FString                                            AreaClassName;                                              // 0x0000   (0x0010)  
	int32_t                                            AreaId;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	UClass*                                            AreaClass;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavGraphNode
{ 
	UObject*                                           Owner;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavGraphEdge
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNavigationFilterFlags
{ 
	bool                                               bNavFlag0;                                                  // 0x0000:0 (0x0001)  
	bool                                               bNavFlag1;                                                  // 0x0000:1 (0x0001)  
	bool                                               bNavFlag2;                                                  // 0x0000:2 (0x0001)  
	bool                                               bNavFlag3;                                                  // 0x0000:3 (0x0001)  
	bool                                               bNavFlag4;                                                  // 0x0000:4 (0x0001)  
	bool                                               bNavFlag5;                                                  // 0x0000:5 (0x0001)  
	bool                                               bNavFlag6;                                                  // 0x0000:6 (0x0001)  
	bool                                               bNavFlag7;                                                  // 0x0000:7 (0x0001)  
	bool                                               bNavFlag8;                                                  // 0x0001:0 (0x0001)  
	bool                                               bNavFlag9;                                                  // 0x0001:1 (0x0001)  
	bool                                               bNavFlag10;                                                 // 0x0001:2 (0x0001)  
	bool                                               bNavFlag11;                                                 // 0x0001:3 (0x0001)  
	bool                                               bNavFlag12;                                                 // 0x0001:4 (0x0001)  
	bool                                               bNavFlag13;                                                 // 0x0001:5 (0x0001)  
	bool                                               bNavFlag14;                                                 // 0x0001:6 (0x0001)  
	bool                                               bNavFlag15;                                                 // 0x0001:7 (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavigationFilterArea
{ 
	UClass*                                            AreaClass;                                                  // 0x0000   (0x0008)  
	float                                              TravelCostOverride;                                         // 0x0008   (0x0004)  
	float                                              EnteringCostOverride;                                       // 0x000C   (0x0004)  
	bool                                               bIsExcluded;                                                // 0x0010:0 (0x0001)  
	bool                                               bOverrideTravelCost;                                        // 0x0010:1 (0x0001)  
	bool                                               bOverrideEnteringCost;                                      // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0008 (0x000068 - 0x000070)
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{ 
	uint32_t                                           NavLinkUserId;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRecastNavMeshGenerationProperties
{ 
	int32_t                                            TilePoolSize;                                               // 0x0000   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0004   (0x0004)  
	float                                              CellSize;                                                   // 0x0008   (0x0004)  
	float                                              CellHeight;                                                 // 0x000C   (0x0004)  
	float                                              AgentRadius;                                                // 0x0010   (0x0004)  
	float                                              AgentHeight;                                                // 0x0014   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0018   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x001C   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0020   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0024   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0028   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x002C   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x0030   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0034   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0038   (0x0004)  
	bool                                               bSortNavigationAreasByCost;                                 // 0x003C:0 (0x0001)  
	bool                                               bPerformVoxelFiltering;                                     // 0x003C:1 (0x0001)  
	bool                                               bMarkLowHeightAreas;                                        // 0x003C:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas;                           // 0x003C:3 (0x0001)  
	bool                                               bFilterLowSpanSequences;                                    // 0x003C:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache;                                // 0x003C:5 (0x0001)  
	bool                                               bFixedTilePoolSize;                                         // 0x003C:6 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x05
enum ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static                                                   = 0,
	ERuntimeGenerationType__DynamicModifiersOnly                                     = 1,
	ERuntimeGenerationType__Dynamic                                                  = 2,
	ERuntimeGenerationType__LegacyGeneration                                         = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX                               = 4
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x04
enum ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost                                                       = 0,
	ENavCostDisplay__HeuristicOnly                                                   = 1,
	ENavCostDisplay__RealCostOnly                                                    = 2,
	ENavCostDisplay__ENavCostDisplay_MAX                                             = 3
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x04
enum ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override                                               = 0,
	ENavSystemOverridePolicy__Append                                                 = 1,
	ENavSystemOverridePolicy__Skip                                                   = 2,
	ENavSystemOverridePolicy__ENavSystemOverridePolicy_MAX                           = 3
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x04
enum ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone                                                    = 0,
	ERecastPartitioning__Watershed                                                   = 1,
	ERecastPartitioning__ChunkyMonotone                                              = 2,
	ERecastPartitioning__ERecastPartitioning_MAX                                     = 3
};

