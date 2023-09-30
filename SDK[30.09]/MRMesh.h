/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MRMesh.

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReconstructorBase : public UObject
{ 
public:
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0070 (0x000200 - 0x000270)
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	FMulticastInlineDelegate                           OnMeshTrackerUpdated;                                       // 0x01F8   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0208   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0209   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x020A   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x020B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x020C   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0210   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0220   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0230   (0x0010)  
	float                                              UpdateInterval;                                             // 0x0240   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	UMRMeshComponent*                                  MRMesh;                                                     // 0x0248   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0250   (0x0020)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x197e4f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);                                                                    // [0x24ab630] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);                                                                       // [0x24ab580] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x00C0 (0x000450 - 0x000510)
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0450   (0x0010)  MISSED
	UMaterialInterface*                                Material;                                                   // 0x0460   (0x0008)  
	UMaterialInterface*                                WireframeMaterial;                                          // 0x0468   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0470   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0471   (0x0001)  
	bool                                               bNeverCreateCollisionMesh;                                  // 0x0472   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0473   (0x0005)  MISSED
	UBodySetup*                                        CachedBodySetup;                                            // 0x0478   (0x0008)  
	TArray<UBodySetup*>                                BodySetups;                                                 // 0x0480   (0x0010)  
	unsigned char                                      UnknownData02_6[0x80];                                      // 0x0490   (0x0080)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	void SetWireframeMaterial(UMaterialInterface* InMaterial);                                                               // [0x24ab960] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x24ab8d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	void SetUseWireframe(bool bUseWireframe);                                                                                // [0x24ab840] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x24ab7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	bool IsConnected();                                                                                                      // [0x24ab750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	FLinearColor GetWireframeColor();                                                                                        // [0x24ab720] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	bool GetUseWireframe();                                                                                                  // [0x24ab700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	bool GetEnableMeshOcclusion();                                                                                           // [0x24ab6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	void ForceNavMeshUpdate();                                                                                               // [0x24ab6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	void Clear();                                                                                                            // [0x24ab4c0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x04
enum EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX                     = 3
};

