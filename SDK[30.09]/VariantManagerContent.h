/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VariantManagerContent.

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0068 (0x000028 - 0x000090)
class ULevelVariantSets : public UObject
{ 
public:
	UBlueprintGeneratedClass*                          DirectorClass;                                              // 0x0028   (0x0008)  
	TArray<UVariantSet*>                               VariantSets;                                                // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0040   (0x0050)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	UVariantSet* GetVariantSetByName(FString VariantSetName);                                                                // [0xdaf2d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                                     // [0xdaf230] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	int32_t GetNumVariantSets();                                                                                             // [0xdaee20] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0018 (0x000228 - 0x000240)
class ALevelVariantSetsActor : public AActor
{ 
public:
	FSoftObjectPath                                    LevelVariantSets;                                           // 0x0228   (0x0018)  


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                                 // [0xdafff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                              // [0xdaff20] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	void SetLevelVariantSets(ULevelVariantSets* InVariantSets);                                                              // [0xdaf770] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                                      // [0xdaed20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0018 (0x000028 - 0x000040)
class ULevelVariantSetsFunctionDirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x0190 (0x000028 - 0x0001B8)
class UPropertyValue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0028   (0x0060)  MISSED
	TArray<Properties>                                 Properties;                                                 // 0x0088   (0x0010)  
	TArray<int32_t>                                    PropertyIndices;                                            // 0x0098   (0x0010)  
	TArray<FCapturedPropSegment>                       CapturedPropSegments;                                       // 0x00A8   (0x0010)  
	FString                                            FullDisplayString;                                          // 0x00B8   (0x0010)  
	FName                                              PropertySetterName;                                         // 0x00C8   (0x0008)  
	TMap<FString, FString>                             PropertySetterParameterDefaults;                            // 0x00D0   (0x0050)  
	bool                                               bHasRecordedData;                                           // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	UClass*                                            LeafPropertyClass;                                          // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0130   (0x0008)  MISSED
	TArray<char>                                       ValueBytes;                                                 // 0x0138   (0x0010)  
	EPropertyValueCategory                             PropCategory;                                               // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6F];                                      // 0x0149   (0x006F)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	bool HasRecordedData();                                                                                                  // [0xdaf3d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	FText GetPropertyTooltip();                                                                                              // [0xdaef60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	FString GetFullDisplayString();                                                                                          // [0xdaece0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueTransform : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueVisibility : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueColor : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueMaterial : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueOption : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueSoftObject : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x0028 (0x000228 - 0x000250)
class ASwitchActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0228   (0x0018)  MISSED
	USceneComponent*                                   SceneComponent;                                             // 0x0240   (0x0008)  
	int32_t                                            LastSelectedOption;                                         // 0x0248   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x024C   (0x0004)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	void SelectOption(int32_t OptionIndex);                                                                                  // [0xdaf430] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	int32_t GetSelectedOption();                                                                                             // [0xdaf000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	TArray<AActor*> GetOptions();                                                                                            // [0xdaee80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0058 (0x000028 - 0x000080)
class UVariant : public UObject
{ 
public:
	TArray<FVariantDependency>                         Dependencies;                                               // 0x0028   (0x0010)  
	FText                                              DisplayText;                                                // 0x0038   (0x0018)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0050   (0x0018)  MISSED
	TArray<UVariantObjectBinding*>                     ObjectBindings;                                             // 0x0068   (0x0010)  
	UTexture2D*                                        Thumbnail;                                                  // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	void SwitchOn();                                                                                                         // [0xdaff00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	void SetThumbnailFromTexture(UTexture2D* NewThumbnail);                                                                  // [0xdafde0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	void SetThumbnailFromFile(FString FilePath);                                                                             // [0xdafc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	void SetThumbnailFromEditorViewport();                                                                                   // [0xb7a5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0xdaf800] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	void SetDisplayText(FText& NewDisplayText);                                                                              // [0xdaf5d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	void SetDependency(int32_t Index, FVariantDependency& Dependency);                                                       // [0xdaf4c0] Final|Native|Public|HasOutParms 
	// Function /Script/VariantManagerContent.Variant.IsActive
	bool IsActive();                                                                                                         // [0xdaf400] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	UTexture2D* GetThumbnail();                                                                                              // [0xdaf030] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetParent
	UVariantSet* GetParent();                                                                                                // [0xdaef00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	int32_t GetNumDependencies();                                                                                            // [0xdaedf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	int32_t GetNumActors();                                                                                                  // [0xdaedc0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	FText GetDisplayText();                                                                                                  // [0xdaeba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	TArray<UVariant*> GetDependents(ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);                     // [0xdaea90] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	FVariantDependency GetDependency(int32_t Index);                                                                         // [0xdae9f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetActor
	AActor* GetActor(int32_t ActorIndex);                                                                                    // [0xdae950] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	void DeleteDependency(int32_t Index);                                                                                    // [0xdae8c0] Final|Native|Public  
	// Function /Script/VariantManagerContent.Variant.AddDependency
	int32_t AddDependency(FVariantDependency& Dependency);                                                                   // [0xdae7f0] Final|Native|Public|HasOutParms 
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0068 (0x000028 - 0x000090)
class UVariantObjectBinding : public UObject
{ 
public:
	FString                                            CachedActorLabel;                                           // 0x0028   (0x0010)  
	FSoftObjectPath                                    ObjectPtr;                                                  // 0x0038   (0x0018)  
	TLazyObjectPtr<UObject*>                           LazyObjectPtr;                                              // 0x0050   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<UPropertyValue*>                            CapturedProperties;                                         // 0x0070   (0x0010)  
	TArray<FFunctionCaller>                            FunctionCallers;                                            // 0x0080   (0x0010)  
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0050 (0x000028 - 0x000078)
class UVariantSet : public UObject
{ 
public:
	FText                                              DisplayText;                                                // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0040   (0x0018)  MISSED
	bool                                               bExpanded;                                                  // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<UVariant*>                                  Variants;                                                   // 0x0060   (0x0010)  
	UTexture2D*                                        Thumbnail;                                                  // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	void SetThumbnailFromTexture(UTexture2D* NewThumbnail);                                                                  // [0xdafe70] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	void SetThumbnailFromFile(FString FilePath);                                                                             // [0xdafcf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	void SetThumbnailFromEditorViewport();                                                                                   // [0xb7a5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0xdafa00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	void SetDisplayText(FText& NewDisplayText);                                                                              // [0xdaf6a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	UVariant* GetVariantByName(FString VariantName);                                                                         // [0xdaf130] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	UVariant* GetVariant(int32_t VariantIndex);                                                                              // [0xdaf090] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	UTexture2D* GetThumbnail();                                                                                              // [0xdaf060] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	ULevelVariantSets* GetParent();                                                                                          // [0xdaef30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	int32_t GetNumVariants();                                                                                                // [0xdaee50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	FText GetDisplayText();                                                                                                  // [0xdaec40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFunctionCaller
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCapturedPropSegment
{ 
	FString                                            PropertyName;                                               // 0x0000   (0x0010)  
	int32_t                                            PropertyIndex;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            ComponentName;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0058 (0x000000 - 0x000058)
struct FVariantDependency
{ 
	TWeakObjectPtr<UVariantSet*>                       VariantSet;                                                 // 0x0000   (0x0028)  
	TWeakObjectPtr<UVariant*>                          Variant;                                                    // 0x0028   (0x0028)  
	bool                                               bEnabled;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x10
enum EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined                                                = 0,
	EPropertyValueCategory__Generic                                                  = 1,
	EPropertyValueCategory__RelativeLocation                                         = 2,
	EPropertyValueCategory__RelativeRotation                                         = 4,
	EPropertyValueCategory__RelativeScale3D                                          = 8,
	EPropertyValueCategory__Visibility                                               = 16,
	EPropertyValueCategory__Material                                                 = 32,
	EPropertyValueCategory__Color                                                    = 64,
	EPropertyValueCategory__Option                                                   = 128,
	EPropertyValueCategory__EPropertyValueCategory_MAX                               = 129
};

