/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Animation.

/// Class /Game/Animation/Setup/NotifyStates/TBP_ANS_LegCrossClearance.TBP_ANS_LegCrossClearance_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UTBP_ANS_LegCrossClearance_C : public UAnimNotifyState
{ 
public:
};

/// Class /Game/Animation/Setup/Blueprints/MontageMetaData/TigerWeaponMetaData.TigerWeaponMetaData_C
/// Size: 0x0001 (0x000028 - 0x000029)
class UTigerWeaponMetaData_C : public UAnimMetaData
{ 
public:
	bool                                               ShouldUseWeaponAO;                                          // 0x0028   (0x0001)  
};

/// Class /Game/Animation/Setup/Blueprints/TBP_FaceCurvesToAnimation.TBP_FaceCurvesToAnimation_C
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UTBP_FaceCurvesToAnimation_C : public UTigerFaceCurvesAnimationMap
{ 
public:
};

/// Class /Game/Animation/Setup/Blueprints/MontageMetaData/TBP_AnimMetaData_TurnStartActive.TBP_AnimMetaData_TurnStartActive_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UTBP_AnimMetaData_TurnStartActive_C : public UAnimMetaData
{ 
public:
};

/// Class /Game/Animation/Setup/Blueprints/MontageMetaData/TBP_AnimMetaData_StopIsActive.TBP_AnimMetaData_StopIsActive_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UTBP_AnimMetaData_StopIsActive_C : public UAnimMetaData
{ 
public:
};

/// Class /Game/Animation/Setup/Blueprints/MontageMetaData/TBP_AnimMetaData_StartIsActive.TBP_AnimMetaData_StartIsActive_C
/// Size: 0x0002 (0x000028 - 0x00002A)
class UTBP_AnimMetaData_StartIsActive_C : public UAnimMetaData
{ 
public:
	TEnumAsByte<ENUM_WeaponIKOverride>                 LeftHandIK_Enum;                                            // 0x0028   (0x0001)  
	TEnumAsByte<ENUM_WeaponIKOverride>                 RightHandIK_Enum;                                           // 0x0029   (0x0001)  
};

/// Class /Game/Animation/Setup/Blueprints/MontageMetaData/TBP_AnimMetaData_IsInPrimingAnim.TBP_AnimMetaData_IsInPrimingAnim_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UTBP_AnimMetaData_IsInPrimingAnim_C : public UAnimMetaData
{ 
public:
};

/// Class /Game/Animation/Setup/Blueprints/ABP_Melee_Weapon.ABP_Melee_Weapon_C
/// Size: 0x0AA8 (0x0002E0 - 0x000D88)
class UABP_Melee_Weapon_C : public UTigerMeleeWeaponAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02E0   (0x0008)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x02E8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0310   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0338   (0x0028)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0360   (0x0030)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x0390   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0440   (0x0158)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0598   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x05E0   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0608   (0x0158)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0760   (0x0158)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x08B8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0A10   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x0A38   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x0A88   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x0AD8   (0x0050)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0B28   (0x0158)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x0C80   (0x0050)  
	bool                                               IsSecondaryWeapon;                                          // 0x0CD0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0CD1   (0x0003)  MISSED
	float                                              IsPlayingAsFemaleFloat;                                     // 0x0CD4   (0x0004)  
	TEnumAsByte<ENUM_MeleeWeaponCategories>            CurrentMeleeWeapon;                                         // 0x0CD8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0CD9   (0x0007)  MISSED
	TMap<TEnumAsByte, FVector>                         RootJointOffsetMap;                                         // 0x0CE0   (0x0050)  
	TMap<TEnumAsByte, FVector>                         LeftHandOffsetMap;                                          // 0x0D30   (0x0050)  
	UABP_Player_C*                                     Anim_Instance;                                              // 0x0D80   (0x0008)  


	/// Functions
	// Function /Game/Animation/Setup/Blueprints/ABP_Melee_Weapon.ABP_Melee_Weapon_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintInitializeAnimation
	void BlueprintInitializeAnimation();                                                                                     // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Melee_Weapon.ABP_Melee_Weapon_C.OnMelee
	void OnMelee(int32_t AttackCount);                                                                                       // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Melee_Weapon.ABP_Melee_Weapon_C.OnPossibleMeshChange
	void OnPossibleMeshChange();                                                                                             // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Melee_Weapon.ABP_Melee_Weapon_C.ExecuteUbergraph_ABP_Melee_Weapon
	void ExecuteUbergraph_ABP_Melee_Weapon(int32_t EntryPoint);                                                              // [0x197e4f0] Final                
};

/// Class /Game/Animation/Setup/Blueprints/MontageMetaData/TBP_AnimMetaData_WeaponIK.TBP_AnimMetaData_WeaponIK_C
/// Size: 0x0002 (0x000028 - 0x00002A)
class UTBP_AnimMetaData_WeaponIK_C : public UAnimMetaData
{ 
public:
	TEnumAsByte<ENUM_WeaponIKOverride>                 LeftHandIK_Enum;                                            // 0x0028   (0x0001)  
	TEnumAsByte<ENUM_WeaponIKOverride>                 RightHandIK_Enum;                                           // 0x0029   (0x0001)  
};

/// Class /Game/Animation/Setup/Blueprints/ABP_Ranged_Weapon.ABP_Ranged_Weapon_C
/// Size: 0x87A2 (0x0002C0 - 0x008A62)
class UABP_Ranged_Weapon_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x02F8   (0x0158)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0450   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x05A8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x05D0   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x05F8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0750   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0778   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x07A0   (0x0158)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x08F8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0A50   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0A78   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0B80   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0BA0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0BC0   (0x0108)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x0CC8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x0D18   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0D68   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x0E08   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x0E58   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0EA8   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0F48   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0FE8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x1018   (0x00B0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x10C8   (0x0108)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x11D0   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x11F8   (0x00A0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1298   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x13F0   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1418   (0x0158)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x1570   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x15B8   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1600   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1628   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1780   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x17A8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1900   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1928   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1A80   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x1AA8   (0x0050)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1AF8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x1B28   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1BD8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1D30   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x1D58   (0x00C0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x1E18   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x1E68   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x1EB8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x1F08   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x1F58   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1FA8   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2048   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x20E8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2188   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x21B8   (0x00B0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x2268   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x22B8   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2308   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x23A8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x23F8   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2448   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x24E8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2588   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x25B8   (0x00B0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x2668   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x26B8   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2708   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x27A8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x27F8   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2848   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x28E8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2988   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x29B8   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x2A68   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2BC0   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x2BE8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x2C38   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2C88   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x2D28   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2D78   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2E18   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x2EB8   (0x0050)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2F08   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x2F38   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x2FE8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3140   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x3168   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x3208   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3250   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x3278   (0x00C0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x3338   (0x0158)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x3490   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x34D8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3500   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x3528   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x3578   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x35C8   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x3668   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x36B8   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x3708   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x37A8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3848   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x3878   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x3928   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3A80   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x3AA8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x3AF8   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x3B48   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x3BE8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x3C38   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x3C88   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x3D28   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3DC8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x3DF8   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x3EA8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x4000   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x4028   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x4078   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x40C8   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x4168   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x41B8   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x4208   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x42A8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x4348   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x4378   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x4428   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x4580   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x45A8   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x4648   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x4690   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x46B8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x4708   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x4758   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x47F8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x4848   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x4898   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x4938   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x49D8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x4A08   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x4AB8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x4C10   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x4C38   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x4C60   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x4D68   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x4D88   (0x0020)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x4DA8   (0x0158)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x4F00   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x4F50   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x4FA0   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x5040   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x5090   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x50E0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5180   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x5220   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x5250   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x5300   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x5458   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x5480   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x54D0   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5520   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x55C0   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x5610   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5660   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5700   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x57A0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x57D0   (0x00B0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x5880   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x58D0   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5920   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x59C0   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x5A10   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5A60   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5B00   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x5BA0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x5BD0   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x5C80   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x5DD8   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x5E00   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x5E50   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5EA0   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x5F40   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x5F90   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5FE0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x6080   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x6120   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x6150   (0x00B0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6200   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6250   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x62A0   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6340   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6390   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x63E0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x6480   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x6520   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x6550   (0x00B0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6600   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6650   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x66A0   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6740   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6790   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x67E0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x6880   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x6920   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x6950   (0x00B0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6A00   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6A50   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6AA0   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x6AF0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x6B90   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x6C30   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x6C60   (0x00B0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x6D10   (0x0108)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6E18   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6E68   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x6EB8   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6F58   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x6FA8   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x6FF8   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x7098   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x7138   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x7168   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x7218   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7370   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x7398   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x73E8   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x7438   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x74D8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x7528   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x7578   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x7618   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x76B8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x76E8   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x7798   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x78F0   (0x0028)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x7918   (0x00B0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x79C8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x7A18   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x7A68   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x7B08   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x7B58   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x7BA8   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x7C48   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x7CE8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x7D18   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x7DC8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7F20   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x7F48   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x7F98   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x7FE8   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x8088   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x80D8   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x8128   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x81C8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x8268   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x8298   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x8348   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x84A0   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x84C8   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x8518   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x8568   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x8608   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x8658   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x86A8   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x8748   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x87E8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x8818   (0x00B0)  
	TEnumAsByte<ENUM_RangedWeaponCategories>           CurrentRangedWeapon;                                        // 0x88C8   (0x0001)  
	bool                                               IsAimingWeapon;                                             // 0x88C9   (0x0001)  
	bool                                               IsHipFiring;                                                // 0x88CA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x88CB   (0x0001)  MISSED
	float                                              FireWeaponBlendInTime;                                      // 0x88CC   (0x0004)  
	bool                                               IsCrouching;                                                // 0x88D0   (0x0001)  
	bool                                               HipOrAimFiring;                                             // 0x88D1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x88D2   (0x0002)  MISSED
	FVector                                            RootJointOffset;                                            // 0x88D4   (0x000C)  
	FVector                                            LeftHandIkOffset;                                           // 0x88E0   (0x000C)  
	float                                              IsPlayingAsFemaleFloat;                                     // 0x88EC   (0x0004)  
	bool                                               IsMovingOnGround;                                           // 0x88F0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x88F1   (0x0007)  MISSED
	TArray<TEnumAsByte>                                ShouldOffsetLeftElbow;                                      // 0x88F8   (0x0010)  
	float                                              ShouldUseLeftElbowOffsetAlpha;                              // 0x8908   (0x0004)  
	FVector                                            LeftElbowOffset;                                            // 0x890C   (0x000C)  
	bool                                               WallJumpIsAvailable;                                        // 0x8918   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x8919   (0x0007)  MISSED
	TMap<TEnumAsByte, FVector>                         RootJointOffsetMap;                                         // 0x8920   (0x0050)  
	TMap<TEnumAsByte, FVector>                         LeftHandOffsetMap;                                          // 0x8970   (0x0050)  
	float                                              WeaponScaleAlpha;                                           // 0x89C0   (0x0004)  
	FVector                                            WeaponScaleVector;                                          // 0x89C4   (0x000C)  
	ETigerGender                                       BodyType;                                                   // 0x89D0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x89D1   (0x0007)  MISSED
	TMap<TEnumAsByte, float>                           WeaponScaleMap;                                             // 0x89D8   (0x0050)  
	bool                                               IsPlayingAsFemaleBool;                                      // 0x8A28   (0x0001)  
	bool                                               IsSecondaryWeapon;                                          // 0x8A29   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x8A2A   (0x0006)  MISSED
	UABP_Player_C*                                     Anim_Instance;                                              // 0x8A30   (0x0008)  
	float                                              AimSweepFloat;                                              // 0x8A38   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x8A3C   (0x0004)  MISSED
	ATigerPlayer*                                      Player;                                                     // 0x8A40   (0x0008)  
	bool                                               Is_in_Reload;                                               // 0x8A48   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x8A49   (0x0003)  MISSED
	FRotator                                           MagazineRotationAmount;                                     // 0x8A4C   (0x000C)  
	bool                                               RotatingMagazine;                                           // 0x8A58   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x8A59   (0x0003)  MISSED
	float                                              Alpha;                                                      // 0x8A5C   (0x0004)  
	bool                                               Is_Sprinting;                                               // 0x8A60   (0x0001)  
	ETigerClan                                         Current_Player_Clan;                                        // 0x8A61   (0x0001)  


	/// Functions
	// Function /Game/Animation/Setup/Blueprints/ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.BlueprintUpdateAnimation
	void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.BlueprintInitializeAnimation
	void BlueprintInitializeAnimation();                                                                                     // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_HideMagazine1
	void AnimNotify_HideMagazine1();                                                                                         // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_HideMagazine2
	void AnimNotify_HideMagazine2();                                                                                         // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_UnHideMagazine1
	void AnimNotify_UnHideMagazine1();                                                                                       // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_UnHideMagazine2
	void AnimNotify_UnHideMagazine2();                                                                                       // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.OnWeaponSpawnEvent
	void OnWeaponSpawnEvent();                                                                                               // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.ExecuteUbergraph_ABP_Ranged_Weapon
	void ExecuteUbergraph_ABP_Ranged_Weapon(int32_t EntryPoint);                                                             // [0x197e4f0] Final                
};

/// Class /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C
/// Size: 0x342A2 (0x001170 - 0x035412)
class UABP_Player_C : public UTigerPlayerAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1170   (0x0008)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x1178   (0x00C0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1238   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1390   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x13B8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x13E0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1408   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1430   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1458   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1480   (0x0028)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x14A8   (0x0030)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x14D8   (0x0118)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x15F0   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x16F8   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1718   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1738   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1840   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1948   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1A50   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1B58   (0x0108)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x1C60   (0x0030)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x1C90   (0x0118)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1DA8   (0x0158)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1F00   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1FA0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1FC8   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1FF0   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2148   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x2170   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x21B8   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x2200   (0x0048)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x2248   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x2278   (0x0048)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x22C0   (0x0118)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x23D8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2530   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x2558   (0x0158)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x26B0   (0x00A0)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x2750   (0x0190)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x28E0   (0x00A0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2980   (0x00C8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2A48   (0x00C0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2B08   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2BC8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2BF0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2C18   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2C40   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2C68   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2C90   (0x0028)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x2CB8   (0x00B0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2D68   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2D90   (0x0028)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x2DB8   (0x0190)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2F48   (0x00C0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x3008   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3160   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x3188   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x32E0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3308   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3330   (0x0028)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x3358   (0x0190)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x34E8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3640   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x3668   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3708   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x3730   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x3758   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x3780   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x37A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x37D0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x37F8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3878   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x38A8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3928   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3958   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x3988   (0x00B0)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x3A38   (0x00D0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3B08   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3B30   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x3B58   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x3BA0   (0x0158)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x3CF8   (0x00A0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x3D98   (0x0030)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x3DC8   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3E90   (0x0080)  
	FAnimNode_PoseBlendNode                            AnimGraphNode_PoseBlendNode;                                // 0x3F10   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x3FB0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x4050   (0x0080)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x40D0   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x4198   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x4218   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x4298   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x4318   (0x0080)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x4398   (0x00C8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x4460   (0x00C8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x4528   (0x00C8)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x45F0   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4620   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4648   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4670   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4698   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x46C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x46E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4710   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4738   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4760   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4788   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x47B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x47D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4800   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4828   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4850   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x4878   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x48A0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x4920   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x4950   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x49D0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x4A00   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x4A80   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4AB0   (0x00E8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x4B98   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x4BC8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x4C48   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x4C78   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x4CF8   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x4D98   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x4E18   (0x0030)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x4E48   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x4E68   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x4E88   (0x0108)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4F90   (0x00E8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x5078   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x50A8   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x5158   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x51D8   (0x00A0)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x5278   (0x00A0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x5318   (0x00C0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x53D8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x5530   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x5558   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x5580   (0x0048)  
	nil                                                AnimGraphNode_Root;                                         // 0x55C8   (0x0030)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x55F8   (0x0118)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x5710   (0x0048)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x5758   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x5818   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5840   (0x00A0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x58E0   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x5A38   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x5A60   (0x0028)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x5A88   (0x00C8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x5B50   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x5CA8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x5CD0   (0x0028)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x5CF8   (0x0030)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x5D28   (0x0118)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x5E40   (0x0048)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x5E88   (0x00C0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x5F48   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x60A0   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x60C8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6220   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6248   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6270   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x6298   (0x00A0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x6338   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x63F8   (0x0028)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x6420   (0x0030)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x6450   (0x0118)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x6568   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x66C0   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x66E8   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6730   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x6758   (0x0158)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x68B0   (0x00B0)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x6960   (0x00B0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6A10   (0x0028)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x6A38   (0x00B0)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x6AE8   (0x00B0)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x6B98   (0x00B0)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x6C48   (0x00B0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6CF8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6D20   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6D48   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6D70   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6D98   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6DC0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6DE8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6E10   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x6E38   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x6F40   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x6F60   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x6F80   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x7088   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x7190   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x7298   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x73A0   (0x0108)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x74A8   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7548   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7570   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x7598   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7658   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7680   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x76A8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7800   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x7828   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7980   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x79A8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x79D0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x79F8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7A20   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x7A48   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7BA0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7BC8   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x7BF0   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7C90   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7CB8   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x7CE0   (0x00C0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x7DA0   (0x00C8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x7E68   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7FC0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x7FE8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x8010   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x8038   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x8080   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x80A8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x8200   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x8228   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x8250   (0x00A0)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x82F0   (0x0190)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x8480   (0x00C0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x8540   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x8698   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x86C0   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x86E8   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x8788   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x8828   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x8850   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x8878   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x8918   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x8940   (0x0028)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x8968   (0x0190)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x8AF8   (0x00A0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x8B98   (0x0158)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x8CF0   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x8E48   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x8E70   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x8E98   (0x00C0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x8F58   (0x00C8)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x9020   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x9048   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x9070   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x9098   (0x00C0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x9158   (0x00A0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x91F8   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x92B8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x92E0   (0x0028)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x9308   (0x0030)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x9338   (0x0118)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x9450   (0x0158)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x95A8   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x95F0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x9638   (0x00A0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x96D8   (0x00C0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x9798   (0x0158)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x98F0   (0x0158)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x9A48   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x9AE8   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x9B88   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x9BB0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x9BD8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x9C00   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x9C28   (0x00C0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x9CE8   (0x00A0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x9D88   (0x00C0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x9E48   (0x00A0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x9EE8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x9F10   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x9F38   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x9F60   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x9FE0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0xA010   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0xA090   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0xA0C0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0xA0F0   (0x00B0)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0xA1A0   (0x00D0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xA270   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xA3C8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xA3F0   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0xA418   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0xA460   (0x0048)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0xA4A8   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0xA570   (0x0080)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xA5F0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xA618   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0xA640   (0x0048)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0xA688   (0x00C0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xA748   (0x0158)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xA8A0   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xA940   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xA968   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xA990   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xA9B8   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xA9E0   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xAB38   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xAB60   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xAB88   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xABB0   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xABD8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xAD30   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xAD58   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0xAD80   (0x00C0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0xAE40   (0x0050)  
	FAnimNode_MakeDynamicAdditive                      AnimGraphNode_MakeDynamicAdditive;                          // 0xAE90   (0x0038)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0xAEC8   (0x0050)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0xAF18   (0x00D0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xAFE8   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0xB088   (0x0050)  
	FAnimNode_MakeDynamicAdditive                      AnimGraphNode_MakeDynamicAdditive;                          // 0xB0D8   (0x0038)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0xB110   (0x0050)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xB160   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xB188   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xB2E0   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xB308   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xB3A8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xB3D0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xB3F8   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0xB420   (0x00C0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xB4E0   (0x00A0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0xB580   (0x00C0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0xB640   (0x00C8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xB708   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xB860   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xB888   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0xB8B0   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0xB8F8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0xB940   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0xB9C0   (0x0080)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0xBA40   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0xBA60   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xBA80   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xBB88   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xBC90   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xBD98   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xBEA0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xBFA8   (0x0108)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xC0B0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0xC150   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0xC180   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xC230   (0x0158)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xC388   (0x0158)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0xC4E0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0xC5C8   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xC6B0   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0xC750   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0xC838   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xC920   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xC9C0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0xCA60   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0xCA90   (0x00B0)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0xCB40   (0x00D0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xCC10   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0xCCB0   (0x0080)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xCD30   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xCD58   (0x0028)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0xCD80   (0x00D0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0xCE50   (0x00C8)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xCF18   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0xCF40   (0x0080)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0xCFC0   (0x00D0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0xD090   (0x0030)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0xD0C0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xD0E0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xD1E8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xD2F0   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0xD3F8   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0xD418   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0xD420   (0x01E0)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0xD600   (0x01E0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xD7E0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xD8E8   (0x0108)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0xD9F0   (0x0018)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xDA08   (0x0158)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xDB60   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xDC00   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xDC28   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0xDC50   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0xDC78   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0xDCA0   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0xDCC8   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0xDCF8   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xDDE0   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0xDE80   (0x00E8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0xDF68   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0xDF98   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0xE080   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xE168   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0xE208   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0xE238   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xE2E8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xE440   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0xE468   (0x00C0)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0xE528   (0x0008)  MISSED
	FTigerAnimNode_IgnoreParentScaling                 TigerAnimGraphNode_IgnoreParentScaling;                     // 0xE530   (0x0150)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xE680   (0x0158)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xE7D8   (0x00A0)  
	FAnimNode_PoseSnapshot                             AnimGraphNode_PoseSnapshot;                                 // 0xE878   (0x0090)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0xE908   (0x0008)  MISSED
	FTigerAnimNode_IgnoreParentScaling                 TigerAnimGraphNode_IgnoreParentScaling;                     // 0xE910   (0x0150)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0xEA60   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0xEB20   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0xEBA0   (0x0080)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xEC20   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0xEC48   (0x00C0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xED08   (0x0158)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0xEE60   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xEEA8   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xEED0   (0x00A0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xEF70   (0x0108)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0xF078   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xF118   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xF140   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xF248   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xF350   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xF458   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xF560   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0xF668   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xF688   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0xF6B0   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0xF7B8   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xF7D8   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xF800   (0x0158)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0xF958   (0x00C8)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xFA20   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xFA48   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0xFA70   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xFAB8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xFC10   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0xFC38   (0x0028)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0xFC60   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0xFD00   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0xFD48   (0x0158)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0xFEA0   (0x01E0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x10080   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x10188   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x101A8   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x101C8   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x10210   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x10238   (0x00A0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x102D8   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x103E0   (0x0020)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x10400   (0x0158)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x10558   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x10578   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x10680   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x10788   (0x0108)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x10890   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x109E8   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x10A10   (0x0108)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x10B18   (0x00A0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x10BB8   (0x0158)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x10D10   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x10E68   (0x0028)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x10E90   (0x01E0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x11070   (0x0108)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x11178   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x11238   (0x0080)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x112B8   (0x0108)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x113C0   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x11480   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x114A8   (0x0048)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x114F0   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x115F8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x11618   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x11638   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x11680   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x11720   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x11748   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x117C8   (0x0080)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x11848   (0x0048)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x11890   (0x00C0)  
	FAnimNode_MakeDynamicAdditive                      AnimGraphNode_MakeDynamicAdditive;                          // 0x11950   (0x0038)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x11988   (0x00C8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x11A50   (0x0158)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x11BA8   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x11BF0   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x11D48   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x11D70   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x11D98   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x11DC0   (0x0108)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x11EC8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x12020   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x12048   (0x0028)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x12070   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x12090   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x120B0   (0x0108)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x121B8   (0x00F0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x122A8   (0x00A0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x12348   (0x0158)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x124A0   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x12560   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x12588   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x125B0   (0x00A0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x12650   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x127A8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x127D0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x127F8   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x12820   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x128E0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x12908   (0x0028)  
	FAnimNode_LinkedAnimLayer                          AnimGraphNode_LinkedAnimLayer;                              // 0x12930   (0x00B0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x129E0   (0x0028)  
	FAnimNode_LinkedAnimLayer                          AnimGraphNode_LinkedAnimLayer;                              // 0x12A08   (0x00B0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x12AB8   (0x0028)  
	FAnimNode_LinkedAnimLayer                          AnimGraphNode_LinkedAnimLayer;                              // 0x12AE0   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x12B90   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x12CE8   (0x0028)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x12D10   (0x00F0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x12E00   (0x00A0)  
	FAnimNode_LinkedAnimLayer                          AnimGraphNode_LinkedAnimLayer;                              // 0x12EA0   (0x00B0)  
	FAnimNode_LinkedAnimLayer                          AnimGraphNode_LinkedAnimLayer;                              // 0x12F50   (0x00B0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x13000   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x130A0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x130C8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x130F0   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x13118   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x131B8   (0x0028)  
	FAnimNode_LinkedAnimLayer                          AnimGraphNode_LinkedAnimLayer;                              // 0x131E0   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x13290   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x133E8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x13410   (0x0028)  
	FAnimNode_LinkedAnimLayer                          AnimGraphNode_LinkedAnimLayer;                              // 0x13438   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x134E8   (0x0158)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x13640   (0x00B0)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x136F0   (0x00B0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x137A0   (0x00C0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x13860   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x139B8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x139E0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x13A08   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x13A30   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x13A58   (0x0158)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x13BB0   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x13C70   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x13C98   (0x0028)  
	FTigerFilteredLayeredBlend                         TigerAnimGraphNode_FilteredLayeredBlending;                 // 0x13CC0   (0x00C8)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x13D88   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x13DD0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x13DF8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13E20   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13E48   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13E70   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13E98   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13EC0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13EE8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13F10   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13F38   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13F60   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13F88   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13FB0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13FD8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14000   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14028   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14050   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14078   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x140A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x140C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x140F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14118   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14140   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14168   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14190   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x141B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x141E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14208   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14230   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14258   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14280   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x142A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x142D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x142F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14320   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14348   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14370   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14398   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x143C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x143E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14410   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14438   (0x0028)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x14460   (0x00A0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x14500   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x14608   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x14710   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x14818   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x14920   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x14A28   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x14A48   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x14A68   (0x0108)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14B70   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14B98   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14BC0   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x14BE8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x14C18   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x14C98   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x14D38   (0x0030)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x14D68   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x14E08   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x14E88   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x14F08   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x14FA8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x15028   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x15058   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x15108   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x15138   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x151B8   (0x00C0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x15278   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x152C0   (0x0080)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x15340   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x15408   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x15488   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x15528   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x15610   (0x00E8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x156F8   (0x00A0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x15798   (0x00C0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x15858   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x15888   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x15938   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15968   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15990   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x159B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x159E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15A08   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15A30   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15A58   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15A80   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15AA8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15AD0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15AF8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15B20   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15B48   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15B70   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15B98   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15BC0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15BE8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15C10   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15C38   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15C60   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15C88   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15CB0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15CD8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15D00   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15D28   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15D50   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15D78   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15DA0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15DC8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15DF0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15E18   (0x0028)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x15E40   (0x00E8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x15F28   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x15FC8   (0x0050)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x16018   (0x00C8)  
	FAnimNode_MakeDynamicAdditive                      AnimGraphNode_MakeDynamicAdditive;                          // 0x160E0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x16118   (0x0080)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x16198   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x162A0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x162C0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x162E0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x163E8   (0x0108)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x164F0   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x16520   (0x00E8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x16608   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x166A8   (0x0050)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x166F8   (0x00C8)  
	FAnimNode_MakeDynamicAdditive                      AnimGraphNode_MakeDynamicAdditive;                          // 0x167C0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x167F8   (0x0080)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x16878   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x16980   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x169A0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x169C0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x16AC8   (0x0108)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x16BD0   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x16C00   (0x00E8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x16CE8   (0x00A0)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x16D88   (0x0050)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x16DD8   (0x00C8)  
	FAnimNode_MakeDynamicAdditive                      AnimGraphNode_MakeDynamicAdditive;                          // 0x16EA0   (0x0038)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x16ED8   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x16FE0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x17000   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x17020   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x17128   (0x0108)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x17230   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x172B0   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x172E0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x173E8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x174F0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x175F8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x17700   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x17808   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x17910   (0x0108)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x17A18   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x17A20   (0x01E0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x17C00   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x17C20   (0x0020)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x17C40   (0x01E0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x17E20   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x17EA0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x17F40   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x17F70   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x18078   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x18180   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x18288   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x18390   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x18498   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x185A0   (0x0108)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x186A8   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x186B0   (0x01E0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x18890   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x188B0   (0x0020)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x188D0   (0x01E0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x18AB0   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x18B30   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x18BD0   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x18C00   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x18D08   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x18E10   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x18F18   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x19020   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x19040   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x19148   (0x0020)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x19168   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x19170   (0x01E0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x19350   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x193D0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x19470   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x194A0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x195A8   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x196B0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x196D0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x197D8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x198E0   (0x0108)  
	unsigned char                                      UnknownData06_5[0x8];                                       // 0x199E8   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x199F0   (0x01E0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x19BD0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x19BF0   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x19C70   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x19D10   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x19D40   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x19E48   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x19F50   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1A058   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1A160   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1A180   (0x0108)  
	unsigned char                                      UnknownData07_5[0x8];                                       // 0x1A288   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x1A290   (0x01E0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1A470   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1A490   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x1A510   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1A5B0   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1A5E0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1A6E8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1A7F0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1A8F8   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1AA00   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1AA20   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1AB28   (0x0020)  
	unsigned char                                      UnknownData08_5[0x8];                                       // 0x1AB48   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x1AB50   (0x01E0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1AD30   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x1ADB0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1AE50   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1AE80   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1AEB0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1AED8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1AF00   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1AF28   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1B030   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1B138   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1B158   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1B260   (0x0108)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x1B368   (0x0048)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1B3B0   (0x0108)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x1B4B8   (0x00B0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1B568   (0x0020)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1B588   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1B628   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1B6A8   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1B748   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1B7C8   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1B868   (0x0080)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1B8E8   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1B9B0   (0x0080)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1BA30   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1BB18   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1BC00   (0x00E8)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1BCE8   (0x00C8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x1BDB0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1BE50   (0x0030)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x1BE80   (0x00B0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1BF30   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1C038   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1C140   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1C160   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1C268   (0x0108)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x1C370   (0x0048)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1C3B8   (0x0108)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x1C4C0   (0x01E0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1C6A0   (0x0020)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1C6C0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1C760   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1C7E0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1C880   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1C900   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1C9A0   (0x0080)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1CA20   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1CAE8   (0x0080)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1CB68   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1CC50   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1CD38   (0x00E8)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1CE20   (0x00C8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x1CEE8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1CF88   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x1CFB8   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1D068   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1D098   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1D0C0   (0x0028)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x1D0E8   (0x00B0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1D198   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1D1B8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1D2C0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1D3C8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1D4D0   (0x0108)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x1D5D8   (0x0048)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1D620   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1D728   (0x0020)  
	unsigned char                                      UnknownData09_5[0x8];                                       // 0x1D748   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x1D750   (0x01E0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1D930   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1D9D0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1DA50   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1DAD0   (0x00A0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1DB70   (0x00C8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1DC38   (0x00A0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1DCD8   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1DDA0   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1DE88   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1DF08   (0x0080)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1DF88   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1E070   (0x00E8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x1E158   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1E1F8   (0x0030)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x1E228   (0x00B0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1E2D8   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1E2F8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1E400   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1E508   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1E610   (0x0108)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x1E718   (0x0048)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1E760   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1E868   (0x0020)  
	unsigned char                                      UnknownData10_5[0x8];                                       // 0x1E888   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x1E890   (0x01E0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1EA70   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1EB10   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1EB90   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1EC10   (0x00A0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1ECB0   (0x00C8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1ED78   (0x00A0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1EE18   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1EEE0   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1EFC8   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1F048   (0x0080)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1F0C8   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1F1B0   (0x00E8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x1F298   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1F338   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x1F368   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1F418   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1F448   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1F470   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1F498   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x1F4C0   (0x0050)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x1F510   (0x0050)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1F560   (0x00C8)  
	FAnimNode_MakeDynamicAdditive                      AnimGraphNode_MakeDynamicAdditive;                          // 0x1F628   (0x0038)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1F660   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1F768   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1F788   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1F7A8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1F8B0   (0x0108)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1F9B8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1FA38   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1FA68   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1FB70   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1FC78   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1FC98   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1FDA0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1FEA8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1FFB0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x200B8   (0x0108)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x201C0   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x20240   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x202E0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x20380   (0x0080)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x20400   (0x00B0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x204B0   (0x0048)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x204F8   (0x0020)  
	unsigned char                                      UnknownData11_5[0x8];                                       // 0x20518   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x20520   (0x01E0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x20700   (0x00A0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x207A0   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x20868   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x208E8   (0x0080)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x20968   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x20A50   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x20B38   (0x00E8)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x20C20   (0x00C8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x20CE8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x20D88   (0x0030)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x20DB8   (0x00B0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x20E68   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x20F70   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x21078   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x21098   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x211A0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x212A8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x213B0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x214B8   (0x0108)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x215C0   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x21640   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x216E0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x21780   (0x0080)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x21800   (0x01E0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x219E0   (0x0048)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x21A28   (0x0020)  
	unsigned char                                      UnknownData12_5[0x8];                                       // 0x21A48   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x21A50   (0x01E0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x21C30   (0x00A0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x21CD0   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x21D98   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x21E18   (0x0080)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x21E98   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x21F80   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x22068   (0x00E8)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x22150   (0x00C8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x22218   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x222B8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x222E8   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x22398   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x223C8   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x22478   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x224F8   (0x00C0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x225B8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x226C0   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x227C8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x227E8   (0x0020)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x22808   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x22838   (0x00E8)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x22920   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x22940   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x22960   (0x0108)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x22A68   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x22AE8   (0x00C0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x22BA8   (0x00C8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x22C70   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x22D30   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x22DB0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x22E50   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x22ED0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x22F00   (0x00B0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x22FB0   (0x00A0)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x23050   (0x00A0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x230F0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x231F8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x23300   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x23408   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x23510   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x23618   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x23638   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x23658   (0x0108)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x23760   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x23788   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x237B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x237D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x23800   (0x0028)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x23828   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x238D8   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x23958   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x239D8   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x23A58   (0x0080)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x23AD8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x23AF8   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x23B18   (0x0108)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x23C20   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x23CC0   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x23CF0   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x23D20   (0x00E8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x23E08   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x23ED0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x23FB8   (0x00E8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x240A0   (0x00C0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x24160   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x24190   (0x0028)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x241B8   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x24268   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x24298   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x242E0   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x24328   (0x0048)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x24370   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x24420   (0x0080)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x244A0   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x245A8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x245C8   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x245E8   (0x0108)  
	FAnimNode_BlendSpaceEvaluator                      AnimGraphNode_BlendSpaceEvaluator;                          // 0x246F0   (0x00F0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x247E0   (0x00C0)  
	FAnimNode_BlendSpaceEvaluator                      AnimGraphNode_BlendSpaceEvaluator;                          // 0x248A0   (0x00F0)  
	FAnimNode_BlendSpaceEvaluator                      AnimGraphNode_BlendSpaceEvaluator;                          // 0x24990   (0x00F0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x24A80   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x24B48   (0x0080)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x24BC8   (0x00C8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x24C90   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x24D30   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x24D60   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x24E10   (0x0030)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x24E40   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x24EE0   (0x0080)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x24F60   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x25048   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x25130   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x25218   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x25300   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x25380   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x25420   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x254C0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x25560   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x25600   (0x0030)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x25630   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x256E0   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x25760   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x25820   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x258A0   (0x0080)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x25920   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x25A08   (0x00E8)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x25AF0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x25B10   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x25B30   (0x0108)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x25C38   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x25CD8   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x25D08   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x25D30   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x25D58   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x25DD8   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x25E98   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x25F18   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x25F48   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x25F70   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x25F98   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x25FC0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x25FE8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x26068   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x26098   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x26118   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x26148   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x261C8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x261F8   (0x00B0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x262A8   (0x00C0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26368   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26390   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x263B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x263E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26408   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26430   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26458   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26480   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x264A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x264D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x264F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26520   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26548   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26570   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26598   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x265C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x265E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26610   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26638   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26660   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26688   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x266B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x266D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26700   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26728   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26750   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x26778   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x267A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x267C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x267F0   (0x0028)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x26818   (0x0050)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x26868   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x26908   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x269F0   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x26A70   (0x00C0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x26B30   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x26BF0   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x26C70   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x26D10   (0x0030)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x26D40   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x26E00   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x26E80   (0x0080)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x26F00   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x26FC8   (0x00E8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x270B0   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x27178   (0x0080)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x271F8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x27218   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x27238   (0x0108)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x27340   (0x00A0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x273E0   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x274E8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x27508   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x27528   (0x0108)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x27630   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x276D0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x27700   (0x0080)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x27780   (0x00D0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x27850   (0x00E8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x27938   (0x00C0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x279F8   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x27AB8   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x27B38   (0x00A0)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x27BD8   (0x00D0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x27CA8   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x27D90   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x27E10   (0x00C0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x27ED0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x27EF0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x27F10   (0x0108)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x28018   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x280E0   (0x00E8)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x281C8   (0x00B0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x28278   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x28380   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x283A0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x283C0   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x284C8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x284E8   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x28508   (0x0108)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x28610   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x286D8   (0x00E8)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x287C0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x287E0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x28800   (0x0108)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x28908   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x289F0   (0x0080)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x28A70   (0x00D0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x28B40   (0x00C0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x28C00   (0x00C8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x28CC8   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x28D88   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x28E08   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x28EA8   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x28F90   (0x0080)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x29010   (0x00D0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x290E0   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x291E8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x29208   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x29228   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x29330   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x29438   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x29458   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x29478   (0x0108)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x29580   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x29648   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x29730   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x29818   (0x00E8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x29900   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x29930   (0x0080)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x299B0   (0x00D0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x29A80   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x29B68   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x29BE8   (0x00C0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x29CA8   (0x00C0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x29D68   (0x00C0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x29E28   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x29E48   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x29E68   (0x0108)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x29F70   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2A058   (0x0080)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x2A0D8   (0x00D0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2A1A8   (0x00C0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2A268   (0x00C8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2A330   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2A3F0   (0x0080)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x2A470   (0x00B0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2A520   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2A540   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2A560   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2A668   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2A688   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2A6A8   (0x0108)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x2A7B0   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2A878   (0x00E8)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2A960   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2AA68   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2AA88   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2AAA8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2ABB0   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2ACB8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2ACD8   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2ACF8   (0x0108)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2AE00   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2AEC8   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2AFB0   (0x00E8)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x2B098   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2B138   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2B220   (0x0080)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x2B2A0   (0x00D0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x2B370   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2B438   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2B520   (0x0080)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x2B5A0   (0x00A0)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x2B640   (0x00D0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2B710   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2B7F8   (0x00E8)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2B8E0   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2B9E8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2BA08   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2BA28   (0x0108)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2BB30   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x2BB60   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2BC10   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2BC40   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2BC68   (0x0028)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2BC90   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2BD58   (0x0080)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2BDD8   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2BEA0   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2BF20   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2BFE0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2C060   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2C0E0   (0x00C0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C1A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C1C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C1F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C218   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C240   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C268   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C290   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C2B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C2E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C308   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C330   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C358   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C380   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C3A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C3D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C3F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2C420   (0x0028)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x2C448   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2C510   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2C5F8   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2C6E0   (0x00A0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2C780   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2C7A0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2C7C0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2C8C8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2C9D0   (0x0108)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x2CAD8   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2CB78   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2CC60   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2CD48   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2CDE8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2CE18   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2CE98   (0x00C0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2CF58   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2D040   (0x00A0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2D0E0   (0x00C8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2D1A8   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2D270   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2D2F0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2D370   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2D3F0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2D420   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2D4A0   (0x00C0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2D560   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2D648   (0x00A0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2D6E8   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2D7B0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2D830   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2D8B0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2D8E0   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2D960   (0x00C0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2DA20   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2DB08   (0x00A0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2DBA8   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2DC70   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2DCF0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2DD70   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2DDA0   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2DE20   (0x00C0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2DEE0   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2DFC8   (0x00A0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2E068   (0x00C8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2E130   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2E1F8   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2E278   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2E2F8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2E378   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2E3A8   (0x0028)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x2E3D0   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2E498   (0x00E8)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2E580   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2E5A0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2E5C0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2E6C8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2E7D0   (0x0108)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x2E8D8   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2E978   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2EA60   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2EB48   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2EBE8   (0x0030)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x2EC18   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2ECE0   (0x00E8)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2EDC8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2EDE8   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2EE08   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2EF10   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2F018   (0x0108)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x2F120   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2F1C0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2F2A8   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2F390   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2F430   (0x0030)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x2F460   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2F528   (0x00E8)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2F610   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2F630   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2F650   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2F758   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2F860   (0x0108)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x2F968   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2FA08   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2FAF0   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2FBD8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2FC78   (0x0030)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x2FCA8   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2FD70   (0x00E8)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2FE58   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2FE78   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2FE98   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2FFA0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x300A8   (0x0108)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x301B0   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x30250   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x30338   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x30420   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x304C0   (0x0030)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x304F0   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x305B8   (0x00E8)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x306A0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x306C0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x306E0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x307E8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x308F0   (0x0108)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x309F8   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x30A98   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x30B80   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x30C68   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x30D08   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x30D38   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x30D60   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x30D90   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x30E40   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x30E70   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x30E98   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x30EC0   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x30F40   (0x00C0)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x31000   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x310C8   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x31148   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x311C8   (0x00C0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x31288   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x312B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x312D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x31300   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x31328   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x31350   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x31378   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x313A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x313C8   (0x0028)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x313F0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x314D8   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x315C0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x31660   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x31690   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x31778   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x31860   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x31900   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x31930   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x31A18   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x31B00   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x31BA0   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x31BD0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x31CB8   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x31DA0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x31E40   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x31E70   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x31E98   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x31EC8   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x31F78   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x31FA8   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x320B0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x320D0   (0x0020)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x320F0   (0x00A0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x32190   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x32250   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x322D0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x32350   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x323D0   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x32490   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x32510   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x325B0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x32650   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x326D0   (0x00C0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x32790   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x32830   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x328B0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x32930   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x329B0   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x32A70   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x32AF0   (0x00A0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x32B90   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x32C50   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x32CD0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x32D50   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x32DD0   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x32E90   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x32F10   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x32FB0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x33050   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x330D0   (0x00C0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x33190   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x33230   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x332B0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x33330   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x333B0   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x33470   (0x0080)  
	FTigerAnimNode_BlendByBoolWSettle                  TigerAnimGraphNode_BlendByBoolWSettle;                      // 0x334F0   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x335A0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x335D0   (0x00B0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x33680   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x336C8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x336F8   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x337A8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x33900   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x33928   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x33A80   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x33AA8   (0x0158)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x33C00   (0x00C0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x33CC0   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x33D08   (0x0048)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x33D50   (0x00C8)  
	FAnimNode_MakeDynamicAdditive                      AnimGraphNode_MakeDynamicAdditive;                          // 0x33E18   (0x0038)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x33E50   (0x00A0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x33EF0   (0x0158)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x34048   (0x0118)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x34160   (0x0080)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x341E0   (0x00C8)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x342A8   (0x0030)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x342D8   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x343C8   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x344B8   (0x00F0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x345A8   (0x0020)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x345C8   (0x00F0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x346B8   (0x0020)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x346D8   (0x0158)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x34830   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x34920   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x34A10   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x34B00   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x34BF0   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x34CE0   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x34DD0   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x34EC0   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x34FB0   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x350A0   (0x00F0)  
	bool                                               PoseInitialized;                                            // 0x35190   (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x35191   (0x0003)  MISSED
	float                                              RotationOffsetInterpSpeed;                                  // 0x35194   (0x0004)  
	float                                              ZOffsetInterpSpeed;                                         // 0x35198   (0x0004)  
	TEnumAsByte<ENUM_RangedWeaponCategories>           CurrentRangedWeapon;                                        // 0x3519C   (0x0001)  
	TEnumAsByte<ENUM_MeleeWeaponCategories>            CurrentMeleeWeapon;                                         // 0x3519D   (0x0001)  
	bool                                               IsMale;                                                     // 0x3519E   (0x0001)  
	unsigned char                                      UnknownData14_5[0x1];                                       // 0x3519F   (0x0001)  MISSED
	float                                              FireWeaponBlendInTime;                                      // 0x351A0   (0x0004)  
	unsigned char                                      UnknownData15_5[0x4];                                       // 0x351A4   (0x0004)  MISSED
	UBlendSpaceBase*                                   LastPowerAimOffset;                                         // 0x351A8   (0x0008)  
	float                                              PowerAimOffsetAlpha;                                        // 0x351B0   (0x0004)  
	bool                                               bHasValidPowerAimOffset;                                    // 0x351B4   (0x0001)  
	unsigned char                                      UnknownData16_5[0x3];                                       // 0x351B5   (0x0003)  MISSED
	TArray<TEnumAsByte>                                WPN_Ranged___DualHanded;                                    // 0x351B8   (0x0010)  
	bool                                               ShouldLeaveStop;                                            // 0x351C8   (0x0001)  
	unsigned char                                      UnknownData17_5[0x7];                                       // 0x351C9   (0x0007)  MISSED
	TArray<TEnumAsByte>                                IsDualHandRangedWeapon;                                     // 0x351D0   (0x0010)  
	TArray<TEnumAsByte>                                WPN_Melee___SingleHanded;                                   // 0x351E0   (0x0010)  
	TArray<TEnumAsByte>                                WPN_Ranged___SingleHanded;                                  // 0x351F0   (0x0010)  
	ETigerClan                                         CurrentPlayerClan;                                          // 0x35200   (0x0001)  
	unsigned char                                      UnknownData18_5[0x7];                                       // 0x35201   (0x0007)  MISSED
	TMap<TEnumAsByte, FName>                           SurfaceToAudioName;                                         // 0x35208   (0x0050)  
	bool                                               RecentlyLeftWallSlide;                                      // 0x35258   (0x0001)  
	TEnumAsByte<ENUM_SettleType>                       SettleEventEnum_Aim;                                        // 0x35259   (0x0001)  
	TEnumAsByte<ENUM_SettleType>                       SettleEventEnum_Crouch;                                     // 0x3525A   (0x0001)  
	unsigned char                                      UnknownData19_5[0x1];                                       // 0x3525B   (0x0001)  MISSED
	float                                              OverrideRightHand;                                          // 0x3525C   (0x0004)  
	float                                              OverrideLeftHand;                                           // 0x35260   (0x0004)  
	bool                                               ActivateBackFlip;                                           // 0x35264   (0x0001)  
	bool                                               JumpL_R;                                                    // 0x35265   (0x0001)  
	unsigned char                                      UnknownData20_5[0x2];                                       // 0x35266   (0x0002)  MISSED
	TArray<TEnumAsByte>                                WPN_Ranged___TwoHanded;                                     // 0x35268   (0x0010)  
	float                                              Override_Right_Hand_Null;                                   // 0x35278   (0x0004)  
	float                                              Override_Left_Hand_Null;                                    // 0x3527C   (0x0004)  
	TEnumAsByte<ENUM_SettleType>                       SettleEventEnum_HideWeapon;                                 // 0x35280   (0x0001)  
	unsigned char                                      UnknownData21_5[0x7];                                       // 0x35281   (0x0007)  MISSED
	TArray<TEnumAsByte>                                WPN_Melee___DualHanded;                                     // 0x35288   (0x0010)  
	TArray<TEnumAsByte>                                OneHandedHipWeaponsMovingList;                              // 0x35298   (0x0010)  
	bool                                               _Fp_OneHandedHipWeaponsMoving;                              // 0x352A8   (0x0001)  
	bool                                               Has_Input___before_setting_var_;                            // 0x352A9   (0x0001)  
	unsigned char                                      UnknownData22_5[0x2];                                       // 0x352AA   (0x0002)  MISSED
	float                                              RecoilKickAlpha;                                            // 0x352AC   (0x0004)  
	bool                                               IsSecondMagazine;                                           // 0x352B0   (0x0001)  
	bool                                               _Fp_OneHandedHipWeapons;                                    // 0x352B1   (0x0001)  
	unsigned char                                      UnknownData23_5[0x6];                                       // 0x352B2   (0x0006)  MISSED
	TArray<TEnumAsByte>                                OneHandedHipWeaponsList;                                    // 0x352B8   (0x0010)  
	TMap<TEnumAsByte, float>                           RecoilShakeAlphaAddMap;                                     // 0x352C8   (0x0050)  
	TArray<TEnumAsByte>                                RecoilShakeWeaponsMap;                                      // 0x35318   (0x0010)  
	TMap<TEnumAsByte, float>                           ADSRecoilKickAlpha;                                         // 0x35328   (0x0050)  
	FRotator                                           MagazineRotationAmount;                                     // 0x35378   (0x000C)  
	bool                                               ShouldMagazineMoveWhileShooting;                            // 0x35384   (0x0001)  
	unsigned char                                      UnknownData24_5[0x3];                                       // 0x35385   (0x0003)  MISSED
	float                                              WeaponArmPoseAlpha;                                         // 0x35388   (0x0004)  
	bool                                               IsUnarmed;                                                  // 0x3538C   (0x0001)  
	unsigned char                                      UnknownData25_5[0x3];                                       // 0x3538D   (0x0003)  MISSED
	UAnimMetaData*                                     Array_Element;                                              // 0x35390   (0x0008)  
	FName                                              CurrentPhysMaterial;                                        // 0x35398   (0x0008)  
	FName                                              PhysMaterialSet;                                            // 0x353A0   (0x0008)  
	bool                                               TwistBonesEnabled;                                          // 0x353A8   (0x0001)  
	unsigned char                                      UnknownData26_5[0x7];                                       // 0x353A9   (0x0007)  MISSED
	FTransform                                         ScaleClavicleLReferenceTransform;                           // 0x353B0   (0x0030)  
	FTransform                                         ScaleClavicleRReferenceTransform;                           // 0x353E0   (0x0030)  
	bool                                               ScaleReferencePosesSet;                                     // 0x35410   (0x0001)  
	bool                                               ScaleResetToReferencePoses;                                 // 0x35411   (0x0001)  


	/// Functions
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.DrawAnimationLayer
	void DrawAnimationLayer(FPoseLink DrawInPose, FPoseLink& DrawAnimationLayer);                                            // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.SoaringLeapLeaningLayer
	void SoaringLeapLeaningLayer(FPoseLink SoringLeapInPose, FPoseLink& SoaringLeapLeaningLayer);                            // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.Downed/Death/Revive/DiabloAnimationLayer
	void Downed/Death/Revive/DiabloAnimationLayer(FPoseLink InPose, FPoseLink& Downed/Death/Revive/DiabloAnimationLayer);    // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.MeleeAnimationLayer
	void MeleeAnimationLayer(FPoseLink MeleeInPose, FPoseLink& MeleeAnimationLayer);                                         // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.FaceAnimationLayer
	void FaceAnimationLayer(FPoseLink& FaceAnimationLayer);                                                                  // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.DownedAnimationLayer
	void DownedAnimationLayer(FPoseLink& DownedAnimationLayer);                                                              // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.QuickAttackAnimationLayer
	void QuickAttackAnimationLayer(FPoseLink QuickAttackInPose, FPoseLink& QuickAttackAnimationLayer);                       // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.ItemsAnimationLayer
	void ItemsAnimationLayer(FPoseLink ItemsInPose, FPoseLink& ItemsAnimationLayer);                                         // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.PowerAnimationLayer
	void PowerAnimationLayer(FPoseLink PowersInPose, FPoseLink& PowerAnimationLayer);                                        // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.RangedAnimationLayer
	void RangedAnimationLayer(FPoseLink RangedAnimationInPose, FPoseLink& RangedAnimationLayer);                             // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.GetBoneReferenceMatrix
	FTransform GetBoneReferenceMatrix(FName BoneName, USkinnedMeshComponent* SkeletalMesh);                                  // [0x197e4f0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.UpdateWalkingMaterialSwitchForAudio
	void UpdateWalkingMaterialSwitchForAudio();                                                                              // [0x197e4f0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.UpdateClimbingMaterialSwitchForAudio
	void UpdateClimbingMaterialSwitchForAudio();                                                                             // [0x197e4f0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.GetDisciplineAnimSet
	UTigerAnimationSetAsset* GetDisciplineAnimSet(ETigerDisciplinesEnum InDisciplineType);                                   // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.GetMeleeWeaponAnimSet
	UTigerAnimationSetAsset* GetMeleeWeaponAnimSet(TEnumAsByte<ENUM_MeleeWeaponCategories> InMeleeWeaponType);               // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.GetMeleeWeaponTypeFromWeaponClass
	void GetMeleeWeaponTypeFromWeaponClass(UClass* InMeleeWeaponClass, TEnumAsByte<ENUM_MeleeWeaponCategories>& ResultWeaponCategory); // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.GetRangedWeaponAnimSet
	UTigerAnimationSetAsset* GetRangedWeaponAnimSet(TEnumAsByte<ENUM_RangedWeaponCategories> InRangedWeaponType);            // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.GetRangedWeaponTypeFromWeaponClass
	void GetRangedWeaponTypeFromWeaponClass(UClass* InRangedWeaponClass, TEnumAsByte<ENUM_RangedWeaponCategories>& ResultWeaponCategory); // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.GetAnimSetAssetFromWeaponClass
	UTigerAnimationSetAsset* GetAnimSetAssetFromWeaponClass(UClass* InWeaponClass);                                          // [0x197e4f0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.CanUseTurnInPlace
	bool CanUseTurnInPlace(ATigerPlayer* Player);                                                                            // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.Update Fire Ready Time Stamp
	void Update Fire Ready Time Stamp();                                                                                     // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.GetBlendingInFirePoseTimeLeft
	float GetBlendingInFirePoseTimeLeft();                                                                                   // [0x197e4f0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.IsBlendingInFireWeaponPose
	float IsBlendingInFireWeaponPose();                                                                                      // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.UpdateEquippedWeapon
	void UpdateEquippedWeapon(ATigerPlayer* TigerPlayer);                                                                    // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.SetMeleeWeaponCategory
	void SetMeleeWeaponCategory(UClass* MeleeWeaponClass, TEnumAsByte<ENUM_MeleeWeaponCategories>& MeleeWeaponCategory);     // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.SetRangedWeaponCategory
	void SetRangedWeaponCategory(UClass* RangedWeaponClass, TEnumAsByte<ENUM_RangedWeaponCategories>& RangedWeaponCategory); // [0x197e4f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.FacialAnimations
	void FacialAnimations();                                                                                                 // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.GenerateSprintingNoiseEvent
	void GenerateSprintingNoiseEvent();                                                                                      // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.SelectAnimationSets
	void SelectAnimationSets(UTigerAnimationSetCollection* SetCollection);                                                   // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B832127242ED9C8B1ACF5783CED62232
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B832127242ED9C8B1ACF5783CED62232(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_FA4F073C4B0AA9D64FE8BA93B232E052
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_FA4F073C4B0AA9D64FE8BA93B232E052(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_296B88D644E5F1855E2DA0A5128710DC
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_296B88D644E5F1855E2DA0A5128710DC(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_6B865C3C4F5ED74332A2BEB0EEF9D147
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_6B865C3C4F5ED74332A2BEB0EEF9D147(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_BDACD7234D53004EF02878B0B9E4755C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_BDACD7234D53004EF02878B0B9E4755C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_A0DFE57D425A4B5748C82D824F988979
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_A0DFE57D425A4B5748C82D824F988979(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_BE946D0D4A29DE695D9B5B8C3A945229
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_BE946D0D4A29DE695D9B5B8C3A945229(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_BF6AC028479293D246ED4EA28C0CFA93
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_BF6AC028479293D246ED4EA28C0CFA93(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_81479F7240F8D5CC647A22B88749AA75
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_81479F7240F8D5CC647A22B88749AA75(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_B20193834C3458F5F1E4C3B1177FFB4D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_B20193834C3458F5F1E4C3B1177FFB4D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_A3297A1945F51F9447B211A1C3C455E3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_A3297A1945F51F9447B211A1C3C455E3(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_980EAC9C4B18FA6A96FA85880807193A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_980EAC9C4B18FA6A96FA85880807193A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_F28FC5B248D9B8DC32375FA1037DC6C4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_F28FC5B248D9B8DC32375FA1037DC6C4(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_07B673564332110695A257842AC28595
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_07B673564332110695A257842AC28595(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_58B8180E4F8EE2D9623CF5909E8E8197
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_58B8180E4F8EE2D9623CF5909E8E8197(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_29EAAF62466BE2C298AB4485D697B30F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_29EAAF62466BE2C298AB4485D697B30F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F6233CA24A83C0B3EA78659C00973745
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F6233CA24A83C0B3EA78659C00973745(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_DA0AEDD042D91565EB907DAB05BC2D32
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_DA0AEDD042D91565EB907DAB05BC2D32(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_3423FE5346086C0203BC78A4D01B84CC
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_3423FE5346086C0203BC78A4D01B84CC(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_35916B394877F64AFAE1099D9A320AD2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_35916B394877F64AFAE1099D9A320AD2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_949B08A34070C83A41DEB6ADDCE1197B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_949B08A34070C83A41DEB6ADDCE1197B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_4E3471B94E490423ACF78F9DE934AB8E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_4E3471B94E490423ACF78F9DE934AB8E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_89F2B05E447F926F5F21FA8E60196549
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_89F2B05E447F926F5F21FA8E60196549(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_F86F9E5C41F89066B10396AFAD23C2B8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_F86F9E5C41F89066B10396AFAD23C2B8(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_3F4EB8854FA365E42D0AC09496BBE578
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_3F4EB8854FA365E42D0AC09496BBE578(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_923E3FB0461876F7940D03A841283134
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_923E3FB0461876F7940D03A841283134(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_88157E40493EF05AEE471BA48A1A60AA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_88157E40493EF05AEE471BA48A1A60AA(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_65FBCC38412E7F7C935BCCACBF7FD929
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_65FBCC38412E7F7C935BCCACBF7FD929(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_230813644B114FFFB8A32DB9BAA6828D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_230813644B114FFFB8A32DB9BAA6828D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0C07405F481F35688F00728FFF19E5F3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0C07405F481F35688F00728FFF19E5F3(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_505430D4432F467D96788D90C2785E8E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_505430D4432F467D96788D90C2785E8E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_88E74F144EE4BC9C21B935822CC426E4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_88E74F144EE4BC9C21B935822CC426E4(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D005DBEC4E0579835DA7DC9BAA3C5F75
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D005DBEC4E0579835DA7DC9BAA3C5F75(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_1F00FF304F6370FBB1F105BC098E29D4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_1F00FF304F6370FBB1F105BC098E29D4(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A18941B94FD85F70E30F00BEA88F5222
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A18941B94FD85F70E30F00BEA88F5222(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_AB2B23C14D5893ECFEDD73B3CB9ED277
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_AB2B23C14D5893ECFEDD73B3CB9ED277(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_484C431B4A8E9AD1E39B99A26A375AB5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_484C431B4A8E9AD1E39B99A26A375AB5(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_562DAACB41F2513F255E08ADDEDF9521
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_562DAACB41F2513F255E08ADDEDF9521(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_EBE14217419383737702CFA1DB97934B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_EBE14217419383737702CFA1DB97934B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_D8E5B56643DA6FFDF50A749B63C7DAF2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_D8E5B56643DA6FFDF50A749B63C7DAF2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_E0E3346D430AA4E295FC18990847203C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_E0E3346D430AA4E295FC18990847203C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_DEA3EC9F44A071A71C9242AE215F3713
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_DEA3EC9F44A071A71C9242AE215F3713(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_71924AFA4F15D66BDACFE7843EAA5D6F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_71924AFA4F15D66BDACFE7843EAA5D6F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_9FFDA167470CF1803497A895CA08A611
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_9FFDA167470CF1803497A895CA08A611(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_E5902A1A4EC85A61E3F162BE728275B4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_E5902A1A4EC85A61E3F162BE728275B4(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_55616DA74994691D43DC1BB030978586
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_55616DA74994691D43DC1BB030978586(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_61D380E74925961C356461B9F98A8983
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_61D380E74925961C356461B9F98A8983(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_D75ABA7944E9D7976A21E1890D7A04F0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_D75ABA7944E9D7976A21E1890D7A04F0(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_8B5180D94ED5891EBD13329B2C5C2BAF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_8B5180D94ED5891EBD13329B2C5C2BAF(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_6E444C6F4F574FD144C63B9CEA8C1BE9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_6E444C6F4F574FD144C63B9CEA8C1BE9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_8E49D3454D02C2B3598D81A02DA530ED
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_8E49D3454D02C2B3598D81A02DA530ED(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_CE7679DA4ADF537F436305A35C07B2F6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_CE7679DA4ADF537F436305A35C07B2F6(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_161FBC2545E2A54DBB9CC9A2A271D341
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_161FBC2545E2A54DBB9CC9A2A271D341(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_A8FBF8F4426F2291B7457D9B770B429B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_A8FBF8F4426F2291B7457D9B770B429B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_36885AA0480103AB1FADB19DDA66ED97
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_36885AA0480103AB1FADB19DDA66ED97(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_086B393C47C913C6214DA89347F55DD5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_086B393C47C913C6214DA89347F55DD5(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_559957334AF79D67499CE9B4289F64C5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_559957334AF79D67499CE9B4289F64C5(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_199F1374461A67FD5EECDFA34F9253DC
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_199F1374461A67FD5EECDFA34F9253DC(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_32EEF46D4947C7074E573F88B75FBFA0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_32EEF46D4947C7074E573F88B75FBFA0(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_776A61554BED7F7FEBB176B7EAA4FDC1
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_776A61554BED7F7FEBB176B7EAA4FDC1(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_1AF1670049DEECF3651E5D9D1CE344B4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_1AF1670049DEECF3651E5D9D1CE344B4(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CA76AB844AAFEB3419DDA799F31A5B99
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CA76AB844AAFEB3419DDA799F31A5B99(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_95E549B24E5F068487D4DEAF193D2302
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_95E549B24E5F068487D4DEAF193D2302(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6310E59941CEDCE09D8E46A8372C16AE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6310E59941CEDCE09D8E46A8372C16AE(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_9ED2B894494AD54CEDD69FA962FBDEFB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_9ED2B894494AD54CEDD69FA962FBDEFB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_1ADD68EE4F1807A144CA49922F23722E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_1ADD68EE4F1807A144CA49922F23722E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_16491C8E45B9A6E968F0C4BC3A66781C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_16491C8E45B9A6E968F0C4BC3A66781C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D38E3C9D4BF29A5A07A105AEDD431C7E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D38E3C9D4BF29A5A07A105AEDD431C7E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8D6C165C45186DCCB93619B1AEE46FC7
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8D6C165C45186DCCB93619B1AEE46FC7(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_2E3AD2C740C4E19C8D002C9E639C826C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_2E3AD2C740C4E19C8D002C9E639C826C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D3BC97DE4EC254D3DCE9BCADD0B2B04F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D3BC97DE4EC254D3DCE9BCADD0B2B04F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_3DE4BDBE4B63CB3DB33E589B0148B0AF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_3DE4BDBE4B63CB3DB33E589B0148B0AF(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_1902D5744C20A827E79FFA80520EECC6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_1902D5744C20A827E79FFA80520EECC6(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_15D2B9F64B2F2515317942900C6AB862
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_15D2B9F64B2F2515317942900C6AB862(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_99EAF74947BB8B6CF1B589A481C4A101
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_99EAF74947BB8B6CF1B589A481C4A101(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3F824A974E1C4BAB03153DAFC1020912
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3F824A974E1C4BAB03153DAFC1020912(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_44F72AAC4331DDBE4320D2A437A2974D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_44F72AAC4331DDBE4320D2A437A2974D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_8FD38108495BE79170B30DA94C9FC481
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_8FD38108495BE79170B30DA94C9FC481(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_33E2617447F5EA99091AEAAF924C021B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_33E2617447F5EA99091AEAAF924C021B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_EAE213524C69B313FED750B686271778
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_EAE213524C69B313FED750B686271778(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_0DC9FD844A7F4D8C1A80BFAE97647B7D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_0DC9FD844A7F4D8C1A80BFAE97647B7D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_66852C3544D141D7D97FE894A85ED95D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_66852C3544D141D7D97FE894A85ED95D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_5AE9B7754D521616CC558FACD9EA72BE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_5AE9B7754D521616CC558FACD9EA72BE(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_A1C7ABDE491C9A72975A568FD0414FC6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_A1C7ABDE491C9A72975A568FD0414FC6(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_B7794FE2416B4376AC325DA4CB648977
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_B7794FE2416B4376AC325DA4CB648977(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_870303A24BCAC2A7A274E49205D8629B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_870303A24BCAC2A7A274E49205D8629B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_BB1970A14140A625B4C4BD88741E4A17
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_BB1970A14140A625B4C4BD88741E4A17(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_7BEB5140414FCAF1FED91E9F0B460A65
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_7BEB5140414FCAF1FED91E9F0B460A65(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_0275D4B94E34EC61E0BA8C863A203E8D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_0275D4B94E34EC61E0BA8C863A203E8D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_D1A8977E4F5D4DBDA656F787AE366C3A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_D1A8977E4F5D4DBDA656F787AE366C3A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_03D624AD4C149B83FAAE72A8270BB202
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_03D624AD4C149B83FAAE72A8270BB202(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_FAF7569E40F2EFE7DA00B180369E584C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_FAF7569E40F2EFE7DA00B180369E584C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_71D897A947479B8E7C48AA91516D7DBF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_71D897A947479B8E7C48AA91516D7DBF(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_A446D2BC429F6C9D5B438F8C8CF3D06C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_A446D2BC429F6C9D5B438F8C8CF3D06C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_87B6B5114862BA6AFE8ACD857B7E8B5B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_87B6B5114862BA6AFE8ACD857B7E8B5B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_208AE25A4CE45AA61944809816896BD2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_208AE25A4CE45AA61944809816896BD2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_336011394250BBD86CFAB99F8A69646D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_336011394250BBD86CFAB99F8A69646D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_DF5F6A5D42B242BDF1BDF5B2816FD605
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_DF5F6A5D42B242BDF1BDF5B2816FD605(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_B3BE642648BE1667C59E9993424036FF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_B3BE642648BE1667C59E9993424036FF(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_25E943F84C878B78CA16E694FD4A429C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_25E943F84C878B78CA16E694FD4A429C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_824A366141C853F9A497AF811DD6BF28
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_824A366141C853F9A497AF811DD6BF28(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_A8D41EFE42EB1B30F62DFA8E756C800C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_A8D41EFE42EB1B30F62DFA8E756C800C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_97F37A2849F7568424DF8AAFD5AD47CA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_97F37A2849F7568424DF8AAFD5AD47CA(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_9007D58643FA305549A9B6B106834230
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_9007D58643FA305549A9B6B106834230(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RotateRootBone_71C0C62541BE9A610B5ED7B4899F5DF6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RotateRootBone_71C0C62541BE9A610B5ED7B4899F5DF6(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_010E3A074325102D4037649E5C8C5C40
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_010E3A074325102D4037649E5C8C5C40(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_4A2DE1874B4E4099618ECDBCEEF5255B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_4A2DE1874B4E4099618ECDBCEEF5255B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_3432E3C942E1FC376E23B497EA68E4CE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_3432E3C942E1FC376E23B497EA68E4CE(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RotateRootBone_E83817354C04F991518B16BA0B33A3F3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RotateRootBone_E83817354C04F991518B16BA0B33A3F3(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8D4D39AA4696E04A88DFB590D8672660
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8D4D39AA4696E04A88DFB590D8672660(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CDC5402B482DDABEE9764187F5D4C0A9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CDC5402B482DDABEE9764187F5D4C0A9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D43DDC064C0D945CA75D8D9D92257323
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D43DDC064C0D945CA75D8D9D92257323(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_C1353DF941D00AB8EEDE1487C19A0D6A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_C1353DF941D00AB8EEDE1487C19A0D6A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7656C7794CA5075D5C80CC86B694A0EB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7656C7794CA5075D5C80CC86B694A0EB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_C4BFC3B74673A6BFF6AC689351F838C8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_C4BFC3B74673A6BFF6AC689351F838C8(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_39E88E6D46C1FAAC789A53A40B1AC969
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_39E88E6D46C1FAAC789A53A40B1AC969(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_EC0FC83D49A0D89B87A8AFAD4F7D1314
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_EC0FC83D49A0D89B87A8AFAD4F7D1314(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_672A45D24EA5F726A102DC8BBA5AA27C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_672A45D24EA5F726A102DC8BBA5AA27C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D43F851140E9111050683692F68F3DC7
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D43F851140E9111050683692F68F3DC7(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_607C31F7460FF20576F381A1C0888543
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_607C31F7460FF20576F381A1C0888543(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_23B1D0E84B558D5C234AA8B1DEED6BC4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_23B1D0E84B558D5C234AA8B1DEED6BC4(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3CBE23EF490262EBCC4FFBBDE8B85A7D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3CBE23EF490262EBCC4FFBBDE8B85A7D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_44F1D1DC47BE1E4C2496799DAFE079B5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_44F1D1DC47BE1E4C2496799DAFE079B5(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CE5B064D41F014196A7B0EA370E33923
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CE5B064D41F014196A7B0EA370E33923(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F8E79C2042E3ADB1F20A888BC75779F1
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F8E79C2042E3ADB1F20A888BC75779F1(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7FCC135544A0C526EE1A73B1D1C8129A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7FCC135544A0C526EE1A73B1D1C8129A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5F16542F4F078F25B9BB028CF3BB1268
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5F16542F4F078F25B9BB028CF3BB1268(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_E10FB0114D3249892DAFDC9D5ED1ADD6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_E10FB0114D3249892DAFDC9D5ED1ADD6(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5616BFD84D9AAA48092CDEBEC2D1D0F5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5616BFD84D9AAA48092CDEBEC2D1D0F5(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_E97D6B69459189DE572D58A16DD967D2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_E97D6B69459189DE572D58A16DD967D2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_782A76E244FA5582BCD9FCA1D9530235
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_782A76E244FA5582BCD9FCA1D9530235(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_E6533A0D452DC47E8AA40C8957DAEE0E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_E6533A0D452DC47E8AA40C8957DAEE0E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D48BF7B44425DF25B415748B0D116F24
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D48BF7B44425DF25B415748B0D116F24(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F1031364492E39E3E75F48BE23C0FABF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F1031364492E39E3E75F48BE23C0FABF(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_907F985648A79CFD4AFD748EC2252A80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_907F985648A79CFD4AFD748EC2252A80(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A552F56D4AC53302BCCB668AC575A435
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A552F56D4AC53302BCCB668AC575A435(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_CC2D680A49A1D0D60968D48C5E16A13A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_CC2D680A49A1D0D60968D48C5E16A13A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_E12F3E384E4172A4FA9A78BE12274651
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_E12F3E384E4172A4FA9A78BE12274651(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_8D62B79045C837652C9A4B8DEC8A1961
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_8D62B79045C837652C9A4B8DEC8A1961(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RotateRootBone_6C0DFE70423224EE31584E8DD5E49CCF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RotateRootBone_6C0DFE70423224EE31584E8DD5E49CCF(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_D1A5DC584BBF647AF74E68BDD129AF18
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_D1A5DC584BBF647AF74E68BDD129AF18(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_0F0883734F7DA028D023F997282EE330
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_0F0883734F7DA028D023F997282EE330(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_EF09C88A467DBD0BC75BEDA69D0ECD9E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_EF09C88A467DBD0BC75BEDA69D0ECD9E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_4BDA9C3E4C6EF2D7B2EB1A87EEE82B76
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_4BDA9C3E4C6EF2D7B2EB1A87EEE82B76(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_36B0F67D41267FC60F9735BCDEC21F7A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_36B0F67D41267FC60F9735BCDEC21F7A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_888D88B24EA15EFC888DA6A9772F56EB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_888D88B24EA15EFC888DA6A9772F56EB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_907DAB5348CEDBAED75DDE98091A9CBA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_907DAB5348CEDBAED75DDE98091A9CBA(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_C5929A3D43BEBD1D97CECD8B94703C81
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_C5929A3D43BEBD1D97CECD8B94703C81(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_D880054B42C50BD73EDE6DA009AED8C1
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_D880054B42C50BD73EDE6DA009AED8C1(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_655CA9A34C6A5B3308E611BF3B9E1823
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_655CA9A34C6A5B3308E611BF3B9E1823(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_9D2E05114E6B15468385888729733573
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_9D2E05114E6B15468385888729733573(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpaceEvaluator_E25C1EAC460A7A7415691099D1849783
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpaceEvaluator_E25C1EAC460A7A7415691099D1849783(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpaceEvaluator_5C28DF3F4FD0525C5E3937A862B0EA63
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpaceEvaluator_5C28DF3F4FD0525C5E3937A862B0EA63(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpaceEvaluator_05CA9A5640F2643D1FB69DB42E0DC112
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpaceEvaluator_05CA9A5640F2643D1FB69DB42E0DC112(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_33A56C9E4E333BD92AC3C398C96321E8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_33A56C9E4E333BD92AC3C398C96321E8(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_F5187CA44CAD8C423133E19298D32452
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_F5187CA44CAD8C423133E19298D32452(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_C5E2AED74810E048ACB97D9FCAD8FA76
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_C5E2AED74810E048ACB97D9FCAD8FA76(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_26EFC83340A7446424FC49BAF3F2FD38
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_26EFC83340A7446424FC49BAF3F2FD38(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_9E63B5CB42A74A2723DC6ABB9CF02EFB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_9E63B5CB42A74A2723DC6ABB9CF02EFB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_AD849AF946CE2BE8FF7D7A90244BE8F8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_AD849AF946CE2BE8FF7D7A90244BE8F8(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_53864AC8453ECBCDBA4446B0C66C346B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_53864AC8453ECBCDBA4446B0C66C346B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_2AD7CA0B439100BA77C22DA0D07B071C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_2AD7CA0B439100BA77C22DA0D07B071C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_0B226C9C495CADD5D5766ABAE2347C90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_0B226C9C495CADD5D5766ABAE2347C90(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7EE1D992431F1575BAE4DB84099A6C4F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7EE1D992431F1575BAE4DB84099A6C4F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_C10257C54E26C865909F5BB54778586F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_C10257C54E26C865909F5BB54778586F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RotateRootBone_9D15855C44D6F27DD59C5AA6F3E4DB4B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RotateRootBone_9D15855C44D6F27DD59C5AA6F3E4DB4B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D54CD17A41E9A998409E9988C32F8FD8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D54CD17A41E9A998409E9988C32F8FD8(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_978CA8E243C336042730D3B85634287C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_978CA8E243C336042730D3B85634287C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A8AC5C5B46667D41820BBCA60AF6413C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A8AC5C5B46667D41820BBCA60AF6413C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_52B2EE8A48B6D87C8C7FFF8049DA5457
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_52B2EE8A48B6D87C8C7FFF8049DA5457(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_9AEE640F4FC709E521549DB70D04C78C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_9AEE640F4FC709E521549DB70D04C78C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CC87BFA64FA05978C911EF9F2DE3BA5A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CC87BFA64FA05978C911EF9F2DE3BA5A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_16CFC4F045A6F58886A2D1BE5A0A959A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_16CFC4F045A6F58886A2D1BE5A0A959A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_AE9FCA434E9085FC0477EC9999295829
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_AE9FCA434E9085FC0477EC9999295829(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_4F17488B4EE5B61AEB0E869CB4D093DF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_4F17488B4EE5B61AEB0E869CB4D093DF(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_1C4061724FAC4E98E7C85FB8BD232107
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_1C4061724FAC4E98E7C85FB8BD232107(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_10CCFEC54848FFC85C0A889736F2CA52
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_10CCFEC54848FFC85C0A889736F2CA52(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_89A2EB9845CA973A4430FAB671A68D98
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_89A2EB9845CA973A4430FAB671A68D98(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_B89D00484CBDDDACF919199EA00DF09A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_B89D00484CBDDDACF919199EA00DF09A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_8E17F62B4FD7110B3967C18E1C83B1AA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_8E17F62B4FD7110B3967C18E1C83B1AA(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_8562638642519E982B53018AE1535AD6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_8562638642519E982B53018AE1535AD6(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_A446E22F4AAD688C69E1DD9834A47982
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_A446E22F4AAD688C69E1DD9834A47982(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_6964D1974C352551562164B2C25219E8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_6964D1974C352551562164B2C25219E8(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_0FBA55BF464866E8689F619BB4CB02FB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_0FBA55BF464866E8689F619BB4CB02FB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_47B849DA44238BE19D452DAC43589132
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_47B849DA44238BE19D452DAC43589132(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_66C422F94F52258A19107793A6AF1FAF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_66C422F94F52258A19107793A6AF1FAF();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_3F3386B84EB8E4EB2AAAC5AE3639417C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_3F3386B84EB8E4EB2AAAC5AE3639417C();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_695A174A4BDACB952B86389BBD1D72C3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_695A174A4BDACB952B86389BBD1D72C3(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_6DF6719641ADC76B20DFE5AAD8AAB6F2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_6DF6719641ADC76B20DFE5AAD8AAB6F2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_B8A69D6C474BE201EAC842810A1E8BA9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_B8A69D6C474BE201EAC842810A1E8BA9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_A8ABE64E4C21D19D88A2A19B80FC01D8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_A8ABE64E4C21D19D88A2A19B80FC01D8(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_DF3DEE8642B1870C60D7E8BD67C0FE6F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_DF3DEE8642B1870C60D7E8BD67C0FE6F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_756DDB9A482A6D162ADFE39B96302138
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_756DDB9A482A6D162ADFE39B96302138(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_16CBD1ED44F65900627CA8A890CE5B62
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_16CBD1ED44F65900627CA8A890CE5B62(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_0A83890247A14A4B379E7D877E229A6C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_0A83890247A14A4B379E7D877E229A6C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_1C1108FC486A4C872D400CAF70B083A9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_1C1108FC486A4C872D400CAF70B083A9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_A3EE65E14515189304A96E90ADEAA4C3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_A3EE65E14515189304A96E90ADEAA4C3(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_0D58D8754F20A3C5B58350B35C1F6770
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_0D58D8754F20A3C5B58350B35C1F6770(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_E954A94A41A8A776E2CDABA01710DF2F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_E954A94A41A8A776E2CDABA01710DF2F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_EB91F4A142B51973EE5F2DA82F482EBE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_EB91F4A142B51973EE5F2DA82F482EBE();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_E700F1F7475371BFC6D0FC968B7E95E5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_E700F1F7475371BFC6D0FC968B7E95E5(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_3A4187454E8D08C522C092945D687B63
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_3A4187454E8D08C522C092945D687B63(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_54540ED6465D7DD716F097BB75D7BD16
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_54540ED6465D7DD716F097BB75D7BD16(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_AC01CD2A4528FCF476698491E17DB48B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_AC01CD2A4528FCF476698491E17DB48B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_9E3C093A4427EFDE28846F897471B552
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_9E3C093A4427EFDE28846F897471B552(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_1DD0EC0045AC0166040AB8AD983E51FD
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_1DD0EC0045AC0166040AB8AD983E51FD(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_DFAA26724C09A3AAA47AEA9E6908B3D0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_DFAA26724C09A3AAA47AEA9E6908B3D0(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_92BA2B4C46BAA0E22CC6A0B9D81875C7
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_92BA2B4C46BAA0E22CC6A0B9D81875C7(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A92B798F4B0A2295CAAFC5BC6FD7993E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A92B798F4B0A2295CAAFC5BC6FD7993E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3287AED346F0F4EE798DADA398D4DD50
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3287AED346F0F4EE798DADA398D4DD50(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_EB1F9BD142D627DEA01FE6ADF44BBA65
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_EB1F9BD142D627DEA01FE6ADF44BBA65(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_273E71494D62AA8A226B8796D844EC0B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_273E71494D62AA8A226B8796D844EC0B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_068C42C9432DA9280C49008DFE58CE90
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_068C42C9432DA9280C49008DFE58CE90(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_5C35BC51453FA5CE863D799E583EF964
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_5C35BC51453FA5CE863D799E583EF964();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_0058F5AA415210AE947B76A3F79F8BA1
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_0058F5AA415210AE947B76A3F79F8BA1(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_FAE030C744FE75F83B0E539BA6DBA70B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_FAE030C744FE75F83B0E539BA6DBA70B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_BD9884814EC43D5D8F0A099998B31648
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_BD9884814EC43D5D8F0A099998B31648(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_5397986248FAC78C4FEF76B8E54A0D6D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_5397986248FAC78C4FEF76B8E54A0D6D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_B984558A46A184B4843672A768CE36A7
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_B984558A46A184B4843672A768CE36A7(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_699434A64C2FE98DA699AF896799CE05
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_699434A64C2FE98DA699AF896799CE05(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_16682A0E4CD7C00C2CBFD69912B4A199
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_16682A0E4CD7C00C2CBFD69912B4A199(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_8AA5A0554DDCF5FF23320CB869DFBAC3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_8AA5A0554DDCF5FF23320CB869DFBAC3(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_04096516402ACC8B3D9E16A804365F3F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_04096516402ACC8B3D9E16A804365F3F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E5AB22CC44B7D2D5304380856DDF189B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E5AB22CC44B7D2D5304380856DDF189B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_136F98994BF1AC0242A0B3A6A2B276FA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_136F98994BF1AC0242A0B3A6A2B276FA(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_0DB7CF924E349E2A83B989895D112575
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_0DB7CF924E349E2A83B989895D112575();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_CE8FE9834CA39EECCA240DA44E7BEAFB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_CE8FE9834CA39EECCA240DA44E7BEAFB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_4252FF59418ED3BF585B39B77B18A612
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_4252FF59418ED3BF585B39B77B18A612(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_AB12BF144D379BFCFD1AC88570FFB79D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_AB12BF144D379BFCFD1AC88570FFB79D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_1A82EC114B198A0F9DD85E84B3A66E0B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_1A82EC114B198A0F9DD85E84B3A66E0B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_1AD4FF514C1A17DCE55CA39C2236161D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_1AD4FF514C1A17DCE55CA39C2236161D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_4BC3729F4E025D107EA6688A78CA9BFB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_4BC3729F4E025D107EA6688A78CA9BFB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_9BAB032C4BF100B36E6E50A08D25A984
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_9BAB032C4BF100B36E6E50A08D25A984(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_CEA03AE343D4BA8799D179846937BEBB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_CEA03AE343D4BA8799D179846937BEBB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_776B567F40BE4143B028C4AC5863ADA6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_776B567F40BE4143B028C4AC5863ADA6(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_66DA982040B773D18ED06796B1750798
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_66DA982040B773D18ED06796B1750798(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A03C35D140803E5F5A0554B845E88305
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A03C35D140803E5F5A0554B845E88305(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_CF5DCD2D46341207214E479719A29624
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_CF5DCD2D46341207214E479719A29624(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_1346F99E469B129B592F9396EBF868CF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_1346F99E469B129B592F9396EBF868CF(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_003AA1F6464B974E661D44A55202729A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_003AA1F6464B974E661D44A55202729A();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_5909C8D14490F7A435C96DAC03693B2A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_5909C8D14490F7A435C96DAC03693B2A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_0ED5A4F7408177AD1314DCBC55A111AD
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_0ED5A4F7408177AD1314DCBC55A111AD(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_C1112D034AA233505B8689AEACAC21E0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_C1112D034AA233505B8689AEACAC21E0(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_627CA74E4D93587DFEF030A56824F4D0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_627CA74E4D93587DFEF030A56824F4D0(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_620C42E04CB01F51B12351AAAAD00C30
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_620C42E04CB01F51B12351AAAAD00C30(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_60CE72B2478ED55D23DF4DBB6523DC75
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_60CE72B2478ED55D23DF4DBB6523DC75(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_FA2217964349F7931A76C5A70DAF1FBB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_FA2217964349F7931A76C5A70DAF1FBB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_12DBF33346D334D43725C49163148BA9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_12DBF33346D334D43725C49163148BA9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_6C4B01AA40FEC4C7CB269DB89182AA68
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_6C4B01AA40FEC4C7CB269DB89182AA68(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_23886BB94DAE3804741C1C8F766236B0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_23886BB94DAE3804741C1C8F766236B0(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_35A35C1242CFD73124783B85879B9D01
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_35A35C1242CFD73124783B85879B9D01(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_FD8AE0E24AB8E28590AC8AB31C27E3B3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_TigerAnimGraphNode_BlendByBoolWSettle_FD8AE0E24AB8E28590AC8AB31C27E3B3(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_342A433B40FEAE649439189073D0C38A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_342A433B40FEAE649439189073D0C38A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_30C139504A4608DFB6EB51A786BC7429
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_30C139504A4608DFB6EB51A786BC7429(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_4CCFC491450EC66A33B5BEB9B35B489B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_4CCFC491450EC66A33B5BEB9B35B489B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_33F36C774A4FE830552B499D2A7FDBFD
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_33F36C774A4FE830552B499D2A7FDBFD(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_0DE49E1F45E6D7FBFE4EA68E72BB4C01
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_0DE49E1F45E6D7FBFE4EA68E72BB4C01(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_988171A24D25971F1C02DA94A5C4DE9C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_988171A24D25971F1C02DA94A5C4DE9C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_EBC30008429725C8D1F965A279D008DF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_EBC30008429725C8D1F965A279D008DF(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_006E51ED47AB31B6CE16819BD544B218
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_006E51ED47AB31B6CE16819BD544B218(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_17DBB49A46BBD0B49543688BAF05F534
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_17DBB49A46BBD0B49543688BAF05F534(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B6716F46442A02B93F08B59A316AC1E7
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B6716F46442A02B93F08B59A316AC1E7(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_4EE8099C4814F1B6B751A09C6C453F16
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_4EE8099C4814F1B6B751A09C6C453F16(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_877670B640681BAAB1D9D481196618BA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_877670B640681BAAB1D9D481196618BA(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_F5D614E64342D4D218329097F106D6CD
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_F5D614E64342D4D218329097F106D6CD();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_49A6095A45A172DCE4436C9829F9AD76
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_49A6095A45A172DCE4436C9829F9AD76(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_891885964F8A9C8172355D87DA4E0730
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_891885964F8A9C8172355D87DA4E0730();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_FF8C60D547B1821E44CBF988BC2A383C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_FF8C60D547B1821E44CBF988BC2A383C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_72C62574493BDEBD05CA52824B9AD9BE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_72C62574493BDEBD05CA52824B9AD9BE();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_36182EE240F21EA029C200AA630BFA0A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_36182EE240F21EA029C200AA630BFA0A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_2E51E78E48EF82F5AA861FB3B40E2D50
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_2E51E78E48EF82F5AA861FB3B40E2D50();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E0D2D6584EAF0D3A87875089196A2A2E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E0D2D6584EAF0D3A87875089196A2A2E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_5B9F8ABB41EC5EE9E4909D8E0FCDB2E6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_5B9F8ABB41EC5EE9E4909D8E0FCDB2E6(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_5AABB65C487AA1F09EFEAC81E35F2263
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_5AABB65C487AA1F09EFEAC81E35F2263();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_1B9F2F1B4917C5F33C03429A8D48EAB4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_1B9F2F1B4917C5F33C03429A8D48EAB4();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_EA2F64FE4B8D26CA7D9420BA69DDC111
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_EA2F64FE4B8D26CA7D9420BA69DDC111(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_B45EBA1C4DFCC4E8E3F7149CE84A1426
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_B45EBA1C4DFCC4E8E3F7149CE84A1426(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_7C49E1814FC19543511762A5F09DCDE0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_7C49E1814FC19543511762A5F09DCDE0();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_F6BD08E448C277DBE166D2B82DFDC062
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoBoneIK_F6BD08E448C277DBE166D2B82DFDC062();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_12E2F5B44BD2C27C98DA89AD8AC3B2B9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_12E2F5B44BD2C27C98DA89AD8AC3B2B9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_A78F49F449A8DF704C420A8C33DB614B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_A78F49F449A8DF704C420A8C33DB614B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E55EB0F2481E75BFE265C298D209C0D2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E55EB0F2481E75BFE265C298D209C0D2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_306D40424624925BBB4AD1823341F313
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_306D40424624925BBB4AD1823341F313(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_D92512F84AB1B04BC146FA834E1DE25D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_D92512F84AB1B04BC146FA834E1DE25D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_227B7B904B104DDD6B40F9BB279CAF37
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_227B7B904B104DDD6B40F9BB279CAF37(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_9CCFA9DD41ABB6BC5F7861A3E88253FA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_9CCFA9DD41ABB6BC5F7861A3E88253FA(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_F04F54FC443BEB21D5DF2FA63B205835
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ApplyAdditive_F04F54FC443BEB21D5DF2FA63B205835(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_DA5DEEE347AF1ED800B128BE9A4480CE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_DA5DEEE347AF1ED800B128BE9A4480CE(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BC077E1F4CDB753FBAB85D8D1D8F97F9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BC077E1F4CDB753FBAB85D8D1D8F97F9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_01D8E69A431989AF721251B52F6A481E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_01D8E69A431989AF721251B52F6A481E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6029470D4FFBC82A78ED7183DCCC643B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6029470D4FFBC82A78ED7183DCCC643B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B66CDC294E31E0EEDC41ED9D0DB6FD52
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B66CDC294E31E0EEDC41ED9D0DB6FD52(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0D0C8A0644B645F63EA3E88D3ED0B5F7
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0D0C8A0644B645F63EA3E88D3ED0B5F7(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_375404DA456D39C3F0E55EBFDAFA2366
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_375404DA456D39C3F0E55EBFDAFA2366(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BC822CF04B076E0355D162A866C495C4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BC822CF04B076E0355D162A866C495C4(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_2799416745F1F6DBE05920A1703D2AA8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_2799416745F1F6DBE05920A1703D2AA8(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8D8A2EE44380F31C80693789E027468A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8D8A2EE44380F31C80693789E027468A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_DE201F544F80BB5EAD419A9F6D2D84F9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_DE201F544F80BB5EAD419A9F6D2D84F9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_07D3932F4C5607BE7062B896CF8D1AAC
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_07D3932F4C5607BE7062B896CF8D1AAC(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_36658ACC4B472BC25B227E98CCB28B2C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_36658ACC4B472BC25B227E98CCB28B2C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CF6476B6494D30FCCC844BAD0017CB6A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CF6476B6494D30FCCC844BAD0017CB6A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A22660494716005BFAB53CB6592D89CD
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A22660494716005BFAB53CB6592D89CD(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_184E0A5444967D4F58AD04B639FDDC78
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_184E0A5444967D4F58AD04B639FDDC78(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B166ACFF4FCA91B5767C058F0F937063
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B166ACFF4FCA91B5767C058F0F937063(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_78942D50406B15A95EEA659EF5AB49D4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_78942D50406B15A95EEA659EF5AB49D4(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_2ADB69EA40FF016B76E132B075A7595C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_2ADB69EA40FF016B76E132B075A7595C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_359F8A274E353D119A9D1FAE3302FDCB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_359F8A274E353D119A9D1FAE3302FDCB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5185B46548A23CE571226FBC79D4AF02
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5185B46548A23CE571226FBC79D4AF02(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_36E6AD584673E14AC7BE7281C6B5FEEE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_36E6AD584673E14AC7BE7281C6B5FEEE(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0AF3BC864179B8C086CA76B423C077C9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0AF3BC864179B8C086CA76B423C077C9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D954E9D44DD296488EFD398606DE118F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D954E9D44DD296488EFD398606DE118F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6876DD914BBE0CBF0507F19FB7125E25
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6876DD914BBE0CBF0507F19FB7125E25(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_35ADC79C4F6920C376BBCEBF5B67CEF1
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_35ADC79C4F6920C376BBCEBF5B67CEF1(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_9A4D816E436848A49DACE7A8EE58F6AB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_9A4D816E436848A49DACE7A8EE58F6AB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0A6D61304F6AD98D8FBDD686D72E6777
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0A6D61304F6AD98D8FBDD686D72E6777(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_AAB41ABA4252B30EAAA17CB1E05D4418
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_AAB41ABA4252B30EAAA17CB1E05D4418(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_C561ED9C4D905338E4BF33951DEF63D4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_C561ED9C4D905338E4BF33951DEF63D4(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_87207D964B798A9A7496D79951598941
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_87207D964B798A9A7496D79951598941(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BCE237B54966696DE115548FFD548A9A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BCE237B54966696DE115548FFD548A9A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_F9D797DE4A74466D9AA199B7D77FCF3A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TwoWayBlend_F9D797DE4A74466D9AA199B7D77FCF3A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_FAFC985546349EFABDF0D3904221D11F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_FAFC985546349EFABDF0D3904221D11F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_518724A04E7672627872E9BC27BDC12B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_LayeredBoneBlend_518724A04E7672627872E9BC27BDC12B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_BB856B2D447254A2405C439E33751095
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_BB856B2D447254A2405C439E33751095(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_74E13143405ECC27CC5610ABBA7C9C77
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_74E13143405ECC27CC5610ABBA7C9C77(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_383E9401452AC04E09FBE0916BEEA9CB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_383E9401452AC04E09FBE0916BEEA9CB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_15DA1A674CA3421B9FFC65AA6937D835
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_15DA1A674CA3421B9FFC65AA6937D835(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_4C362A8C4C97F2ABDF8D42B8EBA82FC0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_4C362A8C4C97F2ABDF8D42B8EBA82FC0(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_1A4DC8864E9391A2F62864BFFE08F724
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_1A4DC8864E9391A2F62864BFFE08F724(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_E3DAD4054AA281C95DC68DAE33E0C27F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_E3DAD4054AA281C95DC68DAE33E0C27F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_265B35D94C78ED694AB4A8AE1EB3667A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_SequencePlayer_265B35D94C78ED694AB4A8AE1EB3667A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RotateRootBone_18E6F56F431AE4D1C1A323A8EAAD66C0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RotateRootBone_18E6F56F431AE4D1C1A323A8EAAD66C0(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B58C44254CD0D1F03B0EDDB88033737D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B58C44254CD0D1F03B0EDDB88033737D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_372CF98C4512BA5AC49CB79D5E28718C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_372CF98C4512BA5AC49CB79D5E28718C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_92D765B143DCA6950C65F7A7DEA4427C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_92D765B143DCA6950C65F7A7DEA4427C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B5D3FB47463DCA4221A4A89FD71BBAC0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B5D3FB47463DCA4221A4A89FD71BBAC0(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_EF5A944843C652547CB751947A586320
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_EF5A944843C652547CB751947A586320(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_FB502DF842C57156EA6026BB4CC2F582
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_FB502DF842C57156EA6026BB4CC2F582(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_66AEC303429B5AFA8B2E5FB891E96DD8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_66AEC303429B5AFA8B2E5FB891E96DD8(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_82CC77E54638557C07121BBF8C4F0B53
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_82CC77E54638557C07121BBF8C4F0B53(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B035BAEC4E92EDE2B5AE8DB782644B59
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B035BAEC4E92EDE2B5AE8DB782644B59(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_DDC81B5A497703E5C94FD79E7F711345
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_DDC81B5A497703E5C94FD79E7F711345(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_4C144D7941E142850100588282B3C741
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_4C144D7941E142850100588282B3C741(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D7C632404181AFC10C279395BAF47ADD
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D7C632404181AFC10C279395BAF47ADD(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8835694E407CF3730BC57492D5C7254E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8835694E407CF3730BC57492D5C7254E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5C5E9BB64EAD10108A14618557B70FF2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5C5E9BB64EAD10108A14618557B70FF2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_26B9AC604611DFB17A80E783BF7D66F7
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_26B9AC604611DFB17A80E783BF7D66F7(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_1EE4D8734144A826B2FEF593A0A8875D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_1EE4D8734144A826B2FEF593A0A8875D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_3963011F48206BC3405CBE8AC5CDC93C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_3963011F48206BC3405CBE8AC5CDC93C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A9BE2FA842DF2C77197689BF81C872CC
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A9BE2FA842DF2C77197689BF81C872CC(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_AEC2ADF844521307F2A8348389B332F5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_AEC2ADF844521307F2A8348389B332F5(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_22064B4943758B51797F0B84735579BF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_22064B4943758B51797F0B84735579BF(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6616C6CF4CBEFB18A3E727BDE9617B20
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6616C6CF4CBEFB18A3E727BDE9617B20(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_56C8614849D792BBEEB850A91798DCE5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_56C8614849D792BBEEB850A91798DCE5(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_666A73E540DEC34FF85DB58F8FA3D4E8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_666A73E540DEC34FF85DB58F8FA3D4E8(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7B9A3AE047B13C389C2D61B46F28C7D9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7B9A3AE047B13C389C2D61B46F28C7D9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B30C56424F160FC0B7E4D099FC3A1B10
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B30C56424F160FC0B7E4D099FC3A1B10(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_DB051C6845A42672B6A2B8A5C1E74C3B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_DB051C6845A42672B6A2B8A5C1E74C3B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_094B90BB4781CD9B14808C86B08DFFF2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_094B90BB4781CD9B14808C86B08DFFF2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F9337A624DE9A20955305E8680B181B2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F9337A624DE9A20955305E8680B181B2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CAE5F28C4452E9C881E93C8018388B3E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_CAE5F28C4452E9C881E93C8018388B3E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7EF198BA403C0CBE12FEE1BA7B645F12
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7EF198BA403C0CBE12FEE1BA7B645F12(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_37D763884B92E84EE64E948536F72BAC
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_37D763884B92E84EE64E948536F72BAC(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BD07EBBD42E04BC325FDC98DDB007EC3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BD07EBBD42E04BC325FDC98DDB007EC3(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0E288B814CD2DE7CDFB72589313A4108
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0E288B814CD2DE7CDFB72589313A4108(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_9488066D416873EC327220B583B1B9C3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_9488066D416873EC327220B583B1B9C3(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_48072F654365876BCBDE9BACF9E52F63
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_48072F654365876BCBDE9BACF9E52F63(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0EC9FB9940ACC261AC340A8E41F3193C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0EC9FB9940ACC261AC340A8E41F3193C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_91EA2080411CCF5D77FB05A410E7FBFA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_91EA2080411CCF5D77FB05A410E7FBFA(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0A4E9DB845D6EB99B2EA30B053252B98
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_0A4E9DB845D6EB99B2EA30B053252B98(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_47A06D564A56CDEDBA9C45A03D00F875
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendSpacePlayer_47A06D564A56CDEDBA9C45A03D00F875(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_ED1EB7D64C912512C4E9C6B306FB8125
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_ED1EB7D64C912512C4E9C6B306FB8125(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E7CC3EFB4E5E36A4B607F0A84A5E8BDC
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E7CC3EFB4E5E36A4B607F0A84A5E8BDC(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.OnFootstep
	void OnFootstep(bool bIsLeftFoot, float FootstepDuration);                                                               // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.BlueprintUpdateAnimation
	void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_ReturnedToDownedIntro
	void AnimNotify_ReturnedToDownedIntro();                                                                                 // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.HandleWeaponIKMetaData
	void HandleWeaponIKMetaData(UAnimMetaData* InWeaponIKMetaData);                                                          // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_F79B80F04E637F813D02FABDEDE8D061
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_F79B80F04E637F813D02FABDEDE8D061(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_ExitedDownedIntro
	void AnimNotify_ExitedDownedIntro();                                                                                     // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E92594B9475EE3C3A73A65A8A8A46532
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E92594B9475EE3C3A73A65A8A8A46532(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_HideMagazine1
	void AnimNotify_HideMagazine1();                                                                                         // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_HideMagazine2
	void AnimNotify_HideMagazine2();                                                                                         // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_UnHideMagazine1
	void AnimNotify_UnHideMagazine1();                                                                                       // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_UnHideMagazine2
	void AnimNotify_UnHideMagazine2();                                                                                       // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.OnWeaponFired
	void OnWeaponFired(bool bSecondaryWeapon);                                                                               // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_5CB1A87B41ED3001427EC0B5C38FF407
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_5CB1A87B41ED3001427EC0B5C38FF407(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.OnMeleeAttack
	void OnMeleeAttack(int32_t InAttackIndex);                                                                               // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_25AFA0C44FF6A0F4D9D12AB68F7030E2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_25AFA0C44FF6A0F4D9D12AB68F7030E2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.RecoilSystemTick
	void RecoilSystemTick();                                                                                                 // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_HideSecondMagazine1
	void AnimNotify_HideSecondMagazine1();                                                                                   // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_UnHideSecondMagazine1
	void AnimNotify_UnHideSecondMagazine1();                                                                                 // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E784DE0640622AC2F55EB78F6FC783E1
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_E784DE0640622AC2F55EB78F6FC783E1(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.OnWantsToStartRangedAttack
	void OnWantsToStartRangedAttack();                                                                                       // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.Update Fire Ready Stamp Event
	void Update Fire Ready Stamp Event();                                                                                    // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.OnWeaponSwitchEvent
	void OnWeaponSwitchEvent();                                                                                              // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.BlueprintBeginPlay
	void BlueprintBeginPlay();                                                                                               // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.PostPoseInit
	void PostPoseInit();                                                                                                     // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.OnChangeAnimationSet
	void OnChangeAnimationSet();                                                                                             // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_EnteredWallJump
	void AnimNotify_EnteredWallJump();                                                                                       // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.OnSettle
	void OnSettle(FTigerSettleEvent& SettleEvent);                                                                           // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.BlueprintInitializeAnimation
	void BlueprintInitializeAnimation();                                                                                     // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AddSets
	void AddSets(UTigerAnimationSetCollection* SetCollection);                                                               // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.Clan Variables Setup
	void Clan Variables Setup();                                                                                             // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.ToggleRunTimeTwistBones
	void ToggleRunTimeTwistBones();                                                                                          // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.ToggleScaleResetToReferencePoses
	void ToggleScaleResetToReferencePoses();                                                                                 // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_settle_ArmsMedium
	void AnimNotify_settle_ArmsMedium();                                                                                     // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_Settle_Lightest
	void AnimNotify_Settle_Lightest();                                                                                       // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_Settle_Lighter
	void AnimNotify_Settle_Lighter();                                                                                        // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_Settle_FullBodyLight
	void AnimNotify_Settle_FullBodyLight();                                                                                  // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_Settle_FullBodyMedium
	void AnimNotify_Settle_FullBodyMedium();                                                                                 // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_Settle_FullBodyHeavy
	void AnimNotify_Settle_FullBodyHeavy();                                                                                  // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_WallSlideSettle_H90
	void AnimNotify_WallSlideSettle_H90();                                                                                   // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_WallSlideSettle_H-90
	void AnimNotify_WallSlideSettle_H-90();                                                                                  // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_WallSlideSettle_H00
	void AnimNotify_WallSlideSettle_H00();                                                                                   // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_Settle_AimStop
	void AnimNotify_Settle_AimStop();                                                                                        // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_Settle_Heavy
	void AnimNotify_Settle_Heavy();                                                                                          // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_Settle_Light
	void AnimNotify_Settle_Light();                                                                                          // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_Settle_Medium
	void AnimNotify_Settle_Medium();                                                                                         // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_SettleTraversalLedgeGrab
	void AnimNotify_SettleTraversalLedgeGrab();                                                                              // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_SettleTraversalSlide
	void AnimNotify_SettleTraversalSlide();                                                                                  // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_SettleDisciplineNosferatu
	void AnimNotify_SettleDisciplineNosferatu();                                                                             // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_SettleDisciplineToreador
	void AnimNotify_SettleDisciplineToreador();                                                                              // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.AnimNotify_SettleDisciplineBrujah
	void AnimNotify_SettleDisciplineBrujah();                                                                                // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Player.ABP_Player_C.ExecuteUbergraph_ABP_Player
	void ExecuteUbergraph_ABP_Player(int32_t EntryPoint);                                                                    // [0x197e4f0] Final|HasDefaults    
};

/// Class /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C
/// Size: 0x3D71 (0x000430 - 0x0041A1)
class UABP_Vendor_C : public UTigerNpcAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0430   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0438   (0x0030)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0468   (0x0158)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x05C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x05E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0610   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0638   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0660   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0688   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x06B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x06D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0700   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0728   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x07A8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x07D8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0858   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0888   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0908   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0938   (0x0028)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x0960   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x09D8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0A08   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0A88   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0AB8   (0x00B0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x0B68   (0x00C8)  
	FTigerAnimNode_RandomPlayer                        TigerAnimGraphNode_RandomPlayer;                            // 0x0C30   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0CD0   (0x0030)  
	FTigerAnimNode_RandomPlayer                        TigerAnimGraphNode_RandomPlayer;                            // 0x0D00   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0DA0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0E40   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0EC0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0EF0   (0x00B0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0FA0   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1060   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1088   (0x0028)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x10B0   (0x00C8)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1178   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1198   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x11B8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x12C0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x13C8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x14D0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x15D8   (0x0108)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x16E0   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1708   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x1738   (0x00B0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x17E8   (0x00A0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1888   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1950   (0x0080)  
	FAnimNode_PoseBlendNode                            AnimGraphNode_PoseBlendNode;                                // 0x19D0   (0x00A0)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x1A70   (0x01E0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1C50   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1C78   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1CA0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1D20   (0x0030)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x1D50   (0x00C8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x1E18   (0x00C8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x1EE0   (0x00C8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x1FA8   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2070   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x20F0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2170   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x21F0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2270   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x22F0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x2320   (0x00B0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x23D0   (0x00A0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2470   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2498   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2518   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2548   (0x0028)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x2570   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x25E8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2618   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2698   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x26C8   (0x00B0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2778   (0x0028)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x27A0   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2818   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2848   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x28C8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x28F8   (0x00B0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x29A8   (0x0028)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x29D0   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2A48   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2A78   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2AF8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x2B28   (0x00B0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2BD8   (0x0028)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x2C00   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2C78   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2CA8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2D28   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x2D58   (0x00B0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2E08   (0x0028)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x2E30   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2EA8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2ED8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2F58   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x2F88   (0x00B0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x3038   (0x0028)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x3060   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x30D8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3108   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3188   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x31B8   (0x00B0)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x3268   (0x00B0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x3318   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x33E0   (0x0080)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x3460   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3510   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3590   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3610   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3690   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3710   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3790   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x37C0   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x3870   (0x0158)  
	FTigerAnimNode_RandomPlayer                        TigerAnimGraphNode_RandomPlayer;                            // 0x39C8   (0x00A0)  
	FTigerAnimNode_RandomPlayer                        TigerAnimGraphNode_RandomPlayer;                            // 0x3A68   (0x00A0)  
	FTigerAnimNode_RandomPlayer                        TigerAnimGraphNode_RandomPlayer;                            // 0x3B08   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3BA8   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x3BD0   (0x00C0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x3C90   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3D58   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x3D88   (0x00B0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x3E38   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3ED8   (0x0028)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x3F00   (0x01E0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x40E0   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x4100   (0x0020)  
	UTigerAnimationSetAsset*                           AnimationSet;                                               // 0x4120   (0x0008)  
	bool                                               HasRandomisedIdle;                                          // 0x4128   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x4129   (0x0003)  MISSED
	float                                              LookAtVertical;                                             // 0x412C   (0x0004)  
	float                                              LookAtHorizontal;                                           // 0x4130   (0x0004)  
	float                                              LookAtHorizontalSlow;                                       // 0x4134   (0x0004)  
	float                                              DeltaX;                                                     // 0x4138   (0x0004)  
	FRotator                                           LookAtHeadRotator;                                          // 0x413C   (0x000C)  
	FRotator                                           LookAtSpineRotator;                                         // 0x4148   (0x000C)  
	bool                                               AnimLookAtAllowed;                                          // 0x4154   (0x0001)  
	bool                                               HasGreeted;                                                 // 0x4155   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x4156   (0x0002)  MISSED
	float                                              LookAtTransSpeed;                                           // 0x4158   (0x0004)  
	FName                                              FaceAnimSlotName_00;                                        // 0x415C   (0x0008)  
	FName                                              FaceAnimSlotName_01;                                        // 0x4164   (0x0008)  
	FName                                              FaceAnimSlotName_02;                                        // 0x416C   (0x0008)  
	FName                                              FaceAnimSlotName_03;                                        // 0x4174   (0x0008)  
	ETigerDialogueIdleAnimation                        IdleType;                                                   // 0x417C   (0x0001)  
	bool                                               HasIdleToLookAtAnim;                                        // 0x417D   (0x0001)  
	bool                                               HasLookAtToIdleAnim;                                        // 0x417E   (0x0001)  
	bool                                               IsInInteraction;                                            // 0x417F   (0x0001)  
	bool                                               CooldownOver;                                               // 0x4180   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x4181   (0x0003)  MISSED
	float                                              DeltaTimer;                                                 // 0x4184   (0x0004)  
	float                                              CooldownLenght;                                             // 0x4188   (0x0004)  
	bool                                               TalkFaceAnim;                                               // 0x418C   (0x0001)  
	bool                                               InIdleToLookAtTrasition;                                    // 0x418D   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x418E   (0x0002)  MISSED
	float                                              DeltaTimerFace;                                             // 0x4190   (0x0004)  
	float                                              FaceGestureIntensity;                                       // 0x4194   (0x0004)  
	float                                              FaceGestureIntensityPrevious;                               // 0x4198   (0x0004)  
	bool                                               GestureFull;                                                // 0x419C   (0x0001)  
	bool                                               VendorModBody;                                              // 0x419D   (0x0001)  
	bool                                               VendorModArms;                                              // 0x419E   (0x0001)  
	bool                                               IK_R;                                                       // 0x419F   (0x0001)  
	bool                                               IK_L;                                                       // 0x41A0   (0x0001)  


	/// Functions
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.FacialAnimations
	void FacialAnimations();                                                                                                 // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TwoBoneIK_71085090441A50933E9234B24B942565
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TwoBoneIK_71085090441A50933E9234B24B942565();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TwoBoneIK_5DEAC04043E0A712CF872EB7ECCA082F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TwoBoneIK_5DEAC04043E0A712CF872EB7ECCA082F();  // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_0735F5284256031A9325319234ED41B5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_0735F5284256031A9325319234ED41B5(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_4CB4533341993467A26ECB81A668411E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_4CB4533341993467A26ECB81A668411E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_DA6172AA400493BA03F8F8A4BEA66930
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_DA6172AA400493BA03F8F8A4BEA66930(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_LayeredBoneBlend_475D2D9649699EDE9CB0A0A2553FEB7F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_LayeredBoneBlend_475D2D9649699EDE9CB0A0A2553FEB7F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_ApplyAdditive_67BB282B48AEEFFD73CE24A3162004BB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_ApplyAdditive_67BB282B48AEEFFD73CE24A3162004BB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_ApplyAdditive_60E0B4E84BC3918E1417F78962966813
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_ApplyAdditive_60E0B4E84BC3918E1417F78962966813(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_15B89E9D4B596BFF80A5CD8E2C64F874
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_15B89E9D4B596BFF80A5CD8E2C64F874(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_42E5FECC46CAFE589D1F309D2453B31F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_42E5FECC46CAFE589D1F309D2453B31F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_CBFB54254D5370C8A3454E845EE6965D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_CBFB54254D5370C8A3454E845EE6965D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_ABA9B10B4C10790D20F7B8AA6B1F547D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_ABA9B10B4C10790D20F7B8AA6B1F547D(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_822EF4B44DB6469C9B060D8762F40094
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_822EF4B44DB6469C9B060D8762F40094(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_E3C5ED6A437462343E19EFBACF19F0EA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_E3C5ED6A437462343E19EFBACF19F0EA(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_AE81A19F488093BADD936D99CAD5C60C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_AE81A19F488093BADD936D99CAD5C60C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_2075C92C4889D267E32CE8A2EF82538A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_2075C92C4889D267E32CE8A2EF82538A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_43195F654F5DF3412E3264955F5DDE9B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_43195F654F5DF3412E3264955F5DDE9B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_77FB4FDC4B7BFC1C767208911DB84CE9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_77FB4FDC4B7BFC1C767208911DB84CE9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TwoWayBlend_39B34BC1465FAB64DAADDAAD885FA7DE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TwoWayBlend_39B34BC1465FAB64DAADDAAD885FA7DE(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_28D12F8345380FB0732DBC9C1E2E8BE6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_28D12F8345380FB0732DBC9C1E2E8BE6(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_5271B87441507526CFB2E9892754F757
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_5271B87441507526CFB2E9892754F757(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_EFD9F8A946EAD367B0540095CEDBA86B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_EFD9F8A946EAD367B0540095CEDBA86B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_A3C21E884C001902E53490BC23A95157
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_A3C21E884C001902E53490BC23A95157(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_5C24AFBF4658F112EBFA26A22AE806BC
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_5C24AFBF4658F112EBFA26A22AE806BC(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_5977FEFA403CF8C4FC0A7294EDDB7118
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_5977FEFA403CF8C4FC0A7294EDDB7118(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_B717153E47BDC6FC167243960724E6DE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_B717153E47BDC6FC167243960724E6DE(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_2F2EFE144AF47243C2F55DACAC9E8E3A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_2F2EFE144AF47243C2F55DACAC9E8E3A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_255766AC4FDCA0D27703D68212A3CD6A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_255766AC4FDCA0D27703D68212A3CD6A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_4C5ACD6A4A1D38BF36F7579BDD8A61D5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_4C5ACD6A4A1D38BF36F7579BDD8A61D5(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_C0FE37E64A029590CD0A7A907637A376
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_C0FE37E64A029590CD0A7A907637A376(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_E1A4B50942C0F3E577231ABAD421A7E0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_E1A4B50942C0F3E577231ABAD421A7E0(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_E50BEBAE4307FDF12DB6B7953FC94C5E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_E50BEBAE4307FDF12DB6B7953FC94C5E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_D5268DB64A8AA064CE21409B6025248F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_D5268DB64A8AA064CE21409B6025248F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.AddSets
	void AddSets(UTigerAnimationSetCollection* SetCollection);                                                               // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.BlueprintUpdateAnimation
	void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.AnimNotify_HasGreeted
	void AnimNotify_HasGreeted();                                                                                            // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.OnInitiateAnimationBlueprint
	void OnInitiateAnimationBlueprint();                                                                                     // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.AnimNotify_FullGesture
	void AnimNotify_FullGesture();                                                                                           // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.AnimNotify_IK_L
	void AnimNotify_IK_L();                                                                                                  // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.AnimNotify_IK_R
	void AnimNotify_IK_R();                                                                                                  // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Vendor.ABP_Vendor_C.ExecuteUbergraph_ABP_Vendor
	void ExecuteUbergraph_ABP_Vendor(int32_t EntryPoint);                                                                    // [0x197e4f0] Final                
};

/// Class /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C
/// Size: 0x28E0 (0x0003D0 - 0x002CB0)
class UABP_Paperdoll_C : public UTigerPaperDollAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D0   (0x0008)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x03D8   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x04C8   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x05B8   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x06A8   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x0798   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x0888   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x0978   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x0A68   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x0B58   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x0C48   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x0D38   (0x00F0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0E28   (0x0080)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0EA8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0EC8   (0x0020)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x0EE8   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x0FD8   (0x00F0)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x10C8   (0x00F0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x11B8   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x11E0   (0x0158)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1338   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x13D8   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1420   (0x0028)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x1448   (0x00F0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1538   (0x0158)  
	FAnimNode_RotationMultiplier                       AnimGraphNode_RotationMultiplier;                           // 0x1690   (0x00F0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1780   (0x0028)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x17A8   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x17C8   (0x0008)  MISSED
	FTigerAnimNode_IgnoreParentScaling                 TigerAnimGraphNode_IgnoreParentScaling;                     // 0x17D0   (0x0150)  
	FTigerAnimNode_IgnoreParentScaling                 TigerAnimGraphNode_IgnoreParentScaling;                     // 0x1920   (0x0150)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1A70   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1B78   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1C80   (0x0108)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1D88   (0x0158)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1EE0   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1F00   (0x0028)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x1F28   (0x0030)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1F58   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2020   (0x0080)  
	FAnimNode_PoseBlendNode                            AnimGraphNode_PoseBlendNode;                                // 0x20A0   (0x00A0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x2140   (0x0158)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2298   (0x0080)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x2318   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x23E0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2460   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x24E0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2560   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x25E0   (0x0080)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2660   (0x00C8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x2728   (0x00C8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x27F0   (0x00C8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x28B8   (0x00C8)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x2980   (0x00B0)  
	FTigerAnimNode_RandomPlayer                        TigerAnimGraphNode_RandomPlayer;                            // 0x2A30   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2AD0   (0x0080)  
	FTigerFilteredLayeredBlend                         TigerAnimGraphNode_FilteredLayeredBlending;                 // 0x2B50   (0x00C8)  
	bool                                               bIsDefaultSequenceList;                                     // 0x2C18   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x2C19   (0x0003)  MISSED
	FName                                              FaceAnimSlotName00;                                         // 0x2C1C   (0x0008)  
	FName                                              FaceAnimSlotName01;                                         // 0x2C24   (0x0008)  
	FName                                              FaceAnimSlotName02;                                         // 0x2C2C   (0x0008)  
	FName                                              FaceAnimSlotName03;                                         // 0x2C34   (0x0008)  
	float                                              Start_Position;                                             // 0x2C3C   (0x0004)  
	TEnumAsByte<ENUM_UIAnimationMode>                  UIAnimationSelect;                                          // 0x2C40   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x2C41   (0x000F)  MISSED
	FTransform                                         Scale_Clavicle_LReference_Transform;                        // 0x2C50   (0x0030)  
	FTransform                                         Scale_Clavicle_RReference_Transform;                        // 0x2C80   (0x0030)  


	/// Functions
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.FacialAnimations
	void FacialAnimations();                                                                                                 // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.SelectAnimationSets
	void SelectAnimationSets(UTigerAnimationSetCollection* Set Collection);                                                  // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_0C84F26241DF23504C8DBF9B4E6ED9D6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_0C84F26241DF23504C8DBF9B4E6ED9D6(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.AddSets
	void AddSets(UTigerAnimationSetCollection* SetCollection);                                                               // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.BlueprintUpdateAnimation
	void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.BlueprintInitializeAnimation
	void BlueprintInitializeAnimation();                                                                                     // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.BlueprintBeginPlay
	void BlueprintBeginPlay();                                                                                               // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.ClearProps
	void ClearProps(UAnimMontage* Montage, bool bInterrupted);                                                               // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Paperdoll.ABP_Paperdoll_C.ExecuteUbergraph_ABP_Paperdoll
	void ExecuteUbergraph_ABP_Paperdoll(int32_t EntryPoint);                                                                 // [0x197e4f0] Final|HasDefaults    
};

/// Class /Game/Animation/Setup/NotifyStates/TBP_ANS_CIV_Smoking.TBP_ANS_CIV_Smoking_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UTBP_ANS_CIV_Smoking_C : public UAnimNotifyState
{ 
public:
};

/// Class /Game/Animation/Setup/NotifyStates/TBP_ANS_CIV_OnThePhone.TBP_ANS_CIV_OnThePhone_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UTBP_ANS_CIV_OnThePhone_C : public UAnimNotifyState
{ 
public:
};

/// Class /Game/Animation/Setup/NotifyStates/TBP_ANS_UseCreditCard.TBP_ANS_UseCreditCard_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UTBP_ANS_UseCreditCard_C : public UAnimNotifyState
{ 
public:
};

/// Class /Game/Animation/Setup/NotifyStates/TBP_ANS_GetCash.TBP_ANS_GetCash_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UTBP_ANS_GetCash_C : public UAnimNotifyState
{ 
public:
};

/// Class /Game/Animation/Setup/NotifyStates/TBP_ANS_GraffitiSprayEffect.TBP_ANS_GraffitiSprayEffect_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UTBP_ANS_GraffitiSprayEffect_C : public UAnimNotifyState
{ 
public:
};

/// Class /Game/Animation/Setup/Notifies/TBP_AN_StartGraffiti.TBP_AN_StartGraffiti_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTBP_AN_StartGraffiti_C : public UAnimNotify
{ 
public:
};

/// Class /Game/Animation/Setup/NotifyStates/TBP_ANS_UseVDM.TBP_ANS_UseVDM_C
/// Size: 0x0005 (0x000030 - 0x000035)
class UTBP_ANS_UseVDM_C : public UAnimNotifyState
{ 
public:
	int32_t                                            Type;                                                       // 0x0030   (0x0004)  
	ETigerDetachMethod                                 DetachMethod;                                               // 0x0034   (0x0001)  


	/// Functions
	// Function /Game/Animation/Setup/NotifyStates/TBP_ANS_UseVDM.TBP_ANS_UseVDM_C.Received_NotifyEnd
	bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                 // [0x197e4f0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/Setup/NotifyStates/TBP_ANS_UseVDM.TBP_ANS_UseVDM_C.Received_NotifyBegin
	bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);          // [0x197e4f0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Setup/Notifies/TBP_AN_AttachProp.TBP_AN_AttachProp_C
/// Size: 0x0008 (0x000038 - 0x000040)
class UTBP_AN_AttachProp_C : public UAnimNotify
{ 
public:
	FName                                              AttachIdentifier;                                           // 0x0038   (0x0008)  


	/// Functions
	// Function /Game/Animation/Setup/Notifies/TBP_AN_AttachProp.TBP_AN_AttachProp_C.Received_Notify
	bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x197e4f0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C
/// Size: 0x3AA0 (0x000430 - 0x003ED0)
class UABP_Civilian_C : public UTigerNpcAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0430   (0x0008)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0438   (0x00C0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x04F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0520   (0x0028)  
	FTigerAnimNode_PlaySequenceByName                  TigerAnimGraphNode_PlaySequenceByName;                      // 0x0548   (0x0088)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x05D0   (0x0030)  
	FTigerAnimNode_PlaySequenceByName                  TigerAnimGraphNode_PlaySequenceByName;                      // 0x0600   (0x0088)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0688   (0x0030)  
	FTigerAnimNode_PlaySequenceByName                  TigerAnimGraphNode_PlaySequenceByName;                      // 0x06B8   (0x0088)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0740   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0770   (0x00B0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0820   (0x00A0)  
	FTigerFilteredLayeredBlend                         TigerAnimGraphNode_FilteredLayeredBlending;                 // 0x08C0   (0x00C8)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0988   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x09B0   (0x0048)  
	FTigerAnimNode_RandomPlayer                        TigerAnimGraphNode_RandomPlayer;                            // 0x09F8   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0A98   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0AC0   (0x0158)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0C18   (0x0030)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0C48   (0x00C0)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0D08   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x0D10   (0x01E0)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x0EF0   (0x01E0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x10D0   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x10F0   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x1110   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1158   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1180   (0x0158)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x12D8   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1378   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x13A0   (0x0080)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x1420   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1468   (0x0158)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x15C0   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1608   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1760   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1788   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x18E0   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x1908   (0x0048)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1950   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1978   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x19A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x19C8   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x19F0   (0x0108)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1AF8   (0x0080)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1B78   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1B98   (0x0020)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1BB8   (0x0030)  
	FTigerAnimNode_PlaySequenceByName                  TigerAnimGraphNode_PlaySequenceByName;                      // 0x1BE8   (0x0088)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1C70   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x1CF0   (0x00C0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1DB0   (0x0030)  
	FTigerAnimNode_PlaySequenceByName                  TigerAnimGraphNode_PlaySequenceByName;                      // 0x1DE0   (0x0088)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1E68   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x1EE8   (0x00C0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1FA8   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1FD8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2000   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2028   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2050   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2078   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x20A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x20C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x20F0   (0x0028)  
	FTigerAnimNode_PlaySequenceByName                  TigerAnimGraphNode_PlaySequenceByName;                      // 0x2118   (0x0088)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x21A0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x21C0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x21E0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x22E8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x23F0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x24F8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2600   (0x0108)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2708   (0x0030)  
	FTigerAnimNode_PlaySequenceByName                  TigerAnimGraphNode_PlaySequenceByName;                      // 0x2738   (0x0088)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x27C0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x27E0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2800   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2908   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2A10   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2B18   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2C20   (0x0108)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2D28   (0x0030)  
	FTigerAnimNode_PlaySequenceByName                  TigerAnimGraphNode_PlaySequenceByName;                      // 0x2D58   (0x0088)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2DE0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2E00   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2E20   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x2F28   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x3030   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x3138   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x3240   (0x0108)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3348   (0x0030)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x3378   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x3398   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x33B8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x34C0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x35C8   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x36D0   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x37D8   (0x0108)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x38E0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3960   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3990   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3A10   (0x0030)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x3A40   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3AE0   (0x0080)  
	FAnimNode_PoseSnapshot                             AnimGraphNode_PoseSnapshot;                                 // 0x3B60   (0x0090)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x3BF0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3C38   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x3C68   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3D18   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x3D48   (0x00B0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x3DF8   (0x0028)  
	bool                                               bIsDedicatedServer;                                         // 0x3E20   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x3E21   (0x0003)  MISSED
	FVector                                            LeftFootstepPosition;                                       // 0x3E24   (0x000C)  
	float                                              LeftFootstepTime;                                           // 0x3E30   (0x0004)  
	float                                              RightFootstepTime;                                          // 0x3E34   (0x0004)  
	FVector                                            RightFootstepPosition;                                      // 0x3E38   (0x000C)  
	FRotator                                           CharacterRotation;                                          // 0x3E44   (0x000C)  
	float                                              YawDelta;                                                   // 0x3E50   (0x0004)  
	float                                              DeltaX;                                                     // 0x3E54   (0x0004)  
	float                                              YawDeltaSmooth;                                             // 0x3E58   (0x0004)  
	bool                                               IsBeingFeedOn;                                              // 0x3E5C   (0x0001)  
	bool                                               IsRecovering;                                               // 0x3E5D   (0x0001)  
	bool                                               FullyRecoverd;                                              // 0x3E5E   (0x0001)  
	bool                                               InContextIdle;                                              // 0x3E5F   (0x0001)  
	FName                                              CachedContextBasedIdle;                                     // 0x3E60   (0x0008)  
	bool                                               IsHoldingProp;                                              // 0x3E68   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x3E69   (0x0003)  MISSED
	FName                                              FaceAnimSlotName_00;                                        // 0x3E6C   (0x0008)  
	FName                                              FaceAnimSlotName_01;                                        // 0x3E74   (0x0008)  
	FName                                              FaceAnimSlotName_02;                                        // 0x3E7C   (0x0008)  
	FName                                              FaceAnimSlotName_03;                                        // 0x3E84   (0x0008)  
	FRotator                                           LookAtSpineRotator;                                         // 0x3E8C   (0x000C)  
	FRotator                                           LookAtHeadRotator;                                          // 0x3E98   (0x000C)  
	float                                              LookAtVertical;                                             // 0x3EA4   (0x0004)  
	float                                              LookAtHorizontal;                                           // 0x3EA8   (0x0004)  
	float                                              LookAtHorizontalSlow;                                       // 0x3EAC   (0x0004)  
	float                                              AimYawDelta;                                                // 0x3EB0   (0x0004)  
	float                                              Speed_Smooth;                                               // 0x3EB4   (0x0004)  
	TArray<UAnimMontage*>                              React_Montage;                                              // 0x3EB8   (0x0010)  
	UAkAudioEvent*                                     FootstepAkEvent;                                            // 0x3EC8   (0x0008)  


	/// Functions
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x197e4f0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.PostFootStepAudio
	void PostFootStepAudio();                                                                                                // [0x197e4f0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.AddEmotionalAnimationSet
	void AddEmotionalAnimationSet(UTigerAnimationSetCollection* InSetCollection);                                            // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.Facial Animations
	void Facial Animations();                                                                                                // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.StopCapMontage
	void StopCapMontage(ETigerAIAnimationMode A);                                                                            // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.HandleContextualIdle
	void HandleContextualIdle();                                                                                             // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.HandleFootstepSound
	void HandleFootstepSound(float FootstepDuration, bool LeftFoot);                                                         // [0x197e4f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_BBA6A9724AFCD837302A6AB8D3D55CBB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_BBA6A9724AFCD837302A6AB8D3D55CBB(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_CA1CB30F44EF00F966251AAA867490CA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_CA1CB30F44EF00F966251AAA867490CA(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_BlendListByBool_A6AB795945D148CB4AEE71AC2F76A9A2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_BlendListByBool_A6AB795945D148CB4AEE71AC2F76A9A2(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_LayeredBoneBlend_D132CB474C4CD8732517EFAF61A0670E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_LayeredBoneBlend_D132CB474C4CD8732517EFAF61A0670E(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_TigerAnimGraphNode_RandomPlayer_AD270F954A6AC11814CAFDA6C00BC755
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_TigerAnimGraphNode_RandomPlayer_AD270F954A6AC11814CAFDA6C00BC755(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_DDB556484047FAEBC14C5687AA7ED506
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_DDB556484047FAEBC14C5687AA7ED506(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_FF7B69DD43977067A7C8EAA305F7DE94
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_FF7B69DD43977067A7C8EAA305F7DE94(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_C2A09BAA45A8969D20CC9693267BE7A9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_C2A09BAA45A8969D20CC9693267BE7A9(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A689E074CAAA0BCC42C20A2E224F2E6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A689E074CAAA0BCC42C20A2E224F2E6(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_3B5B01C94F495AA698FAF9BA69180E2C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_3B5B01C94F495AA698FAF9BA69180E2C(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_1410EC2340A6B877E3B6CFB8046D439A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_1410EC2340A6B877E3B6CFB8046D439A(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_8DCA473E4F0442A438726E9DC0F181A8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_8DCA473E4F0442A438726E9DC0F181A8(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_44626FDB45DD85C93968159051D3B35B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_44626FDB45DD85C93968159051D3B35B(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_4D238E45428FCC9B6A39B0B930AC8AA4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_4D238E45428FCC9B6A39B0B930AC8AA4(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A7EC1F94AABA14079965D87190BA410
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A7EC1F94AABA14079965D87190BA410(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_5E507CAD402D56D610FC95B131D51453
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_5E507CAD402D56D610FC95B131D51453(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_F680FFE542EA01E2748D7598FBD52DE5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_F680FFE542EA01E2748D7598FBD52DE5(); // [0x197e4f0] BlueprintEvent       
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.BlueprintUpdateAnimation
	void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.OnInitiateAnimationBlueprint
	void OnInitiateAnimationBlueprint();                                                                                     // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.AddSets
	void AddSets(UTigerAnimationSetCollection* SetCollection);                                                               // [0x197e4f0] Event|Protected|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.AnimNotify_FootStep_Left
	void AnimNotify_FootStep_Left();                                                                                         // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.AnimNotify_Footstep_Right
	void AnimNotify_Footstep_Right();                                                                                        // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.OnFootstep
	void OnFootstep(bool bIsLeftFoot, float FootstepDuration);                                                               // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.OnNpcReactionEvent
	void OnNpcReactionEvent(FTigerNpcReactionEvent& ReactionEvent);                                                          // [0x197e4f0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.AnimNotify_FullyRecovered
	void AnimNotify_FullyRecovered();                                                                                        // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.AnimNotify_ResetFeedingState
	void AnimNotify_ResetFeedingState();                                                                                     // [0x197e4f0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.OnAnimationModeChanged
	void OnAnimationModeChanged(ETigerAIAnimationMode LastAnimationMode);                                                    // [0x197e4f0] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.OnBumpedByPlayerEvent
	void OnBumpedByPlayerEvent(ATigerPlayer* InPlayer, FVector& InDirectionToPlayer);                                        // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.OnSettle
	void OnSettle(FTigerSettleEvent& SettleEvent);                                                                           // [0x197e4f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Animation/Setup/Blueprints/ABP_Civilian.ABP_Civilian_C.ExecuteUbergraph_ABP_Civilian
	void ExecuteUbergraph_ABP_Civilian(int32_t EntryPoint);                                                                  // [0x197e4f0] Final|HasDefaults    
};

/// Enum /Game/Animation/Setup/Enums/ENUM_SettleType.ENUM_SettleType
/// Size: 0x04
enum ENUM_SettleType : uint8_t
{
	ENUM_SettleType__NewEnumerator0                                                  = 0,
	ENUM_SettleType__NewEnumerator3                                                  = 1,
	ENUM_SettleType__NewEnumerator4                                                  = 2,
	ENUM_SettleType__ENUM_MAX                                                        = 3
};

/// Enum /Game/Animation/Setup/Enums/ENUM_MeleeWeaponCategories.ENUM_MeleeWeaponCategories
/// Size: 0x11
enum ENUM_MeleeWeaponCategories : uint8_t
{
	ENUM_MeleeWeaponCategories__NewEnumerator15                                      = 0,
	ENUM_MeleeWeaponCategories__NewEnumerator0                                       = 1,
	ENUM_MeleeWeaponCategories__NewEnumerator1                                       = 2,
	ENUM_MeleeWeaponCategories__NewEnumerator2                                       = 3,
	ENUM_MeleeWeaponCategories__NewEnumerator10                                      = 4,
	ENUM_MeleeWeaponCategories__NewEnumerator12                                      = 5,
	ENUM_MeleeWeaponCategories__NewEnumerator11                                      = 6,
	ENUM_MeleeWeaponCategories__NewEnumerator17                                      = 7,
	ENUM_MeleeWeaponCategories__NewEnumerator18                                      = 8,
	ENUM_MeleeWeaponCategories__NewEnumerator19                                      = 9,
	ENUM_MeleeWeaponCategories__ENUM_MAX                                             = 10
};

/// Enum /Game/Animation/Setup/Enums/ENUM_WeaponIKOverride.ENUM_WeaponIKOverride
/// Size: 0x05
enum ENUM_WeaponIKOverride : uint8_t
{
	ENUM_WeaponIKOverride__NewEnumerator0                                            = 0,
	ENUM_WeaponIKOverride__NewEnumerator1                                            = 1,
	ENUM_WeaponIKOverride__NewEnumerator2                                            = 2,
	ENUM_WeaponIKOverride__NewEnumerator3                                            = 3,
	ENUM_WeaponIKOverride__ENUM_MAX                                                  = 4
};

/// Enum /Game/Animation/Setup/Enums/ENUM_RangedWeaponCategories.ENUM_RangedWeaponCategories
/// Size: 0x27
enum ENUM_RangedWeaponCategories : uint8_t
{
	ENUM_RangedWeaponCategories__NewEnumerator30                                     = 0,
	ENUM_RangedWeaponCategories__NewEnumerator0                                      = 1,
	ENUM_RangedWeaponCategories__NewEnumerator1                                      = 2,
	ENUM_RangedWeaponCategories__NewEnumerator3                                      = 3,
	ENUM_RangedWeaponCategories__NewEnumerator4                                      = 4,
	ENUM_RangedWeaponCategories__NewEnumerator5                                      = 5,
	ENUM_RangedWeaponCategories__NewEnumerator6                                      = 6,
	ENUM_RangedWeaponCategories__NewEnumerator7                                      = 7,
	ENUM_RangedWeaponCategories__NewEnumerator10                                     = 8,
	ENUM_RangedWeaponCategories__NewEnumerator15                                     = 9,
	ENUM_RangedWeaponCategories__NewEnumerator22                                     = 10,
	ENUM_RangedWeaponCategories__NewEnumerator23                                     = 11,
	ENUM_RangedWeaponCategories__NewEnumerator27                                     = 12,
	ENUM_RangedWeaponCategories__NewEnumerator28                                     = 13,
	ENUM_RangedWeaponCategories__NewEnumerator29                                     = 14,
	ENUM_RangedWeaponCategories__NewEnumerator31                                     = 15,
	ENUM_RangedWeaponCategories__NewEnumerator32                                     = 16,
	ENUM_RangedWeaponCategories__NewEnumerator33                                     = 17,
	ENUM_RangedWeaponCategories__NewEnumerator34                                     = 18,
	ENUM_RangedWeaponCategories__NewEnumerator35                                     = 19,
	ENUM_RangedWeaponCategories__NewEnumerator36                                     = 20,
	ENUM_RangedWeaponCategories__NewEnumerator37                                     = 21,
	ENUM_RangedWeaponCategories__NewEnumerator38                                     = 22,
	ENUM_RangedWeaponCategories__NewEnumerator39                                     = 23,
	ENUM_RangedWeaponCategories__NewEnumerator40                                     = 24,
	ENUM_RangedWeaponCategories__NewEnumerator41                                     = 25,
	ENUM_RangedWeaponCategories__ENUM_MAX                                            = 26
};

/// Enum /Game/Animation/Setup/Enums/ENUM_UIAnimationMode.ENUM_UIAnimationMode
/// Size: 0x03
enum ENUM_UIAnimationMode : uint8_t
{
	ENUM_UIAnimationMode__NewEnumerator0                                             = 0,
	ENUM_UIAnimationMode__NewEnumerator1                                             = 1,
	ENUM_UIAnimationMode__ENUM_MAX                                                   = 2
};

