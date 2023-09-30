/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Slate.

/// Class /Script/Slate.ButtonWidgetStyle
/// Size: 0x0278 (0x000030 - 0x0002A8)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FButtonStyle                                       ButtonStyle;                                                // 0x0030   (0x0278)  
};

/// Class /Script/Slate.CheckBoxWidgetStyle
/// Size: 0x0580 (0x000030 - 0x0005B0)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FCheckBoxStyle                                     CheckBoxStyle;                                              // 0x0030   (0x0580)  
};

/// Class /Script/Slate.ComboBoxWidgetStyle
/// Size: 0x03F0 (0x000030 - 0x000420)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FComboBoxStyle                                     ComboBoxStyle;                                              // 0x0030   (0x03F0)  
};

/// Class /Script/Slate.ComboButtonWidgetStyle
/// Size: 0x03B8 (0x000030 - 0x0003E8)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0030   (0x03B8)  
};

/// Class /Script/Slate.EditableTextBoxWidgetStyle
/// Size: 0x07F8 (0x000030 - 0x000828)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0030   (0x07F8)  
};

/// Class /Script/Slate.EditableTextWidgetStyle
/// Size: 0x0220 (0x000030 - 0x000250)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FEditableTextStyle                                 EditableTextStyle;                                          // 0x0030   (0x0220)  
};

/// Class /Script/Slate.ProgressWidgetStyle
/// Size: 0x01A0 (0x000030 - 0x0001D0)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FProgressBarStyle                                  ProgressBarStyle;                                           // 0x0030   (0x01A0)  
};

/// Class /Script/Slate.ScrollBarWidgetStyle
/// Size: 0x04D0 (0x000030 - 0x000500)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0030   (0x04D0)  
};

/// Class /Script/Slate.ScrollBoxWidgetStyle
/// Size: 0x0228 (0x000030 - 0x000258)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FScrollBoxStyle                                    ScrollBoxStyle;                                             // 0x0030   (0x0228)  
};

/// Class /Script/Slate.SlateSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateSettings : public UObject
{ 
public:
	bool                                               bExplicitCanvasChildZOrder;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/Slate.SpinBoxWidgetStyle
/// Size: 0x02E8 (0x000030 - 0x000318)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FSpinBoxStyle                                      SpinBoxStyle;                                               // 0x0030   (0x02E8)  
};

/// Class /Script/Slate.TextBlockWidgetStyle
/// Size: 0x0270 (0x000030 - 0x0002A0)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FTextBlockStyle                                    TextBlockStyle;                                             // 0x0030   (0x0270)  
};

/// Class /Script/Slate.ToolMenuBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolMenuBase : public UObject
{ 
public:
};

/// Struct /Script/Slate.VirtualKeyboardOptions
/// Size: 0x0001 (0x000000 - 0x000001)
struct FVirtualKeyboardOptions
{ 
	bool                                               bEnableAutocorrect;                                         // 0x0000   (0x0001)  
};

/// Struct /Script/Slate.InputChord
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInputChord
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	bool                                               bShift;                                                     // 0x0018:0 (0x0001)  
	bool                                               bCtrl;                                                      // 0x0018:1 (0x0001)  
	bool                                               bAlt;                                                       // 0x0018:2 (0x0001)  
	bool                                               bCmd;                                                       // 0x0018:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/Slate.Anchors
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAnchors
{ 
	FVector2D                                          Minimum;                                                    // 0x0000   (0x0008)  
	FVector2D                                          Maximum;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/Slate.CustomizedToolMenu
/// Size: 0x01E8 (0x000000 - 0x0001E8)
struct FCustomizedToolMenu
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TMap<FName, FCustomizedToolMenuEntry>              Entries;                                                    // 0x0008   (0x0050)  
	TMap<FName, FCustomizedToolMenuSection>            Sections;                                                   // 0x0058   (0x0050)  
	TMap<FName, FCustomizedToolMenuNameArray>          EntryOrder;                                                 // 0x00A8   (0x0050)  
	TArray<FName>                                      SectionOrder;                                               // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData00_6[0xE0];                                      // 0x0108   (0x00E0)  MISSED
};

/// Struct /Script/Slate.CustomizedToolMenuNameArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCustomizedToolMenuNameArray
{ 
	TArray<FName>                                      Names;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/Slate.CustomizedToolMenuSection
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCustomizedToolMenuSection
{ 
	ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/Slate.CustomizedToolMenuEntry
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCustomizedToolMenuEntry
{ 
	ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)  
};

/// Enum /Script/Slate.ETextJustify
/// Size: 0x04
enum ETextJustify : uint8_t
{
	ETextJustify__Left                                                               = 0,
	ETextJustify__Center                                                             = 1,
	ETextJustify__Right                                                              = 2,
	ETextJustify__ETextJustify_MAX                                                   = 3
};

/// Enum /Script/Slate.ETextFlowDirection
/// Size: 0x04
enum ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto                                                         = 0,
	ETextFlowDirection__LeftToRight                                                  = 1,
	ETextFlowDirection__RightToLeft                                                  = 2,
	ETextFlowDirection__ETextFlowDirection_MAX                                       = 3
};

/// Enum /Script/Slate.EVirtualKeyboardDismissAction
/// Size: 0x04
enum EVirtualKeyboardDismissAction : uint8_t
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss                               = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept                                = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss                               = 2,
	EVirtualKeyboardDismissAction__EVirtualKeyboardDismissAction_MAX                 = 3
};

/// Enum /Script/Slate.EVirtualKeyboardTrigger
/// Size: 0x03
enum EVirtualKeyboardTrigger : uint8_t
{
	EVirtualKeyboardTrigger__OnFocusByPointer                                        = 0,
	EVirtualKeyboardTrigger__OnAllFocusEvents                                        = 1,
	EVirtualKeyboardTrigger__EVirtualKeyboardTrigger_MAX                             = 2
};

/// Enum /Script/Slate.ETextWrappingPolicy
/// Size: 0x03
enum ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping                                             = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping                                   = 1,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX                                     = 2
};

/// Enum /Script/Slate.ETableViewMode
/// Size: 0x04
enum ETableViewMode : uint8_t
{
	ETableViewMode__List                                                             = 0,
	ETableViewMode__Tile                                                             = 1,
	ETableViewMode__Tree                                                             = 2,
	ETableViewMode__ETableViewMode_MAX                                               = 3
};

/// Enum /Script/Slate.ESelectionMode
/// Size: 0x05
enum ESelectionMode : uint8_t
{
	ESelectionMode__None                                                             = 0,
	ESelectionMode__Single                                                           = 1,
	ESelectionMode__SingleToggle                                                     = 2,
	ESelectionMode__Multi                                                            = 3,
	ESelectionMode__ESelectionMode_MAX                                               = 4
};

/// Enum /Script/Slate.EMultiBlockType
/// Size: 0x10
enum EMultiBlockType : uint8_t
{
	EMultiBlockType__None                                                            = 0,
	EMultiBlockType__ButtonRow                                                       = 1,
	EMultiBlockType__EditableText                                                    = 2,
	EMultiBlockType__Heading                                                         = 3,
	EMultiBlockType__MenuEntry                                                       = 4,
	EMultiBlockType__Separator                                                       = 5,
	EMultiBlockType__ToolBarButton                                                   = 6,
	EMultiBlockType__ToolBarComboButton                                              = 7,
	EMultiBlockType__Widget                                                          = 8,
	EMultiBlockType__EMultiBlockType_MAX                                             = 9
};

/// Enum /Script/Slate.EMultiBoxType
/// Size: 0x07
enum EMultiBoxType : uint8_t
{
	EMultiBoxType__MenuBar                                                           = 0,
	EMultiBoxType__ToolBar                                                           = 1,
	EMultiBoxType__VerticalToolBar                                                   = 2,
	EMultiBoxType__UniformToolBar                                                    = 3,
	EMultiBoxType__Menu                                                              = 4,
	EMultiBoxType__ButtonRow                                                         = 5,
	EMultiBoxType__EMultiBoxType_MAX                                                 = 6
};

/// Enum /Script/Slate.EProgressBarFillType
/// Size: 0x06
enum EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight                                                = 0,
	EProgressBarFillType__RightToLeft                                                = 1,
	EProgressBarFillType__FillFromCenter                                             = 2,
	EProgressBarFillType__TopToBottom                                                = 3,
	EProgressBarFillType__BottomToTop                                                = 4,
	EProgressBarFillType__EProgressBarFillType_MAX                                   = 5
};

/// Enum /Script/Slate.EStretch
/// Size: 0x09
enum EStretch : uint8_t
{
	EStretch__None                                                                   = 0,
	EStretch__Fill                                                                   = 1,
	EStretch__ScaleToFit                                                             = 2,
	EStretch__ScaleToFitX                                                            = 3,
	EStretch__ScaleToFitY                                                            = 4,
	EStretch__ScaleToFill                                                            = 5,
	EStretch__ScaleBySafeZone                                                        = 6,
	EStretch__UserSpecified                                                          = 7,
	EStretch__EStretch_MAX                                                           = 8
};

/// Enum /Script/Slate.EStretchDirection
/// Size: 0x04
enum EStretchDirection : uint8_t
{
	EStretchDirection__Both                                                          = 0,
	EStretchDirection__DownOnly                                                      = 1,
	EStretchDirection__UpOnly                                                        = 2,
	EStretchDirection__EStretchDirection_MAX                                         = 3
};

/// Enum /Script/Slate.EScrollWhenFocusChanges
/// Size: 0x04
enum EScrollWhenFocusChanges : uint8_t
{
	EScrollWhenFocusChanges__NoScroll                                                = 0,
	EScrollWhenFocusChanges__InstantScroll                                           = 1,
	EScrollWhenFocusChanges__AnimatedScroll                                          = 2,
	EScrollWhenFocusChanges__EScrollWhenFocusChanges_MAX                             = 3
};

/// Enum /Script/Slate.EDescendantScrollDestination
/// Size: 0x04
enum EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView                                           = 0,
	EDescendantScrollDestination__TopOrLeft                                          = 1,
	EDescendantScrollDestination__Center                                             = 2,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX                   = 3
};

/// Enum /Script/Slate.EListItemAlignment
/// Size: 0x08
enum EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed                                            = 0,
	EListItemAlignment__EvenlySize                                                   = 1,
	EListItemAlignment__EvenlyWide                                                   = 2,
	EListItemAlignment__LeftAligned                                                  = 3,
	EListItemAlignment__RightAligned                                                 = 4,
	EListItemAlignment__CenterAligned                                                = 5,
	EListItemAlignment__Fill                                                         = 6,
	EListItemAlignment__EListItemAlignment_MAX                                       = 7
};

/// Enum /Script/Slate.ETextTransformPolicy
/// Size: 0x04
enum ETextTransformPolicy : uint8_t
{
	ETextTransformPolicy__None                                                       = 0,
	ETextTransformPolicy__ToLower                                                    = 1,
	ETextTransformPolicy__ToUpper                                                    = 2,
	ETextTransformPolicy__ETextTransformPolicy_MAX                                   = 3
};

/// Enum /Script/Slate.ECustomizedToolMenuVisibility
/// Size: 0x04
enum ECustomizedToolMenuVisibility : uint8_t
{
	ECustomizedToolMenuVisibility__None                                              = 0,
	ECustomizedToolMenuVisibility__Visible                                           = 1,
	ECustomizedToolMenuVisibility__Hidden                                            = 2,
	ECustomizedToolMenuVisibility__ECustomizedToolMenuVisibility_MAX                 = 3
};

/// Enum /Script/Slate.EMultipleKeyBindingIndex
/// Size: 0x04
enum EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary                                                = 0,
	EMultipleKeyBindingIndex__Secondary                                              = 1,
	EMultipleKeyBindingIndex__NumChords                                              = 2,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX                           = 3
};

/// Enum /Script/Slate.EUserInterfaceActionType
/// Size: 0x07
enum EUserInterfaceActionType : uint8_t
{
	EUserInterfaceActionType__None                                                   = 0,
	EUserInterfaceActionType__Button                                                 = 1,
	EUserInterfaceActionType__ToggleButton                                           = 2,
	EUserInterfaceActionType__RadioButton                                            = 3,
	EUserInterfaceActionType__Check                                                  = 4,
	EUserInterfaceActionType__CollapsedButton                                        = 5,
	EUserInterfaceActionType__EUserInterfaceActionType_MAX                           = 6
};

