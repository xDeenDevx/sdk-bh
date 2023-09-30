/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MagicLeapARPinInfoActor.

/// Class /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
/// Size: 0x008C (0x000240 - 0x0002CC)
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0240   (0x0008)  
	UStaticMeshComponent*                              Right;                                                      // 0x0248   (0x0008)  
	UStaticMeshComponent*                              Forward;                                                    // 0x0250   (0x0008)  
	UStaticMeshComponent*                              Up;                                                         // 0x0258   (0x0008)  
	USphereComponent*                                  ValidRadiusVisualizer;                                      // 0x0260   (0x0008)  
	USceneComponent*                                   AxisRoot;                                                   // 0x0268   (0x0008)  
	USceneComponent*                                   VisualizerRoot;                                             // 0x0270   (0x0008)  
	UTextRenderComponent*                              TypeValue;                                                  // 0x0278   (0x0008)  
	UTextRenderComponent*                              TransErrValue;                                              // 0x0280   (0x0008)  
	UTextRenderComponent*                              RotErrValue;                                                // 0x0288   (0x0008)  
	UTextRenderComponent*                              ConfidenceValue;                                            // 0x0290   (0x0008)  
	UTextRenderComponent*                              TransErrLabel;                                              // 0x0298   (0x0008)  
	UTextRenderComponent*                              RotErrLabel;                                                // 0x02A0   (0x0008)  
	UTextRenderComponent*                              ConfidenceLabel;                                            // 0x02A8   (0x0008)  
	UTextRenderComponent*                              PinIDValue;                                                 // 0x02B0   (0x0008)  
	USceneComponent*                                   InfoRoot;                                                   // 0x02B8   (0x0008)  
	USceneComponent*                                   Root;                                                       // 0x02C0   (0x0008)  
	float                                              RotationSmoothSpeed;                                        // 0x02C8   (0x0004)  


	/// Functions
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
	void UpdatePinState();                                                                                                   // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x197e4f0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
	void OnUpdateARPinState();                                                                                               // [0x197e4f0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
	void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint);                                                       // [0x197e4f0] Final|HasDefaults    
};

