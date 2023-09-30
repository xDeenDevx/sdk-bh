/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VFX.

/// Class /Game/VFX/Weather/DA_WeatherScenario.DA_WeatherScenario_C
/// Size: 0x014C (0x000040 - 0x00018C)
class UDA_WeatherScenario_C : public UTigerWeatherScenarioData
{ 
public:
	float                                              WindStrength;                                               // 0x0040   (0x0004)  
	float                                              WindSpeed;                                                  // 0x0044   (0x0004)  
	float                                              RainRate;                                                   // 0x0048   (0x0004)  
	float                                              PuddlesAmount;                                              // 0x004C   (0x0004)  
	float                                              PuddlesRingsIntensity;                                      // 0x0050   (0x0004)  
	float                                              PuddlesWindTiling;                                          // 0x0054   (0x0004)  
	float                                              AISightModifier;                                            // 0x0058   (0x0004)  
	float                                              RainAudioMin;                                               // 0x005C   (0x0004)  
	float                                              ThunderAudioMin;                                            // 0x0060   (0x0004)  
	float                                              WindAudioMin;                                               // 0x0064   (0x0004)  
	float                                              RainAudioMax;                                               // 0x0068   (0x0004)  
	float                                              ThunderAudioMax;                                            // 0x006C   (0x0004)  
	float                                              WindAudioMax;                                               // 0x0070   (0x0004)  
	EFogVariations                                     ExponensialHeightFog;                                       // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	float                                              SnowfallRate;                                               // 0x0078   (0x0004)  
	float                                              WetnessAmount;                                              // 0x007C   (0x0004)  
	float                                              MovementStrength;                                           // 0x0080   (0x0004)  
	float                                              Speed;                                                      // 0x0084   (0x0004)  
	float                                              NoiseMultiplier;                                            // 0x0088   (0x0004)  
	bool                                               EnableLightning;                                            // 0x008C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	FPostProcessOverrides                              Global_Post_Process_Settings;                               // 0x0090   (0x0058)  
	FSkyTextures                                       SkyCubemapTextures;                                         // 0x00E8   (0x0078)  
	TWeakObjectPtr<UTextureCube*>                      LightningMask;                                              // 0x0160   (0x0028)  
	float                                              AuroraIntensity;                                            // 0x0188   (0x0004)  
};

/// Class /Game/VFX/Weather/WeatherScenarios/DA_WeatherScenarioNoRain.DA_WeatherScenarioNoRain_C
/// Size: 0x0000 (0x00018C - 0x00018C)
class UDA_WeatherScenarioNoRain_C : public UDA_WeatherScenario_C
{ 
public:
};

/// Class /Game/VFX/Weather/WeatherScenarios/DA_WeatherScenarioLightRainLightFog.DA_WeatherScenarioLightRainLightFog_C
/// Size: 0x0000 (0x00018C - 0x00018C)
class UDA_WeatherScenarioLightRainLightFog_C : public UDA_WeatherScenario_C
{ 
public:
};

/// Class /Game/VFX/Weather/WeatherScenarios/DA_WeatherScenarioHeavyRain.DA_WeatherScenarioHeavyRain_C
/// Size: 0x0000 (0x00018C - 0x00018C)
class UDA_WeatherScenarioHeavyRain_C : public UDA_WeatherScenario_C
{ 
public:
};

/// Class /Game/VFX/Weather/WeatherScenarios/DA_WeatherScenarioLightRainHeavyFog.DA_WeatherScenarioLightRainHeavyFog_C
/// Size: 0x0000 (0x00018C - 0x00018C)
class UDA_WeatherScenarioLightRainHeavyFog_C : public UDA_WeatherScenario_C
{ 
public:
};

/// Class /Game/VFX/Weather/WeatherScenarios/DA_WeatherScenarioLightning.DA_WeatherScenarioLightning_C
/// Size: 0x0000 (0x00018C - 0x00018C)
class UDA_WeatherScenarioLightning_C : public UDA_WeatherScenario_C
{ 
public:
};

/// Class /Game/VFX/Weather/WeatherScenarios/DA_WeatherScenarioLightSnow.DA_WeatherScenarioLightSnow_C
/// Size: 0x0000 (0x00018C - 0x00018C)
class UDA_WeatherScenarioLightSnow_C : public UDA_WeatherScenario_C
{ 
public:
};

/// Class /Game/VFX/Weather/WeatherScenarios/DA_WeatherScenarioRedSky.DA_WeatherScenarioRedSky_C
/// Size: 0x0000 (0x00018C - 0x00018C)
class UDA_WeatherScenarioRedSky_C : public UDA_WeatherScenario_C
{ 
public:
};

/// Class /Game/VFX/Weather/WeatherScenarios/DA_WeatherScenarioYellowSky.DA_WeatherScenarioYellowSky_C
/// Size: 0x0000 (0x00018C - 0x00018C)
class UDA_WeatherScenarioYellowSky_C : public UDA_WeatherScenario_C
{ 
public:
};

/// Class /Game/VFX/Weather/WeatherScenarios/DA_WeatherScenarioStormyVentrueSky.DA_WeatherScenarioStormyVentrueSky_C
/// Size: 0x0000 (0x00018C - 0x00018C)
class UDA_WeatherScenarioStormyVentrueSky_C : public UDA_WeatherScenario_C
{ 
public:
};

/// Class /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C
/// Size: 0x0038 (0x000228 - 0x000260)
class ATBP_VFX_BloodDecal_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	UStaticMeshComponent*                              BloodDecalMesh;                                             // 0x0230   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0238   (0x0008)  
	float                                              FadeInTimeline_AlphaScaleTrack_588AF71A4B6DB400A9724382318A5E98; // 0x0240   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    FadeInTimeline__Direction_588AF71A4B6DB400A9724382318A5E98; // 0x0244   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0245   (0x0003)  MISSED
	UTimelineComponent*                                FadeInTimeline;                                             // 0x0248   (0x0008)  
	float                                              FadeOutTimeline_AlphaScaleTrack_FADD48494D9CA4FF7946218963114C70; // 0x0250   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    FadeOutTimeline__Direction_FADD48494D9CA4FF7946218963114C70; // 0x0254   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0255   (0x0003)  MISSED
	UTimelineComponent*                                FadeOutTimeline;                                            // 0x0258   (0x0008)  


	/// Functions
	// Function /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.FadeOutTimeline__FinishedFunc
	void FadeOutTimeline__FinishedFunc();                                                                                    // [0x197e4f0] BlueprintEvent       
	// Function /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.FadeOutTimeline__UpdateFunc
	void FadeOutTimeline__UpdateFunc();                                                                                      // [0x197e4f0] BlueprintEvent       
	// Function /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.FadeInTimeline__FinishedFunc
	void FadeInTimeline__FinishedFunc();                                                                                     // [0x197e4f0] BlueprintEvent       
	// Function /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.FadeInTimeline__UpdateFunc
	void FadeInTimeline__UpdateFunc();                                                                                       // [0x197e4f0] BlueprintEvent       
	// Function /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.BeginFadeOut
	void BeginFadeOut();                                                                                                     // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.ExecuteUbergraph_TBP_VFX_BloodDecal
	void ExecuteUbergraph_TBP_VFX_BloodDecal(int32_t EntryPoint);                                                            // [0x197e4f0] Final|HasDefaults    
};

/// Class /Game/VFX/Explosions/TBP_VFX_FakeVolume.TBP_VFX_FakeVolume_C
/// Size: 0x0018 (0x000228 - 0x000240)
class ATBP_VFX_FakeVolume_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x0230   (0x0008)  
	float                                              Duration;                                                   // 0x0238   (0x0004)  
	float                                              Scale;                                                      // 0x023C   (0x0004)  


	/// Functions
	// Function /Game/VFX/Explosions/TBP_VFX_FakeVolume.TBP_VFX_FakeVolume_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Game/VFX/Explosions/TBP_VFX_FakeVolume.TBP_VFX_FakeVolume_C.ExecuteUbergraph_TBP_VFX_FakeVolume
	void ExecuteUbergraph_TBP_VFX_FakeVolume(int32_t EntryPoint);                                                            // [0x197e4f0] Final                
};

/// Class /Game/VFX/Diablerize/TBP_AshPile.TBP_AshPile_C
/// Size: 0x0038 (0x000228 - 0x000260)
class ATBP_AshPile_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	UParticleSystemComponent*                          PS_Diablerize_AshPile_01;                                   // 0x0230   (0x0008)  
	UStaticMeshComponent*                              SM_DiablerizeEdge;                                          // 0x0238   (0x0008)  
	UStaticMeshComponent*                              SM_DiablerizePile;                                          // 0x0240   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0248   (0x0008)  
	float                                              Timeline_AshPileScaleIn_Opacity_FE7CA55D4183ECAAE6D66983A5F96DB1; // 0x0250   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_AshPileScaleIn__Direction_FE7CA55D4183ECAAE6D66983A5F96DB1; // 0x0254   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0255   (0x0003)  MISSED
	UTimelineComponent*                                Timeline_AshPileScaleIn;                                    // 0x0258   (0x0008)  


	/// Functions
	// Function /Game/VFX/Diablerize/TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__FinishedFunc
	void Timeline_AshPileScaleIn__FinishedFunc();                                                                            // [0x197e4f0] BlueprintEvent       
	// Function /Game/VFX/Diablerize/TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__UpdateFunc
	void Timeline_AshPileScaleIn__UpdateFunc();                                                                              // [0x197e4f0] BlueprintEvent       
	// Function /Game/VFX/Diablerize/TBP_AshPile.TBP_AshPile_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Game/VFX/Diablerize/TBP_AshPile.TBP_AshPile_C.ExecuteUbergraph_TBP_AshPile
	void ExecuteUbergraph_TBP_AshPile(int32_t EntryPoint);                                                                   // [0x197e4f0] Final                
};

/// Class /Game/VFX/Power/GroundSlam/TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C
/// Size: 0x0018 (0x000228 - 0x000240)
class ATBP_Vfx_GroundSlam_Marker_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	UStaticMeshComponent*                              Marker;                                                     // 0x0230   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/VFX/Power/GroundSlam/TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C.ToggleUIVisibility
	void ToggleUIVisibility();                                                                                               // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/Power/GroundSlam/TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C.ExecuteUbergraph_TBP_Vfx_GroundSlam_Marker
	void ExecuteUbergraph_TBP_Vfx_GroundSlam_Marker(int32_t EntryPoint);                                                     // [0x197e4f0] Final                
};

/// Class /Game/VFX/Power/GroundSlam/TBP_VFX_GroundSlam_Impact.TBP_VFX_GroundSlam_Impact_C
/// Size: 0x0010 (0x000228 - 0x000238)
class ATBP_VFX_GroundSlam_Impact_C : public AActor
{ 
public:
	UParticleSystemComponent*                          Impact_Particle;                                            // 0x0228   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0230   (0x0008)  
};

/// Class /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C
/// Size: 0x0030 (0x000228 - 0x000258)
class ATBP_VFX_BloodPuddle_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x0230   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0238   (0x0008)  
	float                                              Timeline_0_NewTrack_2_6AA50CA342AD366CED304ABD16EA7169;     // 0x0240   (0x0004)  
	float                                              Timeline_0_NewTrack_1_6AA50CA342AD366CED304ABD16EA7169;     // 0x0244   (0x0004)  
	float                                              Timeline_0_NewTrack_0_6AA50CA342AD366CED304ABD16EA7169;     // 0x0248   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6AA50CA342AD366CED304ABD16EA7169;     // 0x024C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x024D   (0x0003)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x0250   (0x0008)  


	/// Functions
	// Function /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.Timeline_0__FinishedFunc
	void Timeline_0__FinishedFunc();                                                                                         // [0x197e4f0] BlueprintEvent       
	// Function /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.Timeline_0__UpdateFunc
	void Timeline_0__UpdateFunc();                                                                                           // [0x197e4f0] BlueprintEvent       
	// Function /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Game/VFX/Combat/Impacts/Impact_World/Impact_Flesh/TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.ExecuteUbergraph_TBP_VFX_BloodPuddle
	void ExecuteUbergraph_TBP_VFX_BloodPuddle(int32_t EntryPoint);                                                           // [0x197e4f0] Final                
};

/// Class /Game/VFX/EnvironmentalEffects/Manhole/VFX_BP_ManholeSmoke.VFX_BP_ManholeSmoke_C
/// Size: 0x0025 (0x000280 - 0x0002A5)
class AVFX_BP_ManholeSmoke_C : public ATigerActivatedObject
{ 
public:
	UNiagaraComponent*                                 WallSmoke;                                                  // 0x0280   (0x0008)  
	bool                                               Smoke_Always_On;                                            // 0x0288   (0x0001)  
	bool                                               Smoke_random_on_off;                                        // 0x0289   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x028A   (0x0002)  MISSED
	float                                              SmokeAlphaOverride;                                         // 0x028C   (0x0004)  
	FLinearColor                                       SmokeColor;                                                 // 0x0290   (0x0010)  
	float                                              Smoke_Scale;                                                // 0x02A0   (0x0004)  
	bool                                               HoleMaskOn;                                                 // 0x02A4   (0x0001)  


	/// Functions
	// Function /Game/VFX/EnvironmentalEffects/Manhole/VFX_BP_ManholeSmoke.VFX_BP_ManholeSmoke_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x197e4f0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/VFX/EnvironmentalEffects/Fog/BP_Env_AreaFog.BP_Env_AreaFog_C
/// Size: 0x0030 (0x000228 - 0x000258)
class ABP_Env_AreaFog_C : public AActor
{ 
public:
	UParticleSystemComponent*                          ParticleSystem;                                             // 0x0228   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0230   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0238   (0x0010)  
	float                                              Alpha;                                                      // 0x0248   (0x0004)  
	float                                              SpawnHight;                                                 // 0x024C   (0x0004)  
	float                                              SpawnArea;                                                  // 0x0250   (0x0004)  
	float                                              Particle_Size;                                              // 0x0254   (0x0004)  
};

