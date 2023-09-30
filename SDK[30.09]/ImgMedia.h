/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ImgMedia.

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UImgMediaSource : public UBaseMediaSource
{ 
public:
	FFrameRate                                         FrameRateOverride;                                          // 0x0088   (0x0008)  
	FString                                            ProxyOverride;                                              // 0x0090   (0x0010)  
	FDirectoryPath                                     SequencePath;                                               // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
	void SetSequencePath(FString Path);                                                                                      // [0xed8f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
	FString GetSequencePath();                                                                                               // [0xed8e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.GetProxies
	void GetProxies(TArray<FString>& OutProxies);                                                                            // [0xed8d70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

