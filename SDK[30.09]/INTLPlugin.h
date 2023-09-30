/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package INTLPlugin.

/// Class /Script/INTLPlugin.INTLBaseUserWidget
/// Size: 0x0008 (0x000260 - 0x000268)
class UINTLBaseUserWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0260   (0x0008)  MISSED
};

/// Class /Script/INTLPlugin.INTLOutputUtility
/// Size: 0x0000 (0x000028 - 0x000028)
class UINTLOutputUtility : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/INTLPlugin.INTLPluginObserver
/// Size: 0x0000 (0x000028 - 0x000028)
class UINTLPluginObserver : public UInterface
{ 
public:
};

/// Class /Script/INTLPlugin.INTLSDKAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UINTLSDKAPI : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/INTLPlugin.INTLUtility
/// Size: 0x0000 (0x000028 - 0x000028)
class UINTLUtility : public UBlueprintFunctionLibrary
{ 
public:
};

/// Struct /Script/INTLPlugin.INTLBaseResult
/// Size: 0x0040 (0x000000 - 0x000040)
struct FINTLBaseResult
{ 
	int32_t                                            MethodId;                                                   // 0x0000   (0x0004)  
	int32_t                                            RetCode;                                                    // 0x0004   (0x0004)  
	FString                                            RetMsg;                                                     // 0x0008   (0x0010)  
	int32_t                                            ThirdCode;                                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ThirdMsg;                                                   // 0x0020   (0x0010)  
	FString                                            ExtraJson;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/INTLPlugin.CutoutInfoResult
/// Size: 0x0030 (0x000040 - 0x000070)
struct FCutoutInfoResult : FINTLBaseResult
{ 
	bool                                               HasCutout;                                                  // 0x0040   (0x0001)  
	bool                                               IsCutoutHidden;                                             // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	int32_t                                            ScreenHeight;                                               // 0x0044   (0x0004)  
	int32_t                                            ScreenWidth;                                                // 0x0048   (0x0004)  
	int32_t                                            StatusBarHeight;                                            // 0x004C   (0x0004)  
	TArray<FCutoutRect>                                CutoutRects;                                                // 0x0050   (0x0010)  
	FCutoutRect                                        SafeArea;                                                   // 0x0060   (0x0010)  
};

/// Struct /Script/INTLPlugin.CutoutRect
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCutoutRect
{ 
	int32_t                                            Top;                                                        // 0x0000   (0x0004)  
	int32_t                                            Bottom;                                                     // 0x0004   (0x0004)  
	int32_t                                            Left;                                                       // 0x0008   (0x0004)  
	int32_t                                            Right;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/INTLPlugin.INTLExtendResult
/// Size: 0x0018 (0x000040 - 0x000058)
struct FINTLExtendResult : FINTLBaseResult
{ 
	EINTLLoginChannel                                  Channel;                                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FString                                            ExtendMethodName;                                           // 0x0048   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLDNSResult
/// Size: 0x0030 (0x000040 - 0x000070)
struct FINTLDNSResult : FINTLBaseResult
{ 
	FString                                            V4;                                                         // 0x0040   (0x0010)  
	FString                                            V6;                                                         // 0x0050   (0x0010)  
	FString                                            Host;                                                       // 0x0060   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLLBSIPInfoResult
/// Size: 0x0028 (0x000040 - 0x000068)
struct FINTLLBSIPInfoResult : FINTLBaseResult
{ 
	FString                                            Region;                                                     // 0x0040   (0x0010)  
	FString                                            Alpha2;                                                     // 0x0050   (0x0010)  
	int32_t                                            Timestamp;                                                  // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/INTLPlugin.INTLDirTreeNode
/// Size: 0x0060 (0x000000 - 0x000060)
struct FINTLDirTreeNode
{ 
	int32_t                                            NodeId;                                                     // 0x0000   (0x0004)  
	int32_t                                            ParentId;                                                   // 0x0004   (0x0004)  
	bool                                               IsLeaf;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            URL;                                                        // 0x0020   (0x0010)  
	int32_t                                            Status;                                                     // 0x0030   (0x0004)  
	int32_t                                            Tag;                                                        // 0x0034   (0x0004)  
	int32_t                                            CustomInt1;                                                 // 0x0038   (0x0004)  
	int32_t                                            CustomInt2;                                                 // 0x003C   (0x0004)  
	FString                                            CustomStr;                                                  // 0x0040   (0x0010)  
	TArray<int32_t>                                    ChildrenIdSet;                                              // 0x0050   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLDirTreeResult
/// Size: 0x0030 (0x000040 - 0x000070)
struct FINTLDirTreeResult : FINTLBaseResult
{ 
	int32_t                                            TreeId;                                                     // 0x0040   (0x0004)  
	int32_t                                            NodeId;                                                     // 0x0044   (0x0004)  
	FString                                            TreeInfo;                                                   // 0x0048   (0x0010)  
	FString                                            RoleInfo;                                                   // 0x0058   (0x0010)  
	int32_t                                            ExpireTime;                                                 // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/INTLPlugin.INTLUpdateOptionalRepoFilesStatus
/// Size: 0x0020 (0x000000 - 0x000020)
struct FINTLUpdateOptionalRepoFilesStatus
{ 
	FString                                            FilePath;                                                   // 0x0000   (0x0010)  
	int32_t                                            TotalFileNum;                                               // 0x0010   (0x0004)  
	int32_t                                            ValidFileNum;                                               // 0x0014   (0x0004)  
	int32_t                                            NeedDownloadSize;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/INTLPlugin.INTLUpdateInitInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FINTLUpdateInitInfo
{ 
	EINTLUpdateActionType                              ActionType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            RepoID;                                                     // 0x0004   (0x0004)  
	int32_t                                            ResourceCopyType;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            ResourceSavePath;                                           // 0x0010   (0x0010)  
	FString                                            FirstResourceDirPath;                                       // 0x0020   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLUpdateOptionalRepoInitResult
/// Size: 0x0008 (0x000040 - 0x000048)
struct FINTLUpdateOptionalRepoInitResult : FINTLBaseResult
{ 
	EINTLUpdateActionType                              ActionType;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            RepoID;                                                     // 0x0044   (0x0004)  
};

/// Struct /Script/INTLPlugin.INTLUpdateResult
/// Size: 0x0010 (0x000040 - 0x000050)
struct FINTLUpdateResult : FINTLBaseResult
{ 
	EINTLUpdateActionType                              ActionType;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            RepoID;                                                     // 0x0044   (0x0004)  
	int32_t                                            TaskID;                                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/INTLPlugin.INTLUpdateProgress
/// Size: 0x0040 (0x000000 - 0x000040)
struct FINTLUpdateProgress
{ 
	int32_t                                            MethodId;                                                   // 0x0000   (0x0004)  
	EINTLUpdateActionType                              ActionType;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            UpdateStep;                                                 // 0x0008   (0x0004)  
	int32_t                                            RepoID;                                                     // 0x000C   (0x0004)  
	int32_t                                            TaskID;                                                     // 0x0010   (0x0004)  
	int32_t                                            FinishedSize;                                               // 0x0014   (0x0004)  
	int32_t                                            TotalSize;                                                  // 0x0018   (0x0004)  
	int32_t                                            Speed;                                                      // 0x001C   (0x0004)  
	int32_t                                            RemainTime;                                                 // 0x0020   (0x0004)  
	float                                              StepProgress;                                               // 0x0024   (0x0004)  
	float                                              TotalProgress;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            ErrorMsg;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLUpdateStartRepoNewVersionInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FINTLUpdateStartRepoNewVersionInfo
{ 
	int32_t                                            MethodId;                                                   // 0x0000   (0x0004)  
	EINTLUpdateActionType                              ActionType;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            NewVersionType;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Version;                                                    // 0x0010   (0x0010)  
	int32_t                                            NeedDownloadSize;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            GameDefinedStr;                                             // 0x0028   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLCustomerUserProfile
/// Size: 0x0100 (0x000000 - 0x000100)
struct FINTLCustomerUserProfile
{ 
	FString                                            LangType;                                                   // 0x0000   (0x0010)  
	FString                                            Sign;                                                       // 0x0010   (0x0010)  
	FString                                            OpenId;                                                     // 0x0020   (0x0010)  
	FString                                            GameLevel;                                                  // 0x0030   (0x0010)  
	FString                                            NickName;                                                   // 0x0040   (0x0010)  
	FString                                            RoleId;                                                     // 0x0050   (0x0010)  
	FString                                            AreaId;                                                     // 0x0060   (0x0010)  
	FString                                            ZoneId;                                                     // 0x0070   (0x0010)  
	FString                                            GameSvrId;                                                  // 0x0080   (0x0010)  
	FString                                            Region;                                                     // 0x0090   (0x0010)  
	FString                                            PictureUrl;                                                 // 0x00A0   (0x0010)  
	FString                                            CustomParam1;                                               // 0x00B0   (0x0010)  
	FString                                            CustomParam2;                                               // 0x00C0   (0x0010)  
	FString                                            CustomParam3;                                               // 0x00D0   (0x0010)  
	FString                                            CustomParam4;                                               // 0x00E0   (0x0010)  
	FString                                            CustomParam5;                                               // 0x00F0   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLCustomerResult
/// Size: 0x0008 (0x000040 - 0x000048)
struct FINTLCustomerResult : FINTLBaseResult
{ 
	int32_t                                            MsgType;                                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/INTLPlugin.INTLComplianceResult
/// Size: 0x0078 (0x000040 - 0x0000B8)
struct FINTLComplianceResult : FINTLBaseResult
{ 
	int32_t                                            AdultStatus;                                                // 0x0040   (0x0004)  
	int32_t                                            ParentCertificateStatus;                                    // 0x0044   (0x0004)  
	FString                                            ParentCertificateStatusExpiration;                          // 0x0048   (0x0010)  
	int32_t                                            EUUserAgreeStatus;                                          // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            CountryCode;                                                // 0x0060   (0x0010)  
	int32_t                                            AdultAge;                                                   // 0x0070   (0x0004)  
	int32_t                                            GameGrade;                                                  // 0x0074   (0x0004)  
	int32_t                                            CertificateType;                                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FString                                            AdultStatusExpiration;                                      // 0x0080   (0x0010)  
	FString                                            TS;                                                         // 0x0090   (0x0010)  
	bool                                               IsEEA;                                                      // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	FString                                            Region;                                                     // 0x00A8   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLWebViewResult
/// Size: 0x0018 (0x000040 - 0x000058)
struct FINTLWebViewResult : FINTLBaseResult
{ 
	int32_t                                            MsgType;                                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            MsgJsonData;                                                // 0x0048   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLPushResult
/// Size: 0x0018 (0x000040 - 0x000058)
struct FINTLPushResult : FINTLBaseResult
{ 
	int32_t                                            Type;                                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            Notification;                                               // 0x0048   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLLocalNotificationIOS
/// Size: 0x0080 (0x000000 - 0x000080)
struct FINTLLocalNotificationIOS
{ 
	int32_t                                            RepeatType;                                                 // 0x0000   (0x0004)  
	int32_t                                            FireTime;                                                   // 0x0004   (0x0004)  
	int32_t                                            Badge;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            AlertBody;                                                  // 0x0010   (0x0010)  
	FString                                            AlertAction;                                                // 0x0020   (0x0010)  
	TMap<FString, FString>                             UserInfo;                                                   // 0x0030   (0x0050)  
};

/// Struct /Script/INTLPlugin.INTLLocalNotification
/// Size: 0x0078 (0x000000 - 0x000078)
struct FINTLLocalNotification
{ 
	int32_t                                            NotificationID;                                             // 0x0000   (0x0004)  
	int32_t                                            ActionType;                                                 // 0x0004   (0x0004)  
	int32_t                                            SoundEnabled;                                               // 0x0008   (0x0004)  
	int32_t                                            Lights;                                                     // 0x000C   (0x0004)  
	int32_t                                            Vibrate;                                                    // 0x0010   (0x0004)  
	int32_t                                            FireTime;                                                   // 0x0014   (0x0004)  
	FString                                            Title;                                                      // 0x0018   (0x0010)  
	FString                                            Content;                                                    // 0x0028   (0x0010)  
	FString                                            TickerText;                                                 // 0x0038   (0x0010)  
	FString                                            ActionParameter;                                            // 0x0048   (0x0010)  
	FString                                            RingUri;                                                    // 0x0058   (0x0010)  
	FString                                            SmallIcon;                                                  // 0x0068   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLFriendReqInfo
/// Size: 0x0088 (0x000000 - 0x000088)
struct FINTLFriendReqInfo
{ 
	int32_t                                            Type;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            User;                                                       // 0x0008   (0x0010)  
	FString                                            Title;                                                      // 0x0018   (0x0010)  
	FString                                            Description;                                                // 0x0028   (0x0010)  
	FString                                            ImagePath;                                                  // 0x0038   (0x0010)  
	FString                                            ThumbPath;                                                  // 0x0048   (0x0010)  
	FString                                            MediaPath;                                                  // 0x0058   (0x0010)  
	FString                                            Link;                                                       // 0x0068   (0x0010)  
	FString                                            ExtraJson;                                                  // 0x0078   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLFriendResult
/// Size: 0x0010 (0x000040 - 0x000050)
struct FINTLFriendResult : FINTLBaseResult
{ 
	TArray<FINTLPersonInfo>                            FriendInfoList;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLPersonInfo
/// Size: 0x0088 (0x000000 - 0x000088)
struct FINTLPersonInfo
{ 
	FString                                            OpenId;                                                     // 0x0000   (0x0010)  
	FString                                            UserName;                                                   // 0x0010   (0x0010)  
	int32_t                                            Gender;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            PictureUrl;                                                 // 0x0028   (0x0010)  
	FString                                            Country;                                                    // 0x0038   (0x0010)  
	FString                                            Province;                                                   // 0x0048   (0x0010)  
	FString                                            City;                                                       // 0x0058   (0x0010)  
	FString                                            Language;                                                   // 0x0068   (0x0010)  
	FString                                            ExtraJson;                                                  // 0x0078   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLNoticeResult
/// Size: 0x0020 (0x000040 - 0x000060)
struct FINTLNoticeResult : FINTLBaseResult
{ 
	FString                                            SeqId;                                                      // 0x0040   (0x0010)  
	TArray<FINTLNoticeInfo>                            NoticeInfoList;                                             // 0x0050   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLNoticeInfo
/// Size: 0x0078 (0x000000 - 0x000078)
struct FINTLNoticeInfo
{ 
	int32_t                                            NoticeId;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            AppId;                                                      // 0x0008   (0x0010)  
	FString                                            AppNoticeId;                                                // 0x0018   (0x0010)  
	int32_t                                            Status;                                                     // 0x0028   (0x0004)  
	int32_t                                            StartTime;                                                  // 0x002C   (0x0004)  
	int32_t                                            EndTime;                                                    // 0x0030   (0x0004)  
	int32_t                                            UpdateTime;                                                 // 0x0034   (0x0004)  
	FString                                            AreaList;                                                   // 0x0038   (0x0010)  
	TArray<FINTLNoticePicture>                         PictureList;                                                // 0x0048   (0x0010)  
	FString                                            ExtraData;                                                  // 0x0058   (0x0010)  
	TArray<FINTLNoticeContent>                         ContentList;                                                // 0x0068   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLNoticeContent
/// Size: 0x0070 (0x000000 - 0x000070)
struct FINTLNoticeContent
{ 
	int32_t                                            ContentId;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            AppContentId;                                               // 0x0008   (0x0010)  
	FString                                            Title;                                                      // 0x0018   (0x0010)  
	FString                                            Content;                                                    // 0x0028   (0x0010)  
	FString                                            LangType;                                                   // 0x0038   (0x0010)  
	int32_t                                            UpdateTime;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            ExtraData;                                                  // 0x0050   (0x0010)  
	TArray<FINTLNoticePicture>                         PictureList;                                                // 0x0060   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLNoticePicture
/// Size: 0x0040 (0x000000 - 0x000040)
struct FINTLNoticePicture
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
	FString                                            Hash;                                                       // 0x0010   (0x0010)  
	FString                                            RedirectUrl;                                                // 0x0020   (0x0010)  
	FString                                            ExtraData;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLAccountResult
/// Size: 0x0180 (0x000040 - 0x0001C0)
struct FINTLAccountResult : FINTLBaseResult
{ 
	int32_t                                            ChannelID;                                                  // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            Channel;                                                    // 0x0048   (0x0010)  
	FString                                            SeqId;                                                      // 0x0058   (0x0010)  
	FString                                            UserName;                                                   // 0x0068   (0x0010)  
	FString                                            UID;                                                        // 0x0078   (0x0010)  
	FString                                            Token;                                                      // 0x0088   (0x0010)  
	int32_t                                            ExpireTime;                                                 // 0x0098   (0x0004)  
	int32_t                                            IsRegister;                                                 // 0x009C   (0x0004)  
	int32_t                                            IsSetPassword;                                              // 0x00A0   (0x0004)  
	int32_t                                            IsReceiveEmail;                                             // 0x00A4   (0x0004)  
	int32_t                                            VerifyCodeExpireTime;                                       // 0x00A8   (0x0004)  
	int32_t                                            CanBind;                                                    // 0x00AC   (0x0004)  
	FString                                            PpAcceptanceVersion;                                        // 0x00B0   (0x0010)  
	FString                                            TosAcceptanceVersion;                                       // 0x00C0   (0x0010)  
	FDateTime                                          PpAcceptanceTime;                                           // 0x00D0   (0x0008)  
	FDateTime                                          TosAcceptanceTime;                                          // 0x00D8   (0x0008)  
	FINTLAccountProfile                                Profile;                                                    // 0x00E0   (0x00D8)  
	int32_t                                            IsUserNameAvailable;                                        // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
};

/// Struct /Script/INTLPlugin.INTLAccountProfile
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FINTLAccountProfile
{ 
	FString                                            UserName;                                                   // 0x0000   (0x0010)  
	FString                                            Birthday;                                                   // 0x0010   (0x0010)  
	int32_t                                            BirthdayYear;                                               // 0x0020   (0x0004)  
	int32_t                                            BirthdayMonth;                                              // 0x0024   (0x0004)  
	int32_t                                            BirthdayDay;                                                // 0x0028   (0x0004)  
	int32_t                                            IsReceiveEmail;                                             // 0x002C   (0x0004)  
	FString                                            Region;                                                     // 0x0030   (0x0010)  
	FString                                            LangType;                                                   // 0x0040   (0x0010)  
	FString                                            ExtraJson;                                                  // 0x0050   (0x0010)  
	FString                                            Email;                                                      // 0x0060   (0x0010)  
	FString                                            Phone;                                                      // 0x0070   (0x0010)  
	FString                                            PhoneAreaCode;                                              // 0x0080   (0x0010)  
	int32_t                                            AccountType;                                                // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            NickName;                                                   // 0x0098   (0x0010)  
	FString                                            PrivacyPolicy;                                              // 0x00A8   (0x0010)  
	FString                                            TermsOfService;                                             // 0x00B8   (0x0010)  
	int32_t                                            PrivacyUpdateTime;                                          // 0x00C8   (0x0004)  
	int32_t                                            TermsUpdateTime;                                            // 0x00CC   (0x0004)  
	int32_t                                            UsernamePassVerify;                                         // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Struct /Script/INTLPlugin.INTLDeviceLevelResult
/// Size: 0x0008 (0x000040 - 0x000048)
struct FINTLDeviceLevelResult : FINTLBaseResult
{ 
	int32_t                                            DeviceLevel;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/INTLPlugin.INTLIDTokenResult
/// Size: 0x0010 (0x000040 - 0x000050)
struct FINTLIDTokenResult : FINTLBaseResult
{ 
	FString                                            IdToken;                                                    // 0x0040   (0x0010)  
};

/// Struct /Script/INTLPlugin.INTLAuthResult
/// Size: 0x00F0 (0x000040 - 0x000130)
struct FINTLAuthResult : FINTLBaseResult
{ 
	FString                                            OpenId;                                                     // 0x0040   (0x0010)  
	FString                                            Token;                                                      // 0x0050   (0x0010)  
	int32_t                                            TokenExpireTime;                                            // 0x0060   (0x0004)  
	int32_t                                            FirstLogin;                                                 // 0x0064   (0x0004)  
	FString                                            RegChannelDis;                                              // 0x0068   (0x0010)  
	FString                                            UserName;                                                   // 0x0078   (0x0010)  
	int32_t                                            Gender;                                                     // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FString                                            Birthday;                                                   // 0x0090   (0x0010)  
	FString                                            PicUrl;                                                     // 0x00A0   (0x0010)  
	FString                                            Pf;                                                         // 0x00B0   (0x0010)  
	FString                                            PfKey;                                                      // 0x00C0   (0x0010)  
	bool                                               NeedRealNameAuth;                                           // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	int32_t                                            ChannelID;                                                  // 0x00D4   (0x0004)  
	EINTLLoginChannel                                  ChannelName;                                                // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FString                                            ChannelInfo;                                                // 0x00E0   (0x0010)  
	FString                                            ConfirmCode;                                                // 0x00F0   (0x0010)  
	int32_t                                            ConfirmCodeExpireTime;                                      // 0x0100   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	FString                                            BindList;                                                   // 0x0108   (0x0010)  
	FString                                            LegalDocumentsAcceptedVersion;                              // 0x0118   (0x0010)  
	int32_t                                            DeleteAccountStatus;                                        // 0x0128   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Enum /Script/INTLPlugin.EINTLUpdateStep
/// Size: 0x05
enum EINTLUpdateStep : uint8_t
{
	EINTLUpdateStep__kUnknown                                                        = 0,
	EINTLUpdateStep__kFirstResourceAnalyze                                           = 1,
	EINTLUpdateStep__kCheckUpdate                                                    = 2,
	EINTLUpdateStep__kDownload                                                       = 3,
	EINTLUpdateStep__EINTLUpdateStep_MAX                                             = 4
};

/// Enum /Script/INTLPlugin.EINTLUpdateResourceCopyType
/// Size: 0x04
enum EINTLUpdateResourceCopyType : uint8_t
{
	EINTLUpdateResourceCopyType__kUnknown                                            = 0,
	EINTLUpdateResourceCopyType__kCopyAll                                            = 1,
	EINTLUpdateResourceCopyType__kCopyOnDemand                                       = 2,
	EINTLUpdateResourceCopyType__EINTLUpdateResourceCopyType_MAX                     = 3
};

/// Enum /Script/INTLPlugin.EINTLUpdateActionType
/// Size: 0x05
enum EINTLUpdateActionType : uint8_t
{
	EINTLUpdateActionType__kUnknown                                                  = 0,
	EINTLUpdateActionType__kAppUpdate                                                = 1,
	EINTLUpdateActionType__kResourceUpdate                                           = 2,
	EINTLUpdateActionType__kResourceRepair                                           = 3,
	EINTLUpdateActionType__EINTLUpdateActionType_MAX                                 = 4
};

/// Enum /Script/INTLPlugin.EINTLUpdateNewVersionType
/// Size: 0x05
enum EINTLUpdateNewVersionType : uint8_t
{
	EINTLUpdateNewVersionType__kUnknown                                              = 0,
	EINTLUpdateNewVersionType__kNoNeedUpdate                                         = 1,
	EINTLUpdateNewVersionType__kOptionalUpdate                                       = 2,
	EINTLUpdateNewVersionType__kForcibleUpdate                                       = 3,
	EINTLUpdateNewVersionType__EINTLUpdateNewVersionType_MAX                         = 4
};

/// Enum /Script/INTLPlugin.EINTLCrashLevel
/// Size: 0x07
enum EINTLCrashLevel : uint8_t
{
	EINTLCrashLevel__LogLevelSilent                                                  = 0,
	EINTLCrashLevel__LogLevelError                                                   = 1,
	EINTLCrashLevel__LogLevelWarn                                                    = 2,
	EINTLCrashLevel__LogLevelInfo                                                    = 3,
	EINTLCrashLevel__LogLevelDebug                                                   = 4,
	EINTLCrashLevel__LogLevelVerbose                                                 = 5,
	EINTLCrashLevel__EINTLCrashLevel_MAX                                             = 6
};

/// Enum /Script/INTLPlugin.EINTLWebViewOrientation
/// Size: 0x04
enum EINTLWebViewOrientation : uint8_t
{
	EINTLWebViewOrientation__kAuto                                                   = 0,
	EINTLWebViewOrientation__kPortrait                                               = 1,
	EINTLWebViewOrientation__kLandscape                                              = 2,
	EINTLWebViewOrientation__EINTLWebViewOrientation_MAX                             = 3
};

/// Enum /Script/INTLPlugin.EINTLFriendReqType
/// Size: 0x06
enum EINTLFriendReqType : uint8_t
{
	EINTLFriendReqType__kReqText                                                     = 0,
	EINTLFriendReqType__kReqLink                                                     = 1,
	EINTLFriendReqType__kReqImage                                                    = 2,
	EINTLFriendReqType__kReqInvite                                                   = 3,
	EINTLFriendReqType__kReqVideo                                                    = 4,
	EINTLFriendReqType__EINTLFriendReqType_MAX                                       = 5
};

/// Enum /Script/INTLPlugin.EComplianceParentCertificateStatus
/// Size: 0x04
enum EComplianceParentCertificateStatus : uint8_t
{
	EComplianceParentCertificateStatus__kDeny                                        = 0,
	EComplianceParentCertificateStatus__kUnknown                                     = 1,
	EComplianceParentCertificateStatus__kAgree                                       = 2,
	EComplianceParentCertificateStatus__EComplianceParentCertificateStatus_MAX       = 3
};

/// Enum /Script/INTLPlugin.EComplianceAgreeStatus
/// Size: 0x04
enum EComplianceAgreeStatus : uint8_t
{
	EComplianceAgreeStatus__kDeny                                                    = 0,
	EComplianceAgreeStatus__kUnknown                                                 = 1,
	EComplianceAgreeStatus__kAgree                                                   = 2,
	EComplianceAgreeStatus__EComplianceAgreeStatus_MAX                               = 3
};

/// Enum /Script/INTLPlugin.EComplianceAgeStatus
/// Size: 0x04
enum EComplianceAgeStatus : uint8_t
{
	EComplianceAgeStatus__kMinor                                                     = 0,
	EComplianceAgeStatus__kUnknown                                                   = 1,
	EComplianceAgeStatus__kAdult                                                     = 2,
	EComplianceAgeStatus__EComplianceAgeStatus_MAX                                   = 3
};

/// Enum /Script/INTLPlugin.EINTLLoginChannel
/// Size: 0x26
enum EINTLLoginChannel : uint8_t
{
	EINTLLoginChannel__kChannelDefault                                               = 0,
	EINTLLoginChannel__kChannelWeChat                                                = 1,
	EINTLLoginChannel__kChannelQQ                                                    = 2,
	EINTLLoginChannel__kChannelGuest                                                 = 3,
	EINTLLoginChannel__kChannelFacebook                                              = 4,
	EINTLLoginChannel__kChannelGameCenter                                            = 5,
	EINTLLoginChannel__kChannelGoogle                                                = 6,
	EINTLLoginChannel__kChannelIEGPassport                                           = 7,
	EINTLLoginChannel__kChannelTwitter                                               = 9,
	EINTLLoginChannel__kChannelGarena                                                = 10,
	EINTLLoginChannel__kChannelCustomAccount                                         = 11,
	EINTLLoginChannel__kChannelEGame                                                 = 12,
	EINTLLoginChannel__kChannelSwitch                                                = 13,
	EINTLLoginChannel__kChannelLine                                                  = 14,
	EINTLLoginChannel__kChannelApple                                                 = 15,
	EINTLLoginChannel__kChannelVK                                                    = 19,
	EINTLLoginChannel__kChannelXboxOne                                               = 20,
	EINTLLoginChannel__kChannelSteam                                                 = 21,
	EINTLLoginChannel__kChannelPS4                                                   = 22,
	EINTLLoginChannel__kChannelEpic                                                  = 24,
	EINTLLoginChannel__kChannelSharkmob                                              = 25,
	EINTLLoginChannel__kChannelDiscord                                               = 26,
	EINTLLoginChannel__kChannelPS5                                                   = 27,
	EINTLLoginChannel__kChannelDmm                                                   = 30,
	EINTLLoginChannel__kChannelSupercell                                             = 33,
	EINTLLoginChannel__EINTLLoginChannel_MAX                                         = 34
};

/// Enum /Script/INTLPlugin.EVerifyCodeType
/// Size: 0x05
enum EVerifyCodeType : uint8_t
{
	EVerifyCodeType__kVerifyCodeTypeRegister                                         = 0,
	EVerifyCodeType__kVerifyCodeTypeResetPassword                                    = 1,
	EVerifyCodeType__kVerifyCodeTypeRegisterThenLogin                                = 2,
	EVerifyCodeType__kVerifyCodeTypeModifyAccount                                    = 3,
	EVerifyCodeType__EVerifyCodeType_MAX                                             = 4
};

/// Enum /Script/INTLPlugin.EAccountType
/// Size: 0x04
enum EAccountType : uint8_t
{
	EAccountType__kAccountTypeNone                                                   = 0,
	EAccountType__kAccountTypeEmail                                                  = 1,
	EAccountType__kAccountTypeMobilePhone                                            = 2,
	EAccountType__EAccountType_MAX                                                   = 3
};

