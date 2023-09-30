/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TigerAnimGraphRuntime.

/// Struct /Script/TigerAnimGraphRuntime.TigerAnimNode_AddMetaData
/// Size: 0x0020 (0x000010 - 0x000030)
struct FTigerAnimNode_AddMetaData : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	UTigerAnimMetaDataAsset*                           AnimMetaDataAsset;                                          // 0x0020   (0x0008)  
	FName                                              AnimMetaDataName;                                           // 0x0028   (0x0008)  
};

/// Struct /Script/TigerAnimGraphRuntime.TigerAnimNode_ApplyAdditiveFiltered
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
struct FTigerAnimNode_ApplyAdditiveFiltered : FAnimNode_ApplyAdditive
{ 
	UTigerAnimationFilter*                             FilterAsset;                                                // 0x00C8   (0x0008)  
};

/// Struct /Script/TigerAnimGraphRuntime.TigerAnimNode_BlendByBoolWSettle
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
struct FTigerAnimNode_BlendByBoolWSettle : FAnimNode_BlendListByBool
{ 
	ETigerBoolSettleTriggerDirection                   SettleTriggerDirection;                                     // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              SettleTriggerValue;                                         // 0x00A4   (0x0004)  
	char                                               SettleEventEnum;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Struct /Script/TigerAnimGraphRuntime.TigerAnimNode_CPUProfileTrace
/// Size: 0x0038 (0x000010 - 0x000048)
struct FTigerAnimNode_CPUProfileTrace : FAnimNode_Base
{ 
	FPoseLink                                          Input;                                                      // 0x0010   (0x0010)  
	FName                                              Name;                                                       // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Struct /Script/TigerAnimGraphRuntime.TigerFilteredLayeredBlend
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
struct FTigerFilteredLayeredBlend : FAnimNode_LayeredBoneBlend
{ 
	UTigerAnimationFilter*                             FilterAsset;                                                // 0x00C0   (0x0008)  
};

/// Struct /Script/TigerAnimGraphRuntime.TigerAnimNode_IgnoreParentScaling
/// Size: 0x0048 (0x000108 - 0x000150)
struct FTigerAnimNode_IgnoreParentScaling : FAnimNode_ModifyBone
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0108   (0x0008)  MISSED
	FTransform                                         RefTransform;                                               // 0x0110   (0x0030)  
	FBoneReference                                     RefBone;                                                    // 0x0140   (0x0010)  
};

/// Struct /Script/TigerAnimGraphRuntime.TigerAnimNode_PlaySequenceByName
/// Size: 0x0008 (0x000080 - 0x000088)
struct FTigerAnimNode_PlaySequenceByName : FAnimNode_SequencePlayer
{ 
	FName                                              SequenceName;                                               // 0x0080   (0x0008)  
};

/// Struct /Script/TigerAnimGraphRuntime.TigerAnimNode_RandomPlayer
/// Size: 0x0068 (0x000038 - 0x0000A0)
struct FTigerAnimNode_RandomPlayer : FAnimNode_AssetPlayerBase
{ 
	bool                                               bShuffleMode;                                               // 0x0038   (0x0001)  
	ETigerRandomSequenceType                           SequenceInputType;                                          // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x003A   (0x0006)  MISSED
	UTigerRandomSequenceList*                          SequenceList;                                               // 0x0040   (0x0008)  
	FName                                              ListName;                                                   // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_5[0x48];                                      // 0x0050   (0x0048)  MISSED
	UTigerRandomSequenceList*                          ActiveSequenceList;                                         // 0x0098   (0x0008)  
};

/// Enum /Script/TigerAnimGraphRuntime.ETigerBoolSettleTriggerDirection
/// Size: 0x04
enum ETigerBoolSettleTriggerDirection : uint8_t
{
	ETigerBoolSettleTriggerDirection__TriggerOnTrue                                  = 0,
	ETigerBoolSettleTriggerDirection__TriggerOnFalse                                 = 1,
	ETigerBoolSettleTriggerDirection__TriggerOnBoth                                  = 2,
	ETigerBoolSettleTriggerDirection__ETigerBoolSettleTriggerDirection_MAX           = 3
};

/// Enum /Script/TigerAnimGraphRuntime.ETigerRandomSequenceType
/// Size: 0x03
enum ETigerRandomSequenceType : uint8_t
{
	ETigerRandomSequenceType__Name                                                   = 0,
	ETigerRandomSequenceType__List                                                   = 1,
	ETigerRandomSequenceType__ETigerRandomSequenceType_MAX                           = 2
};

