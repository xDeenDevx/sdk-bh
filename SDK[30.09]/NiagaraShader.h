/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NiagaraShader.

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraScriptBase : public UObject
{ 
public:
};

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSimulationStageMetaData
{ 
	FName                                              SimulationStageName;                                        // 0x0000   (0x0008)  
	FName                                              IterationSource;                                            // 0x0008   (0x0008)  
	bool                                               bSpawnOnly;                                                 // 0x0010:0 (0x0001)  
	bool                                               bWritesParticles;                                           // 0x0010:1 (0x0001)  
	bool                                               bPartialParticleUpdate;                                     // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FName>                                      OutputDestinations;                                         // 0x0018   (0x0010)  
	int32_t                                            MinStage;                                                   // 0x0028   (0x0004)  
	int32_t                                            MaxStage;                                                   // 0x002C   (0x0004)  
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraDataInterfaceGPUParamInfo
{ 
	FString                                            DataInterfaceHLSLSymbol;                                    // 0x0000   (0x0010)  
	FString                                            DIClassName;                                                // 0x0010   (0x0010)  
	TArray<FNiagaraDataInterfaceGeneratedFunction>     GeneratedFunctions;                                         // 0x0020   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraDataInterfaceGeneratedFunction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0048 (0x000000 - 0x000048)
struct FNiagaraCompileEvent
{ 
	FNiagaraCompileEventSeverity                       Severity;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0008   (0x0010)  
	FGuid                                              NodeGuid;                                                   // 0x0018   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x0028   (0x0010)  
	TArray<FGuid>                                      StackGuids;                                                 // 0x0038   (0x0010)  
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x04
enum FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log                                                = 0,
	FNiagaraCompileEventSeverity__Warning                                            = 1,
	FNiagaraCompileEventSeverity__Error                                              = 2,
	FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX                   = 3
};

