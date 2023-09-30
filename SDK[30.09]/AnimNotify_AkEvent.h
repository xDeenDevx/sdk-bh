/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AnimNotify_AkEvent.

/// Class /Wwise/AnimNotify_AkEvent.AnimNotify_AkEvent_C
/// Size: 0x0030 (0x000038 - 0x000068)
class UAnimNotify_AkEvent_C : public UAnimNotify
{ 
public:
	FString                                            Attach_Name;                                                // 0x0038   (0x0010)  
	UAkAudioEvent*                                     Event;                                                      // 0x0048   (0x0008)  
	bool                                               Follow;                                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            EventName;                                                  // 0x0058   (0x0010)  


	/// Functions
	// Function /Wwise/AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
	bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x197e4f0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

