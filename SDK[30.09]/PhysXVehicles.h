/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package PhysXVehicles.

/// Class /Script/PhysXVehicles.WheeledVehicleMovementComponent
/// Size: 0x0158 (0x000138 - 0x000290)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0138   (0x0008)  MISSED
	bool                                               bDeprecatedSpringOffsetMode;                                // 0x0140:0 (0x0001)  
	bool                                               bReverseAsBrake;                                            // 0x0140:1 (0x0001)  
	bool                                               bUseRVOAvoidance;                                           // 0x0140:2 (0x0001)  
	bool                                               bRawHandbrakeInput;                                         // 0x0140:3 (0x0001)  
	bool                                               bRawGearUpInput;                                            // 0x0140:4 (0x0001)  
	bool                                               bRawGearDownInput;                                          // 0x0140:5 (0x0001)  
	unsigned char                                      UnknownData01_3[0x3];                                       // 0x0141   (0x0003)  MISSED
	bool                                               bWasAvoidanceUpdated;                                       // 0x0144:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0145   (0x0003)  MISSED
	float                                              Mass;                                                       // 0x0148   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x014C   (0x0004)  MISSED
	TArray<FWheelSetup>                                WheelSetups;                                                // 0x0150   (0x0010)  
	float                                              DragCoefficient;                                            // 0x0160   (0x0004)  
	float                                              ChassisWidth;                                               // 0x0164   (0x0004)  
	float                                              ChassisHeight;                                              // 0x0168   (0x0004)  
	float                                              DragArea;                                                   // 0x016C   (0x0004)  
	float                                              EstimatedMaxEngineSpeed;                                    // 0x0170   (0x0004)  
	float                                              MaxEngineRPM;                                               // 0x0174   (0x0004)  
	float                                              DebugDragMagnitude;                                         // 0x0178   (0x0004)  
	FVector                                            InertiaTensorScale;                                         // 0x017C   (0x000C)  
	float                                              MinNormalizedTireLoad;                                      // 0x0188   (0x0004)  
	float                                              MinNormalizedTireLoadFiltered;                              // 0x018C   (0x0004)  
	float                                              MaxNormalizedTireLoad;                                      // 0x0190   (0x0004)  
	float                                              MaxNormalizedTireLoadFiltered;                              // 0x0194   (0x0004)  
	float                                              ThresholdLongitudinalSpeed;                                 // 0x0198   (0x0004)  
	int32_t                                            LowForwardSpeedSubStepCount;                                // 0x019C   (0x0004)  
	int32_t                                            HighForwardSpeedSubStepCount;                               // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x01A4   (0x0004)  MISSED
	TArray<UVehicleWheel*>                             Wheels;                                                     // 0x01A8   (0x0010)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x01B8   (0x0018)  MISSED
	float                                              RVOAvoidanceRadius;                                         // 0x01D0   (0x0004)  
	float                                              RVOAvoidanceHeight;                                         // 0x01D4   (0x0004)  
	float                                              AvoidanceConsiderationRadius;                               // 0x01D8   (0x0004)  
	float                                              RVOSteeringStep;                                            // 0x01DC   (0x0004)  
	float                                              RVOThrottleStep;                                            // 0x01E0   (0x0004)  
	int32_t                                            AvoidanceUID;                                               // 0x01E4   (0x0004)  
	FNavAvoidanceMask                                  AvoidanceGroup;                                             // 0x01E8   (0x0004)  
	FNavAvoidanceMask                                  GroupsToAvoid;                                              // 0x01EC   (0x0004)  
	FNavAvoidanceMask                                  GroupsToIgnore;                                             // 0x01F0   (0x0004)  
	float                                              AvoidanceWeight;                                            // 0x01F4   (0x0004)  
	FVector                                            PendingLaunchVelocity;                                      // 0x01F8   (0x000C)  
	FReplicatedVehicleState                            ReplicatedState;                                            // 0x0204   (0x0014)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x0218   (0x0004)  MISSED
	float                                              RawSteeringInput;                                           // 0x021C   (0x0004)  
	float                                              RawThrottleInput;                                           // 0x0220   (0x0004)  
	float                                              RawBrakeInput;                                              // 0x0224   (0x0004)  
	float                                              SteeringInput;                                              // 0x0228   (0x0004)  
	float                                              ThrottleInput;                                              // 0x022C   (0x0004)  
	float                                              BrakeInput;                                                 // 0x0230   (0x0004)  
	float                                              HandbrakeInput;                                             // 0x0234   (0x0004)  
	float                                              IdleBrakeInput;                                             // 0x0238   (0x0004)  
	float                                              StopThreshold;                                              // 0x023C   (0x0004)  
	float                                              WrongDirectionThreshold;                                    // 0x0240   (0x0004)  
	FVehicleInputRate                                  ThrottleInputRate;                                          // 0x0244   (0x0008)  
	FVehicleInputRate                                  BrakeInputRate;                                             // 0x024C   (0x0008)  
	FVehicleInputRate                                  HandbrakeInputRate;                                         // 0x0254   (0x0008)  
	FVehicleInputRate                                  SteeringInputRate;                                          // 0x025C   (0x0008)  
	unsigned char                                      UnknownData07_5[0x24];                                      // 0x0264   (0x0024)  MISSED
	AController*                                       OverrideController;                                         // 0x0288   (0x0008)  


	/// Functions
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	void SetUseAutoGears(bool bUseAuto);                                                                                     // [0xf6c980] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	void SetThrottleInput(float Throttle);                                                                                   // [0xf6c900] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	void SetTargetGear(int32_t GearNum, bool bImmediate);                                                                    // [0xf6c830] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	void SetSteeringInput(float Steering);                                                                                   // [0xf6c7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	void SetHandbrakeInput(bool bNewHandbrake);                                                                              // [0xf6c650] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	void SetGroupsToIgnoreMask(FNavAvoidanceMask& GroupMask);                                                                // [0xf6c5c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	void SetGroupsToIgnore(int32_t GroupFlags);                                                                              // [0xf6c530] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	void SetGroupsToAvoidMask(FNavAvoidanceMask& GroupMask);                                                                 // [0xf6c4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	void SetGroupsToAvoid(int32_t GroupFlags);                                                                               // [0xf6c410] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	void SetGearUp(bool bNewGearUp);                                                                                         // [0xf6c380] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	void SetGearDown(bool bNewGearDown);                                                                                     // [0xf6c2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	void SetBrakeInput(float Brake);                                                                                         // [0xf6c0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	void SetAvoidanceGroupMask(FNavAvoidanceMask& GroupMask);                                                                // [0xf6c040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	void SetAvoidanceGroup(int32_t GroupFlags);                                                                              // [0xf6bfb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	void SetAvoidanceEnabled(bool bEnable);                                                                                  // [0xf6bf20] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear); // [0xf6bd30] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	bool GetUseAutoGears();                                                                                                  // [0xf6bca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	int32_t GetTargetGear();                                                                                                 // [0xf6bc70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	float GetForwardSpeed();                                                                                                 // [0xf6bbb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	float GetEngineRotationSpeed();                                                                                          // [0xf6bb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	float GetEngineMaxRotationSpeed();                                                                                       // [0xf6bb50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
	int32_t GetCurrentGear();                                                                                                // [0xf6bb20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent
/// Size: 0x0000 (0x000290 - 0x000290)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{ 
public:
};

/// Class /Script/PhysXVehicles.TireConfig
/// Size: 0x0020 (0x000030 - 0x000050)
class UTireConfig : public UDataAsset
{ 
public:
	float                                              FrictionScale;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FTireConfigMaterialFriction>                TireFrictionScales;                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/PhysXVehicles.VehicleAnimInstance
/// Size: 0x0790 (0x0002C0 - 0x000A50)
class UVehicleAnimInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x780];                                     // 0x02C0   (0x0780)  MISSED
	UWheeledVehicleMovementComponent*                  WheeledVehicleMovementComponent;                            // 0x0A40   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0A48   (0x0008)  MISSED


	/// Functions
	// Function /Script/PhysXVehicles.VehicleAnimInstance.GetVehicle
	AWheeledVehicle* GetVehicle();                                                                                           // [0xf6bcd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PhysXVehicles.VehicleWheel
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UVehicleWheel : public UObject
{ 
public:
	UStaticMesh*                                       CollisionMesh;                                              // 0x0028   (0x0008)  
	bool                                               bDontCreateShape;                                           // 0x0030   (0x0001)  
	bool                                               bAutoAdjustCollisionSize;                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	FVector                                            Offset;                                                     // 0x0034   (0x000C)  
	float                                              ShapeRadius;                                                // 0x0040   (0x0004)  
	float                                              ShapeWidth;                                                 // 0x0044   (0x0004)  
	float                                              Mass;                                                       // 0x0048   (0x0004)  
	float                                              DampingRate;                                                // 0x004C   (0x0004)  
	float                                              SteerAngle;                                                 // 0x0050   (0x0004)  
	bool                                               bAffectedByHandbrake;                                       // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	UTireType*                                         TireType;                                                   // 0x0058   (0x0008)  
	UTireConfig*                                       TireConfig;                                                 // 0x0060   (0x0008)  
	float                                              LatStiffMaxLoad;                                            // 0x0068   (0x0004)  
	float                                              LatStiffValue;                                              // 0x006C   (0x0004)  
	float                                              LongStiffValue;                                             // 0x0070   (0x0004)  
	float                                              SuspensionForceOffset;                                      // 0x0074   (0x0004)  
	float                                              SuspensionMaxRaise;                                         // 0x0078   (0x0004)  
	float                                              SuspensionMaxDrop;                                          // 0x007C   (0x0004)  
	float                                              SuspensionNaturalFrequency;                                 // 0x0080   (0x0004)  
	float                                              SuspensionDampingRatio;                                     // 0x0084   (0x0004)  
	TEnumAsByte<EWheelSweepType>                       SweepType;                                                  // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              MaxBrakeTorque;                                             // 0x008C   (0x0004)  
	float                                              MaxHandBrakeTorque;                                         // 0x0090   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	UWheeledVehicleMovementComponent*                  VehicleSim;                                                 // 0x0098   (0x0008)  
	int32_t                                            WheelIndex;                                                 // 0x00A0   (0x0004)  
	float                                              DebugLongSlip;                                              // 0x00A4   (0x0004)  
	float                                              DebugLatSlip;                                               // 0x00A8   (0x0004)  
	float                                              DebugNormalizedTireLoad;                                    // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x00B0   (0x0004)  MISSED
	float                                              DebugWheelTorque;                                           // 0x00B4   (0x0004)  
	float                                              DebugLongForce;                                             // 0x00B8   (0x0004)  
	float                                              DebugLatForce;                                              // 0x00BC   (0x0004)  
	FVector                                            Location;                                                   // 0x00C0   (0x000C)  
	FVector                                            OldLocation;                                                // 0x00CC   (0x000C)  
	FVector                                            Velocity;                                                   // 0x00D8   (0x000C)  
	unsigned char                                      UnknownData05_6[0xC];                                       // 0x00E4   (0x000C)  MISSED


	/// Functions
	// Function /Script/PhysXVehicles.VehicleWheel.IsInAir
	bool IsInAir();                                                                                                          // [0xf6bd00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.VehicleWheel.GetSuspensionOffset
	float GetSuspensionOffset();                                                                                             // [0xf6bc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.VehicleWheel.GetSteerAngle
	float GetSteerAngle();                                                                                                   // [0xf6bc10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.VehicleWheel.GetRotationAngle
	float GetRotationAngle();                                                                                                // [0xf6bbe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PhysXVehicles.WheeledVehicle
/// Size: 0x0010 (0x000288 - 0x000298)
class AWheeledVehicle : public APawn
{ 
public:
	USkeletalMeshComponent*                            Mesh;                                                       // 0x0288   (0x0008)  
	UWheeledVehicleMovementComponent*                  VehicleMovement;                                            // 0x0290   (0x0008)  
};

/// Class /Script/PhysXVehicles.WheeledVehicleMovementComponent4W
/// Size: 0x0178 (0x000290 - 0x000408)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{ 
public:
	FVehicleEngineData                                 EngineSetup;                                                // 0x0290   (0x00A0)  
	FVehicleDifferential4WData                         DifferentialSetup;                                          // 0x0330   (0x001C)  
	float                                              AckermannAccuracy;                                          // 0x034C   (0x0004)  
	FVehicleTransmissionData                           TransmissionSetup;                                          // 0x0350   (0x0030)  
	FRuntimeFloatCurve                                 SteeringCurve;                                              // 0x0380   (0x0088)  
};

/// Struct /Script/PhysXVehicles.AnimNode_WheelHandler
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00C8   (0x0018)  MISSED
};

/// Struct /Script/PhysXVehicles.TireConfigMaterialFriction
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTireConfigMaterialFriction
{ 
	UPhysicalMaterial*                                 PhysicalMaterial;                                           // 0x0000   (0x0008)  
	float                                              FrictionScale;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/PhysXVehicles.VehicleAnimInstanceProxy
/// Size: 0x0010 (0x000760 - 0x000770)
struct FVehicleAnimInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0760   (0x0010)  MISSED
};

/// Struct /Script/PhysXVehicles.VehicleInputRate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVehicleInputRate
{ 
	float                                              RiseRate;                                                   // 0x0000   (0x0004)  
	float                                              FallRate;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/PhysXVehicles.ReplicatedVehicleState
/// Size: 0x0014 (0x000000 - 0x000014)
struct FReplicatedVehicleState
{ 
	float                                              SteeringInput;                                              // 0x0000   (0x0004)  
	float                                              ThrottleInput;                                              // 0x0004   (0x0004)  
	float                                              BrakeInput;                                                 // 0x0008   (0x0004)  
	float                                              HandbrakeInput;                                             // 0x000C   (0x0004)  
	int32_t                                            CurrentGear;                                                // 0x0010   (0x0004)  
};

/// Struct /Script/PhysXVehicles.WheelSetup
/// Size: 0x0020 (0x000000 - 0x000020)
struct FWheelSetup
{ 
	UClass*                                            WheelClass;                                                 // 0x0000   (0x0008)  
	FName                                              BoneName;                                                   // 0x0008   (0x0008)  
	FVector                                            AdditionalOffset;                                           // 0x0010   (0x000C)  
	bool                                               bDisableSteering;                                           // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/PhysXVehicles.VehicleTransmissionData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVehicleTransmissionData
{ 
	bool                                               bUseGearAutoBox;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              GearSwitchTime;                                             // 0x0004   (0x0004)  
	float                                              GearAutoBoxLatency;                                         // 0x0008   (0x0004)  
	float                                              FinalRatio;                                                 // 0x000C   (0x0004)  
	TArray<FVehicleGearData>                           ForwardGears;                                               // 0x0010   (0x0010)  
	float                                              ReverseGearRatio;                                           // 0x0020   (0x0004)  
	float                                              NeutralGearUpRatio;                                         // 0x0024   (0x0004)  
	float                                              ClutchStrength;                                             // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/PhysXVehicles.VehicleGearData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FVehicleGearData
{ 
	float                                              Ratio;                                                      // 0x0000   (0x0004)  
	float                                              DownRatio;                                                  // 0x0004   (0x0004)  
	float                                              UpRatio;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/PhysXVehicles.VehicleEngineData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FVehicleEngineData
{ 
	FRuntimeFloatCurve                                 TorqueCurve;                                                // 0x0000   (0x0088)  
	float                                              MaxRPM;                                                     // 0x0088   (0x0004)  
	float                                              MOI;                                                        // 0x008C   (0x0004)  
	float                                              DampingRateFullThrottle;                                    // 0x0090   (0x0004)  
	float                                              DampingRateZeroThrottleClutchEngaged;                       // 0x0094   (0x0004)  
	float                                              DampingRateZeroThrottleClutchDisengaged;                    // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/PhysXVehicles.VehicleDifferential4WData
/// Size: 0x001C (0x000000 - 0x00001C)
struct FVehicleDifferential4WData
{ 
	TEnumAsByte<EVehicleDifferential4W>                DifferentialType;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FrontRearSplit;                                             // 0x0004   (0x0004)  
	float                                              FrontLeftRightSplit;                                        // 0x0008   (0x0004)  
	float                                              RearLeftRightSplit;                                         // 0x000C   (0x0004)  
	float                                              CentreBias;                                                 // 0x0010   (0x0004)  
	float                                              FrontBias;                                                  // 0x0014   (0x0004)  
	float                                              RearBias;                                                   // 0x0018   (0x0004)  
};

/// Enum /Script/PhysXVehicles.EWheelSweepType
/// Size: 0x04
enum EWheelSweepType : uint8_t
{
	SimpleAndComplex                                                                 = 0,
	Simple                                                                           = 1,
	Complex                                                                          = 2,
	EWheelSweepType_MAX                                                              = 3
};

/// Enum /Script/PhysXVehicles.EVehicleDifferential4W
/// Size: 0x07
enum EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W                                           = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive                                   = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive                                    = 2,
	EVehicleDifferential4W__Open_4W                                                  = 3,
	EVehicleDifferential4W__Open_FrontDrive                                          = 4,
	EVehicleDifferential4W__Open_RearDrive                                           = 5,
	EVehicleDifferential4W__EVehicleDifferential4W_MAX                               = 6
};

