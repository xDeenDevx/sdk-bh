/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ClothingSystemRuntimeInterface.

/// Class /Script/ClothingSystemRuntimeInterface.ClothConfigBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingSimulationFactory : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
/// Size: 0x0008 (0x000028 - 0x000030)
class UClothingSimulationInteractor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothSharedSimConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingAssetBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UClothingAssetBase : public UObject
{ 
public:
	FString                                            ImportedFilePath;                                           // 0x0028   (0x0010)  
	FGuid                                              AssetGuid;                                                  // 0x0038   (0x0010)  
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UClothPhysicalMeshDataBase_Legacy : public UObject
{ 
public:
	TArray<FVector>                                    Vertices;                                                   // 0x0028   (0x0010)  
	TArray<FVector>                                    Normals;                                                    // 0x0038   (0x0010)  
	TArray<uint32_t>                                   Indices;                                                    // 0x0048   (0x0010)  
	TArray<float>                                      InverseMasses;                                              // 0x0058   (0x0010)  
	TArray<FClothVertBoneData>                         BoneData;                                                   // 0x0068   (0x0010)  
	int32_t                                            NumFixedVerts;                                              // 0x0078   (0x0004)  
	int32_t                                            MaxBoneWeights;                                             // 0x007C   (0x0004)  
	TArray<uint32_t>                                   SelfCollisionIndices;                                       // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0090   (0x0050)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FClothCollisionData
{ 
	TArray<FClothCollisionPrim_Sphere>                 Spheres;                                                    // 0x0000   (0x0010)  
	TArray<FClothCollisionPrim_SphereConnection>       SphereConnections;                                          // 0x0010   (0x0010)  
	TArray<FClothCollisionPrim_Convex>                 Convexes;                                                   // 0x0020   (0x0010)  
	TArray<FClothCollisionPrim_Box>                    Boxes;                                                      // 0x0030   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
/// Size: 0x0030 (0x000000 - 0x000030)
struct FClothCollisionPrim_Box
{ 
	FVector                                            LocalPosition;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FQuat                                              LocalRotation;                                              // 0x0010   (0x0010)  
	FVector                                            HalfExtents;                                                // 0x0020   (0x000C)  
	int32_t                                            BoneIndex;                                                  // 0x002C   (0x0004)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
/// Size: 0x0028 (0x000000 - 0x000028)
struct FClothCollisionPrim_Convex
{ 
	TArray<FPlane>                                     Planes;                                                     // 0x0000   (0x0010)  
	TArray<FVector>                                    SurfacePoints;                                              // 0x0010   (0x0010)  
	int32_t                                            BoneIndex;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
/// Size: 0x0008 (0x000000 - 0x000008)
struct FClothCollisionPrim_SphereConnection
{ 
	int32_t                                            SphereIndices;                                              // 0x0000   (0x0008)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
/// Size: 0x0014 (0x000000 - 0x000014)
struct FClothCollisionPrim_Sphere
{ 
	int32_t                                            BoneIndex;                                                  // 0x0000   (0x0004)  
	float                                              Radius;                                                     // 0x0004   (0x0004)  
	FVector                                            LocalPosition;                                              // 0x0008   (0x000C)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothVertBoneData
/// Size: 0x004C (0x000000 - 0x00004C)
struct FClothVertBoneData
{ 
	int32_t                                            NumInfluences;                                              // 0x0000   (0x0004)  
	uint16_t                                           BoneIndices;                                                // 0x0004   (0x0018)  
	float                                              BoneWeights;                                                // 0x001C   (0x0030)  
};

