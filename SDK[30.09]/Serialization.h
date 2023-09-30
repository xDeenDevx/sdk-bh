/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Serialization.

/// Struct /Script/Serialization.StructSerializerTestStruct
/// Size: 0x0450 (0x000000 - 0x000450)
struct FStructSerializerTestStruct
{ 
	FStructSerializerNumericTestStruct                 Numerics;                                                   // 0x0000   (0x0030)  
	FStructSerializerBooleanTestStruct                 Booleans;                                                   // 0x0030   (0x0003)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0033   (0x0005)  MISSED
	FStructSerializerObjectTestStruct                  Objects;                                                    // 0x0038   (0x00A0)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FStructSerializerBuiltinTestStruct                 Builtins;                                                   // 0x00E0   (0x0090)  
	FStructSerializerArrayTestStruct                   Arrays;                                                     // 0x0170   (0x0060)  
	FStructSerializerMapTestStruct                     Maps;                                                       // 0x01D0   (0x0140)  
	FStructSerializerSetTestStruct                     Sets;                                                       // 0x0310   (0x0140)  
};

/// Struct /Script/Serialization.StructSerializerSetTestStruct
/// Size: 0x0140 (0x000000 - 0x000140)
struct FStructSerializerSetTestStruct
{ 
	TSet<FString>                                      StrSet;                                                     // 0x0000   (0x0050)  
	TSet<int32_t>                                      IntSet;                                                     // 0x0050   (0x0050)  
	TSet<FName>                                        NameSet;                                                    // 0x00A0   (0x0050)  
	TSet<FStructSerializerBuiltinTestStruct>           StructSet;                                                  // 0x00F0   (0x0050)  
};

/// Struct /Script/Serialization.StructSerializerBuiltinTestStruct
/// Size: 0x0090 (0x000000 - 0x000090)
struct FStructSerializerBuiltinTestStruct
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	FString                                            String;                                                     // 0x0018   (0x0010)  
	FText                                              Text;                                                       // 0x0028   (0x0018)  
	FVector                                            Vector;                                                     // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FVector4                                           Vector4;                                                    // 0x0050   (0x0010)  
	FRotator                                           Rotator;                                                    // 0x0060   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FQuat                                              Quat;                                                       // 0x0070   (0x0010)  
	FColor                                             Color;                                                      // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/Serialization.StructSerializerMapTestStruct
/// Size: 0x0140 (0x000000 - 0x000140)
struct FStructSerializerMapTestStruct
{ 
	TMap<int32_t, FString>                             IntToStr;                                                   // 0x0000   (0x0050)  
	TMap<FString, FString>                             StrToStr;                                                   // 0x0050   (0x0050)  
	TMap<FString, FVector>                             StrToVec;                                                   // 0x00A0   (0x0050)  
	TMap<FString, FStructSerializerBuiltinTestStruct>  StrToStruct;                                                // 0x00F0   (0x0050)  
};

/// Struct /Script/Serialization.StructSerializerArrayTestStruct
/// Size: 0x0060 (0x000000 - 0x000060)
struct FStructSerializerArrayTestStruct
{ 
	TArray<int32_t>                                    Int32Array;                                                 // 0x0000   (0x0010)  
	TArray<char>                                       ByteArray;                                                  // 0x0010   (0x0010)  
	int32_t                                            StaticSingleElement;                                        // 0x0020   (0x0004)  
	int32_t                                            StaticInt32Array;                                           // 0x0024   (0x000C)  
	float                                              StaticFloatArray;                                           // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FVector>                                    VectorArray;                                                // 0x0040   (0x0010)  
	TArray<FStructSerializerBuiltinTestStruct>         StructArray;                                                // 0x0050   (0x0010)  
};

/// Struct /Script/Serialization.StructSerializerObjectTestStruct
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FStructSerializerObjectTestStruct
{ 
	UClass*                                            Class;                                                      // 0x0000   (0x0008)  
	UClass*                                            Subclass;                                                   // 0x0008   (0x0008)  
	TWeakObjectPtr<UClass*>                            SoftClass;                                                  // 0x0010   (0x0028)  
	UObject*                                           Object;                                                     // 0x0038   (0x0008)  
	TWeakObjectPtr<UMetaData*>                         WeakObject;                                                 // 0x0040   (0x0008)  
	TWeakObjectPtr<UMetaData*>                         SoftObject;                                                 // 0x0048   (0x0028)  
	FSoftClassPath                                     ClassPath;                                                  // 0x0070   (0x0018)  
	FSoftObjectPath                                    ObjectPath;                                                 // 0x0088   (0x0018)  
};

/// Struct /Script/Serialization.StructSerializerBooleanTestStruct
/// Size: 0x0003 (0x000000 - 0x000003)
struct FStructSerializerBooleanTestStruct
{ 
	bool                                               BoolFalse;                                                  // 0x0000   (0x0001)  
	bool                                               BoolTrue;                                                   // 0x0001   (0x0001)  
	bool                                               Bitfield0;                                                  // 0x0002:0 (0x0001)  
	bool                                               Bitfield1;                                                  // 0x0002:1 (0x0001)  
	bool                                               Bitfield2Set;                                               // 0x0002:2 (0x0001)  
	bool                                               Bitfield3;                                                  // 0x0002:3 (0x0001)  
	bool                                               Bitfield4Set;                                               // 0x0002:4 (0x0001)  
	bool                                               Bitfield5Set;                                               // 0x0002:5 (0x0001)  
	bool                                               Bitfield6;                                                  // 0x0002:6 (0x0001)  
	bool                                               Bitfield7Set;                                               // 0x0002:7 (0x0001)  
};

/// Struct /Script/Serialization.StructSerializerNumericTestStruct
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStructSerializerNumericTestStruct
{ 
	int8_t                                             Int8;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0001   (0x0001)  MISSED
	int16_t                                            Int16;                                                      // 0x0002   (0x0002)  
	int32_t                                            Int32;                                                      // 0x0004   (0x0004)  
	int64_t                                            Int64;                                                      // 0x0008   (0x0008)  
	char                                               UInt8;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0011   (0x0001)  MISSED
	uint16_t                                           UInt16;                                                     // 0x0012   (0x0002)  
	uint32_t                                           UInt32;                                                     // 0x0014   (0x0004)  
	uint64_t                                           UInt64;                                                     // 0x0018   (0x0008)  
	float                                              Float;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	double                                             Double;                                                     // 0x0028   (0x0008)  
};

/// Struct /Script/Serialization.StructSerializerByteArray
/// Size: 0x0038 (0x000000 - 0x000038)
struct FStructSerializerByteArray
{ 
	int32_t                                            Dummy1;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<char>                                       ByteArray;                                                  // 0x0008   (0x0010)  
	int32_t                                            Dummy2;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<int8_t>                                     Int8Array;                                                  // 0x0020   (0x0010)  
	int32_t                                            Dummy3;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

