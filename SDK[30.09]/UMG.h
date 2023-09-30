/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UMG.

/// Class /Script/UMG.Visual
/// Size: 0x0000 (0x000028 - 0x000028)
class UVisual : public UObject
{ 
public:
};

/// Class /Script/UMG.Widget
/// Size: 0x00E0 (0x000028 - 0x000108)
class UWidget : public UVisual
{ 
public:
	UPanelSlot*                                        Slot;                                                       // 0x0028   (0x0008)  
	FDelegateProperty                                  bIsEnabledDelegate;                                         // 0x0030   (0x0010)  
	FText                                              ToolTipText;                                                // 0x0040   (0x0018)  
	FDelegateProperty                                  ToolTipTextDelegate;                                        // 0x0058   (0x0010)  
	UWidget*                                           ToolTipWidget;                                              // 0x0068   (0x0008)  
	FDelegateProperty                                  ToolTipWidgetDelegate;                                      // 0x0070   (0x0010)  
	FDelegateProperty                                  VisibilityDelegate;                                         // 0x0080   (0x0010)  
	FWidgetTransform                                   RenderTransform;                                            // 0x0090   (0x001C)  
	FVector2D                                          RenderTransformPivot;                                       // 0x00AC   (0x0008)  
	bool                                               bIsVariable;                                                // 0x00B4:0 (0x0001)  
	bool                                               bCreatedByConstructionScript;                               // 0x00B4:1 (0x0001)  
	bool                                               bIsEnabled;                                                 // 0x00B4:2 (0x0001)  
	bool                                               bOverride_Cursor;                                           // 0x00B4:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x00B5   (0x0003)  MISSED
	USlateAccessibleWidgetData*                        AccessibleWidgetData;                                       // 0x00B8   (0x0008)  
	bool                                               bIsVolatile;                                                // 0x00C0:0 (0x0001)  
	TEnumAsByte<EMouseCursor>                          Cursor;                                                     // 0x00C1   (0x0001)  
	EWidgetClipping                                    Clipping;                                                   // 0x00C2   (0x0001)  
	ESlateVisibility                                   Visibility;                                                 // 0x00C3   (0x0001)  
	float                                              RenderOpacity;                                              // 0x00C4   (0x0004)  
	UWidgetNavigation*                                 Navigation;                                                 // 0x00C8   (0x0008)  
	EFlowDirectionPreference                           FlowDirectionPreference;                                    // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x27];                                      // 0x00D1   (0x0027)  MISSED
	TArray<UPropertyBinding*>                          NativeBindings;                                             // 0x00F8   (0x0010)  


	/// Functions
	// Function /Script/UMG.Widget.SetVisibility
	void SetVisibility(ESlateVisibility InVisibility);                                                                       // [0x29e07e0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetUserFocus
	void SetUserFocus(APlayerController* PlayerController);                                                                  // [0x29e05b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTipText
	void SetToolTipText(FText& InToolTipText);                                                                               // [0x29e04e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTip
	void SetToolTip(UWidget* Widget);                                                                                        // [0x29e0450] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTranslation
	void SetRenderTranslation(FVector2D Translation);                                                                        // [0x29e0340] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformPivot
	void SetRenderTransformPivot(FVector2D Pivot);                                                                           // [0x29e02c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformAngle
	void SetRenderTransformAngle(float Angle);                                                                               // [0x29e0240] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransform
	void SetRenderTransform(FWidgetTransform InTransform);                                                                   // [0x29e0160] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderShear
	void SetRenderShear(FVector2D Shear);                                                                                    // [0x29e00e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderScale
	void SetRenderScale(FVector2D Scale);                                                                                    // [0x29e0060] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderOpacity
	void SetRenderOpacity(float InOpacity);                                                                                  // [0x29dffe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleExplicit
	void SetNavigationRuleExplicit(EUINavigation Direction, UWidget* InWidget);                                              // [0x29dfe80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustomBoundary
	void SetNavigationRuleCustomBoundary(EUINavigation Direction, FDelegateProperty InCustomDelegate);                       // [0x29dfd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustom
	void SetNavigationRuleCustom(EUINavigation Direction, FDelegateProperty InCustomDelegate);                               // [0x29dfca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleBase
	void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);                                             // [0x29dfbd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRule
	void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);                            // [0x29dfac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetKeyboardFocus
	void SetKeyboardFocus();                                                                                                 // [0x29dfaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetIsEnabled
	void SetIsEnabled(bool bInIsEnabled);                                                                                    // [0x29dfa10] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetFocus
	void SetFocus();                                                                                                         // [0x29df970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetCursor
	void SetCursor(TEnumAsByte<EMouseCursor> InCursor);                                                                      // [0x29df8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetClipping
	void SetClipping(EWidgetClipping InClipping);                                                                            // [0x29df870] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetAllNavigationRules
	void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);                                                 // [0x29df7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ResetCursor
	void ResetCursor();                                                                                                      // [0x29df780] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.RemoveFromParent
	void RemoveFromParent();                                                                                                 // [0x29df760] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.OnReply__DelegateSignature
	FEventReply OnReply__DelegateSignature();                                                                                // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.OnPointerEvent__DelegateSignature
	FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent);                          // [0x197e4f0] Public|Delegate|HasOutParms 
	// Function /Script/UMG.Widget.IsVisible
	bool IsVisible();                                                                                                        // [0x29df730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsHovered
	bool IsHovered();                                                                                                        // [0x1557e40] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.InvalidateLayoutAndVolatility
	void InvalidateLayoutAndVolatility();                                                                                    // [0x29df710] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.HasUserFocusedDescendants
	bool HasUserFocusedDescendants(APlayerController* PlayerController);                                                     // [0x29df670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasUserFocus
	bool HasUserFocus(APlayerController* PlayerController);                                                                  // [0x29df5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCaptureByUser
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);                                                     // [0x29df500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCapture
	bool HasMouseCapture();                                                                                                  // [0x29df4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasKeyboardFocus
	bool HasKeyboardFocus();                                                                                                 // [0x29df4a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasFocusedDescendants
	bool HasFocusedDescendants();                                                                                            // [0x29df470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasAnyUserFocus
	bool HasAnyUserFocus();                                                                                                  // [0x29df440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetWidget__DelegateSignature
	UWidget* GetWidget__DelegateSignature();                                                                                 // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.GetVisibility
	ESlateVisibility GetVisibility();                                                                                        // [0x29df410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetTickSpaceGeometry
	FGeometry GetTickSpaceGeometry();                                                                                        // [0x29df2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetText__DelegateSignature
	FText GetText__DelegateSignature();                                                                                      // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateVisibility__DelegateSignature
	ESlateVisibility GetSlateVisibility__DelegateSignature();                                                                // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateColor__DelegateSignature
	FSlateColor GetSlateColor__DelegateSignature();                                                                          // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateBrush__DelegateSignature
	FSlateBrush GetSlateBrush__DelegateSignature();                                                                          // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.GetRenderTransformAngle
	float GetRenderTransformAngle();                                                                                         // [0x29df290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetRenderOpacity
	float GetRenderOpacity();                                                                                                // [0x29df260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetParent
	UPanelWidget* GetParent();                                                                                               // [0x29df230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetPaintSpaceGeometry
	FGeometry GetPaintSpaceGeometry();                                                                                       // [0x29df1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningPlayer
	APlayerController* GetOwningPlayer();                                                                                    // [0x29df1c0] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningLocalPlayer
	ULocalPlayer* GetOwningLocalPlayer();                                                                                    // [0x29df190] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetMouseCursor__DelegateSignature
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();                                                           // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.GetLinearColor__DelegateSignature
	FLinearColor GetLinearColor__DelegateSignature();                                                                        // [0x197e4f0] Public|Delegate|HasDefaults 
	// Function /Script/UMG.Widget.GetIsEnabled
	bool GetIsEnabled();                                                                                                     // [0x29df160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetInt32__DelegateSignature
	int32_t GetInt32__DelegateSignature();                                                                                   // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.GetGameInstance
	UGameInstance* GetGameInstance();                                                                                        // [0x29df130] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetFloat__DelegateSignature
	float GetFloat__DelegateSignature();                                                                                     // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.GetDesiredSize
	FVector2D GetDesiredSize();                                                                                              // [0x29df0c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetClipping
	EWidgetClipping GetClipping();                                                                                           // [0x29df090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetCheckBoxState__DelegateSignature
	ECheckBoxState GetCheckBoxState__DelegateSignature();                                                                    // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.GetCachedGeometry
	FGeometry GetCachedGeometry();                                                                                           // [0x29df050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetBool__DelegateSignature
	bool GetBool__DelegateSignature();                                                                                       // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.GetAccessibleText
	FText GetAccessibleText();                                                                                               // [0x29defb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetAccessibleSummaryText
	FText GetAccessibleSummaryText();                                                                                        // [0x29def10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GenerateWidgetForString__DelegateSignature
	UWidget* GenerateWidgetForString__DelegateSignature(FString Item);                                                       // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.GenerateWidgetForObject__DelegateSignature
	UWidget* GenerateWidgetForObject__DelegateSignature(UObject* Item);                                                      // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.Widget.ForceVolatile
	void ForceVolatile(bool bForce);                                                                                         // [0x29dee80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ForceLayoutPrepass
	void ForceLayoutPrepass();                                                                                               // [0x29dee60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PanelWidget
/// Size: 0x0018 (0x000108 - 0x000120)
class UPanelWidget : public UWidget
{ 
public:
	TArray<UPanelSlot*>                                Slots;                                                      // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0118   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.PanelWidget.RemoveChildAt
	bool RemoveChildAt(int32_t Index);                                                                                       // [0x29cc0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.RemoveChild
	bool RemoveChild(UWidget* Content);                                                                                      // [0x29cc050] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.HasChild
	bool HasChild(UWidget* Content);                                                                                         // [0x29cbec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.HasAnyChildren
	bool HasAnyChildren();                                                                                                   // [0x29cbe90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildrenCount
	int32_t GetChildrenCount();                                                                                              // [0x29cbb40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildIndex
	int32_t GetChildIndex(UWidget* Content);                                                                                 // [0x29cbaa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildAt
	UWidget* GetChildAt(int32_t Index);                                                                                      // [0x29cba00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetAllChildren
	TArray<UWidget*> GetAllChildren();                                                                                       // [0x29cb980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.ClearChildren
	void ClearChildren();                                                                                                    // [0x29cb8b0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.AddChild
	UPanelSlot* AddChild(UWidget* Content);                                                                                  // [0x29cb770] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ContentWidget
/// Size: 0x0000 (0x000120 - 0x000120)
class UContentWidget : public UPanelWidget
{ 
public:
};

/// Class /Script/UMG.UserWidget
/// Size: 0x0158 (0x000108 - 0x000260)
class UUserWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0108   (0x0008)  MISSED
	FLinearColor                                       ColorAndOpacity;                                            // 0x0110   (0x0010)  
	FDelegateProperty                                  ColorAndOpacityDelegate;                                    // 0x0120   (0x0010)  
	FSlateColor                                        ForegroundColor;                                            // 0x0130   (0x0028)  
	FDelegateProperty                                  ForegroundColorDelegate;                                    // 0x0158   (0x0010)  
	FMulticastInlineDelegate                           OnVisibilityChanged;                                        // 0x0168   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0178   (0x0018)  MISSED
	FMargin                                            Padding;                                                    // 0x0190   (0x0010)  
	TArray<UUMGSequencePlayer*>                        ActiveSequencePlayers;                                      // 0x01A0   (0x0010)  
	UUMGSequenceTickManager*                           AnimationTickManager;                                       // 0x01B0   (0x0008)  
	TArray<UUMGSequencePlayer*>                        StoppedSequencePlayers;                                     // 0x01B8   (0x0010)  
	TArray<FNamedSlotBinding>                          NamedSlotBindings;                                          // 0x01C8   (0x0010)  
	UWidgetTree*                                       WidgetTree;                                                 // 0x01D8   (0x0008)  
	int32_t                                            Priority;                                                   // 0x01E0   (0x0004)  
	bool                                               bSupportsKeyboardFocus;                                     // 0x01E4:0 (0x0001)  
	bool                                               bIsFocusable;                                               // 0x01E4:1 (0x0001)  
	bool                                               bStopAction;                                                // 0x01E4:2 (0x0001)  
	bool                                               bHasScriptImplementedTick;                                  // 0x01E4:3 (0x0001)  
	bool                                               bHasScriptImplementedPaint;                                 // 0x01E4:4 (0x0001)  
	unsigned char                                      UnknownData02_4[0xB];                                       // 0x01E5   (0x000B)  MISSED
	EWidgetTickFrequency                               TickFrequency;                                              // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x01F1   (0x0007)  MISSED
	UInputComponent*                                   InputComponent;                                             // 0x01F8   (0x0008)  
	TArray<FAnimationEventBinding>                     AnimationCallbacks;                                         // 0x0200   (0x0010)  
	unsigned char                                      UnknownData04_6[0x50];                                      // 0x0210   (0x0050)  MISSED


	/// Functions
	// Function /Script/UMG.UserWidget.UnregisterInputComponent
	void UnregisterInputComponent();                                                                                         // [0x29dcfb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationStarted
	void UnbindFromAnimationStarted(UWidgetAnimation* Animation, FDelegateProperty Delegate);                                // [0x29dced0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationFinished
	void UnbindFromAnimationFinished(UWidgetAnimation* Animation, FDelegateProperty Delegate);                               // [0x29dcdf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationStarted(UWidgetAnimation* Animation);                                                         // [0x29dcd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationFinished
	void UnbindAllFromAnimationFinished(UWidgetAnimation* Animation);                                                        // [0x29dccd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.StopListeningForInputAction
	void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);                                  // [0x29dcc00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopListeningForAllInputActions
	void StopListeningForAllInputActions();                                                                                  // [0x29dcbe0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimationsAndLatentActions
	void StopAnimationsAndLatentActions();                                                                                   // [0x29dcbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimation
	void StopAnimation(UWidgetAnimation* InAnimation);                                                                       // [0x29dcb30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAllAnimations
	void StopAllAnimations();                                                                                                // [0x29dcb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPositionInViewport
	void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);                                                    // [0x29dc810] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPlaybackSpeed
	void SetPlaybackSpeed(UWidgetAnimation* InAnimation, float PlayBackSpeed);                                               // [0x29dc740] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29dc6b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetOwningPlayer
	void SetOwningPlayer(APlayerController* LocalPlayerController);                                                          // [0x29dc620] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetNumLoopsToPlay
	void SetNumLoopsToPlay(UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);                                           // [0x29dc550] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionPriority
	void SetInputActionPriority(int32_t NewPriority);                                                                        // [0x29dc2f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionBlocking
	void SetInputActionBlocking(bool bShouldBlock);                                                                          // [0x29dc260] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetForegroundColor
	void SetForegroundColor(FSlateColor InForegroundColor);                                                                  // [0x29dc0f0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetDesiredSizeInViewport
	void SetDesiredSizeInViewport(FVector2D Size);                                                                           // [0x29dc070] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetColorAndOpacity
	void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x29dbf50] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnimationCurrentTime
	void SetAnimationCurrentTime(UWidgetAnimation* InAnimation, float InTime);                                               // [0x29dbe80] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnchorsInViewport
	void SetAnchorsInViewport(FAnchors Anchors);                                                                             // [0x29dbdf0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAlignmentInViewport
	void SetAlignmentInViewport(FVector2D Alignment);                                                                        // [0x29dbd70] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.ReverseAnimation
	void ReverseAnimation(UWidgetAnimation* InAnimation);                                                                    // [0x29dbce0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveFromViewport
	void RemoveFromViewport();                                                                                               // [0x29dbcc0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RegisterInputComponent
	void RegisterInputComponent();                                                                                           // [0x29dbca0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.PlaySound
	void PlaySound(USoundBase* SoundToPlay);                                                                                 // [0x29dbc10] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationTimeRange
	UUMGSequencePlayer* PlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlayBackSpeed, bool bRestoreState); // [0x29db9f0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationReverse
	UUMGSequencePlayer* PlayAnimationReverse(UWidgetAnimation* InAnimation, float PlayBackSpeed, bool bRestoreState);        // [0x29db8d0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationForward
	UUMGSequencePlayer* PlayAnimationForward(UWidgetAnimation* InAnimation, float PlayBackSpeed, bool bRestoreState);        // [0x29db7b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimation
	UUMGSequencePlayer* PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlayBackSpeed, bool bRestoreState); // [0x29db5e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PauseAnimation
	float PauseAnimation(UWidgetAnimation* InAnimation);                                                                     // [0x29db540] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.OnTouchStarted
	FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                           // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchMoved
	FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                             // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchGesture
	FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent);                                           // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchForceChanged
	FEventReply OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                      // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchEnded
	FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                             // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnRemovedFromFocusPath
	void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                   // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewMouseButtonDown
	FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                   // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewKeyDown
	FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPaint
	void OnPaint(FPaintContext& Context);                                                                                    // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.OnMouseWheel
	FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                               // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseMove
	FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseLeave
	void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseEnter
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseCaptureLost
	void OnMouseCaptureLost();                                                                                               // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonUp
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDown
	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDoubleClick
	FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent);                               // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMotionDetected
	FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);                                          // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyUp
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                         // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyDown
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                       // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyChar
	FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);                                           // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnInitialized
	void OnInitialized();                                                                                                    // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusReceived
	FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);                                             // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusLost
	void OnFocusLost(FFocusEvent InFocusEvent);                                                                              // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDrop
	bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                            // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragOver
	bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                        // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragLeave
	void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation);                                             // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragEnter
	void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                       // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragDetected
	void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, UDragDropOperation*& Operation);                  // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragCancelled
	void OnDragCancelled(FPointerEvent& PointerEvent, UDragDropOperation* Operation);                                        // [0x197e4f0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationStarted
	void OnAnimationStarted(UWidgetAnimation* Animation);                                                                    // [0x29db4b0] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationFinished
	void OnAnimationFinished(UWidgetAnimation* Animation);                                                                   // [0x29db420] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnalogValueChanged
	FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);                            // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAddedToFocusPath
	void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.ListenForInputAction
	void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FDelegateProperty Callback); // [0x29db290] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsPlayingAnimation
	bool IsPlayingAnimation();                                                                                               // [0x29db260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsListeningForInputAction
	bool IsListeningForInputAction(FName ActionName);                                                                        // [0x29db1c0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInViewport
	bool IsInViewport();                                                                                                     // [0x29dafa0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInteractable
	bool IsInteractable();                                                                                                   // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.IsAnyAnimationPlaying
	bool IsAnyAnimationPlaying();                                                                                            // [0x29db190] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsAnimationPlayingForward
	bool IsAnimationPlayingForward(UWidgetAnimation* InAnimation);                                                           // [0x29db0f0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsAnimationPlaying
	bool IsAnimationPlaying(UWidgetAnimation* InAnimation);                                                                  // [0x29db050] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerPawn
	APawn* GetOwningPlayerPawn();                                                                                            // [0x29db000] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerCameraManager
	APlayerCameraManager* GetOwningPlayerCameraManager();                                                                    // [0x29dafd0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetIsVisible
	bool GetIsVisible();                                                                                                     // [0x29dafa0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnimationCurrentTime
	float GetAnimationCurrentTime(UWidgetAnimation* InAnimation);                                                            // [0x29daf00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnchorsInViewport
	FAnchors GetAnchorsInViewport();                                                                                         // [0x29daec0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAlignmentInViewport
	FVector2D GetAlignmentInViewport();                                                                                      // [0x29dae80] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.FlushAnimations
	void FlushAnimations();                                                                                                  // [0x29dae60] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Destruct
	void Destruct();                                                                                                         // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.Construct
	void Construct();                                                                                                        // [0x197e4f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.CancelLatentActions
	void CancelLatentActions();                                                                                              // [0x29dae00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationStarted
	void BindToAnimationStarted(UWidgetAnimation* Animation, FDelegateProperty Delegate);                                    // [0x29dad20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationFinished
	void BindToAnimationFinished(UWidgetAnimation* Animation, FDelegateProperty Delegate);                                   // [0x29dac40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationEvent
	void BindToAnimationEvent(UWidgetAnimation* Animation, FDelegateProperty Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag); // [0x29daac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToViewport
	void AddToViewport(int32_t ZOrder);                                                                                      // [0x29daa30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToPlayerScreen
	bool AddToPlayerScreen(int32_t ZOrder);                                                                                  // [0x29da990] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBox
/// Size: 0x0760 (0x000120 - 0x000880)
class UScrollBox : public UPanelWidget
{ 
public:
	FScrollBoxStyle                                    WidgetStyle;                                                // 0x0120   (0x0228)  
	FScrollBarStyle                                    WidgetBarStyle;                                             // 0x0348   (0x04D0)  
	USlateWidgetStyleAsset*                            Style;                                                      // 0x0818   (0x0008)  
	USlateWidgetStyleAsset*                            BarStyle;                                                   // 0x0820   (0x0008)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0828   (0x0001)  
	ESlateVisibility                                   ScrollBarVisibility;                                        // 0x0829   (0x0001)  
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                          // 0x082A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x082B   (0x0001)  MISSED
	FVector2D                                          ScrollbarThickness;                                         // 0x082C   (0x0008)  
	FMargin                                            ScrollbarPadding;                                           // 0x0834   (0x0010)  
	bool                                               AlwaysShowScrollbar;                                        // 0x0844   (0x0001)  
	bool                                               AlwaysShowScrollbarTrack;                                   // 0x0845   (0x0001)  
	bool                                               AllowOverscroll;                                            // 0x0846   (0x0001)  
	bool                                               bAnimateWheelScrolling;                                     // 0x0847   (0x0001)  
	EDescendantScrollDestination                       NavigationDestination;                                      // 0x0848   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0849   (0x0003)  MISSED
	float                                              NavigationScrollPadding;                                    // 0x084C   (0x0004)  
	EScrollWhenFocusChanges                            ScrollWhenFocusChanges;                                     // 0x0850   (0x0001)  
	bool                                               bAllowRightClickDragScrolling;                              // 0x0851   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0852   (0x0002)  MISSED
	float                                              WheelScrollMultiplier;                                      // 0x0854   (0x0004)  
	FMulticastInlineDelegate                           OnUserScrolled;                                             // 0x0858   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0868   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBox.SetWheelScrollMultiplier
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                           // [0x29d1fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollOffset
	void SetScrollOffset(float NewScrollOffset);                                                                             // [0x29d1750] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollBarVisibility
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);                                                    // [0x29d16d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarThickness
	void SetScrollbarThickness(FVector2D& NewScrollbarThickness);                                                            // [0x29d1870] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarPadding
	void SetScrollbarPadding(FMargin& NewScrollbarPadding);                                                                  // [0x29d17d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetOrientation
	void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);                                                           // [0x29d14a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetConsumeMouseWheel
	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);                                                      // [0x29d0940] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAnimateWheelScrolling
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);                                                        // [0x29d0820] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAlwaysShowScrollbar
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);                                                                // [0x29d0790] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAllowOverscroll
	void SetAllowOverscroll(bool NewAllowOverscroll);                                                                        // [0x29d0700] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollWidgetIntoView
	void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding); // [0x29d05a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToStart
	void ScrollToStart();                                                                                                    // [0x29d0580] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToEnd
	void ScrollToEnd();                                                                                                      // [0x29d0560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.GetViewOffsetFraction
	float GetViewOffsetFraction();                                                                                           // [0x29cfd00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffsetOfEnd
	float GetScrollOffsetOfEnd();                                                                                            // [0x29cfc30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffset
	float GetScrollOffset();                                                                                                 // [0x29cfc00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.EndInertialScrolling
	void EndInertialScrolling();                                                                                             // [0x29cf650] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.RetainerBox
/// Size: 0x0030 (0x000120 - 0x000150)
class URetainerBox : public UContentWidget
{ 
public:
	bool                                               bRetainRender;                                              // 0x0120   (0x0001)  
	bool                                               RenderOnInvalidation;                                       // 0x0121   (0x0001)  
	bool                                               RenderOnPhase;                                              // 0x0122   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0123   (0x0001)  MISSED
	int32_t                                            Phase;                                                      // 0x0124   (0x0004)  
	int32_t                                            PhaseCount;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x012C   (0x0004)  MISSED
	UMaterialInterface*                                EffectMaterial;                                             // 0x0130   (0x0008)  
	FName                                              TextureParameter;                                           // 0x0138   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.RetainerBox.SetTextureParameter
	void SetTextureParameter(FName TextureParameter);                                                                        // [0x29ccd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRetainRendering
	void SetRetainRendering(bool bInRetainRendering);                                                                        // [0x29cca00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRenderingPhase
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);                                                        // [0x29cc930] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetEffectMaterial
	void SetEffectMaterial(UMaterialInterface* EffectMaterial);                                                              // [0x29cc1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.RequestRender
	void RequestRender();                                                                                                    // [0x29cc190] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.GetEffectMaterial
	UMaterialInstanceDynamic* GetEffectMaterial();                                                                           // [0x29cbb70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ScaleBox
/// Size: 0x0020 (0x000120 - 0x000140)
class UScaleBox : public UContentWidget
{ 
public:
	TEnumAsByte<EStretch>                              Stretch;                                                    // 0x0120   (0x0001)  
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                           // 0x0121   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0122   (0x0002)  MISSED
	float                                              UserSpecifiedScale;                                         // 0x0124   (0x0004)  
	bool                                               IgnoreInheritedScale;                                       // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0129   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBox.SetUserSpecifiedScale
	void SetUserSpecifiedScale(float InUserSpecifiedScale);                                                                  // [0x29d1e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretchDirection
	void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);                                             // [0x29d1bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretch
	void SetStretch(TEnumAsByte<EStretch> InStretch);                                                                        // [0x29d1b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetIgnoreInheritedScale
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);                                                              // [0x29d1090] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.RichTextBlockDecorator
/// Size: 0x0000 (0x000028 - 0x000028)
class URichTextBlockDecorator : public UObject
{ 
public:
};

/// Class /Script/UMG.ExpandableArea
/// Size: 0x0230 (0x000108 - 0x000338)
class UExpandableArea : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0108   (0x0008)  MISSED
	FExpandableAreaStyle                               Style;                                                      // 0x0110   (0x0120)  
	FSlateBrush                                        BorderBrush;                                                // 0x0230   (0x0088)  
	FSlateColor                                        BorderColor;                                                // 0x02B8   (0x0028)  
	bool                                               bIsExpanded;                                                // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02E1   (0x0003)  MISSED
	float                                              MaxHeight;                                                  // 0x02E4   (0x0004)  
	FMargin                                            HeaderPadding;                                              // 0x02E8   (0x0010)  
	FMargin                                            AreaPadding;                                                // 0x02F8   (0x0010)  
	FMulticastInlineDelegate                           OnExpansionChanged;                                         // 0x0308   (0x0010)  
	UWidget*                                           HeaderContent;                                              // 0x0318   (0x0008)  
	UWidget*                                           BodyContent;                                                // 0x0320   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0328   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.ExpandableArea.SetIsExpanded_Animated
	void SetIsExpanded_Animated(bool IsExpanded);                                                                            // [0x29c39b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.SetIsExpanded
	void SetIsExpanded(bool IsExpanded);                                                                                     // [0x29c3920] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.GetIsExpanded
	bool GetIsExpanded();                                                                                                    // [0x29c2ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.TextLayoutWidget
/// Size: 0x0020 (0x000108 - 0x000128)
class UTextLayoutWidget : public UWidget
{ 
public:
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x0108   (0x0003)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x010B   (0x0001)  
	ETextWrappingPolicy                                WrappingPolicy;                                             // 0x010C   (0x0001)  
	bool                                               AutoWrapText;                                               // 0x010D:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x010E   (0x0002)  MISSED
	float                                              WrapTextAt;                                                 // 0x0110   (0x0004)  
	FMargin                                            Margin;                                                     // 0x0114   (0x0010)  
	float                                              LineHeightPercentage;                                       // 0x0124   (0x0004)  


	/// Functions
	// Function /Script/UMG.TextLayoutWidget.SetJustification
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                        // [0x29d5330] Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SafeZone
/// Size: 0x0018 (0x000120 - 0x000138)
class USafeZone : public UContentWidget
{ 
public:
	bool                                               PadLeft;                                                    // 0x0120   (0x0001)  
	bool                                               PadRight;                                                   // 0x0121   (0x0001)  
	bool                                               PadTop;                                                     // 0x0122   (0x0001)  
	bool                                               PadBottom;                                                  // 0x0123   (0x0001)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0124   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.SafeZone.SetSidesToPad
	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);                                    // [0x29d1900] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.RichTextBlock
/// Size: 0x0550 (0x000128 - 0x000678)
class URichTextBlock : public UTextLayoutWidget
{ 
public:
	FText                                              Text;                                                       // 0x0128   (0x0018)  
	UDataTable*                                        TextStyleSet;                                               // 0x0140   (0x0008)  
	TArray<UClass*>                                    DecoratorClasses;                                           // 0x0148   (0x0010)  
	bool                                               bOverrideDefaultStyle;                                      // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0159   (0x0007)  MISSED
	FTextBlockStyle                                    DefaultTextStyleOverride;                                   // 0x0160   (0x0270)  
	float                                              MinDesiredWidth;                                            // 0x03D0   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x03D4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03D5   (0x0003)  MISSED
	FTextBlockStyle                                    DefaultTextStyle;                                           // 0x03D8   (0x0270)  
	TArray<URichTextBlockDecorator*>                   InstanceDecorators;                                         // 0x0648   (0x0010)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0658   (0x0020)  MISSED


	/// Functions
	// Function /Script/UMG.RichTextBlock.SetTextTransformPolicy
	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                     // [0x29d1db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetTextStyleSet
	void SetTextStyleSet(UDataTable* NewTextStyleSet);                                                                       // [0x29d1d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetText
	void SetText(FText& InText);                                                                                             // [0x29d1c50] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetMinDesiredWidth
	void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x29d13a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultTextStyle
	void SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle);                                                           // [0x29d0e60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultStrikeBrush
	void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);                                                                  // [0x29d0ce0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowOffset
	void SetDefaultShadowOffset(FVector2D InShadowOffset);                                                                   // [0x29d0c60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                              // [0x29d0bd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultFont
	void SetDefaultFont(FSlateFontInfo InFontInfo);                                                                          // [0x29d0ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultColorAndOpacity
	void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);                                                           // [0x29d09c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetAutoWrapText
	void SetAutoWrapText(bool InAutoTextWrap);                                                                               // [0x29d08b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.GetText
	FText GetText();                                                                                                         // [0x29cfc60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.RichTextBlock.GetDecoratorByClass
	URichTextBlockDecorator* GetDecoratorByClass(UClass* DecoratorClass);                                                    // [0x29cf9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	void ClearAllDefaultStyleOverrides();                                                                                    // [0x29cf530] Final|Native|Public  
};

/// Class /Script/UMG.AsyncTaskDownloadImage
/// Size: 0x0020 (0x000030 - 0x000050)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFail;                                                     // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/UMG.AsyncTaskDownloadImage.DownloadImage
	UAsyncTaskDownloadImage* DownloadImage(FString URL);                                                                     // [0x29be330] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.BackgroundBlur
/// Size: 0x00B8 (0x000120 - 0x0001D8)
class UBackgroundBlur : public UContentWidget
{ 
public:
	FMargin                                            Padding;                                                    // 0x0120   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0130   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0131   (0x0001)  
	bool                                               bApplyAlphaToBlur;                                          // 0x0132   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0133   (0x0001)  MISSED
	float                                              BlurStrength;                                               // 0x0134   (0x0004)  
	bool                                               bOverrideAutoRadiusCalculation;                             // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0139   (0x0003)  MISSED
	int32_t                                            BlurRadius;                                                 // 0x013C   (0x0004)  
	FSlateBrush                                        LowQualityFallbackBrush;                                    // 0x0140   (0x0088)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x01C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.BackgroundBlur.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29c0360] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29bfbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetLowQualityFallbackBrush
	void SetLowQualityFallbackBrush(FSlateBrush& InBrush);                                                                   // [0x29bf810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29bf460] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurStrength
	void SetBlurStrength(float InStrength);                                                                                  // [0x29becf0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurRadius
	void SetBlurRadius(int32_t InBlurRadius);                                                                                // [0x29bec60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetApplyAlphaToBlur
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);                                                                      // [0x29beab0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PanelSlot
/// Size: 0x0010 (0x000028 - 0x000038)
class UPanelSlot : public UVisual
{ 
public:
	UPanelWidget*                                      Parent;                                                     // 0x0028   (0x0008)  
	UWidget*                                           Content;                                                    // 0x0030   (0x0008)  
};

/// Class /Script/UMG.BackgroundBlurSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBackgroundBlurSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BackgroundBlurSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29c03e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29bfc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29bf4e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PropertyBinding
/// Size: 0x0038 (0x000028 - 0x000060)
class UPropertyBinding : public UObject
{ 
public:
	TWeakObjectPtr<UObject*>                           SourceObject;                                               // 0x0028   (0x0008)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0030   (0x0028)  
	FName                                              DestinationProperty;                                        // 0x0058   (0x0008)  
};

/// Class /Script/UMG.BoolBinding
/// Size: 0x0000 (0x000060 - 0x000060)
class UBoolBinding : public UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.Border
/// Size: 0x0150 (0x000120 - 0x000270)
class UBorder : public UContentWidget
{ 
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0120   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0121   (0x0001)  
	bool                                               bShowEffectWhenDisabled;                                    // 0x0122:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x0123   (0x0001)  MISSED
	FLinearColor                                       ContentColorAndOpacity;                                     // 0x0124   (0x0010)  
	FDelegateProperty                                  ContentColorAndOpacityDelegate;                             // 0x0134   (0x0010)  
	FMargin                                            Padding;                                                    // 0x0144   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	FSlateBrush                                        Background;                                                 // 0x0158   (0x0088)  
	FDelegateProperty                                  BackgroundDelegate;                                         // 0x01E0   (0x0010)  
	FLinearColor                                       BrushColor;                                                 // 0x01F0   (0x0010)  
	FDelegateProperty                                  BrushColorDelegate;                                         // 0x0200   (0x0010)  
	FVector2D                                          DesiredSizeScale;                                           // 0x0210   (0x0008)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x0218   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0219   (0x0003)  MISSED
	FDelegateProperty                                  OnMouseButtonDownEvent;                                     // 0x021C   (0x0010)  
	FDelegateProperty                                  OnMouseButtonUpEvent;                                       // 0x022C   (0x0010)  
	FDelegateProperty                                  OnMouseMoveEvent;                                           // 0x023C   (0x0010)  
	FDelegateProperty                                  OnMouseDoubleClickEvent;                                    // 0x024C   (0x0010)  
	unsigned char                                      UnknownData03_6[0x14];                                      // 0x025C   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.Border.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29c0460] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29bfcd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29bf560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetDesiredSizeScale
	void SetDesiredSizeScale(FVector2D InScale);                                                                             // [0x29bf3e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetContentColorAndOpacity
	void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);                                                   // [0x29bf350] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromTexture
	void SetBrushFromTexture(UTexture2D* Texture);                                                                           // [0x29bf0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromMaterial
	void SetBrushFromMaterial(UMaterialInterface* Material);                                                                 // [0x29bf020] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromAsset
	void SetBrushFromAsset(USlateBrushAsset* Asset);                                                                         // [0x29bef90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushColor
	void SetBrushColor(FLinearColor InBrushColor);                                                                           // [0x29bef00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrush
	void SetBrush(FSlateBrush& InBrush);                                                                                     // [0x29bed80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Border.GetDynamicMaterial
	UMaterialInstanceDynamic* GetDynamicMaterial();                                                                          // [0x29be500] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BorderSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBorderSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BorderSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29c04e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29bfd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29bf5e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BrushBinding
/// Size: 0x0008 (0x000060 - 0x000068)
class UBrushBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/UMG.Button
/// Size: 0x0308 (0x000120 - 0x000428)
class UButton : public UContentWidget
{ 
public:
	USlateWidgetStyleAsset*                            Style;                                                      // 0x0120   (0x0008)  
	FButtonStyle                                       WidgetStyle;                                                // 0x0128   (0x0278)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x03A0   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x03B0   (0x0010)  
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                                // 0x03C0   (0x0001)  
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                                // 0x03C1   (0x0001)  
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                                // 0x03C2   (0x0001)  
	bool                                               IsFocusable;                                                // 0x03C3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03C4   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnClicked;                                                  // 0x03C8   (0x0010)  
	FMulticastInlineDelegate                           OnPressed;                                                  // 0x03D8   (0x0010)  
	FMulticastInlineDelegate                           OnReleased;                                                 // 0x03E8   (0x0010)  
	FMulticastInlineDelegate                           OnHovered;                                                  // 0x03F8   (0x0010)  
	FMulticastInlineDelegate                           OnUnhovered;                                                // 0x0408   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0418   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Button.SetTouchMethod
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x29c0260] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetStyle
	void SetStyle(FButtonStyle& InStyle);                                                                                    // [0x29c0180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Button.SetPressMethod
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x29bff80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetColorAndOpacity
	void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x29bf2c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.SetClickMethod
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x29bf1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetBackgroundColor
	void SetBackgroundColor(FLinearColor InBackgroundColor);                                                                 // [0x29bebd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.IsPressed
	bool IsPressed();                                                                                                        // [0x29be940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ButtonSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UButtonSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ButtonSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29c0560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29bfdf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29bf660] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.CanvasPanel
/// Size: 0x0010 (0x000120 - 0x000130)
class UCanvasPanel : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0120   (0x0010)  MISSED
};

/// Class /Script/UMG.CanvasPanelSlot
/// Size: 0x0038 (0x000038 - 0x000070)
class UCanvasPanelSlot : public UPanelSlot
{ 
public:
	FAnchorData                                        LayoutData;                                                 // 0x0038   (0x0028)  
	bool                                               bAutoSize;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            ZOrder;                                                     // 0x0064   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.CanvasPanelSlot.SetZOrder
	void SetZOrder(int32_t InZOrder);                                                                                        // [0x29c05e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetSize
	void SetSize(FVector2D InSize);                                                                                          // [0x29c0100] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetPosition
	void SetPosition(FVector2D InPosition);                                                                                  // [0x29bff00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetOffsets
	void SetOffsets(FMargin InOffset);                                                                                       // [0x29bfb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetMinimum
	void SetMinimum(FVector2D InMinimumAnchors);                                                                             // [0x29bfa10] Final|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetMaximum
	void SetMaximum(FVector2D InMaximumAnchors);                                                                             // [0x29bf990] Final|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetLayout
	void SetLayout(FAnchorData& InLayoutData);                                                                               // [0x29bf770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAutoSize
	void SetAutoSize(bool InbAutoSize);                                                                                      // [0x29beb40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAnchors
	void SetAnchors(FAnchors InAnchors);                                                                                     // [0x29bea20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAlignment
	void SetAlignment(FVector2D InAlignment);                                                                                // [0x29be9a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.GetZOrder
	int32_t GetZOrder();                                                                                                     // [0x29be8e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetSize
	FVector2D GetSize();                                                                                                     // [0x29be640] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetPosition
	FVector2D GetPosition();                                                                                                 // [0x29be600] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetOffsets
	FMargin GetOffsets();                                                                                                    // [0x29be5c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetLayout
	FAnchorData GetLayout();                                                                                                 // [0x29be530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAutoSize
	bool GetAutoSize();                                                                                                      // [0x29be4a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAnchors
	FAnchors GetAnchors();                                                                                                   // [0x29be460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAlignment
	FVector2D GetAlignment();                                                                                                // [0x29be420] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckBox
/// Size: 0x0650 (0x000120 - 0x000770)
class UCheckBox : public UContentWidget
{ 
public:
	ECheckBoxState                                     CheckedState;                                               // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0121   (0x0003)  MISSED
	FDelegateProperty                                  CheckedStateDelegate;                                       // 0x0124   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x0138   (0x0580)  
	USlateWidgetStyleAsset*                            Style;                                                      // 0x06B8   (0x0008)  
	USlateBrushAsset*                                  UncheckedImage;                                             // 0x06C0   (0x0008)  
	USlateBrushAsset*                                  UncheckedHoveredImage;                                      // 0x06C8   (0x0008)  
	USlateBrushAsset*                                  UncheckedPressedImage;                                      // 0x06D0   (0x0008)  
	USlateBrushAsset*                                  CheckedImage;                                               // 0x06D8   (0x0008)  
	USlateBrushAsset*                                  CheckedHoveredImage;                                        // 0x06E0   (0x0008)  
	USlateBrushAsset*                                  CheckedPressedImage;                                        // 0x06E8   (0x0008)  
	USlateBrushAsset*                                  UndeterminedImage;                                          // 0x06F0   (0x0008)  
	USlateBrushAsset*                                  UndeterminedHoveredImage;                                   // 0x06F8   (0x0008)  
	USlateBrushAsset*                                  UndeterminedPressedImage;                                   // 0x0700   (0x0008)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0708   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0709   (0x0003)  MISSED
	FMargin                                            Padding;                                                    // 0x070C   (0x0010)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x071C   (0x0004)  MISSED
	FSlateColor                                        BorderBackgroundColor;                                      // 0x0720   (0x0028)  
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                                // 0x0748   (0x0001)  
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                                // 0x0749   (0x0001)  
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                                // 0x074A   (0x0001)  
	bool                                               IsFocusable;                                                // 0x074B   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x074C   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnCheckStateChanged;                                        // 0x0750   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x0760   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.CheckBox.SetTouchMethod
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x29c02e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetPressMethod
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x29c0000] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetIsChecked
	void SetIsChecked(bool InIsChecked);                                                                                     // [0x29bf6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetClickMethod
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x29bf240] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetCheckedState
	void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x29bf140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.IsPressed
	bool IsPressed();                                                                                                        // [0x29be970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.IsChecked
	bool IsChecked();                                                                                                        // [0x29be910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.GetCheckedState
	ECheckBoxState GetCheckedState();                                                                                        // [0x29be4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckedStateBinding
/// Size: 0x0008 (0x000060 - 0x000068)
class UCheckedStateBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/UMG.CircularThrobber
/// Size: 0x00B8 (0x000108 - 0x0001C0)
class UCircularThrobber : public UWidget
{ 
public:
	int32_t                                            NumberOfPieces;                                             // 0x0108   (0x0004)  
	float                                              Period;                                                     // 0x010C   (0x0004)  
	float                                              Radius;                                                     // 0x0110   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	USlateBrushAsset*                                  PieceImage;                                                 // 0x0118   (0x0008)  
	FSlateBrush                                        Image;                                                      // 0x0120   (0x0088)  
	bool                                               bEnableRadius;                                              // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x01A9   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.CircularThrobber.SetRadius
	void SetRadius(float InRadius);                                                                                          // [0x29c0080] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetPeriod
	void SetPeriod(float InPeriod);                                                                                          // [0x29bfe80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetNumberOfPieces
	void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                        // [0x29bfa90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ColorBinding
/// Size: 0x0008 (0x000060 - 0x000068)
class UColorBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/UMG.ComboBox
/// Size: 0x0038 (0x000108 - 0x000140)
class UComboBox : public UWidget
{ 
public:
	TArray<UObject*>                                   Items;                                                      // 0x0108   (0x0010)  
	FDelegateProperty                                  OnGenerateWidgetEvent;                                      // 0x0118   (0x0010)  
	bool                                               bIsFocusable;                                               // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0129   (0x0017)  MISSED
};

/// Class /Script/UMG.ComboBoxString
/// Size: 0x0CF8 (0x000108 - 0x000E00)
class UComboBoxString : public UWidget
{ 
public:
	TArray<FString>                                    DefaultOptions;                                             // 0x0108   (0x0010)  
	FString                                            SelectedOption;                                             // 0x0118   (0x0010)  
	FComboBoxStyle                                     WidgetStyle;                                                // 0x0128   (0x03F0)  
	FTableRowStyle                                     ItemStyle;                                                  // 0x0518   (0x07C8)  
	FMargin                                            ContentPadding;                                             // 0x0CE0   (0x0010)  
	float                                              MaxListHeight;                                              // 0x0CF0   (0x0004)  
	bool                                               HasDownArrow;                                               // 0x0CF4   (0x0001)  
	bool                                               EnableGamepadNavigationMode;                                // 0x0CF5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0CF6   (0x0002)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0CF8   (0x0058)  
	FSlateColor                                        ForegroundColor;                                            // 0x0D50   (0x0028)  
	bool                                               bIsFocusable;                                               // 0x0D78   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0D79   (0x0003)  MISSED
	FDelegateProperty                                  OnGenerateWidgetEvent;                                      // 0x0D7C   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0D8C   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnSelectionChanged;                                         // 0x0D90   (0x0010)  
	FMulticastInlineDelegate                           OnOpening;                                                  // 0x0DA0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x0DB0   (0x0050)  MISSED


	/// Functions
	// Function /Script/UMG.ComboBoxString.SetSelectedOption
	void SetSelectedOption(FString Option);                                                                                  // [0x29c3f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.SetSelectedIndex
	void SetSelectedIndex(int32_t Index);                                                                                    // [0x29c3ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RemoveOption
	bool RemoveOption(FString Option);                                                                                       // [0x29c3340] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RefreshOptions
	void RefreshOptions();                                                                                                   // [0x29c3290] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);           // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	void OnOpeningEvent__DelegateSignature();                                                                                // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.IsOpen
	bool IsOpen();                                                                                                           // [0x29c3260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedOption
	FString GetSelectedOption();                                                                                             // [0x29c3040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedIndex
	int32_t GetSelectedIndex();                                                                                              // [0x29c3010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionCount
	int32_t GetOptionCount();                                                                                                // [0x29c2fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionAtIndex
	FString GetOptionAtIndex(int32_t Index);                                                                                 // [0x29c2f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.FindOptionIndex
	int32_t FindOptionIndex(FString Option);                                                                                 // [0x29c2d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.ClearSelection
	void ClearSelection();                                                                                                   // [0x29c2950] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.ClearOptions
	void ClearOptions();                                                                                                     // [0x29c2930] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.AddOption
	void AddOption(FString Option);                                                                                          // [0x29c27a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.DragDropOperation
/// Size: 0x0060 (0x000028 - 0x000088)
class UDragDropOperation : public UObject
{ 
public:
	FString                                            Tag;                                                        // 0x0028   (0x0010)  
	UObject*                                           Payload;                                                    // 0x0038   (0x0008)  
	UWidget*                                           DefaultDragVisual;                                          // 0x0040   (0x0008)  
	EDragPivot                                         Pivot;                                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	FVector2D                                          Offset;                                                     // 0x004C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnDrop;                                                     // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnDragCancelled;                                            // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           OnDragged;                                                  // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/UMG.DragDropOperation.Drop
	void Drop(FPointerEvent& PointerEvent);                                                                                  // [0x29c2bd0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.Dragged
	void Dragged(FPointerEvent& PointerEvent);                                                                               // [0x29c2aa0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.DragCancelled
	void DragCancelled(FPointerEvent& PointerEvent);                                                                         // [0x29c2970] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/UMG.DynamicEntryBoxBase
/// Size: 0x00D0 (0x000108 - 0x0001D8)
class UDynamicEntryBoxBase : public UWidget
{ 
public:
	EDynamicBoxType                                    EntryBoxType;                                               // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	FVector2D                                          EntrySpacing;                                               // 0x010C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	TArray<FVector2D>                                  SpacingPattern;                                             // 0x0118   (0x0010)  
	FSlateChildSize                                    EntrySizeRule;                                              // 0x0128   (0x0008)  
	TEnumAsByte<EHorizontalAlignment>                  EntryHorizontalAlignment;                                   // 0x0130   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    EntryVerticalAlignment;                                     // 0x0131   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0132   (0x0002)  MISSED
	int32_t                                            MaxElementSize;                                             // 0x0134   (0x0004)  
	FRadialBoxSettings                                 RadialBoxSettings;                                          // 0x0138   (0x000C)  
	unsigned char                                      UnknownData03_5[0x14];                                      // 0x0144   (0x0014)  MISSED
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x0158   (0x0080)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBoxBase.SetRadialSettings
	void SetRadialSettings(FRadialBoxSettings& InSettings);                                                                  // [0x29c3d80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.SetEntrySpacing
	void SetEntrySpacing(FVector2D& InEntrySpacing);                                                                         // [0x29c35f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.GetNumEntries
	int32_t GetNumEntries();                                                                                                 // [0x29c2ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.DynamicEntryBoxBase.GetAllEntries
	TArray<UUserWidget*> GetAllEntries();                                                                                    // [0x29c2db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.DynamicEntryBox
/// Size: 0x0008 (0x0001D8 - 0x0001E0)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{ 
public:
	UClass*                                            EntryWidgetClass;                                           // 0x01D8   (0x0008)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBox.Reset
	void Reset(bool bDeleteWidgets);                                                                                         // [0x29c33f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.RemoveEntry
	void RemoveEntry(UUserWidget* EntryWidget);                                                                              // [0x29c32b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntryOfClass
	UUserWidget* BP_CreateEntryOfClass(UClass* EntryClass);                                                                  // [0x29c2870] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntry
	UUserWidget* BP_CreateEntry();                                                                                           // [0x29c2840] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/UMG.EditableText
/// Size: 0x0358 (0x000108 - 0x000460)
class UEditableText : public UWidget
{ 
public:
	FText                                              Text;                                                       // 0x0108   (0x0018)  
	FDelegateProperty                                  TextDelegate;                                               // 0x0120   (0x0010)  
	FText                                              HintText;                                                   // 0x0130   (0x0018)  
	FDelegateProperty                                  HintTextDelegate;                                           // 0x0148   (0x0010)  
	FEditableTextStyle                                 WidgetStyle;                                                // 0x0158   (0x0220)  
	USlateWidgetStyleAsset*                            Style;                                                      // 0x0378   (0x0008)  
	USlateBrushAsset*                                  BackgroundImageSelected;                                    // 0x0380   (0x0008)  
	USlateBrushAsset*                                  BackgroundImageComposing;                                   // 0x0388   (0x0008)  
	USlateBrushAsset*                                  CaretImage;                                                 // 0x0390   (0x0008)  
	FSlateFontInfo                                     Font;                                                       // 0x0398   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x03F0   (0x0028)  
	bool                                               IsReadOnly;                                                 // 0x0418   (0x0001)  
	bool                                               IsPassword;                                                 // 0x0419   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x041A   (0x0002)  MISSED
	float                                              MinimumDesiredWidth;                                        // 0x041C   (0x0004)  
	bool                                               IsCaretMovedWhenGainFocus;                                  // 0x0420   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x0421   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x0422   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x0423   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x0424   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x0425   (0x0001)  
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                               // 0x0426   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0427   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x0428   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0429   (0x0001)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x042A   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x042B   (0x0003)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x042E   (0x0002)  MISSED
	FMulticastInlineDelegate                           OnTextChanged;                                              // 0x0430   (0x0010)  
	FMulticastInlineDelegate                           OnTextCommitted;                                            // 0x0440   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0450   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.EditableText.SetText
	void SetText(FText InText);                                                                                              // [0x29c4070] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetJustification
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                        // [0x29c3c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsReadOnly
	void SetIsReadOnly(bool InbIsReadyOnly);                                                                                 // [0x29c3b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsPassword
	void SetIsPassword(bool InbIsPassword);                                                                                  // [0x29c3a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetHintText
	void SetHintText(FText InHintText);                                                                                      // [0x29c3760] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	void OnEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);                // [0x197e4f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	void OnEditableTextChangedEvent__DelegateSignature(FText& Text);                                                         // [0x197e4f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.GetText
	FText GetText();                                                                                                         // [0x29c30c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.EditableTextBox
/// Size: 0x0930 (0x000108 - 0x000A38)
class UEditableTextBox : public UWidget
{ 
public:
	FText                                              Text;                                                       // 0x0108   (0x0018)  
	FDelegateProperty                                  TextDelegate;                                               // 0x0120   (0x0010)  
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x0130   (0x07F8)  
	USlateWidgetStyleAsset*                            Style;                                                      // 0x0928   (0x0008)  
	FText                                              HintText;                                                   // 0x0930   (0x0018)  
	FDelegateProperty                                  HintTextDelegate;                                           // 0x0948   (0x0010)  
	FSlateFontInfo                                     Font;                                                       // 0x0958   (0x0058)  
	FLinearColor                                       ForegroundColor;                                            // 0x09B0   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x09C0   (0x0010)  
	FLinearColor                                       ReadOnlyForegroundColor;                                    // 0x09D0   (0x0010)  
	bool                                               IsReadOnly;                                                 // 0x09E0   (0x0001)  
	bool                                               IsPassword;                                                 // 0x09E1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x09E2   (0x0002)  MISSED
	float                                              MinimumDesiredWidth;                                        // 0x09E4   (0x0004)  
	FMargin                                            Padding;                                                    // 0x09E8   (0x0010)  
	bool                                               IsCaretMovedWhenGainFocus;                                  // 0x09F8   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x09F9   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x09FA   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x09FB   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x09FC   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x09FD   (0x0001)  
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                               // 0x09FE   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x09FF   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x0A00   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0A01   (0x0001)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x0A02   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x0A03   (0x0003)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0A06   (0x0002)  MISSED
	FMulticastInlineDelegate                           OnTextChanged;                                              // 0x0A08   (0x0010)  
	FMulticastInlineDelegate                           OnTextCommitted;                                            // 0x0A18   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0A28   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.EditableTextBox.SetText
	void SetText(FText InText);                                                                                              // [0x29c4150] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetJustification
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                        // [0x29c3d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsReadOnly
	void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x29c3bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsPassword
	void SetIsPassword(bool bIsPassword);                                                                                    // [0x29c3ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetHintText
	void SetHintText(FText InText);                                                                                          // [0x29c3840] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetError
	void SetError(FText InError);                                                                                            // [0x29c3680] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	void OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);             // [0x197e4f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	void OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                                      // [0x197e4f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.HasError
	bool HasError();                                                                                                         // [0x29c3230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.GetText
	FText GetText();                                                                                                         // [0x29c3160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.ClearError
	void ClearError();                                                                                                       // [0x29c2910] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.FloatBinding
/// Size: 0x0000 (0x000060 - 0x000060)
class UFloatBinding : public UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.GridPanel
/// Size: 0x0030 (0x000120 - 0x000150)
class UGridPanel : public UPanelWidget
{ 
public:
	TArray<float>                                      ColumnFill;                                                 // 0x0120   (0x0010)  
	TArray<float>                                      RowFill;                                                    // 0x0130   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.GridPanel.SetRowFill
	void SetRowFill(int32_t ColumnIndex, float Coefficient);                                                                 // [0x29c3e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.SetColumnFill
	void SetColumnFill(int32_t ColumnIndex, float Coefficient);                                                              // [0x29c3480] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.AddChildToGrid
	UGridSlot* AddChildToGrid(UWidget* Content, int32_t InRow, int32_t InColumn);                                            // [0x29c2690] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.GridSlot
/// Size: 0x0038 (0x000038 - 0x000070)
class UGridSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            Row;                                                        // 0x004C   (0x0004)  
	int32_t                                            RowSpan;                                                    // 0x0050   (0x0004)  
	int32_t                                            Column;                                                     // 0x0054   (0x0004)  
	int32_t                                            ColumnSpan;                                                 // 0x0058   (0x0004)  
	int32_t                                            Layer;                                                      // 0x005C   (0x0004)  
	FVector2D                                          Nudge;                                                      // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.GridSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29c8b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRowSpan
	void SetRowSpan(int32_t InRowSpan);                                                                                      // [0x29c8660] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRow
	void SetRow(int32_t InRow);                                                                                              // [0x29c85d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29c84b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetNudge
	void SetNudge(FVector2D InNudge);                                                                                        // [0x29c83b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetLayer
	void SetLayer(int32_t InLayer);                                                                                          // [0x29c8240] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29c8060] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumnSpan
	void SetColumnSpan(int32_t InColumnSpan);                                                                                // [0x29c7ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumn
	void SetColumn(int32_t InColumn);                                                                                        // [0x29c7e50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBox
/// Size: 0x0010 (0x000120 - 0x000130)
class UHorizontalBox : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0120   (0x0010)  MISSED
};

/// Class /Script/UMG.HorizontalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UHorizontalBoxSlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	FSlateChildSize                                    Size;                                                       // 0x0050   (0x0008)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0058   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.HorizontalBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29c8b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetSize
	void SetSize(FSlateChildSize InSize);                                                                                    // [0x29c89f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29c8540] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29c80e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Image
/// Size: 0x0108 (0x000108 - 0x000210)
class UImage : public UWidget
{ 
public:
	FSlateBrush                                        Brush;                                                      // 0x0108   (0x0088)  
	FDelegateProperty                                  BrushDelegate;                                              // 0x0190   (0x0010)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x01A0   (0x0010)  
	FDelegateProperty                                  ColorAndOpacityDelegate;                                    // 0x01B0   (0x0010)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01C1   (0x0003)  MISSED
	FDelegateProperty                                  OnMouseButtonDownEvent;                                     // 0x01C4   (0x0010)  
	unsigned char                                      UnknownData01_6[0x3C];                                      // 0x01D4   (0x003C)  MISSED


	/// Functions
	// Function /Script/UMG.Image.SetOpacity
	void SetOpacity(float InOpacity);                                                                                        // [0x29c8430] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetColorAndOpacity
	void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x29c7dc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushTintColor
	void SetBrushTintColor(FSlateColor TintColor);                                                                           // [0x29c7c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushSize
	void SetBrushSize(FVector2D DesiredSize);                                                                                // [0x29c7bc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushResourceObject
	void SetBrushResourceObject(UObject* ResourceObject);                                                                    // [0x29c7b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTextureDynamic
	void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize);                                            // [0x29c7a60] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTexture
	void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);                                                          // [0x29c7990] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftTexture
	void SetBrushFromSoftTexture(TWeakObjectPtr<UTexture2D*> SoftTexture, bool bMatchSize);                                  // [0x29c7840] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftMaterial
	void SetBrushFromSoftMaterial(TWeakObjectPtr<UMaterialInterface*> SoftMaterial);                                         // [0x29c7730] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromMaterial
	void SetBrushFromMaterial(UMaterialInterface* Material);                                                                 // [0x29c76a0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAtlasInterface
	void SetBrushFromAtlasInterface(TScriptInterface<Class> AtlasRegion, bool bMatchSize);                                   // [0x29c75b0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAsset
	void SetBrushFromAsset(USlateBrushAsset* Asset);                                                                         // [0x29c7520] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrush
	void SetBrush(FSlateBrush& InBrush);                                                                                     // [0x29c73a0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Image.GetDynamicMaterial
	UMaterialInstanceDynamic* GetDynamicMaterial();                                                                          // [0x29c6b70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.InputKeySelector
/// Size: 0x05F8 (0x000108 - 0x000700)
class UInputKeySelector : public UWidget
{ 
public:
	FButtonStyle                                       WidgetStyle;                                                // 0x0108   (0x0278)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0380   (0x0270)  
	FInputChord                                        SelectedKey;                                                // 0x05F0   (0x0020)  
	FSlateFontInfo                                     Font;                                                       // 0x0610   (0x0058)  
	FMargin                                            Margin;                                                     // 0x0668   (0x0010)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x0678   (0x0010)  
	FText                                              KeySelectionText;                                           // 0x0688   (0x0018)  
	FText                                              NoKeySpecifiedText;                                         // 0x06A0   (0x0018)  
	bool                                               bAllowModifierKeys;                                         // 0x06B8   (0x0001)  
	bool                                               bAllowGamepadKeys;                                          // 0x06B9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x06BA   (0x0006)  MISSED
	TArray<FKey>                                       EscapeKeys;                                                 // 0x06C0   (0x0010)  
	FMulticastInlineDelegate                           OnKeySelected;                                              // 0x06D0   (0x0010)  
	FMulticastInlineDelegate                           OnIsSelectingKeyChanged;                                    // 0x06E0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x06F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.InputKeySelector.SetTextBlockVisibility
	void SetTextBlockVisibility(ESlateVisibility InVisibility);                                                              // [0x29c8a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetSelectedKey
	void SetSelectedKey(FInputChord& InSelectedKey);                                                                         // [0x29c8880] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetNoKeySpecifiedText
	void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);                                                                  // [0x29c82d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetKeySelectionText
	void SetKeySelectionText(FText InKeySelectionText);                                                                      // [0x29c8160] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetEscapeKeys
	void SetEscapeKeys(TArray<FKey>& InKeys);                                                                                // [0x29c7f70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowModifierKeys
	void SetAllowModifierKeys(bool bInAllowModifierKeys);                                                                    // [0x29c7310] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowGamepadKeys
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);                                                                      // [0x29c7280] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.OnKeySelected__DelegateSignature
	void OnKeySelected__DelegateSignature(FInputChord SelectedKey);                                                          // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	void OnIsSelectingKeyChanged__DelegateSignature();                                                                       // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.GetIsSelectingKey
	bool GetIsSelectingKey();                                                                                                // [0x29c6c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.Int32Binding
/// Size: 0x0000 (0x000060 - 0x000060)
class UInt32Binding : public UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.InvalidationBox
/// Size: 0x0018 (0x000120 - 0x000138)
class UInvalidationBox : public UContentWidget
{ 
public:
	bool                                               bCanCache;                                                  // 0x0120   (0x0001)  
	bool                                               CacheRelativeTransforms;                                    // 0x0121   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0122   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.InvalidationBox.SetCanCache
	void SetCanCache(bool CanCache);                                                                                         // [0x29c7d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.InvalidateCache
	void InvalidateCache();                                                                                                  // [0xb7a5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.GetCanCache
	bool GetCanCache();                                                                                                      // [0x29c6ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UserListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntry : public UInterface
{ 
public:
};

/// Class /Script/UMG.UserListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/UMG.UserObjectListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntry : public UUserListEntry
{ 
public:
};

/// Class /Script/UMG.UserObjectListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/UMG.ListViewBase
/// Size: 0x0110 (0x000108 - 0x000218)
class UListViewBase : public UWidget
{ 
public:
	UClass*                                            EntryWidgetClass;                                           // 0x0108   (0x0008)  
	float                                              WheelScrollMultiplier;                                      // 0x0110   (0x0004)  
	bool                                               bEnableScrollAnimation;                                     // 0x0114   (0x0001)  
	bool                                               bEnableFixedLineOffset;                                     // 0x0115   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0116   (0x0002)  MISSED
	float                                              FixedLineScrollOffset;                                      // 0x0118   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FMulticastInlineDelegate                           BP_OnEntryGenerated;                                        // 0x0120   (0x0010)  
	FMulticastInlineDelegate                           BP_OnEntryReleased;                                         // 0x0130   (0x0010)  
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x0140   (0x0080)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x01C0   (0x0058)  MISSED


	/// Functions
	// Function /Script/UMG.ListViewBase.SetWheelScrollMultiplier
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                           // [0x29c8c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollOffset
	void SetScrollOffset(float InScrollOffset);                                                                              // [0x29c86f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollBarVisibility
	void SetScrollBarVisibility(ESlateVisibility InVisibility);                                                              // [0x29c8770] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToTop
	void ScrollToTop();                                                                                                      // [0x29c7260] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToBottom
	void ScrollToBottom();                                                                                                   // [0x29c7240] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RequestRefresh
	void RequestRefresh();                                                                                                   // [0x29c7190] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RegenerateAllEntries
	void RegenerateAllEntries();                                                                                             // [0x29c70e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.GetDisplayedEntryWidgets
	TArray<UUserWidget*> GetDisplayedEntryWidgets();                                                                         // [0x29c6ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ListView
/// Size: 0x0150 (0x000218 - 0x000368)
class UListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0218   (0x00C0)  MISSED
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x02D8   (0x0001)  
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                              // 0x02D9   (0x0001)  
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                          // 0x02DA   (0x0001)  
	bool                                               bClearSelectionOnClick;                                     // 0x02DB   (0x0001)  
	bool                                               bIsFocusable;                                               // 0x02DC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02DD   (0x0003)  MISSED
	float                                              EntrySpacing;                                               // 0x02E0   (0x0004)  
	bool                                               bReturnFocusToSelection;                                    // 0x02E4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02E5   (0x0003)  MISSED
	TArray<UObject*>                                   ListItems;                                                  // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x02F8   (0x0010)  MISSED
	FMulticastInlineDelegate                           BP_OnEntryInitialized;                                      // 0x0308   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemClicked;                                           // 0x0318   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemDoubleClicked;                                     // 0x0328   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemIsHoveredChanged;                                  // 0x0338   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemSelectionChanged;                                  // 0x0348   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemScrolledIntoView;                                  // 0x0358   (0x0010)  


	/// Functions
	// Function /Script/UMG.ListView.SetSelectionMode
	void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);                                                        // [0x29c8970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.SetSelectedIndex
	void SetSelectedIndex(int32_t Index);                                                                                    // [0x29c87f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.ScrollIndexIntoView
	void ScrollIndexIntoView(int32_t Index);                                                                                 // [0x29c71b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.RemoveItem
	void RemoveItem(UObject* Item);                                                                                          // [0x29c7100] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.NavigateToIndex
	void NavigateToIndex(int32_t Index);                                                                                     // [0x29c7050] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.IsRefreshPending
	bool IsRefreshPending();                                                                                                 // [0x29c7020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetNumItems
	int32_t GetNumItems();                                                                                                   // [0x29c6de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetListItems
	TArray<UObject*> GetListItems();                                                                                         // [0x29c6db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetItemAt
	UObject* GetItemAt(int32_t Index);                                                                                       // [0x29c6c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetIndexForItem
	int32_t GetIndexForItem(UObject* Item);                                                                                  // [0x29c6ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.ClearListItems
	void ClearListItems();                                                                                                   // [0x29c6a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetSelectedItem
	void BP_SetSelectedItem(UObject* Item);                                                                                  // [0x29c6a00] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetListItems
	void BP_SetListItems(TArray<UObject*>& InListItems);                                                                     // [0x29c6950] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetItemSelection
	void BP_SetItemSelection(UObject* Item, bool bSelected);                                                                 // [0x29c6880] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_ScrollItemIntoView
	void BP_ScrollItemIntoView(UObject* Item);                                                                               // [0x29c67f0] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_NavigateToItem
	void BP_NavigateToItem(UObject* Item);                                                                                   // [0x29c6760] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_IsItemVisible
	bool BP_IsItemVisible(UObject* Item);                                                                                    // [0x29c66c0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItems
	bool BP_GetSelectedItems(TArray<UObject*>& Items);                                                                       // [0x29c6600] Final|Native|Private|HasOutParms|BlueprintCallable|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItem
	UObject* BP_GetSelectedItem();                                                                                           // [0x29c65d0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetNumItemsSelected
	int32_t BP_GetNumItemsSelected();                                                                                        // [0x29c65a0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_ClearSelection
	void BP_ClearSelection();                                                                                                // [0x29c6580] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_CancelScrollIntoView
	void BP_CancelScrollIntoView();                                                                                          // [0x29c6560] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.AddItem
	void AddItem(UObject* Item);                                                                                             // [0x29c64d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ListViewDesignerPreviewItem
/// Size: 0x0000 (0x000028 - 0x000028)
class UListViewDesignerPreviewItem : public UObject
{ 
public:
};

/// Class /Script/UMG.MenuAnchor
/// Size: 0x0050 (0x000120 - 0x000170)
class UMenuAnchor : public UContentWidget
{ 
public:
	UClass*                                            MenuClass;                                                  // 0x0120   (0x0008)  
	FDelegateProperty                                  OnGetMenuContentEvent;                                      // 0x0128   (0x0010)  
	FDelegateProperty                                  OnGetUserMenuContentEvent;                                  // 0x0138   (0x0010)  
	TEnumAsByte<EMenuPlacement>                        Placement;                                                  // 0x0148   (0x0001)  
	bool                                               bFitInWindow;                                               // 0x0149   (0x0001)  
	bool                                               ShouldDeferPaintingAfterWindowContent;                      // 0x014A   (0x0001)  
	bool                                               UseApplicationMenuStack;                                    // 0x014B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x014C   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnMenuOpenChanged;                                          // 0x0150   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0160   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MenuAnchor.ToggleOpen
	void ToggleOpen(bool bFocusOnOpen);                                                                                      // [0x29ccef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.ShouldOpenDueToClick
	bool ShouldOpenDueToClick();                                                                                             // [0x29ccec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.SetPlacement
	void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);                                                              // [0x29cc8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Open
	void Open(bool bFocusMenu);                                                                                              // [0x29cbfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.IsOpen
	bool IsOpen();                                                                                                           // [0x29cbf90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.HasOpenSubMenus
	bool HasOpenSubMenus();                                                                                                  // [0x29cbf60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.GetUserWidget__DelegateSignature
	UUserWidget* GetUserWidget__DelegateSignature();                                                                         // [0x197e4f0] Public|Delegate      
	// Function /Script/UMG.MenuAnchor.GetMenuPosition
	FVector2D GetMenuPosition();                                                                                             // [0x29cbce0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.FitInWindow
	void FitInWindow(bool bFit);                                                                                             // [0x29cb8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Close
	void Close();                                                                                                            // [0x29cb8d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.MouseCursorBinding
/// Size: 0x0000 (0x000060 - 0x000060)
class UMouseCursorBinding : public UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.MovieScene2DTransformPropertySystem
/// Size: 0x0000 (0x000050 - 0x000050)
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/UMG.MovieScene2DTransformSection
/// Size: 0x0470 (0x0000E8 - 0x000558)
class UMovieScene2DTransformSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00E8   (0x0008)  MISSED
	FMovieScene2DTransformMask                         TransformMask;                                              // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Translation;                                                // 0x00F8   (0x0140)  
	FMovieSceneFloatChannel                            Rotation;                                                   // 0x0238   (0x00A0)  
	FMovieSceneFloatChannel                            Scale;                                                      // 0x02D8   (0x0140)  
	FMovieSceneFloatChannel                            Shear;                                                      // 0x0418   (0x0140)  
};

/// Class /Script/UMG.MovieScene2DTransformTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/UMG.MovieSceneMarginSection
/// Size: 0x0280 (0x0000E8 - 0x000368)
class UMovieSceneMarginSection : public UMovieSceneSection
{ 
public:
	FMovieSceneFloatChannel                            TopCurve;                                                   // 0x00E8   (0x00A0)  
	FMovieSceneFloatChannel                            LeftCurve;                                                  // 0x0188   (0x00A0)  
	FMovieSceneFloatChannel                            RightCurve;                                                 // 0x0228   (0x00A0)  
	FMovieSceneFloatChannel                            BottomCurve;                                                // 0x02C8   (0x00A0)  
};

/// Class /Script/UMG.MovieSceneMarginTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/UMG.MovieSceneWidgetMaterialTrack
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0088   (0x0008)  MISSED
	TArray<FName>                                      BrushPropertyNamePath;                                      // 0x0090   (0x0010)  
	FName                                              TrackName;                                                  // 0x00A0   (0x0008)  
};

/// Class /Script/UMG.MultiLineEditableText
/// Size: 0x0348 (0x000128 - 0x000470)
class UMultiLineEditableText : public UTextLayoutWidget
{ 
public:
	FText                                              Text;                                                       // 0x0128   (0x0018)  
	FText                                              HintText;                                                   // 0x0140   (0x0018)  
	FDelegateProperty                                  HintTextDelegate;                                           // 0x0158   (0x0010)  
	FTextBlockStyle                                    WidgetStyle;                                                // 0x0168   (0x0270)  
	bool                                               bIsReadOnly;                                                // 0x03D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03D9   (0x0007)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x03E0   (0x0058)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x0438   (0x0001)  
	bool                                               ClearTextSelectionOnFocusLoss;                              // 0x0439   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x043A   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x043B   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x043C   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x043D   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x043E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x043F   (0x0001)  MISSED
	FMulticastInlineDelegate                           OnTextChanged;                                              // 0x0440   (0x0010)  
	FMulticastInlineDelegate                           OnTextCommitted;                                            // 0x0450   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0460   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableText.SetWidgetStyle
	void SetWidgetStyle(FTextBlockStyle& InWidgetStyle);                                                                     // [0x29cce10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetText
	void SetText(FText InText);                                                                                              // [0x29cca90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetIsReadOnly
	void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x29cc680] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetHintText
	void SetHintText(FText InHintText);                                                                                      // [0x29cc3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);       // [0x197e4f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(FText& Text);                                                // [0x197e4f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.GetText
	FText GetText();                                                                                                         // [0x29cbd20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableText.GetHintText
	FText GetHintText();                                                                                                     // [0x29cbba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MultiLineEditableTextBox
/// Size: 0x0B70 (0x000128 - 0x000C98)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{ 
public:
	FText                                              Text;                                                       // 0x0128   (0x0018)  
	FText                                              HintText;                                                   // 0x0140   (0x0018)  
	FDelegateProperty                                  HintTextDelegate;                                           // 0x0158   (0x0010)  
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x0168   (0x07F8)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0960   (0x0270)  
	bool                                               bIsReadOnly;                                                // 0x0BD0   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x0BD1   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0BD2   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0BD3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0BD4   (0x0004)  MISSED
	USlateWidgetStyleAsset*                            Style;                                                      // 0x0BD8   (0x0008)  
	FSlateFontInfo                                     Font;                                                       // 0x0BE0   (0x0058)  
	FLinearColor                                       ForegroundColor;                                            // 0x0C38   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x0C48   (0x0010)  
	FLinearColor                                       ReadOnlyForegroundColor;                                    // 0x0C58   (0x0010)  
	FMulticastInlineDelegate                           OnTextChanged;                                              // 0x0C68   (0x0010)  
	FMulticastInlineDelegate                           OnTextCommitted;                                            // 0x0C78   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0C88   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableTextBox.SetTextStyle
	void SetTextStyle(FTextBlockStyle& InTextStyle);                                                                         // [0x29ccc50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetText
	void SetText(FText InText);                                                                                              // [0x29ccb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetIsReadOnly
	void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x29cc710] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetHintText
	void SetHintText(FText InHintText);                                                                                      // [0x29cc490] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetError
	void SetError(FText InError);                                                                                            // [0x29cc240] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);    // [0x197e4f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                             // [0x197e4f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.GetText
	FText GetText();                                                                                                         // [0x29cbdc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableTextBox.GetHintText
	FText GetHintText();                                                                                                     // [0x29cbc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.NamedSlot
/// Size: 0x0010 (0x000120 - 0x000130)
class UNamedSlot : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0120   (0x0010)  MISSED
};

/// Class /Script/UMG.NamedSlotInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNamedSlotInterface : public UInterface
{ 
public:
};

/// Class /Script/UMG.NativeWidgetHost
/// Size: 0x0010 (0x000108 - 0x000118)
class UNativeWidgetHost : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0108   (0x0010)  MISSED
};

/// Class /Script/UMG.Overlay
/// Size: 0x0010 (0x000120 - 0x000130)
class UOverlay : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0120   (0x0010)  MISSED
};

/// Class /Script/UMG.OverlaySlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UOverlaySlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0050   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.OverlaySlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29ccd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29cc7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29cc570] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ProgressBar
/// Size: 0x0210 (0x000108 - 0x000318)
class UProgressBar : public UWidget
{ 
public:
	FProgressBarStyle                                  WidgetStyle;                                                // 0x0108   (0x01A0)  
	USlateWidgetStyleAsset*                            Style;                                                      // 0x02A8   (0x0008)  
	USlateBrushAsset*                                  BackgroundImage;                                            // 0x02B0   (0x0008)  
	USlateBrushAsset*                                  FillImage;                                                  // 0x02B8   (0x0008)  
	USlateBrushAsset*                                  MarqueeImage;                                               // 0x02C0   (0x0008)  
	float                                              Percent;                                                    // 0x02C8   (0x0004)  
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                                // 0x02CC   (0x0001)  
	bool                                               bIsMarquee;                                                 // 0x02CD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02CE   (0x0002)  MISSED
	FVector2D                                          BorderPadding;                                              // 0x02D0   (0x0008)  
	FDelegateProperty                                  PercentDelegate;                                            // 0x02D8   (0x0010)  
	FLinearColor                                       FillColorAndOpacity;                                        // 0x02E8   (0x0010)  
	FDelegateProperty                                  FillColorAndOpacityDelegate;                                // 0x02F8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0308   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.ProgressBar.SetPercent
	void SetPercent(float InPercent);                                                                                        // [0x29cc830] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetIsMarquee
	void SetIsMarquee(bool InbIsMarquee);                                                                                    // [0x29cc5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetFillColorAndOpacity
	void SetFillColorAndOpacity(FLinearColor InColor);                                                                       // [0x29cc320] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.RichTextBlockImageDecorator
/// Size: 0x0008 (0x000028 - 0x000030)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{ 
public:
	UDataTable*                                        ImageSet;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/UMG.SafeZoneSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class USafeZoneSlot : public UPanelSlot
{ 
public:
	bool                                               bIsTitleSafe;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FMargin                                            SafeAreaScale;                                              // 0x003C   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                     // 0x004C   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                     // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	FMargin                                            Padding;                                                    // 0x0050   (0x0010)  
};

/// Class /Script/UMG.ScaleBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UScaleBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29c0560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29d1520] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29bf660] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBar
/// Size: 0x0508 (0x000108 - 0x000610)
class UScrollBar : public UWidget
{ 
public:
	FScrollBarStyle                                    WidgetStyle;                                                // 0x0108   (0x04D0)  
	USlateWidgetStyleAsset*                            Style;                                                      // 0x05D8   (0x0008)  
	bool                                               bAlwaysShowScrollbar;                                       // 0x05E0   (0x0001)  
	bool                                               bAlwaysShowScrollbarTrack;                                  // 0x05E1   (0x0001)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x05E2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x05E3   (0x0001)  MISSED
	FVector2D                                          Thickness;                                                  // 0x05E4   (0x0008)  
	FMargin                                            Padding;                                                    // 0x05EC   (0x0010)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x05FC   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBar.SetState
	void SetState(float InOffsetFraction, float InThumbSizeFraction);                                                        // [0x29d1a80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBoxSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UScrollBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x004A   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29d1eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29d15b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29d0f90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBox
/// Size: 0x0038 (0x000120 - 0x000158)
class USizeBox : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0120   (0x0010)  MISSED
	float                                              WidthOverride;                                              // 0x0130   (0x0004)  
	float                                              HeightOverride;                                             // 0x0134   (0x0004)  
	float                                              MinDesiredWidth;                                            // 0x0138   (0x0004)  
	float                                              MinDesiredHeight;                                           // 0x013C   (0x0004)  
	float                                              MaxDesiredWidth;                                            // 0x0140   (0x0004)  
	float                                              MaxDesiredHeight;                                           // 0x0144   (0x0004)  
	float                                              MinAspectRatio;                                             // 0x0148   (0x0004)  
	float                                              MaxAspectRatio;                                             // 0x014C   (0x0004)  
	bool                                               bOverride_WidthOverride;                                    // 0x0150:0 (0x0001)  
	bool                                               bOverride_HeightOverride;                                   // 0x0150:1 (0x0001)  
	bool                                               bOverride_MinDesiredWidth;                                  // 0x0150:2 (0x0001)  
	bool                                               bOverride_MinDesiredHeight;                                 // 0x0150:3 (0x0001)  
	bool                                               bOverride_MaxDesiredWidth;                                  // 0x0150:4 (0x0001)  
	bool                                               bOverride_MaxDesiredHeight;                                 // 0x0150:5 (0x0001)  
	bool                                               bOverride_MinAspectRatio;                                   // 0x0150:6 (0x0001)  
	bool                                               bOverride_MaxAspectRatio;                                   // 0x0150:7 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0151   (0x0007)  MISSED


	/// Functions
	// Function /Script/UMG.SizeBox.SetWidthOverride
	void SetWidthOverride(float InWidthOverride);                                                                            // [0x29d2030] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredWidth
	void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x29d1420] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredHeight
	void SetMinDesiredHeight(float InMinDesiredHeight);                                                                      // [0x29d1320] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinAspectRatio
	void SetMinAspectRatio(float InMinAspectRatio);                                                                          // [0x29d12a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredWidth
	void SetMaxDesiredWidth(float InMaxDesiredWidth);                                                                        // [0x29d1220] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredHeight
	void SetMaxDesiredHeight(float InMaxDesiredHeight);                                                                      // [0x29d11a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxAspectRatio
	void SetMaxAspectRatio(float InMaxAspectRatio);                                                                          // [0x29d1120] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetHeightOverride
	void SetHeightOverride(float InHeightOverride);                                                                          // [0x29d0f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearWidthOverride
	void ClearWidthOverride();                                                                                               // [0x29cf630] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredWidth
	void ClearMinDesiredWidth();                                                                                             // [0x29cf610] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredHeight
	void ClearMinDesiredHeight();                                                                                            // [0x29cf5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinAspectRatio
	void ClearMinAspectRatio();                                                                                              // [0x29cf5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredWidth
	void ClearMaxDesiredWidth();                                                                                             // [0x29cf5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredHeight
	void ClearMaxDesiredHeight();                                                                                            // [0x29cf590] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxAspectRatio
	void ClearMaxAspectRatio();                                                                                              // [0x29cf570] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearHeightOverride
	void ClearHeightOverride();                                                                                              // [0x29cf550] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class USizeBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0058   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.SizeBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29d1f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29d1640] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29d1010] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SlateBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/UMG.SlateVectorArtData
/// Size: 0x0038 (0x000028 - 0x000060)
class USlateVectorArtData : public UObject
{ 
public:
	TArray<FSlateMeshVertex>                           VertexData;                                                 // 0x0028   (0x0010)  
	TArray<uint32_t>                                   IndexData;                                                  // 0x0038   (0x0010)  
	UMaterialInterface*                                Material;                                                   // 0x0048   (0x0008)  
	FVector2D                                          ExtentMin;                                                  // 0x0050   (0x0008)  
	FVector2D                                          ExtentMax;                                                  // 0x0058   (0x0008)  
};

/// Class /Script/UMG.SlateAccessibleWidgetData
/// Size: 0x0058 (0x000028 - 0x000080)
class USlateAccessibleWidgetData : public UObject
{ 
public:
	bool                                               bCanChildrenBeAccessible;                                   // 0x0028   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleBehavior;                                         // 0x0029   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleSummaryBehavior;                                  // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x002B   (0x0005)  MISSED
	FText                                              AccessibleText;                                             // 0x0030   (0x0018)  
	FDelegateProperty                                  AccessibleTextDelegate;                                     // 0x0048   (0x0010)  
	FText                                              AccessibleSummaryText;                                      // 0x0058   (0x0018)  
	FDelegateProperty                                  AccessibleSummaryTextDelegate;                              // 0x0070   (0x0010)  
};

/// Class /Script/UMG.Slider
/// Size: 0x03F0 (0x000108 - 0x0004F8)
class USlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0108   (0x0004)  
	FDelegateProperty                                  ValueDelegate;                                              // 0x010C   (0x0010)  
	float                                              MinValue;                                                   // 0x011C   (0x0004)  
	float                                              MaxValue;                                                   // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	FSliderStyle                                       WidgetStyle;                                                // 0x0128   (0x0340)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0468   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0469   (0x0003)  MISSED
	FLinearColor                                       SliderBarColor;                                             // 0x046C   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x047C   (0x0010)  
	bool                                               IndentHandle;                                               // 0x048C   (0x0001)  
	bool                                               Locked;                                                     // 0x048D   (0x0001)  
	bool                                               MouseUsesStep;                                              // 0x048E   (0x0001)  
	bool                                               RequiresControllerLock;                                     // 0x048F   (0x0001)  
	float                                              StepSize;                                                   // 0x0490   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0494   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0495   (0x0003)  MISSED
	FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x0498   (0x0010)  
	FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x04A8   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x04B8   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x04C8   (0x0010)  
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x04D8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x04E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Slider.SetValue
	void SetValue(float InValue);                                                                                            // [0x29d60c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetStepSize
	void SetStepSize(float InValue);                                                                                         // [0x29d5ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderHandleColor
	void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x29d5c10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderBarColor
	void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x29d5b80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMinValue
	void SetMinValue(float InValue);                                                                                         // [0x29d57e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMaxValue
	void SetMaxValue(float InValue);                                                                                         // [0x29d5550] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetLocked
	void SetLocked(bool InValue);                                                                                            // [0x29d53b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetIndentHandle
	void SetIndentHandle(bool InValue);                                                                                      // [0x29d52a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.GetValue
	float GetValue();                                                                                                        // [0x29d4af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Slider.GetNormalizedValue
	float GetNormalizedValue();                                                                                              // [0x29d4900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.Spacer
/// Size: 0x0018 (0x000108 - 0x000120)
class USpacer : public UWidget
{ 
public:
	FVector2D                                          Size;                                                       // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0110   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Spacer.SetSize
	void SetSize(FVector2D InSize);                                                                                          // [0x29d5b00] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.SpinBox
/// Size: 0x0418 (0x000108 - 0x000520)
class USpinBox : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0108   (0x0004)  
	FDelegateProperty                                  ValueDelegate;                                              // 0x010C   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FSpinBoxStyle                                      WidgetStyle;                                                // 0x0120   (0x02E8)  
	USlateWidgetStyleAsset*                            Style;                                                      // 0x0408   (0x0008)  
	int32_t                                            MinFractionalDigits;                                        // 0x0410   (0x0004)  
	int32_t                                            MaxFractionalDigits;                                        // 0x0414   (0x0004)  
	bool                                               bAlwaysUsesDeltaSnap;                                       // 0x0418   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0419   (0x0003)  MISSED
	float                                              Delta;                                                      // 0x041C   (0x0004)  
	float                                              SliderExponent;                                             // 0x0420   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0424   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0428   (0x0058)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x0480   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0481   (0x0003)  MISSED
	float                                              MinDesiredWidth;                                            // 0x0484   (0x0004)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x0488   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x0489   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x048A   (0x0006)  MISSED
	FSlateColor                                        ForegroundColor;                                            // 0x0490   (0x0028)  
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x04B8   (0x0010)  
	FMulticastInlineDelegate                           OnValueCommitted;                                           // 0x04C8   (0x0010)  
	FMulticastInlineDelegate                           OnBeginSliderMovement;                                      // 0x04D8   (0x0010)  
	FMulticastInlineDelegate                           OnEndSliderMovement;                                        // 0x04E8   (0x0010)  
	bool                                               bOverride_MinValue;                                         // 0x04F8:0 (0x0001)  
	bool                                               bOverride_MaxValue;                                         // 0x04F8:1 (0x0001)  
	bool                                               bOverride_MinSliderValue;                                   // 0x04F8:2 (0x0001)  
	bool                                               bOverride_MaxSliderValue;                                   // 0x04F8:3 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x04F9   (0x0003)  MISSED
	float                                              MinValue;                                                   // 0x04FC   (0x0004)  
	float                                              MaxValue;                                                   // 0x0500   (0x0004)  
	float                                              MinSliderValue;                                             // 0x0504   (0x0004)  
	float                                              MaxSliderValue;                                             // 0x0508   (0x0004)  
	unsigned char                                      UnknownData06_6[0x14];                                      // 0x050C   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.SpinBox.SetValue
	void SetValue(float NewValue);                                                                                           // [0x29d6140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinValue
	void SetMinValue(float NewValue);                                                                                        // [0x29d5860] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinSliderValue
	void SetMinSliderValue(float NewValue);                                                                                  // [0x29d5760] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinFractionalDigits
	void SetMinFractionalDigits(int32_t NewValue);                                                                           // [0x29d56d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxValue
	void SetMaxValue(float NewValue);                                                                                        // [0x29d55d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxSliderValue
	void SetMaxSliderValue(float NewValue);                                                                                  // [0x29d54d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxFractionalDigits
	void SetMaxFractionalDigits(int32_t NewValue);                                                                           // [0x29d5440] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetForegroundColor
	void SetForegroundColor(FSlateColor InForegroundColor);                                                                  // [0x29d51b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetDelta
	void SetDelta(float NewValue);                                                                                           // [0x29d4f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetAlwaysUsesDeltaSnap
	void SetAlwaysUsesDeltaSnap(bool bNewValue);                                                                             // [0x29d4b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);              // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);                                                       // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	void OnSpinBoxBeginSliderMovement__DelegateSignature();                                                                  // [0x197e4f0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.GetValue
	float GetValue();                                                                                                        // [0x29d4b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinValue
	float GetMinValue();                                                                                                     // [0x29d48d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinSliderValue
	float GetMinSliderValue();                                                                                               // [0x29d48a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinFractionalDigits
	int32_t GetMinFractionalDigits();                                                                                        // [0x29d4870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxValue
	float GetMaxValue();                                                                                                     // [0x29d4840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxSliderValue
	float GetMaxSliderValue();                                                                                               // [0x29d4810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxFractionalDigits
	int32_t GetMaxFractionalDigits();                                                                                        // [0x29d47e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetDelta
	float GetDelta();                                                                                                        // [0x29d4710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetAlwaysUsesDeltaSnap
	bool GetAlwaysUsesDeltaSnap();                                                                                           // [0x29d46e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.ClearMinValue
	void ClearMinValue();                                                                                                    // [0x29d46c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMinSliderValue
	void ClearMinSliderValue();                                                                                              // [0x29d46a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxValue
	void ClearMaxValue();                                                                                                    // [0x29d4680] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxSliderValue
	void ClearMaxSliderValue();                                                                                              // [0x29d4660] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TextBinding
/// Size: 0x0008 (0x000060 - 0x000068)
class UTextBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/UMG.TextBlock
/// Size: 0x0180 (0x000128 - 0x0002A8)
class UTextBlock : public UTextLayoutWidget
{ 
public:
	FText                                              Text;                                                       // 0x0128   (0x0018)  
	FDelegateProperty                                  TextDelegate;                                               // 0x0140   (0x0010)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0150   (0x0028)  
	FDelegateProperty                                  ColorAndOpacityDelegate;                                    // 0x0178   (0x0010)  
	FSlateFontInfo                                     Font;                                                       // 0x0188   (0x0058)  
	FSlateBrush                                        StrikeBrush;                                                // 0x01E0   (0x0088)  
	FVector2D                                          ShadowOffset;                                               // 0x0268   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0270   (0x0010)  
	FDelegateProperty                                  ShadowColorAndOpacityDelegate;                              // 0x0280   (0x0010)  
	float                                              MinDesiredWidth;                                            // 0x0290   (0x0004)  
	bool                                               bWrapWithInvalidationPanel;                                 // 0x0294   (0x0001)  
	bool                                               bAutoWrapText;                                              // 0x0295   (0x0001)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0296   (0x0001)  
	bool                                               bSimpleTextMode;                                            // 0x0297   (0x0001)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0298   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.TextBlock.SetTextTransformPolicy
	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                     // [0x29d6040] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetText
	void SetText(FText InText);                                                                                              // [0x29d5f50] Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetStrikeBrush
	void SetStrikeBrush(FSlateBrush InStrikeBrush);                                                                          // [0x29d5d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowOffset
	void SetShadowOffset(FVector2D InShadowOffset);                                                                          // [0x29d5a80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowColorAndOpacity
	void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                                     // [0x29d59f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetOpacity
	void SetOpacity(float InOpacity);                                                                                        // [0x29d5970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetMinDesiredWidth
	void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x29d5650] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFont
	void SetFont(FSlateFontInfo InFontInfo);                                                                                 // [0x29d5090] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetColorAndOpacity
	void SetColorAndOpacity(FSlateColor InColorAndOpacity);                                                                  // [0x29d4e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetAutoWrapText
	void SetAutoWrapText(bool InAutoTextWrap);                                                                               // [0x29d4d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetText
	FText GetText();                                                                                                         // [0x29d49b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TextBlock.GetDynamicOutlineMaterial
	UMaterialInstanceDynamic* GetDynamicOutlineMaterial();                                                                   // [0x29d4770] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetDynamicFontMaterial
	UMaterialInstanceDynamic* GetDynamicFontMaterial();                                                                      // [0x29d4740] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Throbber
/// Size: 0x00A8 (0x000108 - 0x0001B0)
class UThrobber : public UWidget
{ 
public:
	int32_t                                            NumberOfPieces;                                             // 0x0108   (0x0004)  
	bool                                               bAnimateHorizontally;                                       // 0x010C   (0x0001)  
	bool                                               bAnimateVertically;                                         // 0x010D   (0x0001)  
	bool                                               bAnimateOpacity;                                            // 0x010E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x010F   (0x0001)  MISSED
	USlateBrushAsset*                                  PieceImage;                                                 // 0x0110   (0x0008)  
	FSlateBrush                                        Image;                                                      // 0x0118   (0x0088)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Throbber.SetNumberOfPieces
	void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                        // [0x29d58e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateVertically
	void SetAnimateVertically(bool bInAnimateVertically);                                                                    // [0x29d4d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateOpacity
	void SetAnimateOpacity(bool bInAnimateOpacity);                                                                          // [0x29d4c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateHorizontally
	void SetAnimateHorizontally(bool bInAnimateHorizontally);                                                                // [0x29d4be0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TileView
/// Size: 0x0020 (0x000368 - 0x000388)
class UTileView : public UListView
{ 
public:
	float                                              EntryHeight;                                                // 0x0368   (0x0004)  
	float                                              EntryWidth;                                                 // 0x036C   (0x0004)  
	EListItemAlignment                                 TileAlignment;                                              // 0x0370   (0x0001)  
	bool                                               bWrapHorizontalNavigation;                                  // 0x0371   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0372   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.TileView.SetEntryWidth
	void SetEntryWidth(float NewWidth);                                                                                      // [0x29d5010] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.SetEntryHeight
	void SetEntryHeight(float NewHeight);                                                                                    // [0x29d4f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.GetEntryWidth
	float GetEntryWidth();                                                                                                   // [0x29d47c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TileView.GetEntryHeight
	float GetEntryHeight();                                                                                                  // [0x29d47a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.TreeView
/// Size: 0x0058 (0x000368 - 0x0003C0)
class UTreeView : public UListView
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0368   (0x0010)  MISSED
	FDelegateProperty                                  BP_OnGetItemChildren;                                       // 0x0378   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemExpansionChanged;                                  // 0x0388   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0398   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.TreeView.SetItemExpansion
	void SetItemExpansion(UObject* Item, bool bExpandItem);                                                                  // [0x29dc380] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.ExpandAll
	void ExpandAll();                                                                                                        // [0x29dae40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.CollapseAll
	void CollapseAll();                                                                                                      // [0x29dae20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UMGSequencePlayer
/// Size: 0x0550 (0x000028 - 0x000578)
class UUMGSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x3E8];                                     // 0x0028   (0x03E8)  MISSED
	UWidgetAnimation*                                  Animation;                                                  // 0x0410   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0418   (0x0008)  MISSED
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0420   (0x00E8)  
	unsigned char                                      UnknownData02_6[0x70];                                      // 0x0508   (0x0070)  MISSED


	/// Functions
	// Function /Script/UMG.UMGSequencePlayer.SetUserTag
	void SetUserTag(FName InUserTag);                                                                                        // [0x29dca00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UMGSequencePlayer.GetUserTag
	FName GetUserTag();                                                                                                      // [0x29db030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UMGSequenceTickManager
/// Size: 0x00F8 (0x000028 - 0x000120)
class UUMGSequenceTickManager : public UObject
{ 
public:
	TSet<TWeakObjectPtr>                               WeakUserWidgets;                                            // 0x0028   (0x0050)  
	UMovieSceneEntitySystemLinker*                     Linker;                                                     // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0080   (0x00A0)  MISSED
};

/// Class /Script/UMG.UniformGridPanel
/// Size: 0x0028 (0x000120 - 0x000148)
class UUniformGridPanel : public UPanelWidget
{ 
public:
	FMargin                                            SlotPadding;                                                // 0x0120   (0x0010)  
	float                                              MinDesiredSlotWidth;                                        // 0x0130   (0x0004)  
	float                                              MinDesiredSlotHeight;                                       // 0x0134   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0138   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.UniformGridPanel.SetSlotPadding
	void SetSlotPadding(FMargin InSlotPadding);                                                                              // [0x29dc970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotWidth
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);                                                                // [0x29dc4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotHeight
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);                                                              // [0x29dc450] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.AddChildToUniformGrid
	UUniformGridSlot* AddChildToUniformGrid(UWidget* Content, int32_t InRow, int32_t InColumn);                              // [0x29da880] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UniformGridSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UUniformGridSlot : public UPanelSlot
{ 
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0038   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            Row;                                                        // 0x003C   (0x0004)  
	int32_t                                            Column;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0044   (0x000C)  MISSED


	/// Functions
	// Function /Script/UMG.UniformGridSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29dca90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetRow
	void SetRow(int32_t InRow);                                                                                              // [0x29dc8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29dc1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetColumn
	void SetColumn(int32_t InColumn);                                                                                        // [0x29dbfe0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBox
/// Size: 0x0010 (0x000120 - 0x000130)
class UVerticalBox : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0120   (0x0010)  MISSED
};

/// Class /Script/UMG.VerticalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UVerticalBoxSlot : public UPanelSlot
{ 
public:
	FSlateChildSize                                    Size;                                                       // 0x0038   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0050   (0x0008)  MISSED
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0058   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.VerticalBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29e0640] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetSize
	void SetSize(FSlateChildSize InSize);                                                                                    // [0x29e03c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29dff50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29df990] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Viewport
/// Size: 0x0048 (0x000120 - 0x000168)
class UViewport : public UContentWidget
{ 
public:
	FLinearColor                                       BackgroundColor;                                            // 0x0120   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0130   (0x0038)  MISSED


	/// Functions
	// Function /Script/UMG.Viewport.Spawn
	AActor* Spawn(UClass* ActorClass);                                                                                       // [0x29e0860] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewRotation
	void SetViewRotation(FRotator Rotation);                                                                                 // [0x29e0750] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewLocation
	void SetViewLocation(FVector Location);                                                                                  // [0x29e06c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.GetViewRotation
	FRotator GetViewRotation();                                                                                              // [0x29df3a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewportWorld
	UWorld* GetViewportWorld();                                                                                              // [0x29df3e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewLocation
	FVector GetViewLocation();                                                                                               // [0x29df360] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.VisibilityBinding
/// Size: 0x0000 (0x000060 - 0x000060)
class UVisibilityBinding : public UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.WidgetAnimation
/// Size: 0x0030 (0x000060 - 0x000090)
class UWidgetAnimation : public UMovieSceneSequence
{ 
public:
	UMovieScene*                                       MovieScene;                                                 // 0x0060   (0x0008)  
	TArray<FWidgetAnimationBinding>                    AnimationBindings;                                          // 0x0068   (0x0010)  
	bool                                               bLegacyFinishOnStop;                                        // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	FString                                            DisplayLabel;                                               // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationStarted
	void UnbindFromAnimationStarted(UUserWidget* Widget, FDelegateProperty Delegate);                                        // [0x29e0b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationFinished
	void UnbindFromAnimationFinished(UUserWidget* Widget, FDelegateProperty Delegate);                                       // [0x29e0a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationStarted(UUserWidget* Widget);                                                                 // [0x29e0990] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	void UnbindAllFromAnimationFinished(UUserWidget* Widget);                                                                // [0x29e0900] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.GetStartTime
	float GetStartTime();                                                                                                    // [0x29df2c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.GetEndTime
	float GetEndTime();                                                                                                      // [0x29df100] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationStarted
	void BindToAnimationStarted(UUserWidget* Widget, FDelegateProperty Delegate);                                            // [0x29ded80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationFinished
	void BindToAnimationFinished(UUserWidget* Widget, FDelegateProperty Delegate);                                           // [0x29deca0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetAnimationDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{ 
public:
	TArray<FBlueprintWidgetAnimationDelegateBinding>   WidgetAnimationDelegateBindings;                            // 0x0028   (0x0010)  
};

/// Class /Script/UMG.WidgetAnimationPlayCallbackProxy
/// Size: 0x0020 (0x000028 - 0x000048)
class UWidgetAnimationPlayCallbackProxy : public UObject
{ 
public:
	FMulticastInlineDelegate                           Finished;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlayBackSpeed); // [0x29e3a60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlayBackSpeed); // [0x29e3840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UMG.WidgetBinding
/// Size: 0x0000 (0x000060 - 0x000060)
class UWidgetBinding : public UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClass
/// Size: 0x0040 (0x000328 - 0x000368)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	UWidgetTree*                                       WidgetTree;                                                 // 0x0328   (0x0008)  
	bool                                               bClassRequiresNativeTick;                                   // 0x0330:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0331   (0x0007)  MISSED
	TArray<FDelegateRuntimeBinding>                    Bindings;                                                   // 0x0338   (0x0010)  
	TArray<UWidgetAnimation*>                          Animations;                                                 // 0x0348   (0x0010)  
	TArray<FName>                                      NamedSlots;                                                 // 0x0358   (0x0010)  
};

/// Class /Script/UMG.WidgetBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/UMG.WidgetComponent
/// Size: 0x0120 (0x000480 - 0x0005A0)
class UWidgetComponent : public UMeshComponent
{ 
public:
	EWidgetSpace                                       Space;                                                      // 0x0478   (0x0001)  
	EWidgetTimingPolicy                                TimingPolicy;                                               // 0x0479   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x047A   (0x0006)  MISSED
	UClass*                                            WidgetClass;                                                // 0x0480   (0x0008)  
	FIntPoint                                          DrawSize;                                                   // 0x0488   (0x0008)  
	bool                                               bManuallyRedraw;                                            // 0x0490   (0x0001)  
	bool                                               bRedrawRequested;                                           // 0x0491   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0492   (0x0002)  MISSED
	float                                              RedrawTime;                                                 // 0x0494   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0498   (0x0008)  MISSED
	FIntPoint                                          CurrentDrawSize;                                            // 0x04A0   (0x0008)  
	bool                                               bDrawAtDesiredSize;                                         // 0x04A8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x04A9   (0x0003)  MISSED
	FVector2D                                          Pivot;                                                      // 0x04AC   (0x0008)  
	bool                                               bReceiveHardwareInput;                                      // 0x04B4   (0x0001)  
	bool                                               bWindowFocusable;                                           // 0x04B5   (0x0001)  
	EWindowVisibility                                  WindowVisibility;                                           // 0x04B6   (0x0001)  
	bool                                               bApplyGammaCorrection;                                      // 0x04B7   (0x0001)  
	ULocalPlayer*                                      OwnerPlayer;                                                // 0x04B8   (0x0008)  
	FLinearColor                                       BackgroundColor;                                            // 0x04C0   (0x0010)  
	FLinearColor                                       TintColorAndOpacity;                                        // 0x04D0   (0x0010)  
	float                                              OpacityFromTexture;                                         // 0x04E0   (0x0004)  
	EWidgetBlendMode                                   BlendMode;                                                  // 0x04E4   (0x0001)  
	bool                                               bIsTwoSided;                                                // 0x04E5   (0x0001)  
	bool                                               TickWhenOffscreen;                                          // 0x04E6   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x04E7   (0x0001)  MISSED
	UBodySetup*                                        BodySetup;                                                  // 0x04E8   (0x0008)  
	UMaterialInterface*                                TranslucentMaterial;                                        // 0x04F0   (0x0008)  
	UMaterialInterface*                                TranslucentMaterial_OneSided;                               // 0x04F8   (0x0008)  
	UMaterialInterface*                                OpaqueMaterial;                                             // 0x0500   (0x0008)  
	UMaterialInterface*                                OpaqueMaterial_OneSided;                                    // 0x0508   (0x0008)  
	UMaterialInterface*                                MaskedMaterial;                                             // 0x0510   (0x0008)  
	UMaterialInterface*                                MaskedMaterial_OneSided;                                    // 0x0518   (0x0008)  
	UTextureRenderTarget2D*                            RenderTarget;                                               // 0x0520   (0x0008)  
	UMaterialInstanceDynamic*                          MaterialInstance;                                           // 0x0528   (0x0008)  
	bool                                               bAddedToScreen;                                             // 0x0530   (0x0001)  
	bool                                               bEditTimeUsable;                                            // 0x0531   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x0532   (0x0002)  MISSED
	FName                                              SharedLayerName;                                            // 0x0534   (0x0008)  
	int32_t                                            LayerZOrder;                                                // 0x053C   (0x0004)  
	EWidgetGeometryMode                                GeometryMode;                                               // 0x0540   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0541   (0x0003)  MISSED
	float                                              CylinderArcAngle;                                           // 0x0544   (0x0004)  
	ETickMode                                          TickMode;                                                   // 0x0548   (0x0001)  
	unsigned char                                      UnknownData07_5[0x27];                                      // 0x0549   (0x0027)  MISSED
	UUserWidget*                                       Widget;                                                     // 0x0570   (0x0008)  
	unsigned char                                      UnknownData08_6[0x28];                                      // 0x0578   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetComponent.SetWindowVisibility
	void SetWindowVisibility(EWindowVisibility InVisibility);                                                                // [0x29e7d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWindowFocusable
	void SetWindowFocusable(bool bInWindowFocusable);                                                                        // [0x29e79e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidgetSpace
	void SetWidgetSpace(EWidgetSpace NewSpace);                                                                              // [0x29e7960] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidget
	void SetWidget(UUserWidget* Widget);                                                                                     // [0x29e78d0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTwoSided
	void SetTwoSided(bool bWantTwoSided);                                                                                    // [0x29e7840] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTintColorAndOpacity
	void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity);                                                        // [0x29e77b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickWhenOffscreen
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);                                                                  // [0x29e7720] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickMode
	void SetTickMode(ETickMode InTickMode);                                                                                  // [0x29e76a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetRedrawTime
	void SetRedrawTime(float InRedrawTime);                                                                                  // [0x29e7620] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetPivot
	void SetPivot(FVector2D& InPivot);                                                                                       // [0x29e7590] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetOwnerPlayer
	void SetOwnerPlayer(ULocalPlayer* LocalPlayer);                                                                          // [0x29e7500] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetManuallyRedraw
	void SetManuallyRedraw(bool bUseManualRedraw);                                                                           // [0x29e7340] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetGeometryMode
	void SetGeometryMode(EWidgetGeometryMode InGeometryMode);                                                                // [0x29e6c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawSize
	void SetDrawSize(FVector2D Size);                                                                                        // [0x29e6bb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawAtDesiredSize
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);                                                                    // [0x29e6b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetCylinderArcAngle
	void SetCylinderArcAngle(float InCylinderArcAngle);                                                                      // [0x29e6aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetBackgroundColor
	void SetBackgroundColor(FLinearColor NewBackgroundColor);                                                                // [0x29e6700] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRedraw
	void RequestRedraw();                                                                                                    // [0xec4e10] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.IsWidgetVisible
	bool IsWidgetVisible();                                                                                                  // [0x29e5f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowVisiblility
	EWindowVisibility GetWindowVisiblility();                                                                                // [0x29e5ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowFocusable
	bool GetWindowFocusable();                                                                                               // [0x29e5eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidgetSpace
	EWidgetSpace GetWidgetSpace();                                                                                           // [0x29e5e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidget
	UUserWidget* GetWidget();                                                                                                // [0x29e5e60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetUserWidgetObject
	UUserWidget* GetUserWidgetObject();                                                                                      // [0x29e5e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTwoSided
	bool GetTwoSided();                                                                                                      // [0x29e5de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTickWhenOffscreen
	bool GetTickWhenOffscreen();                                                                                             // [0x29e5dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRenderTarget
	UTextureRenderTarget2D* GetRenderTarget();                                                                               // [0x29e5c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRedrawTime
	float GetRedrawTime();                                                                                                   // [0x29e5bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetPivot
	FVector2D GetPivot();                                                                                                    // [0x29e5bc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetOwnerPlayer
	ULocalPlayer* GetOwnerPlayer();                                                                                          // [0x29e5b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetMaterialInstance
	UMaterialInstanceDynamic* GetMaterialInstance();                                                                         // [0x29e5b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetManuallyRedraw
	bool GetManuallyRedraw();                                                                                                // [0x24ab6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetGeometryMode
	EWidgetGeometryMode GetGeometryMode();                                                                                   // [0x29e5590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawSize
	FVector2D GetDrawSize();                                                                                                 // [0x29e53d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawAtDesiredSize
	bool GetDrawAtDesiredSize();                                                                                             // [0x29e53b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCylinderArcAngle
	float GetCylinderArcAngle();                                                                                             // [0x29e5360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCurrentDrawSize
	FVector2D GetCurrentDrawSize();                                                                                          // [0x29e5320] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetInteractionComponent
/// Size: 0x0200 (0x000200 - 0x000400)
class UWidgetInteractionComponent : public USceneComponent
{ 
public:
	FMulticastInlineDelegate                           OnHoveredWidgetChanged;                                     // 0x01F8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0208   (0x0010)  MISSED
	int32_t                                            VirtualUserIndex;                                           // 0x0218   (0x0004)  
	int32_t                                            PointerIndex;                                               // 0x021C   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                               // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0221   (0x0003)  MISSED
	float                                              InteractionDistance;                                        // 0x0224   (0x0004)  
	EWidgetInteractionSource                           InteractionSource;                                          // 0x0228   (0x0001)  
	bool                                               bEnableHitTesting;                                          // 0x0229   (0x0001)  
	bool                                               bShowDebug;                                                 // 0x022A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x022B   (0x0001)  MISSED
	float                                              DebugSphereLineThickness;                                   // 0x022C   (0x0004)  
	float                                              DebugLineThickness;                                         // 0x0230   (0x0004)  
	FLinearColor                                       DebugColor;                                                 // 0x0234   (0x0010)  
	unsigned char                                      UnknownData03_5[0x7C];                                      // 0x0244   (0x007C)  MISSED
	FHitResult                                         CustomHitResult;                                            // 0x02C0   (0x008C)  
	FVector2D                                          LocalHitLocation;                                           // 0x034C   (0x0008)  
	FVector2D                                          LastLocalHitLocation;                                       // 0x0354   (0x0008)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x035C   (0x0004)  MISSED
	UWidgetComponent*                                  HoveredWidgetComponent;                                     // 0x0360   (0x0008)  
	FHitResult                                         LastHitResult;                                              // 0x0368   (0x008C)  
	bool                                               bIsHoveredWidgetInteractable;                               // 0x03F4   (0x0001)  
	bool                                               bIsHoveredWidgetFocusable;                                  // 0x03F5   (0x0001)  
	bool                                               bIsHoveredWidgetHitTestVisible;                             // 0x03F6   (0x0001)  
	unsigned char                                      UnknownData05_6[0x9];                                       // 0x03F7   (0x0009)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetInteractionComponent.SetFocus
	void SetFocus(UWidget* FocusWidget);                                                                                     // [0x29ead70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SetCustomHitResult
	void SetCustomHitResult(FHitResult& HitResult);                                                                          // [0x29eab80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SendKeyChar
	bool SendKeyChar(FString Characters, bool bRepeat);                                                                      // [0x29ea9a0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ScrollWheel
	void ScrollWheel(float ScrollDelta);                                                                                     // [0x29ea910] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleasePointerKey
	void ReleasePointerKey(FKey Key);                                                                                        // [0x29ea7a0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleaseKey
	bool ReleaseKey(FKey Key);                                                                                               // [0x29ea6a0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressPointerKey
	void PressPointerKey(FKey Key);                                                                                          // [0x29ea440] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressKey
	bool PressKey(FKey Key, bool bRepeat);                                                                                   // [0x29ea300] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressAndReleaseKey
	bool PressAndReleaseKey(FKey Key);                                                                                       // [0x29ea200] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverInteractableWidget
	bool IsOverInteractableWidget();                                                                                         // [0x29ea1d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	bool IsOverHitTestVisibleWidget();                                                                                       // [0x29ea1a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverFocusableWidget
	bool IsOverFocusableWidget();                                                                                            // [0x29ea170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetLastHitResult
	FHitResult GetLastHitResult();                                                                                           // [0x29e9ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	UWidgetComponent* GetHoveredWidgetComponent();                                                                           // [0x29e9b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.Get2DHitLocation
	FVector2D Get2DHitLocation();                                                                                            // [0x29e9ad0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetLayoutLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/UMG.WidgetNavigation
/// Size: 0x00D8 (0x000028 - 0x000100)
class UWidgetNavigation : public UObject
{ 
public:
	FWidgetNavigationData                              Up;                                                         // 0x0028   (0x0024)  
	FWidgetNavigationData                              Down;                                                       // 0x004C   (0x0024)  
	FWidgetNavigationData                              Left;                                                       // 0x0070   (0x0024)  
	FWidgetNavigationData                              Right;                                                      // 0x0094   (0x0024)  
	FWidgetNavigationData                              Next;                                                       // 0x00B8   (0x0024)  
	FWidgetNavigationData                              Previous;                                                   // 0x00DC   (0x0024)  
};

/// Class /Script/UMG.WidgetSwitcher
/// Size: 0x0018 (0x000120 - 0x000138)
class UWidgetSwitcher : public UPanelWidget
{ 
public:
	int32_t                                            ActiveWidgetIndex;                                          // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0124   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidgetIndex
	void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x29eaaf0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidget
	void SetActiveWidget(UWidget* Widget);                                                                                   // [0x29c76a0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.GetWidgetAtIndex
	UWidget* GetWidgetAtIndex(int32_t Index);                                                                                // [0x29ea0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetNumWidgets
	int32_t GetNumWidgets();                                                                                                 // [0x29e9e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidgetIndex
	int32_t GetActiveWidgetIndex();                                                                                          // [0x29e9b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidget
	UWidget* GetActiveWidget();                                                                                              // [0x29e9b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetSwitcherSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWidgetSwitcherSlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0050   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetSwitcherSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29eb2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29eb080] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29eae00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetTree
/// Size: 0x0008 (0x000028 - 0x000030)
class UWidgetTree : public UObject
{ 
public:
	UWidget*                                           RootWidget;                                                 // 0x0028   (0x0008)  
};

/// Class /Script/UMG.WindowTitleBarArea
/// Size: 0x0020 (0x000120 - 0x000140)
class UWindowTitleBarArea : public UContentWidget
{ 
public:
	bool                                               bWindowButtonsEnabled;                                      // 0x0120   (0x0001)  
	bool                                               bDoubleClickTogglesFullscreen;                              // 0x0121   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1E];                                      // 0x0122   (0x001E)  MISSED


	/// Functions
	// Function /Script/UMG.WindowTitleBarArea.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29eb340] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29eb110] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29eae80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WindowTitleBarAreaSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UWindowTitleBarAreaSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29eb3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29eb1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29eaf00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBox
/// Size: 0x0028 (0x000120 - 0x000148)
class UWrapBox : public UPanelWidget
{ 
public:
	FVector2D                                          InnerSlotPadding;                                           // 0x0120   (0x0008)  
	float                                              WrapWidth;                                                  // 0x0128   (0x0004)  
	float                                              WrapSize;                                                   // 0x012C   (0x0004)  
	bool                                               bExplicitWrapWidth;                                         // 0x0130   (0x0001)  
	bool                                               bExplicitWrapSize;                                          // 0x0131   (0x0001)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0132   (0x0001)  
	unsigned char                                      UnknownData00_6[0x15];                                      // 0x0133   (0x0015)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBox.SetInnerSlotPadding
	void SetInnerSlotPadding(FVector2D InPadding);                                                                           // [0x29eb000] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WrapBox.AddChildToWrapBox
	UWrapBoxSlot* AddChildToWrapBox(UWidget* Content);                                                                       // [0x29e9a30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UWrapBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	bool                                               bFillEmptySpace;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              FillSpanWhenLessThan;                                       // 0x004C   (0x0004)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0050   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0052   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x29eb440] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x29eb230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29eaf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);                                                              // [0x29eacf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillEmptySpace
	void SetFillEmptySpace(bool InbFillEmptySpace);                                                                          // [0x29eac60] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.EventReply
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FEventReply
{ 
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0000   (0x00B8)  MISSED
};

/// Struct /Script/UMG.WidgetTransform
/// Size: 0x001C (0x000000 - 0x00001C)
struct FWidgetTransform
{ 
	FVector2D                                          Translation;                                                // 0x0000   (0x0008)  
	FVector2D                                          Scale;                                                      // 0x0008   (0x0008)  
	FVector2D                                          Shear;                                                      // 0x0010   (0x0008)  
	float                                              Angle;                                                      // 0x0018   (0x0004)  
};

/// Struct /Script/UMG.PaintContext
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPaintContext
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/UMG.ShapedTextOptions
/// Size: 0x0003 (0x000000 - 0x000003)
struct FShapedTextOptions
{ 
	bool                                               bOverride_TextShapingMethod;                                // 0x0000:0 (0x0001)  
	bool                                               bOverride_TextFlowDirection;                                // 0x0000:1 (0x0001)  
	ETextShapingMethod                                 TextShapingMethod;                                          // 0x0001   (0x0001)  
	ETextFlowDirection                                 TextFlowDirection;                                          // 0x0002   (0x0001)  
};

/// Struct /Script/UMG.AnimationEventBinding
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAnimationEventBinding
{ 
	UWidgetAnimation*                                  Animation;                                                  // 0x0000   (0x0008)  
	FDelegateProperty                                  Delegate;                                                   // 0x0008   (0x0010)  
	EWidgetAnimationEvent                              AnimationEvent;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              UserTag;                                                    // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UMG.NamedSlotBinding
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNamedSlotBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	UWidget*                                           Content;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/UMG.AnchorData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAnchorData
{ 
	FMargin                                            Offsets;                                                    // 0x0000   (0x0010)  
	FAnchors                                           Anchors;                                                    // 0x0010   (0x0010)  
	FVector2D                                          Alignment;                                                  // 0x0020   (0x0008)  
};

/// Struct /Script/UMG.DynamicPropertyPath
/// Size: 0x0000 (0x000028 - 0x000028)
struct FDynamicPropertyPath : FCachedPropertyPath
{ 
};

/// Struct /Script/UMG.MovieScene2DTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieScene2DTransformMask
{ 
	uint32_t                                           Mask;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/UMG.MovieSceneMarginSectionTemplate
/// Size: 0x0288 (0x000038 - 0x0002C0)
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneFloatChannel                            TopCurve;                                                   // 0x0038   (0x00A0)  
	FMovieSceneFloatChannel                            LeftCurve;                                                  // 0x00D8   (0x00A0)  
	FMovieSceneFloatChannel                            RightCurve;                                                 // 0x0178   (0x00A0)  
	FMovieSceneFloatChannel                            BottomCurve;                                                // 0x0218   (0x00A0)  
	EMovieSceneBlendType                               BlendType;                                                  // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02B9   (0x0007)  MISSED
};

/// Struct /Script/UMG.MovieSceneWidgetMaterialSectionTemplate
/// Size: 0x0010 (0x000080 - 0x000090)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{ 
	TArray<FName>                                      BrushPropertyNamePath;                                      // 0x0080   (0x0010)  
};

/// Struct /Script/UMG.RadialBoxSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRadialBoxSettings
{ 
	bool                                               bDistributeItemsEvenly;                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              AngleBetweenItems;                                          // 0x0004   (0x0004)  
	float                                              StartingAngle;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/UMG.RichTextStyleRow
/// Size: 0x0270 (0x000008 - 0x000278)
struct FRichTextStyleRow : FTableRowBase
{ 
	FTextBlockStyle                                    TextStyle;                                                  // 0x0008   (0x0270)  
};

/// Struct /Script/UMG.RichImageRow
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRichImageRow : FTableRowBase
{ 
	FSlateBrush                                        Brush;                                                      // 0x0008   (0x0088)  
};

/// Struct /Script/UMG.SlateMeshVertex
/// Size: 0x003C (0x000000 - 0x00003C)
struct FSlateMeshVertex
{ 
	FVector2D                                          Position;                                                   // 0x0000   (0x0008)  
	FColor                                             Color;                                                      // 0x0008   (0x0004)  
	FVector2D                                          UV0;                                                        // 0x000C   (0x0008)  
	FVector2D                                          UV1;                                                        // 0x0014   (0x0008)  
	FVector2D                                          UV2;                                                        // 0x001C   (0x0008)  
	FVector2D                                          UV3;                                                        // 0x0024   (0x0008)  
	FVector2D                                          UV4;                                                        // 0x002C   (0x0008)  
	FVector2D                                          UV5;                                                        // 0x0034   (0x0008)  
};

/// Struct /Script/UMG.SlateChildSize
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSlateChildSize
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	TEnumAsByte<ESlateSizeRule>                        SizeRule;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/UMG.UserWidgetPool
/// Size: 0x0080 (0x000000 - 0x000080)
struct FUserWidgetPool
{ 
	TArray<UUserWidget*>                               ActiveWidgets;                                              // 0x0000   (0x0010)  
	TArray<UUserWidget*>                               InactiveWidgets;                                            // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0020   (0x0060)  MISSED
};

/// Struct /Script/UMG.WidgetAnimationBinding
/// Size: 0x0024 (0x000000 - 0x000024)
struct FWidgetAnimationBinding
{ 
	FName                                              WidgetName;                                                 // 0x0000   (0x0008)  
	FName                                              SlotWidgetName;                                             // 0x0008   (0x0008)  
	FGuid                                              AnimationGuid;                                              // 0x0010   (0x0010)  
	bool                                               bIsRootWidget;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Struct /Script/UMG.BlueprintWidgetAnimationDelegateBinding
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBlueprintWidgetAnimationDelegateBinding
{ 
	EWidgetAnimationEvent                              Action;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              AnimationToBind;                                            // 0x0004   (0x0008)  
	FName                                              FunctionNameToBind;                                         // 0x000C   (0x0008)  
	FName                                              UserTag;                                                    // 0x0014   (0x0008)  
};

/// Struct /Script/UMG.DelegateRuntimeBinding
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDelegateRuntimeBinding
{ 
	FString                                            ObjectName;                                                 // 0x0000   (0x0010)  
	FName                                              PropertyName;                                               // 0x0010   (0x0008)  
	FName                                              FunctionName;                                               // 0x0018   (0x0008)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0020   (0x0028)  
	EBindingKind                                       Kind;                                                       // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/UMG.WidgetComponentInstanceData
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Struct /Script/UMG.WidgetNavigationData
/// Size: 0x0024 (0x000000 - 0x000024)
struct FWidgetNavigationData
{ 
	EUINavigationRule                                  Rule;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              WidgetToFocus;                                              // 0x0004   (0x0008)  
	TWeakObjectPtr<UWidget*>                           Widget;                                                     // 0x000C   (0x0008)  
	FDelegateProperty                                  CustomDelegate;                                             // 0x0014   (0x0010)  
};

/// Enum /Script/UMG.ESlateAccessibleBehavior
/// Size: 0x06
enum ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible                                          = 0,
	ESlateAccessibleBehavior__Auto                                                   = 1,
	ESlateAccessibleBehavior__Summary                                                = 2,
	ESlateAccessibleBehavior__Custom                                                 = 3,
	ESlateAccessibleBehavior__ToolTip                                                = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX                           = 5
};

/// Enum /Script/UMG.ESlateVisibility
/// Size: 0x06
enum ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible                                                        = 0,
	ESlateVisibility__Collapsed                                                      = 1,
	ESlateVisibility__Hidden                                                         = 2,
	ESlateVisibility__HitTestInvisible                                               = 3,
	ESlateVisibility__SelfHitTestInvisible                                           = 4,
	ESlateVisibility__ESlateVisibility_MAX                                           = 5
};

/// Enum /Script/UMG.EVirtualKeyboardType
/// Size: 0x07
enum EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default                                                    = 0,
	EVirtualKeyboardType__Number                                                     = 1,
	EVirtualKeyboardType__Web                                                        = 2,
	EVirtualKeyboardType__Email                                                      = 3,
	EVirtualKeyboardType__Password                                                   = 4,
	EVirtualKeyboardType__AlphaNumeric                                               = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX                                   = 6
};

/// Enum /Script/UMG.EWidgetAnimationEvent
/// Size: 0x03
enum EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started                                                   = 0,
	EWidgetAnimationEvent__Finished                                                  = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX                                 = 2
};

/// Enum /Script/UMG.EUMGSequencePlayMode
/// Size: 0x04
enum EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward                                                    = 0,
	EUMGSequencePlayMode__Reverse                                                    = 1,
	EUMGSequencePlayMode__PingPong                                                   = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX                                   = 3
};

/// Enum /Script/UMG.EWidgetTickFrequency
/// Size: 0x03
enum EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never                                                      = 0,
	EWidgetTickFrequency__Auto                                                       = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX                                   = 2
};

/// Enum /Script/UMG.EDragPivot
/// Size: 0x11
enum EDragPivot : uint8_t
{
	EDragPivot__MouseDown                                                            = 0,
	EDragPivot__TopLeft                                                              = 1,
	EDragPivot__TopCenter                                                            = 2,
	EDragPivot__TopRight                                                             = 3,
	EDragPivot__CenterLeft                                                           = 4,
	EDragPivot__CenterCenter                                                         = 5,
	EDragPivot__CenterRight                                                          = 6,
	EDragPivot__BottomLeft                                                           = 7,
	EDragPivot__BottomCenter                                                         = 8,
	EDragPivot__BottomRight                                                          = 9,
	EDragPivot__EDragPivot_MAX                                                       = 10
};

/// Enum /Script/UMG.EDynamicBoxType
/// Size: 0x07
enum EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal                                                      = 0,
	EDynamicBoxType__Vertical                                                        = 1,
	EDynamicBoxType__Wrap                                                            = 2,
	EDynamicBoxType__VerticalWrap                                                    = 3,
	EDynamicBoxType__Radial                                                          = 4,
	EDynamicBoxType__Overlay                                                         = 5,
	EDynamicBoxType__EDynamicBoxType_MAX                                             = 6
};

/// Enum /Script/UMG.ESlateSizeRule
/// Size: 0x03
enum ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic                                                        = 0,
	ESlateSizeRule__Fill                                                             = 1,
	ESlateSizeRule__ESlateSizeRule_MAX                                               = 2
};

/// Enum /Script/UMG.EWidgetDesignFlags
/// Size: 0x05
enum EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None                                                         = 0,
	EWidgetDesignFlags__Designing                                                    = 1,
	EWidgetDesignFlags__ShowOutline                                                  = 2,
	EWidgetDesignFlags__ExecutePreConstruct                                          = 4,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX                                       = 5
};

/// Enum /Script/UMG.EBindingKind
/// Size: 0x03
enum EBindingKind : uint8_t
{
	EBindingKind__Function                                                           = 0,
	EBindingKind__Property                                                           = 1,
	EBindingKind__EBindingKind_MAX                                                   = 2
};

/// Enum /Script/UMG.ETickMode
/// Size: 0x04
enum ETickMode : uint8_t
{
	ETickMode__Disabled                                                              = 0,
	ETickMode__Enabled                                                               = 1,
	ETickMode__Automatic                                                             = 2,
	ETickMode__ETickMode_MAX                                                         = 3
};

/// Enum /Script/UMG.EWindowVisibility
/// Size: 0x03
enum EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible                                                       = 0,
	EWindowVisibility__SelfHitTestInvisible                                          = 1,
	EWindowVisibility__EWindowVisibility_MAX                                         = 2
};

/// Enum /Script/UMG.EWidgetGeometryMode
/// Size: 0x03
enum EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane                                                       = 0,
	EWidgetGeometryMode__Cylinder                                                    = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX                                     = 2
};

/// Enum /Script/UMG.EWidgetBlendMode
/// Size: 0x04
enum EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque                                                         = 0,
	EWidgetBlendMode__Masked                                                         = 1,
	EWidgetBlendMode__Transparent                                                    = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX                                           = 3
};

/// Enum /Script/UMG.EWidgetTimingPolicy
/// Size: 0x03
enum EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime                                                    = 0,
	EWidgetTimingPolicy__GameTime                                                    = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX                                     = 2
};

/// Enum /Script/UMG.EWidgetSpace
/// Size: 0x03
enum EWidgetSpace : uint8_t
{
	EWidgetSpace__World                                                              = 0,
	EWidgetSpace__Screen                                                             = 1,
	EWidgetSpace__EWidgetSpace_MAX                                                   = 2
};

/// Enum /Script/UMG.EWidgetInteractionSource
/// Size: 0x05
enum EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World                                                  = 0,
	EWidgetInteractionSource__Mouse                                                  = 1,
	EWidgetInteractionSource__CenterScreen                                           = 2,
	EWidgetInteractionSource__Custom                                                 = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX                           = 4
};

