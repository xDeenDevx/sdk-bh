/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SlateCore.

/// Class /Script/SlateCore.FontBulkData
/// Size: 0x0050 (0x000028 - 0x000078)
class UFontBulkData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED
};

/// Class /Script/SlateCore.FontFaceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontFaceInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.FontProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontProviderInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.SlateTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateTypes : public UObject
{ 
public:
};

/// Class /Script/SlateCore.SlateWidgetStyleAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleAsset : public UObject
{ 
public:
	USlateWidgetStyleContainerBase*                    CustomStyle;                                                // 0x0028   (0x0008)  
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleContainerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateWidgetStyleContainerInterface : public UInterface
{ 
public:
};

/// Struct /Script/SlateCore.Geometry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGeometry
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/SlateCore.SlateBrush
/// Size: 0x0088 (0x000000 - 0x000088)
struct FSlateBrush
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FVector2D                                          ImageSize;                                                  // 0x0008   (0x0008)  
	FMargin                                            Margin;                                                     // 0x0010   (0x0010)  
	FSlateColor                                        TintColor;                                                  // 0x0020   (0x0028)  
	UObject*                                           ResourceObject;                                             // 0x0048   (0x0008)  
	FName                                              ResourceName;                                               // 0x0050   (0x0008)  
	FBox2D                                             UVRegion;                                                   // 0x0058   (0x0014)  
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                     // 0x006C   (0x0001)  
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                     // 0x006D   (0x0001)  
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                  // 0x006E   (0x0001)  
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                  // 0x006F   (0x0001)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0070   (0x0010)  MISSED
	bool                                               bIsDynamicallyLoaded;                                       // 0x0080:0 (0x0001)  
	bool                                               bHasUObject;                                                // 0x0080:1 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/SlateCore.SlateColor
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSlateColor
{ 
	FLinearColor                                       SpecifiedColor;                                             // 0x0000   (0x0010)  
	TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0011   (0x0017)  MISSED
};

/// Struct /Script/SlateCore.Margin
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMargin
{ 
	float                                              Left;                                                       // 0x0000   (0x0004)  
	float                                              Top;                                                        // 0x0004   (0x0004)  
	float                                              Right;                                                      // 0x0008   (0x0004)  
	float                                              Bottom;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/SlateCore.InputEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/SlateCore.PointerEvent
/// Size: 0x0058 (0x000018 - 0x000070)
struct FPointerEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0018   (0x0058)  MISSED
};

/// Struct /Script/SlateCore.CharacterEvent
/// Size: 0x0008 (0x000018 - 0x000020)
struct FCharacterEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.KeyEvent
/// Size: 0x0020 (0x000018 - 0x000038)
struct FKeyEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0018   (0x0020)  MISSED
};

/// Struct /Script/SlateCore.NavigationEvent
/// Size: 0x0008 (0x000018 - 0x000020)
struct FNavigationEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.AnalogInputEvent
/// Size: 0x0008 (0x000038 - 0x000040)
struct FAnalogInputEvent : FKeyEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.SlateFontInfo
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSlateFontInfo
{ 
	UObject*                                           FontObject;                                                 // 0x0000   (0x0008)  
	UObject*                                           FontMaterial;                                               // 0x0008   (0x0008)  
	FFontOutlineSettings                               OutlineSettings;                                            // 0x0010   (0x0020)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	FName                                              TypefaceFontName;                                           // 0x0040   (0x0008)  
	int32_t                                            Size;                                                       // 0x0048   (0x0004)  
	int32_t                                            LetterSpacing;                                              // 0x004C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.FontOutlineSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFontOutlineSettings
{ 
	int32_t                                            OutlineSize;                                                // 0x0000   (0x0004)  
	bool                                               bSeparateFillAlpha;                                         // 0x0004   (0x0001)  
	bool                                               bApplyOutlineToDropShadows;                                 // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	UObject*                                           OutlineMaterial;                                            // 0x0008   (0x0008)  
	FLinearColor                                       OutlineColor;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/SlateCore.SlateWidgetStyle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.TableRowStyle
/// Size: 0x07C0 (0x000008 - 0x0007C8)
struct FTableRowStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        SelectorFocusedBrush;                                       // 0x0008   (0x0088)  
	FSlateBrush                                        ActiveHoveredBrush;                                         // 0x0090   (0x0088)  
	FSlateBrush                                        ActiveBrush;                                                // 0x0118   (0x0088)  
	FSlateBrush                                        InactiveHoveredBrush;                                       // 0x01A0   (0x0088)  
	FSlateBrush                                        InactiveBrush;                                              // 0x0228   (0x0088)  
	FSlateBrush                                        EvenRowBackgroundHoveredBrush;                              // 0x02B0   (0x0088)  
	FSlateBrush                                        EvenRowBackgroundBrush;                                     // 0x0338   (0x0088)  
	FSlateBrush                                        OddRowBackgroundHoveredBrush;                               // 0x03C0   (0x0088)  
	FSlateBrush                                        OddRowBackgroundBrush;                                      // 0x0448   (0x0088)  
	FSlateColor                                        TextColor;                                                  // 0x04D0   (0x0028)  
	FSlateColor                                        SelectedTextColor;                                          // 0x04F8   (0x0028)  
	FSlateBrush                                        DropIndicator_Above;                                        // 0x0520   (0x0088)  
	FSlateBrush                                        DropIndicator_Onto;                                         // 0x05A8   (0x0088)  
	FSlateBrush                                        DropIndicator_Below;                                        // 0x0630   (0x0088)  
	FSlateBrush                                        ActiveHighlightedBrush;                                     // 0x06B8   (0x0088)  
	FSlateBrush                                        InactiveHighlightedBrush;                                   // 0x0740   (0x0088)  
};

/// Struct /Script/SlateCore.ComboBoxStyle
/// Size: 0x03E8 (0x000008 - 0x0003F0)
struct FComboBoxStyle : FSlateWidgetStyle
{ 
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0008   (0x03B8)  
	FSlateSound                                        PressedSlateSound;                                          // 0x03C0   (0x0018)  
	FSlateSound                                        SelectionChangeSlateSound;                                  // 0x03D8   (0x0018)  
};

/// Struct /Script/SlateCore.SlateSound
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSlateSound
{ 
	UObject*                                           ResourceObject;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/SlateCore.ComboButtonStyle
/// Size: 0x03B0 (0x000008 - 0x0003B8)
struct FComboButtonStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       ButtonStyle;                                                // 0x0008   (0x0278)  
	FSlateBrush                                        DownArrowImage;                                             // 0x0280   (0x0088)  
	FVector2D                                          ShadowOffset;                                               // 0x0308   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0310   (0x0010)  
	FSlateBrush                                        MenuBorderBrush;                                            // 0x0320   (0x0088)  
	FMargin                                            MenuBorderPadding;                                          // 0x03A8   (0x0010)  
};

/// Struct /Script/SlateCore.ButtonStyle
/// Size: 0x0270 (0x000008 - 0x000278)
struct FButtonStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        Normal;                                                     // 0x0008   (0x0088)  
	FSlateBrush                                        Hovered;                                                    // 0x0090   (0x0088)  
	FSlateBrush                                        Pressed;                                                    // 0x0118   (0x0088)  
	FSlateBrush                                        Disabled;                                                   // 0x01A0   (0x0088)  
	FMargin                                            NormalPadding;                                              // 0x0228   (0x0010)  
	FMargin                                            PressedPadding;                                             // 0x0238   (0x0010)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0248   (0x0018)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0260   (0x0018)  
};

/// Struct /Script/SlateCore.EditableTextStyle
/// Size: 0x0218 (0x000008 - 0x000220)
struct FEditableTextStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0060   (0x0028)  
	FSlateBrush                                        BackgroundImageSelected;                                    // 0x0088   (0x0088)  
	FSlateBrush                                        BackgroundImageComposing;                                   // 0x0110   (0x0088)  
	FSlateBrush                                        CaretImage;                                                 // 0x0198   (0x0088)  
};

/// Struct /Script/SlateCore.EditableTextBoxStyle
/// Size: 0x07F0 (0x000008 - 0x0007F8)
struct FEditableTextBoxStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundImageNormal;                                      // 0x0008   (0x0088)  
	FSlateBrush                                        BackgroundImageHovered;                                     // 0x0090   (0x0088)  
	FSlateBrush                                        BackgroundImageFocused;                                     // 0x0118   (0x0088)  
	FSlateBrush                                        BackgroundImageReadOnly;                                    // 0x01A0   (0x0088)  
	FMargin                                            Padding;                                                    // 0x0228   (0x0010)  
	FSlateFontInfo                                     Font;                                                       // 0x0238   (0x0058)  
	FSlateColor                                        ForegroundColor;                                            // 0x0290   (0x0028)  
	FSlateColor                                        BackgroundColor;                                            // 0x02B8   (0x0028)  
	FSlateColor                                        ReadOnlyForegroundColor;                                    // 0x02E0   (0x0028)  
	FMargin                                            HScrollBarPadding;                                          // 0x0308   (0x0010)  
	FMargin                                            VScrollBarPadding;                                          // 0x0318   (0x0010)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0328   (0x04D0)  
};

/// Struct /Script/SlateCore.ScrollBarStyle
/// Size: 0x04C8 (0x000008 - 0x0004D0)
struct FScrollBarStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        HorizontalBackgroundImage;                                  // 0x0008   (0x0088)  
	FSlateBrush                                        VerticalBackgroundImage;                                    // 0x0090   (0x0088)  
	FSlateBrush                                        VerticalTopSlotImage;                                       // 0x0118   (0x0088)  
	FSlateBrush                                        HorizontalTopSlotImage;                                     // 0x01A0   (0x0088)  
	FSlateBrush                                        VerticalBottomSlotImage;                                    // 0x0228   (0x0088)  
	FSlateBrush                                        HorizontalBottomSlotImage;                                  // 0x02B0   (0x0088)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x0338   (0x0088)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x03C0   (0x0088)  
	FSlateBrush                                        DraggedThumbImage;                                          // 0x0448   (0x0088)  
};

/// Struct /Script/SlateCore.TextBlockStyle
/// Size: 0x0268 (0x000008 - 0x000270)
struct FTextBlockStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0060   (0x0028)  
	FVector2D                                          ShadowOffset;                                               // 0x0088   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0090   (0x0010)  
	FSlateColor                                        SelectedBackgroundColor;                                    // 0x00A0   (0x0028)  
	FLinearColor                                       HighlightColor;                                             // 0x00C8   (0x0010)  
	FSlateBrush                                        HighlightShape;                                             // 0x00D8   (0x0088)  
	FSlateBrush                                        StrikeBrush;                                                // 0x0160   (0x0088)  
	FSlateBrush                                        UnderlineBrush;                                             // 0x01E8   (0x0088)  
};

/// Struct /Script/SlateCore.SpinBoxStyle
/// Size: 0x02E0 (0x000008 - 0x0002E8)
struct FSpinBoxStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundBrush;                                            // 0x0008   (0x0088)  
	FSlateBrush                                        HoveredBackgroundBrush;                                     // 0x0090   (0x0088)  
	FSlateBrush                                        ActiveFillBrush;                                            // 0x0118   (0x0088)  
	FSlateBrush                                        InactiveFillBrush;                                          // 0x01A0   (0x0088)  
	FSlateBrush                                        ArrowsImage;                                                // 0x0228   (0x0088)  
	FSlateColor                                        ForegroundColor;                                            // 0x02B0   (0x0028)  
	FMargin                                            TextPadding;                                                // 0x02D8   (0x0010)  
};

/// Struct /Script/SlateCore.FocusEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFocusEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.MotionEvent
/// Size: 0x0030 (0x000018 - 0x000048)
struct FMotionEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/SlateCore.CompositeFont
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCompositeFont
{ 
	FTypeface                                          DefaultTypeface;                                            // 0x0000   (0x0010)  
	FCompositeFallbackFont                             FallbackTypeface;                                           // 0x0010   (0x0018)  
	TArray<FCompositeSubFont>                          SubTypefaces;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/SlateCore.CompositeFallbackFont
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCompositeFallbackFont
{ 
	FTypeface                                          Typeface;                                                   // 0x0000   (0x0010)  
	float                                              ScalingFactor;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.Typeface
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTypeface
{ 
	TArray<FTypefaceEntry>                             Fonts;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/SlateCore.TypefaceEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FTypefaceEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FFontData                                          Font;                                                       // 0x0008   (0x0020)  
};

/// Struct /Script/SlateCore.FontData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFontData
{ 
	FString                                            FontFilename;                                               // 0x0000   (0x0010)  
	EFontHinting                                       Hinting;                                                    // 0x0010   (0x0001)  
	EFontLoadingPolicy                                 LoadingPolicy;                                              // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	int32_t                                            SubFaceIndex;                                               // 0x0014   (0x0004)  
	UObject*                                           FontFaceAsset;                                              // 0x0018   (0x0008)  
};

/// Struct /Script/SlateCore.CompositeSubFont
/// Size: 0x0020 (0x000018 - 0x000038)
struct FCompositeSubFont : FCompositeFallbackFont
{ 
	TArray<FInt32Range>                                CharacterRanges;                                            // 0x0018   (0x0010)  
	FString                                            Cultures;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/SlateCore.CaptureLostEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCaptureLostEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.WindowStyle
/// Size: 0x1058 (0x000008 - 0x001060)
struct FWindowStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       MinimizeButtonStyle;                                        // 0x0008   (0x0278)  
	FButtonStyle                                       MaximizeButtonStyle;                                        // 0x0280   (0x0278)  
	FButtonStyle                                       RestoreButtonStyle;                                         // 0x04F8   (0x0278)  
	FButtonStyle                                       CloseButtonStyle;                                           // 0x0770   (0x0278)  
	FTextBlockStyle                                    TitleTextStyle;                                             // 0x09E8   (0x0270)  
	FSlateBrush                                        ActiveTitleBrush;                                           // 0x0C58   (0x0088)  
	FSlateBrush                                        InactiveTitleBrush;                                         // 0x0CE0   (0x0088)  
	FSlateBrush                                        FlashTitleBrush;                                            // 0x0D68   (0x0088)  
	FSlateColor                                        BackgroundColor;                                            // 0x0DF0   (0x0028)  
	FSlateBrush                                        OutlineBrush;                                               // 0x0E18   (0x0088)  
	FSlateColor                                        OutlineColor;                                               // 0x0EA0   (0x0028)  
	FSlateBrush                                        BorderBrush;                                                // 0x0EC8   (0x0088)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x0F50   (0x0088)  
	FSlateBrush                                        ChildBackgroundBrush;                                       // 0x0FD8   (0x0088)  
};

/// Struct /Script/SlateCore.ScrollBorderStyle
/// Size: 0x0110 (0x000008 - 0x000118)
struct FScrollBorderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        TopShadowBrush;                                             // 0x0008   (0x0088)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x0090   (0x0088)  
};

/// Struct /Script/SlateCore.ScrollBoxStyle
/// Size: 0x0220 (0x000008 - 0x000228)
struct FScrollBoxStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        TopShadowBrush;                                             // 0x0008   (0x0088)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x0090   (0x0088)  
	FSlateBrush                                        LeftShadowBrush;                                            // 0x0118   (0x0088)  
	FSlateBrush                                        RightShadowBrush;                                           // 0x01A0   (0x0088)  
};

/// Struct /Script/SlateCore.DockTabStyle
/// Size: 0x06F8 (0x000008 - 0x000700)
struct FDockTabStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       CloseButtonStyle;                                           // 0x0008   (0x0278)  
	FSlateBrush                                        NormalBrush;                                                // 0x0280   (0x0088)  
	FSlateBrush                                        ActiveBrush;                                                // 0x0308   (0x0088)  
	FSlateBrush                                        ColorOverlayTabBrush;                                       // 0x0390   (0x0088)  
	FSlateBrush                                        ColorOverlayIconBrush;                                      // 0x0418   (0x0088)  
	FSlateBrush                                        ForegroundBrush;                                            // 0x04A0   (0x0088)  
	FSlateBrush                                        HoveredBrush;                                               // 0x0528   (0x0088)  
	FSlateBrush                                        ContentAreaBrush;                                           // 0x05B0   (0x0088)  
	FSlateBrush                                        TabWellBrush;                                               // 0x0638   (0x0088)  
	FMargin                                            TabPadding;                                                 // 0x06C0   (0x0010)  
	float                                              OverlapWidth;                                               // 0x06D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x06D4   (0x0004)  MISSED
	FSlateColor                                        FlashColor;                                                 // 0x06D8   (0x0028)  
};

/// Struct /Script/SlateCore.HeaderRowStyle
/// Size: 0x0B68 (0x000008 - 0x000B70)
struct FHeaderRowStyle : FSlateWidgetStyle
{ 
	FTableColumnHeaderStyle                            ColumnStyle;                                                // 0x0008   (0x04D0)  
	FTableColumnHeaderStyle                            LastColumnStyle;                                            // 0x04D8   (0x04D0)  
	FSplitterStyle                                     ColumnSplitterStyle;                                        // 0x09A8   (0x0118)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x0AC0   (0x0088)  
	FSlateColor                                        ForegroundColor;                                            // 0x0B48   (0x0028)  
};

/// Struct /Script/SlateCore.SplitterStyle
/// Size: 0x0110 (0x000008 - 0x000118)
struct FSplitterStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        HandleNormalBrush;                                          // 0x0008   (0x0088)  
	FSlateBrush                                        HandleHighlightBrush;                                       // 0x0090   (0x0088)  
};

/// Struct /Script/SlateCore.TableColumnHeaderStyle
/// Size: 0x04C8 (0x000008 - 0x0004D0)
struct FTableColumnHeaderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        SortPrimaryAscendingImage;                                  // 0x0008   (0x0088)  
	FSlateBrush                                        SortPrimaryDescendingImage;                                 // 0x0090   (0x0088)  
	FSlateBrush                                        SortSecondaryAscendingImage;                                // 0x0118   (0x0088)  
	FSlateBrush                                        SortSecondaryDescendingImage;                               // 0x01A0   (0x0088)  
	FSlateBrush                                        NormalBrush;                                                // 0x0228   (0x0088)  
	FSlateBrush                                        HoveredBrush;                                               // 0x02B0   (0x0088)  
	FSlateBrush                                        MenuDropdownImage;                                          // 0x0338   (0x0088)  
	FSlateBrush                                        MenuDropdownNormalBorderBrush;                              // 0x03C0   (0x0088)  
	FSlateBrush                                        MenuDropdownHoveredBorderBrush;                             // 0x0448   (0x0088)  
};

/// Struct /Script/SlateCore.InlineTextImageStyle
/// Size: 0x0090 (0x000008 - 0x000098)
struct FInlineTextImageStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        Image;                                                      // 0x0008   (0x0088)  
	int16_t                                            Baseline;                                                   // 0x0090   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0092   (0x0006)  MISSED
};

/// Struct /Script/SlateCore.VolumeControlStyle
/// Size: 0x05E8 (0x000008 - 0x0005F0)
struct FVolumeControlStyle : FSlateWidgetStyle
{ 
	FSliderStyle                                       SliderStyle;                                                // 0x0008   (0x0340)  
	FSlateBrush                                        HighVolumeImage;                                            // 0x0348   (0x0088)  
	FSlateBrush                                        MidVolumeImage;                                             // 0x03D0   (0x0088)  
	FSlateBrush                                        LowVolumeImage;                                             // 0x0458   (0x0088)  
	FSlateBrush                                        NoVolumeImage;                                              // 0x04E0   (0x0088)  
	FSlateBrush                                        MutedImage;                                                 // 0x0568   (0x0088)  
};

/// Struct /Script/SlateCore.SliderStyle
/// Size: 0x0338 (0x000008 - 0x000340)
struct FSliderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        NormalBarImage;                                             // 0x0008   (0x0088)  
	FSlateBrush                                        HoveredBarImage;                                            // 0x0090   (0x0088)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x0118   (0x0088)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x01A0   (0x0088)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x0228   (0x0088)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x02B0   (0x0088)  
	float                                              BarThickness;                                               // 0x0338   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x033C   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.SearchBoxStyle
/// Size: 0x0A88 (0x000008 - 0x000A90)
struct FSearchBoxStyle : FSlateWidgetStyle
{ 
	FEditableTextBoxStyle                              TextBoxStyle;                                               // 0x0008   (0x07F8)  
	FSlateFontInfo                                     ActiveFontInfo;                                             // 0x0800   (0x0058)  
	FSlateBrush                                        UpArrowImage;                                               // 0x0858   (0x0088)  
	FSlateBrush                                        DownArrowImage;                                             // 0x08E0   (0x0088)  
	FSlateBrush                                        GlassImage;                                                 // 0x0968   (0x0088)  
	FSlateBrush                                        ClearImage;                                                 // 0x09F0   (0x0088)  
	FMargin                                            ImagePadding;                                               // 0x0A78   (0x0010)  
	bool                                               bLeftAlignButtons;                                          // 0x0A88   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0A89   (0x0007)  MISSED
};

/// Struct /Script/SlateCore.ExpandableAreaStyle
/// Size: 0x0118 (0x000008 - 0x000120)
struct FExpandableAreaStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        CollapsedImage;                                             // 0x0008   (0x0088)  
	FSlateBrush                                        ExpandedImage;                                              // 0x0090   (0x0088)  
	float                                              RolloutAnimationSeconds;                                    // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.ProgressBarStyle
/// Size: 0x0198 (0x000008 - 0x0001A0)
struct FProgressBarStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundImage;                                            // 0x0008   (0x0088)  
	FSlateBrush                                        FillImage;                                                  // 0x0090   (0x0088)  
	FSlateBrush                                        MarqueeImage;                                               // 0x0118   (0x0088)  
};

/// Struct /Script/SlateCore.InlineEditableTextBlockStyle
/// Size: 0x0A68 (0x000008 - 0x000A70)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{ 
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0008   (0x07F8)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0800   (0x0270)  
};

/// Struct /Script/SlateCore.HyperlinkStyle
/// Size: 0x04F8 (0x000008 - 0x000500)
struct FHyperlinkStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       UnderlineStyle;                                             // 0x0008   (0x0278)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0280   (0x0270)  
	FMargin                                            Padding;                                                    // 0x04F0   (0x0010)  
};

/// Struct /Script/SlateCore.CheckBoxStyle
/// Size: 0x0578 (0x000008 - 0x000580)
struct FCheckBoxStyle : FSlateWidgetStyle
{ 
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSlateBrush                                        UncheckedImage;                                             // 0x0010   (0x0088)  
	FSlateBrush                                        UncheckedHoveredImage;                                      // 0x0098   (0x0088)  
	FSlateBrush                                        UncheckedPressedImage;                                      // 0x0120   (0x0088)  
	FSlateBrush                                        CheckedImage;                                               // 0x01A8   (0x0088)  
	FSlateBrush                                        CheckedHoveredImage;                                        // 0x0230   (0x0088)  
	FSlateBrush                                        CheckedPressedImage;                                        // 0x02B8   (0x0088)  
	FSlateBrush                                        UndeterminedImage;                                          // 0x0340   (0x0088)  
	FSlateBrush                                        UndeterminedHoveredImage;                                   // 0x03C8   (0x0088)  
	FSlateBrush                                        UndeterminedPressedImage;                                   // 0x0450   (0x0088)  
	FMargin                                            Padding;                                                    // 0x04D8   (0x0010)  
	FSlateColor                                        ForegroundColor;                                            // 0x04E8   (0x0028)  
	FSlateColor                                        BorderBackgroundColor;                                      // 0x0510   (0x0028)  
	FSlateSound                                        CheckedSlateSound;                                          // 0x0538   (0x0018)  
	FSlateSound                                        UncheckedSlateSound;                                        // 0x0550   (0x0018)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0568   (0x0018)  
};

/// Enum /Script/SlateCore.EUINavigation
/// Size: 0x09
enum EUINavigation : uint8_t
{
	EUINavigation__Left                                                              = 0,
	EUINavigation__Right                                                             = 1,
	EUINavigation__Up                                                                = 2,
	EUINavigation__Down                                                              = 3,
	EUINavigation__Next                                                              = 4,
	EUINavigation__Previous                                                          = 5,
	EUINavigation__Num                                                               = 6,
	EUINavigation__Invalid                                                           = 7,
	EUINavigation__EUINavigation_MAX                                                 = 8
};

/// Enum /Script/SlateCore.ECheckBoxState
/// Size: 0x04
enum ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked                                                        = 0,
	ECheckBoxState__Checked                                                          = 1,
	ECheckBoxState__Undetermined                                                     = 2,
	ECheckBoxState__ECheckBoxState_MAX                                               = 3
};

/// Enum /Script/SlateCore.EWidgetClipping
/// Size: 0x06
enum EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit                                                         = 0,
	EWidgetClipping__ClipToBounds                                                    = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting                                 = 2,
	EWidgetClipping__ClipToBoundsAlways                                              = 3,
	EWidgetClipping__OnDemand                                                        = 4,
	EWidgetClipping__EWidgetClipping_MAX                                             = 5
};

/// Enum /Script/SlateCore.ESlateBrushImageType
/// Size: 0x04
enum ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage                                                    = 0,
	ESlateBrushImageType__FullColor                                                  = 1,
	ESlateBrushImageType__Linear                                                     = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX                                   = 3
};

/// Enum /Script/SlateCore.ESlateBrushMirrorType
/// Size: 0x05
enum ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror                                                  = 0,
	ESlateBrushMirrorType__Horizontal                                                = 1,
	ESlateBrushMirrorType__Vertical                                                  = 2,
	ESlateBrushMirrorType__Both                                                      = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX                                 = 4
};

/// Enum /Script/SlateCore.ESlateBrushTileType
/// Size: 0x05
enum ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile                                                      = 0,
	ESlateBrushTileType__Horizontal                                                  = 1,
	ESlateBrushTileType__Vertical                                                    = 2,
	ESlateBrushTileType__Both                                                        = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX                                     = 4
};

/// Enum /Script/SlateCore.ESlateBrushDrawType
/// Size: 0x05
enum ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType                                                  = 0,
	ESlateBrushDrawType__Box                                                         = 1,
	ESlateBrushDrawType__Border                                                      = 2,
	ESlateBrushDrawType__Image                                                       = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX                                     = 4
};

/// Enum /Script/SlateCore.ESlateColorStylingMode
/// Size: 0x05
enum ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified                                       = 0,
	ESlateColorStylingMode__UseColor_Specified_Link                                  = 1,
	ESlateColorStylingMode__UseColor_Foreground                                      = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued                              = 3,
	ESlateColorStylingMode__UseColor_MAX                                             = 4
};

/// Enum /Script/SlateCore.EUINavigationRule
/// Size: 0x08
enum EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape                                                        = 0,
	EUINavigationRule__Explicit                                                      = 1,
	EUINavigationRule__Wrap                                                          = 2,
	EUINavigationRule__Stop                                                          = 3,
	EUINavigationRule__Custom                                                        = 4,
	EUINavigationRule__CustomBoundary                                                = 5,
	EUINavigationRule__Invalid                                                       = 6,
	EUINavigationRule__EUINavigationRule_MAX                                         = 7
};

/// Enum /Script/SlateCore.EFlowDirectionPreference
/// Size: 0x05
enum EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit                                                = 0,
	EFlowDirectionPreference__Culture                                                = 1,
	EFlowDirectionPreference__LeftToRight                                            = 2,
	EFlowDirectionPreference__RightToLeft                                            = 3,
	EFlowDirectionPreference__EFlowDirectionPreference_MAX                           = 4
};

/// Enum /Script/SlateCore.EColorVisionDeficiency
/// Size: 0x05
enum EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision                                             = 0,
	EColorVisionDeficiency__Deuteranope                                              = 1,
	EColorVisionDeficiency__Protanope                                                = 2,
	EColorVisionDeficiency__Tritanope                                                = 3,
	EColorVisionDeficiency__EColorVisionDeficiency_MAX                               = 4
};

/// Enum /Script/SlateCore.ESelectInfo
/// Size: 0x05
enum ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress                                                          = 0,
	ESelectInfo__OnNavigation                                                        = 1,
	ESelectInfo__OnMouseClick                                                        = 2,
	ESelectInfo__Direct                                                              = 3,
	ESelectInfo__ESelectInfo_MAX                                                     = 4
};

/// Enum /Script/SlateCore.ETextCommit
/// Size: 0x05
enum ETextCommit : uint8_t
{
	ETextCommit__Default                                                             = 0,
	ETextCommit__OnEnter                                                             = 1,
	ETextCommit__OnUserMovedFocus                                                    = 2,
	ETextCommit__OnCleared                                                           = 3,
	ETextCommit__ETextCommit_MAX                                                     = 4
};

/// Enum /Script/SlateCore.ETextShapingMethod
/// Size: 0x04
enum ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto                                                         = 0,
	ETextShapingMethod__KerningOnly                                                  = 1,
	ETextShapingMethod__FullShaping                                                  = 2,
	ETextShapingMethod__ETextShapingMethod_MAX                                       = 3
};

/// Enum /Script/SlateCore.EMenuPlacement
/// Size: 0x14
enum EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor                                                        = 0,
	MenuPlacement_CenteredBelowAnchor                                                = 1,
	MenuPlacement_BelowRightAnchor                                                   = 2,
	MenuPlacement_ComboBox                                                           = 3,
	MenuPlacement_ComboBoxRight                                                      = 4,
	MenuPlacement_MenuRight                                                          = 5,
	MenuPlacement_AboveAnchor                                                        = 6,
	MenuPlacement_CenteredAboveAnchor                                                = 7,
	MenuPlacement_AboveRightAnchor                                                   = 8,
	MenuPlacement_MenuLeft                                                           = 9,
	MenuPlacement_Center                                                             = 10,
	MenuPlacement_RightLeftCenter                                                    = 11,
	MenuPlacement_MatchBottomLeft                                                    = 12,
	MenuPlacement_MAX                                                                = 13
};

/// Enum /Script/SlateCore.EHorizontalAlignment
/// Size: 0x05
enum EHorizontalAlignment : uint8_t
{
	HAlign_Fill                                                                      = 0,
	HAlign_Left                                                                      = 1,
	HAlign_Center                                                                    = 2,
	HAlign_Right                                                                     = 3,
	HAlign_MAX                                                                       = 4
};

/// Enum /Script/SlateCore.EScrollDirection
/// Size: 0x03
enum EScrollDirection : uint8_t
{
	Scroll_Down                                                                      = 0,
	Scroll_Up                                                                        = 1,
	Scroll_MAX                                                                       = 2
};

/// Enum /Script/SlateCore.EFontLayoutMethod
/// Size: 0x03
enum EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics                                                       = 0,
	EFontLayoutMethod__BoundingBox                                                   = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX                                         = 2
};

/// Enum /Script/SlateCore.EFontLoadingPolicy
/// Size: 0x04
enum EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad                                                     = 0,
	EFontLoadingPolicy__Stream                                                       = 1,
	EFontLoadingPolicy__Inline                                                       = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX                                       = 3
};

/// Enum /Script/SlateCore.EFontHinting
/// Size: 0x06
enum EFontHinting : uint8_t
{
	EFontHinting__Default                                                            = 0,
	EFontHinting__Auto                                                               = 1,
	EFontHinting__AutoLight                                                          = 2,
	EFontHinting__Monochrome                                                         = 3,
	EFontHinting__None                                                               = 4,
	EFontHinting__EFontHinting_MAX                                                   = 5
};

/// Enum /Script/SlateCore.EFocusCause
/// Size: 0x07
enum EFocusCause : uint8_t
{
	EFocusCause__Mouse                                                               = 0,
	EFocusCause__Navigation                                                          = 1,
	EFocusCause__SetDirectly                                                         = 2,
	EFocusCause__Cleared                                                             = 3,
	EFocusCause__OtherWidgetLostFocus                                                = 4,
	EFocusCause__WindowActivate                                                      = 5,
	EFocusCause__EFocusCause_MAX                                                     = 6
};

/// Enum /Script/SlateCore.ESlateDebuggingFocusEvent
/// Size: 0x04
enum ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging                                         = 0,
	ESlateDebuggingFocusEvent__FocusLost                                             = 1,
	ESlateDebuggingFocusEvent__FocusReceived                                         = 2,
	ESlateDebuggingFocusEvent__MAX                                                   = 3
};

/// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod
/// Size: 0x07
enum ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown                                         = 0,
	ESlateDebuggingNavigationMethod__Explicit                                        = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound                             = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound                           = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious                                  = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid                                     = 5,
	ESlateDebuggingNavigationMethod__ESlateDebuggingNavigationMethod_MAX             = 6
};

/// Enum /Script/SlateCore.ESlateDebuggingStateChangeEvent
/// Size: 0x03
enum ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained                              = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost                                = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX             = 2
};

/// Enum /Script/SlateCore.ESlateDebuggingInputEvent
/// Size: 0x27
enum ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove                                             = 0,
	ESlateDebuggingInputEvent__MouseEnter                                            = 1,
	ESlateDebuggingInputEvent__MouseLeave                                            = 2,
	ESlateDebuggingInputEvent__PreviewMouseButtonDown                                = 3,
	ESlateDebuggingInputEvent__MouseButtonDown                                       = 4,
	ESlateDebuggingInputEvent__MouseButtonUp                                         = 5,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick                                = 6,
	ESlateDebuggingInputEvent__MouseWheel                                            = 7,
	ESlateDebuggingInputEvent__TouchStart                                            = 8,
	ESlateDebuggingInputEvent__TouchEnd                                              = 9,
	ESlateDebuggingInputEvent__TouchForceChanged                                     = 10,
	ESlateDebuggingInputEvent__TouchFirstMove                                        = 11,
	ESlateDebuggingInputEvent__TouchMoved                                            = 12,
	ESlateDebuggingInputEvent__DragDetected                                          = 13,
	ESlateDebuggingInputEvent__DragEnter                                             = 14,
	ESlateDebuggingInputEvent__DragLeave                                             = 15,
	ESlateDebuggingInputEvent__DragOver                                              = 16,
	ESlateDebuggingInputEvent__DragDrop                                              = 17,
	ESlateDebuggingInputEvent__DropMessage                                           = 18,
	ESlateDebuggingInputEvent__PreviewKeyDown                                        = 19,
	ESlateDebuggingInputEvent__KeyDown                                               = 20,
	ESlateDebuggingInputEvent__KeyUp                                                 = 21,
	ESlateDebuggingInputEvent__KeyChar                                               = 22,
	ESlateDebuggingInputEvent__AnalogInput                                           = 23,
	ESlateDebuggingInputEvent__TouchGesture                                          = 24,
	ESlateDebuggingInputEvent__MotionDetected                                        = 25,
	ESlateDebuggingInputEvent__MAX                                                   = 26
};

/// Enum /Script/SlateCore.EOrientation
/// Size: 0x03
enum EOrientation : uint8_t
{
	Orient_Horizontal                                                                = 0,
	Orient_Vertical                                                                  = 1,
	Orient_MAX                                                                       = 2
};

/// Enum /Script/SlateCore.EVerticalAlignment
/// Size: 0x05
enum EVerticalAlignment : uint8_t
{
	VAlign_Fill                                                                      = 0,
	VAlign_Top                                                                       = 1,
	VAlign_Center                                                                    = 2,
	VAlign_Bottom                                                                    = 3,
	VAlign_MAX                                                                       = 4
};

/// Enum /Script/SlateCore.ENavigationGenesis
/// Size: 0x04
enum ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard                                                     = 0,
	ENavigationGenesis__Controller                                                   = 1,
	ENavigationGenesis__User                                                         = 2,
	ENavigationGenesis__ENavigationGenesis_MAX                                       = 3
};

/// Enum /Script/SlateCore.ENavigationSource
/// Size: 0x03
enum ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget                                                 = 0,
	ENavigationSource__WidgetUnderCursor                                             = 1,
	ENavigationSource__ENavigationSource_MAX                                         = 2
};

/// Enum /Script/SlateCore.EUINavigationAction
/// Size: 0x05
enum EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept                                                      = 0,
	EUINavigationAction__Back                                                        = 1,
	EUINavigationAction__Num                                                         = 2,
	EUINavigationAction__Invalid                                                     = 3,
	EUINavigationAction__EUINavigationAction_MAX                                     = 4
};

/// Enum /Script/SlateCore.EButtonPressMethod
/// Size: 0x04
enum EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp                                                    = 0,
	EButtonPressMethod__ButtonPress                                                  = 1,
	EButtonPressMethod__ButtonRelease                                                = 2,
	EButtonPressMethod__EButtonPressMethod_MAX                                       = 3
};

/// Enum /Script/SlateCore.EButtonTouchMethod
/// Size: 0x04
enum EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp                                                    = 0,
	EButtonTouchMethod__Down                                                         = 1,
	EButtonTouchMethod__PreciseTap                                                   = 2,
	EButtonTouchMethod__EButtonTouchMethod_MAX                                       = 3
};

/// Enum /Script/SlateCore.EButtonClickMethod
/// Size: 0x05
enum EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp                                                    = 0,
	EButtonClickMethod__MouseDown                                                    = 1,
	EButtonClickMethod__MouseUp                                                      = 2,
	EButtonClickMethod__PreciseClick                                                 = 3,
	EButtonClickMethod__EButtonClickMethod_MAX                                       = 4
};

/// Enum /Script/SlateCore.ESlateCheckBoxType
/// Size: 0x03
enum ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox                                                     = 0,
	ESlateCheckBoxType__ToggleButton                                                 = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX                                       = 2
};

/// Enum /Script/SlateCore.ESlateParentWindowSearchMethod
/// Size: 0x03
enum ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow                                     = 0,
	ESlateParentWindowSearchMethod__MainWindow                                       = 1,
	ESlateParentWindowSearchMethod__ESlateParentWindowSearchMethod_MAX               = 2
};

/// Enum /Script/SlateCore.EConsumeMouseWheel
/// Size: 0x04
enum EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible                                        = 0,
	EConsumeMouseWheel__Always                                                       = 1,
	EConsumeMouseWheel__Never                                                        = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX                                       = 3
};

