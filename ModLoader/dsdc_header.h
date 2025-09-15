#pragma once

#include <cstdint>


#define uint uint32_t
#define uint8 uint8_t
#define uint16 uint16_t
#define uint32 uint32_t
#define uint64 uint64_t
#define int32 int32_t
#define int64 int64_t
#define int8 int8_t
#define int16 int16_t


struct AIAttack;
struct AIAuralStimulusResource;
struct AIBehaviorGroup;
struct AIContextHintResource;
struct AIDefendArea;
struct AIDefendAreaSet;
struct AIFaction;
struct AIGroup;
struct AIHTNPlannerDaemon;
struct AIIndividual;
struct AIMarker;
struct AIPerchMarker;
struct AISignalType;
struct AIVisualStimulusResource;
struct ActiveStatesQueue;
struct AmbienceCycle;
struct AnimationData;
struct AnnotationInstance;
struct AnnotationPrimitiveInstance;
struct AnnotationResource;
struct Application;
struct Array_LocalizerVariable;
struct Array_WorldPosition;
struct Array_cptr_AIAttack;
struct Array_cptr_ArtPartsVariationResource;
struct Array_cptr_AttackEventTag;
struct Array_cptr_BooleanFact;
struct Array_cptr_DSDeliveredBaggageArgs;
struct Array_cptr_DSDeliveredMemoryChipArgs;
struct Array_cptr_DSDeliveryPointInfoResource;
struct Array_cptr_DSMissionLogicBlock;
struct Array_cptr_DSMissionOpenCondition;
struct Array_cptr_DSMissionOpenList;
struct Array_cptr_DSOrderedBaggageArgs;
struct Array_cptr_DSTerminalGraphBonusArgs;
struct Array_cptr_DSTerminalGraphEvaluationArgs;
struct Array_cptr_Entity;
struct Array_cptr_EntityComponent;
struct Array_cptr_FactMusicPreset;
struct Array_cptr_InventoryItem;
struct Array_cptr_XpMultiplier;
struct Array_int;
struct Array_uint;
struct Array_uint64;
struct ArtPartsVariationResource;
struct AttachPhysicsRagdollToHelperMover;
struct AttachToHelperMover;
struct AttachToHelperPositionMover;
struct AttackEventContext;
struct AttackEventLink;
struct BoolPropertyBase;
struct BooleanFact;
struct BoundingBox3;
struct BuddyComponentResource;
struct CameraModeResource;
struct CameraModifierResource;
struct CollectableEntryBase;
struct CollisionTrigger;
struct ContextualEmotion;
struct ContextualSpeechEvent;
struct Controller;
struct CoreTelemetryService;
struct CrowdZone;
struct CurveResource;
struct DSAirplaneGameActor;
struct DSBaggage2;
struct DSBaggageUnit;
struct DSCountTimerBase;
struct DSDeliveryPointInfoResource;
struct DSGameBaggageListItem;
struct DSGraphServiceArgs;
struct DSHouseholdInfoResource;
struct DSLocator;
struct DSMissionBaggageCountConditionResource;
struct DSMissionBaggageResource;
struct DSMissionBaggageWeightConditionResource;
struct DSMissionConditionResourceBase;
struct DSMissionEvaluationDataRecord;
struct DSMissionEvaluationDataTable;
struct DSMissionEvaluationDataTablesByDeliveryPoint;
struct DSMissionEvaluationDataTablesByThreshold;
struct DSMissionFactsResource;
struct DSMissionGoalsNotificationSettingsResource;
struct DSMissionInfo;
struct DSMissionInfoStack;
struct DSMissionLogicBlock;
struct DSMissionOpenCondition;
struct DSMissionOpenConditionList;
struct DSMissionOpenList;
struct DSMissionResourceList;
struct DSMissionReward2;
struct DSMissionSafeConditionResource;
struct DSMissionServiceConditionResource;
struct DSMissionSpecialReportResource;
struct DSMissionSpeedConditionResource;
struct DSMissionSwitchSectionSetting;
struct DSMovementPath;
struct DSMuleCPGameActorLocator;
struct DSMuleConfig;
struct DSMuleGameActorUnitResource;
struct DSMusicPlayerTrackResource;
struct DSNPCPriorityList;
struct DSNetSyncPreSearchParam;
struct DSPatrolPath;
struct DSPatrolPathGroup;
struct DSPatrolPathPriorityList;
struct DSPatrolPathPriorityListBase;
struct DSPlayerEntity;
struct DSPlayerPadCheckBoxes;
struct DSRadioEvent;
struct DSShellResource;
struct DSStringHashResource;
struct DSTelopTipsResource;
struct DSTerminalGraphArgs;
struct DSTipsResourceBase;
struct DSTipsResourceList;
struct DSUIDeviceMapMenuTutorialRouteResource;
struct DSUIInfoLogHUDTableItemResource;
struct DSUIMissionResultUnlockFunctionDialogResource;
struct DSUIOperationGuideHUDTableGroupResource;
struct DSWelcomeHoloAnimationDistanceSetting;
struct DSWelcomeHoloAnimationSyncSet;
struct DamageSettings;
struct DamageTypeResource;
struct Destructibility;
struct DestructibilityConstraint;
struct DestructibilityPart;
struct DestructibilityPartBase;
struct DestructibilityPartStateResource;
struct DispensableCategoryResource;
struct DynamicSequenceEntityVariable;
struct EAlertLevel;
struct EAmmoTetherState;
struct EAttackEventLinkType;
struct EBlendEventPropagationMode;
struct EBlendMode;
struct EBuddySpawnRequestMode;
struct EBuddyState;
struct EClosestAnimAlignmentType;
struct ECommandPriority;
struct EDSAmmoId;
struct EDSArea;
struct EDSAreaChangeReason;
struct EDSAttackId;
struct EDSBaggage2CarrierType;
struct EDSBaggage2SlotType;
struct EDSBaggageMenuInfoResult;
struct EDSBareFootDamageType;
struct EDSBareFootNailDamageType;
struct EDSBulletLineType;
struct EDSCameraCollisionTriggerType;
struct EDSCatcherControlCommand;
struct EDSCatcherNotifyFlags;
struct EDSCatcherNotifyType;
struct EDSCatcherStateType;
struct EDSCheckStationScanInfo;
struct EDSConstructionMenuInfoResult;
struct EDSConstructionPointCategory;
struct EDSConstructionPointNetType;
struct EDSConstructionPointState;
struct EDSConstructionPointType;
struct EDSCutsceneStateAttr;
struct EDSDeliveryBotAIMode;
struct EDSDeliveryBotDockingLocation;
struct EDSDeliveryBotMenuInfoState;
struct EDSDeliveryBotRidingAIMode;
struct EDSDeliveryManagerCommandTarget;
struct EDSDifficulty;
struct EDSEvaluationActingType;
struct EDSEvaluationType;
struct EDSFunction;
struct EDSGameActorType;
struct EDSGameBaggageListItem_BaggageAttribute;
struct EDSGameBaggageListItem_BaggageCaseType;
struct EDSGameBaggageListItem_ContentsDamageType;
struct EDSGameBaggageListItem_Volume;
struct EDSGameOverFadeColor;
struct EDSItemId;
struct EDSLiftLockReason;
struct EDSLikeOptionFlag;
struct EDSMagazineId;
struct EDSMailInfoStatus;
struct EDSMajorMember;
struct EDSMissionCategory;
struct EDSMissionConditionType;
struct EDSMissionGameOverType;
struct EDSMissionGoalsNotificationReason;
struct EDSMissionLogicBlockType;
struct EDSMissionOpenState;
struct EDSMissionOrderState;
struct EDSMissionReasonGameOver;
struct EDSMulePhase;
struct EDSMuleStance;
struct EDSMuleType;
struct EDSPadGameButtonType;
struct EDSParkingMenuInfoResult;
struct EDSPlaySentenceNodePriority;
struct EDSPlayerActionStateExported;
struct EDSPlayerMissionMessageEventType;
struct EDSPlayerMoveTypeExported;
struct EDSPlayerShoesType;
struct EDSPlayerStanceExported;
struct EDSPrivateRoomEventType;
struct EDSQpidBandWidthLevel;
struct EDSQpidLevelUpEvent;
struct EDSQpidUnitState;
struct EDSRewardRank;
struct EDSRouteConnectionType;
struct EDSSaveOption;
struct EDSSuitPartsId;
struct EDSTakeLikeReason;
struct EDSTipsUnlockType;
struct EDSUIActionLocalizedId;
struct EDSUICommonTelopHUDSound;
struct EDSUICommonTelopType;
struct EDSUIFadeColorType;
struct EDSUIFadeTimeType;
struct EDSUIMenuSoundCategory;
struct EDSUIMusicTelopDisplayMode;
struct EDSUIStaffTelopPositionType;
struct EDSUITelopDisplayPriorityType;
struct EDSUIUnlockUIFlagType;
struct EDSUIWeaponSelectorCategoryType;
struct EDSWeaponId;
struct EDSWeatherForecastType;
struct EDSWeatherRegionIndex;
struct EDeviceFunction;
struct EEquipSlotType;
struct EExposedCombatSituationSummary;
struct EForceFieldCategoryMask;
struct EGameMode;
struct EHUDSnap;
struct EHealthRegenerationSettings;
struct EInventoryCategory;
struct EInventoryItemRarity;
struct EJointOperation;
struct EJointSpace;
struct ELoopMode;
struct EModificationItemCategory;
struct EMuleDownType;
struct EMusicTransitionCurveType;
struct EMusicTransitionMode;
struct EPhysicsCollisionLayerGame;
struct EPlayerHealthSettings;
struct EPositionAssessment;
struct ERegion;
struct ESaveGameType;
struct ESceneForcedActiveState;
struct EStaminaType;
struct EStance;
struct EStreamingLODLevel;
struct ESurfaceDeformationMode;
struct EThreatState;
struct ETriggerExposedActionReplication;
struct EVoiceLimitMode;
struct EjectEffectsLocationResource;
struct EjectLocationResource;
struct EntitlementResource;
struct Entity;
struct EntityComponent;
struct EntityComponentResource;
struct EntityInstancePropertyBase;
struct EntityLifetime;
struct EntityResource;
struct EntitySoundNodeState;
struct EnumFact;
struct EnumFactEntry;
struct EnvelopeData;
struct EnvelopeResource;
struct EnvironmentSound;
struct FRGBAColor;
struct FloatFact;
struct FloatPropertyBase;
struct GGUUID;
struct GameActorLODState;
struct GameActorLocator;
struct GameMovie;
struct GameSettings;
struct GraphProgramResource;
struct HUDLogicGroupResource;
struct HitReactionComponent;
struct HitReactionResource;
struct HitReactionSet;
struct HitReactionSeverityModifier;
struct HitReactionSeverityProperty;
struct HtnSymbol;
struct HtnTinyAtom;
struct HumanoidResource;
struct InstigatorData;
struct IntPropertyBase;
struct IntegerFact;
struct Inventory;
struct InventoryItem;
struct JointID;
struct JointSetID;
struct KnockDownStateEntryResource;
struct Level;
struct LevelBasedXpReward;
struct LocalizedText;
struct LocalizedTextResource;
struct Mat44;
struct MaterialTypeResource;
struct Model;
struct ModelPartResource;
struct MountModeID;
struct Mover;
struct MovieResource;
struct NPCScheduleResource;
struct NavMeshArea;
struct NavMeshBuilderSettings;
struct ObjectCollection;
struct OpenMenuParameters;
struct PBDGraphUpdateArgs;
struct PathHelperNodeResource;
struct PathResource;
struct PerkLevel;
struct PhysicsConstraintResource;
struct Player;
struct PlayerLoadout;
struct PlayerNotificationPriority;
struct PlayerNotificationResource;
struct PlayerOutfit;
struct PlayerOutfitTheme;
struct PoseID;
struct ProceduralLookResource;
struct ProceduralLookState;
struct PropertyContainer;
struct PropertyContainerResource;
struct Quat;
struct QuestInstance;
struct QuestResource;
struct QuestSection;
struct RTTI;
struct RTTIHandleObject;
struct RTTIObject;
struct RTTIRefObject;
struct RangedWeaponModeResource;
struct Resource;
struct ResourceID;
struct ResourceSet;
struct ReverbPresetResource;
struct RopeManagerComponent;
struct Route;
struct RuntimeAnimationStateResource;
struct Scene;
struct SentenceGroupResource;
struct SentenceResource;
struct SequenceEntityVariable;
struct SequenceNetworkInstance;
struct SequenceNetworkNode;
struct SkeletonAnimationEventPayload;
struct SkeletonAnimationResource;
struct SoundGroup;
struct SoundMixResource;
struct SoundMixStateResource;
struct SoundResource;
struct SoundShape;
struct SpawnSetup;
struct SpawnSoundNodeState;
struct StaminaComponent;
struct StaminaModifier;
struct StaminaUsageType;
struct StreamingTileResource;
struct StreamingTileStateResource;
struct String;
struct SubmixResource;
struct TagProperty;
struct TalkPriority;
struct TileBasedStreamingStrategyInstance;
struct TrackingPath;
struct TrophyResource;
struct UDSEventMechanicUse;
struct UDSEventSetFloatStat;
struct UDSEventSetIntStat;
struct UDSEventSetUintStat;
struct Vec3;
struct Vec3Fact;
struct Vec3PropertyBase;
struct Vec4;
struct VoiceResource;
struct WString;
struct WaveNodeParameters;
struct WaveNodeState;
struct WaveResource;
struct WeatherSetup;
struct WorldDataSampleRequestState;
struct WorldDataTile;
struct WorldDataType;
struct WorldPosition;
struct WorldPositionPropertyBase;
struct WorldTransform;
struct WwiseID;
struct WwiseWemResource;
struct tchar;


class DSMissionGoalsResource {
public:
    static void ClearEpisode();
    static void ClearLongTermGoal();
    static void ClearShortTermGoal();
    static void CloseNotificationHUD(bool param1);
    static void SetEpisode(const GGUUID& param1);
    static void SetLongTermGoal(const GGUUID& param1);
    static void SetShortTermGoal(const GGUUID& param1);
    static void ShowNotificationHUD(EDSMissionGoalsNotificationReason param1, const DSMissionGoalsNotificationSettingsResource* param2);
};

class Spawnpoint {
public:
    void Despawn();
    Entity* GetEntity();
    void Spawn();
};

class DSMissionProgressCommand {
public:
    static bool CheckDSMissionPerformState(const GGUUID& param1, const DSMissionResourceList* param2, EDSMissionOrderState param3, bool param4);
    static bool CheckDSMissionProgress(const DSMissionResourceList* param1, bool param2);
    static bool CheckDSMissionProgressByDestination(const GGUUID& param1);
    static bool CheckDSMissionProgressSimple(const GGUUID& param1);
    static bool CheckDeliveringBaggages(const GGUUID& param1);
    static bool CheckMultipleDSMissionProgress(const DSMissionResourceList* param1);
    static uint64 GetDSMissionIdFromResource(const GGUUID& param1);
    static bool IsMissionProgressWithTimer();
};

class DSCameraInterface {
public:
    static void GetCameraPosition(WorldPosition* param1);
    static void GetCameraRotation(float* param1, float* param2);
    static void IsForceSubjectiveCamera(bool* param1);
    static void RequestForceRadioCallCamera();
    static void RequestShowdownCamera(uint32 param1, uint32 param2, const Vec3& param3, float param4, float param5);
    static void RequestTargetConstrainCamera(const Vec3& param1, const Vec3& param2, float param3, float param4, float param5, float param6, float param7, bool param8, bool param9, bool param10, bool param11, bool param12, const WorldPosition& param13, uint32 param14, uint32 param15, float param16);
    static void ResetAroundCameraCollisionTriggerType();
    static void SetAroundCameraCollisionTriggerType(EDSCameraCollisionTriggerType param1);
    static void SetCameraRotationHeading(float param1, float param2);
    static void SetCameraRotationPitch(float param1, float param2);
    static void SetEnableForceSubjectiveCameraMode(bool param1, float param2);
    static void SetStock(float param1);
    static void StopShowdownCamera();
};

class TrophySystem {
public:
    static void CaptureTrophyScreenshot(const GGUUID& param1);
    static void CompletedUpconvertTrophy();
    static void IncrementTrophyProgressIntegerStat(const GGUUID& param1);
    static bool IsTrophyUnlocked(const GGUUID& param1);
    static void SetTrophyProgressFloatStat(const GGUUID& param1, float param2, bool param3);
    static void SetTrophyProgressIntegerStat(const GGUUID& param1, int param2, bool param3);
    static void UnlockTrophy(const GGUUID& param1);
};

class AttachPhysicsRagdollToHelperMover {
public:
    static AttachPhysicsRagdollToHelperMover* Create(Entity* param1, const String& param2, const String& param3);
};

class GraphSound {
public:
    static void DrawDebugProbeFloat(const tchar* param1, float param2);
    static void EndContext();
    static const EnvelopeData* GetEnvelopeData(const EnvelopeResource* param1);
    static void GetEnvelopeFromADSR(EnvelopeResource* param1, float param2, float param3, float param4, float param5);
    static bool GetGlobalStateBool(const tchar* param1);
    static float GetGlobalStateFloat(const tchar* param1);
    static int GetGlobalStateInt(const tchar* param1);
    static int8 GetGroupIndex(const SoundGroup* param1);
    static float GetTimeFromContext();
    static float GetTimeStep();
    static float GetWaveDuration(const WaveResource* param1, float param2);
    static uint32 GetWaveSampleRate(const WaveResource* param1);
    static void GlobalStateAtomicAddFloat(const tchar* param1, float param2);
    static void GlobalStateAtomicAddInt(const tchar* param1, int param2);
    static void KeepAliveContext();
    static void RestartContext();
    static const WaveResource* SelectRandomWaveResource(const WaveResource** param1, int param2, int* param3);
    static void SetDisableDistanceCulling(bool param1);
    static void SetDisableSoundPause(bool param1);
    static void SetEnableInstanceFilter(bool param1);
    static void SetForceTo2D(bool param1);
    static void SetGlobalStateBool(const tchar* param1, bool param2);
    static void SetGlobalStateFloat(const tchar* param1, float param2);
    static void SetGlobalStateInt(const tchar* param1, int param2);
    static void SetHDRProperties(bool param1, float param2, bool param3, float param4);
    static void SetMusicPlayerCutscenePauseExport(bool& param1);
    static void SetMusicPlayerCutsceneResumeExport();
    static void SetOverrideGroup(const SoundGroup* param1);
    static void SetOverrideMaxAzimuthDelta(bool param1, float param2);
    static void SetPriorityModifier(int param1);
    static void StartSineWave(EVoiceLimitMode param1, int param2, const WaveNodeParameters* param3, int* param4, WaveNodeState** param5);
    static void StartWave(const WaveResource* param1, bool param2, EVoiceLimitMode param3, int param4, const WaveNodeParameters* param5, int* param6, WaveNodeState** param7);
    static void StartWhiteNoise(EVoiceLimitMode param1, int param2, const WaveNodeParameters* param3, int* param4, WaveNodeState** param5);
    static void StopWave(WaveNodeState** param1);
    static void UpdateWave(const WaveNodeParameters* param1, bool* param2, int* param3, WaveNodeState** param4);
    static uint32 WwiseExtPostEventExport(uint32 param1, const WwiseWemResource* param2, uint8 param3, uint64 param4, bool param5, bool param6, uint8 param7, bool param8, float param9, uint param10, bool* param11);
    static uint32 WwisePostEventExport(uint32 param1, uint64 param2, bool param3, bool param4, uint8 param5, bool param6, float param7, uint param8, uint32 param9, bool* param10, bool* param11, bool* param12);
    static uint32 WwiseSimplePostEventExport(uint32 param1, uint64 param2, bool param3, bool param4, uint8 param5, bool param6);
};

class DSRoad {
public:
    static void AddLocalTrackingLogFromData(const RTTIRefObject* param1);
    static void CheckFixedTrackingLogLevelUp();
    static void DSStopAndStartRecordingRouteTracking(const tchar* param1);
    static void DSStopAndStartRecordingRouteTrackingByPlaceId(uint32 param1);
    static void DSStopAndStartRecordingRouteTrackingByPlaceIdWithNotUpdateWorldData(uint32 param1);
    static void DebugSetForceRoadVisible(bool param1);
    static bool IsBuildingNationalRoute(uint32 param1);
    static bool IsCompletedNationalRoute(uint32 param1);
    static bool IsIncludedLevel2InLastPath();
    static void RequestRebuildNationalRoute(uint32 param1);
    static void RequestTrackingLogMarge(uint32 param1, uint32 param2);
    static void RequestTrackingLogMargeByName(const tchar* param1, const tchar* param2);
    static void SetCompletedNationalRoute(uint32 param1);
    static void SetDSFinishRecordingMoveTracking(const tchar* param1);
    static void SetDSRoadStatus(const tchar* param1, int param2);
    static void SetDSStartRecordingMoveTracking(const tchar* param1);
    static void SetStaticRoadVisible(uint32 param1, bool param2);
    static void SetUseCheckpointIndexList(const Array_int& param1);
    static void TriggerNationalRoadUpdateCheck();
};

class RetractingPartsComponent {
public:
    static void AbortRetractingParts(Entity* param1);
    static void RegisterRetractingPartEntity(Entity* param1, int param2, Entity* param3);
    static void StartRetractingParts(Entity* param1);
};

class DSGameState {
public:
    static uint32 CalcAutosaveRequestUnsaveReason();
    static uint32 CalcUnsaveReason();
    static uint64 GetGameState2();
    static bool IsPauseMusic();
    static bool IsStoppingGameEvent();
    static bool IsStoppingGameEventLoose();
    static void SetGameState(bool param1, uint32 param2);
};

class AttachToEntityMover {
public:
    void SetLocalMatrix(const Mat44& param1);
};

class Game {
public:
    static void CreateSaveGame(ESaveGameType param1, bool param2, const AIMarker* param3);
    static void DSClearRetrySaveData();
    static void DSCreateSaveGame(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6);
    static void DSCreateSaveGameForRetry(EDSSaveOption param1, EDSSaveOption param2, EDSSaveOption param3, bool param4, const AIMarker* param5);
    static void DSCreateSaveGameForStrideQpidArea();
    static void DSCreateSaveGamePlayWakeupDreamDemo(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4);
    static void DSCreateSaveGameWithActivity(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6, const GGUUID& param7);
    static void DSCreateSaveGameWithActivity_PlusWakeupDreamDemo(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6, const GGUUID& param7);
    static bool DSExistsRetrySaveData();
    static EDSDifficulty DSGetDifficulty();
    static EDSDifficulty DSGetDifficultyWithoutFixMode();
    static ERegion DSGetTitleRegion();
    static void DamageEntitiesInRangeByFaction(AttackEventLink* param1, const WorldPosition& param2, const Vec3& param3, float param4, const MaterialTypeResource* param5, const DamageSettings* param6, float param7, const AIFaction* param8);
    static bool EntityMessage_DeconstructPlacedEntity(Entity* param1);
    static void Game_BranchToMusicSection(const tchar* param1);
    static bool Game_EnableDayNightCycle(bool param1);
    static EGameMode Game_GetGameMode();
    static void Game_GetGameSettings(const GameSettings** param1);
    static float Game_GetGameTimeInSec();
    static void Game_GetMusicCurrentPreset(int* param1);
    static void Game_GetMusicPresetIndex(const tchar* param1, int* param2);
    static void Game_GetMusicTiming(float* param1, int* param2, int* param3);
    static float Game_GetTimeOfDay();
    static bool Game_IsDayNightCycleEnabled();
    static void Game_SetMusicIntensity(float param1);
    static void Game_SetMusicPreset(const tchar* param1, bool param2, EMusicTransitionMode param3, float param4, EMusicTransitionCurveType param5);
    static void Game_SetTimeOfDay(float param1, float param2);
    static void Game_StartAmbience(AmbienceCycle* param1);
    static void Game_StopAmbience(AmbienceCycle* param1);
    static void NotifyHackDisabled(Entity* param1, const Entity* param2);
};

class DSGameBaggageListItem {
public:
    static EDSGameBaggageListItem_BaggageCaseType GetBaggageCaseType(const DSGameBaggageListItem* param1);
    static float GetBaggageWeight(const DSGameBaggageListItem* param1);
    static uint32 GetCaseDurability(const DSGameBaggageListItem* param1);
    static EDSGameBaggageListItem_ContentsDamageType GetContentsDamageType(const DSGameBaggageListItem* param1);
    static uint32 GetContentsDurability(const DSGameBaggageListItem* param1);
    static uint8 GetRarity(const DSGameBaggageListItem* param1);
    static EDSGameBaggageListItem_Volume GetVolumeType(const DSGameBaggageListItem* param1);
};

class ShaderVariableComponent {
public:
    static void AnimateShaderVariable(Entity* param1, const tchar* param2, const CurveResource* param3, bool param4, float param5, const DestructibilityPartBase* param6);
    static void SetShaderVariableFloat(Entity* param1, const tchar* param2, float param3, float param4, const DestructibilityPartBase* param5);
    static void SetShaderVariableVec3(Entity* param1, const tchar* param2, const Vec3& param3, float param4, const DestructibilityPartBase* param5);
};

class RagdollComponent {
public:
    static void ApplyHardKeyFrame(const JointSetID* param1, const AnimationData& param2, int param3, AnimationData* param4);
    static void ApplySoftKeyFrame(const AnimationData& param1, const JointSetID* param2, int param3, bool param4, float param5, AnimationData* param6);
    static bool IsRagdollAcquired();
    static void RagdollDriven(const AnimationData& param1, const JointSetID* param2, int param3, AnimationData* param4);
    static void RagdollDrivenDefault(const AnimationData& param1, int param2, AnimationData* param3);
    static void RagdollMotorDriven(const AnimationData& param1, const JointSetID* param2, int param3, float param4, float param5, float param6, float param7, float param8, float param9, float param10, AnimationData* param11);
    static bool RequestRagdollActivation();
    static void SetBodiesProperties(int param1, const JointSetID* param2, float param3, float param4, int param5, float param6, float param7, float param8, float param9, float param10, const AnimationData& param11, AnimationData* param12);
    static void SetContraintsProperties(const AnimationData& param1, const JointSetID* param2, int param3, float param4, float param5, AnimationData* param6);
};

class HumanoidMover {
public:
    float GetFallingHeight();
};

class RTTIGroup {
public:
    static const RTTI* GetRTTI(const RTTIObject* param1);
    static const RTTI* GetRTTIByName(const tchar* param1);
    static bool IsKindOf(const RTTI* param1, const RTTI* param2);
    static bool IsSameTypeAs(const RTTI* param1, const RTTI* param2);
    static bool SetAttribute(RTTIObject* param1, const tchar* param2, bool param3);
    static bool SetAttribute(RTTIObject* param1, const tchar* param2, float param3);
    static bool SetAttribute(RTTIObject* param1, const tchar* param2, int param3);
    static bool SetAttribute(RTTIObject* param1, const tchar* param2, const RTTIRefObject* param3);
    static bool SetAttribute(RTTIObject* param1, const tchar* param2, const tchar* param3);
    static bool SetAttribute(RTTIObject* param1, const tchar* param2, int64 param3);
    static bool SetAttribute(RTTIObject* param1, const tchar* param2, GGUUID param3);
};

class DSMissionLogicBlock {
public:
    static int GetAchievementConditionNum(const DSMissionLogicBlock* param1);
    static const DSMissionFactsResource* GetConditionFactList(const DSMissionLogicBlock* param1);
    static const DSMissionResourceList* GetConditionResouceList(const DSMissionLogicBlock* param1);
    static Array_cptr_DSMissionLogicBlock GetLogicBlocks(DSMissionLogicBlock* param1);
    static EDSMissionLogicBlockType GetLogicType(const DSMissionLogicBlock* param1);
};

class DSMissionLogicCommand {
public:
    static void ActivateRange(bool param1);
    static void AllDispResult();
    static void ChangeArea(EDSArea param1, const DSLocator* param2, bool param3, EDSAreaChangeReason param4, int32 param5, int32 param6);
    static void DEBUG_RequestDSMissionStartPremium(const GGUUID& param1);
    static void DebugSetPlayerSpawnLocatorUUID(const GGUUID& param1);
    static void DispResult1();
    static void DispResult2();
    static void DispResultEvaluation();
    static void DispTotalResult(bool param1, bool param2, const TrophyResource* param3);
    static void FastTravel(int param1);
    static void ForceFinishAutoDeliveryLight(bool param1);
    static void GameOver(EDSMissionGameOverType param1, EDSMissionReasonGameOver param2, uint64 param3, EDSGameOverFadeColor param4, bool param5);
    static EDSArea GetCurrentArea();
    static int GetElapsedDayLastFastTravel();
    static uint64 GetGameOverMissionID();
    static EDSMissionReasonGameOver GetGameOverReason();
    static bool GetSamMissionProgressFact(const GGUUID& param1);
    static void GoOutFromPRForCliffMemories(EDSArea param1, const DSLocator* param2);
    static void RequestDSMissionCancelSilent(const GGUUID& param1);
    static void RequestDSMissionFail(const GGUUID& param1);
    static void RequestDSMissionStart(const GGUUID& param1);
    static void RequestDSMissionSuccess(const GGUUID& param1, bool param2, bool param3);
    static void ReturnToPRForCliffMemories();
    static void SendMissionMessage(const DSStringHashResource* param1, const DSStringHashResource* param2, int32 param3, int32 param4, int32 param5, int32 param6, bool param7);
    static void SendMissionMessageSimple(const DSStringHashResource* param1, const DSStringHashResource* param2, bool param3);
    static void SendMissionSceneMessageImmediately(const DSStringHashResource* param1, int32 param2, int32 param3);
};

class FocusTargetComponentResource {
public:
    static void CheckEntityVulnerabilities(const Entity* param1, const DamageTypeResource* param2, bool& param3, bool& param4);
};

class AIHTNPlannerDaemonPerchPoints {
public:
    void AddPerchPoint(AIPerchMarker* param1);
    void ClearPerchPoints();
    void RemovePerchPoint(AIPerchMarker* param1);
};

class StaggerStateComponent {
public:
    void Activate(float param1);
    bool CanActivate();
    bool IsActive();
};

class DSWeather {
public:
    static bool CheckArea(EDSArea param1);
    static float GetRainyCondition(const WorldPosition& param1);
    static float GetRainyConditionFromMap(const WorldPosition& param1);
    static void ResetForecastTime(bool param1);
    static void SetForecastTypeOfRegion(const tchar* param1, int param2);
    static void SetForecastTypeOfRegionDirect(EDSWeatherRegionIndex param1, EDSWeatherForecastType param2);
    static void SetForecastTypeOfRegionDirectEx(EDSArea param1, EDSWeatherRegionIndex param2, EDSWeatherForecastType param3);
    static void SetStartControlFlags(bool param1);
    static void SetWeatherOfRegion(const tchar* param1, bool param2, int param3);
};

class ZiplineDetectionComponent {
public:
    void ZiplineAtPosition(const Entity* param1, const WorldPosition& param2, float param3);
};

class DSCatcher {
public:
    static void AnnihilationProgress(int param1);
    static void CatcherWhaleControlCommand(uint32 param1, uint32 param2, RTTIRefObject* param3, RTTIRefObject* param4);
    static bool CheckCatcherNotifyFlags(uint32 param1, EDSCatcherNotifyFlags param2);
    static Entity* GetActiveCatcherEntity(int param1);
    static int GetIntState(EDSCatcherStateType param1);
    static int GetNotifyIdentifier(EDSCatcherNotifyType param1);
    static bool IsInAnnihilationArea(const WorldPosition& param1);
    static bool IsInAnnihilationAreaWithArea(const WorldPosition& param1, EDSArea param2);
    static void NotifySimpleControlCommand(EDSCatcherControlCommand param1);
    static void RemoveAnnihilationArea(const WorldPosition& param1, EDSArea param2);
    static void SetScriptVariableCommand(uint32 param1, uint32 param2);
};

class DSUINodeGraphBindings {
public:
    static bool CheckBaggageMenuInfoResult(EDSBaggageMenuInfoResult param1);
    static bool CheckDSUIFadeColor(bool param1, bool param2);
    static bool CheckDSUIFadeState(bool param1, bool param2, bool param3, bool param4);
    static bool CheckLevelUpMenuInfoResult(EDSConstructionMenuInfoResult param1);
    static bool CheckMissionListDialogMissionId(uint64 param1);
    static bool CheckRepairMenuInfoResult(EDSConstructionMenuInfoResult param1);
    static bool CheckUIMenuSoundCategoy(EDSUIMenuSoundCategory param1);
    static void ClearAllInfoLog();
    static void ClearLowPriorityInfoLog();
    static const uint16* DSUIStringFormat(const uint16* param1, const uint16* param2, const uint16* param3, const uint16* param4, const uint16* param5);
    static void DebugSetBaggageMenuInfoResult(EDSBaggageMenuInfoResult param1);
    static void DebugSetLevelUpMenuInfoResult(EDSConstructionMenuInfoResult param1);
    static void DisableMarkerLocator(const tchar* param1);
    static void EnableMarkerLocator(const tchar* param1);
    static void FadeInScreen(EDSUIFadeColorType param1, EDSUIFadeTimeType param2, float param3);
    static void FadeOutScreen(EDSUIFadeColorType param1, EDSUIFadeTimeType param2, float param3);
    static const Array_uint64& GetLastMissionIdsFromMissionTelop();
    static uint GetLoadingScreenNumber();
    static const uint16* GetLocalizedTextFromResource(const LocalizedTextResource* param1);
    static void HideAllMissionTelopHUD(bool param1);
    static void HideAllTelop();
    static void HideDeviceMapTutorialRoute();
    static void HideOperationGuide(const DSUIOperationGuideHUDTableGroupResource* param1, bool param2);
    static void HideTelop(EDSUICommonTelopType param1, bool param2);
    static void HideTimerHUD();
    static void HideTutorialTelopWithHash(uint32 param1, bool param2, bool param3);
    static void IgnoreOnceWeightHUDRequest();
    static void IgnoreWeightHUDRequestTimer(float param1);
    static bool IsCompassShown();
    static bool IsDeliveryMenuPrivateRoomNewMarkForBackpack();
    static bool IsDeliveryMenuPrivateRoomNewMarkForUniform();
    static bool IsFunctionPressed(EDSFunction param1);
    static bool IsOdradekDemoOnceSetting();
    static bool IsPrivateRoomBBPodNew();
    static bool IsPrivateRoomBackpackNew();
    static bool IsPrivateRoomTerminalNew();
    static bool IsPrivateRoomUniformNew();
    static bool IsProfileDandlingTypeMotionSensor();
    static bool IsProfileGamePadActionToggleGrabEnable();
    static bool IsProfileKBDActionToggleGrabEnable();
    static bool IsShowTutorialTelop(const DSTelopTipsResource* param1, uint32 param2);
    static void RemoveInfoLogFromQueue(const DSUIInfoLogHUDTableItemResource* param1, bool param2);
    static void RequestAimHUDDemo(float param1, float param2, float param3, bool param4, bool param5, float param6, float param7);
    static void RequestBackupAndHideLandmarkTelop(bool param1);
    static void RequestOpenCureGaugeMenu(BooleanFact* param1);
    static void RequestShowStaffTelop(EDSUIStaffTelopPositionType param1, EHUDSnap param2, float param3, float param4, const uint16* param5, const uint16** param6, int param7, float param8);
    static void RequestUnlockFunctionDialog(const DSUIMissionResultUnlockFunctionDialogResource* param1, int param2);
    static void RestoreLandmarkTelop();
    static void SetBBPodCustomizeActionIconNewMark(bool param1);
    static void SetDeviceMapZoomScale(float param1);
    static void SetLoadingScreenNumber(uint param1);
    static void SetUnlockUIFlag(EDSUIUnlockUIFlagType param1);
    static void ShowCommonTelop(EHUDSnap param1, float param2, float param3, const uint16* param4, const uint16* param5, float param6);
    static void ShowDeviceMapTutorialRoute(const DSUIDeviceMapMenuTutorialRouteResource* param1);
    static void ShowHiggsFightGaugeHUD(bool param1);
    static void ShowInfoLog(const DSUIInfoLogHUDTableItemResource* param1, const tchar* param2, const uint16* param3, const uint16* param4, const uint16* param5);
    static void ShowLandmarkTelop(const uint16* param1, const uint16* param2, const uint16* param3, const uint16* param4, const uint16* param5, const uint16* param6, uint32 param7, EDSUICommonTelopHUDSound param8, bool param9);
    static void ShowMusicTelop(EDSUIMusicTelopDisplayMode param1, const uint16* param2, const uint16** param3, int param4, const uint16** param5, int param6, float param7);
    static void ShowMusicTelopFromId(EDSUIMusicTelopDisplayMode param1, uint32 param2, float param3);
    static void ShowOperationGuide(const DSUIOperationGuideHUDTableGroupResource* param1);
    static void ShowOperationGuideWithPosition(const DSUIOperationGuideHUDTableGroupResource* param1, float param2, float param3);
    static void ShowPrototypeSubtitle(const uint16* param1, float param2);
    static void ShowTutorialTelop(const DSTelopTipsResource* param1, uint32 param2, float param3, BooleanFact* param4, BooleanFact* param5, EDSUITelopDisplayPriorityType param6, uint32 param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13, bool param14, bool param15, uint32 param16, bool param17, bool param18);
    static void UnSetUnlockUIFlag(EDSUIUnlockUIFlagType param1);
    static bool WeaponSelectorHasPageChangeByCategory(EDSUIWeaponSelectorCategoryType param1);
};

class DSQpidUnitCommand {
public:
    static void ChangeQpidBandWidthLevel(const GGUUID& param1, EDSQpidBandWidthLevel param2);
    static void ChangeQpidBandWidthLevelById(int32 param1, EDSQpidBandWidthLevel param2);
    static void ChangeQpidState(const GGUUID& param1, EDSQpidUnitState param2);
    static void ChangeQpidStateById(int32 param1, EDSQpidUnitState param2);
    static bool CheckCanChangeQpidStateById(int32 param1);
    static bool CheckQpidState(const GGUUID& param1, EDSQpidUnitState param2);
    static bool CheckQpidStateById(int32 param1, EDSQpidUnitState param2);
    static void DebugChangeAllQpidState(EDSQpidUnitState param1);
    static void DebugQpidOpenAll();
    static bool EqualQpidState(const GGUUID& param1, EDSQpidUnitState param2);
    static bool EqualQpidStateById(int32 param1, EDSQpidUnitState param2);
    static void ForceUpdateQpid();
    static int32 GetQpidIdPlayerInside(bool param1);
    static bool HasQpid(int32 param1);
    static void SetQpidLevelUpEventToTerminalOperation(EDSQpidLevelUpEvent param1);
};

class MorphemeAnimationGraphInstance {
public:
    const AnimationData* GetInputPose();
};

class EffectComponent {
public:
    void GetLocalMatrix(Mat44& param1);
    bool IsEmitting();
    void SetLightColor(const FRGBAColor& param1);
    void SetLightIntensityMultiplier(float param1);
    void SetLocalMatrix(const Vec3& param1, const Quat& param2);
    void StartEmitting();
    void StopAndDie();
    void StopEmitting();
};

class SoundComponent {
public:
    static void SetParameterBoolByName(Entity* param1, const tchar* param2, bool param3);
    static void SetParameterFloatByName(Entity* param1, const tchar* param2, float param3);
    static void SetParameterIntByName(Entity* param1, const tchar* param2, int param3);
    void SetSoundInstanceParameterBool(int param1, const tchar* param2, bool param3);
    void SetSoundInstanceParameterFloat(int param1, const tchar* param2, float param3);
    void SetSoundInstanceParameterInt(int param1, const tchar* param2, int param3);
};

class DSWeaponAimArc {
public:
    void SetRotationZFromDirection(const Vec3& param1);
};

class ContextualActionVictimComponent {
public:
    bool IsVictimOfContextualAction();
};

class Destructibility {
public:
    void CountPartsWithTag(const TagProperty* param1, int& param2, int& param3);
    bool DoesDestructibilityPartHaveTag(const TagProperty* param1, int param2);
    void EnableConstraint(const DestructibilityConstraint* param1, bool param2);
    void EnablePart(DestructibilityPartBase* param1, bool param2, bool param3);
    DestructibilityPart* GetDefaultDamagePart();
    DestructibilityPart* GetPart(int param1);
    float GetPartHealth(DestructibilityPart* param1, float& param2, float& param3);
    bool HasPart(DestructibilityPartBase* param1);
    bool IsPartEnabled(DestructibilityPartBase* param1);
    void KillPartsWithTag(AttackEventLink* param1, const TagProperty* param2, float param3, const WorldPosition& param4, const Vec3& param5, const DamageTypeResource* param6);
    void SendDestructibilityPartHitMessage(Entity* param1, int param2);
    void SetDestructibilityPartShootable(const DestructibilityPartStateResource* param1, bool param2);
    void SetDestructibilityTagShootable(const TagProperty* param1, bool param2);
};

class DSParkingMenuInfo {
public:
    static bool CheckParkingMenuInfoResult(EDSParkingMenuInfoResult param1);
    static void DespawnVehicleSelectedInRace();
    static void GetLeavingVehicleFromParking(Entity** param1);
    static void GetStoringVehicleToParking(Entity** param1);
    static void GetVehicleOnParkingLift(Entity** param1);
    static bool HasEnoughVacantParking(int param1);
    static bool HasVacantParking();
    static void LockParkingLift(EDSLiftLockReason param1);
    static void RegisterUsedVehicleInRace();
    static void SendUpdateRaceRecordLike();
    static void SendVehicleUsedInRaceLike();
    static void SpawnVehicleSelectedInParking(const WorldTransform& param1);
    static void SpawnVehicleSelectedInRace(const WorldTransform& param1);
    static bool StoreVehicleToParking(Entity* param1);
};

class DSCameraModeBase {
public:
    float GetViewHeadingSpeed();
};

class DSEnvironmentManagerNodes {
public:
    static void BeginBlackSamGameOver();
    static void CreateKnotSpaceEntity(const WorldTransform& param1);
    static void DeleteKnotSpaceEntity();
    static void EndBlackSamGameOver();
};

class  {
public:
    static float acosf_imp(float param1);
    static float asinf_imp(float param1);
    static float atan2f_imp(float param1, float param2);
    static float atanf_imp(float param1);
    static float ceilf_imp(float param1);
    static float cosf_imp(float param1);
    static float expf_imp(float param1);
    static float fabsf_imp(float param1);
    static float floorf_imp(float param1);
    static float fmaf_imp(float param1, float param2, float param3);
    static float fmodf_imp(float param1, float param2);
    static void gGraphBreakpoint();
    static void gGraphCrash();
    static bool gIsRuntimeDebug();
    static void* gMemAlignedAlloc(uint64 param1, uint64 param2);
    static void gMemAlignedFree(void* param1);
    static void* gMemAlloc(uint64 param1);
    static uint64 gMemBlockSize(const void* param1);
    static int gMemCompare(const void* param1, const void* param2, uint64 param3);
    static void* gMemCopy(void* param1, const void* param2, uint64 param3);
    static void* gMemFlexRealloc(void* param1, uint64 param2);
    static void gMemFree(void* param1);
    static void gMemMove(void* param1, const void* param2, uint64 param3);
    static void* gMemRealloc(void* param1, uint64 param2);
    static void* gMemSet(void* param1, uint8 param2, uint64 param3);
    static void* gMemZero(void* param1, uint64 param2);
    static float gNoisePerlin1D(float param1);
    static float gNoisePerlin3D(float param1, float param2, float param3);
    static int gRandom();
    static float gRandomF();
    static int gStringCompare(const tchar* param1, const tchar* param2, int param3);
    static int gStringCompare(const tchar* param1, const tchar* param2);
    static int gStringCompareNoCase(const tchar* param1, int param2, const tchar* param3, int param4);
    static int gStringCompareNoCase(const tchar* param1, const tchar* param2, int param3);
    static tchar* gStringConcat(tchar* param1, const tchar* param2);
    static tchar* gStringConcat(tchar* param1, const tchar* param2, uint64 param3);
    static tchar* gStringCopy(tchar* param1, const tchar* param2, uint64 param3);
    static tchar* gStringCopy(tchar* param1, const tchar* param2);
    static const tchar* gStringFindChar(const tchar* param1, tchar param2);
    static const tchar* gStringFindOneOf(const tchar* param1, const tchar* param2);
    static const tchar* gStringFindSubstring(const tchar* param1, const tchar* param2);
    static const tchar* gStringFindSubstring(const tchar* param1, int param2, const tchar* param3, int param4);
    static const tchar* gStringFindSubstringFromRight(const tchar* param1, const tchar* param2, uint param3, uint param4);
    static const tchar* gStringFindSubstringNoCase(const tchar* param1, const tchar* param2);
    static const tchar* gStringFindSubstringNoCase(const tchar* param1, int param2, const tchar* param3, int param4);
    static int gStringLength(const uint16* param1);
    static int gStringLength(const tchar* param1);
    static const tchar* gStringNFindChar(const tchar* param1, tchar param2, int param3);
    static double gStringToDouble(const tchar* param1);
    static float gStringToFloat(const tchar* param1);
    static int gStringToInt(const tchar* param1);
    static int64 gStringToInt64(const tchar* param1);
    static uint gStringToUInt(const tchar* param1);
    static uint64 gStringToUInt64(const tchar* param1);
    static void gTrace(int param1);
    static void gTrace(float param1);
    static void gTrace(void* param1);
    static void gTrace(const tchar* param1);
    static float log10f_imp(float param1);
    static float logf_imp(float param1);
    static float powf_imp(float param1, float param2);
    static float roundf_imp(float param1);
    static float sincosf_imp(float param1, float& param2, float& param3);
    static float sinf_imp(float param1);
    static float sqrtf_imp(float param1);
    static float truncf_imp(float param1);
};

class PlayerParkourComponent {
public:
    void GetCurrentAnnotation(const AnnotationInstance** param1, const AnnotationResource** param2, const AnnotationPrimitiveInstance** param3);
};

class AnimationNodeProceduralLook {
public:
    static void UpdateProceduralLookInstance(const ProceduralLookResource* param1, int param2, const Vec3& param3, float param4, const AnimationData* param5, AnimationData* param6, ProceduralLookState** param7);
};

class DSResidentsBasicNode {
public:
    static void AddFriendshipFromMissionID(uint64 param1, int64 param2);
    static void CalcFriendshipLevel(const DSHouseholdInfoResource* param1, int32 param2, int32* param3, bool param4);
    static void GetCalculationFriendshipLevelTH(const DSHouseholdInfoResource* param1, int32 param2, int32* param3);
    static void GetFirendshipOfHousehold(const DSHouseholdInfoResource* param1, int32* param2, int32* param3);
    static void GetFirendshipOfHouseholdByMissionID(uint64 param1, int32* param2, int32* param3);
    static void GetFirendshipOfHouseholdByNameHash(uint32 param1, int32* param2, int32* param3);
    static void GetFloatFriendshipLevel(const DSHouseholdInfoResource* param1, int32 param2, int32 param3, float* param4);
    static void GetFriendshipMaxLevel(const DSHouseholdInfoResource* param1, int32* param2, bool* param3);
    static void GetHouseholdByNameHash(uint32 param1, const DSHouseholdInfoResource** param2);
    static bool GetHouseholdByTerminalId(int param1, const DSHouseholdInfoResource** param2);
    static void GetHouseholdThatRequestedMissionByMissionID(uint64 param1, const DSHouseholdInfoResource** param2);
    static void IsAlreadyDeliveryAtHousehold(const GGUUID& param1, bool* param2);
    static void IsMemberOfBridgesOfHousehold(const DSHouseholdInfoResource* param1, bool* param2);
    static void SetAlreadyDeliveryAtHousehold(const GGUUID& param1, bool param2);
    static void SetForceFirendshipOfHouseholdByGGUUID(const GGUUID& param1, int32 param2);
    static void SetFriendshipFromDShouseholdInfoResource(const GGUUID& param1, int64 param2, bool param3);
};

class DsMuleMissionCommand {
public:
    static void MuleCP_BgmMute(const GGUUID& param1, bool param2);
    static bool MuleCP_CheckPlayerInMuleArea(int param1);
    static bool MuleCP_CheckPlayerInMuleAreaByLocator(const GGUUID& param1, int param2);
    static void MuleCP_DisableCPAndAllsMembers(const GGUUID& param1, bool param2);
    static void MuleCP_DisableCPRaderCheck(const GGUUID& param1, bool param2);
    static void MuleCP_ForceSetCPPhase(const GGUUID& param1, EDSMulePhase param2);
    static bool MuleCP_IsExitMuleInCamera(const GGUUID& param1, float param2);
    static bool MuleCP_IsExtinction(const GGUUID& param1);
    static void MuleCP_SetKeepCaution(const GGUUID& param1, bool param2, bool param3);
    static void Mule_AddMissionClearCountForResurrect(uint32 param1);
    static void Mule_ChangeWeapon(const GGUUID& param1, const DSMuleConfig* param2);
    static void Mule_DontTakeAwayShoes(bool param1);
    static float Mule_GetMinDistanceBetweenBaggage(const DSStringHashResource* param1);
    static float Mule_GetMinDistanceBetweenPlayer(bool param1, float param2);
    static void Mule_GetMuleTypeByEntity(const Entity* param1, bool* param2, EDSMuleType* param3);
    static bool Mule_InCollisionTrigger(const CollisionTrigger* param1);
    static bool Mule_IsExistAlertMule();
    static bool Mule_IsExistCautionOrNoticeMule();
    static void Mule_MoveMulesOnElevator();
    static void Mule_RemoveAllMulesFromWorld(bool param1);
    static void Mule_RemoveDeadMules();
    static void Mule_RemoveDeadMulesByBridges();
    static void Mule_RemovePersonalMissionBaggages(const DSGameBaggageListItem* param1);
    static void Mule_ResetAllMulesByAreaChange(bool param1);
    static void Mule_ResetAllMulesByMissionChange();
    static void Mule_ResetAndResurrectAllMulesByMissionChange();
    static void Mule_ResetCPMulesAIOnly(const GGUUID& param1);
    static void Mule_ResetCPMulesByMissionChange(const GGUUID& param1);
    static void Mule_ResetFriendlyMuleByAccessingTerminal();
    static void Mule_ResetOutsideCPAreaPosition();
    static void Mule_SetIgnoreDeadMuleMoveArea(EDSArea param1, WorldPosition param2, float param3, bool param4);
    static void Mule_SetMissionBaggage(const GGUUID& param1, const DSGameBaggageListItem* param2);
    static bool Mule_StillExistDeadBodyBecomingGazer();
};

class Humanoid {
public:
    bool CanMove();
    float GetLastLandingHeight();
    float GetTimeSinceLastDamage();
    int GetVaultType();
    bool HasPerkLevel(const PerkLevel* param1);
    bool IsAiming();
    bool IsCrouching();
    bool IsDodging();
    bool IsFalling();
    bool IsFiring();
    bool IsInCombat();
    bool IsInStealth();
    bool IsJumping();
    bool IsKnockedDown(bool* param1);
    bool IsLanding();
    bool IsLowOnAmmo();
    bool IsMoving();
    void IsParkouring(bool& param1, bool& param2, bool& param3);
    bool IsPerformingTakeDown();
    bool IsReloading();
    bool IsSliding();
    bool IsSlidingToUseLocation();
    bool IsSprinting();
    bool IsStaggering();
    bool IsSwimming();
    bool IsSwimmingUnderWater();
    bool IsUsingPlayerTool();
    bool IsVaulting();
    bool IsZipLining();
    bool IsZooming();
    void SetQuietFootSteps(bool param1);
    void SetStance(EStance param1);
};

class DebugTool {
public:
    static void sDrawLine(const WorldPosition& param1, const WorldPosition& param2, const FRGBAColor& param3, float param4, const RTTIObject* param5);
    static void sDrawOrientedBoundingBox(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, const FRGBAColor& param4, float param5, const RTTIObject* param6);
    static void sDrawSphere(const WorldPosition& param1, float param2, const FRGBAColor& param3, float param4, const RTTIObject* param5);
    static const tchar* sGetDebugName(const RTTIRefObject* param1);
};

class PlayerGame {
public:
    int GetFriendlyAlivePlayerCount();
    int GetHostileAliveEntityCount(const WorldPosition& param1, float param2);
    Vec3 GetJoystickAcceleration();
    Vec3 GetJoystickAngleVelocity();
    void GetJoystickLookInput(float* param1, float* param2);
    void GetJoystickMoveInput(float* param1, float* param2);
    Vec3 GetJoystickOrientation();
    bool IsAnyJoystickButtonFunctionActive();
    bool IsAnyJoystickFunctionActive();
    bool IsJoystickFunctionPressed(EDeviceFunction param1, bool param2);
    bool IsLookingAtPosition(const WorldPosition& param1, float param2, float param3, bool param4);
    void SetJoystickLedColor(const FRGBAColor& param1);
    void ShowObjectivesSummary();
    void SwitchPlayerCharacter(const HumanoidResource* param1);
};

class DSMisionEvaluationCommand {
public:
    static bool CheckNonDeliveryBaggageForStaticMission(const DSBaggage2* param1);
    static bool CompareAndRecordAtShortestDistance(const DSMissionInfo* param1, float param2, bool param3);
    static bool DistanceFromStartPointToEndPoint(const DSMissionInfo* param1, float& param2);
    static bool FindBaggageStartAndGoalByBaggage2(const DSBaggage2* param1, WorldPosition& param2, WorldPosition& param3);
    static bool FindBaggageStartAndGoalByStaticMissionBaggageResource(const DSMissionInfo* param1, const DSMissionBaggageResource* param2, WorldPosition& param3, WorldPosition& param4);
    static bool GetAccessingTerminalPosition(WorldPosition& param1);
    static bool GetAutoDeliveryEndPosition(const DSMissionInfo* param1, WorldPosition& param2);
    static const DSGameBaggageListItem* GetBaggageListItemWasteBBPod();
    static const DSMissionSpecialReportResource* GetBaggageSpecialReport(EDSGameBaggageListItem_ContentsDamageType param1);
    static bool GetDSTraceEnable();
    static void GetOnlineLostBaggageDriftingParam(uint64 param1, const DSMissionBaggageResource* param2, uint32* param3, uint32* param4);
    static const DSMissionSpecialReportResource* GetSpecialReportContentsDamage();
    static const DSMissionSpecialReportResource* GetSpecialReportReachd();
    static const DSMissionSpecialReportResource* GetSpecialReportRouteDeviation();
    static const DSMissionSpecialReportResource* GetSpecialReportRouteExploration();
    static const DSMissionSpecialReportResource* GetSpecialReportRouteNotExploration();
    static const DSMissionSpecialReportResource* GetSpecialReportTotalBaggageDamage();
    static const DSMissionSpecialReportResource* GetSpecialReportTotalDelivery();
    static bool GetSupplyMissionInfo(const DSMissionInfo* param1, const DSGameBaggageListItem** param2, uint32* param3);
    static bool IsEnableTotalWeightBonusFromBaggageUnit(const DSBaggageUnit* param1);
    static bool IsEnableTotalWeightBonusFromMissionInfoStack(const DSMissionInfoStack* param1);
    static bool IsEnableTotalWeightBonusFromMissionInfoStackAndBaggageUnit(const DSMissionInfoStack* param1, const DSBaggageUnit* param2);
};

class Model {
public:
    void ChangeModelPart(const ModelPartResource* param1, const ModelPartResource* param2);
    void EnableModelPart(const ModelPartResource* param1, bool param2);
    Mat44 GetModelPartLocalMatrix(const ModelPartResource* param1);
    bool GetModelPartTransform(int param1, WorldPosition& param2, Mat44& param3);
    bool IsModelPartEnabled(const GGUUID& param1);
    void SetModelPartLocalMatrix(const ModelPartResource* param1, const Mat44& param2);
};

class QuestInstance {
public:
    const QuestResource* GetResource();
    bool IsQuestPaused();
    bool IsQuestTracked();
    static void ProgressQuest(QuestSection* param1);
    void SetQuestPaused(bool param1);
    void SetQuestTracked(bool param1);
    void SetTrackingEnabled(bool param1);
};

class DSMissionOpenList {
public:
    static DSMissionResourceList* GetOpenResourceList(DSMissionOpenList* param1);
    static EDSMissionOpenState GetOpenState(DSMissionOpenList* param1);
};

class Entity {
public:
    void ApplyDamage(AttackEventLink* param1, EAttackEventLinkType param2, const Entity* param3, const DestructibilityPart* param4, const WorldPosition& param5, const Vec3& param6, float param7, const MaterialTypeResource* param8, const DamageSettings* param9, bool param10);
    void ClearParent();
    EntityComponent* CreateComponent(const EntityComponentResource* param1, bool param2);
    EntityComponent* CreateDamageComponent(const EntityComponentResource* param1, bool param2, AttackEventLink* param3);
    void EnableKeepUp(bool param1);
    void ExecuteExposedAction(const tchar* param1, const InstigatorData* param2, AttackEventLink* param3, ETriggerExposedActionReplication param4);
    EntityComponent* FindComponentByInterface(const RTTI* param1);
    EntityComponent* FindComponentByResource(const EntityComponentResource* param1);
    EntityComponent* FindComponentByType(const RTTI* param1);
    Array_cptr_EntityComponent FindComponentsByType(const RTTI* param1);
    StaminaComponent* FindStaminaComponentByType(EStaminaType param1);
    void GetAngularVelocity(Vec3* param1);
    AttackEventLink* GetAttackEvent();
    Entity* GetChild(int param1);
    Entity* GetChildByResource(const GGUUID& param1);
    int GetChildCount();
    Array_cptr_Entity GetChildren();
    Array_cptr_Entity GetChildrenByResource(const GGUUID& param1);
    Destructibility* GetDestructibility();
    float GetDistanceToCamera();
    AIFaction* GetFaction();
    void GetFloorInfo(MaterialTypeResource& param1, int& param2);
    float GetHealth();
    void GetHelperLocation(const tchar* param1, WorldPosition& param2, Mat44& param3);
    InstigatorData* GetInstigator();
    float GetLinearSpeed();
    const WorldPosition GetLookAtPoint();
    float GetMaxHealth();
    Model* GetModel();
    Mover* GetMover();
    Mat44 GetOrientation();
    Entity* GetParent();
    Player* GetPlayer();
    WorldPosition GetPosition();
    const EntityResource* GetResource();
    void GetRotation(float* param1, float* param2, float* param3);
    GGUUID GetUUID();
    float GetUpdateFrequency();
    Entity* GetUsedFixedGun();
    void GetVelocity(Vec3* param1);
    WorldTransform GetWorldTransform();
    void Heal(float param1);
    bool IsAnimationEventActive(const SkeletonAnimationEventPayload& param1);
    bool IsDead();
    bool IsInstanceOfResource(const GGUUID& param1);
    void IsMounted(bool* param1);
    void IsPlayer(bool* param1, bool* param2, bool* param3);
    void IsPlayerCamera(bool* param1);
    bool IsVisible();
    void Kill(const DamageTypeResource* param1, const InstigatorData* param2);
    void KillPart(AttackEventLink* param1, EAttackEventLinkType param2, const Entity* param3, const DestructibilityPart* param4, const WorldPosition& param5, const Vec3& param6, const DamageTypeResource* param7);
    bool NetIsOwner();
    void PlaceOnWorldTransform(const WorldTransform& param1, bool param2);
    void Remove(bool param1);
    void ResetPbd();
    void SetAngularVelocity(const Vec3& param1);
    void SetAttackEvent(AttackEventLink* param1);
    void SetDefaultFaction();
    void SetDispensable(const DispensableCategoryResource* param1);
    void SetFaction(const AIFaction* param1);
    void SetHealth(float param1);
    void SetInstigator(const InstigatorData* param1);
    void SetInvulnerable(bool param1);
    void SetMaterialLayerEnabled(const tchar* param1, bool param2);
    void SetParent(Entity* param1, bool param2);
    void SetParentAndAttachToHelper(Entity* param1, const tchar* param2, bool param3);
    void SetShadowCastingEnabled(bool param1, bool param2);
    void SetSleeping(bool param1, bool param2);
    void SetVelocity(const Vec3& param1);
    void SetVisible(bool param1);
    void SetWorldTransform(const WorldTransform& param1);
    bool SharesEntityResource(const Entity* param1);
};

class AIUsableComponent {
public:
    static void ImmediateAttach(Entity* param1, Entity* param2);
};

class DSDebugEntryCommand {
public:
    static void DebugEntryConnectRoad(const GGUUID& param1, const GGUUID& param2);
    static void DebugEntryGetInt(const tchar* param1, int& param2);
    static void DebugEntryGetUUID(const tchar* param1, GGUUID& param2);
    static void DebugEntryIsNilUUID(const tchar* param1, bool* param2);
    static void DebugEntrySetInt(const tchar* param1, int param2);
    static void DebugEntrySetUUID(const tchar* param1, const GGUUID& param2);
    static bool DebugIsNilUUID(const GGUUID& param1);
    static GGUUID DebugNilUUID();
};

class FocusComponent {
public:
    bool CanActivateFocusMode();
    void ClearTaggedObjects(bool param1, bool param2, bool param3);
    Array_WorldPosition GetAllFocusAlertSignalPositionsInRange();
    void GetFocusAlertState(int& param1, float& param2);
    Entity* GetFocusedEntity();
    bool IsFocusModeActive();
    bool IsScanningFocusAlert();
    void SetEntityPatrolPathTagged(Entity* param1, bool param2);
    void SetEntityTagged(Entity* param1, bool param2);
    void SetFocusModeActive(bool param1);
    void SetFocusModeEnabled(bool param1);
    void SetTrackingPathTagged(TrackingPath* param1, bool param2);
};

class DSMissionInfo {
public:
    static float GetBaggageDamageMinRate(const DSMissionInfo* param1, bool param2);
    static int32 GetClearMinTime(const DSMissionInfo* param1, bool param2);
    static float GetDeliveredTotalMaxWeightBaggage(const DSMissionInfo* param1);
    static float GetDeliveredTotalMinWeightBaggage(const DSMissionInfo* param1, bool param2);
    static float GetDeliveredTotalWeightBaggage(const DSMissionInfo* param1);
    static float GetDeliveredTotalWeightRateBaggage(const DSMissionInfo* param1);
    static int GetDeliveryCount(const DSMissionInfo* param1);
    static float GetDeliveryCountRate(const DSMissionInfo* param1);
    static int GetDeliveryMaxCount(const DSMissionInfo* param1);
    static double GetElapsedTime(const DSMissionInfo* param1);
    static float GetElapsedTimeRate(const DSMissionInfo* param1, bool param2);
    static EDSEvaluationType GetEvaluationType(const DSMissionInfo* param1);
    static bool GetGoalDeliveryPointPosition(const DSMissionInfo* param1, WorldPosition& param2);
    static const DSHouseholdInfoResource* GetHouseholdInfoResourceOfTheClient(const DSMissionInfo* param1);
    static EDSDifficulty GetLowestDifficulty(const DSMissionInfo* param1);
    static int GetMinCountBaggage(const DSMissionInfo* param1, bool param2);
    static EDSMissionCategory GetMissionCategory(const DSMissionInfo* param1);
    static uint64 GetMissionId(const DSMissionInfo* param1);
    static float GetMovingDistanceXY(const DSMissionInfo* param1);
    static float GetMovingDistanceXYRate(const DSMissionInfo* param1);
    static float GetMovingDistanceXYZ(const DSMissionInfo* param1);
    static const DSMissionReward2* GetReward2(const DSMissionInfo* param1);
    static const DSMissionSpecialReportResource* GetSpecialReportOnPlace(const DSMissionInfo* param1);
    static bool GetStartDeliveryPointPosition(const DSMissionInfo* param1, WorldPosition& param2);
    static bool GetStartToGoalPointDistance(const DSMissionInfo* param1, float& param2);
    static float GetTotalDeliveryBaggageDamageRate(const DSMissionInfo* param1);
    static bool IsAutomation(const DSMissionInfo* param1);
    static bool IsCheckStartAndGoalDeliveryPointInfo(const DSMissionInfo* param1, bool param2);
    static bool IsChiralMission(const DSMissionInfo* param1);
    static bool IsDeliveryBBPod(const DSMissionInfo* param1);
    static bool IsDisableFriendshipResult(const DSMissionInfo* param1);
    static bool IsDynamicMission(const DSMissionInfo* param1);
    static bool IsEnableDistanceMeasurementMission(const DSMissionInfo* param1);
    static bool IsLostObjectMission(const DSMissionInfo* param1);
    static bool IsLostPersonalObjectMission(const DSMissionInfo* param1);
    static bool IsNoDelivery(const DSMissionInfo* param1);
    static bool IsOnlineMission(const DSMissionInfo* param1);
    static bool IsPremium(const DSMissionInfo* param1);
    static bool IsSimpleMission(const DSMissionInfo* param1);
    static bool IsSimpleMissionOfStatic(const DSMissionInfo* param1);
    static bool IsSupplyMission(const DSMissionInfo* param1);
};

class CraftingComponent {
public:
    void CraftRecipeForFree(const GGUUID& param1, int param2);
    void UnlockRecipe(const GGUUID& param1, bool param2);
};

class DSMissionConditionResourceBase {
public:
    static float GetBaggageDamageMinRate(const DSMissionConditionResourceBase* param1);
    static int32 GetClearMinTime(const DSMissionConditionResourceBase* param1);
    static EDSMissionConditionType GetConditionType(const DSMissionConditionResourceBase* param1);
    static float GetCumulativeMinDamage(const DSMissionConditionResourceBase* param1);
    static const DSMissionEvaluationDataTable* GetEvaluationDataTable(const DSMissionConditionResourceBase* param1);
    static int GetMaxDonationCount(const DSMissionConditionResourceBase* param1);
    static uint8 GetMinCountBaggage(const DSMissionConditionResourceBase* param1);
    static float GetMinDistance(const DSMissionConditionResourceBase* param1);
    static float GetMinWeightBaggage(const DSMissionConditionResourceBase* param1);
    static const DSMissionSpecialReportResource* GetSpecialReport(const DSMissionConditionResourceBase* param1);
};

class GameSettings {
public:
    EHealthRegenerationSettings GetHealthRegenerationSettings();
    EPlayerHealthSettings GetPlayerHealthSettings();
};

class HitReactions {
public:
    static void ModifyReactionDuration(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, const HitReactionResource* param3, float param4);
    static void ModifyReactionThreshold(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, const HitReactionResource* param3, float param4);
    static void ModifySeverityDecay(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, float param3, float param4, bool param5);
    static void ResetHitReactionByDamage(HitReactionComponent* param1, const DamageTypeResource* param2);
};

class FactMusicPreset {
public:
    String GetExitPresetName();
    EnumFactEntry* GetFactValue();
    void GetInfo(float param1, EnumFactEntry* param2, bool* param3, bool* param4, float* param5, float* param6, float* param7);
    String GetPresetName();
};

class DSMissionEvaluationDataRecord {
public:
    static float GetGreaterThan(const DSMissionEvaluationDataRecord* param1);
    static float GetLike(const DSMissionEvaluationDataRecord* param1);
    static EDSRewardRank GetRewardRank(const DSMissionEvaluationDataRecord* param1);
};

class DSMissionReward2 {
public:
    static const DSMissionBaggageCountConditionResource* FindBaggageCountConditionResource(const DSMissionReward2* param1, bool param2);
    static const DSMissionBaggageWeightConditionResource* FindBaggageWeightConditionResource(const DSMissionReward2* param1, bool param2);
    static const DSMissionConditionResourceBase* FindConditionResource(const DSMissionReward2* param1, EDSMissionConditionType param2, bool param3);
    static const DSMissionSafeConditionResource* FindSafetyConditionResource(const DSMissionReward2* param1, bool param2);
    static const DSMissionServiceConditionResource* FindServiceConditionResource(const DSMissionReward2* param1, bool param2);
    static const DSMissionSpeedConditionResource* FindSpeedConditionResource(const DSMissionReward2* param1, bool param2);
    static float GetBaggageDamageMinRate(const DSMissionReward2* param1, bool param2);
    static int32 GetBaseLike(const DSMissionReward2* param1);
    static int32 GetClearMinTime(const DSMissionReward2* param1, bool param2);
    static const DSMissionSpecialReportResource* GetCustomSpecialReportFromIndex(const DSMissionReward2* param1, int param2);
    static int GetCustomSpecialReportsLength(const DSMissionReward2* param1);
    static const DSMissionEvaluationDataTable* GetEvaluationDataTableRouteDeviation(const DSMissionReward2* param1);
    static const DSMissionEvaluationDataTable* GetEvaluationDataTableTotalBaggageDamage(const DSMissionReward2* param1);
    static EDSEvaluationType GetEvaluationType(const DSMissionReward2* param1);
    static uint8 GetMinCountBaggage(const DSMissionReward2* param1, bool param2);
    static float GetMinWeightBaggage(const DSMissionReward2* param1, bool param2);
    static int32 GetNeedBaggageCountForPremium(const DSMissionReward2* param1);
    static float GetNeedBaggageDamageRateForPremium(const DSMissionReward2* param1);
    static float GetNeedBaggageWeightForPremium(const DSMissionReward2* param1);
    static int32 GetNeedClearTimeForPremium(const DSMissionReward2* param1);
    static float GetPlayerMinDamage(const DSMissionReward2* param1, bool param2);
    static bool IsEnableSpecialReportDelicateDelivery(const DSMissionReward2* param1);
    static bool IsEnableSpecialReportLand(const DSMissionReward2* param1);
    static bool IsRouteEvaluation(const DSMissionReward2* param1);
};

class DamageTypeResource {
public:
    bool IsKindOfDamage(const DamageTypeResource* param1);
};

class DSPlayerSystem {
public:
    static void ActivateAdrenalinMode();
    static void ActivateOdradek();
    static void AddAmmoToInventorySetting(EDSAmmoId param1, int param2, int param3);
    static void AddChiralCrystalCount(int32 param1);
    static void AddItemToInventorySetting(EDSItemId param1);
    static void AddOdradekReactionPoint(uint32 param1, WorldPosition param2);
    static void AddOnlyPaintRecordToFootForM00030();
    static void AddSuitParts(EDSSuitPartsId param1);
    static void AddSuitPartsToInventorySetting(EDSSuitPartsId param1);
    static void AddWeapon(EDSWeaponId param1);
    static void AddWeaponToInventorySetting(EDSWeaponId param1);
    static void ApplyInventorySetting();
    static void ClearHighPrioReturnTransformAfterAnnihilationAttack();
    static void ClearInventorySetting();
    static void ClearPaint(bool param1);
    static void CreateCryptobiosisOfReturningFromKnotSpace();
    static void DebugPlaySequenceOfReturningFromKnotSpace();
    static bool DidGoodActionForBBFromScript(uint32 param1, float param2);
    static bool DidGoodActionForBBFromSpecifiedEntity(const Entity* param1);
    static bool DoesHaveBaggage(uint32 param1, bool param2);
    static void EndConstructionCheck(EDSConstructionPointCategory param1);
    static void EndGhostAction();
    static void EndSignboardCheck();
    static void EquipEquipment(EDSSuitPartsId param1, bool param2);
    static void FloatAndMovePlayer(const Vec3& param1, float param2, float param3, float param4, float param5);
    static int32 GetBBAffectionPoint();
    static void GetBaggageInfo(uint32 param1, bool* param2, float* param3, float* param4, float* param5);
    static void GetBareFootDamage(bool param1, EDSBareFootDamageType* param2);
    static float GetBloodAllPaintValue();
    static float GetBloodPaintValue(bool param1);
    static float GetBloodSpherePaintValue(bool param1);
    static void GetGameActorIdOfPlayerVehicle(int& param1, int& param2);
    static float GetMudsAllPaintValue();
    static float GetMudsPaintValue(bool param1);
    static float GetMudsSpherePaintValue(bool param1);
    static void GetNailDamage(bool param1, EDSBareFootNailDamageType* param2);
    static Entity* GetOdradekArmEntity();
    static Entity* GetOdradekBodyEntity();
    static void GetPlayerInfo(float* param1, float* param2, float* param3, float* param4, float* param5, float* param6, float* param7, float* param8, float* param9, EDSPlayerShoesType* param10, float* param11, float* param12, bool* param13, float* param14, float* param15, float* param16, EDSPlayerStanceExported* param17, EDSPlayerMoveTypeExported* param18, EDSPlayerActionStateExported* param19, int* param20, int* param21, bool* param22, bool* param23, float* param24, bool* param25);
    static float GetTarAllPaintValue();
    static float GetTarPaintValue(bool param1);
    static float GetTarSpherePaintValue(bool param1);
    static bool IsEquippedEquipment(EDSSuitPartsId param1);
    static bool IsHadEquipment(EDSSuitPartsId param1);
    static bool IsHadItem(EDSItemId param1);
    static void OpenHandcuffDevice();
    static void OpenTerminalTopMenuAtLastTerminal();
    static void OverrideReturnFromKnotSpaceSequence(int param1, int param2);
    static void PlayPlayerVoice(const String& param1);
    static void PlayerGetFloorMaterialTypeResource(MaterialTypeResource** param1, int* param2);
    static void PlayerVehicleIsOnRoad(bool* param1);
    static void PopWorldTransform();
    static void PopWorldTransformAtEndOfSequence();
    static void PrepareToDeliverMama(int32 param1);
    static void PushWorldTransform();
    static void ReadyCryptobiosisOfReturningFromKnotSpace();
    static void RecoverBattery();
    static void RecoverFull(bool param1);
    static void RecoverOrSupplyShoes();
    static void RegisterActionIconInfo(const WorldTransform& param1, uint32 param2, EDSPadGameButtonType param3, EDSUIActionLocalizedId param4, uint32 param5, bool param6);
    static void RegisterMissionMessageEvent(int32 param1, EDSPlayerMissionMessageEventType param2, uint64 param3, int32 param4, int32 param5, int32 param6, int32 param7);
    static void RemoveOdradekReactionPoint(uint32 param1);
    static void RemoveWeapon(EDSWeaponId param1);
    static bool RequestBBPodBagCry();
    static void RequestMoveTo(const WorldTransform& param1, EDSPlayerMoveTypeExported param2, EDSPlayerStanceExported param3, int param4, int param5, float param6, uint64 param7);
    static void ResetHoodAndBalloon();
    static void ResetOverrideBlackSamPointGroupName();
    static void ResetPlayerPadMask(uint32 param1);
    static void RideOffVehicleForcibly();
    static void SendDSPlayerMessage(uint32 param1, int param2, float param3, const WorldTransform& param4, const Vec3& param5);
    static void SetAmountOfWaterInBottle(float param1);
    static void SetBBAffectionPointForDebugEntry(int32 param1);
    static void SetBBStressByRate(float param1);
    static void SetChiralCrystalCount(int32 param1);
    static void SetDeath(bool param1, const WorldTransform& param2);
    static void SetHiggsPhase3Transform(const WorldTransform& param1);
    static void SetHighPrioReturnTransformAfterAnnihilationAttack(const WorldTransform& param1);
    static void SetInitialState(int param1, const GGUUID& param2, const WorldTransform& param3, float param4, float param5);
    static void SetOdradekStateAfterSequence(int param1, int param2);
    static void SetOverrideBlackSamPointGroupName(const String& param1);
    static void SetPlayerPadMask(uint32 param1, bool param2, const DSPlayerPadCheckBoxes& param3);
    static void SetShoesForcibly(EDSPlayerShoesType param1);
    static void SetShoesLife(float param1);
    static void SetShoesLifeByRate(float param1);
    static void SetStateAfterSequence(int param1, const WorldTransform& param2, const GGUUID& param3, int param4);
    static void StartConstructionCheck(float param1, EDSConstructionPointCategory param2);
    static void StartGhostAction();
    static void StartSignboardCheck(float param1);
    static void UnequipAccessories();
    static void UnregisterActionIconInfo(uint32 param1);
    static void UnregisterMissionMessageEvent(int32 param1);
};

class DSMissionSystem {
public:
    static const DSMissionInfo* FindMissionInfoFromId(uint64 param1);
    static Array_cptr_DSDeliveryPointInfoResource GetDeliveryPointInfoResources();
    static void KillOverrideEvaluationActingType();
};

class DispensableEntityManager {
public:
    static void RemoveDispensableEntities(const DispensableCategoryResource* param1);
    static void RemoveDispensableEntitiesInTrigger(const DispensableCategoryResource* param1, const CollisionTrigger* param2);
};

class DSDebugPrintString {
public:
    static void PrintString(const tchar* param1, bool param2, bool param3, const FRGBAColor& param4, float param5);
};

class DSMissionCheckCommand {
public:
    static bool HasTimerMission(const GGUUID& param1);
};

class AIDirectableAgent {
public:
    void AddAreaRestriction(const NavMeshArea* param1);
    void CancelOrders();
    void ClearAreaRestriction();
    void EndCommandSequence();
    void HTNFactAddDouble(double param1);
    void HTNFactAddHtnSymbol(const HtnSymbol* param1);
    void HTNFactAddInt(int64 param1);
    void HTNFactAddObject(RTTIRefObject* param1);
    void HTNFactAddSymbol(const tchar* param1);
    void HTNFactAddSymbols(const tchar* param1);
    void HTNFactAddWorldPosition(const WorldPosition& param1);
    void HTNFactBegin();
    void HTNFactBeginList();
    void HTNFactEndList();
    void HTNFactForget();
    void HTNFactRemember(float param1);
    void HTNFactSubmitAsOrder(ECommandPriority param1);
    void RemoveAreaRestriction(const NavMeshArea* param1);
    void SetAreaRestriction(const NavMeshArea* param1);
    void SetCommandPriority(ECommandPriority param1);
    void StartCommandSequence();
};

class NodeGraph {
public:
    static void Alert(const tchar* param1, bool param2);
    static void AlertWithName(const tchar* param1, const tchar* param2, const tchar* param3, bool param4);
    static void Assert(const GGUUID& param1, const tchar* param2, const tchar* param3);
    static void FlushIntermediateOutputProbes(const uint64* param1, int param2, const void* param3, const void* param4);
    static const GGUUID& GetObjectUUID(const RTTIRefObject* param1);
    static void* InstantiateRTTI(const RTTI* param1);
    static bool IsProfiling();
    static void MarkBeginNode(const tchar* param1, const uint64* param2, int param3, const void* param4, const void* param5);
    static void MarkEndNode(const uint64* param1, int param2, const void* param3, const void* param4);
    static void OnStateMachineStateProbe(const uint64* param1, uint32 param2);
    static void OnStateMachineStateTransition(const uint64* param1, uint32 param2, uint32 param3, uint32 param4);
    static void Trace(const GGUUID& param1, const tchar* param2);
};

class DSFixedGunGameActorLocator {
public:
    void DestroyFixedGun(int param1);
    void HideFixedGun();
    void ResetFixedGun();
    void ShowFixedGun();
};

class UDSSystem {
public:
    static UDSEventMechanicUse* MechanicUse(const String& param1);
    static UDSEventSetFloatStat* SetFloatStat(const String& param1, float param2);
    static UDSEventSetIntStat* SetIntStat(const String& param1, int32 param2);
    static UDSEventSetFloatStat* SetTrophyFloatStat(const GGUUID& param1, float param2);
    static UDSEventSetIntStat* SetTrophyIntStat(const GGUUID& param1, int32 param2);
    static UDSEventSetUintStat* SetTrophyUintStat(const GGUUID& param1, uint32 param2);
    static UDSEventSetUintStat* SetUintStat(const String& param1, uint32 param2);
};

class AnimationManager {
public:
    int GetAnimationEventID(const tchar* param1);
    int GetAnimationTagID(const tchar* param1);
    bool GetBoolAnimationVariable(int param1);
    float GetFloatAnimationVariable(int param1);
    Vec3 GetVec3AnimationVariable(int param1);
    Vec4 GetVec4AnimationVariable(int param1);
    int InitBoolAnimationVariable(const tchar* param1);
    int InitFloatAnimationVariable(const tchar* param1);
    int InitVec3AnimationVariable(const tchar* param1);
    int InitVec4AnimationVariable(const tchar* param1);
    bool IsEventActive(int param1, float* param2);
    bool IsTagActive(int param1);
    void SetBoolAnimationVariable(int param1, bool param2);
    void SetFloatAnimationVariable(int param1, float param2);
    void SetVec3AnimationVariable(int param1, const Vec3& param2);
    void SetVec4AnimationVariable(int param1, const Vec4& param2);
    void TriggerBoolAnimationVariable(int param1, float param2);
};

class TalkComponent {
public:
    void GetOutputLevel(float& param1, float& param2);
    bool IsTalking();
    bool PlaySentence(const SentenceResource* param1, EAlertLevel param2, const TalkPriority* param3);
    bool PlaySentenceGroup(const SentenceGroupResource* param1, EAlertLevel param2, const TalkPriority* param3);
    bool Say(const AISignalType* param1, EAlertLevel param2);
};

class DSPlayerEntity {
public:
    void ApplyInventorySetting();
    static void CartGameActorIdToEntity(int param1, Entity** param2);
    static void CartIsInTarSwamp(Entity* param1, bool* param2);
    static void ClearBBStressInfoFromHoloCutscene();
    static int32 GetBBAffectionLevel();
    static DSPlayerEntity* GetLocalDSPlayerEntity();
    static bool GetPlayerParameterBool(uint32 param1);
    static float GetPlayerParameterFloat(uint32 param1);
    static int32 GetPlayerParameterInt(uint32 param1);
    static Vec3 GetPlayerParameterVec3(uint32 param1);
    static WorldPosition GetPlayerParameterWorldPosition(uint32 param1);
    static WorldTransform GetPlayerParameterWorldTransform(uint32 param1);
    bool IsPlayerBloodSplashFrame();
    static bool IsPlayerFrost();
    static bool IsPlayerHandFrost();
    static bool IsPlayerLeftLegFrost();
    bool IsPlayerMudSplashFrame();
    static bool IsPlayerRightLegFrost();
    bool IsPlayerTarrySplashFrame();
    bool IsPlayerWaterSprashFrame();
    static void PlayAkukanVoice(int param1);
    static void RecoveryAffectionPointForM00590();
    static void ResetPlayerFrost();
    static void ResetPlayerNail();
    static void SetBBPodBlackRequested();
    static void SetVoicedAlmostThere();
};

class EnvironmentSoundManager {
public:
    static void GetSpawnedInstanceCount(SpawnSoundNodeState* param1, int* param2);
    static void SetSpawnedSoundBoolParameter(SpawnSoundNodeState* param1, const tchar* param2, bool param3);
    static void SetSpawnedSoundFloatParameter(SpawnSoundNodeState* param1, const tchar* param2, float param3);
    static void SetSpawnedSoundIntParameter(SpawnSoundNodeState* param1, const tchar* param2, int param3);
    static void SetSpawnedSoundPressureLevel(SpawnSoundNodeState* param1, const SoundResource* param2, float param3);
    static void SpawnSoundUpdate(const SoundResource* param1, const WorldPosition& param2, bool param3, bool param4, bool param5, SpawnSoundNodeState* param6);
};

class DsGameActorCommand {
public:
    static Entity* DSGetGameActorEntity(uint32 param1);
    static uint32 DSGetGameActorIDByEntity(const Entity* param1);
    static uint32 DSGetGameActorIDByLocatorUUID(const GGUUID& param1);
    static const GGUUID& DSGetGameActorLocatorID(uint32 param1);
    static GameActorLODState DSGetGameActorLodState(uint32 param1, bool* param2);
    static const WorldPosition DSGetGameActorPosition(uint32 param1, bool* param2);
    static const WorldTransform DSGetGameActorTransform(uint32 param1, bool* param2);
    static bool DSIsEqualGameActorType(uint32 param1, EDSGameActorType param2);
};

class DSBaggage2 {
public:
    static float GetAmountRate(const DSBaggage2* param1);
    static EDSGameBaggageListItem_BaggageCaseType GetBaggageCaseType(const DSBaggage2* param1);
    static float GetBaggageWeight(const DSBaggage2* param1);
    static uint8 GetCatalogItemRarity(const DSBaggage2* param1);
    static float GetCoatingLifeRate(const DSBaggage2* param1);
    static EDSGameBaggageListItem_ContentsDamageType GetContentsDamageType(const DSBaggage2* param1);
    static float GetContentsLifeRate(const DSBaggage2* param1);
    static const DSGameBaggageListItem* GetListItem(const DSBaggage2* param1);
    static uint64 GetMissionId(const DSBaggage2* param1);
    static EDSGameBaggageListItem_Volume GetVolumeType(const DSBaggage2* param1);
    static bool IsDelicate(const DSBaggage2* param1);
};

class Player {
public:
    Entity* GetEntity();
    AIFaction* GetFaction();
    Entity* GetLastActivatedCamera();
    static Player* GetLocalPlayer(int param1);
    bool IsLocalHuman();
    void PlaceOn(const WorldTransform& param1);
};

class DSDeliveryPointInfoResource {
public:
    static const DSMissionSpecialReportResource* GetSpecialReportOnPlace(const DSDeliveryPointInfoResource* param1);
    static const WorldPosition& GetWorldPosition(const DSDeliveryPointInfoResource* param1);
};

class PlayerOutfitComponent {
public:
    static void ApplyPlayerOutfit(Entity* param1, const GGUUID& param2);
    static void ApplyPlayerOutfitPart(Entity* param1, const GGUUID& param2);
    static void SetFacePaint(Entity* param1, const GGUUID& param2);
    static void SetPlayerOutfit(Entity* param1, const PlayerOutfitTheme* param2, const PlayerOutfit* param3);
    static void SetShaderEffect(Entity* param1, const GGUUID& param2);
};

class RopeManagerComponent {
public:
    bool Connect(RopeManagerComponent* param1);
};

class DSDataLibraryBasicNode {
public:
    static int DSGetMusicPlayerPlayingMusicId();
    static int DSGetTrackIdFromResource(const DSMusicPlayerTrackResource* param1);
    static bool DSIsOpenTips(const DSTipsResourceBase* param1);
    static bool DSIsPausedMusicPlayer();
    static void DSOpenMusicPlayerTrack(const DSMusicPlayerTrackResource* param1);
    static void DSOpenTips(const DSTipsResourceBase* param1, bool param2, EDSTipsUnlockType param3);
    static void DSOpenTipsByList(const DSTipsResourceList* param1, bool param2, EDSTipsUnlockType param3);
    static void DSPauseMusicPlayer();
    static void DSReserveNextLoadingTips(const DSTipsResourceBase* param1, EDSTipsUnlockType param2);
    static void DSResumeMusicPlayer();
    static void DSStopMusicPlayer();
    static bool IsRaceBgmSelectForSound();
};

class AudioPlayerComponent {
public:
    void PlayAudioLog(const SentenceGroupResource* param1);
};

class DamagePassOnComponent {
public:
    void Detach();
};

class WorldNode {
public:
    Mat44 GetOrientation();
    WorldPosition GetPosition();
    WorldTransform GetWorldTransform();
};

class GameModule {
public:
    static void ClearObserverPositionOverride();
    static void FadeInAfterSkippingSequence(float param1);
    static GameMovie& GetGameMovie();
    static TileBasedStreamingStrategyInstance* GetTileBasedStreamingStrategy();
    static bool IsDLCEnabled(uint param1);
    static bool IsGameLoading();
    static bool IsNewGamePlus();
    static void QuitGame();
    static void ReloadLastSaveGame(float param1);
    static void RequestWaitForAutobot();
    static void ReserveForceExtendedLoadingStateCheck(bool param1);
    static void SetForceExtendedLoadingStateCheck(bool param1);
    static void SetLoadingPauseEnabled(bool param1);
    static void SetObserverPositionOverride(const WorldPosition& param1);
};

class CrowdSpawnManager {
public:
    static void ForceCrowdHighLod(const CrowdZone* param1, bool param2);
    static bool IsInHighLod(const CrowdZone* param1);
};

class AIBehaviorGroup {
public:
    void AddMember(Entity* param1);
    AIGroup* GetAI();
    int GetAliveMemberCount();
    Array_cptr_Entity GetAliveMembers();
    Entity* GetMember(int param1, bool param2);
    const Entity* GetMemberByTag(TagProperty* param1);
    int GetMemberCount();
    void RefillGroup();
    void RemoveGroup();
    void SetFaction(AIFaction* param1);
    void Spawn();
};

class VoiceComponent {
public:
    static void SetVoice(Entity* param1, const VoiceResource* param2);
};

class CoreTelemetryService {
public:
    RTTIRefObject* CreateTelemetryEvent(const RTTIHandleObject* param1);
    static CoreTelemetryService* GetTelemetryService();
    void PostEvent(RTTIRefObject* param1);
};

class DSCliffMissionCommand {
public:
    static int32 Cliff_GetEscapeCount(const GGUUID& param1);
    static void Cliff_OverwriteBattlePointInfo(const GGUUID& param1, const RTTIRefObject* param2);
    static void Cliff_RequestRollCall(const GGUUID& param1, const RTTIRefObject* param2, float param3);
    static bool Cliff_RequestSummonWarriors(const GGUUID& param1, int32 param2);
    static void Cliff_SetAlertPhaseOnlySummonWarriorInfo(const GGUUID& param1, Array_uint& param2);
    static void Cliff_SetNextBattlePoint(const GGUUID& param1, const RTTIRefObject* param2);
    static void Cliff_SetSearchPointByLostWarrior(const GGUUID& param1, const RTTIRefObject* param2, float param3);
    static void Cliff_SetShowCompassMaker(const GGUUID& param1, bool param2);
    static void Cliff_SetSummonWarriorInfo(const GGUUID& param1, int32 param2, Array_uint& param3, Array_uint& param4, Array_uint& param5, Array_uint& param6);
};

class DSCatcherManagerCommand {
public:
    static float GetActiveCatcherHealth();
    static Entity* GetDemoEntity(uint32 param1);
};

class DSDeliveredMemoryChipArgs {
public:
    EDSMajorMember GetBridgesMember();
    int32 GetLikeValue();
};

class AIPerchMarker {
public:
    static void DecreaseReservedForScript(AIPerchMarker* param1);
    static void IncreaseReservedForScript(AIPerchMarker* param1);
};

class OpenMenuSystem {
public:
    static void DisableMenuPage(const GGUUID& param1, const PlayerNotificationResource* param2);
    static void EnableMenuPage(const GGUUID& param1);
};

class DSPlayRecordBasicNode {
public:
    static void AddDeathCountForBridgeLink();
    static void AddDiscoveredOnsenNum(int param1);
    static void AddShowerNum(int param1);
    static void AddStayPrivateRoomNum(int param1);
    static void AddToiletBigNum(int param1);
    static void AddToiletSmallNum(int param1);
    static void GetComprehensiveEvaluation(float* param1, float* param2, float* param3, float* param4);
    static void GetComprehensiveEvaluationLevel(int32* param1, int32* param2, int32* param3, int32* param4);
    static int32 GetEvaluationPreviousServiceRank();
    static void GetTotalMovingDistance(float* param1);
    static void GetUserPlayAbsoluteDeltaTimeSeconds(float* param1);
    static void GetUserPlayAbsoluteTimeSeconds(float* param1);
    static void GetUserPlayInGameDeltaTimeSeconds(float* param1);
    static void GetUserPlayInGameTimeSeconds(float* param1);
    static void GetUserPlayMissionDeltaTimeSeconds(float* param1);
    static void GetUserPlayMissionTimeSeconds(float* param1);
    static void ResetAccumulatePlayerDamage();
    static void ResetDSMissionPlayLog(uint64 param1);
    static void TimeLapseAtPrivateRoom(bool param1);
};

class AIContextHintResource {
public:
    const HtnSymbol* GetHintSymbol();
};

class DSMissionTerminalCommand {
public:
    static void AddMissionBonusToBuffer(uint64 param1, bool param2, uint8 param3);
    static void AddSimpleBonusToBuffer(const DSGameBaggageListItem* param1);
    static bool CanOrderMissionAtDeliveryPoint(const GGUUID& param1);
    static bool CheckDeliveryToNoDemo();
    static bool CheckEntrustToNoDemo();
    static GGUUID DeliveryPointIdToUUID(int param1);
    static void GetAccessingTerminalId(int* param1);
    static void GetMissionBonusInfo(uint64 param1, bool* param2, int* param3);
    static void HasCanDeliveryBaggage(const GGUUID& param1, bool* param2);
    static void RemoveDeadbodyBagForCrematorium();
    static void SetStarMarkBonus();
};

class BulletTimeComponent {
public:
    bool IsInBulletTime();
};

class DsHiggsGraphCommand {
public:
    static void Higgs_SetInitialPhase(int param1);
};

class DSMailBasicNode {
public:
    static void FindMailStatus(const GGUUID& param1, EDSMailInfoStatus* param2);
    static void RequestAllMailRecive();
    static void RequestMailSending(const GGUUID& param1, bool param2, bool param3);
};

class DSMissionMiscCommand {
public:
    static void ChangePathRecordStraightMode(bool param1);
    static void DSNotifyEndInGameSequence(const DSStringHashResource* param1);
    static void DSNotifyEndSequence(const DSStringHashResource* param1);
    static void DSNotifyStartInGameSequence(const DSStringHashResource* param1, EDSCutsceneStateAttr param2);
    static void DSNotifyStartSequence(const DSStringHashResource* param1, EDSCutsceneStateAttr param2);
    static void DisposalOnlineMissionsInTargetCPArea(const GGUUID& param1);
    static void GetHeartmanRoomBlackBoardFromCpp(int* param1, int* param2, int* param3, bool* param4);
    static void GetPrivateRoomBlackBoardFromCpp(int* param1, int* param2, int* param3, bool* param4);
    static void NotifyBeatBoss(bool param1);
    static void NotifyBossBattle(bool param1);
    static void NotifyDirectIntoPrivateRoom(bool param1);
    static void NotifyStartSequenceToFillGap(uint8 param1);
    static void NotifyStayPrivateRoom(bool param1);
    static void RequestLoadingScreen();
    static void SetHeartmanRoomBlackBoard(int param1, int param2, int param3, int param4, int param5);
    static void SetPrivateRoomBlackBoard(int param1, int param2, int param3, int param4, int param5);
    static void SwitchSection(const DSMissionSwitchSectionSetting* param1);
};

class Inventory {
public:
    InventoryItem* AddItem(const EntityResource* param1, int param2, bool param3, bool param4);
    int GetItemAmount(const EntityResource* param1);
    Array_cptr_InventoryItem GetItems(const EntityResource* param1);
    void RemoveAllItems();
    bool RemoveItem(const EntityResource* param1, int param2, bool param3, bool param4);
};

class AttachToHelperPositionMover {
public:
    static AttachToHelperPositionMover* Create(Entity* param1, const String& param2, const Vec3& param3);
};

class DSBaggage2Manager {
public:
    static void AddBaggageToDeliveryPoint(int param1, EDSBaggage2SlotType param2, const GGUUID& param3);
    static void AddBaggageToPlayer(uint32 param1, EDSBaggage2SlotType param2, const GGUUID& param3, bool param4);
    static void AddBaggageToPlayerByGameActorId(uint32 param1, EDSBaggage2SlotType param2, const GGUUID& param3, bool param4);
    static void AddBaggageToTemporaryList(int param1);
    static void AddBaggagesToTemporaryList(Array_int& param1);
    static void BreakBaggage(int param1, bool param2, bool param3, const Vec3& param4);
    static void ClearTemporaryList();
    static void CreateAndAddBaggageToDeliveryPoint(int param1, EDSBaggage2SlotType param2, const GGUUID& param3);
    static void CreateAndAddBaggageToPlayer(uint32 param1, EDSBaggage2SlotType param2);
    static void CreateBaggage(uint32 param1, const WorldTransform& param2);
    static void DeleteBaggage(int param1);
    static void DeleteDeliveredBaggages();
    static bool DoesExistBaggageWithName(uint32 param1);
    static void ExtractBaggageInfo(int param1, uint64* param2, int* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, int* param9, int* param10, bool* param11, int* param12, int* param13, int* param14, EDSBaggage2CarrierType* param15, WorldPosition* param16, EDSBaggage2SlotType* param17, int* param18, EDSWeaponId* param19, EDSItemId* param20, EDSGameBaggageListItem_Volume* param21, EDSGameBaggageListItem_BaggageCaseType* param22);
    static void GetAllBaggages(int param1, Array_int* param2, bool param3, bool param4);
    static void GetBaggageParameterBool(int param1, uint32 param2, bool* param3);
    static void GetBaggagesInCollisionTrigger(const CollisionTrigger* param1, bool param2, Array_int* param3);
    static void GetBaggagesInRange(const WorldPosition& param1, float param2, Array_int* param3);
    static void GetBaggagesInTerminalArea(uint32 param1, bool param2, bool param3, Array_int* param4);
    static void GetDistanceFromBaggageToPlayer(uint32 param1, float* param2);
    static void GetGameActorIdFromBaggageName(uint32 param1, int* param2);
    static void GetMaterialCountFromBaggageActorIdArray(Array_int& param1, int* param2);
    static void GetNoDraggedCartInCollisionTrigger(const CollisionTrigger* param1, Array_int* param2);
    static void MoveBaggageToPlayer(uint32 param1, EDSBaggage2SlotType param2);
    static void MoveBaggagesWithTerminalShelf(bool param1);
    static void MoveDeliveredBaggagesWithTerminalShelf(bool param1);
    static void PlaceTemporaryListBaggagesAroundPlayer(bool param1);
    static void PlaceTemporaryListBaggagesAroundPosition(const WorldPosition& param1, bool param2);
    static void PutNuclearToBackpackOrField();
    static void SetAreaChangeInfo(EDSArea param1, EDSAreaChangeReason param2, const GGUUID& param3, const GGUUID& param4);
    static void SetBaggageUnrealizedAreaUntilPlayerLeave(const WorldPosition& param1);
    static void SetFirstCursorBaggage(uint32 param1);
};

class MortallyWoundedComponent {
public:
    bool IsMortallyWounded();
    void Revive();
};

class DSJointAimToBaseComponent {
public:
    void AimToPlayer(bool param1);
    void OverrideGain(float param1);
    void ResetAndAimSlowly(float param1, float param2);
    void ResetGain();
    void SetActive(bool param1);
    void StartAim();
    void StopAim();
};

class FocusTargetComponent {
public:
    bool IsEntityBeingScanned();
    bool IsEntityScanned();
    bool IsEntityTagged();
    bool IsEntityTaggedByFocusMode();
};

class AIIndividual {
public:
    void DecrementIgnoreOrderCount();
    void ForceAlertLevelNoThreats();
    Array_cptr_AIAttack GetAttacks();
    EExposedCombatSituationSummary GetCombatSituationSummary();
    void IncrementIgnoreOrderCount();
    void RaiseAlertLevel(EAlertLevel param1);
    void UseOnlyAttack(const AIAttack* param1);
};

class DSMissionSpecialReportResource {
public:
    static float GetCustomParam01(const DSMissionSpecialReportResource* param1);
    static float GetCustomParam02(const DSMissionSpecialReportResource* param1);
    static const DSMissionEvaluationDataTablesByDeliveryPoint* GetDataTablesByDeliveryPoint(const DSMissionSpecialReportResource* param1);
    static const DSMissionEvaluationDataTablesByThreshold* GetDataTablesByThreshold(const DSMissionSpecialReportResource* param1);
    static EDSEvaluationType GetEvaluationType(const DSMissionSpecialReportResource* param1);
    static const DSMissionEvaluationDataTable* GetMissionEvaluationDataTable(const DSMissionSpecialReportResource* param1);
    static int32 GetRewardLike(const DSMissionSpecialReportResource* param1);
    static const DSStringHashResource* GetSpecialReportHash(const DSMissionSpecialReportResource* param1);
    static bool IsMissionCondition(const DSMissionSpecialReportResource* param1);
    static bool IsMissionMenuView(const DSMissionSpecialReportResource* param1);
    static bool IsMissionMenuViewForcedDisable(const DSMissionSpecialReportResource* param1);
    static bool IsRewardLike(const DSMissionSpecialReportResource* param1);
};

class SpawnSetupNonPlaceholder {
public:
    static bool WasSpawnedThroughSpawnSetup(const Entity* param1, const GGUUID& param2);
};

class GCore {
public:
    static bool CalculateWaterDepth(const WorldPosition& param1, float& param2, float& param3);
    static void Dismount(Entity* param1, bool param2);
    static void EntityImpactEffect(Entity* param1, const MaterialTypeResource* param2, const tchar* param3, bool param4, const Vec3& param5, const Vec3& param6, EPhysicsCollisionLayerGame param7);
    static bool IntersectLine(const WorldPosition& param1, const WorldPosition& param2, EPhysicsCollisionLayerGame param3, const Entity* param4, bool param5, WorldPosition* param6, Vec3* param7, float* param8, Entity** param9, const MaterialTypeResource** param10);
    static bool IntersectSphere(const WorldPosition& param1, float param2, EPhysicsCollisionLayerGame param3);
    static bool IntersectSweptSphere(const WorldPosition& param1, const WorldPosition& param2, float param3, EPhysicsCollisionLayerGame param4);
    static void Sound_ActivateSoundMixState(Entity* param1, const SoundMixStateResource* param2, bool param3);
    static void Sound_AddSound(Entity* param1, const SoundResource* param2, bool param3, const tchar* param4, bool param5, EntitySoundNodeState** param6, int* param7);
    static void Sound_CreateSound(Entity* param1, const SoundResource* param2, bool param3, const tchar* param4, bool param5, SoundShape param6, int* param7, bool param8);
    static void Sound_FlushSounds(Entity* param1, EntitySoundNodeState** param2);
    static void Sound_GetBoolParameterHandle(Entity* param1, const tchar* param2, int* param3);
    static void Sound_GetFloatParameterHandle(Entity* param1, const tchar* param2, int* param3);
    static void Sound_GetIntParameterHandle(Entity* param1, const tchar* param2, int* param3);
    static void Sound_GetSoundComponentUniqueID(Entity* param1, uint32* param2);
    static void Sound_PlayOneShotSound(Entity* param1, const SoundResource* param2, bool param3, const tchar* param4, SoundShape param5);
    static void Sound_PlayOneShotSoundWithOffset(Entity* param1, const SoundResource* param2, const tchar* param3, const Vec3& param4, SoundShape param5);
    static void Sound_SetBoolParameter(Entity* param1, int param2, bool param3);
    static void Sound_SetFloatParameter(Entity* param1, int param2, float param3);
    static void Sound_SetIntParameter(Entity* param1, int param2, int param3);
    static void Sound_SetListenerTransform(bool param1, const WorldTransform& param2);
    static void Sound_SetRelativePosition(Entity* param1, int param2, const Vec3& param3);
    static void Sound_UpdateSound(Entity* param1, int param2, bool param3, bool* param4);
    static void Sound_UpdateSounds(Entity* param1, EntitySoundNodeState** param2, bool param3, bool* param4);
};

class DefendAreaUserComponent {
public:
    static void SetDefendAreaSet(Entity* param1, const AIDefendAreaSet* param2, const AIDefendArea* param3, const tchar* param4);
};

class GraphProperty {
public:
    static bool GetBool(const PropertyContainer* param1, const BoolPropertyBase* param2, int* param3, bool& param4);
    static bool GetEntityInstance(const PropertyContainer* param1, EntityInstancePropertyBase* param2, int* param3, Entity** param4);
    static bool GetFloat(const PropertyContainer* param1, const FloatPropertyBase* param2, int* param3, float& param4);
    static bool GetInt(const PropertyContainer* param1, const IntPropertyBase* param2, int* param3, int& param4);
    static bool GetVec3(const PropertyContainer* param1, const Vec3PropertyBase* param2, int* param3, Vec3& param4);
    static bool GetWorldPosition(const PropertyContainer* param1, const WorldPositionPropertyBase* param2, int* param3, WorldPosition& param4);
    static bool HasTagInResource(const PropertyContainerResource* param1, const BoolPropertyBase* param2, int* param3, bool& param4);
    static bool SetBool(PropertyContainer* param1, const BoolPropertyBase* param2, int* param3, bool& param4);
    static bool SetEntityInstance(PropertyContainer* param1, EntityInstancePropertyBase* param2, int* param3, const Entity* param4);
    static bool SetFloat(PropertyContainer* param1, const FloatPropertyBase* param2, int* param3, float& param4);
    static bool SetInt(PropertyContainer* param1, const IntPropertyBase* param2, int* param3, int& param4);
    static bool SetVec3(PropertyContainer* param1, const Vec3PropertyBase* param2, int* param3, Vec3& param4);
    static bool SetWorldPosition(PropertyContainer* param1, const WorldPositionPropertyBase* param2, int* param3, WorldPosition& param4);
};

class DSMissioDebugUnlockAllItemsCommand {
public:
    static void UnlockAllItems();
};

class Throwable {
public:
    WorldPosition GetTargetPosition();
    const Entity* GetThrower();
    void SetThrower(const Entity* param1);
};

class WorldData {
public:
    static const WorldDataType* GetDataType(const tchar* param1);
    static const WorldDataTile* GetWorldDataTileForPosition(const WorldPosition& param1);
    static bool SampleAtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, void* param3, int param4);
    static void SampleFloatAtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, float* param3, WorldDataSampleRequestState** param4);
    static void SampleFloatAtWorldPositionImmediate(const WorldDataType* param1, const WorldPosition& param2, float* param3);
    static void SampleFloatWithinTile(const WorldDataType* param1, const WorldDataTile* param2, const Vec3& param3, float* param4);
    static void SampleVec3AtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, Vec3* param3);
    static void SampleVec4AtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, Vec4* param3);
    static void SampleWithinTile(const WorldDataType* param1, const WorldDataTile* param2, const Vec3& param3, void* param4, int param5);
    static void ScaleToRange(const WorldDataType* param1, float param2, float* param3);
};

class CountdownTimer {
public:
    void AdjustTimeElapsed(float param1);
    void AdjustTimeRemaining(float param1);
    float GetTimeElapsed();
    float GetTimeRemaining();
    bool IsTimerRunning();
    void PauseTimer();
    void ResetTimer();
    void SetBlinkStartTime(float param1);
    void SetVisible(bool param1);
    void StartTimer();
};

class FactDatabase {
public:
    static bool GetBooleanFact(const RTTIRefObject* param1, const BooleanFact* param2);
    static bool GetBooleanFactWithUUID(const GGUUID& param1, const BooleanFact* param2);
    static const EnumFactEntry* GetEnumFact(const RTTIRefObject* param1, const EnumFact* param2);
    static const EnumFactEntry* GetEnumFactWithUUID(const GGUUID& param1, const EnumFact* param2);
    static float GetFloatFact(const RTTIRefObject* param1, const FloatFact* param2);
    static float GetFloatFactWithUUID(const GGUUID& param1, const FloatFact* param2);
    static int GetIntegerFact(const RTTIRefObject* param1, const IntegerFact* param2);
    static int GetIntegerFactWithUUID(const GGUUID& param1, const IntegerFact* param2);
    static Vec3 GetVec3Fact(const RTTIRefObject* param1, const Vec3Fact* param2);
    static Vec3 GetVec3FactWithUUID(const GGUUID& param1, const Vec3Fact* param2);
    static void IncrementFloatFact(const RTTIRefObject* param1, const FloatFact* param2, float param3);
    static void IncrementIntegerFact(const RTTIRefObject* param1, const IntegerFact* param2, int param3);
    static void SetBooleanFact(const RTTIRefObject* param1, const BooleanFact* param2, bool param3);
    static void SetEnumFact(const RTTIRefObject* param1, const EnumFact* param2, const EnumFactEntry* param3);
    static void SetFactContextPersistent(const Resource* param1);
    static void SetFloatFact(const RTTIRefObject* param1, const FloatFact* param2, float param3);
    static void SetIntegerFact(const RTTIRefObject* param1, const IntegerFact* param2, int param3);
    static void SetVec3Fact(const RTTIRefObject* param1, const Vec3Fact* param2, const Vec3& param3);
};

class DSMissionEventTimerCommand {
public:
    static void AllVisiblePopupTimer();
    static void FixVisibleTimerFromDSMissionID(uint64 param1, bool param2);
    static void GetCurPlayTimeSecondsF(uint64 param1, int param2, float* param3);
    static void HideMissionEventTimer(uint64 param1, int param2, bool param3);
    static void ManualBootupMissionEventTimer(uint64 param1);
    static void ManualStopMissionEventTimer(uint64 param1);
    static void PauseMissionEventTimer(uint64 param1, int param2);
    static void ResetMissionEventTimer(uint64 param1, int param2, bool param3);
    static void SetCurTimeSecondsF(uint64 param1, int param2, float param3);
    static void SetMissionEventTimerPurposeTextByLocalizedText(uint64 param1, int param2, const LocalizedTextResource* param3);
    static void ShowMissionEventTimer(uint64 param1, int param2);
    static void StartMissionEventTimer(uint64 param1, int param2);
};

class DSAnyEventStateCommand {
public:
    static bool GetEventStateHash(uint32 param1, uint32& param2);
    static void SetEventState(const DSStringHashResource* param1, const DSStringHashResource* param2, bool param3);
    static void SetEventStateHash(uint32 param1, uint32 param2, bool param3);
    static void UnsetEventStateHash(uint32 param1);
};

class DSMissionLogicMiscCommand {
public:
    static bool CanStartCutscene();
    static void DSGetCurrentDate(int* param1, int* param2, int* param3);
    static bool DSHasBeenRelocateBaggage(const GGUUID& param1);
    static bool DSIsCombatMuleOrBT();
    static int8 GetGameOverCountForHospitality();
    static int GetMissionGlobalVariable(const DSStringHashResource* param1);
    static bool IsBirthdayToday();
    static void PreparationBeforeCutscene();
    static void ResetGameOverCountForHospitality();
    static void SetMissionGlobalVariable(const DSStringHashResource* param1, int param2);
    static void SetMissionMessageEnabled(uint32 param1, bool param2);
    static GGUUID StaticMissionIdToUUID(uint64 param1);
};

class DSMissionBaggageNodeCommand {
public:
    static void DeliveryBaggageForDontDeliveryMission(const GGUUID& param1, uint32 param2);
    static EDSGameBaggageListItem_BaggageAttribute GetBaggageAttribute(const DSGameBaggageListItem* param1);
    static bool IsIncludeBaggageListItemInMission(uint64 param1, const DSGameBaggageListItem* param2);
};

class CollisionTrigger {
public:
    WorldTransform GetWorldTransform();
    static bool IsInTrigger(const WorldPosition& param1, const CollisionTrigger* param2);
};

class DSGraphServiceReturnValue {
public:
    void SetInt(uint param1, int32 param2);
    void SetMessageNameHash(uint32 param1);
};

class DSDeliveryBotEntity {
public:
    static void EntityToGameActorId(const Entity* param1, int* param2);
    static void GameActorIdToEntity(int param1, Entity** param2);
    static void IsDeliveryBot(const Entity* param1, bool* param2);
};

class TileBasedStreamingStrategyInstance {
public:
    static void ConvertToTileCoordinates(const WorldPosition& param1, int& param2, int& param3);
    const StreamingTileStateResource* GetTileState(const StreamingTileResource* param1);
    void HintTileState(const StreamingTileResource* param1, const StreamingTileStateResource* param2);
    void SetHighestLODLevel(const StreamingTileResource* param1, EStreamingLODLevel param2, const RTTIRefObject* param3);
    void SetTileState(const StreamingTileResource* param1, const StreamingTileStateResource* param2);
};

class QuestSystem {
public:
    static void AbandonMerchantJobs(const GGUUID& param1);
    static bool CanStartQuest(const GGUUID& param1);
    static void DisableQuest(const QuestResource* param1);
    static void EnableQuest(const QuestResource* param1);
    static QuestInstance* GetQuest(const GGUUID& param1);
    static QuestInstance* GetTrackedQuest();
    static void RevertQuest(const QuestSection* param1);
    static void SetAllQuestsPaused(bool param1, const QuestResource* param2);
    static void ShowQuestNotification(const QuestResource* param1, const PlayerNotificationResource* param2, const PlayerNotificationPriority* param3);
};

class DSRadioNodeGraphBindings {
public:
    static void PlaySentence(Entity* param1, const SentenceResource* param2, EDSPlaySentenceNodePriority param3);
    static void RaiseAbortEvent(const DSRadioEvent* param1, float param2);
    static void RaiseAbortEvent2(const GGUUID& param1, float param2);
    static bool RaiseEvent(const DSRadioEvent* param1);
    static bool RaiseEvent2(const GGUUID& param1, bool param2);
    static SentenceResource* RandomlySelectSentenceHavingSpecificVoiceName(const SentenceGroupResource* param1, const LocalizedTextResource* param2);
};

class CharacterProgressionComponent {
public:
    void AddPerkLevel(const PerkLevel* param1);
    void AddPerkPoints(int param1, const String& param2);
    static void AddXp(Entity* param1, const LocalizedTextResource* param2, const LevelBasedXpReward* param3, const Array_cptr_XpMultiplier& param4, Entity* param5, bool param6);
    int GetLevel();
    bool HasPerkLevel(const PerkLevel* param1);
    void SetCurrentLevel(int param1);
};

class DSConstructionPointManager {
public:
    static void AddMissionConstructableArea(int param1, EDSConstructionPointCategory param2, const WorldPosition& param3, float param4);
    static void AllowConstructionInfologInPrivateroom();
    static void CallGimmickActionByConstruction(int32 param1, uint32 param2, uint32 param3);
    static void CallGimmickActionByConstructionEntity(const Entity* param1, uint32 param2, uint32 param3);
    static void ClearAccessingConstruction();
    static void ConstructioTypeToCategory(EDSConstructionPointType param1, EDSConstructionPointCategory& param2, EDSConstructionPointNetType& param3);
    static void CreateConstruction(EDSConstructionPointType param1, const WorldTransform& param2, bool param3);
    static void ForceConstructionLevelupComplete(int32 param1, Entity* param2);
    static void ForceConstructionLevelupStart(int32 param1);
    static Entity* GetAccessingConstructionPointEntity(const GGUUID& param1);
    static void GetAccessingConstructionPointId(int32* param1);
    static bool GetConstructionAvailableFromEntity(const Entity* param1);
    static void GetConstructionCategoryTotalNecessaryMaterials(EDSConstructionPointCategory param1, uint param2, int* param3);
    static void GetConstructionConfig(EDSConstructionPointCategory param1, float* param2, uint32* param3, uint32* param4);
    static void GetConstructionPointCategory(int32 param1, EDSConstructionPointCategory* param2, EDSConstructionPointNetType* param3);
    static void GetConstructionPointFrontAccessTransform(int32 param1, WorldTransform* param2);
    static void GetConstructionPointLevel(int32 param1, int* param2);
    static void GetConstructionPointNecessaryMaterialsToNextLevel(int32 param1, int* param2, int* param3);
    static void GetConstructionPointOnlineInfo(int32 param1, uint32* param2);
    static void GetConstructionPointPosition(int32 param1, WorldPosition* param2);
    static void GetConstructionPointState(int32 param1, EDSConstructionPointState* param2);
    static void GetConstructionPointTotalNecessaryMaterials(int32 param1, uint param2, int* param3, int* param4);
    static void GetConstructionUsabilityFromEntity(const Entity* param1, bool* param2, bool* param3);
    static void GetDeliveryPointTypeString(EDSConstructionPointType param1, const tchar& param2);
    static void GetNearestConstructionPointId(const WorldPosition& param1, int32* param2);
    static void GetOverrideOverHeadHoloIndexFromEntity(const Entity* param1, bool* param2, int* param3);
    static void GetRoadHashByConstructionId(int32 param1, uint32* param2);
    static void GetUUIDHash(const GGUUID& param1, uint32* param2);
    static void GetUsableQpidBandwidth(const WorldPosition& param1, uint32* param2, uint32* param3);
    static void IntToConstructionPointCategory(int32 param1, EDSConstructionPointCategory& param2);
    static void MoveBaggagesToSafePlace(const WorldPosition& param1, float param2, const WorldPosition& param3);
    static void PutConstructionsInTar(const WorldPosition& param1, float param2);
    static void RemoveConstructionsInArea(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, bool param4, bool param5, bool param6);
    static void RemoveGimmickLocatorFromConstruction(int32 param1, const GGUUID& param2);
    static void RemoveMissionConstructableArea(int param1);
    static void RestoreLastStrandingConstructions();
    static void SearchConstructionIDsWithPosition(EDSConstructionPointCategory param1, const WorldPosition& param2, float param3, Array_int* param4);
    static Entity* SearchConstructionPointEntityByInfo(const GGUUID& param1, const GGUUID& param2);
    static void SendCommandToDeliveryId(int32 param1, int param2, int param3, int param4, float param5, float param6);
    static void SendCommandToDeliveryPoint(const GGUUID& param1, int param2, int param3, int param4, float param5, float param6);
    static void SetAccessingConstruction(int32 param1);
    static void SetActiveAllConstructions(EDSArea param1, bool param2, const Array_int& param3);
    static void SetActiveAreaConstructions(bool param1, EDSArea param2, const WorldPosition& param3, float param4, const Array_int& param5);
    static void SetActiveCPAreaConstructions(const GGUUID& param1, bool param2);
    static void SetBaggagesToStatic(const WorldPosition& param1, float param2, float param3);
    static void SetConstructionLevel(int32 param1, int32 param2);
    static void SetConstructionPointTransform(int32 param1, const WorldTransform& param2);
    static void SetConstructionUsableFromEntity(const Entity* param1, bool param2);
    static void SetCustomizeHoloSpawnPosition(Entity* param1, const Vec3& param2, WorldTransform* param3, WorldPosition* param4);
    static void SetGimmickLocatorToConstruction(int32 param1, const GGUUID& param2);
    static void SetIntruderCheckerActivation(int32 param1, bool param2);
    static void SetPrivateRoomEventGraph(EDSPrivateRoomEventType param1, int param2, int param3);
    static void StartLastStrandingConstructions(bool param1, bool param2, bool param3, const Array_int& param4);
};

class DSSceneCommand {
public:
    static int DSGetSceneHashValue0(Scene* param1);
    static int DSGetSceneHashValue1(Scene* param1);
    static WorldPosition DSGetScenePosition(const GGUUID& param1);
    static int DSGetSceneTerminalId(Scene* param1);
    static bool DSIsEqualOriginalScene(Scene* param1, Scene* param2);
    static void DSSendCustomSceneMessage(Scene* param1, const tchar* param2, const uint32& param3, const int& param4, const int& param5);
};

class AIBehaviorGroupMemberComponent {
public:
    AIBehaviorGroup* GetAIBehaviorGroup();
    AIGroup* GetAIGroup();
};

class RopeComponent {
public:
    float GetRopeLifeTimeLeft();
};

class DSIntruderDetectorComponent {
public:
    static void IsThereAnyIntruder(const Entity* param1, bool* param2, bool* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, bool* param9, bool* param10, bool* param11, bool* param12);
};

class Mover {
public:
    void ApplyAngularImpulse(const Vec3& param1, const DestructibilityPart* param2);
    void ApplyAngularLocalImpulse(const Vec3& param1, const DestructibilityPart* param2);
    void ApplyImpulse(const WorldPosition& param1, const Vec3& param2, bool param3, const DestructibilityPart* param4);
    void ApplyLocalImpulse(const Vec3& param1, const Vec3& param2, bool param3, const DestructibilityPart* param4);
};

class DSCatalogueListItemCommand {
public:
    static void ExtractBaggageListItemInfo(const DSGameBaggageListItem* param1, EDSGameBaggageListItem_BaggageAttribute* param2, EDSGameBaggageListItem_BaggageCaseType* param3, EDSGameBaggageListItem_Volume* param4, EDSGameBaggageListItem_ContentsDamageType* param5);
    static const DSGameBaggageListItem* GetBaggageListItemByName(int param1);
    static bool GetDynamicOfflineBaggageGameActorIdFromMissionId(uint64 param1, int* param2);
};

class BuddyComponent {
public:
    void SetTeleportEnabled(bool param1, bool param2);
    bool TeleportBuddy(float param1, float param2, float param3, bool param4, bool param5, bool param6);
};

class EnumFact {
public:
    int GetValueIndex(const EnumFactEntry* param1);
};

class InventoryItem {
public:
    String GetDisplayName();
    int GetInventoryItemAmount();
    EInventoryCategory GetInventoryItemCategory();
    Entity* GetInventoryItemEntity();
    Entity* GetInventoryItemOwner();
    EInventoryItemRarity GetInventoryItemRarity();
    const EntityResource* GetInventoryItemResource();
    bool IsQuestItem();
};

class VehicleEntity {
public:
    static void EntityToGameActorId(const Entity* param1, int* param2);
    static void GameActorIdToEntity(int param1, Entity** param2);
    static void GetAllVehiclesInNearestTrigger(Array_cptr_Entity& param1, int param2);
    static void GetBoolRequest(Entity* param1, int param2, bool* param3);
    static void GetLastInVehicleFromNearestTrigger(Entity** param1, int param2);
    static void GetLastInVehicleFromTrigger(Entity** param1, const CollisionTrigger* param2);
    static void GetLastVehicleFromParking(Entity** param1);
    static void GetVehicleLife(const Entity* param1, bool* param2, float* param3);
    static void GetVehicleType(const Entity* param1, bool* param2, bool* param3, bool* param4, bool* param5, bool* param6, bool* param7);
    static void IsDriving(const Entity* param1, bool param2, bool* param3);
    static void MoveObjectsToSafePlace(const WorldPosition& param1, float param2, const WorldPosition& param3, float param4, const Vec3& param5, bool param6, bool param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13);
    static void MoveObjectsToSafePositions(const WorldPosition& param1, float param2, const WorldTransform& param3, const WorldTransform& param4, const WorldTransform& param5, const WorldTransform& param6, bool param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13);
    static void MoveVehicleOrCartToSafePlace(Entity* param1, const WorldTransform& param2, const WorldTransform& param3, const WorldTransform& param4, const WorldTransform& param5, bool* param6, bool param7);
    static void RequestSetForceLowLODAll(bool param1, bool param2);
    static void SetForceSpeedScale(Entity* param1, float param2);
    static void SetOverrideInCutscene(Entity* param1, int32 param2, bool param3);
    static void SetRequest(Entity* param1, int param2, bool param3);
    static void VehicleInOutTrigger(Entity* param1, const CollisionTrigger* param2, bool param3);
};

class AIManagerGame {
public:
    static void GetCombatSituationSummaryForThreat(const AIIndividual* param1, const Entity* param2, EThreatState& param3, EPositionAssessment& param4, float& param5, bool& param6, bool& param7);
    static Array_cptr_Entity GetEntitiesInRadius(const Entity* param1, float param2, bool param3);
    static bool GetPlayerHasBeenReported(const Player* param1);
    static bool GetPlayerIsBeingHeard(const Player* param1);
    static bool GetPlayerIsBeingSeen(const Player* param1);
    static bool GetPlayerIsInAntiStealth(const Player* param1);
    static float GetPlayerLastBeingHeardTimestamp(const Player* param1);
    static float GetPlayerLastBeingSeenTimestamp(const Player* param1);
    static EThreatState GetPlayerThreatLevel(const Player* param1);
    static float GetPlayerThreatLevelFactor(const Player* param1);
    static EExposedCombatSituationSummary GetPlayerVisualThreatLevel(const Player* param1);
    static float GetSearchTimeFactorForPlayer(bool* param1, bool* param2);
    static bool IsPlayerCurrentlyIdentified(const Player* param1);
    static bool IsPlayerCurrentlyIdentifiedByHumanoid(const Player* param1);
    static bool IsPlayerCurrentlyIdentifiedByRobot(const Player* param1);
};

class DsMuleManager {
public:
    static void CallRestoreMuleScript();
    static void ClearForceMuleStance();
    static void GetMuleReinforceCount(DSMuleGameActorUnitResource* param1, int& param2, int& param3);
    static void GetMuleReinforceCountByIdentifier(const tchar* param1, int& param2);
    static void MuleDirectDamageToStatus(const GGUUID& param1, EMuleDownType param2);
    static void RequestMuleReinforce(DSPatrolPath* param1, int param2, bool param3, bool param4, float param5, DSMuleGameActorUnitResource* param6, DSMuleConfig* param7, DSMuleCPGameActorLocator* param8, const tchar* param9, const ArtPartsVariationResource* param10, float param11, float param12, Array_uint& param13);
    static void RequestReinforceForEachRoute(const DSPatrolPathPriorityList* param1, bool param2, bool param3, float param4, DSMuleGameActorUnitResource* param5, DSMuleConfig* param6, DSMuleCPGameActorLocator* param7, const tchar* param8, Array_cptr_ArtPartsVariationResource& param9, float param10, float param11, Array_uint& param12);
    static void SetDbgMuleMoveSpeedScale(const tchar* param1, float param2);
    static void SetForceMuleStance(EDSMuleStance param1);
    static void SetSequenceOnlyMule(const GGUUID& param1);
    static void UpdateFriendlyMuleActivationStatus();
};

class WieldStowInventory {
public:
    void AddStoredItems(const GGUUID& param1, EInventoryCategory param2, bool param3);
    InventoryItem* GetActiveItem();
    void RemoveAndStoreItems(const GGUUID& param1, EInventoryCategory param2, bool param3);
    void StowActiveItem(bool param1);
    void WieldItem(InventoryItem* param1, bool param2);
};

class DSWorldMapHoloComponent {
public:
    static void AddWorldMapHoloConnectedPoint(Entity* param1, const GGUUID& param2, const GGUUID& param3, const GGUUID& param4, const GGUUID& param5, const GGUUID& param6, const GGUUID& param7, const GGUUID& param8, const GGUUID& param9, const GGUUID& param10);
    static void AddWorldMapHoloConnection(Entity* param1, const GGUUID& param2, const GGUUID& param3, bool param4);
    static void SetWorldMapHoloCursor(Entity* param1, const GGUUID& param2, bool param3);
    static void SetWorldMapHoloPlayerCursor(Entity* param1, const GGUUID& param2, bool param3);
    static void SetWorldMapHoloPlayerPositionCursor(Entity* param1, const WorldPosition& param2, EDSArea param3, bool param4);
};

class MountableComponent {
public:
    static Entity* GetMounter(Entity* param1, const GGUUID& param2);
    static bool Mount(Entity* param1, Entity* param2, const MountModeID* param3, bool param4);
};

class MounterComponent {
public:
    bool HasMounted(const Entity* param1);
};

class DSPlayerNodeExporter {
public:
    static void AddCryptbiosisCount(int32 param1, bool param2);
    static void DisconnectCartAndPlaceAroundReturnPoint();
    static void GetReturnPointTransform(WorldTransform& param1);
    static float GetUsedBloodPackAmount();
    static bool IsEquippedItem(EDSItemId param1);
    static void MarkToOnsen(uint32 param1);
    static void PlayerHelperSupplySystemEnable(bool param1);
    static void RecoverFullAtPrivateRoom();
    static void ResetCryptobiosisReviveDistance();
    static void ResetNumCryptbiosisAroundCoral();
    static void ResetPrivateRoomGlassesAndCap();
    static void SetCryptbiosisCount(int32 param1, bool param2);
    static void SetCryptobiosisReviveDistance(float param1);
    static void SetNumCryptbiosisAroundCoral(int param1, int param2, int param3);
    static void UnequipAccessoriesForBeach();
};

class Sequence {
public:
    Entity* GetEntityVariable(const SequenceEntityVariable* param1);
    static Mat44 GetLastSequenceCameraOrientation();
    static WorldPosition GetLastSequenceCameraPosition();
    static WorldTransform GetLastSequenceCameraTransform();
    bool IsPlaying();
    void SetEntityVariable(const DynamicSequenceEntityVariable* param1, Entity* param2);
    void Start();
    void Stop();
};

class PlayGoManager {
public:
    static void GetProgressAndETA(float& param1, uint64& param2);
};

class FacialAnimationComponent {
public:
    void PlayAnimation(const SkeletonAnimationResource* param1, float param2);
    void StopAnimation(float param1);
};

class ContextualActionComponent {
public:
    bool IsPerformingContextualAction();
};

class DSDeliveredBaggageArgs {
public:
    int GetBaggageListItemNameCode();
    int GetDeadBodyGameActorIdCode();
    uint64 GetMissionId();
};

class DsCheckStationGraphCommand {
public:
    static void CheckStation_ContactScanner();
    static void CheckStation_GetInfo(GGUUID param1, uint32* param2, uint32* param3, uint32* param4, bool* param5);
    static uint32 CheckStation_GetNonBaggageDeadBodyCount(int param1);
    static void CheckStation_ShowPlayerInfoMessages(EDSCheckStationScanInfo param1);
};

class DSMissionBasicNode {
public:
    static int CalcCanCancelProgressMissionCount();
    static void CalcProgressMissionCountHeavy(int* param1, int* param2, int* param3, int* param4, int* param5, int* param6);
    static void DebugDelayRemoveBaggageByName(uint32 param1);
    static void DebugDeleteMissionBaggage(int param1);
    static bool DebugIsDebugEntryBusy();
    static void DebugRemoveBaggageByName(uint32 param1);
    static void DebugResetAccessingTerminal();
    static void DebugSetAccessingTerminal(const GGUUID& param1);
    static void DebugUpdateMissionSystem();
    static void GetMainMissionIdArray(Array_uint64* param1);
    static int GetMissionTypeById(uint64 param1);
    static bool IsHalflifeMissionById(uint64 param1);
    static void RequestDispMissionStartHud(const GGUUID& param1);
};

class ShaderAnimComponent {
public:
    void EndShaderAnim();
    void IsFinished(bool& param1);
    void SwapComponentAfterShaderAnim(const EntityComponentResource* param1);
    void SwapEntityAfterShaderAnim(const EntityResource* param1);
};

class DSTerminalGraphArgs {
public:
    void GetBonusInfoArray(Array_cptr_DSTerminalGraphBonusArgs* param1);
    static void GetDeliveredBaggages(const DSTerminalGraphArgs* param1, uint64 param2, Array_cptr_DSDeliveredBaggageArgs* param3);
    static void GetDeliveredDeadBodyBaggages(const DSTerminalGraphArgs* param1, Array_cptr_DSDeliveredBaggageArgs* param2);
    static void GetDeliveredMemoryChips(const DSTerminalGraphArgs* param1, Array_cptr_DSDeliveredMemoryChipArgs* param2);
    void GetEvaluationInfoArray(Array_cptr_DSTerminalGraphEvaluationArgs* param1);
    int GetGivenChiral();
    static void GetOrderedBaggages(const DSTerminalGraphArgs* param1, uint64 param2, Array_cptr_DSOrderedBaggageArgs* param3);
    int GetParam(int param1);
    void GetTerminalGraphArgs(int param1, Array_uint64* param2, Array_uint64* param3, Array_uint64* param4, Array_uint64* param5, Array_uint* param6, Array_uint* param7, Array_uint* param8, bool* param9, bool* param10, bool* param11, bool* param12, int* param13, EDSQpidLevelUpEvent* param14, int* param15, int* param16, int* param17, int* param18, bool* param19, bool* param20);
};

class PathHelperNodeComponent {
public:
    bool IsMoving(const String& param1);
    void SetSpeed(PathHelperNodeResource* param1, const PathResource* param2, float param3, float param4, bool param5);
    void SetSpeed(const String& param1, float param2, float param3, bool param4);
};

class DSAirplaneGameActorLocator {
public:
    void AirplaneFire(float param1, float param2, float param3, EDSAttackId param4, float param5, bool param6);
    void AirplaneLaunchShell(const DSShellResource* param1, float param2, float param3, float param4, float param5);
    void AirplaneStopFire();
    void AirplaneStrafe(const WorldPosition& param1, const WorldPosition& param2, const WorldTransform& param3, float param4, float param5, float param6, float param7, float param8, float param9, EDSAttackId param10, float param11, bool param12);
    void DespawnAirplaneEntity(float param1);
    DSAirplaneGameActor* GetAirplaneGameActor();
    WorldPosition GetAirplanePositionAfterTime(float param1);
    void MoveAirplane(const WorldTransform& param1, float param2);
    void MoveAirplanePathFromNode(const DSMovementPath* param1);
    void MoveAirplanePathPoint(const WorldTransform& param1, float param2);
    void NewAirplanePath(bool param1, bool param2, bool param3);
    WorldPosition PredictAirplaneHitPosition(const WorldPosition& param1, float param2);
    void ShakeAirplane(float param1, float param2, float param3);
    bool SpawnAirplaneEntity(const WorldTransform& param1, float param2, float param3);
};

class AIScanExpressionParams {
public:
    void GetParams(float* param1, float* param2);
};

class AttackEventContext {
public:
    const Entity* GetDamager();
    const InstigatorData* GetInstigator();
    const AttackEventContext* GetParentContext();
    Array_cptr_AttackEventTag GetTags();
    const AttackEventContext* GetTopOfHierarchy();
    const EntityComponentResource* GetWeaponModeResource();
    const EntityResource* GetWeaponResource();
};

class AIWeaponPreference {
public:
    const HtnSymbol* GetNameSymbol();
};

class DSGimmickGraphCommand {
public:
    static void ActivatePhysicsGimmickObjects(const WorldPosition& param1, float param2, const SoundResource* param3);
    static void ActivatePhysicsGimmickObjectsWithSoundEnd(const WorldPosition& param1);
    static void ActivatePhysicsGimmickObjectsWithSoundStart(const WorldPosition& param1, float param2, const SoundResource* param3);
    static void DisableAutoDoorGimmickBaggageCheck(GGUUID param1, bool param2);
    static void DisableDSCheckStationAlarm(bool param1);
    static void LockAutoDoorGimmick(GGUUID param1, bool param2);
    static void MovePendulumGimmick(GGUUID param1, float param2);
    static void NotifyGimmickSpawnMessage(const DSLocator* param1, bool param2, const Vec3& param3, const Vec3& param4);
    static void SetFiringTargetWaiting(bool param1);
    static void SetInvisibleSharedGimmick(GGUUID param1, bool param2);
};

class DSGraphServiceArgs {
public:
    int32 GetInt(uint param1);
    int32 GetMessageNameHash();
};

class MeleeBlockComponent {
public:
    static bool IsBlocking(const Entity* param1);
};

class AnnotationInstance {
public:
    void Enable(bool param1);
};

class FastTravelSystem {
public:
    static void DisableFastTravel(const LocalizedTextResource* param1);
    static void EnableFastTravel(const LocalizedTextResource* param1);
};

class DSSleepAfterShaderAnimComponent {
public:
    static void SleepAfterShaderAnim(Entity* param1);
    static void WakeupAndRestartShaderAnim(Entity* param1);
};

class GestureComponent {
public:
    void RequestGesture(const String& param1);
    void RequestGestureWithEntityGestureTarget(const String& param1, const Entity* param2);
    void RequestGestureWithWorldPositionGestureTarget(const String& param1, const WorldPosition& param2);
};

class MovieTag {
public:
    void StartMovie();
    void StopMovie();
};

class Application {
public:
    static void ContinueLastSave();
    static Application* GetApplication();
    static void LoadAlwaysLoaded(const Level* param1);
    static void SelectAndLoadGame();
    static void StartCredits(const Level* param1);
    static void StartGame(const Level* param1);
};

class DSAmelieGestureComponent {
public:
    static void RequestAmelieHandWaving(Entity* param1);
};

class Math {
public:
    static Mat44 gComposeMat44(const Quat& param1, const Vec3& param2, const Vec3& param3);
    static Mat44 gMatrixInverse3x4(const Mat44& param1);
    static void gMayaDecomposeAffineMatrix(const Mat44& param1, Vec3& param2, Mat44& param3, Vec3& param4);
    static Mat44 gMayaEulerTo4x4(const Vec3& param1);
    static Vec3 gMayaGetEulerXYZ(const Quat& param1);
    static Quat gMayaQuatFrom4x4(const Mat44& param1);
    static Mat44 gMayaQuatTo4x4(const Quat& param1);
};

class PathMover {
public:
    void SetDistance(float param1);
    void SetPaused(bool param1);
    void SetTime(float param1);
};

class ModificationSocketComponent {
public:
    static void RemoveModificationItem(InventoryItem* param1, int param2);
    static void SocketModificationItem(InventoryItem* param1, InventoryItem* param2, int param3);
};

class DSRumbleEventComponent {
public:
    void StartRumbleEvent(uint32 param1, float param2, float param3);
    void StopRumbleEvent(uint32 param1);
};

class WeatherSystem {
public:
    void GetConditions(const WorldPosition& param1, Vec3* param2, Vec3* param3, float* param4, float* param5, float* param6, float* param7, float* param8, float* param9, float* param10, float* param11, float* param12, float* param13);
    void GetIndoorClimateFraction(float* param1);
    void ResetWeather();
    void SetWeatherOverride(const WeatherSetup* param1, float param2);
};

class ExtraArmorComponent {
public:
    void GetExtraArmor(float* param1, float* param2, float* param3);
    void InitExtraArmor(float param1);
};

class EntityPlaceHolder {
public:
    static Entity* GetEntity(const GGUUID& param1);
};

class EntityResource {
public:
    Entity* CreateDamageEntity(const WorldPosition& param1, const Mat44& param2, const tchar* param3, bool param4, const InstigatorData* param5, const Entity* param6, AttackEventLink* param7, EAttackEventLinkType param8, EntityLifetime param9, const String& param10);
    Entity* CreateEntity(const WorldPosition& param1, const Mat44& param2, const tchar* param3, bool param4, const InstigatorData* param5, AttackEventLink* param6, EntityLifetime param7);
    Entity* CreateEntityWithParent(const WorldPosition& param1, const Mat44& param2, const tchar* param3, bool param4, const InstigatorData* param5, AttackEventLink* param6, EntityLifetime param7, Entity* param8);
    const EntityComponentResource* FindComponentResourceByType(const RTTI* param1);
    String GetTelemetryID();
};

class DSNpcCombatSettings {
public:
    void ResetSceneCombatSettings(const Scene* param1);
    void SetCombatSettings();
    void SetSceneCombatSettings(const Scene* param1);
};

class WwiseGroup {
public:
    static bool WwiseGetControllerSpeakerEnableExport();
    static bool WwiseGetFootSoundToControllerSpeakerExport();
    static uint32 WwiseGetId(const tchar* param1);
    static int WwiseGetMasterVolumeExport();
    static uint32 WwiseID_GetId(const WwiseID* param1);
    static bool WwiseIsAliveExport(uint64 param1);
    static bool WwiseIsLoadingScreenExport();
    static void WwiseRtDbgGraphSoundResourceExport(bool param1, bool param2);
    static uint WwiseRtDbgPostEventByNameExport(const tchar* param1, uint64 param2, bool param3);
    static uint WwiseRtDbgPostEventExport(uint param1, uint64 param2, bool param3);
    static uint WwiseRtDbgPostEventWithCallbackExport(uint param1, uint64 param2, bool param3);
    static void WwiseRtDbgRegisterGameObjExport(uint64 param1, const tchar* param2);
    static void WwiseRtDbgSetPositionExport(uint64 param1, const Vec3& param2, const Quat& param3);
    static void WwiseRtDbgUnregisterGameObjExport(uint64 param1);
    static void WwiseSetEventPauseExport(uint32 param1, uint64 param2, bool param3);
    static void WwiseSetGlobalRTPCExport(uint32 param1, float param2);
    static void WwiseSetObjectObstructionAndOcclusionExport(uint64 param1, uint param2, float param3, float param4);
    static void WwiseSetRTPCValueByPlayingIDExport(uint32 param1, float param2, uint param3, int param4, uint param5, bool param6);
    static void WwiseSetRTPCValueExport(uint32 param1, float param2, uint64 param3, int param4, uint param5, bool param6);
    static void WwiseSetStateExport(uint32 param1, uint32 param2);
};

class WaterInteractionSystem {
public:
    static void AddImpact(const WorldPosition& param1, const Vec3& param2, float param3, float param4);
};

class MenuSaveDataDialog {
public:
    static bool CanSaveGame();
    static bool DSCanSaveGame();
    static void DSSelectSaveSlot(ESaveGameType param1);
    static bool IsSaveDataLoadingOrRequested();
    static void SelectLoadSlot(ESaveGameType param1);
    static void SelectSaveSlot(ESaveGameType param1);
};

class SnowInteractionSystem {
public:
    static float sGetFollowPositionDeformation();
    static ESurfaceDeformationMode sGetMode();
    static void sSetMode(ESurfaceDeformationMode param1);
};

class AIPatrolPath {
public:
    const HtnSymbol* GetAlertContextHint();
    const AIContextHintResource* GetMovementContext();
};

class EquipmentSlotComponent {
public:
    bool Equip(InventoryItem* param1, int param2);
    Entity* GetCurrentItem(EEquipSlotType param1);
};

class ExtraHealthComponent {
public:
    void RemoveExtraHealth(AttackEventLink* param1, const WorldPosition& param2, const Vec3& param3, float param4);
};

class DsNpcGeneralCommand {
public:
    static void AppearNpcToWorld(const GGUUID& param1);
    static void ForceLowLodNpc(const GGUUID& param1, bool param2);
    static void RemoveNpcFromWorld(const GGUUID& param1);
    static void RestartExternalAnimation(Entity* param1);
    static void TeleportNpc(const GGUUID& param1, const WorldTransform& param2);
};

class ScenePrefabInstance {
public:
    Scene* GetInstantiatedScene();
    bool IsRunning();
    void SetForcedActivation(ESceneForcedActiveState param1);
    void Start();
    void Stop();
};

class NPCScheduleManager {
public:
    static void CreateNPCSchedule(const NPCScheduleResource* param1, Entity* param2);
};

class DSPatrolPathManager {
public:
    static void AssignPatrolPathToEntity(Entity* param1, DSPatrolPath* param2);
    static void ClearPatrolPathCache();
    static void ConnectNPCWithPatrolPath(const DSNPCPriorityList* param1, const DSPatrolPathPriorityListBase* param2, bool param3, EDSRouteConnectionType param4);
    static bool ConnectSingleNPCWithPatrolPath(const GGUUID& param1, DSPatrolPath* param2);
    static bool ConnectSingleNPCWithPatrolPathGroup(const GGUUID& param1, DSPatrolPathGroup* param2);
    static void DisconnectNPCFromPatrolPath(const DSNPCPriorityList* param1);
    static void EntityQuitPatrol(Entity* param1);
    static void UpdatePatrolPathCache(bool param1);
};

class SceneComponent {
public:
    Scene* GetParentScene();
    Scene* GetRootScene();
    Scene* GetScene();
};

class ComponentLifetimeComponent {
public:
    static void RegisterComponent(Entity* param1, EntityComponent* param2, float param3);
    static void UnregisterComponent(Entity* param1, const EntityComponent* param2);
};

class AIIndividualComponent {
public:
    void AlertForEntity(Entity* param1);
    void AlertForEntityWithPerfectThreatInfo(Entity* param1);
    AIIndividual* GetAIIndividual();
};

class WeaponMode {
public:
    void SetIncapacitated(bool param1);
};

class KnockDownStateComponent {
public:
    void Activate(const KnockDownStateEntryResource* param1, float param2);
    void Deactivate(const KnockDownStateEntryResource* param1);
    void DeactivateAll();
    bool IsActive(const KnockDownStateEntryResource* param1, bool& param2);
    void ResetAll(float param1);
};

class DamageOverTimeComponent {
public:
    void StartDamage(AttackEventLink* param1);
};

class PinDownComponent {
public:
    bool IsPinnedDown(bool* param1);
    void StartBreakFree(bool param1);
};

class HitReactionComponent {
public:
    void ActivateReactionSet(Entity* param1, const HitReactionSet* param2);
    void AddSeverityModifier(const HitReactionSeverityModifier* param1);
    void RemoveSeverityModifier(const HitReactionSeverityModifier* param1);
    void ResetHitReaction(const HitReactionSeverityProperty* param1);
};

class HumanoidController {
public:
    void GetMove(float* param1, float* param2);
};

class AnimationData {
public:
    static void BlendAnimationDataSources(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4, EBlendMode param5, const JointSetID* param6, bool param7, EBlendEventPropagationMode param8);
    static void BlendBuffers(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4, EBlendMode param5, const JointSetID* param6);
    static void BlendSyncTracks(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4);
    static void CloneSyncTrackAndStretch(AnimationData* param1, const AnimationData* param2, float param3);
    static int ComputeClosestAnimation(const PoseID& param1, const AnimationData& param2, const SkeletonAnimationResource** param3, int param4, bool param5, float param6, float param7, const JointSetID* param8, const JointID& param9, EJointSpace param10, int param11);
    static void ExtractJointInfo(AnimationData* param1, const AnimationData* param2, int param3, int param4, EJointSpace param5, Vec3* param6, Quat* param7, Vec3* param8);
    static void ExtractSyncTracksFromAnim(AnimationData* param1, const SkeletonAnimationResource* param2);
    static const AnimationData* GetPose(const PoseID* param1);
    static void GetTime(const AnimationData* param1, float* param2, float* param3, bool* param4);
    static bool IsAnimationEventActive(const AnimationData& param1, const SkeletonAnimationEventPayload& param2);
    static void MakeAdditive(AnimationData* param1, const SkeletonAnimationResource* param2);
    static void ModifyJointTransform(AnimationData* param1, const AnimationData* param2, int param3, int param4, EJointSpace param5, const Vec3& param6, const Quat& param7, const Vec3& param8, EJointOperation param9, EJointOperation param10, EJointOperation param11);
    static void OutputClosestAnimation(const SkeletonAnimationResource* param1, const PoseID& param2, const JointID& param3, bool param4, EClosestAnimAlignmentType param5, float param6, const JointID& param7, int param8, AnimationData* param9, float* param10, Quat* param11, Vec3* param12, Quat* param13, int* param14);
    static void PassThrough(const AnimationData* param1, AnimationData* param2, uint8 param3);
    static void ProbeActiveStates(uint64 param1, uint64 param2, const ActiveStatesQueue& param3);
    static void PushActiveState(ActiveStatesQueue& param1, uint param2, float param3, bool param4, const RuntimeAnimationStateResource* param5);
    static void RecycleActiveStatesQueue(ActiveStatesQueue& param1);
    static void RemoveActiveStates(ActiveStatesQueue& param1, uint param2);
    static void ResetQueueOnActivation(ActiveStatesQueue& param1, uint param2, const RuntimeAnimationStateResource* param3);
    static int ResolveJointID(const AnimationData& param1, int param2, const JointID& param3);
    static void SampleAnimation(AnimationData* param1, const SkeletonAnimationResource* param2, bool param3, float param4);
    static void SetBranchNameHash(ActiveStatesQueue& param1, uint32 param2);
    static void SetCurrentStateEventSpaceTimeInSMContext(ActiveStatesQueue& param1);
    static void SetFrameAndTime(AnimationData* param1, const AnimationData* param2, float param3, float param4, bool param5);
    static void StatesQueueEvalLogic(ActiveStatesQueue& param1, AnimationData& param2);
    static void StatesQueueUpdateTime(ActiveStatesQueue& param1, const AnimationData& param2);
    static void StorePose(const AnimationData& param1, const PoseID* param2, int param3);
    static void TimeMapAnimation(AnimationData* param1, const SkeletonAnimationResource* param2, float param3, float param4, float param5);
    static float UpdateEventMatching(AnimationData* param1);
};

class EntityArrayComponent {
public:
    void AddEntity(Entity* param1);
    void ClearEntities();
    Entity* GetEntity(int param1);
    int GetEntityCount();
    void RemoveEntity(Entity* param1);
};

class AIObserverComponent {
public:
    void GetObserverTransform(WorldPosition& param1, Mat44& param2);
};

class ThirdPersonPlayerCameraComponent {
public:
    CameraModeResource* GetCurrCameraMode();
    CameraModeResource* GetPrevCameraMode();
};

class DSEffectsNodeGraphBindings {
public:
    static void DSCreateImpactEffect(Entity* param1, const MaterialTypeResource* param2, const Vec3& param3, const Vec3& param4, const Vec3& param5, EPhysicsCollisionLayerGame param6, int8 param7);
    static void DSFindClosestPoint(const Vec3& param1, const Vec3& param2, const Vec3& param3, Vec3& param4);
    static void DSFindClosestPointFromObjectCollection(const ObjectCollection* param1, const Vec3& param2, Vec3& param3);
    static void DSSendParticleSystemExternalSizeFromObjectCollection(ObjectCollection* param1, float param2);
    static bool GetGlobalStateBool(const tchar* param1);
    static float GetGlobalStateFloat(const tchar* param1);
    static int GetGlobalStateInt(const tchar* param1);
    static void GlobalStateAtomicAddFloat(const tchar* param1, float param2, float* param3);
    static void GlobalStateAtomicAddInt(const tchar* param1, int param2, int* param3);
    static bool IsInClosestCrater(const WorldPosition& param1, float param2);
    static bool IsIntersectOrientedBox(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, const WorldPosition& param4, float param5);
    static bool IsTileEdge(const WorldPosition& param1, float param2);
    static void SetGlobalStateBool(const tchar* param1, bool param2);
    static void SetGlobalStateFloat(const tchar* param1, float param2);
    static void SetGlobalStateInt(const tchar* param1, int param2);
};

class DSTerminalGraphEvaluationArgs {
public:
    void FindEvaluation(EDSMissionConditionType param1, bool& param2, EDSRewardRank& param3);
    EDSEvaluationActingType GetEvaluationActingType();
    int GetEvaluationLength();
    EDSEvaluationType GetEvaluationType();
    void GetMainEvaluation(bool& param1, EDSMissionConditionType& param2, EDSRewardRank& param3);
    uint64 GetMissionId();
    void GetSubEvaluation(uint8 param1, bool& param2, EDSMissionConditionType& param3, EDSRewardRank& param4);
};

class DSMissionAbstractTodoNodeResource {
public:
    static void MarkTodoAsCompleted(const GGUUID& param1);
    static void MarkTodoAsDiscarded(const GGUUID& param1);
    static void MarkTodoAsFailed(const GGUUID& param1);
    static void RemindTodo(const GGUUID& param1);
    static void RevealTodo(const GGUUID& param1);
};

class DSLikeCommand {
public:
    static void ReceiveLike(int32 param1, const GGUUID* param2, EDSTakeLikeReason param3);
    static void ReceiveLikeFromMajorMember(int32 param1, EDSMajorMember param2, uint32 param3);
    static void ReceiveLikeWithOption(int32 param1, const GGUUID* param2, EDSTakeLikeReason param3, EDSLikeOptionFlag param4, EDSLikeOptionFlag param5, EDSLikeOptionFlag param6);
};

class ControlledEntity {
public:
    AIIndividual* GetAIIndividual();
    Controller* GetController();
    Entity* GetTargetEntity();
    bool IsBoundToSequence();
    bool IsGodMode();
    bool IsLocalPlayer();
};

class DSCreateMissionBaggageNodeCommand {
public:
    static void CreateBonusBaggageOnShelf(const DSGameBaggageListItem* param1, uint64 param2);
    static void CreateMissionBaggages(const GGUUID& param1, const GGUUID& param2);
    static void RequestCreateMissionExtraBaggage(const GGUUID& param1, uint32 param2);
};

class DSTerminalGraphBonusArgs {
public:
    const DSGameBaggageListItem* GetBaggageListItem();
    uint64 GetMissionId();
    bool IsSimpleBonus();
    bool IsStarMark();
    bool NeedsExceptionalProcess();
};

class AIManager {
public:
    static bool CreateAuralStimulus(const AIAuralStimulusResource* param1, Entity* param2);
    static bool CreateVisualStimulus(const AIVisualStimulusResource* param1, Entity* param2);
};

class AINavMeshComponent {
public:
    void FindPositionOnNavMesh(const WorldPosition& param1, float param2, bool* param3, WorldPosition* param4);
    static bool FindPositionOnNavMeshBySettings(const NavMeshBuilderSettings* param1, const WorldPosition& param2, float param3, WorldPosition* param4);
};

class HairModelComponent {
public:
    void SetHairPose(float param1, const Vec4& param2, const Vec4& param3);
    void SetHairSimProperties(float param1, float param2, float param3, float param4);
};

class AttackEventLink {
public:
    const AttackEventContext* GetEventContext();
};

class ConstraintComponent {
public:
    static void Create(const PhysicsConstraintResource* param1, Entity* param2, const ModelPartResource* param3, Entity* param4, const ModelPartResource* param5);
};

class SequenceNetworkInstance {
public:
    void ForceCameraPrediction(bool param1, float param2);
    static void ForceCameraPredictionByUUID(const GGUUID& param1, bool param2, float param3);
    Entity* GetEntityVariable(const SequenceEntityVariable* param1);
    bool GetNodeTime(const SequenceNetworkNode* param1, float& param2);
    Entity* GetSequenceNetworkEntity();
    bool IsSequenceSkipped();
    void SetEntityVariable(const DynamicSequenceEntityVariable* param1, Entity* param2);
    void Start();
    void Stop();
};

class RouteMover {
public:
    float GetDistance();
    float GetRelativeDistance();
    const Route* GetRoute();
    float GetSpeed();
    static void MoveAlongRoute(Entity* param1, const Route* param2, bool param3, float param4, bool param5);
    void SetDistance(float param1, bool param2);
    void SetRelativeDistance(float param1, bool param2);
    void SetRoute(const Route* param1, bool param2, bool param3);
    void SetSpeed(float param1);
};

class DSFiringRangeNodeGraphBindings {
public:
    static bool CheckFiringRangeMissionClearCondition();
    static bool IsFiringRangeMission(uint64 param1);
    static void NotifyFiringRangeMissionGoal();
    static void SetFiringRangeMissionInitialCarriedWeapon(EDSWeaponId param1, EDSWeaponId param2, EDSWeaponId param3, EDSWeaponId param4, EDSWeaponId param5, BooleanFact* param6);
    static void SetFiringRangeMissionInitialItem(EDSItemId param1, EDSItemId param2, EDSItemId param3, EDSItemId param4, EDSItemId param5);
    static void SetFiringRangeMissionInitialSuitParts(EDSSuitPartsId param1, EDSSuitPartsId param2, EDSSuitPartsId param3, EDSSuitPartsId param4, EDSSuitPartsId param5);
    static void SetFiringRangeMissionInitialWeapon(EDSWeaponId param1, EDSWeaponId param2, EDSWeaponId param3, EDSWeaponId param4, EDSWeaponId param5, BooleanFact* param6);
    static void SetStartLocator(const DSLocator* param1);
    static void SetStartTransform(const WorldTransform& param1);
    static void StartFiringRangeMission();
    static void StartFiringRangeMissionResult();
};

class DSGraphCtrlBaggageArgs {
public:
    void GetBaggageGameActorIds(Array_int* param1);
};

class CurveResource {
public:
    float Evaluate(float param1);
    void GetCurveRange(float& param1, float& param2);
    void GetCurveTangents(float param1, float& param2, float& param3);
};

class DSOrderedBaggageArgs {
public:
    int GetBaggageListItemNameCode();
};

class StringToolsGroup {
public:
    static int sFormatHelperDouble(double param1, tchar* param2, uint64 param3);
    static int sFormatHelperDoubleCustomFormat(double param1, uint param2, uint param3, tchar param4, tchar* param5, uint64 param6);
    static int sFormatHelperFloat(float param1, tchar* param2, uint64 param3);
    static int sFormatHelperFloatCustomFormat(float param1, uint param2, uint param3, tchar param4, tchar* param5, uint64 param6);
    static int sFormatHelperInt(int param1, tchar* param2, uint64 param3);
    static int sFormatHelperInt32(int32 param1, tchar* param2, uint64 param3);
    static int sFormatHelperInt64(int64 param1, tchar* param2, uint64 param3);
    static int sFormatHelperUInt(uint param1, tchar* param2, uint64 param3);
    static int sFormatHelperUInt32(uint32 param1, tchar* param2, uint64 param3);
    static int sFormatHelperUInt64(uint64 param1, tchar* param2, uint64 param3);
    static uint8 sHexToByte(tchar param1, tchar param2);
};

class ArtPartsData {
public:
    static void IsValidModelPart(Entity* param1, const tchar* param2, bool* param3);
    static void SetEnableModelPart(Entity* param1, const tchar* param2, bool param3);
    static void SetShaderVariableAsFloat(Entity* param1, const tchar* param2, const tchar* param3, float param4);
    static void SetShaderVariableAsVec3(Entity* param1, const tchar* param2, const tchar* param3, const Vec3& param4);
};

class DSMissionEvaluationDataTable {
public:
    static void CalculationEvaluation(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, float* param3, bool param4, float param5, EDSRewardRank param6);
    static void GetDataRecord(const DSMissionEvaluationDataTable* param1, const DSMissionEvaluationDataRecord** param2, int param3);
    static void GetDataRecordsLength(const DSMissionEvaluationDataTable* param1, int* param2);
    static float GetMaxThreshold(const DSMissionEvaluationDataTable* param1);
    static float GetMinThreshold(const DSMissionEvaluationDataTable* param1);
    static void MaxEvaluation(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, uint32* param3);
    static void MinEvaluation(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, uint32* param3);
};

class SpawnSetup {
public:
    Entity* CreateEntityFromSpawnSetup(SpawnSetup* param1, Scene* param2);
};

class SoundEnvironment {
public:
    void GetDensityAtListener(float& param1);
    void GetDensityAtSamplePoint(int param1, float& param2);
    void GetMaxSoundsPerSpawnPoint(float* param1);
    void GetRandomSounds(int param1, int* param2);
    void GetSound(int param1, const EnvironmentSound** param2);
    void GetSoundCount(int& param1);
    void GetSoundSpawnCountFactor(float* param1);
    void GetSoundSpawnThreshold(float* param1);
    void SetDensity(float param1);
};

class PlayerProfile {
public:
    static bool IsGameFinished();
    static void Save();
    static void SetGameFinished(bool param1);
};

class TetheredAmmoPileComponent {
public:
    EAmmoTetherState GetTetherState();
};

class SoundSystem {
public:
    static void GetAudioOutState(int& param1, bool& param2);
    static void GetHDRWindowSettings(float& param1, float& param2, float& param3, float& param4);
    static void GetObstructionRowStatistics(float param1, float& param2, float& param3, float& param4, float& param5, int& param6, int& param7);
    static void GetSubmixOutputLevel(const SubmixResource& param1, float& param2, float& param3);
    static void OverrideMixZone(bool param1, const SoundMixResource* param2, int param3);
    static void OverrideReverbZone(bool param1, const ReverbPresetResource* param2, float param3, int param4);
    static void SetHDRWindowSettings(bool param1, float param2, float param3, float param4, float param5);
};

class DSDeliveryPointInfoCommand {
public:
    static bool CheckDeliveryPointAvailable(const GGUUID& param1);
    static int GetDeliveryPointIdFromMissionId(uint64 param1);
    static EDSConstructionPointType GetTypeFromDeliveryPointInfo(const GGUUID& param1);
    static EDSConstructionPointType GetTypeFromDeliveryPointInfoId(int param1);
    static void SetBonusBaggageTypeHash(uint32 param1);
    static void SetDeliveryPointAvailability(const GGUUID& param1, bool param2);
    static void SetDeliveryPointAvailabilityDetail(const GGUUID& param1, bool param2, bool param3, bool param4, bool param5, bool param6, bool param7, int param8);
};

class DsNpcManager {
public:
    static void SetNpcIndividualPhase(const tchar* param1, int param2);
};

class DSMissionOpenCondition {
public:
    static DSMissionLogicBlock* GetLogicBlock(DSMissionOpenCondition* param1);
    static Array_cptr_DSMissionOpenList GetOpenLists(DSMissionOpenCondition* param1);
};

class DSMissionOpenNode {
public:
    static bool CheckCompletedCondition(const DSMissionLogicBlock* param1);
    static bool CheckCompletedMissions(const DSMissionResourceList* param1);
    static bool CheckMissionOpenState(const GGUUID& param1, EDSMissionOpenState param2);
    static int CountCompletedMissions(const DSMissionResourceList* param1);
    static bool OpenMissions(const DSMissionResourceList* param1, EDSMissionOpenState param2, uint64 param3, Array_uint64* param4);
    static void SetNotAvailableMission(uint64 param1, bool param2);
    static void SetTemporaryMissionOpenState(const GGUUID& param1, EDSMissionOpenState param2);
};

class CubemapbakeOnly {
public:
    static bool GetCubemapbakeOnlyFlag();
};

class DSMissionGraphService {
public:
    static void CallByMissionId(uint64 param1, uint32 param2, bool param3, const DSGraphServiceArgs* param4);
    static void CallByMissionResource(const GGUUID& param1, uint32 param2, bool param3, const DSGraphServiceArgs* param4);
    static void CallOtherGraph(uint32 param1, const DSGraphServiceArgs* param2);
    static DSGraphServiceArgs* CreateGraphServiceArg(uint32 param1, int param2, int param3, int param4, int param5);
};

class DSWeaponSystem {
public:
    static bool CanUseInsideDeliveryTerminalArea(EDSWeaponId param1);
    static void IntToAmmoId(int32 param1, EDSAmmoId& param2);
    static void IntToItemId(int32 param1, EDSItemId& param2);
    static void IntToMagazineId(int32 param1, EDSMagazineId& param2);
    static void IntToSuitPartsId(int32 param1, EDSSuitPartsId& param2);
    static void IntToWeaponId(int32 param1, EDSWeaponId& param2);
    static bool IsKillingAmmo(EDSAmmoId param1);
    static void RefreshPrivateRoomWeaponShelf();
};

class DiscoverableAreaInstance {
public:
    void SetMarkedByPlayer();
};

class DSShellLauncherGameActorLocator {
public:
    void LaunchStraightVolley(const WorldPosition& param1, float param2);
    void LaunchVolley(const WorldPosition& param1);
    void LaunchVolleyEntity(const Entity* param1);
    void SetActivated(bool param1);
    void SetTargetEntity(const Entity* param1);
    void SetTargetPosition(const WorldPosition& param1);
    void SetTargetRadius(float param1);
};

class SimplePathMover {
public:
    static void MoveToWorldTransform(Entity* param1, const WorldTransform& param2, float param3);
    static void MoveToWorldTransformOverTime(Entity* param1, const WorldTransform& param2, float param3);
};

class SpawnpointGame {
public:
    Entity* GetStartSequenceNetworkEntity();
};

class EnvironmentSound {
public:
    void GetLastSpawnDistance(float& param1);
    void GetProperties(SoundResource** param1, int& param2, int& param3, float& param4, float& param5, float& param6, float& param7, float& param8, BoundingBox3& param9);
    void SetLastSpawnDistance(float param1);
};

class DHighwaySyncControlCommand {
public:
    static void UpdateSyncControlParams();
};

class DSSound {
public:
    static void GetAngleFromPlayerToListenerExport(bool* param1, float* param2);
    static void GetCraterInfluenceOnPlayerExport(float* param1, float* param2);
    static void IsPlayerCloseToCliffExport(bool* param1);
};

class DSDeliveryBotGameActor {
public:
    static void ActivateDeliveryBot(int param1);
    static bool CheckDeliveryBotAIMode(int param1, EDSDeliveryBotAIMode param2);
    static bool CheckDeliveryBotDockingLocation(int param1, EDSDeliveryBotDockingLocation param2);
    static bool CheckDeliveryBotRidingAIMode(int param1, EDSDeliveryBotRidingAIMode param2);
    static void DeactivateDeliveryBot(int param1);
    static void ForceCompleteAllDeliveries(int param1);
    static void ForceVisibleDeliveryBot(bool param1);
    static float GetAppearingDeliveryBotDistanceForCutscene();
    static void GetDeliveryBotsInCurrentArea(Array_int* param1);
    static bool IsPlayerRiding(int param1);
    static void StowDeliveryBot(int param1, int32 param2);
};

class AIFaction {
public:
    bool IsHostileTowards(const AIFaction* param1);
};

class CraftingRecipe {
public:
    int GetMissingIngredientCount(int param1, const Entity* param2);
    bool IsMissingIngredient(const EntityResource* param1, int param2, const Entity* param3);
};

class DamageTypeGroup {
public:
    bool Contains(const DamageTypeResource* param1);
};

class DSCountTimerBase {
public:
    static void FindDSCountTimerFromHashCode(const uint32& param1, const DSCountTimerBase** param2);
    void GetCurrentTimeSecondsF(float* param1);
    void GetDSCountTimerHashCode(uint32* param1);
    void Pause();
    void Reset();
    void SetCurrentTimeSecondsF(const float& param1);
    void Start();
};

class DSOnlineMissionCommand {
public:
    static void ApplyPreparationItemsForLastStranding();
    static void ApplyPreparationItemsForTarget(int32 param1);
};

class WaterDetectionComponent {
public:
    bool IsInDSWater(bool& param1, float& param2, float& param3, bool& param4);
    bool IsInWater(bool& param1, float& param2, float& param3);
};

class Camera {
public:
    static void AddCameraModifier(Entity* param1, const CameraModifierResource* param2);
    static void RemoveCameraModifier(Entity* param1, const CameraModifierResource* param2);
};

class DSSoundNodeGraphBindings {
public:
    static void GetCutsceneSkipMute(bool& param1);
    static void GetCutsceneSoundPlaying(bool& param1);
    static void GetFadeStateForSound(bool& param1, bool& param2, bool& param3, bool& param4);
    static void SetMusicPlayerCutscenePause(bool& param1);
    static void SetMusicPlayerCutsceneResume();
};

class Landmark {
public:
    bool IsEnabled();
    void SetEnabled(bool param1);
};

class GameMovie {
public:
    void PlayMovie(const MovieResource* param1);
    void PlayMovieAndTeleport(const MovieResource* param1, const WorldTransform& param2);
};

class DSGazerManagerCommand {
public:
    static void EnableRespawnGazers(Scene* param1);
    static void GetUUIDHashOfGazerScene(const GGUUID& param1, uint32* param2);
    static bool IsGazerNoticingPlayer();
    static void ResetAllGazers();
};

class AnnotationComponent {
public:
    static void EnableAllAnnotations(Entity* param1, bool param2);
    AnnotationInstance* FindAnnotationInstanceByResourceUUID(const tchar* param1, const GGUUID& param2);
};

class SequenceComponent {
public:
    static Scene* GetSceneFromEntityBoundToSequence(Entity* param1);
    static int GetSequenceCurrentFrameNumber(Entity* param1);
    static int GetSequenceNextFrameNumber(Entity* param1);
    static int GetSequenceStopFrameNumber(Entity* param1);
};

class MeleeWeaponMode {
public:
    void StopAttack();
};

class AssertReporterGroup {
public:
    static bool sReport(const tchar* param1, int param2, const tchar* param3);
    static bool sReport(const tchar* param1, int param2, const tchar* param3, const tchar* param4);
};

class DSMissionSafetyHouseCommand {
public:
    static void DSCallDefaultPrivateRoomGraph(uint32 param1, int param2);
    static void DSClearNotNeededInfoLogWhenLeavePrivateRoom();
    static float DSGetPrivateRoomDeltaTime();
    static void DSTelemetryEnterPrivateRoomOnlyEVorTR();
    static void DSWakeupHeartmanRoomState();
    static void DSWakeupPrivateRoomState(const GGUUID& param1);
    static void DSWakeupPrivateRoomStateById(int param1);
    static bool IsDisableLeavePrivateRoomInfoLogs();
};

class EntityComponent {
public:
    const EntityComponentResource* GetResource();
    void Remove();
};

class CPUProfileWindow {
public:
    static void sCaptureFrames(int param1);
};

class GrenadeTriggerComponent {
public:
    const Entity* GetContactTriggerEntity();
    int GetContactTriggerModelPartIndex();
    Vec3 GetContactTriggerNormal();
    WorldPosition GetContactTriggerPosition();
    bool WasTriggeredByContact();
};

class AttachToHelperMover {
public:
    static AttachToHelperMover* Create(Entity* param1, const String& param2);
};

class ShieldComponent {
public:
    void GetShieldInfo(float* param1, float* param2, float* param3, bool* param4, bool* param5);
};

class DSWelcomeHoloComponent {
public:
    static void SetAnimationDistanceSetting(Entity* param1, const DSWelcomeHoloAnimationDistanceSetting* param2);
    static void SetAnimationSyncSetWelcomeHolo(Entity* param1, const DSWelcomeHoloAnimationSyncSet* param2);
    static void SetNotEchoTargetWelcomeHolo(Entity* param1, bool param2);
    static void StartInvisibleWelcomeHolo(Entity* param1);
    static void StartVisibleWelcomeHolo(Entity* param1);
};

class UTFToolsGroup {
public:
    static WString sDecodeUTF8(const String& param1);
    static String sEncodeUTF8(const WString& param1);
};

class EDSEvaluationType {
public:
    void SetOverrideEvaluationActingType(EDSEvaluationActingType param1);
};

class DSDeliverySurveyCommand {
public:
    static void GetMissionDeliveredCountBySpecialRule(int* param1, int* param2);
    static int GetTotalDeliveryBaggageCountOnSurvey();
    static void StopSwitchingPlayerTriggerBoxForPrivateRoom(bool param1);
};

class WorldEncounterManager {
public:
    static void StopAllWorldEncounters();
};

class DSMissionCollectorsItemCommand {
public:
    static void Donated(const DSStringHashResource* param1);
    static void Given(const DSStringHashResource* param1);
    static bool IsDonatedAllMemoryChip();
    static void PickingUp(const DSStringHashResource* param1);
};

class DSDeliveryManager {
public:
    static void SendCommand(EDSDeliveryManagerCommandTarget param1, int param2, const GGUUID& param3, int param4, int param5, int param6, float param7, float param8);
};

class AttachedLightsComponent {
public:
    void SetColor(const FRGBAColor& param1);
    void SetIntensityMultiplier(float param1);
};

class DSMissionEvaluationDataTablesByThreshold {
public:
    static const DSMissionEvaluationDataTable* FindEvaluationDataTable(const DSMissionEvaluationDataTablesByThreshold* param1, float param2);
    static float GetMaxThreshold(const DSMissionEvaluationDataTablesByThreshold* param1);
    static float GetMinThreshold(const DSMissionEvaluationDataTablesByThreshold* param1);
    static const DSMissionEvaluationDataTable* MaxEvaluationDataTable(const DSMissionEvaluationDataTablesByThreshold* param1);
    static const DSMissionEvaluationDataTable* MinEvaluationDataTable(const DSMissionEvaluationDataTablesByThreshold* param1);
};

class InventoryWeapon {
public:
    float GetChargeFraction();
    int GetRounds();
    int GetRoundsInMagazine();
};

class DSNpcAlertZone {
public:
    static void ClearAlertZone(const GameActorLocator* param1);
    static void SetAlertZone(const GameActorLocator* param1, const NavMeshArea* param2);
};

class ChildEntityComponent {
public:
    Entity* GetChild();
};

class TagEvent {
public:
    void SetHandled(bool param1);
};

class EconomyManagerResource {
public:
    static int GetAmountInPlayerInventory(const GGUUID& param1);
    static const EntityResource* GetCurrencyItemResource();
};

class AIHTNPlannerDaemonPositionPicker {
public:
    WorldPosition FindPositionInAttackRange(const AIAttack* param1, const WorldPosition& param2);
};

class CollectableManager {
public:
    static bool IsCollectableForEntityResourceUnlocked(const EntityResource* param1);
    static bool IsCollectableUnlocked(const CollectableEntryBase* param1);
    static void SetCollectableForEntityResourceUnlocked(const EntityResource* param1);
    static void SetCollectableUnlocked(const CollectableEntryBase* param1);
};

class CrowdMember {
public:
    static void SetCarryingCrate(Entity* param1, bool param2, const EntityResource* param3, const BooleanFact* param4);
    static void SetSleepingIndoors(Entity* param1);
};

class StaminaComponent {
public:
    void AddModifier(const StaminaModifier* param1);
    void GetStamina(float& param1, float& param2);
    void RemoveModifier(const StaminaModifier* param1);
    void UseStamina(float param1, const StaminaUsageType* param2, bool& param3, float& param4);
};

class MaterialTypeResource {
public:
    bool IsKindOf(const MaterialTypeResource* param1);
};

class MonitoredAnimationComponent {
public:
    Entity* GetMonitoredAnimationTarget();
};

class ObjectCollection {
public:
    RTTIRefObject* GetObject(int param1);
    int GetObjectCount();
};

class GroundToAirTransitionComponent {
public:
    void GetAirTransitionState(bool* param1, bool* param2);
};

class LocalizedTextResource {
public:
    LocalizedText GetInstance(const Array_LocalizerVariable& param1);
};

class ResourceSet {
public:
    static const RTTIRefObject* FindResource(const ResourceSet* param1, const ResourceID* param2);
};

class SkinnedModel {
public:
    void SetPBDMaxDistanceMultiplier(float param1);
};

class DSFixedGunHeatComponent {
public:
    float GetCurrentHeat();
    float GetOverheatThreshold();
    float GetRecoverOverheatThreshold();
    bool IsOverheating();
};

class Scene {
public:
    static Entity* GetCurrentSceneEntity();
    bool IsRunning();
    void SendCustomMessage(const tchar* param1);
    void SetForcedActivation(ESceneForcedActiveState param1);
    void Start();
    void StartSceneScriptOnEntity(Entity* param1, const GraphProgramResource* param2);
    void Stop();
    void StopSceneScriptOnEntity(const Entity* param1, const GraphProgramResource* param2);
};

class InstigatorData {
public:
    Entity* GetEntity();
    AIFaction* GetFaction();
    Player* GetPlayer();
    bool IsSet();
};

class InventoryController {
public:
    void ForceMeleeWeapon();
    void HasAmmoAvailable(bool& param1, bool& param2, bool& param3);
    bool IsUsingHeavyWeapon();
};

class DSHeartmanRoomGraphArgs {
public:
    void GetHeartmanRoomGraphArgs(int* param1, int* param2, bool* param3);
};

class DSMissionBaggageResource {
public:
    static const DSGameBaggageListItem* GetDSGameBaggageListItem(const DSMissionBaggageResource* param1);
};

class GameMenu {
public:
    static void OpenMenuPage(Player* param1, Entity* param2, const GGUUID& param3, bool param4, const OpenMenuParameters* param5);
};

class VegetationCoverComponent {
public:
    float GetBoxAtmosphereFactor();
    bool IsInVegetation();
};

class AIHintSymbolResource {
public:
    const HtnSymbol* GetHintSymbol();
};

class GliderMover {
public:
    static void AddDisplacement(Entity* param1, const Vec3& param2);
};

class BodyVariantRuntimeComponent {
public:
    static bool IsActiveBodyVariant(Entity* param1, const GGUUID& param2);
    static void SetBodyVariant(Entity* param1, const GGUUID& param2);
};

class StunnedComponent {
public:
    bool IsActive();
};

class HealOverTimeComponent {
public:
    static void HealOverTime(Entity* param1, float param2, float param3, float param4);
};

class DSSimpleAnimationComponent {
public:
    bool IsDoneOrHold();
    void ResetMotion(uint32 param1, ELoopMode param2);
    bool SetMotion(uint32 param1, ELoopMode param2, bool param3);
};

class DSBulletSystem {
public:
    static void CreateBullet(const WorldPosition& param1, const WorldPosition& param2, uint32 param3, float param4, float param5, EDSAttackId param6, EDSBulletLineType param7, bool param8, bool param9, bool param10, bool param11, bool param12, EDSWeaponId param13, EDSMagazineId param14);
};

class DSBombDropperSettings {
public:
    void CalculateParametersFromPosition(const WorldPosition& param1, const WorldPosition& param2, float& param3, float& param4, float& param5);
    void DropBomb(const WorldPosition& param1, float param2, float param3, float param4);
    void DropBombFromPosition(const WorldPosition& param1, const WorldPosition& param2);
};

class DSNetOnlineObjectCommand {
public:
    static void DeleteObjectsFollowingSyncFlags();
    static void EndLastStranding();
    static bool IsLogin();
    static bool IsServiceEnd();
    static void QueuePreSearch(int32 param1, EDSQpidBandWidthLevel param2, const DSNetSyncPreSearchParam* param3);
    static void RequestCheckOnlineState();
    static void StartLastStranding();
};

class AI {
public:
    static bool gHtnFactMatchesQuery(const HtnTinyAtom* param1, const HtnTinyAtom* param2, uint32 param3);
};

class Controller {
public:
    void GetLook(float* param1, float* param2);
    bool WantsDismount();
};

class PropertyComponentResource {
public:
    const PropertyContainerResource* GetContainerResource();
};

class WorldPosition {
public:
    void CalculateStrafeAngleAndDistance(const WorldPosition& param1, float& param2, float& param3);
};

class ContextualSpeechComponent {
public:
    bool HasContextualSpeechToSay(const ContextualSpeechEvent* param1, Entity* param2, const RTTIObject* param3, const RTTIObject* param4);
    static void SayContextualSpeech(Entity* param1, const ContextualSpeechEvent* param2, Entity* param3, const RTTIObject* param4, const RTTIObject* param5);
};

class PickUpComponent {
public:
    void AddAmount(int param1);
};

class LastingHealComponent {
public:
    static bool IsLastingHealActive(const Entity* param1);
    static void StartLastingHeal(Entity* param1);
};

class DSRaceNodeGraphBindings {
public:
    static float GetRaceLapTime(int param1);
    static bool IsRaceMission(uint64 param1);
    static void SetStartTransform(const WorldTransform& param1);
    static void ShowRaceHUD(bool param1);
    static void StartRace();
};

class DSMissionEvaluationDataTablesByDeliveryPoint {
public:
    static const DSMissionEvaluationDataTable* FindEvaluationDataTable(const DSMissionEvaluationDataTablesByDeliveryPoint* param1, const DSMissionInfo* param2);
};

class PlayerNotificationComponent {
public:
    void ClearNotifications(const PlayerNotificationResource* param1);
    bool IsNotificationActive(const PlayerNotificationResource* param1);
    void ShowNotification(const PlayerNotificationResource* param1, const PlayerNotificationPriority* param2, const tchar* param3, const LocalizedTextResource* param4, bool param5, float param6, float param7, bool param8);
};

class ComboComponent {
public:
    static void GetComboLevel(const Entity* param1, int* param2, float* param3);
    static void GetComboTimer(const Entity* param1, float* param2, float* param3);
    static void IncreaseComboLevel(Entity* param1, int param2);
};

class DSGroundMovementComponent {
public:
    float DebugGetMoveSyncEventTime(float param1, uint32 param2, int param3);
    void DebugMovePositionToHeading(const WorldPosition& param1, float param2, float* param3, float* param4);
    void DebugSetControllerState(const tchar* param1, WorldPosition param2, WorldPosition param3, float param4, float param5, float param6, float param7, float param8, float param9, uint32 param10, float param11, Quat param12, float param13, WorldPosition param14, WorldPosition param15, bool param16, bool param17, bool param18, bool param19, bool param20, bool param21, bool param22, bool param23, bool param24, bool param25, bool param26, bool param27, bool param28, WorldPosition param29, bool param30);
};

class DSMissionOpenConditionList {
public:
    static Array_cptr_DSMissionOpenCondition GetOpenConditionList(DSMissionOpenConditionList* param1);
};

class PropertyComponent {
public:
    PropertyContainer* GetContainer();
};

class BuddyManager {
public:
    static void ClearBuddy(const BuddyComponentResource* param1);
    static Entity* GetBuddy(const BuddyComponentResource* param1, EBuddyState& param2);
    static void RegisterSceneForMessages(const BuddyComponentResource* param1, Scene* param2);
    static void RequestSpawnBuddy(const BuddyComponentResource* param1, EBuddySpawnRequestMode param2, const AIMarker* param3);
};

class LootComponent {
public:
    void DisableLooting();
    void EnableLooting();
    bool HasBeenLooted();
};

class DSMissionDiscreteCommand {
public:
    static void GetNuclearMissionVariables(float* param1, float* param2, float* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, bool* param9);
};

class RangedWeaponMode {
public:
    static void DisableEjectEffectsLocation(Entity* param1, const RangedWeaponModeResource* param2, const EjectEffectsLocationResource* param3);
    static void DisableEjectLocation(Entity* param1, const RangedWeaponModeResource* param2, const EjectLocationResource* param3);
};

class AIDefendArea {
public:
    const AIDefendAreaSet* GetParent();
};

class LightbakeOnly {
public:
    static bool GetLightbakeOnlyFlag();
};

class MultiSpawnpoint {
public:
    void Despawn();
    Array_cptr_Entity GetEntities();
    void MultiSpawn(int param1);
    void Spawn();
};

class DSNetOnlineObjectConfig {
public:
    void SetSphereRange(const WorldPosition& param1, float param2);
};

class SmartObjectComponent {
public:
    static bool CanSatisfyMainDesire(const Entity* param1, const Entity* param2);
    bool IsEnabled();
    void SetEnabled(bool param1);
};

class ModificationItemComponent {
public:
    static EModificationItemCategory GetCategory(const InventoryItem* param1);
    static int GetModificationCount(const InventoryItem* param1);
};

class ArtPartsVariation {
public:
    static void ApplyArtPartsVariation(Entity* param1, const ArtPartsVariationResource* param2);
};

class InventoryCollection {
public:
    void GiveTo(Inventory* param1, bool param2);
};

class DSMissionLargeSceneCommand {
public:
    static void ActivateFreeMissionScene(const GGUUID& param1, bool param2, bool param3);
    static void ActivateMissionLargeScene(const GGUUID& param1, bool param2, bool param3);
    static bool CheckAllMissionSceneIsStable();
    static bool IsRunningMissionLargeScene(const GGUUID& param1);
};

class PBDGraph {
public:
    static void Update(PBDGraphUpdateArgs& param1);
};

class ContextualEmotionComponent {
public:
    bool IsPerformingContextualEmotion(const ContextualEmotion* param1);
};

class DynamicPrefabCommand {
public:
    static void DisableDynamicPrefab(const GGUUID& param1, bool param2);
};

class MeleeWeaponComponent {
public:
    bool IsInMelee();
};

class DSDeliveryBotMenuInfo {
public:
    static bool CheckDeliveryBotMenuInfoState(EDSDeliveryBotMenuInfoState param1);
};

class InventoryCapacityComponent {
public:
    static int GetFreeSlotsLeft(Entity* param1, EInventoryCategory param2);
};

class AIMover {
public:
    void NavMeshRayCast(const WorldPosition& param1, bool* param2, bool* param3);
};

class UDSGroup {
public:
    static void PostEvent(RTTIRefObject* param1);
};

class AttackEventManager {
public:
    static AttackEventLink* CreateAttackEventLink(AttackEventLink* param1, EAttackEventLinkType param2, const Entity* param3, const InstigatorData* param4, Array_cptr_AttackEventTag param5, const CurveResource* param6, const String& param7);
};

class AnnotationPrimitiveInstance {
public:
    bool HasTag(const String& param1);
};

class CachedHelperLocationsComponent {
public:
    static void GetHelperLocationInEntitySpace(Entity* param1, const tchar* param2, Vec3& param3, Mat44& param4);
    static void GetHelperLocationInWorldSpace(Entity* param1, const tchar* param2, WorldPosition& param3, Mat44& param4);
};

class DSPrototypeNoiseAreaResource {
public:
    void MakeNoise();
};

class EntitlementResource {
public:
    static bool IsEntitlementAvailable(const EntitlementResource* param1);
};

class DSMissionFactsResource {
public:
    static Array_cptr_BooleanFact GetFacts(DSMissionFactsResource* param1);
};

class PlayerLoadoutManagerResource {
public:
    static void GiveLoadoutToPlayer(const PlayerLoadout* param1);
};

class ForceFieldManager {
public:
    void GetForce(const WorldPosition& param1, const Vec3& param2, const Vec3& param3, float param4, float param5, EForceFieldCategoryMask param6, Vec3* param7);
};

class DSDebugNodeGraphGroup {
public:
    static bool DebugIsPressed(uint32 param1);
};

class FactMusicPresetCollection {
public:
    Array_cptr_FactMusicPreset GetPresets();
};

class AIAgent {
public:
    bool FindDaemonByRTTI(const RTTI& param1, AIHTNPlannerDaemon** param2);
};

class DSMissionRankingCommand {
public:
    static uint32 GetCurrentRankingSeasonId();
    static bool IsNightmareRankingMode();
};

class DSStringHashResource {
public:
    static int32 GetStringHash(const DSStringHashResource* param1);
};

class KjpSoundGraphNodeGroup {
public:
    static float GetSoundTimeScaleExport();
};

class SequenceNetworkComponent {
public:
    SequenceNetworkInstance* GetSequenceNetworkInstance();
};

class HUDLogicGroupResource {
public:
    static void HighlightHUDGroup(const HUDLogicGroupResource* param1, const Player* param2);
};

