/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AnimationSharing.

/// Class /Script/AnimationSharing.AnimSharingStateInstance
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UAnimSharingStateInstance : public UAnimInstance
{ 
public:
	UAnimSequence*                                     AnimationToPlay;                                            // 0x02B8   (0x0008)  
	float                                              PermutationTimeOffset;                                      // 0x02C0   (0x0004)  
	float                                              PlayRate;                                                   // 0x02C4   (0x0004)  
	bool                                               bStateBool;                                                 // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	UAnimSharingInstance*                              Instance;                                                   // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AnimationSharing.AnimSharingStateInstance.GetInstancedActors
	void GetInstancedActors(TArray<AActor*>& Actors);                                                                        // [0xd94cd0] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimationSharing.AnimSharingTransitionInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UAnimSharingTransitionInstance : public UAnimInstance
{ 
public:
	TWeakObjectPtr<USkeletalMeshComponent*>            FromComponent;                                              // 0x02B8   (0x0008)  
	TWeakObjectPtr<USkeletalMeshComponent*>            ToComponent;                                                // 0x02C0   (0x0008)  
	float                                              BlendTime;                                                  // 0x02C8   (0x0004)  
	bool                                               bBlendBool;                                                 // 0x02CC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02CD   (0x0003)  MISSED
};

/// Class /Script/AnimationSharing.AnimSharingAdditiveInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UAnimSharingAdditiveInstance : public UAnimInstance
{ 
public:
	TWeakObjectPtr<USkeletalMeshComponent*>            BaseComponent;                                              // 0x02B8   (0x0008)  
	TWeakObjectPtr<UAnimSequence*>                     AdditiveAnimation;                                          // 0x02C0   (0x0008)  
	float                                              Alpha;                                                      // 0x02C8   (0x0004)  
	bool                                               bStateBool;                                                 // 0x02CC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02CD   (0x0003)  MISSED
};

/// Class /Script/AnimationSharing.AnimSharingInstance
/// Size: 0x00F0 (0x000028 - 0x000118)
class UAnimSharingInstance : public UObject
{ 
public:
	TArray<AActor*>                                    RegisteredActors;                                           // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0038   (0x0050)  MISSED
	UAnimationSharingStateProcessor*                   StateProcessor;                                             // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x0090   (0x0038)  MISSED
	TArray<UAnimSequence*>                             UsedAnimationSequences;                                     // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00D8   (0x0010)  MISSED
	UEnum*                                             StateEnum;                                                  // 0x00E8   (0x0008)  
	AActor*                                            SharingActor;                                               // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x00F8   (0x0020)  MISSED
};

/// Class /Script/AnimationSharing.AnimationSharingManager
/// Size: 0x0060 (0x000028 - 0x000088)
class UAnimationSharingManager : public UObject
{ 
public:
	TArray<USkeleton*>                                 Skeletons;                                                  // 0x0028   (0x0010)  
	TArray<UAnimSharingInstance*>                      PerSkeletonData;                                            // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0048   (0x0040)  MISSED


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	void RegisterActorWithSkeletonBP(AActor* InActor, USkeleton* SharingSkeleton);                                           // [0xd94f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	UAnimationSharingManager* GetAnimationSharingManager(UObject* WorldContextObject);                                       // [0xd94c10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	bool CreateAnimationSharingManager(UObject* WorldContextObject, UAnimationSharingSetup* Setup);                          // [0xd94b40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
	bool AnimationSharingEnabled();                                                                                          // [0xd94b10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AnimationSharing.AnimationSharingSetup
/// Size: 0x0020 (0x000028 - 0x000048)
class UAnimationSharingSetup : public UObject
{ 
public:
	TArray<FPerSkeletonAnimationSharingSetup>          SkeletonSetups;                                             // 0x0028   (0x0010)  
	FAnimationSharingScalability                       ScalabilitySettings;                                        // 0x0038   (0x0010)  
};

/// Class /Script/AnimationSharing.AnimationSharingStateProcessor
/// Size: 0x0028 (0x000028 - 0x000050)
class UAnimationSharingStateProcessor : public UObject
{ 
public:
	TWeakObjectPtr<UEnum*>                             AnimationStateEnum;                                         // 0x0028   (0x0028)  


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	void ProcessActorState(int32_t& OutState, AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // [0xd94d80] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
	UEnum* GetAnimationStateEnum();                                                                                          // [0xd94ca0] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/AnimationSharing.TickAnimationSharingFunction
/// Size: 0x0008 (0x000028 - 0x000030)
struct FTickAnimationSharingFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/AnimationSharing.AnimationSharingScalability
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAnimationSharingScalability
{ 
	FPerPlatformBool                                   UseBlendTransitions;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FPerPlatformFloat                                  BlendSignificanceValue;                                     // 0x0004   (0x0004)  
	FPerPlatformInt                                    MaximumNumberConcurrentBlends;                              // 0x0008   (0x0004)  
	FPerPlatformFloat                                  TickSignificanceValue;                                      // 0x000C   (0x0004)  
};

/// Struct /Script/AnimationSharing.PerSkeletonAnimationSharingSetup
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPerSkeletonAnimationSharingSetup
{ 
	USkeleton*                                         Skeleton;                                                   // 0x0000   (0x0008)  
	USkeletalMesh*                                     SkeletalMesh;                                               // 0x0008   (0x0008)  
	UClass*                                            BlendAnimBlueprint;                                         // 0x0010   (0x0008)  
	UClass*                                            AdditiveAnimBlueprint;                                      // 0x0018   (0x0008)  
	UClass*                                            StateProcessorClass;                                        // 0x0020   (0x0008)  
	TArray<FAnimationStateEntry>                       AnimationStates;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/AnimationSharing.AnimationStateEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAnimationStateEntry
{ 
	char                                               State;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FAnimationSetup>                            AnimationSetups;                                            // 0x0008   (0x0010)  
	bool                                               bOnDemand;                                                  // 0x0018   (0x0001)  
	bool                                               bAdditive;                                                  // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              BlendTime;                                                  // 0x001C   (0x0004)  
	bool                                               bReturnToPreviousState;                                     // 0x0020   (0x0001)  
	bool                                               bSetNextState;                                              // 0x0021   (0x0001)  
	char                                               NextState;                                                  // 0x0022   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	FPerPlatformInt                                    MaximumNumberOfConcurrentInstances;                         // 0x0024   (0x0004)  
	float                                              WiggleTimePercentage;                                       // 0x0028   (0x0004)  
	bool                                               bRequiresCurves;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/AnimationSharing.AnimationSetup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAnimationSetup
{ 
	UAnimSequence*                                     AnimSequence;                                               // 0x0000   (0x0008)  
	UClass*                                            AnimBlueprint;                                              // 0x0008   (0x0008)  
	FPerPlatformInt                                    NumRandomizedInstances;                                     // 0x0010   (0x0004)  
	FPerPlatformBool                                   Enabled;                                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

