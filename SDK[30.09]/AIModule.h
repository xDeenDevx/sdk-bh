/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AIModule.

/// Class /Script/AIModule.BTNode
/// Size: 0x0030 (0x000028 - 0x000058)
class UBTNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FString                                            NodeName;                                                   // 0x0030   (0x0010)  
	UBehaviorTree*                                     TreeAsset;                                                  // 0x0040   (0x0008)  
	UBTCompositeNode*                                  ParentNode;                                                 // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/AIModule.BTTaskNode
/// Size: 0x0018 (0x000058 - 0x000070)
class UBTTaskNode : public UBTNode
{ 
public:
	TArray<UBTService*>                                Services;                                                   // 0x0058   (0x0010)  
	bool                                               bIgnoreRestartSelf;                                         // 0x0068:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTAuxiliaryNode
/// Size: 0x0008 (0x000058 - 0x000060)
class UBTAuxiliaryNode : public UBTNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Class /Script/AIModule.BTService
/// Size: 0x0010 (0x000060 - 0x000070)
class UBTService : public UBTAuxiliaryNode
{ 
public:
	float                                              Interval;                                                   // 0x0060   (0x0004)  
	float                                              RandomDeviation;                                            // 0x0064   (0x0004)  
	bool                                               bCallTickOnSearchStart;                                     // 0x0068:0 (0x0001)  
	bool                                               bRestartTimerOnEachActivation;                              // 0x0068:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/AIModule.AIController
/// Size: 0x0090 (0x0002A0 - 0x000330)
class AAIController : public AController
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x02A0   (0x0038)  MISSED
	bool                                               bStartAILogicOnPossess;                                     // 0x02D8:0 (0x0001)  
	bool                                               bStopAILogicOnUnposses;                                     // 0x02D8:1 (0x0001)  
	bool                                               bLOSflag;                                                   // 0x02D8:2 (0x0001)  
	bool                                               bSkipExtraLOSChecks;                                        // 0x02D8:3 (0x0001)  
	bool                                               bAllowStrafe;                                               // 0x02D8:4 (0x0001)  
	bool                                               bWantsPlayerState;                                          // 0x02D8:5 (0x0001)  
	bool                                               bSetControlRotationFromPawnOrientation;                     // 0x02D8:6 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x02D9   (0x0007)  MISSED
	UPathFollowingComponent*                           PathFollowingComponent;                                     // 0x02E0   (0x0008)  
	UBrainComponent*                                   BrainComponent;                                             // 0x02E8   (0x0008)  
	UAIPerceptionComponent*                            PerceptionComponent;                                        // 0x02F0   (0x0008)  
	UPawnActionsComponent*                             ActionsComp;                                                // 0x02F8   (0x0008)  
	UBlackboardComponent*                              Blackboard;                                                 // 0x0300   (0x0008)  
	UGameplayTasksComponent*                           CachedGameplayTasksComponent;                               // 0x0308   (0x0008)  
	UClass*                                            DefaultNavigationFilterClass;                               // 0x0310   (0x0008)  
	FMulticastInlineDelegate                           ReceiveMoveCompleted;                                       // 0x0318   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0328   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.AIController.UseBlackboard
	bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent*& BlackboardComponent);                        // [0x3639230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIController.UnclaimTaskResource
	void UnclaimTaskResource(UClass* ResourceClass);                                                                         // [0x3638fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetPathFollowingComponent
	void SetPathFollowingComponent(UPathFollowingComponent* NewPFComponent);                                                 // [0x3638ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetMoveBlockDetection
	void SetMoveBlockDetection(bool bEnable);                                                                                // [0x3638a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.RunBehaviorTree
	bool RunBehaviorTree(UBehaviorTree* BTAsset);                                                                            // [0x3638850] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.OnUsingBlackBoard
	void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);                          // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.AIController.OnGameplayTaskResourcesClaimed
	void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);            // [0x3638510] Native|Public        
	// Function /Script/AIModule.AIController.MoveToLocation
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath); // [0x3638280] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.MoveToActor
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath); // [0x3638040] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocus
	void K2_SetFocus(AActor* NewFocus);                                                                                      // [0x3637ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocalPoint
	void K2_SetFocalPoint(FVector FP);                                                                                       // [0x3637e10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_ClearFocus
	void K2_ClearFocus();                                                                                                    // [0x3637df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.HasPartialPath
	bool HasPartialPath();                                                                                                   // [0x3637c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetPathFollowingComponent
	UPathFollowingComponent* GetPathFollowingComponent();                                                                    // [0x1496210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetMoveStatus
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus();                                                                       // [0x36378c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetImmediateMoveDestination
	FVector GetImmediateMoveDestination();                                                                                   // [0x3637790] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocusActor
	AActor* GetFocusActor();                                                                                                 // [0x3637760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPointOnActor
	FVector GetFocalPointOnActor(AActor* Actor);                                                                             // [0x36376b0] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPoint
	FVector GetFocalPoint();                                                                                                 // [0x3637670] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetAIPerceptionComponent
	UAIPerceptionComponent* GetAIPerceptionComponent();                                                                      // [0x36371d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIController.ClaimTaskResource
	void ClaimTaskResource(UClass* ResourceClass);                                                                           // [0x3636eb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.BTTask_BlackboardBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTTask_BlackboardBase : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0070   (0x0028)  
};

/// Class /Script/AIModule.BTDecorator
/// Size: 0x0008 (0x000060 - 0x000068)
class UBTDecorator : public UBTAuxiliaryNode
{ 
public:
	bool                                               bInverseCondition;                                          // 0x0060:7 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0061   (0x0003)  MISSED
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                              // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTTask_MoveTo
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{ 
public:
	float                                              AcceptableRadius;                                           // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	UClass*                                            FilterClass;                                                // 0x00A0   (0x0008)  
	float                                              ObservedBlackboardValueTolerance;                           // 0x00A8   (0x0004)  
	bool                                               bObserveBlackboardValue;                                    // 0x00AC:0 (0x0001)  
	bool                                               bAllowStrafe;                                               // 0x00AC:1 (0x0001)  
	bool                                               bAllowPartialPath;                                          // 0x00AC:2 (0x0001)  
	bool                                               bTrackMovingGoal;                                           // 0x00AC:3 (0x0001)  
	bool                                               bProjectGoalLocation;                                       // 0x00AC:4 (0x0001)  
	bool                                               bReachTestIncludesAgentRadius;                              // 0x00AC:5 (0x0001)  
	bool                                               bReachTestIncludesGoalRadius;                               // 0x00AC:6 (0x0001)  
	bool                                               bStopOnOverlap;                                             // 0x00AC:7 (0x0001)  
	bool                                               bStopOnOverlapNeedsUpdate;                                  // 0x00AD:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
};

/// Class /Script/AIModule.AISubsystem
/// Size: 0x0010 (0x000028 - 0x000038)
class UAISubsystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UAISystem*                                         AISystem;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.AIPerceptionSystem
/// Size: 0x00F8 (0x000038 - 0x000130)
class UAIPerceptionSystem : public UAISubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0038   (0x0050)  MISSED
	TArray<UAISense*>                                  Senses;                                                     // 0x0088   (0x0010)  
	float                                              PerceptionAgingRate;                                        // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x94];                                      // 0x009C   (0x0094)  MISSED


	/// Functions
	// Function /Script/AIModule.AIPerceptionSystem.ReportPerceptionEvent
	void ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent);                                 // [0x363da50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.ReportEvent
	void ReportEvent(UAISenseEvent* PerceptionEvent);                                                                        // [0x363d7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	bool RegisterPerceptionStimuliSource(UObject* WorldContextObject, UClass* Sense, AActor* Target);                        // [0x363d4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	void OnPerceptionStimuliSourceEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                         // [0x363d420] Final|Native|Protected 
	// Function /Script/AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	UClass* GetSenseClassForStimulus(UObject* WorldContextObject, FAIStimulus& Stimulus);                                    // [0x363d2e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.AISense
/// Size: 0x0058 (0x000028 - 0x000080)
class UAISense : public UObject
{ 
public:
	float                                              DefaultExpirationAge;                                       // 0x0028   (0x0004)  
	EAISenseNotifyType                                 NotifyType;                                                 // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	bool                                               bWantsNewPawnNotification;                                  // 0x0030:0 (0x0001)  
	bool                                               bAutoRegisterAllPawnsAsSources;                             // 0x0030:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0031   (0x0007)  MISSED
	UAIPerceptionSystem*                               PerceptionSystemInstance;                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x0040   (0x0040)  MISSED
};

/// Class /Script/AIModule.AISenseConfig
/// Size: 0x0020 (0x000028 - 0x000048)
class UAISenseConfig : public UObject
{ 
public:
	FColor                                             DebugColor;                                                 // 0x0028   (0x0004)  
	float                                              MaxAge;                                                     // 0x002C   (0x0004)  
	bool                                               bStartsEnabled;                                             // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0031   (0x0017)  MISSED
};

/// Class /Script/AIModule.AISense_Sight
/// Size: 0x00F0 (0x000080 - 0x000170)
class UAISense_Sight : public UAISense
{ 
public:
	unsigned char                                      UnknownData00_2[0xC8];                                      // 0x0080   (0x00C8)  MISSED
	int32_t                                            MaxTracesPerTick;                                           // 0x0148   (0x0004)  
	int32_t                                            MinQueriesPerTimeSliceCheck;                                // 0x014C   (0x0004)  
	double                                             MaxTimeSlicePerTick;                                        // 0x0150   (0x0008)  
	float                                              HighImportanceQueryDistanceThreshold;                       // 0x0158   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	float                                              MaxQueryImportance;                                         // 0x0160   (0x0004)  
	float                                              SightLimitQueryImportance;                                  // 0x0164   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Class /Script/AIModule.BTDecorator_BlackboardBase
/// Size: 0x0028 (0x000068 - 0x000090)
class UBTDecorator_BlackboardBase : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0068   (0x0028)  
};

/// Class /Script/AIModule.PathFollowingComponent
/// Size: 0x01A0 (0x0000B0 - 0x000250)
class UPathFollowingComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x00B0   (0x0038)  MISSED
	UNavMovementComponent*                             MovementComp;                                               // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00F0   (0x0008)  MISSED
	ANavigationData*                                   MyNavData;                                                  // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x150];                                     // 0x0100   (0x0150)  MISSED


	/// Functions
	// Function /Script/AIModule.PathFollowingComponent.OnNavDataRegistered
	void OnNavDataRegistered(ANavigationData* NavData);                                                                      // [0x36516a0] Final|Native|Protected 
	// Function /Script/AIModule.PathFollowingComponent.OnActorBump
	void OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);                         // [0x3651500] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PathFollowingComponent.GetPathDestination
	FVector GetPathDestination();                                                                                            // [0x36510f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PathFollowingComponent.GetPathActionType
	TEnumAsByte<EPathFollowingAction> GetPathActionType();                                                                   // [0x36510c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.CrowdFollowingComponent
/// Size: 0x0048 (0x000250 - 0x000298)
class UCrowdFollowingComponent : public UPathFollowingComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0250   (0x0018)  MISSED
	FVector                                            CrowdAgentMoveDirection;                                    // 0x0268   (0x000C)  
	unsigned char                                      UnknownData01_6[0x24];                                      // 0x0274   (0x0024)  MISSED


	/// Functions
	// Function /Script/AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	void SuspendCrowdSteering(bool bSuspend);                                                                                // [0x364a6f0] Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIAsyncTaskBlueprintProxy
/// Size: 0x0040 (0x000028 - 0x000068)
class UAIAsyncTaskBlueprintProxy : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFail;                                                     // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	void OnMoveCompleted(FAIRequestID RequestId, TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x36385e0] Final|Native|Public  
};

/// Class /Script/AIModule.AIBlueprintHelperLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AIModule.AIDataProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIDataProvider : public UObject
{ 
public:
};

/// Class /Script/AIModule.AIDataProvider_QueryParams
/// Size: 0x0018 (0x000028 - 0x000040)
class UAIDataProvider_QueryParams : public UAIDataProvider
{ 
public:
	FName                                              ParamName;                                                  // 0x0028   (0x0008)  
	float                                              FloatValue;                                                 // 0x0030   (0x0004)  
	int32_t                                            IntValue;                                                   // 0x0034   (0x0004)  
	bool                                               BoolValue;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/AIModule.AIDataProvider_Random
/// Size: 0x0010 (0x000040 - 0x000050)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{ 
public:
	float                                              Min;                                                        // 0x0040   (0x0004)  
	float                                              Max;                                                        // 0x0044   (0x0004)  
	bool                                               bInteger;                                                   // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.AIHotSpotManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIHotSpotManager : public UObject
{ 
public:
};

/// Class /Script/AIModule.AIPerceptionComponent
/// Size: 0x00E0 (0x0000B0 - 0x000190)
class UAIPerceptionComponent : public UActorComponent
{ 
public:
	TArray<UAISenseConfig*>                            SensesConfig;                                               // 0x00B0   (0x0010)  
	UClass*                                            DominantSense;                                              // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x00C8   (0x0010)  MISSED
	AAIController*                                     AIOwner;                                                    // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x80];                                      // 0x00E0   (0x0080)  MISSED
	FMulticastInlineDelegate                           OnPerceptionUpdated;                                        // 0x0160   (0x0010)  
	FMulticastInlineDelegate                           OnTargetPerceptionUpdated;                                  // 0x0170   (0x0010)  
	FMulticastInlineDelegate                           OnTargetPerceptionInfoUpdated;                              // 0x0180   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AIPerceptionComponent.SetSenseEnabled
	void SetSenseEnabled(UClass* SenseClass, bool bEnable);                                                                  // [0x3638b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	void RequestStimuliListenerUpdate();                                                                                     // [0x3638830] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.OnOwnerEndPlay
	void OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                           // [0x36386b0] Final|Native|Public  
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
	void GetPerceivedHostileActorsBySense(UClass* SenseToUse, TArray<AActor*>& OutActors);                                   // [0x3637b20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	void GetPerceivedHostileActors(TArray<AActor*>& OutActors);                                                              // [0x3637a70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedActors
	void GetPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors);                                                 // [0x3637980] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	void GetKnownPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors);                                            // [0x36377d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	void GetCurrentlyPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors);                                        // [0x3637580] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetActorsPerception
	bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info);                                            // [0x36371f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.ForgetAll
	void ForgetAll();                                                                                                        // [0x3637120] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIPerceptionListenerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIPerceptionListenerInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AIPerceptionStimuliSourceComponent
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{ 
public:
	bool                                               bAutoRegisterAsSource;                                      // 0x00B0:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x00B1   (0x0007)  MISSED
	TArray<UClass*>                                    RegisterAsSourceForSenses;                                  // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	void UnregisterFromSense(UClass* SenseClass);                                                                            // [0x36391a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	void UnregisterFromPerceptionSystem();                                                                                   // [0x3639180] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	void RegisterWithPerceptionSystem();                                                                                     // [0x3638810] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	void RegisterForSense(UClass* SenseClass);                                                                               // [0x3638780] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIResourceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIResourceInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AIResource_Movement
/// Size: 0x0000 (0x000038 - 0x000038)
class UAIResource_Movement : public UGameplayTaskResource
{ 
public:
};

/// Class /Script/AIModule.AIResource_Logic
/// Size: 0x0000 (0x000038 - 0x000038)
class UAIResource_Logic : public UGameplayTaskResource
{ 
public:
};

/// Class /Script/AIModule.AISense_Blueprint
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UAISense_Blueprint : public UAISense
{ 
public:
	UClass*                                            ListenerDataType;                                           // 0x0080   (0x0008)  
	TArray<UAIPerceptionComponent*>                    ListenerContainer;                                          // 0x0088   (0x0010)  
	TArray<UAISenseEvent*>                             UnprocessedEvents;                                          // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Blueprint.OnUpdate
	float OnUpdate(TArray<UAISenseEvent*>& EventsToProcess);                                                                 // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUpdated
	void OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);                              // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUnregistered
	void OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);                         // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerRegistered
	void OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);                           // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.K2_OnNewPawn
	void K2_OnNewPawn(APawn* NewPawn);                                                                                       // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerComponents
	void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents);                                      // [0x363d230] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerActors
	void GetAllListenerActors(TArray<AActor*>& ListenerActors);                                                              // [0x363d180] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.AISense_Damage
/// Size: 0x0010 (0x000080 - 0x000090)
class UAISense_Damage : public UAISense
{ 
public:
	TArray<FAIDamageEvent>                             RegisteredEvents;                                           // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Damage.ReportDamageEvent
	void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation); // [0x363d5f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Hearing
/// Size: 0x0068 (0x000080 - 0x0000E8)
class UAISense_Hearing : public UAISense
{ 
public:
	TArray<FAINoiseEvent>                              NoiseEvents;                                                // 0x0080   (0x0010)  
	float                                              SpeedOfSoundSq;                                             // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_6[0x54];                                      // 0x0094   (0x0054)  MISSED


	/// Functions
	// Function /Script/AIModule.AISense_Hearing.ReportNoiseEvent
	void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag); // [0x363d870] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Prediction
/// Size: 0x0010 (0x000080 - 0x000090)
class UAISense_Prediction : public UAISense
{ 
public:
	TArray<FAIPredictionEvent>                         RegisteredEvents;                                           // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Prediction.RequestPawnPredictionEvent
	void RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime);                         // [0x363dc20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AISense_Prediction.RequestControllerPredictionEvent
	void RequestControllerPredictionEvent(AAIController* Requestor, AActor* PredictedActor, float PredictionTime);           // [0x363db10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Team
/// Size: 0x0010 (0x000080 - 0x000090)
class UAISense_Team : public UAISense
{ 
public:
	TArray<FAITeamStimulusEvent>                       RegisteredEvents;                                           // 0x0080   (0x0010)  
};

/// Class /Script/AIModule.AISense_Touch
/// Size: 0x0010 (0x000080 - 0x000090)
class UAISense_Touch : public UAISense
{ 
public:
	TArray<FAITouchEvent>                              RegisteredEvents;                                           // 0x0080   (0x0010)  
};

/// Class /Script/AIModule.AISenseBlueprintListener
/// Size: 0x0000 (0x000108 - 0x000108)
class UAISenseBlueprintListener : public UUserDefinedStruct
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Blueprint
/// Size: 0x0008 (0x000048 - 0x000050)
class UAISenseConfig_Blueprint : public UAISenseConfig
{ 
public:
	UClass*                                            Implementation;                                             // 0x0048   (0x0008)  
};

/// Class /Script/AIModule.AISenseConfig_Damage
/// Size: 0x0008 (0x000048 - 0x000050)
class UAISenseConfig_Damage : public UAISenseConfig
{ 
public:
	UClass*                                            Implementation;                                             // 0x0048   (0x0008)  
};

/// Class /Script/AIModule.AISenseConfig_Hearing
/// Size: 0x0018 (0x000048 - 0x000060)
class UAISenseConfig_Hearing : public UAISenseConfig
{ 
public:
	UClass*                                            Implementation;                                             // 0x0048   (0x0008)  
	float                                              HearingRange;                                               // 0x0050   (0x0004)  
	float                                              LoSHearingRange;                                            // 0x0054   (0x0004)  
	bool                                               bUseLoSHearing;                                             // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0059   (0x0003)  MISSED
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x005C   (0x0004)  
};

/// Class /Script/AIModule.AISenseConfig_Prediction
/// Size: 0x0000 (0x000048 - 0x000048)
class UAISenseConfig_Prediction : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Sight
/// Size: 0x0038 (0x000048 - 0x000080)
class UAISenseConfig_Sight : public UAISenseConfig
{ 
public:
	UClass*                                            Implementation;                                             // 0x0048   (0x0008)  
	float                                              SightRadius;                                                // 0x0050   (0x0004)  
	float                                              LoseSightRadius;                                            // 0x0054   (0x0004)  
	float                                              PeripheralVisionAngleDegrees;                               // 0x0058   (0x0004)  
	float                                              CloseSightRadius;                                           // 0x005C   (0x0004)  
	float                                              CloseLoseSightRadius;                                       // 0x0060   (0x0004)  
	float                                              ClosePeripheralVisionAngleDegrees;                          // 0x0064   (0x0004)  
	float                                              HeightDifference;                                           // 0x0068   (0x0004)  
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x006C   (0x0004)  
	float                                              AutoSuccessRangeFromLastSeenLocation;                       // 0x0070   (0x0004)  
	float                                              PointOfViewBackwardOffset;                                  // 0x0074   (0x0004)  
	float                                              NearClippingRadius;                                         // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/AIModule.AISenseConfig_Team
/// Size: 0x0000 (0x000048 - 0x000048)
class UAISenseConfig_Team : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Touch
/// Size: 0x0000 (0x000048 - 0x000048)
class UAISenseConfig_Touch : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseEvent
/// Size: 0x0000 (0x000028 - 0x000028)
class UAISenseEvent : public UObject
{ 
public:
};

/// Class /Script/AIModule.AISenseEvent_Damage
/// Size: 0x0030 (0x000028 - 0x000058)
class UAISenseEvent_Damage : public UAISenseEvent
{ 
public:
	FAIDamageEvent                                     Event;                                                      // 0x0028   (0x0030)  
};

/// Class /Script/AIModule.AISenseEvent_Hearing
/// Size: 0x0030 (0x000028 - 0x000058)
class UAISenseEvent_Hearing : public UAISenseEvent
{ 
public:
	FAINoiseEvent                                      Event;                                                      // 0x0028   (0x0030)  
};

/// Class /Script/AIModule.AISightTargetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAISightTargetInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AISystem
/// Size: 0x00D8 (0x000058 - 0x000130)
class UAISystem : public UAISystemBase
{ 
public:
	FSoftClassPath                                     PerceptionSystemClassName;                                  // 0x0058   (0x0018)  
	FSoftClassPath                                     HotSpotManagerClassName;                                    // 0x0070   (0x0018)  
	float                                              AcceptanceRadius;                                           // 0x0088   (0x0004)  
	float                                              PathfollowingRegularPathPointAcceptanceRadius;              // 0x008C   (0x0004)  
	float                                              PathfollowingNavLinkAcceptanceRadius;                       // 0x0090   (0x0004)  
	bool                                               bFinishMoveOnGoalOverlap;                                   // 0x0094   (0x0001)  
	bool                                               bAcceptPartialPaths;                                        // 0x0095   (0x0001)  
	bool                                               bAllowStrafing;                                             // 0x0096   (0x0001)  
	bool                                               bEnableBTAITasks;                                           // 0x0097   (0x0001)  
	bool                                               bAllowControllersAsEQSQuerier;                              // 0x0098   (0x0001)  
	bool                                               bEnableDebuggerPlugin;                                      // 0x0099   (0x0001)  
	bool                                               bForgetStaleActors;                                         // 0x009A   (0x0001)  
	bool                                               bAddBlackboardSelfKey;                                      // 0x009B   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel;                               // 0x009C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x009D   (0x0003)  MISSED
	UBehaviorTreeManager*                              BehaviorTreeManager;                                        // 0x00A0   (0x0008)  
	UEnvQueryManager*                                  EnvironmentQueryManager;                                    // 0x00A8   (0x0008)  
	UAIPerceptionSystem*                               PerceptionSystem;                                           // 0x00B0   (0x0008)  
	TArray<UAIAsyncTaskBlueprintProxy*>                AllProxyObjects;                                            // 0x00B8   (0x0010)  
	UAIHotSpotManager*                                 HotSpotManager;                                             // 0x00C8   (0x0008)  
	UNavLocalGridManager*                              NavLocalGrids;                                              // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x00D8   (0x0058)  MISSED


	/// Functions
	// Function /Script/AIModule.AISystem.AILoggingVerbose
	void AILoggingVerbose();                                                                                                 // [0x24ab610] Exec|Native|Public   
	// Function /Script/AIModule.AISystem.AIIgnorePlayers
	void AIIgnorePlayers();                                                                                                  // [0x2b19080] Exec|Native|Public   
};

/// Class /Script/AIModule.AITask
/// Size: 0x0008 (0x000068 - 0x000070)
class UAITask : public UGameplayTask
{ 
public:
	AAIController*                                     OwnerController;                                            // 0x0068   (0x0008)  
};

/// Class /Script/AIModule.AITask_LockLogic
/// Size: 0x0000 (0x000070 - 0x000070)
class UAITask_LockLogic : public UAITask
{ 
public:
};

/// Class /Script/AIModule.AITask_MoveTo
/// Size: 0x00A0 (0x000070 - 0x000110)
class UAITask_MoveTo : public UAITask
{ 
public:
	FMulticastInlineDelegate                           OnRequestFailed;                                            // 0x0070   (0x0010)  
	FMulticastInlineDelegate                           OnMoveFinished;                                             // 0x0080   (0x0010)  
	FAIMoveRequest                                     MoveRequest;                                                // 0x0090   (0x0040)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x00D0   (0x0040)  MISSED


	/// Functions
	// Function /Script/AIModule.AITask_MoveTo.AIMoveTo
	UAITask_MoveTo* AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag> ProjectGoalOnNavigation); // [0x363ce80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AITask_RunEQS
/// Size: 0x0078 (0x000070 - 0x0000E8)
class UAITask_RunEQS : public UAITask
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0070   (0x0078)  MISSED
};

/// Class /Script/AIModule.BehaviorTree
/// Size: 0x0040 (0x000028 - 0x000068)
class UBehaviorTree : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UBTCompositeNode*                                  RootNode;                                                   // 0x0030   (0x0008)  
	UBlackboardData*                                   BlackboardAsset;                                            // 0x0038   (0x0008)  
	TArray<UBTDecorator*>                              RootDecorators;                                             // 0x0040   (0x0010)  
	TArray<FBTDecoratorLogic>                          RootDecoratorOps;                                           // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/AIModule.BrainComponent
/// Size: 0x0058 (0x0000B0 - 0x000108)
class UBrainComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B0   (0x0008)  MISSED
	UBlackboardComponent*                              BlackboardComp;                                             // 0x00B8   (0x0008)  
	AAIController*                                     AIOwner;                                                    // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x00C8   (0x0040)  MISSED


	/// Functions
	// Function /Script/AIModule.BrainComponent.StopLogic
	void StopLogic(FString Reason);                                                                                          // [0x14bf5b0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.StartLogic
	void StartLogic();                                                                                                       // [0xd59ac0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.RestartLogic
	void RestartLogic();                                                                                                     // [0xd59ae0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.IsRunning
	bool IsRunning();                                                                                                        // [0x3642180] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BrainComponent.IsPaused
	bool IsPaused();                                                                                                         // [0x3642150] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BehaviorTreeComponent
/// Size: 0x0190 (0x000108 - 0x000298)
class UBehaviorTreeComponent : public UBrainComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0108   (0x0020)  MISSED
	TArray<UBTNode*>                                   NodeInstances;                                              // 0x0128   (0x0010)  
	unsigned char                                      UnknownData01_5[0x140];                                     // 0x0138   (0x0140)  MISSED
	UBehaviorTree*                                     DefaultBehaviorTreeAsset;                                   // 0x0278   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0280   (0x0018)  MISSED


	/// Functions
	// Function /Script/AIModule.BehaviorTreeComponent.SetDynamicSubtree
	void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);                                            // [0x3642250] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	float GetTagCooldownEndTime(FGameplayTag CooldownTag);                                                                   // [0x36419b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);              // [0x36415f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.BehaviorTreeManager
/// Size: 0x0028 (0x000028 - 0x000050)
class UBehaviorTreeManager : public UObject
{ 
public:
	int32_t                                            MaxDebuggerSteps;                                           // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FBehaviorTreeTemplateInfo>                  LoadedTemplates;                                            // 0x0030   (0x0010)  
	TArray<UBehaviorTreeComponent*>                    ActiveComponents;                                           // 0x0040   (0x0010)  
};

/// Class /Script/AIModule.BehaviorTreeTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UBehaviorTreeTypes : public UObject
{ 
public:
};

/// Class /Script/AIModule.BlackboardAssetProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlackboardAssetProvider : public UInterface
{ 
public:
};

/// Class /Script/AIModule.BlackboardComponent
/// Size: 0x0108 (0x0000B0 - 0x0001B8)
class UBlackboardComponent : public UActorComponent
{ 
public:
	UBrainComponent*                                   BrainComp;                                                  // 0x00B0   (0x0008)  
	UBlackboardData*                                   DefaultBlackboardAsset;                                     // 0x00B8   (0x0008)  
	UBlackboardData*                                   BlackboardAsset;                                            // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x00C8   (0x0020)  MISSED
	TArray<UBlackboardKeyType*>                        KeyInstances;                                               // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC0];                                      // 0x00F8   (0x00C0)  MISSED


	/// Functions
	// Function /Script/AIModule.BlackboardComponent.SetValueAsVector
	void SetValueAsVector(FName& KeyName, FVector VectorValue);                                                              // [0x3642b30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsString
	void SetValueAsString(FName& KeyName, FString StringValue);                                                              // [0x36429f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsRotator
	void SetValueAsRotator(FName& KeyName, FRotator VectorValue);                                                            // [0x3642900] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsObject
	void SetValueAsObject(FName& KeyName, UObject* ObjectValue);                                                             // [0x3642830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsName
	void SetValueAsName(FName& KeyName, FName NameValue);                                                                    // [0x3642760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsInt
	void SetValueAsInt(FName& KeyName, int32_t IntValue);                                                                    // [0x3642690] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsFloat
	void SetValueAsFloat(FName& KeyName, float FloatValue);                                                                  // [0x36425b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsEnum
	void SetValueAsEnum(FName& KeyName, char EnumValue);                                                                     // [0x36424d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsClass
	void SetValueAsClass(FName& KeyName, UClass* ClassValue);                                                                // [0x3642400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsBool
	void SetValueAsBool(FName& KeyName, bool BoolValue);                                                                     // [0x3642320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.IsVectorValueSet
	bool IsVectorValueSet(FName& KeyName);                                                                                   // [0x36421b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsVector
	FVector GetValueAsVector(FName& KeyName);                                                                                // [0x3642040] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsString
	FString GetValueAsString(FName& KeyName);                                                                                // [0x3641f60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsRotator
	FRotator GetValueAsRotator(FName& KeyName);                                                                              // [0x3641eb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsObject
	UObject* GetValueAsObject(FName& KeyName);                                                                               // [0x3641e10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsName
	FName GetValueAsName(FName& KeyName);                                                                                    // [0x3641d70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsInt
	int32_t GetValueAsInt(FName& KeyName);                                                                                   // [0x3641cd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsFloat
	float GetValueAsFloat(FName& KeyName);                                                                                   // [0x3641c30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsEnum
	char GetValueAsEnum(FName& KeyName);                                                                                     // [0x3641b90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsClass
	UClass* GetValueAsClass(FName& KeyName);                                                                                 // [0x3641af0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsBool
	bool GetValueAsBool(FName& KeyName);                                                                                     // [0x3641a50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetRotationFromEntry
	bool GetRotationFromEntry(FName& KeyName, FRotator& ResultRotation);                                                     // [0x36418c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetLocationFromEntry
	bool GetLocationFromEntry(FName& KeyName, FVector& ResultLocation);                                                      // [0x36417d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.ClearValue
	void ClearValue(FName& KeyName);                                                                                         // [0x3641710] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.BlackboardData
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardData : public UDataAsset
{ 
public:
	UBlackboardData*                                   Parent;                                                     // 0x0030   (0x0008)  
	TArray<FBlackboardEntry>                           Keys;                                                       // 0x0038   (0x0010)  
	bool                                               bHasSynchronizedKeys;                                       // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType
/// Size: 0x0008 (0x000028 - 0x000030)
class UBlackboardKeyType : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Bool
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Class
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{ 
public:
	UClass*                                            BaseClass;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Enum
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{ 
public:
	UEnum*                                             EnumType;                                                   // 0x0030   (0x0008)  
	FString                                            EnumName;                                                   // 0x0038   (0x0010)  
	bool                                               bIsEnumNameValid;                                           // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Float
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Int
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Name
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_NativeEnum
/// Size: 0x0018 (0x000030 - 0x000048)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{ 
public:
	FString                                            EnumName;                                                   // 0x0030   (0x0010)  
	UEnum*                                             EnumType;                                                   // 0x0040   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Object
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{ 
public:
	UClass*                                            BaseClass;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Rotator
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_String
/// Size: 0x0010 (0x000030 - 0x000040)
class UBlackboardKeyType_String : public UBlackboardKeyType
{ 
public:
	FString                                            StringValue;                                                // 0x0030   (0x0010)  
};

/// Class /Script/AIModule.BlackboardKeyType_Vector
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BTCompositeNode
/// Size: 0x0038 (0x000058 - 0x000090)
class UBTCompositeNode : public UBTNode
{ 
public:
	TArray<FBTCompositeChild>                          Children;                                                   // 0x0058   (0x0010)  
	TArray<UBTService*>                                Services;                                                   // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0078   (0x0010)  MISSED
	bool                                               bApplyDecoratorScope;                                       // 0x0088:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTComposite_Selector
/// Size: 0x0000 (0x000090 - 0x000090)
class UBTComposite_Selector : public UBTCompositeNode
{ 
public:
};

/// Class /Script/AIModule.BTComposite_Sequence
/// Size: 0x0000 (0x000090 - 0x000090)
class UBTComposite_Sequence : public UBTCompositeNode
{ 
public:
};

/// Class /Script/AIModule.BTComposite_SimpleParallel
/// Size: 0x0008 (0x000090 - 0x000098)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{ 
public:
	TEnumAsByte<EBTParallelMode>                       FinishMode;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTDecorator_Blackboard
/// Size: 0x0030 (0x000090 - 0x0000C0)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{ 
public:
	int32_t                                            IntValue;                                                   // 0x0090   (0x0004)  
	float                                              FloatValue;                                                 // 0x0094   (0x0004)  
	FString                                            StringValue;                                                // 0x0098   (0x0010)  
	FString                                            CachedDescription;                                          // 0x00A8   (0x0010)  
	char                                               OperationType;                                              // 0x00B8   (0x0001)  
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                             // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00BA   (0x0006)  MISSED
};

/// Class /Script/AIModule.BTDecorator_BlueprintBase
/// Size: 0x0038 (0x000068 - 0x0000A0)
class UBTDecorator_BlueprintBase : public UBTDecorator
{ 
public:
	AAIController*                                     AIOwner;                                                    // 0x0068   (0x0008)  
	AActor*                                            ActorOwner;                                                 // 0x0070   (0x0008)  
	TArray<FName>                                      ObservedKeyNames;                                           // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0088   (0x0010)  MISSED
	bool                                               bShowPropertyDetails;                                       // 0x0098:0 (0x0001)  
	bool                                               bCheckConditionOnlyBlackBoardChanges;                       // 0x0098:1 (0x0001)  
	bool                                               bIsObservingBB;                                             // 0x0098:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTick
	void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);                                                                // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	void ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn);                                // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	void ReceiveObserverDeactivated(AActor* OwnerActor);                                                                     // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	void ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn);                                  // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	void ReceiveObserverActivated(AActor* OwnerActor);                                                                       // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	void ReceiveExecutionStart(AActor* OwnerActor);                                                                          // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult); // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	void ReceiveExecutionFinish(AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);                                  // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	bool PerformConditionCheck(AActor* OwnerActor);                                                                          // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	bool IsDecoratorObserverActive();                                                                                        // [0x3642120] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	bool IsDecoratorExecutionActive();                                                                                       // [0x36420f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             ActorToCheck;                                               // 0x0068   (0x0028)  
	EGameplayContainerMatchType                        TagsToMatch;                                                // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	FGameplayTagContainer                              GameplayTags;                                               // 0x0098   (0x0020)  
	FString                                            CachedDescription;                                          // 0x00B8   (0x0010)  
};

/// Class /Script/AIModule.BTDecorator_CompareBBEntries
/// Size: 0x0058 (0x000068 - 0x0000C0)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{ 
public:
	TEnumAsByte<EBlackBoardEntryComparison>            Operator;                                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0070   (0x0028)  
	FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x0098   (0x0028)  
};

/// Class /Script/AIModule.BTDecorator_ConditionalLoop
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_ConeCheck
/// Size: 0x0088 (0x000068 - 0x0000F0)
class UBTDecorator_ConeCheck : public UBTDecorator
{ 
public:
	float                                              ConeHalfAngle;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FBlackboardKeySelector                             ConeOrigin;                                                 // 0x0070   (0x0028)  
	FBlackboardKeySelector                             ConeDirection;                                              // 0x0098   (0x0028)  
	FBlackboardKeySelector                             Observed;                                                   // 0x00C0   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Class /Script/AIModule.BTDecorator_Cooldown
/// Size: 0x0008 (0x000068 - 0x000070)
class UBTDecorator_Cooldown : public UBTDecorator
{ 
public:
	float                                              CooldownTime;                                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTDecorator_DoesPathExist
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_DoesPathExist : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0068   (0x0028)  
	FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x0090   (0x0028)  
	bool                                               bUseSelf;                                                   // 0x00B8:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x00B9   (0x0003)  MISSED
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                              // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	UClass*                                            FilterClass;                                                // 0x00C0   (0x0008)  
};

/// Class /Script/AIModule.BTDecorator_ForceSuccess
/// Size: 0x0000 (0x000068 - 0x000068)
class UBTDecorator_ForceSuccess : public UBTDecorator
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_IsAtLocation
/// Size: 0x0048 (0x000090 - 0x0000D8)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{ 
public:
	float                                              AcceptableRadius;                                           // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FAIDataProviderFloatValue                          ParametrizedAcceptableRadius;                               // 0x0098   (0x0038)  
	FAIDistanceType                                    GeometricDistanceType;                                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	bool                                               bUseParametrizedRadius;                                     // 0x00D4:0 (0x0001)  
	bool                                               bUseNavAgentGoalLocation;                                   // 0x00D4:1 (0x0001)  
	bool                                               bPathFindingBasedTest;                                      // 0x00D4:2 (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTDecorator_IsBBEntryOfClass
/// Size: 0x0008 (0x000090 - 0x000098)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{ 
public:
	UClass*                                            TestClass;                                                  // 0x0090   (0x0008)  
};

/// Class /Script/AIModule.BTDecorator_KeepInCone
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_KeepInCone : public UBTDecorator
{ 
public:
	float                                              ConeHalfAngle;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FBlackboardKeySelector                             ConeOrigin;                                                 // 0x0070   (0x0028)  
	FBlackboardKeySelector                             Observed;                                                   // 0x0098   (0x0028)  
	bool                                               bUseSelfAsOrigin;                                           // 0x00C0:0 (0x0001)  
	bool                                               bUseSelfAsObserved;                                         // 0x00C0:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTDecorator_Loop
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_Loop : public UBTDecorator
{ 
public:
	int32_t                                            NumLoops;                                                   // 0x0068   (0x0004)  
	bool                                               bInfiniteLoop;                                              // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              InfiniteLoopTimeoutTime;                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTDecorator_ReachedMoveGoal
/// Size: 0x0000 (0x000068 - 0x000068)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_SetTagCooldown
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0068   (0x0008)  
	float                                              CooldownDuration;                                           // 0x0070   (0x0004)  
	bool                                               bAddToExistingDuration;                                     // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0075   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTDecorator_TagCooldown
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_TagCooldown : public UBTDecorator
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0068   (0x0008)  
	float                                              CooldownDuration;                                           // 0x0070   (0x0004)  
	bool                                               bAddToExistingDuration;                                     // 0x0074   (0x0001)  
	bool                                               bActivatesCooldown;                                         // 0x0075   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0076   (0x0002)  MISSED
};

/// Class /Script/AIModule.BTDecorator_TimeLimit
/// Size: 0x0008 (0x000068 - 0x000070)
class UBTDecorator_TimeLimit : public UBTDecorator
{ 
public:
	float                                              TimeLimit;                                                  // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AIModule.BTService_BlackboardBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTService_BlackboardBase : public UBTService
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0070   (0x0028)  
};

/// Class /Script/AIModule.BTService_BlueprintBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTService_BlueprintBase : public UBTService
{ 
public:
	AAIController*                                     AIOwner;                                                    // 0x0070   (0x0008)  
	AActor*                                            ActorOwner;                                                 // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0080   (0x0010)  MISSED
	bool                                               bShowPropertyDetails;                                       // 0x0090:0 (0x0001)  
	bool                                               bShowEventDetails;                                          // 0x0090:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0091   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTickAI
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTick
	void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);                                                                // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn);                                        // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStart
	void ReceiveSearchStart(AActor* OwnerActor);                                                                             // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);                                       // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivation
	void ReceiveDeactivation(AActor* OwnerActor);                                                                            // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivationAI
	void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);                                         // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivation
	void ReceiveActivation(AActor* OwnerActor);                                                                              // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.IsServiceActive
	bool IsServiceActive();                                                                                                  // [0x36463e0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTService_DefaultFocus
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{ 
public:
	char                                               FocusPriority;                                              // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTService_RunEQS
/// Size: 0x0058 (0x000098 - 0x0000F0)
class UBTService_RunEQS : public UBTService_BlackboardBase
{ 
public:
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x0098   (0x0048)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/AIModule.BTTask_BlueprintBase
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UBTTask_BlueprintBase : public UBTTaskNode
{ 
public:
	AAIController*                                     AIOwner;                                                    // 0x0070   (0x0008)  
	AActor*                                            ActorOwner;                                                 // 0x0078   (0x0008)  
	FIntervalCountdown                                 TickInterval;                                               // 0x0080   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0088   (0x0018)  MISSED
	bool                                               bShowPropertyDetails;                                       // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	void SetFinishOnMessageWithId(FName MessageName, int32_t RequestId);                                                     // [0x3647200] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	void SetFinishOnMessage(FName MessageName);                                                                              // [0x3647170] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTickAI
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTick
	void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);                                                                // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecute
	void ReceiveExecute(AActor* OwnerActor);                                                                                 // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);                                              // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbort
	void ReceiveAbort(AActor* OwnerActor);                                                                                   // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskExecuting
	bool IsTaskExecuting();                                                                                                  // [0x3646440] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskAborting
	bool IsTaskAborting();                                                                                                   // [0x3646410] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishExecute
	void FinishExecute(bool bSuccess);                                                                                       // [0x36456c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishAbort
	void FinishAbort();                                                                                                      // [0x36456a0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/AIModule.BTTask_FinishWithResult
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_FinishWithResult : public UBTTaskNode
{ 
public:
	TEnumAsByte<EBTNodeResult>                         Result;                                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_GameplayTaskBase
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{ 
public:
	bool                                               bWaitForGameplayTask;                                       // 0x0070:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_MakeNoise
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_MakeNoise : public UBTTaskNode
{ 
public:
	float                                              Loudnes;                                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_MoveDirectlyToward
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{ 
public:
	bool                                               bDisablePathUpdateOnGoalLocationChange;                     // 0x00B0:0 (0x0001)  
	bool                                               bProjectVectorGoalToNavigation;                             // 0x00B0:1 (0x0001)  
	bool                                               bUpdatedDeprecatedProperties;                               // 0x00B0:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_PawnActionBase
/// Size: 0x0000 (0x000070 - 0x000070)
class UBTTask_PawnActionBase : public UBTTaskNode
{ 
public:
};

/// Class /Script/AIModule.BTTask_PlayAnimation
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UBTTask_PlayAnimation : public UBTTaskNode
{ 
public:
	UAnimationAsset*                                   AnimationToPlay;                                            // 0x0070   (0x0008)  
	bool                                               bLooping;                                                   // 0x0078:0 (0x0001)  
	bool                                               bNonBlocking;                                               // 0x0078:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0079   (0x0007)  MISSED
	UBehaviorTreeComponent*                            MyOwnerComp;                                                // 0x0080   (0x0008)  
	USkeletalMeshComponent*                            CachedSkelMesh;                                             // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0090   (0x0020)  MISSED
};

/// Class /Script/AIModule.BTTask_PlaySound
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_PlaySound : public UBTTaskNode
{ 
public:
	USoundCue*                                         SoundToPlay;                                                // 0x0070   (0x0008)  
};

/// Class /Script/AIModule.BTTask_PushPawnAction
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{ 
public:
	UPawnAction*                                       Action;                                                     // 0x0070   (0x0008)  
};

/// Class /Script/AIModule.BTTask_RotateToFaceBBEntry
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{ 
public:
	float                                              Precision;                                                  // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_RunBehavior
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_RunBehavior : public UBTTaskNode
{ 
public:
	UBehaviorTree*                                     BehaviorAsset;                                              // 0x0070   (0x0008)  
};

/// Class /Script/AIModule.BTTask_RunBehaviorDynamic
/// Size: 0x0018 (0x000070 - 0x000088)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{ 
public:
	FGameplayTag                                       InjectionTag;                                               // 0x0070   (0x0008)  
	UBehaviorTree*                                     DefaultBehaviorAsset;                                       // 0x0078   (0x0008)  
	UBehaviorTree*                                     BehaviorAsset;                                              // 0x0080   (0x0008)  
};

/// Class /Script/AIModule.BTTask_RunEQSQuery
/// Size: 0x00B8 (0x000098 - 0x000150)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{ 
public:
	UEnvQuery*                                         QueryTemplate;                                              // 0x0098   (0x0008)  
	TArray<FEnvNamedValue>                             QueryParams;                                                // 0x00A0   (0x0010)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x00B0   (0x0010)  
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                    // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FBlackboardKeySelector                             EQSQueryBlackboardKey;                                      // 0x00C8   (0x0028)  
	bool                                               bUseBBKey;                                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00F1   (0x0007)  MISSED
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x00F8   (0x0048)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0140   (0x0010)  MISSED
};

/// Class /Script/AIModule.BTTask_SetTagCooldown
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTTask_SetTagCooldown : public UBTTaskNode
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0070   (0x0008)  
	bool                                               bAddToExistingDuration;                                     // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              CooldownDuration;                                           // 0x007C   (0x0004)  
};

/// Class /Script/AIModule.BTTask_Wait
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_Wait : public UBTTaskNode
{ 
public:
	float                                              WaitTime;                                                   // 0x0070   (0x0004)  
	float                                              RandomDeviation;                                            // 0x0074   (0x0004)  
};

/// Class /Script/AIModule.BTTask_WaitBlackboardTime
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0078   (0x0028)  
};

/// Class /Script/AIModule.CrowdAgentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrowdAgentInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.CrowdManager
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UCrowdManager : public UCrowdManagerBase
{ 
public:
	ANavigationData*                                   MyNavData;                                                  // 0x0028   (0x0008)  
	TArray<FCrowdAvoidanceConfig>                      AvoidanceConfig;                                            // 0x0030   (0x0010)  
	TArray<FCrowdAvoidanceSamplingPattern>             SamplingPatterns;                                           // 0x0040   (0x0010)  
	int32_t                                            MaxAgents;                                                  // 0x0050   (0x0004)  
	float                                              MaxAgentRadius;                                             // 0x0054   (0x0004)  
	int32_t                                            MaxAvoidedAgents;                                           // 0x0058   (0x0004)  
	int32_t                                            MaxAvoidedWalls;                                            // 0x005C   (0x0004)  
	float                                              NavmeshCheckInterval;                                       // 0x0060   (0x0004)  
	float                                              PathOptimizationInterval;                                   // 0x0064   (0x0004)  
	float                                              SeparationDirClamp;                                         // 0x0068   (0x0004)  
	float                                              PathOffsetRadiusMultiplier;                                 // 0x006C   (0x0004)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0070:0 (0x0001)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0070:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit02 : 1;                                           // 0x0070:2 (0x0001)  MISSED
	unsigned char                                      UnknownBit03 : 1;                                           // 0x0070:3 (0x0001)  MISSED
	bool                                               bResolveCollisions;                                         // 0x0070:4 (0x0001)  
	unsigned char                                      UnknownData04_6[0x7F];                                      // 0x0071   (0x007F)  MISSED
};

/// Class /Script/AIModule.DetourCrowdAIController
/// Size: 0x0000 (0x000330 - 0x000330)
class ADetourCrowdAIController : public AAIController
{ 
public:
};

/// Class /Script/AIModule.EnvQuery
/// Size: 0x0018 (0x000030 - 0x000048)
class UEnvQuery : public UDataAsset
{ 
public:
	FName                                              QueryName;                                                  // 0x0030   (0x0008)  
	TArray<UEnvQueryOption*>                           Options;                                                    // 0x0038   (0x0010)  
};

/// Class /Script/AIModule.EnvQueryContext
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryContext : public UObject
{ 
public:
};

/// Class /Script/AIModule.EnvQueryContext_BlueprintBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/AIModule.EnvQueryContext_Item
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryContext_Item : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AIModule.EnvQueryContext_Querier
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryContext_Querier : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AIModule.EnvQueryDebugHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryDebugHelpers : public UObject
{ 
public:
};

/// Class /Script/AIModule.EnvQueryNode
/// Size: 0x0008 (0x000028 - 0x000030)
class UEnvQueryNode : public UObject
{ 
public:
	int32_t                                            VerNum;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator
/// Size: 0x0020 (0x000030 - 0x000050)
class UEnvQueryGenerator : public UEnvQueryNode
{ 
public:
	FString                                            OptionName;                                                 // 0x0030   (0x0010)  
	UClass*                                            ItemType;                                                   // 0x0040   (0x0008)  
	bool                                               bAutoSortTests;                                             // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_ActorsOfClass
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{ 
public:
	UClass*                                            SearchedActorClass;                                         // 0x0050   (0x0008)  
	FAIDataProviderBoolValue                           GenerateOnlyActorsInRadius;                                 // 0x0058   (0x0038)  
	FAIDataProviderFloatValue                          SearchRadius;                                               // 0x0090   (0x0038)  
	UClass*                                            SearchCenter;                                               // 0x00C8   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryGenerator_BlueprintBase
/// Size: 0x0030 (0x000050 - 0x000080)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{ 
public:
	FText                                              GeneratorsActionDescription;                                // 0x0050   (0x0018)  
	UClass*                                            Context;                                                    // 0x0068   (0x0008)  
	UClass*                                            GeneratedItemType;                                          // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	UObject* GetQuerier();                                                                                                   // [0x364a6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	void DoItemGeneration(TArray<FVector>& ContextLocations);                                                                // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	void AddGeneratedVector(FVector GeneratedVector);                                                                        // [0x364a630] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	void AddGeneratedActor(AActor* GeneratedActor);                                                                          // [0x364a5a0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/AIModule.EnvQueryGenerator_Composite
/// Size: 0x0020 (0x000050 - 0x000070)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{ 
public:
	TArray<UEnvQueryGenerator*>                        Generators;                                                 // 0x0050   (0x0010)  
	bool                                               bAllowDifferentItemTypes;                                   // 0x0060:0 (0x0001)  
	bool                                               bHasMatchingItemType;                                       // 0x0060:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0061   (0x0007)  MISSED
	UClass*                                            ForcedItemType;                                             // 0x0068   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryGenerator_ProjectedPoints
/// Size: 0x0030 (0x000050 - 0x000080)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{ 
public:
	FEnvTraceData                                      ProjectionData;                                             // 0x0050   (0x0030)  
};

/// Class /Script/AIModule.EnvQueryGenerator_Cone
/// Size: 0x00F0 (0x000080 - 0x000170)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          AlignedPointsDistance;                                      // 0x0080   (0x0038)  
	FAIDataProviderFloatValue                          ConeDegrees;                                                // 0x00B8   (0x0038)  
	FAIDataProviderFloatValue                          AngleStep;                                                  // 0x00F0   (0x0038)  
	FAIDataProviderFloatValue                          Range;                                                      // 0x0128   (0x0038)  
	UClass*                                            CenterActor;                                                // 0x0160   (0x0008)  
	bool                                               bIncludeContextLocation;                                    // 0x0168:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0169   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_CurrentLocation
/// Size: 0x0008 (0x000050 - 0x000058)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{ 
public:
	UClass*                                            QueryContext;                                               // 0x0050   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryGenerator_Donut
/// Size: 0x0150 (0x000080 - 0x0001D0)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          InnerRadius;                                                // 0x0080   (0x0038)  
	FAIDataProviderFloatValue                          OuterRadius;                                                // 0x00B8   (0x0038)  
	FAIDataProviderIntValue                            NumberOfRings;                                              // 0x00F0   (0x0038)  
	FAIDataProviderIntValue                            PointsPerRing;                                              // 0x0128   (0x0038)  
	FEnvDirection                                      ArcDirection;                                               // 0x0160   (0x0020)  
	FAIDataProviderFloatValue                          ArcAngle;                                                   // 0x0180   (0x0038)  
	bool                                               bUseSpiralPattern;                                          // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01B9   (0x0007)  MISSED
	UClass*                                            Center;                                                     // 0x01C0   (0x0008)  
	bool                                               bDefineArc;                                                 // 0x01C8:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01C9   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_OnCircle
/// Size: 0x0190 (0x000080 - 0x000210)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          CircleRadius;                                               // 0x0080   (0x0038)  
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00B8   (0x0038)  
	FAIDataProviderIntValue                            NumberOfPoints;                                             // 0x00F0   (0x0038)  
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                                 // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0129   (0x0007)  MISSED
	FEnvDirection                                      ArcDirection;                                               // 0x0130   (0x0020)  
	FAIDataProviderFloatValue                          ArcAngle;                                                   // 0x0150   (0x0038)  
	float                                              AngleRadians;                                               // 0x0188   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	UClass*                                            CircleCenter;                                               // 0x0190   (0x0008)  
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;                // 0x0198   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0199   (0x0007)  MISSED
	FAIDataProviderFloatValue                          CircleCenterZOffset;                                        // 0x01A0   (0x0038)  
	FEnvTraceData                                      TraceData;                                                  // 0x01D8   (0x0030)  
	bool                                               bDefineArc;                                                 // 0x0208:0 (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0209   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_SimpleGrid
/// Size: 0x0078 (0x000080 - 0x0000F8)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          GridSize;                                                   // 0x0080   (0x0038)  
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00B8   (0x0038)  
	UClass*                                            GenerateAround;                                             // 0x00F0   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryGenerator_PathingGrid
/// Size: 0x0078 (0x0000F8 - 0x000170)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{ 
public:
	FAIDataProviderBoolValue                           PathToItem;                                                 // 0x00F8   (0x0038)  
	UClass*                                            NavigationFilter;                                           // 0x0130   (0x0008)  
	FAIDataProviderFloatValue                          ScanRangeMultiplier;                                        // 0x0138   (0x0038)  
};

/// Class /Script/AIModule.EnvQueryInstanceBlueprintWrapper
/// Size: 0x0050 (0x000028 - 0x000078)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	int32_t                                            QueryID;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x24];                                      // 0x0034   (0x0024)  MISSED
	UClass*                                            ItemType;                                                   // 0x0058   (0x0008)  
	int32_t                                            OptionIndex;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnQueryFinishedEvent;                                       // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	void SetNamedParam(FName ParamName, float Value);                                                                        // [0x364e280] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	TArray<FVector> GetResultsAsLocations();                                                                                 // [0x364e070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	TArray<AActor*> GetResultsAsActors();                                                                                    // [0x364dff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations);                                                       // [0x364df30] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors);                                                             // [0x364de70] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	float GetItemScore(int32_t ItemIndex);                                                                                   // [0x364ddd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	void EQSQueryDoneSignature__DelegateSignature(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus); // [0x197e4f0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/AIModule.EnvQueryItemType
/// Size: 0x0008 (0x000028 - 0x000030)
class UEnvQueryItemType : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/AIModule.EnvQueryItemType_VectorBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_ActorBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Actor
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Direction
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Point
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryManager
/// Size: 0x0108 (0x000038 - 0x000140)
class UEnvQueryManager : public UAISubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x0038   (0x0070)  MISSED
	TArray<FEnvQueryInstanceCache>                     InstanceCache;                                              // 0x00A8   (0x0010)  
	TArray<UEnvQueryContext*>                          LocalContexts;                                              // 0x00B8   (0x0010)  
	TArray<UEnvQueryInstanceBlueprintWrapper*>         GCShieldedWrappers;                                         // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x54];                                      // 0x00D8   (0x0054)  MISSED
	float                                              MaxAllowedTestingTime;                                      // 0x012C   (0x0004)  
	bool                                               bTestQueriesUsingBreadth;                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	int32_t                                            QueryCountWarningThreshold;                                 // 0x0134   (0x0004)  
	double                                             QueryCountWarningInterval;                                  // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/AIModule.EnvQueryManager.RunEQSQuery
	UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, UClass* WrapperClass); // [0x364e0f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.EnvQueryOption
/// Size: 0x0018 (0x000028 - 0x000040)
class UEnvQueryOption : public UObject
{ 
public:
	UEnvQueryGenerator*                                Generator;                                                  // 0x0028   (0x0008)  
	TArray<UEnvQueryTest*>                             Tests;                                                      // 0x0030   (0x0010)  
};

/// Class /Script/AIModule.EnvQueryTest
/// Size: 0x01C8 (0x000030 - 0x0001F8)
class UEnvQueryTest : public UEnvQueryNode
{ 
public:
	int32_t                                            TestOrder;                                                  // 0x0030   (0x0004)  
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                                // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FString                                            TestComment;                                                // 0x0038   (0x0010)  
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                    // 0x0048   (0x0001)  
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                     // 0x0049   (0x0001)  
	TEnumAsByte<EEnvTestFilterType>                    FilterType;                                                 // 0x004A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x004B   (0x0005)  MISSED
	FAIDataProviderBoolValue                           BoolValue;                                                  // 0x0050   (0x0038)  
	FAIDataProviderFloatValue                          FloatValueMin;                                              // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          FloatValueMax;                                              // 0x00C0   (0x0038)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x00F8   (0x0001)  MISSED
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                            // 0x00F9   (0x0001)  
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                               // 0x00FA   (0x0001)  
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                               // 0x00FB   (0x0001)  
	EEQSNormalizationType                              NormalizationType;                                          // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FAIDataProviderFloatValue                          ScoreClampMin;                                              // 0x0100   (0x0038)  
	FAIDataProviderFloatValue                          ScoreClampMax;                                              // 0x0138   (0x0038)  
	FAIDataProviderFloatValue                          ScoringFactor;                                              // 0x0170   (0x0038)  
	FAIDataProviderFloatValue                          ReferenceValue;                                             // 0x01A8   (0x0038)  
	bool                                               bDefineReferenceValue;                                      // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData04_5[0xF];                                       // 0x01E1   (0x000F)  MISSED
	bool                                               bWorkOnFloatValues;                                         // 0x01F0:0 (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x01F1   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest_Distance
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UEnvQueryTest_Distance : public UEnvQueryTest
{ 
public:
	TEnumAsByte<EEnvTestDistance>                      TestMode;                                                   // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01F9   (0x0007)  MISSED
	UClass*                                            DistanceTo;                                                 // 0x0200   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryTest_Dot
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UEnvQueryTest_Dot : public UEnvQueryTest
{ 
public:
	FEnvDirection                                      LineA;                                                      // 0x01F8   (0x0020)  
	FEnvDirection                                      LineB;                                                      // 0x0218   (0x0020)  
	EEnvTestDot                                        TestMode;                                                   // 0x0238   (0x0001)  
	bool                                               bAbsoluteValue;                                             // 0x0239   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x023A   (0x0006)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest_GameplayTags
/// Size: 0x0070 (0x0001F8 - 0x000268)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{ 
public:
	FGameplayTagQuery                                  TagQueryToMatch;                                            // 0x01F8   (0x0048)  
	bool                                               bUpdatedToUseQuery;                                         // 0x0240   (0x0001)  
	EGameplayContainerMatchType                        TagsToMatch;                                                // 0x0241   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0242   (0x0006)  MISSED
	FGameplayTagContainer                              GameplayTags;                                               // 0x0248   (0x0020)  
};

/// Class /Script/AIModule.EnvQueryTest_Overlap
/// Size: 0x0020 (0x0001F8 - 0x000218)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{ 
public:
	FEnvOverlapData                                    OverlapData;                                                // 0x01F8   (0x0020)  
};

/// Class /Script/AIModule.EnvQueryTest_Pathfinding
/// Size: 0x0088 (0x0001F8 - 0x000280)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{ 
public:
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                   // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01F9   (0x0007)  MISSED
	UClass*                                            Context;                                                    // 0x0200   (0x0008)  
	FAIDataProviderBoolValue                           PathFromContext;                                            // 0x0208   (0x0038)  
	FAIDataProviderBoolValue                           SkipUnreachable;                                            // 0x0240   (0x0038)  
	UClass*                                            FilterClass;                                                // 0x0278   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryTest_PathfindingBatch
/// Size: 0x0038 (0x000280 - 0x0002B8)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{ 
public:
	FAIDataProviderFloatValue                          ScanRangeMultiplier;                                        // 0x0280   (0x0038)  
};

/// Class /Script/AIModule.EnvQueryTest_Project
/// Size: 0x0030 (0x0001F8 - 0x000228)
class UEnvQueryTest_Project : public UEnvQueryTest
{ 
public:
	FEnvTraceData                                      ProjectionData;                                             // 0x01F8   (0x0030)  
};

/// Class /Script/AIModule.EnvQueryTest_Random
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UEnvQueryTest_Random : public UEnvQueryTest
{ 
public:
};

/// Class /Script/AIModule.EnvQueryTest_Trace
/// Size: 0x00E0 (0x0001F8 - 0x0002D8)
class UEnvQueryTest_Trace : public UEnvQueryTest
{ 
public:
	FEnvTraceData                                      TraceData;                                                  // 0x01F8   (0x0030)  
	FAIDataProviderBoolValue                           TraceFromContext;                                           // 0x0228   (0x0038)  
	FAIDataProviderFloatValue                          ItemHeightOffset;                                           // 0x0260   (0x0038)  
	FAIDataProviderFloatValue                          ContextHeightOffset;                                        // 0x0298   (0x0038)  
	UClass*                                            Context;                                                    // 0x02D0   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryTest_Volume
/// Size: 0x0018 (0x0001F8 - 0x000210)
class UEnvQueryTest_Volume : public UEnvQueryTest
{ 
public:
	UClass*                                            VolumeContext;                                              // 0x01F8   (0x0008)  
	UClass*                                            VolumeClass;                                                // 0x0200   (0x0008)  
	bool                                               bDoComplexVolumeTest;                                       // 0x0208:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0209   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryTypes : public UObject
{ 
public:
};

/// Class /Script/AIModule.EQSQueryResultSourceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEQSQueryResultSourceInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.EQSRenderingComponent
/// Size: 0x0040 (0x000450 - 0x000490)
class UEQSRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0450   (0x0040)  MISSED
};

/// Class /Script/AIModule.EQSTestingPawn
/// Size: 0x0090 (0x0004C0 - 0x000550)
class AEQSTestingPawn : public ACharacter
{ 
public:
	UEnvQuery*                                         QueryTemplate;                                              // 0x04C0   (0x0008)  
	TArray<FEnvNamedValue>                             QueryParams;                                                // 0x04C8   (0x0010)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x04D8   (0x0010)  
	float                                              TimeLimitPerStep;                                           // 0x04E8   (0x0004)  
	int32_t                                            StepToDebugDraw;                                            // 0x04EC   (0x0004)  
	EEnvQueryHightlightMode                            HighlightMode;                                              // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04F1   (0x0003)  MISSED
	bool                                               bDrawLabels;                                                // 0x04F4:0 (0x0001)  
	bool                                               bDrawFailedItems;                                           // 0x04F4:1 (0x0001)  
	bool                                               bReRunQueryOnlyOnFinishedMove;                              // 0x04F4:2 (0x0001)  
	bool                                               bShouldBeVisibleInGame;                                     // 0x04F4:3 (0x0001)  
	bool                                               bTickDuringGame;                                            // 0x04F4:4 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x04F5   (0x0003)  MISSED
	TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                               // 0x04F8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x04F9   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProperties;                                         // 0x0500   (0x0030)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0530   (0x0020)  MISSED
};

/// Class /Script/AIModule.GenericTeamAgentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGenericTeamAgentInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.GridPathAIController
/// Size: 0x0000 (0x000330 - 0x000330)
class AGridPathAIController : public AAIController
{ 
public:
};

/// Class /Script/AIModule.GridPathFollowingComponent
/// Size: 0x0030 (0x000250 - 0x000280)
class UGridPathFollowingComponent : public UPathFollowingComponent
{ 
public:
	UNavLocalGridManager*                              GridManager;                                                // 0x0250   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0258   (0x0028)  MISSED
};

/// Class /Script/AIModule.NavFilter_AIControllerDefault
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/AIModule.NavLinkProxy
/// Size: 0x0050 (0x000228 - 0x000278)
class ANavLinkProxy : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0228   (0x0010)  MISSED
	TArray<FNavigationLink>                            PointLinks;                                                 // 0x0238   (0x0010)  
	TArray<FNavigationSegmentLink>                     SegmentLinks;                                               // 0x0248   (0x0010)  
	UNavLinkCustomComponent*                           SmartLinkComp;                                              // 0x0258   (0x0008)  
	bool                                               bSmartLinkIsRelevant;                                       // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0261   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnSmartLinkReached;                                         // 0x0268   (0x0010)  


	/// Functions
	// Function /Script/AIModule.NavLinkProxy.SetSmartLinkEnabled
	void SetSmartLinkEnabled(bool bEnabled);                                                                                 // [0x3651ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ResumePathFollowing
	void ResumePathFollowing(AActor* Agent);                                                                                 // [0x3651830] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ReceiveSmartLinkReached
	void ReceiveSmartLinkReached(AActor* Agent, FVector& Destination);                                                       // [0x197e4f0] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/AIModule.NavLinkProxy.IsSmartLinkEnabled
	bool IsSmartLinkEnabled();                                                                                               // [0x3651180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.NavLinkProxy.HasMovingAgents
	bool HasMovingAgents();                                                                                                  // [0x3651150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.NavLocalGridManager
/// Size: 0x0030 (0x000028 - 0x000058)
class UNavLocalGridManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/AIModule.PathFollowingManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UPathFollowingManager : public UObject
{ 
public:
};

/// Class /Script/AIModule.PawnAction
/// Size: 0x0070 (0x000028 - 0x000098)
class UPawnAction : public UObject
{ 
public:
	UPawnAction*                                       ChildAction;                                                // 0x0028   (0x0008)  
	UPawnAction*                                       ParentAction;                                               // 0x0030   (0x0008)  
	UPawnActionsComponent*                             OwnerComponent;                                             // 0x0038   (0x0008)  
	UObject*                                           Instigator;                                                 // 0x0040   (0x0008)  
	UBrainComponent*                                   BrainComp;                                                  // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x0050   (0x0030)  MISSED
	bool                                               bAllowNewSameClassInstance;                                 // 0x0080:0 (0x0001)  
	bool                                               bReplaceActiveSameClassInstance;                            // 0x0080:1 (0x0001)  
	bool                                               bShouldPauseMovement;                                       // 0x0080:2 (0x0001)  
	bool                                               bAlwaysNotifyOnFinished;                                    // 0x0080:3 (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0081   (0x0017)  MISSED


	/// Functions
	// Function /Script/AIModule.PawnAction.GetActionPriority
	TEnumAsByte<EAIRequestPriority> GetActionPriority();                                                                     // [0x15490f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.PawnAction.Finish
	void Finish(TEnumAsByte<EPawnActionResult> WithResult);                                                                  // [0x3651040] Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.PawnAction.CreateActionInstance
	UPawnAction* CreateActionInstance(UObject* WorldContextObject, UClass* ActionClass);                                     // [0x3650de0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnAction_BlueprintBase
/// Size: 0x0000 (0x000098 - 0x000098)
class UPawnAction_BlueprintBase : public UPawnAction
{ 
public:
};

/// Class /Script/AIModule.PawnAction_Move
/// Size: 0x0050 (0x000098 - 0x0000E8)
class UPawnAction_Move : public UPawnAction
{ 
public:
	AActor*                                            GoalActor;                                                  // 0x0098   (0x0008)  
	FVector                                            GoalLocation;                                               // 0x00A0   (0x000C)  
	float                                              AcceptableRadius;                                           // 0x00AC   (0x0004)  
	UClass*                                            FilterClass;                                                // 0x00B0   (0x0008)  
	bool                                               bAllowStrafe;                                               // 0x00B8:0 (0x0001)  
	bool                                               bFinishOnOverlap;                                           // 0x00B8:1 (0x0001)  
	bool                                               bUsePathfinding;                                            // 0x00B8:2 (0x0001)  
	bool                                               bAllowPartialPath;                                          // 0x00B8:3 (0x0001)  
	bool                                               bProjectGoalToNavigation;                                   // 0x00B8:4 (0x0001)  
	bool                                               bUpdatePathToGoal;                                          // 0x00B8:5 (0x0001)  
	bool                                               bAbortChildActionOnPathChange;                              // 0x00B8:6 (0x0001)  
	unsigned char                                      UnknownData00_6[0x2F];                                      // 0x00B9   (0x002F)  MISSED
};

/// Class /Script/AIModule.PawnAction_Repeat
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UPawnAction_Repeat : public UPawnAction
{ 
public:
	UPawnAction*                                       ActionToRepeat;                                             // 0x0098   (0x0008)  
	UPawnAction*                                       RecentActionCopy;                                           // 0x00A0   (0x0008)  
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00A9   (0x000F)  MISSED
};

/// Class /Script/AIModule.PawnAction_Sequence
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UPawnAction_Sequence : public UPawnAction
{ 
public:
	TArray<UPawnAction*>                               ActionSequence;                                             // 0x0098   (0x0010)  
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	UPawnAction*                                       RecentActionCopy;                                           // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/AIModule.PawnAction_Wait
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UPawnAction_Wait : public UPawnAction
{ 
public:
	float                                              TimeToWait;                                                 // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x009C   (0x000C)  MISSED
};

/// Class /Script/AIModule.PawnActionsComponent
/// Size: 0x0038 (0x0000B0 - 0x0000E8)
class UPawnActionsComponent : public UActorComponent
{ 
public:
	APawn*                                             ControlledPawn;                                             // 0x00B0   (0x0008)  
	TArray<FPawnActionStack>                           ActionStacks;                                               // 0x00B8   (0x0010)  
	TArray<FPawnActionEvent>                           ActionEvents;                                               // 0x00C8   (0x0010)  
	UPawnAction*                                       CurrentAction;                                              // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.PawnActionsComponent.K2_PushAction
	bool K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, UObject* Instigator);               // [0x36513f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_PerformAction
	bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);                       // [0x36512f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_ForceAbortAction
	TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(UPawnAction* ActionToAbort);                                      // [0x3651250] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_AbortAction
	TEnumAsByte<EPawnActionAbortState> K2_AbortAction(UPawnAction* ActionToAbort);                                           // [0x36511b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnSensingComponent
/// Size: 0x0048 (0x0000B0 - 0x0000F8)
class UPawnSensingComponent : public UActorComponent
{ 
public:
	float                                              HearingThreshold;                                           // 0x00B0   (0x0004)  
	float                                              LOSHearingThreshold;                                        // 0x00B4   (0x0004)  
	float                                              SightRadius;                                                // 0x00B8   (0x0004)  
	float                                              SensingInterval;                                            // 0x00BC   (0x0004)  
	float                                              HearingMaxSoundAge;                                         // 0x00C0   (0x0004)  
	bool                                               bEnableSensingUpdates;                                      // 0x00C4:0 (0x0001)  
	bool                                               bOnlySensePlayers;                                          // 0x00C4:1 (0x0001)  
	bool                                               bSeePawns;                                                  // 0x00C4:2 (0x0001)  
	bool                                               bHearNoises;                                                // 0x00C4:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0xB];                                       // 0x00C5   (0x000B)  MISSED
	FMulticastInlineDelegate                           OnSeePawn;                                                  // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           OnHearNoise;                                                // 0x00E0   (0x0010)  
	float                                              PeripheralVisionAngle;                                      // 0x00F0   (0x0004)  
	float                                              PeripheralVisionCosine;                                     // 0x00F4   (0x0004)  


	/// Functions
	// Function /Script/AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	void SetSensingUpdatesEnabled(bool bEnabled);                                                                            // [0x14fed90] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetSensingInterval
	void SetSensingInterval(float NewSensingInterval);                                                                       // [0x3651a20] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);                                                           // [0x3651990] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	void SeePawnDelegate__DelegateSignature(APawn* Pawn);                                                                    // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	void HearNoiseDelegate__DelegateSignature(APawn* Instigator, FVector& Location, float Volume);                           // [0x197e4f0] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	float GetPeripheralVisionCosine();                                                                                       // [0x3651130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	float GetPeripheralVisionAngle();                                                                                        // [0x28e5a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.VisualLoggerExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UVisualLoggerExtension : public UObject
{ 
public:
};

/// Struct /Script/AIModule.AIRequestID
/// Size: 0x0004 (0x000000 - 0x000004)
struct FAIRequestID
{ 
	uint32_t                                           RequestId;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/AIModule.AIStimulus
/// Size: 0x003C (0x000000 - 0x00003C)
struct FAIStimulus
{ 
	float                                              Age;                                                        // 0x0000   (0x0004)  
	float                                              ExpirationAge;                                              // 0x0004   (0x0004)  
	float                                              Strength;                                                   // 0x0008   (0x0004)  
	FVector                                            StimulusLocation;                                           // 0x000C   (0x000C)  
	FVector                                            ReceiverLocation;                                           // 0x0018   (0x000C)  
	FName                                              Tag;                                                        // 0x0024   (0x0008)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x002C   (0x000C)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0038:0 (0x0001)  MISSED
	bool                                               bSuccessfullySensed;                                        // 0x0038:1 (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0039   (0x0003)  MISSED
};

/// Struct /Script/AIModule.ActorPerceptionUpdateInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FActorPerceptionUpdateInfo
{ 
	int32_t                                            TargetId;                                                   // 0x0000   (0x0004)  
	TWeakObjectPtr<AActor*>                            Target;                                                     // 0x0004   (0x0008)  
	FAIStimulus                                        Stimulus;                                                   // 0x000C   (0x003C)  
};

/// Struct /Script/AIModule.AIDataProviderValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAIDataProviderValue
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	UAIDataProvider*                                   DataBinding;                                                // 0x0010   (0x0008)  
	FName                                              DataField;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/AIModule.AIDataProviderTypedValue
/// Size: 0x0010 (0x000020 - 0x000030)
struct FAIDataProviderTypedValue : FAIDataProviderValue
{ 
	UClass*                                            PropertyType;                                               // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/AIModule.AIDataProviderBoolValue
/// Size: 0x0008 (0x000030 - 0x000038)
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue
{ 
	bool                                               DefaultValue;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AIModule.AIDataProviderFloatValue
/// Size: 0x0008 (0x000030 - 0x000038)
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue
{ 
	float                                              DefaultValue;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/AIModule.AIDataProviderIntValue
/// Size: 0x0008 (0x000030 - 0x000038)
struct FAIDataProviderIntValue : FAIDataProviderTypedValue
{ 
	int32_t                                            DefaultValue;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/AIModule.AIDataProviderStructValue
/// Size: 0x0010 (0x000020 - 0x000030)
struct FAIDataProviderStructValue : FAIDataProviderValue
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/AIModule.ActorPerceptionBlueprintInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FActorPerceptionBlueprintInfo
{ 
	AActor*                                            Target;                                                     // 0x0000   (0x0008)  
	TArray<FAIStimulus>                                LastSensedStimuli;                                          // 0x0008   (0x0010)  
	bool                                               bIsHostile;                                                 // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AIModule.AISenseAffiliationFilter
/// Size: 0x0004 (0x000000 - 0x000004)
struct FAISenseAffiliationFilter
{ 
	bool                                               bDetectEnemies;                                             // 0x0000:0 (0x0001)  
	bool                                               bDetectNeutrals;                                            // 0x0000:1 (0x0001)  
	bool                                               bDetectFriendlies;                                          // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/AIModule.AIDamageEvent
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAIDamageEvent
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	FVector                                            Location;                                                   // 0x0004   (0x000C)  
	FVector                                            HitLocation;                                                // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	AActor*                                            DamagedActor;                                               // 0x0020   (0x0008)  
	AActor*                                            Instigator;                                                 // 0x0028   (0x0008)  
};

/// Struct /Script/AIModule.AINoiseEvent
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAINoiseEvent
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
	FVector                                            NoiseLocation;                                              // 0x0004   (0x000C)  
	float                                              Loudness;                                                   // 0x0010   (0x0004)  
	float                                              MaxRange;                                                   // 0x0014   (0x0004)  
	AActor*                                            Instigator;                                                 // 0x0018   (0x0008)  
	FName                                              Tag;                                                        // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/AIModule.AIPredictionEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAIPredictionEvent
{ 
	AActor*                                            Requestor;                                                  // 0x0000   (0x0008)  
	AActor*                                            PredictedActor;                                             // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/AIModule.AISightEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAISightEvent
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	AActor*                                            SeenActor;                                                  // 0x0008   (0x0008)  
	AActor*                                            Observer;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/AIModule.AITeamStimulusEvent
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAITeamStimulusEvent
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
	AActor*                                            Broadcaster;                                                // 0x0028   (0x0008)  
	AActor*                                            Enemy;                                                      // 0x0030   (0x0008)  
};

/// Struct /Script/AIModule.AITouchEvent
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAITouchEvent
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	AActor*                                            TouchReceiver;                                              // 0x0010   (0x0008)  
	AActor*                                            OtherActor;                                                 // 0x0018   (0x0008)  
};

/// Struct /Script/AIModule.IntervalCountdown
/// Size: 0x0008 (0x000000 - 0x000008)
struct FIntervalCountdown
{ 
	float                                              Interval;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
};

/// Struct /Script/AIModule.AIMoveRequest
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAIMoveRequest
{ 
	AActor*                                            GoalActor;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0008   (0x0038)  MISSED
};

/// Struct /Script/AIModule.BehaviorTreeTemplateInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBehaviorTreeTemplateInfo
{ 
	UBehaviorTree*                                     Asset;                                                      // 0x0000   (0x0008)  
	UBTCompositeNode*                                  Template;                                                   // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/AIModule.BlackboardKeySelector
/// Size: 0x0028 (0x000000 - 0x000028)
struct FBlackboardKeySelector
{ 
	TArray<UBlackboardKeyType*>                        AllowedTypes;                                               // 0x0000   (0x0010)  
	FName                                              SelectedKeyName;                                            // 0x0010   (0x0008)  
	UClass*                                            SelectedKeyType;                                            // 0x0018   (0x0008)  
	char                                               SelectedKeyID;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	bool                                               bNoneIsAllowedValue;                                        // 0x0024:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/AIModule.BlackboardEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBlackboardEntry
{ 
	FName                                              EntryName;                                                  // 0x0000   (0x0008)  
	UBlackboardKeyType*                                KeyType;                                                    // 0x0008   (0x0008)  
	bool                                               bInstanceSynced;                                            // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AIModule.BTCompositeChild
/// Size: 0x0030 (0x000000 - 0x000030)
struct FBTCompositeChild
{ 
	UBTCompositeNode*                                  ChildComposite;                                             // 0x0000   (0x0008)  
	UBTTaskNode*                                       ChildTask;                                                  // 0x0008   (0x0008)  
	TArray<UBTDecorator*>                              Decorators;                                                 // 0x0010   (0x0010)  
	TArray<FBTDecoratorLogic>                          DecoratorOps;                                               // 0x0020   (0x0010)  
};

/// Struct /Script/AIModule.BTDecoratorLogic
/// Size: 0x0004 (0x000000 - 0x000004)
struct FBTDecoratorLogic
{ 
	TEnumAsByte<EBTDecoratorLogic>                     Operation;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0001   (0x0001)  MISSED
	uint16_t                                           Number;                                                     // 0x0002   (0x0002)  
};

/// Struct /Script/AIModule.CrowdAvoidanceSamplingPattern
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCrowdAvoidanceSamplingPattern
{ 
	TArray<float>                                      Angles;                                                     // 0x0000   (0x0010)  
	TArray<float>                                      Radii;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/AIModule.CrowdAvoidanceConfig
/// Size: 0x001C (0x000000 - 0x00001C)
struct FCrowdAvoidanceConfig
{ 
	float                                              VelocityBias;                                               // 0x0000   (0x0004)  
	float                                              DesiredVelocityWeight;                                      // 0x0004   (0x0004)  
	float                                              CurrentVelocityWeight;                                      // 0x0008   (0x0004)  
	float                                              SideBiasWeight;                                             // 0x000C   (0x0004)  
	float                                              ImpactTimeWeight;                                           // 0x0010   (0x0004)  
	float                                              ImpactTimeRange;                                            // 0x0014   (0x0004)  
	char                                               CustomPatternIdx;                                           // 0x0018   (0x0001)  
	char                                               AdaptiveDivisions;                                          // 0x0019   (0x0001)  
	char                                               AdaptiveRings;                                              // 0x001A   (0x0001)  
	char                                               AdaptiveDepth;                                              // 0x001B   (0x0001)  
};

/// Struct /Script/AIModule.EnvQueryInstanceCache
/// Size: 0x0178 (0x000000 - 0x000178)
struct FEnvQueryInstanceCache
{ 
	UEnvQuery*                                         Template;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x170];                                     // 0x0008   (0x0170)  MISSED
};

/// Struct /Script/AIModule.EnvQueryRequest
/// Size: 0x0068 (0x000000 - 0x000068)
struct FEnvQueryRequest
{ 
	UEnvQuery*                                         QueryTemplate;                                              // 0x0000   (0x0008)  
	UObject*                                           Owner;                                                      // 0x0008   (0x0008)  
	UWorld*                                            World;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0018   (0x0050)  MISSED
};

/// Struct /Script/AIModule.EQSParametrizedQueryExecutionRequest
/// Size: 0x0048 (0x000000 - 0x000048)
struct FEQSParametrizedQueryExecutionRequest
{ 
	UEnvQuery*                                         QueryTemplate;                                              // 0x0000   (0x0008)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x0008   (0x0010)  
	FBlackboardKeySelector                             EQSQueryBlackboardKey;                                      // 0x0018   (0x0028)  
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	bool                                               bUseBBKeyForQueryTemplate;                                  // 0x0044:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/AIModule.AIDynamicParam
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAIDynamicParam
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x0008)  
	EAIParamType                                       ParamType;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Value;                                                      // 0x000C   (0x0004)  
	FBlackboardKeySelector                             BBKey;                                                      // 0x0010   (0x0028)  
};

/// Struct /Script/AIModule.EnvQueryResult
/// Size: 0x0040 (0x000000 - 0x000040)
struct FEnvQueryResult
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	UClass*                                            ItemType;                                                   // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x0018   (0x0014)  MISSED
	int32_t                                            OptionIndex;                                                // 0x002C   (0x0004)  
	int32_t                                            QueryID;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/AIModule.EnvOverlapData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FEnvOverlapData
{ 
	float                                              ExtentX;                                                    // 0x0000   (0x0004)  
	float                                              ExtentY;                                                    // 0x0004   (0x0004)  
	float                                              ExtentZ;                                                    // 0x0008   (0x0004)  
	FVector                                            ShapeOffset;                                                // 0x000C   (0x000C)  
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                             // 0x0018   (0x0001)  
	TEnumAsByte<EEnvOverlapShape>                      OverlapShape;                                               // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	bool                                               bOnlyBlockingHits;                                          // 0x001C:0 (0x0001)  
	bool                                               bOverlapComplex;                                            // 0x001C:1 (0x0001)  
	bool                                               bSkipOverlapQuerier;                                        // 0x001C:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/AIModule.EnvTraceData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEnvTraceData
{ 
	int32_t                                            VersionNum;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UClass*                                            NavigationFilter;                                           // 0x0008   (0x0008)  
	float                                              ProjectDown;                                                // 0x0010   (0x0004)  
	float                                              ProjectUp;                                                  // 0x0014   (0x0004)  
	float                                              ExtentX;                                                    // 0x0018   (0x0004)  
	float                                              ExtentY;                                                    // 0x001C   (0x0004)  
	float                                              ExtentZ;                                                    // 0x0020   (0x0004)  
	float                                              PostProjectionVerticalOffset;                               // 0x0024   (0x0004)  
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                               // 0x0028   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     SerializedChannel;                                          // 0x0029   (0x0001)  
	TEnumAsByte<EEnvTraceShape>                        TraceShape;                                                 // 0x002A   (0x0001)  
	TEnumAsByte<EEnvQueryTrace>                        TraceMode;                                                  // 0x002B   (0x0001)  
	bool                                               bTraceComplex;                                              // 0x002C:0 (0x0001)  
	bool                                               bOnlyBlockingHits;                                          // 0x002C:1 (0x0001)  
	bool                                               bCanTraceOnNavMesh;                                         // 0x002C:2 (0x0001)  
	bool                                               bCanTraceOnGeometry;                                        // 0x002C:3 (0x0001)  
	bool                                               bCanDisableTrace;                                           // 0x002C:4 (0x0001)  
	bool                                               bCanProjectDown;                                            // 0x002C:5 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/AIModule.EnvDirection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FEnvDirection
{ 
	UClass*                                            LineFrom;                                                   // 0x0000   (0x0008)  
	UClass*                                            LineTo;                                                     // 0x0008   (0x0008)  
	UClass*                                            Rotation;                                                   // 0x0010   (0x0008)  
	TEnumAsByte<EEnvDirection>                         DirMode;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AIModule.EnvNamedValue
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEnvNamedValue
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x0008)  
	EAIParamType                                       ParamType;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Value;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/AIModule.GenericTeamId
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGenericTeamId
{ 
	char                                               TeamId;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/AIModule.PawnActionStack
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPawnActionStack
{ 
	UPawnAction*                                       TopAction;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/AIModule.PawnActionEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPawnActionEvent
{ 
	UPawnAction*                                       Action;                                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Enum /Script/AIModule.EPathFollowingResult
/// Size: 0x07
enum EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success                                                    = 0,
	EPathFollowingResult__Blocked                                                    = 1,
	EPathFollowingResult__OffPath                                                    = 2,
	EPathFollowingResult__Aborted                                                    = 3,
	EPathFollowingResult__Skipped_DEPRECATED                                         = 4,
	EPathFollowingResult__Invalid                                                    = 5,
	EPathFollowingResult__EPathFollowingResult_MAX                                   = 6
};

/// Enum /Script/AIModule.EEnvQueryStatus
/// Size: 0x07
enum EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing                                                      = 0,
	EEnvQueryStatus__Success                                                         = 1,
	EEnvQueryStatus__Failed                                                          = 2,
	EEnvQueryStatus__Aborted                                                         = 3,
	EEnvQueryStatus__OwnerLost                                                       = 4,
	EEnvQueryStatus__MissingParam                                                    = 5,
	EEnvQueryStatus__EEnvQueryStatus_MAX                                             = 6
};

/// Enum /Script/AIModule.EAISenseNotifyType
/// Size: 0x03
enum EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception                                            = 0,
	EAISenseNotifyType__OnPerceptionChange                                           = 1,
	EAISenseNotifyType__EAISenseNotifyType_MAX                                       = 2
};

/// Enum /Script/AIModule.EAITaskPriority
/// Size: 0x06
enum EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest                                                          = 0,
	EAITaskPriority__Low                                                             = 64,
	EAITaskPriority__AutonomousAI                                                    = 127,
	EAITaskPriority__High                                                            = 192,
	EAITaskPriority__Ultimate                                                        = 254,
	EAITaskPriority__EAITaskPriority_MAX                                             = 255
};

/// Enum /Script/AIModule.EGenericAICheck
/// Size: 0x08
enum EGenericAICheck : uint8_t
{
	EGenericAICheck__Less                                                            = 0,
	EGenericAICheck__LessOrEqual                                                     = 1,
	EGenericAICheck__Equal                                                           = 2,
	EGenericAICheck__NotEqual                                                        = 3,
	EGenericAICheck__GreaterOrEqual                                                  = 4,
	EGenericAICheck__Greater                                                         = 5,
	EGenericAICheck__IsTrue                                                          = 6,
	EGenericAICheck__MAX                                                             = 7
};

/// Enum /Script/AIModule.EAILockSource
/// Size: 0x05
enum EAILockSource : uint8_t
{
	EAILockSource__Animation                                                         = 0,
	EAILockSource__Logic                                                             = 1,
	EAILockSource__Script                                                            = 2,
	EAILockSource__Gameplay                                                          = 3,
	EAILockSource__MAX                                                               = 4
};

/// Enum /Script/AIModule.EAIRequestPriority
/// Size: 0x06
enum EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript                                                   = 0,
	EAIRequestPriority__Logic                                                        = 1,
	EAIRequestPriority__HardScript                                                   = 2,
	EAIRequestPriority__Reaction                                                     = 3,
	EAIRequestPriority__Ultimate                                                     = 4,
	EAIRequestPriority__MAX                                                          = 5
};

/// Enum /Script/AIModule.EPawnActionEventType
/// Size: 0x07
enum EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid                                                    = 0,
	EPawnActionEventType__FailedToStart                                              = 1,
	EPawnActionEventType__InstantAbort                                               = 2,
	EPawnActionEventType__FinishedAborting                                           = 3,
	EPawnActionEventType__FinishedExecution                                          = 4,
	EPawnActionEventType__Push                                                       = 5,
	EPawnActionEventType__EPawnActionEventType_MAX                                   = 6
};

/// Enum /Script/AIModule.EPawnActionResult
/// Size: 0x06
enum EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted                                                    = 0,
	EPawnActionResult__InProgress                                                    = 1,
	EPawnActionResult__Success                                                       = 2,
	EPawnActionResult__Failed                                                        = 3,
	EPawnActionResult__Aborted                                                       = 4,
	EPawnActionResult__EPawnActionResult_MAX                                         = 5
};

/// Enum /Script/AIModule.EPawnActionAbortState
/// Size: 0x06
enum EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted                                              = 0,
	EPawnActionAbortState__NotBeingAborted                                           = 1,
	EPawnActionAbortState__MarkPendingAbort                                          = 2,
	EPawnActionAbortState__LatentAbortInProgress                                     = 3,
	EPawnActionAbortState__AbortDone                                                 = 4,
	EPawnActionAbortState__MAX                                                       = 5
};

/// Enum /Script/AIModule.FAIDistanceType
/// Size: 0x04
enum FAIDistanceType : uint8_t
{
	FAIDistanceType__Distance3D                                                      = 0,
	FAIDistanceType__Distance2D                                                      = 1,
	FAIDistanceType__DistanceZ                                                       = 2,
	FAIDistanceType__MAX                                                             = 3
};

/// Enum /Script/AIModule.EAIOptionFlag
/// Size: 0x04
enum EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default                                                           = 0,
	EAIOptionFlag__Enable                                                            = 1,
	EAIOptionFlag__Disable                                                           = 2,
	EAIOptionFlag__MAX                                                               = 3
};

/// Enum /Script/AIModule.EBTFlowAbortMode
/// Size: 0x05
enum EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None                                                           = 0,
	EBTFlowAbortMode__LowerPriority                                                  = 1,
	EBTFlowAbortMode__Self                                                           = 2,
	EBTFlowAbortMode__Both                                                           = 3,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX                                           = 4
};

/// Enum /Script/AIModule.EBTNodeResult
/// Size: 0x05
enum EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded                                                         = 0,
	EBTNodeResult__Failed                                                            = 1,
	EBTNodeResult__Aborted                                                           = 2,
	EBTNodeResult__InProgress                                                        = 3,
	EBTNodeResult__EBTNodeResult_MAX                                                 = 4
};

/// Enum /Script/AIModule.ETextKeyOperation
/// Size: 0x05
enum ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal                                                         = 0,
	ETextKeyOperation__NotEqual                                                      = 1,
	ETextKeyOperation__Contain                                                       = 2,
	ETextKeyOperation__NotContain                                                    = 3,
	ETextKeyOperation__ETextKeyOperation_MAX                                         = 4
};

/// Enum /Script/AIModule.EArithmeticKeyOperation
/// Size: 0x07
enum EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal                                                   = 0,
	EArithmeticKeyOperation__NotEqual                                                = 1,
	EArithmeticKeyOperation__Less                                                    = 2,
	EArithmeticKeyOperation__LessOrEqual                                             = 3,
	EArithmeticKeyOperation__Greater                                                 = 4,
	EArithmeticKeyOperation__GreaterOrEqual                                          = 5,
	EArithmeticKeyOperation__EArithmeticKeyOperation_MAX                             = 6
};

/// Enum /Script/AIModule.EBasicKeyOperation
/// Size: 0x03
enum EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set                                                          = 0,
	EBasicKeyOperation__NotSet                                                       = 1,
	EBasicKeyOperation__EBasicKeyOperation_MAX                                       = 2
};

/// Enum /Script/AIModule.EBTParallelMode
/// Size: 0x03
enum EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground                                                 = 0,
	EBTParallelMode__WaitForBackground                                               = 1,
	EBTParallelMode__EBTParallelMode_MAX                                             = 2
};

/// Enum /Script/AIModule.EBTDecoratorLogic
/// Size: 0x06
enum EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid                                                       = 0,
	EBTDecoratorLogic__Test                                                          = 1,
	EBTDecoratorLogic__And                                                           = 2,
	EBTDecoratorLogic__Or                                                            = 3,
	EBTDecoratorLogic__Not                                                           = 4,
	EBTDecoratorLogic__EBTDecoratorLogic_MAX                                         = 5
};

/// Enum /Script/AIModule.EBTChildIndex
/// Size: 0x03
enum EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode                                                         = 0,
	EBTChildIndex__TaskNode                                                          = 1,
	EBTChildIndex__EBTChildIndex_MAX                                                 = 2
};

/// Enum /Script/AIModule.EBTBlackboardRestart
/// Size: 0x03
enum EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange                                                = 0,
	EBTBlackboardRestart__ResultChange                                               = 1,
	EBTBlackboardRestart__EBTBlackboardRestart_MAX                                   = 2
};

/// Enum /Script/AIModule.EBlackBoardEntryComparison
/// Size: 0x03
enum EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal                                                = 0,
	EBlackBoardEntryComparison__NotEqual                                             = 1,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX                       = 2
};

/// Enum /Script/AIModule.EPathExistanceQueryType
/// Size: 0x04
enum EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D                                        = 0,
	EPathExistanceQueryType__HierarchicalQuery                                       = 1,
	EPathExistanceQueryType__RegularPathFinding                                      = 2,
	EPathExistanceQueryType__EPathExistanceQueryType_MAX                             = 3
};

/// Enum /Script/AIModule.EPointOnCircleSpacingMethod
/// Size: 0x03
enum EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween                                      = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints                                    = 1,
	EPointOnCircleSpacingMethod__EPointOnCircleSpacingMethod_MAX                     = 2
};

/// Enum /Script/AIModule.EEQSNormalizationType
/// Size: 0x03
enum EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute                                                  = 0,
	EEQSNormalizationType__RelativeToScores                                          = 1,
	EEQSNormalizationType__EEQSNormalizationType_MAX                                 = 2
};

/// Enum /Script/AIModule.EEnvTestDistance
/// Size: 0x05
enum EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D                                                     = 0,
	EEnvTestDistance__Distance2D                                                     = 1,
	EEnvTestDistance__DistanceZ                                                      = 2,
	EEnvTestDistance__DistanceAbsoluteZ                                              = 3,
	EEnvTestDistance__EEnvTestDistance_MAX                                           = 4
};

/// Enum /Script/AIModule.EEnvTestDot
/// Size: 0x03
enum EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D                                                               = 0,
	EEnvTestDot__Dot2D                                                               = 1,
	EEnvTestDot__EEnvTestDot_MAX                                                     = 2
};

/// Enum /Script/AIModule.EEnvTestPathfinding
/// Size: 0x04
enum EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist                                                   = 0,
	EEnvTestPathfinding__PathCost                                                    = 1,
	EEnvTestPathfinding__PathLength                                                  = 2,
	EEnvTestPathfinding__EEnvTestPathfinding_MAX                                     = 3
};

/// Enum /Script/AIModule.EEnvQueryTestClamping
/// Size: 0x04
enum EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None                                                      = 0,
	EEnvQueryTestClamping__SpecifiedValue                                            = 1,
	EEnvQueryTestClamping__FilterThreshold                                           = 2,
	EEnvQueryTestClamping__EEnvQueryTestClamping_MAX                                 = 3
};

/// Enum /Script/AIModule.EEnvDirection
/// Size: 0x03
enum EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints                                                         = 0,
	EEnvDirection__Rotation                                                          = 1,
	EEnvDirection__EEnvDirection_MAX                                                 = 2
};

/// Enum /Script/AIModule.EEnvOverlapShape
/// Size: 0x04
enum EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box                                                            = 0,
	EEnvOverlapShape__Sphere                                                         = 1,
	EEnvOverlapShape__Capsule                                                        = 2,
	EEnvOverlapShape__EEnvOverlapShape_MAX                                           = 3
};

/// Enum /Script/AIModule.EEnvTraceShape
/// Size: 0x05
enum EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line                                                             = 0,
	EEnvTraceShape__Box                                                              = 1,
	EEnvTraceShape__Sphere                                                           = 2,
	EEnvTraceShape__Capsule                                                          = 3,
	EEnvTraceShape__EEnvTraceShape_MAX                                               = 4
};

/// Enum /Script/AIModule.EEnvQueryTrace
/// Size: 0x05
enum EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None                                                             = 0,
	EEnvQueryTrace__Navigation                                                       = 1,
	EEnvQueryTrace__Geometry                                                         = 2,
	EEnvQueryTrace__NavigationOverLedges                                             = 3,
	EEnvQueryTrace__EEnvQueryTrace_MAX                                               = 4
};

/// Enum /Script/AIModule.EAIParamType
/// Size: 0x04
enum EAIParamType : uint8_t
{
	EAIParamType__Float                                                              = 0,
	EAIParamType__Int                                                                = 1,
	EAIParamType__Bool                                                               = 2,
	EAIParamType__MAX                                                                = 3
};

/// Enum /Script/AIModule.EEnvQueryParam
/// Size: 0x04
enum EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float                                                            = 0,
	EEnvQueryParam__Int                                                              = 1,
	EEnvQueryParam__Bool                                                             = 2,
	EEnvQueryParam__EEnvQueryParam_MAX                                               = 3
};

/// Enum /Script/AIModule.EEnvQueryRunMode
/// Size: 0x05
enum EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult                                                   = 0,
	EEnvQueryRunMode__RandomBest5Pct                                                 = 1,
	EEnvQueryRunMode__RandomBest25Pct                                                = 2,
	EEnvQueryRunMode__AllMatching                                                    = 3,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX                                           = 4
};

/// Enum /Script/AIModule.EEnvTestScoreOperator
/// Size: 0x05
enum EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore                                              = 0,
	EEnvTestScoreOperator__MinScore                                                  = 1,
	EEnvTestScoreOperator__MaxScore                                                  = 2,
	EEnvTestScoreOperator__Multiply                                                  = 3,
	EEnvTestScoreOperator__EEnvTestScoreOperator_MAX                                 = 4
};

/// Enum /Script/AIModule.EEnvTestFilterOperator
/// Size: 0x03
enum EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass                                                  = 0,
	EEnvTestFilterOperator__AnyPass                                                  = 1,
	EEnvTestFilterOperator__EEnvTestFilterOperator_MAX                               = 2
};

/// Enum /Script/AIModule.EEnvTestCost
/// Size: 0x04
enum EEnvTestCost : uint8_t
{
	EEnvTestCost__Low                                                                = 0,
	EEnvTestCost__Medium                                                             = 1,
	EEnvTestCost__High                                                               = 2,
	EEnvTestCost__EEnvTestCost_MAX                                                   = 3
};

/// Enum /Script/AIModule.EEnvTestWeight
/// Size: 0x07
enum EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None                                                             = 0,
	EEnvTestWeight__Square                                                           = 1,
	EEnvTestWeight__Inverse                                                          = 2,
	EEnvTestWeight__Unused                                                           = 3,
	EEnvTestWeight__Constant                                                         = 4,
	EEnvTestWeight__Skip                                                             = 5,
	EEnvTestWeight__EEnvTestWeight_MAX                                               = 6
};

/// Enum /Script/AIModule.EEnvTestScoreEquation
/// Size: 0x06
enum EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear                                                    = 0,
	EEnvTestScoreEquation__Square                                                    = 1,
	EEnvTestScoreEquation__InverseLinear                                             = 2,
	EEnvTestScoreEquation__SquareRoot                                                = 3,
	EEnvTestScoreEquation__Constant                                                  = 4,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX                                 = 5
};

/// Enum /Script/AIModule.EEnvTestFilterType
/// Size: 0x05
enum EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum                                                      = 0,
	EEnvTestFilterType__Maximum                                                      = 1,
	EEnvTestFilterType__Range                                                        = 2,
	EEnvTestFilterType__Match                                                        = 3,
	EEnvTestFilterType__EEnvTestFilterType_MAX                                       = 4
};

/// Enum /Script/AIModule.EEnvTestPurpose
/// Size: 0x04
enum EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter                                                          = 0,
	EEnvTestPurpose__Score                                                           = 1,
	EEnvTestPurpose__FilterAndScore                                                  = 2,
	EEnvTestPurpose__EEnvTestPurpose_MAX                                             = 3
};

/// Enum /Script/AIModule.EEnvQueryHightlightMode
/// Size: 0x04
enum EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All                                                     = 0,
	EEnvQueryHightlightMode__Best5Pct                                                = 1,
	EEnvQueryHightlightMode__Best25Pct                                               = 2,
	EEnvQueryHightlightMode__EEnvQueryHightlightMode_MAX                             = 3
};

/// Enum /Script/AIModule.ETeamAttitude
/// Size: 0x04
enum ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly                                                          = 0,
	ETeamAttitude__Neutral                                                           = 1,
	ETeamAttitude__Hostile                                                           = 2,
	ETeamAttitude__ETeamAttitude_MAX                                                 = 3
};

/// Enum /Script/AIModule.EPathFollowingRequestResult
/// Size: 0x04
enum EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed                                              = 0,
	EPathFollowingRequestResult__AlreadyAtGoal                                       = 1,
	EPathFollowingRequestResult__RequestSuccessful                                   = 2,
	EPathFollowingRequestResult__EPathFollowingRequestResult_MAX                     = 3
};

/// Enum /Script/AIModule.EPathFollowingAction
/// Size: 0x06
enum EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error                                                      = 0,
	EPathFollowingAction__NoMove                                                     = 1,
	EPathFollowingAction__DirectMove                                                 = 2,
	EPathFollowingAction__PartialPath                                                = 3,
	EPathFollowingAction__PathToGoal                                                 = 4,
	EPathFollowingAction__EPathFollowingAction_MAX                                   = 5
};

/// Enum /Script/AIModule.EPathFollowingStatus
/// Size: 0x05
enum EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle                                                       = 0,
	EPathFollowingStatus__Waiting                                                    = 1,
	EPathFollowingStatus__Paused                                                     = 2,
	EPathFollowingStatus__Moving                                                     = 3,
	EPathFollowingStatus__EPathFollowingStatus_MAX                                   = 4
};

/// Enum /Script/AIModule.EPawnActionFailHandling
/// Size: 0x03
enum EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess                                          = 0,
	EPawnActionFailHandling__IgnoreFailure                                           = 1,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX                             = 2
};

/// Enum /Script/AIModule.EPawnSubActionTriggeringPolicy
/// Size: 0x03
enum EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering                             = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances                                   = 1,
	EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX               = 2
};

/// Enum /Script/AIModule.EPawnActionMoveMode
/// Size: 0x03
enum EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding                                              = 0,
	EPawnActionMoveMode__StraightLine                                                = 1,
	EPawnActionMoveMode__EPawnActionMoveMode_MAX                                     = 2
};

