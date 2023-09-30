/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EnvironmentArt.

/// Class /Game/EnvironmentArt/Buildings/Modular/Industrial_01/BP_G_Industrial_1W_01.BP_G_Industrial_1W_01_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UBP_G_Industrial_1W_01_C : public UTigerBuildingWallPreset
{ 
public:
};

/// Class /Game/EnvironmentArt/Blueprints/TBP_BuildingWallPresetTester.TBP_BuildingWallPresetTester_C
/// Size: 0x0010 (0x000230 - 0x000240)
class ATBP_BuildingWallPresetTester_C : public ATigerBuildingWallPreviewer
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0230   (0x0008)  
	int32_t                                            SegmentsHorizontal;                                         // 0x0238   (0x0004)  
	int32_t                                            SegmentsVertical;                                           // 0x023C   (0x0004)  


	/// Functions
	// Function /Game/EnvironmentArt/Blueprints/TBP_BuildingWallPresetTester.TBP_BuildingWallPresetTester_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x197e4f0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/EnvironmentArt/Lights/Shared/BP_Lamp_Master.BP_Lamp_Master_C
/// Size: 0x00D2 (0x000240 - 0x000312)
class ABP_Lamp_Master_C : public ATigerRebuildableActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0240   (0x0008)  
	TArray<ULightComponent*>                           Lights;                                                     // 0x0248   (0x0010)  
	UClass*                                            ColorSet;                                                   // 0x0258   (0x0008)  
	bool                                               Enabled;                                                    // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              Intensity;                                                  // 0x0264   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x0268   (0x0004)  
	float                                              PointLightIntensityMultiplier;                              // 0x026C   (0x0004)  
	float                                              PointLightRadiusMultiplier;                                 // 0x0270   (0x0004)  
	float                                              SpotLightIntensityMultiplier;                               // 0x0274   (0x0004)  
	float                                              SpotLightRadiusMultiplier;                                  // 0x0278   (0x0004)  
	FLinearColor                                       LightColorOverride;                                         // 0x027C   (0x0010)  
	int32_t                                            LightColorSelector;                                         // 0x028C   (0x0004)  
	bool                                               CastShadow;                                                 // 0x0290   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0291   (0x0003)  MISSED
	float                                              OuterConeAngle;                                             // 0x0294   (0x0004)  
	FFloatRange                                        IntensityClamp;                                             // 0x0298   (0x0010)  
	FFloatRange                                        RadiusClamp;                                                // 0x02A8   (0x0010)  
	FFloatRange                                        OuterConeAngleClamp;                                        // 0x02B8   (0x0010)  
	float                                              InnerConeAngleMutiplier;                                    // 0x02C8   (0x0004)  
	float                                              VolumetricScatteringIntensity;                              // 0x02CC   (0x0004)  
	UTextureLightProfile*                              IESOverride;                                                // 0x02D0   (0x0008)  
	int32_t                                            IES_Selector;                                               // 0x02D8   (0x0004)  
	FFloatRange                                        VolumetricIntensityClamp;                                   // 0x02DC   (0x0010)  
	float                                              EmissiveMultiplier;                                         // 0x02EC   (0x0004)  
	FFloatRange                                        EmissiveClamp;                                              // 0x02F0   (0x0010)  
	TArray<ULightComponent*>                           SavedLights;                                                // 0x0300   (0x0010)  
	bool                                               IES;                                                        // 0x0310   (0x0001)  
	bool                                               LightFunction;                                              // 0x0311   (0x0001)  


	/// Functions
	// Function /Game/EnvironmentArt/Lights/Shared/BP_Lamp_Master.BP_Lamp_Master_C.LocateSimilairLamps
	void LocateSimilairLamps();                                                                                              // [0x197e4f0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/EnvironmentArt/Lights/Shared/BP_Lamp_Master.BP_Lamp_Master_C.GetIESProfile
	void GetIESProfile(UTextureLightProfile*& IES);                                                                          // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/EnvironmentArt/Lights/Shared/BP_Lamp_Master.BP_Lamp_Master_C.UpdateMesh
	void UpdateMesh();                                                                                                       // [0x197e4f0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/EnvironmentArt/Lights/Shared/BP_Lamp_Master.BP_Lamp_Master_C.ForceRebuildLamp
	void ForceRebuildLamp();                                                                                                 // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/EnvironmentArt/Lights/Shared/BP_Lamp_Master.BP_Lamp_Master_C.GetLightColor
	void GetLightColor(FLinearColor& Color);                                                                                 // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/EnvironmentArt/Lights/Shared/BP_Lamp_Master.BP_Lamp_Master_C.UpdateLights
	void UpdateLights();                                                                                                     // [0x197e4f0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/EnvironmentArt/Lights/Shared/BP_Lamp_Master.BP_Lamp_Master_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x197e4f0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/EnvironmentArt/Lights/Shared/BP_Lamp_Master.BP_Lamp_Master_C.OnRebuild
	void OnRebuild();                                                                                                        // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/EnvironmentArt/Lights/Shared/BP_Lamp_Master.BP_Lamp_Master_C.ExecuteUbergraph_BP_Lamp_Master
	void ExecuteUbergraph_BP_Lamp_Master(int32_t EntryPoint);                                                                // [0x197e4f0] Final                
};

/// Class /Game/EnvironmentArt/BlueprintFunctions/TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UTBFL_SetPrimitiveData_C : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Game/EnvironmentArt/Lights/Shared/ColorSets/BP_Lamp_ColorSetManager.BP_Lamp_ColorSetManager_C
/// Size: 0x0010 (0x000228 - 0x000238)
class ABP_Lamp_ColorSetManager_C : public AActor
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0228   (0x0008)  
	UClass*                                            DefaultLampColorSet;                                        // 0x0230   (0x0008)  
};

/// Class /Game/EnvironmentArt/Lights/Shared/ColorSets/DA_Lamp_ColorSet_Default.DA_Lamp_ColorSet_Default_C
/// Size: 0x0010 (0x000030 - 0x000040)
class UDA_Lamp_ColorSet_Default_C : public UPrimaryDataAsset
{ 
public:
	TArray<FLinearColor>                               LightColors;                                                // 0x0030   (0x0010)  
};

/// Class /Game/EnvironmentArt/Lights/Shared/Light_Data.Light_Data_C
/// Size: 0x0020 (0x000028 - 0x000048)
class ULight_Data_C : public UObject
{ 
public:
	TArray<FLinearColor>                               MasterLightColors;                                          // 0x0028   (0x0010)  
	TArray<UTextureLightProfile*>                      MasterIESProfiles;                                          // 0x0038   (0x0010)  
};

/// Class /Game/EnvironmentArt/Lights/DoNotUse/BP_CandleMultiple_doNotUse.BP_CandleMultiple_doNotUse_C
/// Size: 0x00B0 (0x000228 - 0x0002D8)
class ABP_CandleMultiple_doNotUse_C : public AActor
{ 
public:
	UPointLightComponent*                              FlickeringLight1;                                           // 0x0228   (0x0008)  
	UPointLightComponent*                              PointLight_01;                                              // 0x0230   (0x0008)  
	UStaticMeshComponent*                              SM_VFX_CandleFlame_09;                                      // 0x0238   (0x0008)  
	UStaticMeshComponent*                              SM_VFX_CandleFlame_08;                                      // 0x0240   (0x0008)  
	UStaticMeshComponent*                              SM_VFX_CandleFlame_07;                                      // 0x0248   (0x0008)  
	UStaticMeshComponent*                              SM_MERGED_BP_Candle_01;                                     // 0x0250   (0x0008)  
	UStaticMeshComponent*                              SM_VFX_CandleFlame_06;                                      // 0x0258   (0x0008)  
	UStaticMeshComponent*                              SM_VFX_CandleFlame_05;                                      // 0x0260   (0x0008)  
	UStaticMeshComponent*                              SM_VFX_CandleFlame_04;                                      // 0x0268   (0x0008)  
	UStaticMeshComponent*                              SM_MERGED_BP_Candle_01;                                     // 0x0270   (0x0008)  
	UStaticMeshComponent*                              SM_VFX_CandleFlame_01;                                      // 0x0278   (0x0008)  
	UStaticMeshComponent*                              SM_VFX_CandleFlame_03;                                      // 0x0280   (0x0008)  
	UStaticMeshComponent*                              SM_VFX_CandleFlame_02;                                      // 0x0288   (0x0008)  
	UStaticMeshComponent*                              SM_MERGED_BP_Candle_01;                                     // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	FColor                                             light_color;                                                // 0x02A0   (0x0004)  
	bool                                               Flame_on_off;                                               // 0x02A4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02A5   (0x0003)  MISSED
	int32_t                                            Seed;                                                       // 0x02A8   (0x0004)  
	FRandomStream                                      NewVar;                                                     // 0x02AC   (0x0008)  
	int32_t                                            Amount_of_lights;                                           // 0x02B4   (0x0004)  
	float                                              Attenuation_Radius;                                         // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02BC   (0x0004)  MISSED
	UMaterialInstance*                                 matSwitch;                                                  // 0x02C0   (0x0008)  
	FVector                                            Light_transform;                                            // 0x02C8   (0x000C)  
	float                                              Intensity;                                                  // 0x02D4   (0x0004)  


	/// Functions
	// Function /Game/EnvironmentArt/Lights/DoNotUse/BP_CandleMultiple_doNotUse.BP_CandleMultiple_doNotUse_C.Random from world
	void Random from world(int32_t NewParam, float& Scale1, float& Scale2, float& Rotate1, float& Scale3, float& Rotate2);   // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/EnvironmentArt/Lights/DoNotUse/BP_CandleMultiple_doNotUse.BP_CandleMultiple_doNotUse_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x197e4f0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/EnvironmentArt/Lights/SpotLights/BP_Inset_SpotLight_02.BP_Inset_SpotLight_02_C
/// Size: 0x0016 (0x000312 - 0x000328)
class ABP_Inset_SpotLight_02_C : public ABP_Lamp_Master_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x6];                                       // 0x0312   (0x0006)  MISSED
	UTigerSpotLightComponent*                          TigerSpotLight;                                             // 0x0318   (0x0008)  
	UStaticMeshComponent*                              SM_SmallSpotlight_01;                                       // 0x0320   (0x0008)  
};

/// Class /Game/EnvironmentArt/Underground/Elysium/BP_Brujah_Lantern_02.BP_Brujah_Lantern_02_C
/// Size: 0x0026 (0x000312 - 0x000338)
class ABP_Brujah_Lantern_02_C : public ABP_Lamp_Master_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x6];                                       // 0x0312   (0x0006)  MISSED
	UStaticMeshComponent*                              SM_VFX_CandleFlame_02;                                      // 0x0318   (0x0008)  
	UPointLightComponent*                              FlickeringLight1;                                           // 0x0320   (0x0008)  
	UPointLightComponent*                              PointLight_02;                                              // 0x0328   (0x0008)  
	UStaticMeshComponent*                              SM_Brujah_Lantern_01;                                       // 0x0330   (0x0008)  


	/// Functions
	// Function /Game/EnvironmentArt/Underground/Elysium/BP_Brujah_Lantern_02.BP_Brujah_Lantern_02_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x197e4f0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/EnvironmentArt/Lights/DoNotUse/BP_lantern_01_DoNotUse.BP_lantern_01_DoNotUse_C
/// Size: 0x0040 (0x000228 - 0x000268)
class ABP_lantern_01_DoNotUse_C : public AActor
{ 
public:
	UStaticMeshComponent*                              SM_lantern_01;                                              // 0x0228   (0x0008)  
	UTigerSpotLightComponent*                          TigerSpotLight;                                             // 0x0230   (0x0008)  
	UStaticMeshComponent*                              SM_VFX_CandleFlame_02;                                      // 0x0238   (0x0008)  
	UPointLightComponent*                              PointLight;                                                 // 0x0240   (0x0008)  
	int32_t                                            Select_Mesh;                                                // 0x0248   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x024C   (0x0004)  MISSED
	TArray<UStaticMesh*>                               Mesh;                                                       // 0x0250   (0x0010)  
	bool                                               Lights_on_off;                                              // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              Attenuation_Radius;                                         // 0x0264   (0x0004)  


	/// Functions
	// Function /Game/EnvironmentArt/Lights/DoNotUse/BP_lantern_01_DoNotUse.BP_lantern_01_DoNotUse_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x197e4f0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/EnvironmentArt/Lights/Bar_Lights/BP_Ely_Brazier_01.BP_Ely_Brazier_01_C
/// Size: 0x004E (0x000312 - 0x000360)
class ABP_Ely_Brazier_01_C : public ABP_Lamp_Master_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x6];                                       // 0x0312   (0x0006)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	UTigerSpotLightComponent*                          Spotlight_Bottom_02;                                        // 0x0320   (0x0008)  
	UNiagaraComponent*                                 NS_VFX_ENV_Fire9_NiagaraComponent0;                         // 0x0328   (0x0008)  
	UTigerSpotLightComponent*                          Spotlight_Top;                                              // 0x0330   (0x0008)  
	UAkComponent*                                      Brazier_Burning3_AkAudioComponent0;                         // 0x0338   (0x0008)  
	UTigerSpotLightComponent*                          Spotlight_Bottom_01;                                        // 0x0340   (0x0008)  
	UPointLightComponent*                              Brazier_Fill;                                               // 0x0348   (0x0008)  
	UStaticMeshComponent*                              SM_Ely_Brazier_9_StaticMeshComponent0;                      // 0x0350   (0x0008)  
	USceneComponent*                                   SharedRoot;                                                 // 0x0358   (0x0008)  


	/// Functions
	// Function /Game/EnvironmentArt/Lights/Bar_Lights/BP_Ely_Brazier_01.BP_Ely_Brazier_01_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x197e4f0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/EnvironmentArt/Lights/Bar_Lights/BP_Ely_Brazier_01.BP_Ely_Brazier_01_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Game/EnvironmentArt/Lights/Bar_Lights/BP_Ely_Brazier_01.BP_Ely_Brazier_01_C.ExecuteUbergraph_BP_Ely_Brazier_01
	void ExecuteUbergraph_BP_Ely_Brazier_01(int32_t EntryPoint);                                                             // [0x197e4f0] Final|HasDefaults    
};

