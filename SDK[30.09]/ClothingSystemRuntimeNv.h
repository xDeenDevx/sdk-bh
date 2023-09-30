/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ClothingSystemRuntimeNv.

/// Class /Script/ClothingSystemRuntimeNv.ClothConfigNv
/// Size: 0x0118 (0x000028 - 0x000140)
class UClothConfigNv : public UClothConfigCommon
{ 
public:
	EClothingWindMethodNv                              ClothingWindMethod;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FClothConstraintSetupNv                            VerticalConstraint;                                         // 0x002C   (0x0010)  
	FClothConstraintSetupNv                            HorizontalConstraint;                                       // 0x003C   (0x0010)  
	FClothConstraintSetupNv                            BendConstraint;                                             // 0x004C   (0x0010)  
	FClothConstraintSetupNv                            ShearConstraint;                                            // 0x005C   (0x0010)  
	float                                              SelfCollisionRadius;                                        // 0x006C   (0x0004)  
	float                                              SelfCollisionStiffness;                                     // 0x0070   (0x0004)  
	float                                              SelfCollisionCullScale;                                     // 0x0074   (0x0004)  
	FVector                                            Damping;                                                    // 0x0078   (0x000C)  
	float                                              Friction;                                                   // 0x0084   (0x0004)  
	float                                              WindDragCoefficient;                                        // 0x0088   (0x0004)  
	float                                              WindLiftCoefficient;                                        // 0x008C   (0x0004)  
	FVector                                            LinearDrag;                                                 // 0x0090   (0x000C)  
	FVector                                            AngularDrag;                                                // 0x009C   (0x000C)  
	FVector                                            LinearInertiaScale;                                         // 0x00A8   (0x000C)  
	FVector                                            AngularInertiaScale;                                        // 0x00B4   (0x000C)  
	FVector                                            CentrifugalInertiaScale;                                    // 0x00C0   (0x000C)  
	float                                              SolverFrequency;                                            // 0x00CC   (0x0004)  
	float                                              StiffnessFrequency;                                         // 0x00D0   (0x0004)  
	float                                              GravityScale;                                               // 0x00D4   (0x0004)  
	FVector                                            GravityOverride;                                            // 0x00D8   (0x000C)  
	bool                                               bUseGravityOverride;                                        // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00E5   (0x0003)  MISSED
	float                                              TetherStiffness;                                            // 0x00E8   (0x0004)  
	float                                              TetherLimit;                                                // 0x00EC   (0x0004)  
	float                                              CollisionThickness;                                         // 0x00F0   (0x0004)  
	float                                              AnimDriveSpringStiffness;                                   // 0x00F4   (0x0004)  
	float                                              AnimDriveDamperStiffness;                                   // 0x00F8   (0x0004)  
	EClothingWindMethod_Legacy                         WindMethod;                                                 // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FClothConstraintSetup_Legacy                       VerticalConstraintConfig;                                   // 0x0100   (0x0010)  
	FClothConstraintSetup_Legacy                       HorizontalConstraintConfig;                                 // 0x0110   (0x0010)  
	FClothConstraintSetup_Legacy                       BendConstraintConfig;                                       // 0x0120   (0x0010)  
	FClothConstraintSetup_Legacy                       ShearConstraintConfig;                                      // 0x0130   (0x0010)  
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
/// Size: 0x0010 (0x000030 - 0x000040)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
/// Size: 0x0040 (0x0000E0 - 0x000120)
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{ 
public:
	TArray<float>                                      MaxDistances;                                               // 0x00E0   (0x0010)  
	TArray<float>                                      BackstopDistances;                                          // 0x00F0   (0x0010)  
	TArray<float>                                      BackstopRadiuses;                                           // 0x0100   (0x0010)  
	TArray<float>                                      AnimDriveMultipliers;                                       // 0x0110   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv
/// Size: 0x0010 (0x000000 - 0x000010)
struct FClothConstraintSetupNv
{ 
	float                                              Stiffness;                                                  // 0x0000   (0x0004)  
	float                                              StiffnessMultiplier;                                        // 0x0004   (0x0004)  
	float                                              StretchLimit;                                               // 0x0008   (0x0004)  
	float                                              CompressionLimit;                                           // 0x000C   (0x0004)  
};

/// Enum /Script/ClothingSystemRuntimeNv.EClothingWindMethodNv
/// Size: 0x03
enum EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy                                                    = 0,
	EClothingWindMethodNv__Accurate                                                  = 1,
	EClothingWindMethodNv__EClothingWindMethodNv_MAX                                 = 2
};

