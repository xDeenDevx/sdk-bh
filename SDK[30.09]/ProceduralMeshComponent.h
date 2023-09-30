/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ProceduralMeshComponent.

/// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
/// Size: 0x0060 (0x000480 - 0x0004E0)
class UProceduralMeshComponent : public UMeshComponent
{ 
public:
	bool                                               bUseComplexAsSimpleCollision;                               // 0x0480   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x0481   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0482   (0x0006)  MISSED
	UBodySetup*                                        ProcMeshBodySetup;                                          // 0x0488   (0x0008)  
	TArray<FProcMeshSection>                           ProcMeshSections;                                           // 0x0490   (0x0010)  
	TArray<FKConvexElem>                               CollisionConvexElems;                                       // 0x04A0   (0x0010)  
	FBoxSphereBounds                                   LocalBounds;                                                // 0x04B0   (0x001C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x04CC   (0x0004)  MISSED
	TArray<UBodySetup*>                                AsyncBodySetupQueue;                                        // 0x04D0   (0x0010)  


	/// Functions
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0xe7f9f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	void UpdateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0xe7f730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);                                                   // [0xe7f410] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	bool IsMeshSectionVisible(int32_t SectionIndex);                                                                         // [0xe7f370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	int32_t GetNumSections();                                                                                                // [0xe7ed80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0xe7e680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	void CreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0xe7e320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	void ClearMeshSection(int32_t SectionIndex);                                                                             // [0xe7d950] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	void ClearCollisionConvexMeshes();                                                                                       // [0xe7d930] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	void ClearAllMeshSections();                                                                                             // [0xe7d910] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);                                                                // [0xe7d5e0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshTangent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FProcMeshTangent
{ 
	FVector                                            TangentX;                                                   // 0x0000   (0x000C)  
	bool                                               bFlipTangentY;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshSection
/// Size: 0x0040 (0x000000 - 0x000040)
struct FProcMeshSection
{ 
	TArray<FProcMeshVertex>                            ProcVertexBuffer;                                           // 0x0000   (0x0010)  
	TArray<uint32_t>                                   ProcIndexBuffer;                                            // 0x0010   (0x0010)  
	FBox                                               SectionLocalBox;                                            // 0x0020   (0x001C)  
	bool                                               bEnableCollision;                                           // 0x003C   (0x0001)  
	bool                                               bSectionVisible;                                            // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshVertex
/// Size: 0x004C (0x000000 - 0x00004C)
struct FProcMeshVertex
{ 
	FVector                                            Position;                                                   // 0x0000   (0x000C)  
	FVector                                            Normal;                                                     // 0x000C   (0x000C)  
	FProcMeshTangent                                   Tangent;                                                    // 0x0018   (0x0010)  
	FColor                                             Color;                                                      // 0x0028   (0x0004)  
	FVector2D                                          UV0;                                                        // 0x002C   (0x0008)  
	FVector2D                                          UV1;                                                        // 0x0034   (0x0008)  
	FVector2D                                          UV2;                                                        // 0x003C   (0x0008)  
	FVector2D                                          UV3;                                                        // 0x0044   (0x0008)  
};

/// Enum /Script/ProceduralMeshComponent.EProcMeshSliceCapOption
/// Size: 0x04
enum EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap                                                   = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap                                  = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap                                    = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX                             = 3
};

