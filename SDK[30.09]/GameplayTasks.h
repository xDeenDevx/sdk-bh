/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameplayTasks.

/// Class /Script/GameplayTasks.GameplayTask
/// Size: 0x0040 (0x000028 - 0x000068)
class UGameplayTask : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FName                                              InstanceName;                                               // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0038   (0x0002)  MISSED
	ETaskResourceOverlapPolicy                         ResourceOverlapPolicy;                                      // 0x003A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x25];                                      // 0x003B   (0x0025)  MISSED
	UGameplayTask*                                     ChildTask;                                                  // 0x0060   (0x0008)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask.ReadyForActivation
	void ReadyForActivation();                                                                                               // [0x35ad2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	void GenericGameplayTaskDelegate__DelegateSignature();                                                                   // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayTasks.GameplayTask.EndTask
	void EndTask();                                                                                                          // [0x35acf90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_ClaimResource
/// Size: 0x0000 (0x000068 - 0x000068)
class UGameplayTask_ClaimResource : public UGameplayTask
{ 
public:
};

/// Class /Script/GameplayTasks.GameplayTask_SpawnActor
/// Size: 0x0040 (0x000068 - 0x0000A8)
class UGameplayTask_SpawnActor : public UGameplayTask
{ 
public:
	FMulticastInlineDelegate                           Success;                                                    // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           DidNotSpawn;                                                // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0088   (0x0018)  MISSED
	UClass*                                            ClassToSpawn;                                               // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<Class> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, UClass* Class, bool bSpawnOnlyOnAuthority); // [0x35ad310] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	void FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);                                             // [0x35acfb0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	bool BeginSpawningActor(UObject* WorldContextObject, AActor*& SpawnedActor);                                             // [0x35acb80] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
/// Size: 0x0030 (0x000068 - 0x000098)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{ 
public:
	FMulticastInlineDelegate                           OnFinished;                                                 // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           OnTimeExpired;                                              // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTask_WaitDelay
/// Size: 0x0018 (0x000068 - 0x000080)
class UGameplayTask_WaitDelay : public UGameplayTask
{ 
public:
	FMulticastInlineDelegate                           OnFinish;                                                   // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<Class> TaskOwner, float Time, char Priority);                    // [0x35ad4e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	void TaskDelayDelegate__DelegateSignature();                                                                             // [0x197e4f0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayTasks.GameplayTaskOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayTaskOwnerInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayTasks.GameplayTaskResource
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameplayTaskResource : public UObject
{ 
public:
	int32_t                                            ManualResourceID;                                           // 0x0028   (0x0004)  
	int8_t                                             AutoResourceID;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	bool                                               bManuallySetID;                                             // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTasksComponent
/// Size: 0x0070 (0x0000B0 - 0x000120)
class UGameplayTasksComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x00B0   (0x000C)  MISSED
	bool                                               bIsNetDirty;                                                // 0x00BC:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00BD   (0x0003)  MISSED
	TArray<UGameplayTask*>                             SimulatedTasks;                                             // 0x00C0   (0x0010)  
	TArray<UGameplayTask*>                             TaskPriorityQueue;                                          // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00E0   (0x0010)  MISSED
	TArray<UGameplayTask*>                             TickingTasks;                                               // 0x00F0   (0x0010)  
	TArray<UGameplayTask*>                             KnownTasks;                                                 // 0x0100   (0x0010)  
	FMulticastInlineDelegate                           OnClaimedResourcesChange;                                   // 0x0110   (0x0010)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	void OnRep_SimulatedTasks();                                                                                             // [0x35ad2d0] Final|Native|Public  
	// Function /Script/GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<Class> TaskOwner, UGameplayTask* Task, char Priority, TArray<UClass*> AdditionalRequiredResources, TArray<UClass*> AdditionalClaimedResources); // [0x35ad080] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GameplayTasks.GameplayResourceSet
/// Size: 0x0002 (0x000000 - 0x000002)
struct FGameplayResourceSet
{ 
	unsigned char                                      UnknownData00_1[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
/// Size: 0x03
enum ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop                                           = 0,
	ETaskResourceOverlapPolicy__StartAtEnd                                           = 1,
	ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX                       = 2
};

/// Enum /Script/GameplayTasks.EGameplayTaskState
/// Size: 0x06
enum EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized                                                = 0,
	EGameplayTaskState__AwaitingActivation                                           = 1,
	EGameplayTaskState__Paused                                                       = 2,
	EGameplayTaskState__Active                                                       = 3,
	EGameplayTaskState__Finished                                                     = 4,
	EGameplayTaskState__EGameplayTaskState_MAX                                       = 5
};

/// Enum /Script/GameplayTasks.EGameplayTaskRunResult
/// Size: 0x06
enum EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error                                                    = 0,
	EGameplayTaskRunResult__Failed                                                   = 1,
	EGameplayTaskRunResult__Success_Paused                                           = 2,
	EGameplayTaskRunResult__Success_Active                                           = 3,
	EGameplayTaskRunResult__Success_Finished                                         = 4,
	EGameplayTaskRunResult__EGameplayTaskRunResult_MAX                               = 5
};

