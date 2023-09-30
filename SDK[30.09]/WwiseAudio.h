/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package WwiseAudio.

/// Class /Game/WwiseAudio/Blueprints/TBP_GlobalAudioSource.TBP_GlobalAudioSource_C
/// Size: 0x0018 (0x000228 - 0x000240)
class ATBP_GlobalAudioSource_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0230   (0x0008)  
	UAkAudioEvent*                                     SoundEffect;                                                // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/WwiseAudio/Blueprints/TBP_GlobalAudioSource.TBP_GlobalAudioSource_C.PlaySoundEffect
	void PlaySoundEffect();                                                                                                  // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/Blueprints/TBP_GlobalAudioSource.TBP_GlobalAudioSource_C.ExecuteUbergraph_TBP_GlobalAudioSource
	void ExecuteUbergraph_TBP_GlobalAudioSource(int32_t EntryPoint);                                                         // [0x197e4f0] Final|HasDefaults    
};

