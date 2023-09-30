/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FieldSystemEngine.

/// Class /Script/FieldSystemEngine.FieldSystemActor
/// Size: 0x0008 (0x000228 - 0x000230)
class AFieldSystemActor : public AActor
{ 
public:
	UFieldSystemComponent*                             FieldSystemComponent;                                       // 0x0228   (0x0008)  
};

/// Class /Script/FieldSystemEngine.FieldSystem
/// Size: 0x0010 (0x000028 - 0x000038)
class UFieldSystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/FieldSystemEngine.FieldSystemComponent
/// Size: 0x0040 (0x000450 - 0x000490)
class UFieldSystemComponent : public UPrimitiveComponent
{ 
public:
	UFieldSystem*                                      FieldSystem;                                                // 0x0450   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0458   (0x0010)  MISSED
	TArray<TWeakObjectPtr>                             SupportedSolvers;                                           // 0x0468   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0478   (0x0018)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	void ResetFieldSystem();                                                                                                 // [0x365d1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);   // [0x365cff0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32_t Iterations);                // [0x365ce20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);                                                // [0x365ccf0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);                       // [0x365cb60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);                                                  // [0x365ca30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field); // [0x365c8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);                                                 // [0x365c7a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field); // [0x365c640] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaData
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UFieldSystemMetaData : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{ 
public:
	int32_t                                            Iterations;                                                 // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);                                                 // [0x365d530] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{ 
public:
	TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                             // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType); // [0x365d5d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldNodeBase
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UFieldNodeBase : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeInt
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UFieldNodeInt : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeFloat
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UFieldNodeFloat : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeVector
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UFieldNodeVector : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.UniformInteger
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UUniformInteger : public UFieldNodeInt
{ 
public:
	int32_t                                            Magnitude;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformInteger.SetUniformInteger
	UUniformInteger* SetUniformInteger(int32_t Magnitude);                                                                   // [0x365d530] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialIntMask
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class URadialIntMask : public UFieldNodeInt
{ 
public:
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	FVector                                            Position;                                                   // 0x00B4   (0x000C)  
	int32_t                                            InteriorValue;                                              // 0x00C0   (0x0004)  
	int32_t                                            ExteriorValue;                                              // 0x00C4   (0x0004)  
	TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition;                                           // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialIntMask.SetRadialIntMask
	URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32_t InteriorValue, int32_t ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn); // [0x365de40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformScalar
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UUniformScalar : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformScalar.SetUniformScalar
	UUniformScalar* SetUniformScalar(float Magnitude);                                                                       // [0x365e110] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialFalloff
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class URadialFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	float                                              MinRange;                                                   // 0x00B4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00B8   (0x0004)  
	float                                              Default;                                                    // 0x00BC   (0x0004)  
	float                                              Radius;                                                     // 0x00C0   (0x0004)  
	FVector                                            Position;                                                   // 0x00C4   (0x000C)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialFalloff.SetRadialFalloff
	URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, TEnumAsByte<EFieldFalloffType> Falloff); // [0x365dbf0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.PlaneFalloff
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UPlaneFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	float                                              MinRange;                                                   // 0x00B4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00B8   (0x0004)  
	float                                              Default;                                                    // 0x00BC   (0x0004)  
	float                                              Distance;                                                   // 0x00C0   (0x0004)  
	FVector                                            Position;                                                   // 0x00C4   (0x000C)  
	FVector                                            Normal;                                                     // 0x00D0   (0x000C)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00DD   (0x0003)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, TEnumAsByte<EFieldFalloffType> Falloff); // [0x365d950] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.BoxFalloff
/// Size: 0x0050 (0x0000B0 - 0x000100)
class UBoxFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	float                                              MinRange;                                                   // 0x00B4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00B8   (0x0004)  
	float                                              Default;                                                    // 0x00BC   (0x0004)  
	FTransform                                         Transform;                                                  // 0x00C0   (0x0030)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00F1   (0x000F)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.BoxFalloff.SetBoxFalloff
	UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff); // [0x365d1d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.NoiseField
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class UNoiseField : public UFieldNodeFloat
{ 
public:
	float                                              MinRange;                                                   // 0x00B0   (0x0004)  
	float                                              MaxRange;                                                   // 0x00B4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x00C0   (0x0030)  


	/// Functions
	// Function /Script/FieldSystemEngine.NoiseField.SetNoiseField
	UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);                                        // [0x365d660] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformVector
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UUniformVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	FVector                                            Direction;                                                  // 0x00B4   (0x000C)  


	/// Functions
	// Function /Script/FieldSystemEngine.UniformVector.SetUniformVector
	UUniformVector* SetUniformVector(float Magnitude, FVector Direction);                                                    // [0x365e020] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialVector
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class URadialVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	FVector                                            Position;                                                   // 0x00B4   (0x000C)  


	/// Functions
	// Function /Script/FieldSystemEngine.RadialVector.SetRadialVector
	URadialVector* SetRadialVector(float Magnitude, FVector Position);                                                       // [0x365e020] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RandomVector
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class URandomVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RandomVector.SetRandomVector
	URandomVector* SetRandomVector(float Magnitude);                                                                         // [0x365e110] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.OperatorField
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UOperatorField : public UFieldNodeBase
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	UFieldNodeBase*                                    RightField;                                                 // 0x00B8   (0x0008)  
	UFieldNodeBase*                                    LeftField;                                                  // 0x00C0   (0x0008)  
	TEnumAsByte<EFieldOperationType>                   Operation;                                                  // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.OperatorField.SetOperatorField
	UOperatorField* SetOperatorField(float Magnitude, UFieldNodeBase* RightField, UFieldNodeBase* LeftField, TEnumAsByte<EFieldOperationType> Operation); // [0x365d7f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToIntegerField
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UToIntegerField : public UFieldNodeInt
{ 
public:
	UFieldNodeFloat*                                   FloatField;                                                 // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToIntegerField.SetToIntegerField
	UToIntegerField* SetToIntegerField(UFieldNodeFloat* FloatField);                                                         // [0x365e1d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToFloatField
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UToFloatField : public UFieldNodeFloat
{ 
public:
	UFieldNodeInt*                                     IntField;                                                   // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToFloatField.SetToFloatField
	UToFloatField* SetToFloatField(UFieldNodeInt* IntegerField);                                                             // [0x365e1d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.CullingField
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UCullingField : public UFieldNodeBase
{ 
public:
	UFieldNodeBase*                                    Culling;                                                    // 0x00B0   (0x0008)  
	UFieldNodeBase*                                    Field;                                                      // 0x00B8   (0x0008)  
	TEnumAsByte<EFieldCullingOperationType>            Operation;                                                  // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.CullingField.SetCullingField
	UCullingField* SetCullingField(UFieldNodeBase* Culling, UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation); // [0x365d420] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ReturnResultsTerminal
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UReturnResultsTerminal : public UFieldNodeBase
{ 
public:
};

