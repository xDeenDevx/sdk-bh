/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TigerCore.

/// Class /Script/TigerCore.TigerAuthenticationManagerBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UTigerAuthenticationManagerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/TigerCore.TigerAnimationFilter
/// Size: 0x0050 (0x000030 - 0x000080)
class UTigerAnimationFilter : public UDataAsset
{ 
public:
	TArray<FName>                                      BonesToFilter;                                              // 0x0030   (0x0010)  
	TArray<FName>                                      BlendShapesToFilter;                                        // 0x0040   (0x0010)  
	USkeleton*                                         Skeleton;                                                   // 0x0050   (0x0008)  
	USkeleton*                                         BigRigSkeleton;                                             // 0x0058   (0x0008)  
	TArray<int32_t>                                    CurveIdsToFilter;                                           // 0x0060   (0x0010)  
	TArray<bool>                                       BoneIdsToFilter;                                            // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/TigerCore.TigerAnimationFilter.UpdateFilter
	void UpdateFilter();                                                                                                     // [0x36b1b50] Final|Native|Public  
};

/// Class /Script/TigerCore.TigerAnimMetaDataAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UTigerAnimMetaDataAsset : public UDataAsset
{ 
public:
	TMap<FName, UAnimMetaData*>                        AnimMetaData;                                               // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/TigerCore.TigerAnimMetaDataAsset.GetMetaData
	UAnimMetaData* GetMetaData(FName InName);                                                                                // [0x36b21e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TigerCore.TigerRandomSequenceList
/// Size: 0x0010 (0x000028 - 0x000038)
class UTigerRandomSequenceList : public UObject
{ 
public:
	TArray<FRandomPlayerSequenceEntry>                 RandomSequenceList;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/TigerCore.TigerPersistentPlayerID
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTigerPersistentPlayerID
{ 
	FString                                            UniqueID;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/TigerCore.TigerAnimInstanceProxy
/// Size: 0x00D0 (0x000760 - 0x000830)
struct FTigerAnimInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0760   (0x00B0)  MISSED
	TArray<UAnimMetaData*>                             MetaData;                                                   // 0x0810   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0820   (0x0010)  MISSED
};

/// Struct /Script/TigerCore.TigerSettleEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTigerSettleEvent
{ 
	char                                               SettleEventEnum;                                            // 0x0000   (0x0001)  
};

