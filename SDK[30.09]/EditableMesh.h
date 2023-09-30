/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EditableMesh.

/// Class /Script/EditableMesh.EditableMeshAdapter
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditableMeshAdapter : public UObject
{ 
public:
};

/// Class /Script/EditableMesh.EditableGeometryCollectionAdapter
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{ 
public:
	UGeometryCollection*                               GeometryCollection;                                         // 0x0028   (0x0008)  
	UGeometryCollection*                               OriginalGeometryCollection;                                 // 0x0030   (0x0008)  
	int32_t                                            GeometryCollectionLODIndex;                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x9C];                                      // 0x003C   (0x009C)  MISSED
};

/// Class /Script/EditableMesh.EditableMesh
/// Size: 0x06E0 (0x000028 - 0x000708)
class UEditableMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x390];                                     // 0x0028   (0x0390)  MISSED
	TArray<UEditableMeshAdapter*>                      Adapters;                                                   // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x03C8   (0x0008)  MISSED
	int32_t                                            TextureCoordinateCount;                                     // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x148];                                     // 0x03D4   (0x0148)  MISSED
	int32_t                                            PendingCompactCounter;                                      // 0x051C   (0x0004)  
	int32_t                                            SubdivisionCount;                                           // 0x0520   (0x0004)  
	unsigned char                                      UnknownData03_6[0x1E4];                                     // 0x0524   (0x01E4)  MISSED


	/// Functions
	// Function /Script/EditableMesh.EditableMesh.WeldVertices
	void WeldVertices(TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID);                                              // [0xe66d00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TryToRemoveVertex
	void TryToRemoveVertex(FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID);                           // [0xe66bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TryToRemovePolygonEdge
	void TryToRemovePolygonEdge(FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID);                      // [0xe66aa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TriangulatePolygons
	void TriangulatePolygons(TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons);                    // [0xe66980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TessellatePolygons
	void TessellatePolygons(TArray<FPolygonID>& PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs); // [0xe66820] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.StartModification
	void StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange);              // [0xe66750] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitPolygons
	void SplitPolygons(TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs);                            // [0xe66610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitPolygonalMesh
	void SplitPolygonalMesh(FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs); // [0xe66440] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitEdge
	void SplitEdge(FEdgeID EdgeID, TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs);                               // [0xe662e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVerticesCornerSharpness
	void SetVerticesCornerSharpness(TArray<FVertexID>& VertexIDs, TArray<float>& VerticesNewCornerSharpness);                // [0xe661c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVerticesAttributes
	void SetVerticesAttributes(TArray<FAttributesForVertex>& AttributesForVertices);                                         // [0xe660f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVertexInstancesAttributes
	void SetVertexInstancesAttributes(TArray<FAttributesForVertexInstance>& AttributesForVertexInstances);                   // [0xe66020] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetTextureCoordinateCount
	void SetTextureCoordinateCount(int32_t NumTexCoords);                                                                    // [0xe65f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetSubdivisionCount
	void SetSubdivisionCount(int32_t NewSubdivisionCount);                                                                   // [0xe65f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	void SetPolygonsVertexAttributes(TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons);                      // [0xe65d70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	void SetEdgesHardnessAutomatically(TArray<FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge);                            // [0xe65c70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesHardness
	void SetEdgesHardness(TArray<FEdgeID>& EdgeIDs, TArray<bool>& EdgesNewIsHard);                                           // [0xe65b50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	void SetEdgesCreaseSharpness(TArray<FEdgeID>& EdgeIDs, TArray<float>& EdgesNewCreaseSharpness);                          // [0xe65a30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesAttributes
	void SetEdgesAttributes(TArray<FAttributesForEdge>& AttributesForEdges);                                                 // [0xe65960] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowUndo
	void SetAllowUndo(bool bInAllowUndo);                                                                                    // [0xe658d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowSpatialDatabase
	void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);                                                              // [0xe65840] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowCompact
	void SetAllowCompact(bool bInAllowCompact);                                                                              // [0xe657b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(FPlane& InPlane, TArray<FPolygonID>& OutPolygons);     // [0xe656b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(FVector LineSegmentStart, FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons); // [0xe65560] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	void SearchSpatialDatabaseForPolygonsInVolume(TArray<FPlane>& Planes, TArray<FPolygonID>& OutPolygons);                  // [0xe65440] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.RevertInstance
	UEditableMesh* RevertInstance();                                                                                         // [0xe65410] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.Revert
	void Revert();                                                                                                           // [0xb7a5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.RebuildRenderMesh
	void RebuildRenderMesh();                                                                                                // [0xe653f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.QuadrangulateMesh
	void QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs);                                                            // [0xe65340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.PropagateInstanceChanges
	void PropagateInstanceChanges();                                                                                         // [0xb7a5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.MoveVertices
	void MoveVertices(TArray<FVertexToMove>& VerticesToMove);                                                                // [0xe65290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.MakeVertexID
	FVertexID MakeVertexID(int32_t VertexIndex);                                                                             // [0xe65210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakePolygonID
	FPolygonID MakePolygonID(int32_t PolygonIndex);                                                                          // [0xe65210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakePolygonGroupID
	FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex);                                                           // [0xe65210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakeEdgeID
	FEdgeID MakeEdgeID(int32_t EdgeIndex);                                                                                   // [0xe65210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.IsValidVertex
	bool IsValidVertex(FVertexID VertexID);                                                                                  // [0xe65180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidPolygonGroup
	bool IsValidPolygonGroup(FPolygonGroupID PolygonGroupID);                                                                // [0xe650f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidPolygon
	bool IsValidPolygon(FPolygonID PolygonID);                                                                               // [0xe65060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidEdge
	bool IsValidEdge(FEdgeID EdgeID);                                                                                        // [0xe64fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsUndoAllowed
	bool IsUndoAllowed();                                                                                                    // [0xe64fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	bool IsSpatialDatabaseAllowed();                                                                                         // [0xe64f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsPreviewingSubdivisions
	bool IsPreviewingSubdivisions();                                                                                         // [0xe64f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsOrphanedVertex
	bool IsOrphanedVertex(FVertexID VertexID);                                                                               // [0xe64ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCompactAllowed
	bool IsCompactAllowed();                                                                                                 // [0xe64eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCommittedAsInstance
	bool IsCommittedAsInstance();                                                                                            // [0xe64e80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCommitted
	bool IsCommitted();                                                                                                      // [0xe64e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsBeingModified
	bool IsBeingModified();                                                                                                  // [0xe64e20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.InvalidVertexID
	FVertexID InvalidVertexID();                                                                                             // [0xe64e00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidPolygonID
	FPolygonID InvalidPolygonID();                                                                                           // [0xe64de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidPolygonGroupID
	FPolygonGroupID InvalidPolygonGroupID();                                                                                 // [0xe64dc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidEdgeID
	FEdgeID InvalidEdgeID();                                                                                                 // [0xe64da0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InsetPolygons
	void InsetPolygons(TArray<FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs); // [0xe64b60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.InsertEdgeLoop
	void InsertEdgeLoop(FEdgeID EdgeID, TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs);                              // [0xe64a00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.InitializeAdapters
	void InitializeAdapters();                                                                                               // [0xe649e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.GetVertexPairEdge
	FEdgeID GetVertexPairEdge(FVertexID VertexID, FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed);                  // [0xe648b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceVertex
	FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);                                                   // [0xe64810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceCount
	int32_t GetVertexInstanceCount();                                                                                        // [0xe647e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // [0xe646f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	int32_t GetVertexInstanceConnectedPolygonCount(FVertexInstanceID VertexInstanceID);                                      // [0xe64660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	FPolygonID GetVertexInstanceConnectedPolygon(FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber);        // [0xe64580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexCount
	int32_t GetVertexCount();                                                                                                // [0xe64550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedPolygons
	void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);                         // [0xe64460] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdges
	void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs);                                  // [0xe64370] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	int32_t GetVertexConnectedEdgeCount(FVertexID VertexID);                                                                 // [0xe642e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdge
	FEdgeID GetVertexConnectedEdge(FVertexID VertexID, int32_t ConnectedEdgeNumber);                                         // [0xe64200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexAdjacentVertices
	void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);                             // [0xe64110] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetTextureCoordinateCount
	int32_t GetTextureCoordinateCount();                                                                                     // [0xe640e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetSubdivisionLimitData
	FSubdivisionLimitData GetSubdivisionLimitData();                                                                         // [0xe640a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetSubdivisionCount
	int32_t GetSubdivisionCount();                                                                                           // [0xe64070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	int32_t GetPolygonTriangulatedTriangleCount(FPolygonID PolygonID);                                                       // [0xe63fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	FTriangleID GetPolygonTriangulatedTriangle(FPolygonID PolygonID, int32_t PolygonTriangleNumber);                         // [0xe63f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	void GetPolygonPerimeterVertices(FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs);                 // [0xe63e10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	void GetPolygonPerimeterVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs); // [0xe63d20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	FVertexInstanceID GetPolygonPerimeterVertexInstance(FPolygonID PolygonID, int32_t PolygonVertexNumber);                  // [0xe63c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	int32_t GetPolygonPerimeterVertexCount(FPolygonID PolygonID);                                                            // [0xe639e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	FVertexID GetPolygonPerimeterVertex(FPolygonID PolygonID, int32_t PolygonVertexNumber);                                  // [0xe63b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs);                        // [0xe63a70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	int32_t GetPolygonPerimeterEdgeCount(FPolygonID PolygonID);                                                              // [0xe639e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	FEdgeID GetPolygonPerimeterEdge(FPolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon); // [0xe638b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonInGroup
	FPolygonID GetPolygonInGroup(FPolygonGroupID PolygonGroupID, int32_t PolygonNumber);                                     // [0xe637d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonGroupCount
	int32_t GetPolygonGroupCount();                                                                                          // [0xe637a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonCountInGroup
	int32_t GetPolygonCountInGroup(FPolygonGroupID PolygonGroupID);                                                          // [0xe63710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonCount
	int32_t GetPolygonCount();                                                                                               // [0xe636e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons);                          // [0xe635f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetGroupForPolygon
	FPolygonGroupID GetGroupForPolygon(FPolygonID PolygonID);                                                                // [0xe63550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	FPolygonGroupID GetFirstValidPolygonGroup();                                                                             // [0xe63510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeVertices
	void GetEdgeVertices(FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1);                          // [0xe633e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeVertex
	FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t EdgeVertexNumber);                                                       // [0xe63300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	FEdgeID GetEdgeThatConnectsVertices(FVertexID VertexID0, FVertexID VertexID1);                                           // [0xe63220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeLoopElements
	void GetEdgeLoopElements(FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs);                                                  // [0xe63130] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeCount
	int32_t GetEdgeCount();                                                                                                  // [0xe63100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);                               // [0xe63010] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	int32_t GetEdgeConnectedPolygonCount(FEdgeID EdgeID);                                                                    // [0xe62f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	FPolygonID GetEdgeConnectedPolygon(FEdgeID EdgeID, int32_t ConnectedPolygonNumber);                                      // [0xe62ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	void GeneratePolygonTangentsAndNormals(TArray<FPolygonID>& PolygonIDs);                                                  // [0xe62df0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.FlipPolygons
	void FlipPolygons(TArray<FPolygonID>& PolygonIDs);                                                                       // [0xe62d40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	int32_t FindPolygonPerimeterVertexNumberForVertex(FPolygonID PolygonID, FVertexID VertexID);                             // [0xe62c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	int32_t FindPolygonPerimeterEdgeNumberForVertices(FPolygonID PolygonID, FVertexID EdgeVertexID0, FVertexID EdgeVertexID1); // [0xe62b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonLoop
	void FindPolygonLoop(FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit); // [0xe62920] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ExtrudePolygons
	void ExtrudePolygons(TArray<FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons); // [0xe62760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ExtendVertices
	void ExtendVertices(TArray<FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs); // [0xe625b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ExtendEdges
	void ExtendEdges(TArray<FEdgeID>& EdgeIDs, bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs);                 // [0xe62450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.EndModification
	void EndModification(bool bFromUndo);                                                                                    // [0xe623c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteVertexInstances
	void DeleteVertexInstances(TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);          // [0xe622c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	void DeleteVertexAndConnectedEdgesAndPolygons(FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0xe620f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeletePolygons
	void DeletePolygons(TArray<FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0xe61ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeletePolygonGroups
	void DeletePolygonGroups(TArray<FPolygonGroupID>& PolygonGroupIDs);                                                      // [0xe61e40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteOrphanVertices
	void DeleteOrphanVertices(TArray<FVertexID>& VertexIDsToDelete);                                                         // [0xe61d90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteEdges
	void DeleteEdges(TArray<FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices);                                        // [0xe61c90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	void DeleteEdgeAndConnectedPolygons(FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0xe61ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateVertices
	void CreateVertices(TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);                      // [0xe61980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateVertexInstances
	void CreateVertexInstances(TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs); // [0xe61840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreatePolygons
	void CreatePolygons(TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs); // [0xe61670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreatePolygonGroups
	void CreatePolygonGroups(TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs); // [0xe61530] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	void CreateMissingPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs);                           // [0xe61440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateEmptyVertexRange
	void CreateEmptyVertexRange(int32_t NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);                            // [0xe61350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateEdges
	void CreateEdges(TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs);                                  // [0xe61210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	void ComputePolygonsSharedEdges(TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs);                      // [0xe610f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonPlane
	FPlane ComputePolygonPlane(FPolygonID PolygonID);                                                                        // [0xe61050] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonNormal
	FVector ComputePolygonNormal(FPolygonID PolygonID);                                                                      // [0xe60fb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonCenter
	FVector ComputePolygonCenter(FPolygonID PolygonID);                                                                      // [0xe60f10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	FBoxSphereBounds ComputeBoundingBoxAndSphere();                                                                          // [0xe60ec0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputeBoundingBox
	FBox ComputeBoundingBox();                                                                                               // [0xe60e70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.CommitInstance
	UEditableMesh* CommitInstance(UPrimitiveComponent* ComponentToInstanceTo);                                               // [0xe60dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.Commit
	void Commit();                                                                                                           // [0xe60db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	void ChangePolygonsVertexInstances(TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);                // [0xe60c90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.BevelPolygons
	void BevelPolygons(TArray<FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs); // [0xe60aa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	void AssignPolygonsToPolygonGroups(TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups); // [0xe609a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.AnyChangesToUndo
	bool AnyChangesToUndo();                                                                                                 // [0xe60970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EditableMesh.EditableMeshFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditableMeshFactory : public UObject
{ 
public:
};

/// Class /Script/EditableMesh.EditableStaticMeshAdapter
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{ 
public:
	UStaticMesh*                                       StaticMesh;                                                 // 0x0028   (0x0008)  
	UStaticMesh*                                       OriginalStaticMesh;                                         // 0x0030   (0x0008)  
	int32_t                                            StaticMeshLODIndex;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0xA4];                                      // 0x003C   (0x00A4)  MISSED
};

/// Struct /Script/EditableMesh.AdaptorPolygon2Group
/// Size: 0x0048 (0x000000 - 0x000048)
struct FAdaptorPolygon2Group
{ 
	uint32_t                                           RenderingSectionIndex;                                      // 0x0000   (0x0004)  
	int32_t                                            MaterialIndex;                                              // 0x0004   (0x0004)  
	int32_t                                            MaxTriangles;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x000C   (0x003C)  MISSED
};

/// Struct /Script/EditableMesh.AdaptorPolygon
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAdaptorPolygon
{ 
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FAdaptorTriangleID>                         TriangulatedPolygonTriangleIndices;                         // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.AdaptorTriangleID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FAdaptorTriangleID : FElementID
{ 
};

/// Struct /Script/EditableMesh.PolygonGroupForPolygon
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPolygonGroupForPolygon
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/EditableMesh.PolygonGroupToCreate
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPolygonGroupToCreate
{ 
	FMeshElementAttributeList                          PolygonGroupAttributes;                                     // 0x0000   (0x0010)  
	FPolygonGroupID                                    OriginalPolygonGroupID;                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.MeshElementAttributeList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMeshElementAttributeList
{ 
	TArray<FMeshElementAttributeData>                  Attributes;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.MeshElementAttributeData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMeshElementAttributeData
{ 
	FName                                              AttributeName;                                              // 0x0000   (0x0008)  
	int32_t                                            AttributeIndex;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMeshElementAttributeValue                         AttributeValue;                                             // 0x0010   (0x0050)  
};

/// Struct /Script/EditableMesh.MeshElementAttributeValue
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMeshElementAttributeValue
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/EditableMesh.VertexToMove
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVertexToMove
{ 
	FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)  
	FVector                                            NewVertexPosition;                                          // 0x0004   (0x000C)  
};

/// Struct /Script/EditableMesh.ChangeVertexInstancesForPolygon
/// Size: 0x0028 (0x000000 - 0x000028)
struct FChangeVertexInstancesForPolygon
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVertexIndexAndInstanceID>                  PerimeterVertexIndicesAndInstanceIDs;                       // 0x0008   (0x0010)  
	TArray<FVertexInstancesForPolygonHole>             VertexIndicesAndInstanceIDsForEachHole;                     // 0x0018   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexInstancesForPolygonHole
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVertexInstancesForPolygonHole
{ 
	TArray<FVertexIndexAndInstanceID>                  VertexIndicesAndInstanceIDs;                                // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexIndexAndInstanceID
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVertexIndexAndInstanceID
{ 
	int32_t                                            ContourIndex;                                               // 0x0000   (0x0004)  
	FVertexInstanceID                                  VertexInstanceID;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygon
/// Size: 0x0028 (0x000000 - 0x000028)
struct FVertexAttributesForPolygon
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FMeshElementAttributeList>                  PerimeterVertexAttributeLists;                              // 0x0008   (0x0010)  
	TArray<FVertexAttributesForPolygonHole>            VertexAttributeListsForEachHole;                            // 0x0018   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygonHole
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVertexAttributesForPolygonHole
{ 
	TArray<FMeshElementAttributeList>                  VertexAttributeList;                                        // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.AttributesForEdge
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAttributesForEdge
{ 
	FEdgeID                                            EdgeID;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          EdgeAttributes;                                             // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.AttributesForVertexInstance
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAttributesForVertexInstance
{ 
	FVertexInstanceID                                  VertexInstanceID;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          VertexInstanceAttributes;                                   // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.AttributesForVertex
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAttributesForVertex
{ 
	FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          VertexAttributes;                                           // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.PolygonToSplit
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPolygonToSplit
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVertexPair>                                VertexPairsToSplitAt;                                       // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexPair
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVertexPair
{ 
	FVertexID                                          VertexID0;                                                  // 0x0000   (0x0004)  
	FVertexID                                          VertexID1;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/EditableMesh.PolygonToCreate
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPolygonToCreate
{ 
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVertexAndAttributes>                       PerimeterVertices;                                          // 0x0008   (0x0010)  
	FPolygonID                                         OriginalPolygonID;                                          // 0x0018   (0x0004)  
	EPolygonEdgeHardness                               PolygonEdgeHardness;                                        // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/EditableMesh.VertexAndAttributes
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVertexAndAttributes
{ 
	FVertexInstanceID                                  VertexInstanceID;                                           // 0x0000   (0x0004)  
	FVertexID                                          VertexID;                                                   // 0x0004   (0x0004)  
	FMeshElementAttributeList                          PolygonVertexAttributes;                                    // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.EdgeToCreate
/// Size: 0x0020 (0x000000 - 0x000020)
struct FEdgeToCreate
{ 
	FVertexID                                          VertexID0;                                                  // 0x0000   (0x0004)  
	FVertexID                                          VertexID1;                                                  // 0x0004   (0x0004)  
	FMeshElementAttributeList                          EdgeAttributes;                                             // 0x0008   (0x0010)  
	FEdgeID                                            OriginalEdgeID;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.VertexInstanceToCreate
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVertexInstanceToCreate
{ 
	FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          VertexInstanceAttributes;                                   // 0x0008   (0x0010)  
	FVertexInstanceID                                  OriginalVertexInstanceID;                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.VertexToCreate
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVertexToCreate
{ 
	FMeshElementAttributeList                          VertexAttributes;                                           // 0x0000   (0x0010)  
	FVertexID                                          OriginalVertexID;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.SubdivisionLimitData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSubdivisionLimitData
{ 
	TArray<FVector>                                    VertexPositions;                                            // 0x0000   (0x0010)  
	TArray<FSubdivisionLimitSection>                   Sections;                                                   // 0x0010   (0x0010)  
	TArray<FSubdividedWireEdge>                        SubdividedWireEdges;                                        // 0x0020   (0x0010)  
};

/// Struct /Script/EditableMesh.SubdividedWireEdge
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubdividedWireEdge
{ 
	int32_t                                            EdgeVertex0PositionIndex;                                   // 0x0000   (0x0004)  
	int32_t                                            EdgeVertex1PositionIndex;                                   // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0008   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.SubdivisionLimitSection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubdivisionLimitSection
{ 
	TArray<FSubdividedQuad>                            SubdividedQuads;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.SubdividedQuad
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FSubdividedQuad
{ 
	FSubdividedQuadVertex                              QuadVertex0;                                                // 0x0000   (0x0034)  
	FSubdividedQuadVertex                              QuadVertex1;                                                // 0x0034   (0x0034)  
	FSubdividedQuadVertex                              QuadVertex2;                                                // 0x0068   (0x0034)  
	FSubdividedQuadVertex                              QuadVertex3;                                                // 0x009C   (0x0034)  
};

/// Struct /Script/EditableMesh.SubdividedQuadVertex
/// Size: 0x0034 (0x000000 - 0x000034)
struct FSubdividedQuadVertex
{ 
	int32_t                                            VertexPositionIndex;                                        // 0x0000   (0x0004)  
	FVector2D                                          TextureCoordinate0;                                         // 0x0004   (0x0008)  
	FVector2D                                          TextureCoordinate1;                                         // 0x000C   (0x0008)  
	FColor                                             VertexColor;                                                // 0x0014   (0x0004)  
	FVector                                            VertexNormal;                                               // 0x0018   (0x000C)  
	FVector                                            VertexTangent;                                              // 0x0024   (0x000C)  
	float                                              VertexBinormalSign;                                         // 0x0030   (0x0004)  
};

/// Struct /Script/EditableMesh.RenderingPolygonGroup
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRenderingPolygonGroup
{ 
	uint32_t                                           RenderingSectionIndex;                                      // 0x0000   (0x0004)  
	int32_t                                            MaterialIndex;                                              // 0x0004   (0x0004)  
	int32_t                                            MaxTriangles;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x000C   (0x003C)  MISSED
};

/// Struct /Script/EditableMesh.RenderingPolygon
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRenderingPolygon
{ 
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FTriangleID>                                TriangulatedPolygonTriangleIndices;                         // 0x0008   (0x0010)  
};

/// Enum /Script/EditableMesh.ETriangleTessellationMode
/// Size: 0x03
enum ETriangleTessellationMode : uint8_t
{
	ETriangleTessellationMode__ThreeTriangles                                        = 0,
	ETriangleTessellationMode__FourTriangles                                         = 1,
	ETriangleTessellationMode__ETriangleTessellationMode_MAX                         = 2
};

/// Enum /Script/EditableMesh.EInsetPolygonsMode
/// Size: 0x04
enum EInsetPolygonsMode : uint8_t
{
	EInsetPolygonsMode__All                                                          = 0,
	EInsetPolygonsMode__CenterPolygonOnly                                            = 1,
	EInsetPolygonsMode__SidePolygonsOnly                                             = 2,
	EInsetPolygonsMode__EInsetPolygonsMode_MAX                                       = 3
};

/// Enum /Script/EditableMesh.EPolygonEdgeHardness
/// Size: 0x05
enum EPolygonEdgeHardness : uint8_t
{
	EPolygonEdgeHardness__NewEdgesSoft                                               = 0,
	EPolygonEdgeHardness__NewEdgesHard                                               = 1,
	EPolygonEdgeHardness__AllEdgesSoft                                               = 2,
	EPolygonEdgeHardness__AllEdgesHard                                               = 3,
	EPolygonEdgeHardness__EPolygonEdgeHardness_MAX                                   = 4
};

/// Enum /Script/EditableMesh.EMeshElementAttributeType
/// Size: 0x09
enum EMeshElementAttributeType : uint8_t
{
	EMeshElementAttributeType__None                                                  = 0,
	EMeshElementAttributeType__FVector4                                              = 1,
	EMeshElementAttributeType__FVector                                               = 2,
	EMeshElementAttributeType__FVector2D                                             = 3,
	EMeshElementAttributeType__Float                                                 = 4,
	EMeshElementAttributeType__Int                                                   = 5,
	EMeshElementAttributeType__Bool                                                  = 6,
	EMeshElementAttributeType__FName                                                 = 7,
	EMeshElementAttributeType__EMeshElementAttributeType_MAX                         = 8
};

/// Enum /Script/EditableMesh.EMeshTopologyChange
/// Size: 0x03
enum EMeshTopologyChange : uint8_t
{
	EMeshTopologyChange__NoTopologyChange                                            = 0,
	EMeshTopologyChange__TopologyChange                                              = 1,
	EMeshTopologyChange__EMeshTopologyChange_MAX                                     = 2
};

/// Enum /Script/EditableMesh.EMeshModificationType
/// Size: 0x04
enum EMeshModificationType : uint8_t
{
	EMeshModificationType__FirstInterim                                              = 0,
	EMeshModificationType__Interim                                                   = 1,
	EMeshModificationType__Final                                                     = 2,
	EMeshModificationType__EMeshModificationType_MAX                                 = 3
};

