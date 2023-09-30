/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CoreUObject.

/// Class /Script/CoreUObject.Object
/// Size: 0x0028 (0x000000 - 0x000028)
class UObject
{ 
public:
	void**                                             vtable;                                                     // 0x0000   (0x0008)  
	EObjectFlags                                       ObjectFlags;                                                // 0x0008   (0x0004)  
	int                                                InternalIndex;                                              // 0x000C   (0x0004)  
	UClass*                                            ClassPrivate;                                               // 0x0010   (0x0008)  
	FName                                              NamePrivate;                                                // 0x0018   (0x0008)  
	UObject*                                           OuterPrivate;                                               // 0x0020   (0x0008)  
};

/// Class /Script/CoreUObject.Interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterface : public UObject
{ 
public:
};

/// Class /Script/CoreUObject.GCObjectReferencer
/// Size: 0x0048 (0x000028 - 0x000070)
class UGCObjectReferencer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0028   (0x0048)  MISSED
};

/// Class /Script/CoreUObject.TextBuffer
/// Size: 0x0028 (0x000028 - 0x000050)
class UTextBuffer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Class /Script/CoreUObject.Field
/// Size: 0x0008 (0x000028 - 0x000030)
class UField : public UObject
{ 
public:
	UField*                                            Next;                                                       // 0x0028   (0x0008)  
};

/// Class /Script/CoreUObject.Struct
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UStruct : public UField
{ 
public:
	UStruct*                                           SuperStruct;                                                // 0x0030   (0x0008)  
	UField*                                            Children;                                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/CoreUObject.ScriptStruct
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UScriptStruct : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.Package
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UPackage : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0028   (0x0078)  MISSED
};

/// Class /Script/CoreUObject.Class
/// Size: 0x0180 (0x0000B0 - 0x000230)
class UClass : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x180];                                     // 0x00B0   (0x0180)  MISSED
};

/// Class /Script/CoreUObject.Function
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UFunction : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00B0   (0x0030)  MISSED
};

/// Class /Script/CoreUObject.DelegateFunction
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UDelegateFunction : public UFunction
{ 
public:
};

/// Class /Script/CoreUObject.SparseDelegateFunction
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class USparseDelegateFunction : public UDelegateFunction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.DynamicClass
/// Size: 0x0080 (0x000230 - 0x0002B0)
class UDynamicClass : public UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0230   (0x0080)  MISSED
};

/// Class /Script/CoreUObject.PackageMap
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UPackageMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0028   (0x00B8)  MISSED
};

/// Class /Script/CoreUObject.Enum
/// Size: 0x0030 (0x000030 - 0x000060)
class UEnum : public UField
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderClass
/// Size: 0x01B8 (0x000230 - 0x0003E8)
class ULinkerPlaceholderClass : public UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x1B8];                                     // 0x0230   (0x01B8)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderExportObject
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class ULinkerPlaceholderExportObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0028   (0x00C8)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderFunction
/// Size: 0x01B8 (0x0000E0 - 0x000298)
class ULinkerPlaceholderFunction : public UFunction
{ 
public:
	unsigned char                                      UnknownData00_1[0x1B8];                                     // 0x00E0   (0x01B8)  MISSED
};

/// Class /Script/CoreUObject.MetaData
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UMetaData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED
};

/// Class /Script/CoreUObject.ObjectRedirector
/// Size: 0x0008 (0x000028 - 0x000030)
class UObjectRedirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.Property
/// Size: 0x0040 (0x000030 - 0x000070)
class UProperty : public UField
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED
};

/// Class /Script/CoreUObject.EnumProperty
/// Size: 0x0010 (0x000070 - 0x000080)
class UEnumProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0070   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.ArrayProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UArrayProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.ObjectPropertyBase
/// Size: 0x0008 (0x000070 - 0x000078)
class UObjectPropertyBase : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.BoolProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UBoolProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.NumericProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UNumericProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.ByteProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UByteProperty : public UNumericProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.ObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.ClassProperty
/// Size: 0x0008 (0x000078 - 0x000080)
class UClassProperty : public UObjectProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.DelegateProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UDelegateProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.DoubleProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UDoubleProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.FloatProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UFloatProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.IntProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UIntProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int8Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt8Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int16Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt16Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int64Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt64Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.InterfaceProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UInterfaceProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.LazyObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class ULazyObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.MapProperty
/// Size: 0x0028 (0x000070 - 0x000098)
class UMapProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/CoreUObject.MulticastDelegateProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UMulticastDelegateProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.MulticastInlineDelegateProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.MulticastSparseDelegateProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.NameProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UNameProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.SetProperty
/// Size: 0x0020 (0x000070 - 0x000090)
class USetProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0070   (0x0020)  MISSED
};

/// Class /Script/CoreUObject.SoftObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class USoftObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.SoftClassProperty
/// Size: 0x0008 (0x000078 - 0x000080)
class USoftClassProperty : public USoftObjectProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.StrProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UStrProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.StructProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UStructProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.UInt16Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt16Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt32Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt32Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt64Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt64Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.WeakObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UWeakObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.TextProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UTextProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.PropertyWrapper
/// Size: 0x0008 (0x000028 - 0x000030)
class UPropertyWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.MulticastDelegatePropertyWrapper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{ 
public:
};

/// Class /Script/CoreUObject.MulticastInlineDelegatePropertyWrapper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{ 
public:
};

/// Struct /Script/CoreUObject.JoinabilitySettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FJoinabilitySettings
{ 
	FName                                              SessionName;                                                // 0x0000   (0x0008)  
	bool                                               bPublicSearchable;                                          // 0x0008   (0x0001)  
	bool                                               bAllowInvites;                                              // 0x0009   (0x0001)  
	bool                                               bJoinViaPresence;                                           // 0x000A   (0x0001)  
	bool                                               bJoinViaPresenceFriendsOnly;                                // 0x000B   (0x0001)  
	int32_t                                            MaxPlayers;                                                 // 0x000C   (0x0004)  
	int32_t                                            MaxPartySize;                                               // 0x0010   (0x0004)  
};

/// Struct /Script/CoreUObject.UniqueNetIdWrapper
/// Size: 0x0001 (0x000000 - 0x000001)
struct FUniqueNetIdWrapper
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/CoreUObject.Guid
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGuid
{ 
	int32_t                                            A;                                                          // 0x0000   (0x0004)  
	int32_t                                            B;                                                          // 0x0004   (0x0004)  
	int32_t                                            C;                                                          // 0x0008   (0x0004)  
	int32_t                                            D;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Vector
/// Size: 0x000C (0x000000 - 0x00000C)
struct FVector
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Vector4
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVector4
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Vector2D
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVector2D
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.TwoVectors
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTwoVectors
{ 
	FVector                                            v1;                                                         // 0x0000   (0x000C)  
	FVector                                            v2;                                                         // 0x000C   (0x000C)  
};

/// Struct /Script/CoreUObject.Plane
/// Size: 0x0004 (0x00000C - 0x000010)
struct FPlane : FVector
{ 
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Rotator
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRotator
{ 
	float                                              Pitch;                                                      // 0x0000   (0x0004)  
	float                                              Yaw;                                                        // 0x0004   (0x0004)  
	float                                              Roll;                                                       // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Quat
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQuat
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.PackedNormal
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPackedNormal
{ 
	char                                               X;                                                          // 0x0000   (0x0001)  
	char                                               Y;                                                          // 0x0001   (0x0001)  
	char                                               Z;                                                          // 0x0002   (0x0001)  
	char                                               W;                                                          // 0x0003   (0x0001)  
};

/// Struct /Script/CoreUObject.PackedRGB10A2N
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPackedRGB10A2N
{ 
	int32_t                                            Packed;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.PackedRGBA16N
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPackedRGBA16N
{ 
	int32_t                                            XY;                                                         // 0x0000   (0x0004)  
	int32_t                                            ZW;                                                         // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.IntPoint
/// Size: 0x0008 (0x000000 - 0x000008)
struct FIntPoint
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.IntVector
/// Size: 0x000C (0x000000 - 0x00000C)
struct FIntVector
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Color
/// Size: 0x0004 (0x000000 - 0x000004)
struct FColor
{ 
	char                                               B;                                                          // 0x0000   (0x0001)  
	char                                               G;                                                          // 0x0001   (0x0001)  
	char                                               R;                                                          // 0x0002   (0x0001)  
	char                                               A;                                                          // 0x0003   (0x0001)  
};

/// Struct /Script/CoreUObject.LinearColor
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLinearColor
{ 
	float                                              R;                                                          // 0x0000   (0x0004)  
	float                                              G;                                                          // 0x0004   (0x0004)  
	float                                              B;                                                          // 0x0008   (0x0004)  
	float                                              A;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Box
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBox
{ 
	FVector                                            Min;                                                        // 0x0000   (0x000C)  
	FVector                                            Max;                                                        // 0x000C   (0x000C)  
	char                                               IsValid;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.Box2D
/// Size: 0x0014 (0x000000 - 0x000014)
struct FBox2D
{ 
	FVector2D                                          Min;                                                        // 0x0000   (0x0008)  
	FVector2D                                          Max;                                                        // 0x0008   (0x0008)  
	char                                               bIsValid;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.BoxSphereBounds
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBoxSphereBounds
{ 
	FVector                                            Origin;                                                     // 0x0000   (0x000C)  
	FVector                                            BoxExtent;                                                  // 0x000C   (0x000C)  
	float                                              SphereRadius;                                               // 0x0018   (0x0004)  
};

/// Struct /Script/CoreUObject.OrientedBox
/// Size: 0x003C (0x000000 - 0x00003C)
struct FOrientedBox
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	FVector                                            AxisX;                                                      // 0x000C   (0x000C)  
	FVector                                            AxisY;                                                      // 0x0018   (0x000C)  
	FVector                                            AxisZ;                                                      // 0x0024   (0x000C)  
	float                                              ExtentX;                                                    // 0x0030   (0x0004)  
	float                                              ExtentY;                                                    // 0x0034   (0x0004)  
	float                                              ExtentZ;                                                    // 0x0038   (0x0004)  
};

/// Struct /Script/CoreUObject.Matrix
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMatrix
{ 
	FPlane                                             XPlane;                                                     // 0x0000   (0x0010)  
	FPlane                                             YPlane;                                                     // 0x0010   (0x0010)  
	FPlane                                             ZPlane;                                                     // 0x0020   (0x0010)  
	FPlane                                             WPlane;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/CoreUObject.InterpCurvePointFloat
/// Size: 0x0014 (0x000000 - 0x000014)
struct FInterpCurvePointFloat
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	float                                              OutVal;                                                     // 0x0004   (0x0004)  
	float                                              ArriveTangent;                                              // 0x0008   (0x0004)  
	float                                              LeaveTangent;                                               // 0x000C   (0x0004)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveFloat
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveFloat
{ 
	TArray<FInterpCurvePointFloat>                     Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointVector2D
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInterpCurvePointVector2D
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FVector2D                                          OutVal;                                                     // 0x0004   (0x0008)  
	FVector2D                                          ArriveTangent;                                              // 0x000C   (0x0008)  
	FVector2D                                          LeaveTangent;                                               // 0x0014   (0x0008)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveVector2D
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveVector2D
{ 
	TArray<FInterpCurvePointVector2D>                  Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointVector
/// Size: 0x002C (0x000000 - 0x00002C)
struct FInterpCurvePointVector
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FVector                                            OutVal;                                                     // 0x0004   (0x000C)  
	FVector                                            ArriveTangent;                                              // 0x0010   (0x000C)  
	FVector                                            LeaveTangent;                                               // 0x001C   (0x000C)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveVector
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveVector
{ 
	TArray<FInterpCurvePointVector>                    Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointQuat
/// Size: 0x0050 (0x000000 - 0x000050)
struct FInterpCurvePointQuat
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0004   (0x000C)  MISSED
	FQuat                                              OutVal;                                                     // 0x0010   (0x0010)  
	FQuat                                              ArriveTangent;                                              // 0x0020   (0x0010)  
	FQuat                                              LeaveTangent;                                               // 0x0030   (0x0010)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0041   (0x000F)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveQuat
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveQuat
{ 
	TArray<FInterpCurvePointQuat>                      Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointTwoVectors
/// Size: 0x0050 (0x000000 - 0x000050)
struct FInterpCurvePointTwoVectors
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FTwoVectors                                        OutVal;                                                     // 0x0004   (0x0018)  
	FTwoVectors                                        ArriveTangent;                                              // 0x001C   (0x0018)  
	FTwoVectors                                        LeaveTangent;                                               // 0x0034   (0x0018)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveTwoVectors
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveTwoVectors
{ 
	TArray<FInterpCurvePointTwoVectors>                Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointLinearColor
/// Size: 0x0038 (0x000000 - 0x000038)
struct FInterpCurvePointLinearColor
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FLinearColor                                       OutVal;                                                     // 0x0004   (0x0010)  
	FLinearColor                                       ArriveTangent;                                              // 0x0014   (0x0010)  
	FLinearColor                                       LeaveTangent;                                               // 0x0024   (0x0010)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveLinearColor
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveLinearColor
{ 
	TArray<FInterpCurvePointLinearColor>               Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.Transform
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTransform
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	FVector                                            Translation;                                                // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            Scale3D;                                                    // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/CoreUObject.RandomStream
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRandomStream
{ 
	int32_t                                            InitialSeed;                                                // 0x0000   (0x0004)  
	int32_t                                            Seed;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.DateTime
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDateTime
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.FrameNumber
/// Size: 0x0004 (0x000000 - 0x000004)
struct FFrameNumber
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameRate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFrameRate
{ 
	int32_t                                            Numerator;                                                  // 0x0000   (0x0004)  
	int32_t                                            Denominator;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameTime
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFrameTime
{ 
	FFrameNumber                                       FrameNumber;                                                // 0x0000   (0x0004)  
	float                                              SubFrame;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.QualifiedFrameTime
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQualifiedFrameTime
{ 
	FFrameTime                                         Time;                                                       // 0x0000   (0x0008)  
	FFrameRate                                         Rate;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Timecode
/// Size: 0x0014 (0x000000 - 0x000014)
struct FTimecode
{ 
	int32_t                                            Hours;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minutes;                                                    // 0x0004   (0x0004)  
	int32_t                                            Seconds;                                                    // 0x0008   (0x0004)  
	int32_t                                            Frames;                                                     // 0x000C   (0x0004)  
	bool                                               bDropFrameFormat;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.Timespan
/// Size: 0x0008 (0x000000 - 0x000008)
struct FTimespan
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.SoftObjectPath
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSoftObjectPath
{ 
	FName                                              AssetPathName;                                              // 0x0000   (0x0008)  
	FString                                            SubPathString;                                              // 0x0008   (0x0010)  
};

/// Struct /Script/CoreUObject.SoftClassPath
/// Size: 0x0000 (0x000018 - 0x000018)
struct FSoftClassPath : FSoftObjectPath
{ 
};

/// Struct /Script/CoreUObject.PrimaryAssetType
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPrimaryAssetType
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/CoreUObject.PrimaryAssetId
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPrimaryAssetId
{ 
	FPrimaryAssetType                                  PrimaryAssetType;                                           // 0x0000   (0x0008)  
	FName                                              PrimaryAssetName;                                           // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FallbackStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFallbackStruct
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/CoreUObject.FloatRangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFloatRangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FloatRange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFloatRange
{ 
	FFloatRangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)  
	FFloatRangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Int32RangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInt32RangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Range
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInt32Range
{ 
	FInt32RangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)  
	FInt32RangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FrameNumberRangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFrameNumberRangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFrameNumber                                       Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameNumberRange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFrameNumberRange
{ 
	FFrameNumberRangeBound                             LowerBound;                                                 // 0x0000   (0x0008)  
	FFrameNumberRangeBound                             UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FloatInterval
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFloatInterval
{ 
	float                                              Min;                                                        // 0x0000   (0x0004)  
	float                                              Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Interval
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInt32Interval
{ 
	int32_t                                            Min;                                                        // 0x0000   (0x0004)  
	int32_t                                            Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.PolyglotTextData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FPolyglotTextData
{ 
	ELocalizedTextSourceCategory                       Category;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            NativeCulture;                                              // 0x0008   (0x0010)  
	FString                                            Namespace;                                                  // 0x0018   (0x0010)  
	FString                                            Key;                                                        // 0x0028   (0x0010)  
	FString                                            NativeString;                                               // 0x0038   (0x0010)  
	TMap<FString, FString>                             LocalizedStrings;                                           // 0x0048   (0x0050)  
	bool                                               bIsMinimalPatch;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FText                                              CachedText;                                                 // 0x00A0   (0x0018)  
};

/// Struct /Script/CoreUObject.AutomationEvent
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAutomationEvent
{ 
	EAutomationEventType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0008   (0x0010)  
	FString                                            Context;                                                    // 0x0018   (0x0010)  
	FGuid                                              Artifact;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/CoreUObject.AutomationExecutionEntry
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAutomationExecutionEntry
{ 
	FAutomationEvent                                   Event;                                                      // 0x0000   (0x0038)  
	FString                                            Filename;                                                   // 0x0038   (0x0010)  
	int32_t                                            LineNumber;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FDateTime                                          Timestamp;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/CoreUObject.ARFilter
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FARFilter
{ 
	TArray<FName>                                      PackageNames;                                               // 0x0000   (0x0010)  
	TArray<FName>                                      PackagePaths;                                               // 0x0010   (0x0010)  
	TArray<FName>                                      ObjectPaths;                                                // 0x0020   (0x0010)  
	TArray<FName>                                      ClassNames;                                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0040   (0x0050)  MISSED
	TSet<FName>                                        RecursiveClassesExclusionSet;                               // 0x0090   (0x0050)  
	bool                                               bRecursivePaths;                                            // 0x00E0   (0x0001)  
	bool                                               bRecursiveClasses;                                          // 0x00E1   (0x0001)  
	bool                                               bIncludeOnlyOnDiskAssets;                                   // 0x00E2   (0x0001)  
	unsigned char                                      UnknownData01_6[0xD];                                       // 0x00E3   (0x000D)  MISSED
};

/// Struct /Script/CoreUObject.AssetBundleEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAssetBundleEntry
{ 
	FPrimaryAssetId                                    BundleScope;                                                // 0x0000   (0x0010)  
	FName                                              BundleName;                                                 // 0x0010   (0x0008)  
	TArray<FSoftObjectPath>                            BundleAssets;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/CoreUObject.AssetBundleData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAssetBundleData
{ 
	TArray<FAssetBundleEntry>                          Bundles;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.AssetData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAssetData
{ 
	FName                                              ObjectPath;                                                 // 0x0000   (0x0008)  
	FName                                              PackageName;                                                // 0x0008   (0x0008)  
	FName                                              PackagePath;                                                // 0x0010   (0x0008)  
	FName                                              AssetName;                                                  // 0x0018   (0x0008)  
	FName                                              AssetClass;                                                 // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Enum /Script/CoreUObject.EInterpCurveMode
/// Size: 0x07
enum EInterpCurveMode : uint8_t
{
	CIM_Linear                                                                       = 0,
	CIM_CurveAuto                                                                    = 1,
	CIM_Constant                                                                     = 2,
	CIM_CurveUser                                                                    = 3,
	CIM_CurveBreak                                                                   = 4,
	CIM_CurveAutoClamped                                                             = 5,
	CIM_MAX                                                                          = 6
};

/// Enum /Script/CoreUObject.ERangeBoundTypes
/// Size: 0x04
enum ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive                                                      = 0,
	ERangeBoundTypes__Inclusive                                                      = 1,
	ERangeBoundTypes__Open                                                           = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX                                           = 3
};

/// Enum /Script/CoreUObject.ELocalizedTextSourceCategory
/// Size: 0x04
enum ELocalizedTextSourceCategory : uint8_t
{
	ELocalizedTextSourceCategory__Game                                               = 0,
	ELocalizedTextSourceCategory__Engine                                             = 1,
	ELocalizedTextSourceCategory__Editor                                             = 2,
	ELocalizedTextSourceCategory__ELocalizedTextSourceCategory_MAX                   = 3
};

/// Enum /Script/CoreUObject.EAutomationEventType
/// Size: 0x04
enum EAutomationEventType : uint8_t
{
	EAutomationEventType__Info                                                       = 0,
	EAutomationEventType__Warning                                                    = 1,
	EAutomationEventType__Error                                                      = 2,
	EAutomationEventType__EAutomationEventType_MAX                                   = 3
};

/// Enum /Script/CoreUObject.EMouseCursor
/// Size: 0x15
enum EMouseCursor : uint8_t
{
	EMouseCursor__None                                                               = 0,
	EMouseCursor__Default                                                            = 1,
	EMouseCursor__TextEditBeam                                                       = 2,
	EMouseCursor__ResizeLeftRight                                                    = 3,
	EMouseCursor__ResizeUpDown                                                       = 4,
	EMouseCursor__ResizeSouthEast                                                    = 5,
	EMouseCursor__ResizeSouthWest                                                    = 6,
	EMouseCursor__CardinalCross                                                      = 7,
	EMouseCursor__Crosshairs                                                         = 8,
	EMouseCursor__Hand                                                               = 9,
	EMouseCursor__GrabHand                                                           = 10,
	EMouseCursor__GrabHandClosed                                                     = 11,
	EMouseCursor__SlashedCircle                                                      = 12,
	EMouseCursor__EyeDropper                                                         = 13,
	EMouseCursor__EMouseCursor_MAX                                                   = 14
};

/// Enum /Script/CoreUObject.ELifetimeCondition
/// Size: 0x16
enum ELifetimeCondition : uint8_t
{
	COND_None                                                                        = 0,
	COND_InitialOnly                                                                 = 1,
	COND_OwnerOnly                                                                   = 2,
	COND_SkipOwner                                                                   = 3,
	COND_SimulatedOnly                                                               = 4,
	COND_AutonomousOnly                                                              = 5,
	COND_SimulatedOrPhysics                                                          = 6,
	COND_InitialOrOwner                                                              = 7,
	COND_Custom                                                                      = 8,
	COND_ReplayOrOwner                                                               = 9,
	COND_ReplayOnly                                                                  = 10,
	COND_SimulatedOnlyNoReplay                                                       = 11,
	COND_SimulatedOrPhysicsNoReplay                                                  = 12,
	COND_SkipReplay                                                                  = 13,
	COND_Never                                                                       = 15,
	COND_Max                                                                         = 16
};

/// Enum /Script/CoreUObject.EDataValidationResult
/// Size: 0x04
enum EDataValidationResult : uint8_t
{
	EDataValidationResult__Invalid                                                   = 0,
	EDataValidationResult__Valid                                                     = 1,
	EDataValidationResult__NotValidated                                              = 2,
	EDataValidationResult__EDataValidationResult_MAX                                 = 3
};

/// Enum /Script/CoreUObject.EAppMsgType
/// Size: 0x09
enum EAppMsgType : uint8_t
{
	EAppMsgType__Ok                                                                  = 0,
	EAppMsgType__YesNo                                                               = 1,
	EAppMsgType__OkCancel                                                            = 2,
	EAppMsgType__YesNoCancel                                                         = 3,
	EAppMsgType__CancelRetryContinue                                                 = 4,
	EAppMsgType__YesNoYesAllNoAll                                                    = 5,
	EAppMsgType__YesNoYesAllNoAllCancel                                              = 6,
	EAppMsgType__YesNoYesAll                                                         = 7,
	EAppMsgType__EAppMsgType_MAX                                                     = 8
};

/// Enum /Script/CoreUObject.EAppReturnType
/// Size: 0x09
enum EAppReturnType : uint8_t
{
	EAppReturnType__No                                                               = 0,
	EAppReturnType__Yes                                                              = 1,
	EAppReturnType__YesAll                                                           = 2,
	EAppReturnType__NoAll                                                            = 3,
	EAppReturnType__Cancel                                                           = 4,
	EAppReturnType__Ok                                                               = 5,
	EAppReturnType__Retry                                                            = 6,
	EAppReturnType__Continue                                                         = 7,
	EAppReturnType__EAppReturnType_MAX                                               = 8
};

/// Enum /Script/CoreUObject.EPropertyAccessChangeNotifyMode
/// Size: 0x04
enum EPropertyAccessChangeNotifyMode : uint8_t
{
	EPropertyAccessChangeNotifyMode__Default                                         = 0,
	EPropertyAccessChangeNotifyMode__Never                                           = 1,
	EPropertyAccessChangeNotifyMode__Always                                          = 2,
	EPropertyAccessChangeNotifyMode__EPropertyAccessChangeNotifyMode_MAX             = 3
};

/// Enum /Script/CoreUObject.EUnit
/// Size: 0x51
enum EUnit : uint8_t
{
	EUnit__Micrometers                                                               = 0,
	EUnit__Millimeters                                                               = 1,
	EUnit__Centimeters                                                               = 2,
	EUnit__Meters                                                                    = 3,
	EUnit__Kilometers                                                                = 4,
	EUnit__Inches                                                                    = 5,
	EUnit__Feet                                                                      = 6,
	EUnit__Yards                                                                     = 7,
	EUnit__Miles                                                                     = 8,
	EUnit__Lightyears                                                                = 9,
	EUnit__Degrees                                                                   = 10,
	EUnit__Radians                                                                   = 11,
	EUnit__MetersPerSecond                                                           = 12,
	EUnit__KilometersPerHour                                                         = 13,
	EUnit__MilesPerHour                                                              = 14,
	EUnit__Celsius                                                                   = 15,
	EUnit__Farenheit                                                                 = 16,
	EUnit__Kelvin                                                                    = 17,
	EUnit__Micrograms                                                                = 18,
	EUnit__Milligrams                                                                = 19,
	EUnit__Grams                                                                     = 20,
	EUnit__Kilograms                                                                 = 21,
	EUnit__MetricTons                                                                = 22,
	EUnit__Ounces                                                                    = 23,
	EUnit__Pounds                                                                    = 24,
	EUnit__Stones                                                                    = 25,
	EUnit__Newtons                                                                   = 26,
	EUnit__PoundsForce                                                               = 27,
	EUnit__KilogramsForce                                                            = 28,
	EUnit__Hertz                                                                     = 29,
	EUnit__Kilohertz                                                                 = 30,
	EUnit__Megahertz                                                                 = 31,
	EUnit__Gigahertz                                                                 = 32,
	EUnit__RevolutionsPerMinute                                                      = 33,
	EUnit__Bytes                                                                     = 34,
	EUnit__Kilobytes                                                                 = 35,
	EUnit__Megabytes                                                                 = 36,
	EUnit__Gigabytes                                                                 = 37,
	EUnit__Terabytes                                                                 = 38,
	EUnit__Lumens                                                                    = 39,
	EUnit__Milliseconds                                                              = 43,
	EUnit__Seconds                                                                   = 44,
	EUnit__Minutes                                                                   = 45,
	EUnit__Hours                                                                     = 46,
	EUnit__Days                                                                      = 47,
	EUnit__Months                                                                    = 48,
	EUnit__Years                                                                     = 49,
	EUnit__Multiplier                                                                = 52,
	EUnit__Percentage                                                                = 51,
	EUnit__Unspecified                                                               = 53,
	EUnit__EUnit_MAX                                                                 = 54
};

/// Enum /Script/CoreUObject.EPixelFormat
/// Size: 0x72
enum EPixelFormat : uint8_t
{
	PF_Unknown                                                                       = 0,
	PF_A32B32G32R32F                                                                 = 1,
	PF_B8G8R8A8                                                                      = 2,
	PF_G8                                                                            = 3,
	PF_G16                                                                           = 4,
	PF_DXT1                                                                          = 5,
	PF_DXT3                                                                          = 6,
	PF_DXT5                                                                          = 7,
	PF_UYVY                                                                          = 8,
	PF_FloatRGB                                                                      = 9,
	PF_FloatRGBA                                                                     = 10,
	PF_DepthStencil                                                                  = 11,
	PF_ShadowDepth                                                                   = 12,
	PF_R32_FLOAT                                                                     = 13,
	PF_G16R16                                                                        = 14,
	PF_G16R16F                                                                       = 15,
	PF_G16R16F_FILTER                                                                = 16,
	PF_G32R32F                                                                       = 17,
	PF_A2B10G10R10                                                                   = 18,
	PF_A16B16G16R16                                                                  = 19,
	PF_D24                                                                           = 20,
	PF_R16F                                                                          = 21,
	PF_R16F_FILTER                                                                   = 22,
	PF_BC5                                                                           = 23,
	PF_V8U8                                                                          = 24,
	PF_A1                                                                            = 25,
	PF_FloatR11G11B10                                                                = 26,
	PF_A8                                                                            = 27,
	PF_R32_UINT                                                                      = 28,
	PF_R32_SINT                                                                      = 29,
	PF_PVRTC2                                                                        = 30,
	PF_PVRTC4                                                                        = 31,
	PF_R16_UINT                                                                      = 32,
	PF_R16_SINT                                                                      = 33,
	PF_R16G16B16A16_UINT                                                             = 34,
	PF_R16G16B16A16_SINT                                                             = 35,
	PF_R5G6B5_UNORM                                                                  = 36,
	PF_R8G8B8A8                                                                      = 37,
	PF_A8R8G8B8                                                                      = 38,
	PF_BC4                                                                           = 39,
	PF_R8G8                                                                          = 40,
	PF_ATC_RGB                                                                       = 41,
	PF_ATC_RGBA_E                                                                    = 42,
	PF_ATC_RGBA_I                                                                    = 43,
	PF_X24_G8                                                                        = 44,
	PF_ETC1                                                                          = 45,
	PF_ETC2_RGB                                                                      = 46,
	PF_ETC2_RGBA                                                                     = 47,
	PF_R32G32B32A32_UINT                                                             = 48,
	PF_R16G16_UINT                                                                   = 49,
	PF_ASTC_4x4                                                                      = 50,
	PF_ASTC_6x6                                                                      = 51,
	PF_ASTC_8x8                                                                      = 52,
	PF_ASTC_10x10                                                                    = 53,
	PF_ASTC_12x12                                                                    = 54,
	PF_BC6H                                                                          = 55,
	PF_BC7                                                                           = 56,
	PF_R8_UINT                                                                       = 57,
	PF_L8                                                                            = 58,
	PF_XGXR8                                                                         = 59,
	PF_R8G8B8A8_UINT                                                                 = 60,
	PF_R8G8B8A8_SNORM                                                                = 61,
	PF_R16G16B16A16_UNORM                                                            = 62,
	PF_R16G16B16A16_SNORM                                                            = 63,
	PF_PLATFORM_HDR                                                                  = 64,
	PF_PLATFORM_HDR                                                                  = 65,
	PF_PLATFORM_HDR                                                                  = 66,
	PF_NV12                                                                          = 67,
	PF_R32G32_UINT                                                                   = 68,
	PF_ETC2_R11_EAC                                                                  = 69,
	PF_ETC2_RG11_EAC                                                                 = 70,
	PF_MAX                                                                           = 72
};

/// Enum /Script/CoreUObject.EAxis
/// Size: 0x05
enum EAxis : uint8_t
{
	EAxis__None                                                                      = 0,
	EAxis__X                                                                         = 1,
	EAxis__Y                                                                         = 2,
	EAxis__Z                                                                         = 3,
	EAxis__EAxis_MAX                                                                 = 4
};

/// Enum /Script/CoreUObject.ELogTimes
/// Size: 0x05
enum ELogTimes : uint8_t
{
	ELogTimes__None                                                                  = 0,
	ELogTimes__UTC                                                                   = 1,
	ELogTimes__SinceGStartTime                                                       = 2,
	ELogTimes__Local                                                                 = 3,
	ELogTimes__ELogTimes_MAX                                                         = 4
};

/// Enum /Script/CoreUObject.ESearchDir
/// Size: 0x03
enum ESearchDir : uint8_t
{
	ESearchDir__FromStart                                                            = 0,
	ESearchDir__FromEnd                                                              = 1,
	ESearchDir__ESearchDir_MAX                                                       = 2
};

/// Enum /Script/CoreUObject.ESearchCase
/// Size: 0x03
enum ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive                                                       = 0,
	ESearchCase__IgnoreCase                                                          = 1,
	ESearchCase__ESearchCase_MAX                                                     = 2
};

