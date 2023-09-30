/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package InputCore.

/// Class /Script/InputCore.InputCoreTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputCoreTypes : public UObject
{ 
public:
};

/// Struct /Script/InputCore.Key
/// Size: 0x0018 (0x000000 - 0x000018)
struct FKey
{ 
	FName                                              KeyName;                                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Enum /Script/InputCore.ETouchIndex
/// Size: 0x13
enum ETouchIndex : uint8_t
{
	ETouchIndex__Touch1                                                              = 0,
	ETouchIndex__Touch2                                                              = 1,
	ETouchIndex__Touch3                                                              = 2,
	ETouchIndex__Touch4                                                              = 3,
	ETouchIndex__Touch5                                                              = 4,
	ETouchIndex__Touch6                                                              = 5,
	ETouchIndex__Touch7                                                              = 6,
	ETouchIndex__Touch8                                                              = 7,
	ETouchIndex__Touch9                                                              = 8,
	ETouchIndex__Touch10                                                             = 9,
	ETouchIndex__CursorPointerIndex                                                  = 10,
	ETouchIndex__MAX_TOUCHES                                                         = 11,
	ETouchIndex__ETouchIndex_MAX                                                     = 12
};

/// Enum /Script/InputCore.EControllerHand
/// Size: 0x19
enum EControllerHand : uint8_t
{
	EControllerHand__Left                                                            = 0,
	EControllerHand__Right                                                           = 1,
	EControllerHand__AnyHand                                                         = 2,
	EControllerHand__Pad                                                             = 3,
	EControllerHand__ExternalCamera                                                  = 4,
	EControllerHand__Gun                                                             = 5,
	EControllerHand__Special                                                         = 6,
	EControllerHand__Special                                                         = 7,
	EControllerHand__Special                                                         = 8,
	EControllerHand__Special                                                         = 9,
	EControllerHand__Special                                                         = 10,
	EControllerHand__Special                                                         = 11,
	EControllerHand__Special                                                         = 12,
	EControllerHand__Special                                                         = 13,
	EControllerHand__Special                                                         = 14,
	EControllerHand__Special                                                         = 15,
	EControllerHand__Special                                                         = 16,
	EControllerHand__ControllerHand_Count                                            = 17,
	EControllerHand__EControllerHand_MAX                                             = 18
};

/// Enum /Script/InputCore.ETouchType
/// Size: 0x08
enum ETouchType : uint8_t
{
	ETouchType__Began                                                                = 0,
	ETouchType__Moved                                                                = 1,
	ETouchType__Stationary                                                           = 2,
	ETouchType__ForceChanged                                                         = 3,
	ETouchType__FirstMove                                                            = 4,
	ETouchType__Ended                                                                = 5,
	ETouchType__NumTypes                                                             = 6,
	ETouchType__ETouchType_MAX                                                       = 7
};

/// Enum /Script/InputCore.EConsoleForGamepadLabels
/// Size: 0x04
enum EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None                                                   = 0,
	EConsoleForGamepadLabels__XBoxOne                                                = 1,
	EConsoleForGamepadLabels__PS4                                                    = 2,
	EConsoleForGamepadLabels__EConsoleForGamepadLabels_MAX                           = 3
};

