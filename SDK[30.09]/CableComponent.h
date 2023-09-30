/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CableComponent.

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000228 - 0x000230)
class ACableActor : public AActor
{ 
public:
	UCableComponent*                                   CableComponent;                                             // 0x0228   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0090 (0x000480 - 0x000510)
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x0478   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x0479   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x047A   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x0480   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x04A8   (0x0008)  
	FVector                                            EndLocation;                                                // 0x04B0   (0x000C)  
	float                                              CableLength;                                                // 0x04BC   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x04C0   (0x0004)  
	float                                              SubstepTime;                                                // 0x04C4   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x04C8   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x04CC   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x04CD   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x04CE   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x04CF   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x04D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x04D1   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x04D4   (0x0004)  
	FVector                                            CableForce;                                                 // 0x04D8   (0x000C)  
	float                                              CableGravityScale;                                          // 0x04E4   (0x0004)  
	float                                              CableWidth;                                                 // 0x04E8   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x04EC   (0x0004)  
	float                                              TileMaterial;                                               // 0x04F0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x1C];                                      // 0x04F4   (0x001C)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);                                              // [0xf4b0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);                                           // [0xf4afa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0xf4aef0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	USceneComponent* GetAttachedComponent();                                                                                 // [0xf4aec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	AActor* GetAttachedActor();                                                                                              // [0xf4ae90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

