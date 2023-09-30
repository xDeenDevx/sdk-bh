/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MeshDescription.

/// Class /Script/MeshDescription.MeshDescription
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshDescription : public UObject
{ 
public:
};

/// Class /Script/MeshDescription.MeshDescriptionBase
/// Size: 0x0368 (0x000028 - 0x000390)
class UMeshDescriptionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x368];                                     // 0x0028   (0x0368)  MISSED
};

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (0x000000 - 0x000004)
struct FElementID
{ 
	int32_t                                            IDValue;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/MeshDescription.PolygonGroupID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FPolygonGroupID : FElementID
{ 
};

/// Struct /Script/MeshDescription.PolygonID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FPolygonID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FVertexID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexInstanceID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FVertexInstanceID : FElementID
{ 
};

/// Struct /Script/MeshDescription.EdgeID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FEdgeID : FElementID
{ 
};

/// Struct /Script/MeshDescription.TriangleID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FTriangleID : FElementID
{ 
};

/// Enum /Script/MeshDescription.EComputeNTBsOptions
/// Size: 0x05
enum EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None                                                        = 0,
	EComputeNTBsOptions__Normals                                                     = 1,
	EComputeNTBsOptions__Tangents                                                    = 2,
	EComputeNTBsOptions__WeightedNTBs                                                = 4,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX                                     = 5
};

