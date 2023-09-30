/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AssetRegistry.

/// Class /Script/AssetRegistry.AssetRegistryImpl
/// Size: 0x0790 (0x000028 - 0x0007B8)
class UAssetRegistryImpl : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x790];                                     // 0x0028   (0x0790)  MISSED
};

/// Class /Script/AssetRegistry.AssetRegistryHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetRegistryHelpers : public UObject
{ 
public:
};

/// Class /Script/AssetRegistry.AssetRegistry
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetRegistry : public UInterface
{ 
public:
};

/// Struct /Script/AssetRegistry.TagAndValue
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTagAndValue
{ 
	FName                                              Tag;                                                        // 0x0000   (0x0008)  
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/AssetRegistry.AssetRegistryDependencyOptions
/// Size: 0x0005 (0x000000 - 0x000005)
struct FAssetRegistryDependencyOptions
{ 
	bool                                               bIncludeSoftPackageReferences;                              // 0x0000   (0x0001)  
	bool                                               bIncludeHardPackageReferences;                              // 0x0001   (0x0001)  
	bool                                               bIncludeSearchableNames;                                    // 0x0002   (0x0001)  
	bool                                               bIncludeSoftManagementReferences;                           // 0x0003   (0x0001)  
	bool                                               bIncludeHardManagementReferences;                           // 0x0004   (0x0001)  
};

