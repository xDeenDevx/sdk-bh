/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package PropertyPath.

/// Struct /Script/PropertyPath.CachedPropertyPath
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCachedPropertyPath
{ 
	TArray<FPropertyPathSegment>                       Segments;                                                   // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0010   (0x0008)  MISSED
	UFunction*                                         CachedFunction;                                             // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/PropertyPath.PropertyPathSegment
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPropertyPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	UStruct*                                           Struct;                                                     // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0018   (0x0010)  MISSED
};

