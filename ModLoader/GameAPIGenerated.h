#pragma once

#define LUA_GAME_API_IMPORTED true
#include <cstdint>
#include <sol/sol.hpp>

// Define All Forward Type Here!
struct AI;
struct AIAgent;
struct AIAttack;
struct AIAuralStimulusResource;
struct AIBehaviorGroup;
struct AIBehaviorGroupMemberComponent;
struct AIContextHintResource;
struct AIDefendArea;
struct AIDefendAreaSet;
struct AIDirectableAgent;
struct AIFaction;
struct AIGroup;
struct AIHTNPlannerDaemon;
struct AIHTNPlannerDaemonPerchPoints;
struct AIHTNPlannerDaemonPositionPicker;
struct AIHintSymbolResource;
struct AIIndividual;
struct AIIndividualComponent;
struct AIManager;
struct AIManagerGame;
struct AIMarker;
struct AIMover;
struct AINavMeshComponent;
struct AIObserverComponent;
struct AIPatrolPath;
struct AIPerchMarker;
struct AIScanExpressionParams;
struct AISignalType;
struct AIUsableComponent;
struct AIVisualStimulusResource;
struct AIWeaponPreference;
struct ActiveStatesQueue;
struct AmbienceCycle;
struct AnimationData;
struct AnimationManager;
struct AnimationNodeProceduralLook;
struct AnnotationComponent;
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
struct ArtPartsData;
struct ArtPartsVariation;
struct ArtPartsVariationResource;
struct AttachPhysicsRagdollToHelperMover;
struct AttachToEntityMover;
struct AttachToHelperMover;
struct AttachToHelperPositionMover;
struct AttachedLightsComponent;
struct AttackEventContext;
struct AudioPlayerComponent;
struct BodyVariantRuntimeComponent;
struct BoolPropertyBase;
struct BooleanFact;
struct BoundingBox3;
struct BuddyComponent;
struct BuddyComponentResource;
struct BuddyManager;
struct BulletTimeComponent;
struct CPUProfileWindow;
struct CachedHelperLocationsComponent;
struct CameraModeResource;
struct CameraModifierResource;
struct CharacterProgressionComponent;
struct ChildEntityComponent;
struct CollectableEntryBase;
struct CollectableManager;
struct CollisionTrigger;
struct ComboComponent;
struct ComponentLifetimeComponent;
struct ConstraintComponent;
struct ContextualActionComponent;
struct ContextualActionVictimComponent;
struct ContextualEmotion;
struct ContextualEmotionComponent;
struct ContextualSpeechComponent;
struct ContextualSpeechEvent;
struct ControlledEntity;
struct CoreTelemetryService;
struct CountdownTimer;
struct CraftingComponent;
struct CraftingRecipe;
struct CrowdMember;
struct CrowdSpawnManager;
struct CrowdZone;
struct CubemapbakeOnly;
struct CurveResource;
struct DHighwaySyncControlCommand;
struct DSAirplaneGameActor;
struct DSAirplaneGameActorLocator;
struct DSAmelieGestureComponent;
struct DSAnyEventStateCommand;
struct DSBaggage2;
struct DSBaggage2Manager;
struct DSBaggageUnit;
struct DSBombDropperSettings;
struct DSBulletSystem;
struct DSCameraInterface;
struct DSCameraModeBase;
struct DSCatalogueListItemCommand;
struct DSCatcher;
struct DSCatcherManagerCommand;
struct DSCliffMissionCommand;
struct DSConstructionPointManager;
struct DSCountTimerBase;
struct DSCreateMissionBaggageNodeCommand;
struct DSDataLibraryBasicNode;
struct DSDebugEntryCommand;
struct DSDebugNodeGraphGroup;
struct DSDebugPrintString;
struct DSDeliveredBaggageArgs;
struct DSDeliveredMemoryChipArgs;
struct DSDeliveryBotEntity;
struct DSDeliveryBotGameActor;
struct DSDeliveryBotMenuInfo;
struct DSDeliveryManager;
struct DSDeliveryPointInfoCommand;
struct DSDeliveryPointInfoResource;
struct DSDeliverySurveyCommand;
struct DSEffectsNodeGraphBindings;
struct DSEnvironmentManagerNodes;
struct DSFiringRangeNodeGraphBindings;
struct DSFixedGunGameActorLocator;
struct DSFixedGunHeatComponent;
struct DSGameBaggageListItem;
struct DSGameState;
struct DSGazerManagerCommand;
struct DSGimmickGraphCommand;
struct DSGraphCtrlBaggageArgs;
struct DSGraphServiceArgs;
struct DSGraphServiceReturnValue;
struct DSGroundMovementComponent;
struct DSHeartmanRoomGraphArgs;
struct DSHouseholdInfoResource;
struct DSIntruderDetectorComponent;
struct DSJointAimToBaseComponent;
struct DSLikeCommand;
struct DSLocator;
struct DSMailBasicNode;
struct DSMisionEvaluationCommand;
struct DSMissioDebugUnlockAllItemsCommand;
struct DSMissionAbstractTodoNodeResource;
struct DSMissionBaggageCountConditionResource;
struct DSMissionBaggageNodeCommand;
struct DSMissionBaggageResource;
struct DSMissionBaggageWeightConditionResource;
struct DSMissionBasicNode;
struct DSMissionCheckCommand;
struct DSMissionCollectorsItemCommand;
struct DSMissionConditionResourceBase;
struct DSMissionDiscreteCommand;
struct DSMissionEvaluationDataRecord;
struct DSMissionEvaluationDataTable;
struct DSMissionEvaluationDataTablesByDeliveryPoint;
struct DSMissionEvaluationDataTablesByThreshold;
struct DSMissionEventTimerCommand;
struct DSMissionFactsResource;
struct DSMissionGoalsNotificationSettingsResource;
struct DSMissionGoalsResource;
struct DSMissionGraphService;
struct DSMissionInfo;
struct DSMissionInfoStack;
struct DSMissionLargeSceneCommand;
struct DSMissionLogicBlock;
struct DSMissionLogicCommand;
struct DSMissionLogicMiscCommand;
struct DSMissionMiscCommand;
struct DSMissionOpenCondition;
struct DSMissionOpenConditionList;
struct DSMissionOpenList;
struct DSMissionOpenNode;
struct DSMissionProgressCommand;
struct DSMissionRankingCommand;
struct DSMissionResourceList;
struct DSMissionReward2;
struct DSMissionSafeConditionResource;
struct DSMissionSafetyHouseCommand;
struct DSMissionServiceConditionResource;
struct DSMissionSpecialReportResource;
struct DSMissionSpeedConditionResource;
struct DSMissionSwitchSectionSetting;
struct DSMissionSystem;
struct DSMissionTerminalCommand;
struct DSMovementPath;
struct DSMuleCPGameActorLocator;
struct DSMuleConfig;
struct DSMuleGameActorUnitResource;
struct DSMusicPlayerTrackResource;
struct DSNPCPriorityList;
struct DSNetOnlineObjectCommand;
struct DSNetOnlineObjectConfig;
struct DSNetSyncPreSearchParam;
struct DSNpcAlertZone;
struct DSNpcCombatSettings;
struct DSOnlineMissionCommand;
struct DSOrderedBaggageArgs;
struct DSParkingMenuInfo;
struct DSPatrolPath;
struct DSPatrolPathGroup;
struct DSPatrolPathManager;
struct DSPatrolPathPriorityList;
struct DSPatrolPathPriorityListBase;
struct DSPlayRecordBasicNode;
struct DSPlayerEntity;
struct DSPlayerNodeExporter;
struct DSPlayerPadCheckBoxes;
struct DSPlayerSystem;
struct DSPrototypeNoiseAreaResource;
struct DSQpidUnitCommand;
struct DSRaceNodeGraphBindings;
struct DSRadioEvent;
struct DSRadioNodeGraphBindings;
struct DSResidentsBasicNode;
struct DSRoad;
struct DSRumbleEventComponent;
struct DSSceneCommand;
struct DSShellLauncherGameActorLocator;
struct DSShellResource;
struct DSSimpleAnimationComponent;
struct DSSleepAfterShaderAnimComponent;
struct DSSound;
struct DSSoundNodeGraphBindings;
struct DSStringHashResource;
struct DSTelopTipsResource;
struct DSTerminalGraphArgs;
struct DSTerminalGraphBonusArgs;
struct DSTerminalGraphEvaluationArgs;
struct DSTipsResourceBase;
struct DSTipsResourceList;
struct DSUIDeviceMapMenuTutorialRouteResource;
struct DSUIInfoLogHUDTableItemResource;
struct DSUIMissionResultUnlockFunctionDialogResource;
struct DSUINodeGraphBindings;
struct DSUIOperationGuideHUDTableGroupResource;
struct DSWeaponAimArc;
struct DSWeaponSystem;
struct DSWeather;
struct DSWelcomeHoloAnimationDistanceSetting;
struct DSWelcomeHoloAnimationSyncSet;
struct DSWelcomeHoloComponent;
struct DSWorldMapHoloComponent;
struct DamageOverTimeComponent;
struct DamagePassOnComponent;
struct DamageSettings;
struct DamageTypeGroup;
struct DamageTypeResource;
struct DebugTool;
struct DefendAreaUserComponent;
struct Destructibility;
struct DestructibilityConstraint;
struct DestructibilityPart;
struct DestructibilityPartBase;
struct DestructibilityPartStateResource;
struct DiscoverableAreaInstance;
struct DispensableCategoryResource;
struct DispensableEntityManager;
struct DsCheckStationGraphCommand;
struct DsGameActorCommand;
struct DsHiggsGraphCommand;
struct DsMuleManager;
struct DsMuleMissionCommand;
struct DsNpcGeneralCommand;
struct DsNpcManager;
struct DynamicPrefabCommand;
struct DynamicSequenceEntityVariable;
struct EconomyManagerResource;
struct EffectComponent;
struct EjectEffectsLocationResource;
struct EjectLocationResource;
struct EntitlementResource;
struct EntityArrayComponent;
struct EntityComponentResource;
struct EntityInstancePropertyBase;
struct EntityLifetime;
struct EntityPlaceHolder;
struct EntitySoundNodeState;
struct EnumFact;
struct EnumFactEntry;
struct EnvelopeData;
struct EnvelopeResource;
struct EnvironmentSound;
struct EnvironmentSoundManager;
struct EquipmentSlotComponent;
struct ExtraArmorComponent;
struct ExtraHealthComponent;
struct FRGBAColor;
struct FacialAnimationComponent;
struct FactDatabase;
struct FactMusicPreset;
struct FactMusicPresetCollection;
struct FastTravelSystem;
struct FloatFact;
struct FloatPropertyBase;
struct FocusComponent;
struct FocusTargetComponent;
struct FocusTargetComponentResource;
struct ForceFieldManager;
struct GCore;
struct Game;
struct GameActorLocator;
struct GameMenu;
struct GameModule;
struct GameMovie;
struct GameSettings;
struct GestureComponent;
struct GliderMover;
struct GraphProgramResource;
struct GraphProperty;
struct GraphSound;
struct GrenadeTriggerComponent;
struct GroundToAirTransitionComponent;
struct HUDLogicGroupResource;
struct HairModelComponent;
struct HealOverTimeComponent;
struct HitReactionComponent;
struct HitReactionResource;
struct HitReactionSet;
struct HitReactionSeverityModifier;
struct HitReactionSeverityProperty;
struct HitReactions;
struct HtnSymbol;
struct HtnTinyAtom;
struct Humanoid;
struct HumanoidController;
struct HumanoidMover;
struct HumanoidResource;
struct InstigatorData;
struct IntPropertyBase;
struct IntegerFact;
struct Inventory;
struct InventoryCapacityComponent;
struct InventoryCollection;
struct InventoryController;
struct InventoryItem;
struct InventoryWeapon;
struct JointID;
struct JointSetID;
struct KjpSoundGraphNodeGroup;
struct KnockDownStateComponent;
struct KnockDownStateEntryResource;
struct Landmark;
struct LastingHealComponent;
struct Level;
struct LevelBasedXpReward;
struct LightbakeOnly;
struct LocalizedText;
struct LocalizedTextResource;
struct LootComponent;
struct MaterialTypeResource;
struct Math;
struct MeleeBlockComponent;
struct MeleeWeaponComponent;
struct MeleeWeaponMode;
struct MenuSaveDataDialog;
struct Model;
struct ModelPartResource;
struct ModificationItemComponent;
struct ModificationSocketComponent;
struct MonitoredAnimationComponent;
struct MorphemeAnimationGraphInstance;
struct MortallyWoundedComponent;
struct MountModeID;
struct MountableComponent;
struct MounterComponent;
struct Mover;
struct MovieResource;
struct MovieTag;
struct MultiSpawnpoint;
struct NPCScheduleManager;
struct NPCScheduleResource;
struct NavMeshArea;
struct NavMeshBuilderSettings;
struct NodeGraph;
struct ObjectCollection;
struct OpenMenuParameters;
struct OpenMenuSystem;
struct PBDGraph;
struct PBDGraphUpdateArgs;
struct PathHelperNodeResource;
struct PathMover;
struct PathResource;
struct PerkLevel;
struct PhysicsConstraintResource;
struct PickUpComponent;
struct PinDownComponent;
struct PlayGoManager;
struct PlayerGame;
struct PlayerLoadout;
struct PlayerLoadoutManagerResource;
struct PlayerNotificationComponent;
struct PlayerNotificationPriority;
struct PlayerNotificationResource;
struct PlayerOutfit;
struct PlayerOutfitComponent;
struct PlayerOutfitTheme;
struct PlayerParkourComponent;
struct PlayerProfile;
struct PoseID;
struct ProceduralLookResource;
struct ProceduralLookState;
struct PropertyComponent;
struct PropertyComponentResource;
struct PropertyContainer;
struct PropertyContainerResource;
struct Quat;
struct QuestInstance;
struct QuestResource;
struct QuestSection;
struct QuestSystem;
struct RTTIHandleObject;
struct RagdollComponent;
struct RangedWeaponMode;
struct RangedWeaponModeResource;
struct Resource;
struct ResourceID;
struct ResourceSet;
struct RetractingPartsComponent;
struct ReverbPresetResource;
struct RopeComponent;
struct RopeManagerComponent;
struct Route;
struct RouteMover;
struct RuntimeAnimationStateResource;
struct Scene;
struct SceneComponent;
struct ScenePrefabInstance;
struct SentenceGroupResource;
struct SentenceResource;
struct SequenceComponent;
struct SequenceEntityVariable;
struct SequenceNetworkComponent;
struct SequenceNetworkInstance;
struct SequenceNetworkNode;
struct ShaderAnimComponent;
struct ShaderVariableComponent;
struct ShieldComponent;
struct SimplePathMover;
struct SkeletonAnimationEventPayload;
struct SkeletonAnimationResource;
struct SkinnedModel;
struct SmartObjectComponent;
struct SnowInteractionSystem;
struct SoundComponent;
struct SoundEnvironment;
struct SoundGroup;
struct SoundMixResource;
struct SoundMixStateResource;
struct SoundResource;
struct SoundShape;
struct SoundSystem;
struct SpawnSetup;
struct SpawnSetupNonPlaceholder;
struct SpawnSoundNodeState;
struct SpawnpointGame;
struct StaggerStateComponent;
struct StaminaComponent;
struct StaminaModifier;
struct StaminaUsageType;
struct StreamingTileResource;
struct StreamingTileStateResource;
struct StringToolsGroup;
struct StunnedComponent;
struct SubmixResource;
struct TagEvent;
struct TagProperty;
struct TalkComponent;
struct TalkPriority;
struct TetheredAmmoPileComponent;
struct ThirdPersonPlayerCameraComponent;
struct Throwable;
struct TileBasedStreamingStrategyInstance;
struct TrackingPath;
struct TrophyResource;
struct TrophySystem;
struct UDSEventMechanicUse;
struct UDSEventSetFloatStat;
struct UDSEventSetIntStat;
struct UDSEventSetUintStat;
struct UDSGroup;
struct UDSSystem;
struct UTFToolsGroup;
struct Vec3Fact;
struct Vec3PropertyBase;
struct VegetationCoverComponent;
struct VehicleEntity;
struct VoiceComponent;
struct VoiceResource;
struct WString;
struct WaterDetectionComponent;
struct WaterInteractionSystem;
struct WaveNodeParameters;
struct WaveNodeState;
struct WaveResource;
struct WeaponMode;
struct WeatherSetup;
struct WeatherSystem;
struct WieldStowInventory;
struct WorldData;
struct WorldDataSampleRequestState;
struct WorldDataTile;
struct WorldDataType;
struct WorldEncounterManager;
struct WorldNode;
struct WorldPosition;
struct WorldPositionPropertyBase;
struct WwiseGroup;
struct WwiseID;
struct WwiseWemResource;
struct ZiplineDetectionComponent;
#ifndef AIVisualStimulusResource
struct AIVisualStimulusResourceProxy;
#define AIVisualStimulusResource AIVisualStimulusResourceProxy
#endif
#ifndef DSMuleCPGameActorLocator
struct DSMuleCPGameActorLocatorProxy;
#define DSMuleCPGameActorLocator DSMuleCPGameActorLocatorProxy
#endif
#ifndef DSRadioEvent
struct DSRadioEventProxy;
#define DSRadioEvent DSRadioEventProxy
#endif
enum class EDSBaggage2CarrierType : char {
    None = 0,
    Player = 1,
    Cart = 2,
    Truck = 3,
    Bike = 4,
    EDSBaggage2CarrierTypeUnk_0 = 5,
    Post = 6,
    Terminal = 7,
    Mule = 8,
    MulePost = 9,
    EDSBaggage2CarrierTypeUnk_1 = 10,
    EDSBaggage2CarrierTypeUnk_2 = 11,
    Ground = 12,
    AutoDeliveryCarrier = 13,
    TerminalShelf = 14,
    Warehouse = 15,
    MissionDeliveredStorage = 16,
    PrivateRoomStorage = 17,
    AreaChangeStorage = 18,
    SupportHunter = 19,
    PlayerBackup = 20,
    EDSBaggage2CarrierTypeUnk_3 = 21,
    JellyFish = 22,
};
#ifndef DSPlayerPadCheckBoxes
struct DSPlayerPadCheckBoxesProxy;
#define DSPlayerPadCheckBoxes DSPlayerPadCheckBoxesProxy
#endif
#ifndef PropertyContainer
struct PropertyContainerProxy;
#define PropertyContainer PropertyContainerProxy
#endif
#ifndef WaveResource
struct WaveResourceProxy;
#define WaveResource WaveResourceProxy
#endif
#ifndef SequenceNetworkNode
struct SequenceNetworkNodeProxy;
#define SequenceNetworkNode SequenceNetworkNodeProxy
#endif
#ifndef TagProperty
struct TagPropertyProxy;
#define TagProperty TagPropertyProxy
#endif
#ifndef DSTelopTipsResource
struct DSTelopTipsResourceProxy;
#define DSTelopTipsResource DSTelopTipsResourceProxy
#endif
#ifndef DSUIDeviceMapMenuTutorialRouteResource
struct DSUIDeviceMapMenuTutorialRouteResourceProxy;
#define DSUIDeviceMapMenuTutorialRouteResource DSUIDeviceMapMenuTutorialRouteResourceProxy
#endif
enum class EDSPlayerShoesType : char {
    BareFoot = 0,
    ShoesA_Unused = 1,
    SoleGrass = 2,
    NormalBoots = 3,
    StableBootsLv1 = 4,
    StableBootsLv2 = 5,
    StableBootsLv3 = 6,
    MuleBoots = 7,
    TerroristBoots = 8,
    ChiralBoots = 9,
    ReflectBoots = 10,
};
#ifndef CrowdZone
struct CrowdZoneProxy;
#define CrowdZone CrowdZoneProxy
#endif
enum class EDSDeliveryBotDockingLocation : char {
    Hangar = 0,
    LaunchBay = 1,
    Undocked = 2,
    Invalid = 3,
};
#ifndef AnnotationResource
struct AnnotationResourceProxy;
#define AnnotationResource AnnotationResourceProxy
#endif
enum class EDSArea : int16_t {
    Area00 = 0,
    Area01 = 100,
    Area02 = 200,
    Area03 = 300,
    Area04 = 400,
    Warrior01 = 500,
    Warrior02 = 510,
    Warrior03 = 520,
    Beach01 = 600,
    Empty = 65535,
    Frange01 = 700,
    Nm01 = 1100,
    Nm02 = 1200,
    Nm04 = 1400,
    EDSAreaUnk_0 = 10000,
    EDSAreaUnk_1 = 10001,
    EDSAreaUnk_2 = 10002,
    EDSAreaUnk_3 = 10003,
    EDSAreaUnk_4 = 10100,
    EDSAreaUnk_5 = 10101,
    EDSAreaUnk_6 = 10103,
    EDSAreaUnk_7 = 10104,
    EDSAreaUnk_8 = 10200,
    EDSAreaUnk_9 = 15001,
    EDSAreaUnk_a = 15002,
    EDSAreaUnk_b = 20000,
    EDSAreaUnk_c = 30000,
    EDSAreaUnk_d = 10004,
    EDSAreaUnk_e = 10105,
};
#ifndef BoolPropertyBase
struct BoolPropertyBaseProxy;
#define BoolPropertyBase BoolPropertyBaseProxy
#endif
#ifndef PerkLevel
struct PerkLevelProxy;
#define PerkLevel PerkLevelProxy
#endif
#define Array_uint Array<uint>
enum class EDSEvaluationActingType : int {
    None = 0,
    Bad = 1,
    Normal = 2,
    Good = 3,
};
#ifndef DestructibilityPartBase
struct DestructibilityPartBaseProxy;
#define DestructibilityPartBase DestructibilityPartBaseProxy
#endif
enum class EDSUIWeaponSelectorCategoryType : int {
    INVALID = 0,
    MAINWEAPON = 1,
    ITEM = 2,
    EQUIPMENT = 3,
    MAGAZINE = 4,
};
#ifndef EntityComponentResource
struct EntityComponentResourceProxy;
#define EntityComponentResource EntityComponentResourceProxy
#endif
enum class EDSMajorMember : char {
    None = 0,
    Diehardman = 1,
    Deadman = 2,
    Heartman = 3,
    Mama = 4,
    Lockne = 5,
    Fragile = 6,
    BB = 7,
    BT = 8,
    BridgesOrganization = 9,
    PorterMule = 10,
    ChiralArtistDaughter = 11,
    Langdon = 12,
};
enum class ERegion : int {
    Invalid = -1,
    Europe1 = 0,
    Europe2 = 1,
    Europe3 = 2,
    US = 3,
    LatinAmerica = 4,
    Japan = 5,
    Asia = 6,
    China = 7,
    UK = 8,
    Germany = 9,
    All = 10,
    Test = 11,
};
enum class EExposedCombatSituationSummary : int {
    invalid = 0,
    relaxed = 1,
    suspicious = 2,
    identified_unknown = 3,
    identified_observed = 4,
};
enum class EDSMissionGoalsNotificationReason : char {
    ToShowCurrentShortTermGoal = 0,
    ToShowCurrentLongTermGoal = 1,
    ToRemindCurrentGoalsAndTodos = 2,
};
#ifndef HitReactionSeverityProperty
struct HitReactionSeverityPropertyProxy;
#define HitReactionSeverityProperty HitReactionSeverityPropertyProxy
#endif
#ifndef Vec3Fact
struct Vec3FactProxy;
#define Vec3Fact Vec3FactProxy
#endif
enum class EDSUIFadeColorType : char {
    Black = 0,
    White = 1,
    Auto = 2,
};
#ifndef DSMissionGoalsNotificationSettingsResource
struct DSMissionGoalsNotificationSettingsResourceProxy;
#define DSMissionGoalsNotificationSettingsResource DSMissionGoalsNotificationSettingsResourceProxy
#endif
#ifndef ContextualSpeechEvent
struct ContextualSpeechEventProxy;
#define ContextualSpeechEvent ContextualSpeechEventProxy
#endif
#define Array_int Array<int>
#ifndef MountModeID
struct MountModeIDProxy;
#define MountModeID MountModeIDProxy
#endif
enum class EDSUICommonTelopHUDSound : char {
    Landmark_Bridges = 0,
    Landmark_CheckPoint = 1,
    Landmark_Mission = 2,
    Landmark_Preppers = 3,
    Tutorial_Intro = 4,
    None = 5,
};
enum class EDSUIFadeTimeType : char {
    Short = 0,
    Middle = 1,
    Long = 2,
    SuperLong = 3,
    Immediately = 4,
    Custom = 5,
};
#ifndef UDSEventSetFloatStat
struct UDSEventSetFloatStatProxy;
#define UDSEventSetFloatStat UDSEventSetFloatStatProxy
#endif
#ifndef CollectableEntryBase
struct CollectableEntryBaseProxy;
#define CollectableEntryBase CollectableEntryBaseProxy
#endif
#ifndef DSNPCPriorityList
struct DSNPCPriorityListProxy;
#define DSNPCPriorityList DSNPCPriorityListProxy
#endif
#define Array_cptr_FactMusicPreset Array<const FactMusicPreset*>
enum class EDSDeliveryBotAIMode : char {
    Follow = 0,
    Return = 1,
    Delivery = 2,
};
#ifndef DispensableCategoryResource
struct DispensableCategoryResourceProxy;
#define DispensableCategoryResource DispensableCategoryResourceProxy
#endif
#ifndef EnvelopeData
struct EnvelopeDataProxy;
#define EnvelopeData EnvelopeDataProxy
#endif
enum class EDSGameBaggageListItem_ContentsDamageType : char {
    Normal = 0,
    Fragile = 1,
    Delicate = 2,
    Danger = 3,
    SensitiveToTimefall = 4,
    Equipment = 5,
    LivingThing = 6,
    MustKeepHorizontally = 7,
    Cool = 8,
};
#ifndef RTTIHandleObject
struct RTTIHandleObjectProxy;
#define RTTIHandleObject RTTIHandleObjectProxy
#endif
#define Array_cptr_InventoryItem Array<const InventoryItem*>
#ifndef HitReactionSet
struct HitReactionSetProxy;
#define HitReactionSet HitReactionSetProxy
#endif
enum class EDSUIUnlockUIFlagType : int {
    None = 0,
    UnlockHandCuffsDeviceMenu = 1,
    UnlockWeatherNews = 2,
    UnlockWeaponSelectorHUD = 3,
    UnlockChiralNetworkUI = 4,
    UnlockRadio = 5,
    UnlockPremiumDelivery = 6,
    UnlockStructureLevelUp = 7,
    UnlockStolenCataloguePrinter = 8,
    UnlockAutobotMissionMenu = 9,
    UnlockDeliveryLostBaggageMenu = 10,
    UnlockGiftBaggageMenu = 11,
    UnlockGiftCrystalMenu = 12,
    UnlockGiftMemoryChipMenu = 13,
    UnlockToPublicBoxMenu = 14,
    UnlockFromPublicBoxMenu = 15,
    UnlockPrivateRoom = 16,
    UnlockCatalogueMenu = 17,
    UnlockVehicleMenu = 18,
    UnlockStructureCustom = 19,
    UnlockStructureRecover = 20,
    UnlockBBStressGauge = 21,
    UnlockBBStressGaugeDeactive = 22,
    UnlockShoesLifeGauge = 23,
    UnlockChiralNumDisplay = 24,
    UnlockMailMenu = 25,
    UnlockSupplyRequestMenu = 26,
    UnlockBridgeLinkMenu = 27,
    UnlockPauseControllerMenuHandCuffs = 28,
    UnlockPauseControllerMenuTool = 29,
    UnlockPauseControllerMenuStructureDevice = 30,
    UnlockPauseControllerMenuCombat = 31,
    UnlcokPauseControllerMenuVehicle = 32,
    UnlcokPauseControllerMenuBullet = 33,
    UnlockQpidUI = 34,
    UnlockSimpleMission = 35,
    UnlockAimHUD = 36,
    UnlockUpWeaponSelectorHUD = 37,
    UnlockRightWeaponSelectorHUD = 38,
    UnlockDownWeaponSelectorHUD = 39,
    UnlockLeftWeaponSelectorHUD = 40,
    UnlockPauseMenuMissionTodo = 41,
    UnlockResultOrderPersonDisplay = 42,
    UnlockTakeOutMaterialMenu = 43,
    UnlockGiftTrashMenu = 44,
    UnlockEntrustMenu = 45,
    UnlockDPadHUDSunglassesIcon = 46,
    UnlockDPadHUDSunglassesAndShoesIcon = 47,
    UnlockDPadHUDSunglassesAndShoesAndSuitPartsIcon = 48,
    UnlockDeliverySupplyMenu = 49,
    UnlockCliffMemoriesWorldWarII = 50,
    UnlockCliffMemoriesVietnamWar = 51,
    UnlockCliffMemoriesFlashbackMenu = 52,
    UnlockUniformMenuCapColorChange = 53,
    UnlockUniformMenuGlassesAColorChange = 54,
    UnlockUniformMenuGlassesBColorChange = 55,
    UnlockUniformMenuSuitsColorChange = 56,
    UnlockTimerHUD = 57,
    UnlockTarBeltCraterInMap = 58,
    UnlockMountainKnotPondInMap = 59,
    UnlockShoesChange = 60,
    UnlockSimpleMissionForM560 = 61,
    UnlockRankingOrderMenu = 62,
    UnlockRankingDeliveryMenu = 63,
    UnlockDeliveryMenuFiringRange = 64,
    UnlockRankingRewardMenu = 65,
    UnlockAutobotHanger = 66,
    UnlockDeviceRankingMenu = 67,
    UnlockCliffMemoriesWorldWarI = 68,
    UnlockBossNightmare = 69,
    UnlockBossNightmareRanking = 70,
};
#ifndef PropertyContainerResource
struct PropertyContainerResourceProxy;
#define PropertyContainerResource PropertyContainerResourceProxy
#endif
#ifndef HitReactionResource
struct HitReactionResourceProxy;
#define HitReactionResource HitReactionResourceProxy
#endif
#ifndef DamageSettings
struct DamageSettingsProxy;
#define DamageSettings DamageSettingsProxy
#endif
enum class EDSQpidBandWidthLevel : char {
    BandWidthLevel0 = 0,
    BandWidthLevel1 = 1,
    BandWidthLevel2 = 2,
    BandWidthLevel3 = 3,
    BandWidthLevel4 = 4,
    BandWidthLevel5 = 5,
};
enum class EDSQpidUnitState : char {
    QpidUnitStateUndiscovered = 0,
    QpidUnitStateUnconnected = 1,
    QpidUnitStateJoinedBridges = 2,
    QpidUnitStateJoinedUCA = 3,
};
enum class EDeviceFunction : int {
    Invalid = -1,
    PrimaryFire = 4,
    SwitchFire = 5,
    NextAmmo = 6,
    PreviousAmmo = 7,
    MeleeWeaponPrimaryAttack = 8,
    MeleeWeaponSecondaryAttack = 9,
    MeleeWeaponDashAttack = 10,
    ZoomSwitch = 11,
    ZoomModeSwitch = 12,
    Aim = 13,
    SprintToggle = 14,
    Jump = 15,
    Use = 16,
    Relocate = 17,
    Loot = 18,
    PickupWeapon = 19,
    Reload = 20,
    Crouch = 21,
    Slide = 22,
    Cover = 23,
    Vault = 24,
    Dodge = 25,
    DropWeapon = 26,
    NextWeapon = 27,
    SwimDescend = 28,
    SwimAscend = 29,
    ToggleSlowMo = 30,
    CloseCombat = 31,
    Block = 32,
    Suicide = 33,
    LockAim = 34,
    SkipSequence = 35,
    SpectatorToggleSpawnMenu = 36,
    DropFromLedge = 37,
    DropToLedge = 38,
    Heal = 39,
    CounterBucking1 = 40,
    CounterBucking2 = 41,
    PrimaryContextualAction = 42,
    SecondaryContextualAction = 43,
    TertiaryContextualAction = 44,
    RequestVoiceComm = 45,
    AAGunFirePrimary = 46,
    AAGunFireSecondary = 47,
    AAGunZoomSwitch = 48,
    SelectUp = 49,
    SelectDown = 50,
    SelectLeft = 51,
    SelectRight = 52,
    CharacterScreenCampaign = 53,
    CharacaterScreenOnline = 54,
    IngameMainMenu = 57,
    OptionScreenCampaign = 55,
    OptionScreenOnline = 56,
    MountHorse = 58,
    DismountHorse = 59,
    DismountHorseSpecial = 60,
    MountSpeedUp = 61,
    MountSpeedDown = 62,
    MountEmergencyStop = 63,
    MountRangedAttack = 64,
    MountMeleeAttack = 65,
    MountSecondaryMeleeAttack = 66,
    CallHorse = 67,
    MountDuckRider = 68,
    InventoryNextWeapon = 69,
    InventorySelection = 70,
    InventoryUseTool = 72,
    InventoryToggleToolWheel = 73,
    InventoryAmmoCraft = 71,
    InventoryQuickUseToolLeft = 74,
    InventoryQuickUseToolRight = 75,
    InventoryQuickUseToolUp = 76,
    InventoryQuickUseToolDown = 77,
    ProtoRight = 78,
    ProtoLeft = 79,
    ProtoUp = 80,
    ProtoDown = 81,
    ProtoCross = 82,
    ProtoSquare = 83,
    ProtoTriangle = 84,
    ProtoCircle = 85,
    ProtoShoulderLeft1 = 86,
    ProtoShoulderLeft2 = 87,
    ProtoShoulderRight1 = 88,
    ProtoShoulderRight2 = 89,
    ProtoLeftAnalog = 90,
    ProtoRightAnalog = 91,
    ProtoSelect = 92,
    ProtoStart = 93,
    Tag = 94,
    Untag = 95,
    UntagAll = 96,
    Focus = 97,
    FocusTagStatusInfo = 98,
    FocusWeaponSelect = 99,
    FocusUp = 100,
    FocusDown = 101,
    FocusLeft = 102,
    FocusRight = 103,
    BulletTime = 104,
    PlaceClimbGrip = 105,
    LureEnemy = 107,
    AudiologToggle = 108,
    DsPickup = 109,
    DsSubject = 110,
    DsHold = 111,
    DsShoot = 112,
    DsAction = 113,
    DsReload = 114,
    DsStance = 115,
    DsDodge = 116,
    DsDash = 117,
    DsStockChange = 118,
    DsDemoPause = 119,
    DsPhotoMode = 120,
    DsEcho = 121,
    DsDeviceButtonL1 = 122,
    DsDeviceButtonL2 = 123,
    DsDeviceButtonL3 = 124,
    DsDeviceButtonR1 = 125,
    DsDeviceButtonR2 = 126,
    DsDeviceButtonR3 = 127,
    DsDeviceButtonTriangle = 128,
    DsDeviceButtonSquare = 129,
    DsDeviceButtonCross = 130,
    DsDeviceButtonCircle = 131,
    DsDeviceButtonDPadLeft = 132,
    DsDeviceButtonDPadRight = 133,
    DsDeviceButtonDPadUp = 134,
    DsDeviceButtonDPadDown = 135,
    DsDeviceButtonOption = 136,
    DsDeviceButtonTouchPad = 137,
    DsDeviceButtonTouchPadLeft = 138,
    DsDeviceButtonTouchPadRight = 139,
    Confirm = 140,
    Cancel = 141,
    CampfireUserSave = 142,
};
#ifndef WorldDataType
struct WorldDataTypeProxy;
#define WorldDataType WorldDataTypeProxy
#endif
#ifndef WorldDataTile
struct WorldDataTileProxy;
#define WorldDataTile WorldDataTileProxy
#endif
#ifndef AISignalType
struct AISignalTypeProxy;
#define AISignalType AISignalTypeProxy
#endif
enum class EMusicTransitionMode : int {
    Seconds = 0,
    Beats = 1,
};
#ifndef DestructibilityPartStateResource
struct DestructibilityPartStateResourceProxy;
#define DestructibilityPartStateResource DestructibilityPartStateResourceProxy
#endif
#ifndef FloatFact
struct FloatFactProxy;
#define FloatFact FloatFactProxy
#endif
enum class EMusicTransitionCurveType : int {
    Linear = 1,
    Fast = 2,
    Slow = 3,
    Smooth = 4,
    Sharp = 5,
};
#ifndef DSMissionInfoStack
struct DSMissionInfoStackProxy;
#define DSMissionInfoStack DSMissionInfoStackProxy
#endif
enum class GameActorLODState : int {
    LOW_LOD = 0,
    MEDIUM_LOD = 1,
    HIGH_LOD = 2,
};
enum class EDSQpidLevelUpEvent : char {
    None = 0,
    Briddges = 1,
    UCA = 2,
    BriddgesAndUCA = 3,
};
#ifndef HtnSymbol
struct HtnSymbolProxy;
#define HtnSymbol HtnSymbolProxy
#endif
enum class EDSPrivateRoomEventType : char {
    ExitRoom = 0,
    DirectExitRoom = 1,
    UseShower = 2,
    ShowEquipmentShelf = 3,
    UseBBTool = 4,
    FastTravel = 5,
    EnterRoom = 6,
    UseWC = 7,
    ToUrinate = 8,
    ToFeces = 9,
    UseWashBasin = 10,
    ShowSuit = 11,
    CustomizeBackpack = 12,
    UseTerminal = 13,
    ShowTable = 14,
    WatchFigure = 15,
    ShowDreamCatcher = 16,
    RemoveCap = 17,
    RemoveGlasses = 18,
    LookLeft = 19,
    LookRight = 20,
    GestureThumbsUp = 21,
    GesturePleaseLook = 22,
    GestureStepping = 23,
    Look_R90 = 24,
    Look_R45 = 25,
    Look_0 = 26,
    Look_L45 = 27,
    Look_L90 = 28,
    Watch_Map = 31,
    Watch_Entrance = 32,
    Watch_Suit = 33,
    Watch_Weapon = 34,
    Watch_Shower = 35,
    Watch_Washroom = 36,
    Leving = 37,
    Groin = 38,
    Bust = 39,
    EndPreparationMenu = 40,
    EndFastTravel = 41,
    EndTerminal = 42,
    EndCustomizeBackpack = 43,
    FromShowCaseAtoB = 44,
    FromShowCaseBtoA = 45,
    FromShowCaseBtoC = 46,
    FromShowCaseCtoB = 47,
    FromShowCaseCtoD = 48,
    FromShowCaseDtoC = 49,
    FromShowCaseDtoE = 50,
    FromShowCaseEtoD = 51,
    FromShowCaseAtoBed = 52,
    FromShowCaseBtoBed = 53,
    FromShowCaseCtoBed = 54,
    FromShowCaseDtoBed = 55,
    FromShowCaseEtoBed = 56,
    FromTableToBed = 57,
};
enum class EStance : int {
    INVALID = -1,
    STANDING = 0,
    CROUCHING = 1,
    LOWCROUCHING = 2,
};
enum class EDSAreaChangeReason : char {
    None = 0,
    FastTravel = 1,
    WWI = 2,
    WWII = 3,
    Vietnam = 4,
    MovingByShip = 5,
    Area02ToArea04 = 6,
    M620 = 7,
    M640 = 8,
    Beach = 9,
    M010ToM020 = 10,
    Nightmare = 11,
    MemoriesOfCliff = 12,
    Frange = 13,
};
#ifndef StreamingTileResource
struct StreamingTileResourceProxy;
#define StreamingTileResource StreamingTileResourceProxy
#endif
enum class EStreamingLODLevel : char {
    SuperLow = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};
enum class EDSSuitPartsId : char {
    None = 0,
    ActiveSkeleton = 1,
    Mask = 2,
    Odradek = 3,
    BBCareTool = 4,
    BalanceSkeleton = 5,
    SpeedSkeleton = 6,
    PowerSkeleton = 7,
    PowerGlove = 8,
    Harmonica = 9,
    Shield = 10,
    ShieldLv2 = 11,
    OtterHood = 12,
    GlassesA = 13,
    GlassesB = 14,
    Cap = 15,
    FakeHolo = 16,
    HeatParts = 17,
    ShieldGold = 18,
    ShieldLv2Gold = 19,
    ShieldShilver = 20,
    ShieldLv2Shilver = 21,
    BalanceSkeletonShilver = 22,
    BalanceSkeletonGold = 23,
    BalanceSkeletonLv2 = 24,
    BalanceSkeletonLv3 = 25,
    SpeedSkeletonShilver = 26,
    SpeedSkeletonGold = 27,
    SpeedSkeletonLv2 = 28,
    SpeedSkeletonLv3 = 29,
    PowerSkeletonShilver = 30,
    PowerSkeletonGold = 31,
    PowerSkeletonLv2 = 32,
    PowerSkeletonLv3 = 33,
    ShieldLv3 = 34,
    ShieldLv4 = 35,
    SantaCap = 36,
    BalanceSkeletonLv2Shilver = 37,
    BalanceSkeletonLv2Gold = 38,
    BalanceSkeletonLv3Shilver = 39,
    BalanceSkeletonLv3Gold = 40,
    SpeedSkeletonLv2Shilver = 41,
    SpeedSkeletonLv2Gold = 42,
    SpeedSkeletonLv3Shilver = 43,
    SpeedSkeletonLv3Gold = 44,
    PowerSkeletonLv2Shilver = 45,
    PowerSkeletonLv2Gold = 46,
    PowerSkeletonLv3Shilver = 47,
    PowerSkeletonLv3Gold = 48,
    EDSSuitPartsIdUnk_0 = 49,
    EDSSuitPartsIdUnk_1 = 50,
    EDSSuitPartsIdUnk_2 = 51,
    EDSSuitPartsIdUnk_3 = 52,
    EDSSuitPartsIdUnk_4 = 53,
    ShieldLv3Gold = 54,
    ShieldLv4Gold = 55,
    ShieldLv3Shilver = 56,
    ShieldLv4Shilver = 57,
    EDSSuitPartsIdUnk_5 = 58,
    PowerGloveShilver = 59,
    PowerGloveGold = 60,
    EDSSuitPartsIdUnk_6 = 61,
    SupportSkeleton = 62,
};
enum class ESaveGameType : char {
    Manual = 1,
    Quick = 2,
    Automatic = 4,
    All = 15,
};
#ifndef StaminaUsageType
struct StaminaUsageTypeProxy;
#define StaminaUsageType StaminaUsageTypeProxy
#endif
enum class EDSWeatherRegionIndex : char {
    OutOfRegion = 0,
    Region01 = 1,
    Region02 = 2,
    Region03 = 3,
    Region04 = 4,
    Region05 = 5,
    Region06 = 6,
    Region07 = 7,
    Region08 = 8,
    Region09 = 9,
    Region10 = 10,
    Region11 = 11,
    Region12 = 12,
    Region13 = 13,
    Region14 = 14,
    Region15 = 15,
    Region16 = 16,
    Region17 = 17,
    Region18 = 18,
    Region19 = 19,
    Region20 = 20,
    Region21 = 21,
    Region22 = 22,
    Region23 = 23,
    Region24 = 24,
    Region25 = 25,
    Region26 = 26,
    Region27 = 27,
    Region28 = 28,
    Region29 = 29,
    Region30 = 30,
    Region31 = 31,
    Region32 = 32,
    Region33 = 33,
    Region34 = 34,
    Region35 = 35,
    Region36 = 36,
    Region37 = 37,
    Region38 = 38,
    Region39 = 39,
    Region40 = 40,
    Region41 = 41,
    Region42 = 42,
    Region43 = 43,
    Region44 = 44,
    Region45 = 45,
    Region46 = 46,
    Region47 = 47,
    Region48 = 48,
    Region49 = 49,
    Region50 = 50,
    Region51 = 51,
    Region52 = 52,
    Region53 = 53,
    Region54 = 54,
    Region55 = 55,
    Region56 = 56,
    Region57 = 57,
    Region58 = 58,
    Region59 = 59,
    Region60 = 60,
    Region61 = 61,
    Region62 = 62,
    Region63 = 63,
};
enum class EGameMode : int {
    UnkIndex0 = -1,
    EGameModeUnk_gm0 = 0,
    EGameModeUnk_gm1 = 1,
    EGameModeUnk_gm2 = 2,
    EGameModeUnk_gm3 = 3,
};
enum class EDSSaveOption : int16_t {
    None = 0,
    AllowInsideBTArea = 1,
    AllowInsideMuleArea = 2,
    AllowInAnyGameState = 4,
    WaitInAnyGameState = 8,
    WaitFade = 16,
};
#ifndef QuestResource
struct QuestResourceProxy;
#define QuestResource QuestResourceProxy
#endif
#ifndef AIMarker
struct AIMarkerProxy;
#define AIMarker AIMarkerProxy
#endif
enum class EDSConstructionPointType : char {
    DeliveryBase = 0,
    PreppersShelter = 1,
    StageSafetyHouse = 2,
    PlayerSafetyHouse = 3,
    NetSafetyHouse = 4,
    StagePost = 5,
    PlayerPost = 6,
    NetPost = 7,
    StageWatchTower = 8,
    PlayerWatchTower = 9,
    NetWatchTower = 10,
    EDSConstructionPointTypeUnk_0 = 11,
    EDSConstructionPointTypeUnk_1 = 12,
    EDSConstructionPointTypeUnk_2 = 13,
    StageCharger = 14,
    PlayerCharger = 15,
    NetCharger = 16,
    StageRainShelter = 17,
    PlayerRainShelter = 18,
    NetRainShelter = 19,
    MulePost = 20,
    StageZipline = 21,
    PlayerZipline = 22,
    NetZipline = 23,
    StageLadder = 24,
    PlayerLadder = 25,
    NetLadder = 26,
    StageFieldRope = 27,
    PlayerFieldRope = 28,
    NetFieldRope = 29,
    StageBridge30m = 30,
    PlayerBridge30m = 31,
    NetBridge30m = 32,
    StageBridge45m = 33,
    PlayerBridge45m = 34,
    NetBridge45m = 35,
    RoadRebuilder = 36,
    EDSConstructionPointTypeUnk_3 = 37,
    EDSConstructionPointTypeUnk_4 = 38,
    EDSConstructionPointTypeUnk_5 = 39,
    EDSConstructionPointTypeUnk_6 = 40,
    EDSConstructionPointTypeUnk_7 = 41,
    EDSConstructionPointTypeUnk_8 = 42,
    EDSConstructionPointTypeUnk_9 = 43,
    EDSConstructionPointTypeUnk_10 = 44,
    EDSConstructionPointTypeUnk_11 = 45,
    StageBridge = 33,
    PlayerBridge = 34,
    NetBridge = 35,
};
#ifndef VoiceResource
struct VoiceResourceProxy;
#define VoiceResource VoiceResourceProxy
#endif
#ifndef SentenceResource
struct SentenceResourceProxy;
#define SentenceResource SentenceResourceProxy
#endif
enum class EDSItemId : char {
    None = 0,
    Water = 1,
    Food = 2,
    Coating = 3,
    Battery = 4,
    Insecticide = 5,
    BloodPack = 6,
    BTLight = 7,
    Odradek = 8,
    ShoesA = 9,
    PostBuilder = 10,
    ZiplineBuilder = 11,
    BridgeBuilder = 12,
    CapsuleShelterBuilder = 13,
    ShoeSoleGrass = 14,
    NormalBoots = 15,
    StableBootsLv1 = 16,
    StableBootsLv2 = 17,
    StableBootsLv3 = 18,
    MuleBoots = 19,
    TerroristBoots = 20,
    ChiralCylinder = 21,
    Cryptobiosys = 22,
    BloodPackLarge = 23,
    ChiralBoots = 24,
    WaterLv2 = 25,
    CryptobiosisD = 26,
    ReflectBoots = 27,
    SpareAmmo = 28,
};
#ifndef SentenceGroupResource
struct SentenceGroupResourceProxy;
#define SentenceGroupResource SentenceGroupResourceProxy
#endif
#ifndef PlayerLoadout
struct PlayerLoadoutProxy;
#define PlayerLoadout PlayerLoadoutProxy
#endif
#ifndef AmbienceCycle
struct AmbienceCycleProxy;
#define AmbienceCycle AmbienceCycleProxy
#endif
#ifndef AIGroup
struct AIGroupProxy;
#define AIGroup AIGroupProxy
#endif
#ifndef DSMissionResourceList
struct DSMissionResourceListProxy;
#define DSMissionResourceList DSMissionResourceListProxy
#endif
#ifndef EntityLifetime
struct EntityLifetimeProxy;
#define EntityLifetime EntityLifetimeProxy
#endif
enum class EDSBaggage2SlotType : char {
    Default = 0,
    BackPack = 1,
    LeftArm = 2,
    RightArm = 3,
    LeftWaist = 4,
    RightWaist = 5,
    LeftHand = 6,
    RightHand = 7,
    LeftCarrier = 8,
    RightCarrier = 9,
    MainWeapon = 10,
    SubWeapon = 11,
    SubWeaponPouch = 12,
    Item = 13,
    Shoes = 14,
    SpareShoes = 15,
    SuitParts = 16,
    Glove = 17,
    Mask = 18,
    Private = 19,
    Public = 20,
    PublicReceived = 21,
    Supply = 22,
    MuleBackPack = 24,
    AutoDeliveryCarrier1 = 25,
    AutoDeliveryCarrier2 = 26,
    TerminalShelfMission = 27,
    TerminalShelfSupply = 28,
    TerminalShelfOrder = 29,
    TerminalShelfDonation = 30,
    TerminalShelfBridgesDonation = 31,
    TerminalShelfReturn = 32,
    TerminalShelfProtection = 33,
    TerminalShelfCommit = 34,
    TerminalShelfProcurement = 35,
    TerminalShelfReward = 36,
    PassengerSeat = 69,
    TerminalShelfPublicCommit = 70,
    TerminalShelfPublicCommitMission = 71,
    AreaChangeSlot2 = 72,
    Trash = 73,
    EDSBaggage2SlotTypeUnk_0 = 74,
    EDSBaggage2SlotTypeUnk_1 = 75,
    EDSBaggage2SlotTypeUnk_2 = 76,
    TerminalShelfRankingReward = 77,
    NightmareTrash = 78,
};
#ifndef FRGBAColor
struct FRGBAColorProxy;
#define FRGBAColor FRGBAColorProxy
#endif
#define Array_cptr_DSOrderedBaggageArgs Array<const DSOrderedBaggageArgs*>
#ifndef DestructibilityPart
struct DestructibilityPartProxy;
#define DestructibilityPart DestructibilityPartProxy
#endif
#ifndef DSHouseholdInfoResource
struct DSHouseholdInfoResourceProxy;
#define DSHouseholdInfoResource DSHouseholdInfoResourceProxy
#endif
#ifndef BuddyComponentResource
struct BuddyComponentResourceProxy;
#define BuddyComponentResource BuddyComponentResourceProxy
#endif
enum class EDSConstructionMenuInfoResult : int {
    ChargeMaterial = 1,
    ChargeChiral = 4,
    LevelUp = 2,
};
#ifndef EnumFactEntry
struct EnumFactEntryProxy;
#define EnumFactEntry EnumFactEntryProxy
#endif
#ifndef NavMeshArea
struct NavMeshAreaProxy;
#define NavMeshArea NavMeshAreaProxy
#endif
#ifndef SoundGroup
struct SoundGroupProxy;
#define SoundGroup SoundGroupProxy
#endif
enum class EInventoryCategory : char {
    Unspecified = -1,
    Weapons = 0,
    Tools = 1,
    Ammo = 2,
    Modifications = 3,
    Outfits = 4,
    Resources = 5,
    Special = 6,
    LootBoxes = 7,
    None = 9,
};
enum class EDSDifficulty : char {
    VeryEasy = 0,
    Easy = 1,
    Normal = 2,
    Hard = 3,
    VeryHard = 4,
};
#ifndef DSMuleConfig
struct DSMuleConfigProxy;
#define DSMuleConfig DSMuleConfigProxy
#endif
#ifndef LevelBasedXpReward
struct LevelBasedXpRewardProxy;
#define LevelBasedXpReward LevelBasedXpRewardProxy
#endif
enum class EDSUIStaffTelopPositionType : int {
    CUSTOM = 0,
    TOP_LEFT = 1,
    TOP_RIGHT = 2,
    BOTTOM_LEFT = 3,
    BOTTOM_RIGHT = 4,
    CENTER = 5,
};
#define Array_cptr_XpMultiplier Array<const XpMultiplier*>
#ifndef SkeletonAnimationResource
struct SkeletonAnimationResourceProxy;
#define SkeletonAnimationResource SkeletonAnimationResourceProxy
#endif
enum class EDSMulePhase : int {
    Mule_NormalPhase = 0,
    Mule_PreCautionPhase = 2,
    Mule_CautionPhase = 3,
    Mule_ReturnPhase = 1,
    Mule_EvasionPhase = 4,
    Mule_AlertPhase = 5,
};
enum class EDSCheckStationScanInfo : int {
    NoProblem = 0,
    BreakRequest = 1,
    ShoeseRequest = 2,
    VehicleRequest = 3,
};
enum class EDSDeliveryBotRidingAIMode : char {
    AwaitingCommand = 0,
    Return = 1,
    Delivery = 2,
};
#ifndef PathHelperNodeResource
struct PathHelperNodeResourceProxy;
#define PathHelperNodeResource PathHelperNodeResourceProxy
#endif
#ifndef IntPropertyBase
struct IntPropertyBaseProxy;
#define IntPropertyBase IntPropertyBaseProxy
#endif
enum class EDSMissionGameOverType : char {
    AllDream = 0,
    BlackSam = 1,
};
#define Array_uint64 Array<uint64>
#ifndef DSUIInfoLogHUDTableItemResource
struct DSUIInfoLogHUDTableItemResourceProxy;
#define DSUIInfoLogHUDTableItemResource DSUIInfoLogHUDTableItemResourceProxy
#endif
#ifndef DSMovementPath
struct DSMovementPathProxy;
#define DSMovementPath DSMovementPathProxy
#endif
enum class EVoiceLimitMode : int {
    None = 0,
    Stop_Oldest = 1,
    Reject_New = 2,
};
#ifndef WaveNodeParameters
struct WaveNodeParametersProxy;
#define WaveNodeParameters WaveNodeParametersProxy
#endif
enum class EDSParkingMenuInfoResult : int {
    StoreVehicle = 1,
    BuyVehicle = 2,
    LeaveVehicle = 4,
    RemoveVehicle = 8,
    RepairVehicle = 16,
};
enum class EDSCatcherNotifyType : char {
    BringCatcher = 0,
    KillCatcher = 1,
    AbandonCombat = 2,
    Annihilating = 3,
};
#ifndef DSUIOperationGuideHUDTableGroupResource
struct DSUIOperationGuideHUDTableGroupResourceProxy;
#define DSUIOperationGuideHUDTableGroupResource DSUIOperationGuideHUDTableGroupResourceProxy
#endif
#ifndef BoundingBox3
struct BoundingBox3Proxy;
#define BoundingBox3 BoundingBox3Proxy
#endif
#define Array_cptr_AttackEventTag Array<const AttackEventTag*>
enum class EBuddyState : char {
    Unregistered = 0,
    Inactive = 1,
    Spawning = 2,
    Active = 3,
    Dead = 4,
    Despawned = 5,
};
enum class EDSGameBaggageListItem_BaggageCaseType : char {
    Normal = 0,
    LiquidOnly = 1,
    Weapon = 2,
    Item = 3,
    Equipment = 4,
    BBPod = 5,
    BodyBag = 6,
    Dummy = 7,
    Handcuffs = 8,
    Material = 9,
    Cart = 10,
    ConstractionMachine = 11,
    Ladder = 12,
    Delicate = 13,
    Rope = 14,
    Vehicle = 15,
    LivingThing = 16,
    SmallDelicate = 17,
    ToxicGas = 18,
};
enum class EDSConstructionPointCategory : char {
    DeliveryBase = 0,
    PreppersShelter = 2,
    SafetyHouse = 1,
    Post = 3,
    WatchTower = 4,
    EDSConstructionPointCategoryUnk_0 = 5,
    Charger = 6,
    RainShelter = 7,
    MulePost = 8,
    Zipline = 9,
    Ladder = 10,
    FieldRope = 11,
    Bridge30m = 13,
    Bridge45m = 12,
    RoadRebuilder = 14,
    EDSConstructionPointCategoryUnk_1 = 15,
    EDSConstructionPointCategoryUnk_2 = 16,
    EDSConstructionPointCategoryUnk_3 = 17,
    Invalid = 18,
};
enum class EDSGameBaggageListItem_BaggageAttribute : char {
    Locked = 0,
    Personal = 1,
    Dummy = 2,
    Discarded = 3,
    DummyBaggage = 4,
    NonBaggage = 5,
};
enum class EDSGameBaggageListItem_Volume : char {
    S = 0,
    M = 1,
    L = 2,
    LL = 3,
    Human = 4,
};
#ifndef DSMissionBaggageCountConditionResource
struct DSMissionBaggageCountConditionResourceProxy;
#define DSMissionBaggageCountConditionResource DSMissionBaggageCountConditionResourceProxy
#endif
#ifndef EjectLocationResource
struct EjectLocationResourceProxy;
#define EjectLocationResource EjectLocationResourceProxy
#endif
#ifndef Level
struct LevelProxy;
#define Level LevelProxy
#endif
#ifndef DestructibilityConstraint
struct DestructibilityConstraintProxy;
#define DestructibilityConstraint DestructibilityConstraintProxy
#endif
#ifndef SoundResource
struct SoundResourceProxy;
#define SoundResource SoundResourceProxy
#endif
#ifndef DynamicSequenceEntityVariable
struct DynamicSequenceEntityVariableProxy;
#define DynamicSequenceEntityVariable DynamicSequenceEntityVariableProxy
#endif
#ifndef RuntimeAnimationStateResource
struct RuntimeAnimationStateResourceProxy;
#define RuntimeAnimationStateResource RuntimeAnimationStateResourceProxy
#endif
enum class ESurfaceDeformationMode : int {
    Mud = 0,
    Snow = 1,
    Disabled = 2,
    Count = 3,
};
enum class EAttackEventLinkType : char {
    Invalid = 0,
    CreateNewChain = 1,
    DirectConsequence = 2,
    IndirectConsequence = 3,
    PassThrough = 4,
};
#ifndef UDSEventMechanicUse
struct UDSEventMechanicUseProxy;
#define UDSEventMechanicUse UDSEventMechanicUseProxy
#endif
enum class EAlertLevel : int {
    invalid = 0,
    no_threats = 1,
    presence_suspected = 2,
    presence_confirmed = 3,
    threats_identified = 4,
    combat = 5,
    under_attack = 6,
    getting_hit = 7,
};
enum class EDSPlayerMissionMessageEventType : char {
    Invalid = 0,
    BaggageWeightReached = 1,
    AmmoIsLess = 2,
};
#ifndef TalkPriority
struct TalkPriorityProxy;
#define TalkPriority TalkPriorityProxy
#endif
#ifndef PlayerNotificationResource
struct PlayerNotificationResourceProxy;
#define PlayerNotificationResource PlayerNotificationResourceProxy
#endif
#ifndef EntityInstancePropertyBase
struct EntityInstancePropertyBaseProxy;
#define EntityInstancePropertyBase EntityInstancePropertyBaseProxy
#endif
enum class EHUDSnap : int {
    Upper_Left = 0,
    Upper_Right = 1,
    Lower_Left = 2,
    Lower_Right = 3,
    Center_Screen = 4,
    Center_Top = 5,
    Center_Bottom = 6,
    Center_Left = 7,
    Center_Right = 8,
};
#ifndef WeatherSetup
struct WeatherSetupProxy;
#define WeatherSetup WeatherSetupProxy
#endif
#ifndef KnockDownStateEntryResource
struct KnockDownStateEntryResourceProxy;
#define KnockDownStateEntryResource KnockDownStateEntryResourceProxy
#endif
#ifndef Quat
struct QuatProxy;
#define Quat QuatProxy
#endif
#ifndef DSMissionBaggageWeightConditionResource
struct DSMissionBaggageWeightConditionResourceProxy;
#define DSMissionBaggageWeightConditionResource DSMissionBaggageWeightConditionResourceProxy
#endif
#define Array_cptr_DSTerminalGraphBonusArgs Array<const DSTerminalGraphBonusArgs*>
#define Array_cptr_DSTerminalGraphEvaluationArgs Array<const DSTerminalGraphEvaluationArgs*>
#define Array_cptr_DSDeliveredMemoryChipArgs Array<const DSDeliveredMemoryChipArgs*>
#define Array_cptr_DSDeliveredBaggageArgs Array<const DSDeliveredBaggageArgs*>
enum class EThreatState : int {
    none = -1,
    presence_undetected = 0,
    presence_suspected = 1,
    presence_confirmed = 2,
    threat_identified = 3,
};
#ifndef DSMissionSafeConditionResource
struct DSMissionSafeConditionResourceProxy;
#define DSMissionSafeConditionResource DSMissionSafeConditionResourceProxy
#endif
#define Array_cptr_Entity Array<const Entity*>
enum class EDSCatcherStateType : char {
    Dummy = 0,
    ActiveCatcherCount = 1,
    IsInCombat = 2,
};
#ifndef AIAuralStimulusResource
struct AIAuralStimulusResourceProxy;
#define AIAuralStimulusResource AIAuralStimulusResourceProxy
#endif
#ifndef NavMeshBuilderSettings
struct NavMeshBuilderSettingsProxy;
#define NavMeshBuilderSettings NavMeshBuilderSettingsProxy
#endif
#ifndef SoundShape
struct SoundShapeProxy;
#define SoundShape SoundShapeProxy
#endif
#ifndef SoundMixStateResource
struct SoundMixStateResourceProxy;
#define SoundMixStateResource SoundMixStateResourceProxy
#endif
enum class EDSCatcherControlCommand : char {
    BringCatcher = 0,
    ForceOrderToReturn = 1,
    PrepareBringCatcher = 2,
    AllowCreateCrater = 3,
    ForceDeactivate = 4,
};
#ifndef WwiseWemResource
struct WwiseWemResourceProxy;
#define WwiseWemResource WwiseWemResourceProxy
#endif
enum class EHealthRegenerationSettings : int {
    Slow = 0,
    Normal = 1,
    Fast = 2,
};
#ifndef ActiveStatesQueue
struct ActiveStatesQueueProxy;
#define ActiveStatesQueue ActiveStatesQueueProxy
#endif
#ifndef AIDefendAreaSet
struct AIDefendAreaSetProxy;
#define AIDefendAreaSet AIDefendAreaSetProxy
#endif
#ifndef Route
struct RouteProxy;
#define Route RouteProxy
#endif
enum class EDSBareFootDamageType : char {
    BareFootDamage_None = 0,
    BareFootDamage_Damaged = 1,
};
enum class EDSPadGameButtonType : int {
    STANCE = 0,
    DODGE = 1,
    SUB_ACTION_LONG = 2,
    ACTION = 3,
    ACCESS = 4,
    MELEE = 5,
    RIDE_GETOFF = 6,
    SUBJECTIVE = 7,
    FIRE = 8,
    STOCK = 9,
    PICKUP = 10,
    HOLD = 11,
    DASH = 12,
    PICKUP_R = 13,
    PICKUP_L = 14,
    USE_SUITPARTS = 15,
    USE_BAGGAGE_SENSOR = 16,
    SELECT = 17,
    OPTIONS = 18,
    BACK = 19,
    PAD_LEFT = 20,
    PAD_RIGHT = 21,
    PAD_UP = 22,
    PAD_DOWN = 23,
    BREATH_STOP = 24,
    ZOOM = 25,
    FIGHT = 26,
    SELECT_MAIN_WEAPON = 27,
    SELECT_MAGAZINE = 28,
    SELECT_SUIT_PARTS = 29,
    SELECT_ITEM = 30,
    SELECT_EQUIPMENT = 31,
    CHECK = 32,
    DETAIL = 33,
    TAB_BACK = 34,
    TAB_NEXT = 35,
    OK = 36,
    CANCEL = 37,
    DPAD_LEFT = 38,
    DPAD_RIGHT = 39,
    DPAD_UP = 40,
    DPAD_DOWN = 41,
    L1 = 42,
    L2 = 43,
    L3 = 44,
    R1 = 45,
    R2 = 46,
    R3 = 47,
    PRIVATE_ROOM_BUTTON_0 = 48,
    PRIVATE_ROOM_BUTTON_1 = 49,
    PRIVATE_ROOM_BUTTON_2 = 50,
    PRIVATE_ROOM_BUTTON_3 = 51,
    COMMON_MARKER = 52,
    COMMON_DECIDE = 53,
    COMMON_CANCEL = 54,
    GO_NEAREST_DELIVERY_POINT = 55,
    GO_NEAREST_HUB_INSIDE_CHIRAL_AREA = 56,
    COMPASS_FOCUS_LR = 57,
    L_STICK = 58,
    R_STICK = 59,
    L_STICK_LEFT = 60,
    L_STICK_RIGHT = 61,
    L_STICK_UP = 62,
    L_STICK_DOWN = 63,
    R_STICK_LEFT = 64,
    R_STICK_RIGHT = 65,
    R_STICK_UP = 66,
    R_STICK_DOWN = 67,
    R_STICK_ALL_DIR = 68,
    UP_DOWN = 69,
    SHAKE = 70,
    SHAKE_BY_KEYBOARD = 71,
    L_STICK_ROTATE = 72,
    R_STICK_ROTATE = 73,
    NONE = 74,
};
enum class EDSWeaponId : char {
    None = 0,
    AssaultRifle = 1,
    AssaultRifleLv2 = 2,
    AssaultRifleLv3 = 3,
    AssaultRifleLv4 = 4,
    Grenade = 5,
    BloodGrenade = 6,
    BloodGrenadeLv1Extend = 7,
    BloodGrenadeLv2 = 8,
    ElectricalGrenadeLv1 = 9,
    ElectricalGrenadeLv2 = 10,
    ElectricalGrenadePlace = 11,
    CoatingSpray = 12,
    SmokeGrenade = 13,
    SmokeGrenadeLv2 = 14,
    FreezeGrenade = 15,
    TranquilizerGun = 16,
    AmnioticFluidGrenade = 17,
    ExGrenade0 = 18,
    ExGrenade1 = 19,
    ExGrenade1Plus = 20,
    ExGrenade2 = 21,
    BolaGun = 22,
    BolaGunLv2 = 23,
    ShotGun = 24,
    ShotGunLv2 = 25,
    ShotGunLv3 = 26,
    HandGun = 27,
    HandGunLv2 = 28,
    HandGunLv3 = 29,
    BloodHandGun = 30,
    BloodHandGunLv2 = 31,
    AmelieHandGun = 32,
    C4 = 33,
    GazerBalloon = 34,
    SamBall = 35,
    SamBallLv2 = 36,
    Builder = 37,
    BuilderLv2 = 38,
    Grenader = 39,
    AirBurstGrenader = 40,
    SlipGrenader = 62,
    Strand = 41,
    RubberAssaultRifle = 42,
    RubberAssaultRifleLv2 = 43,
    RubberAssaultRifleLv3 = 44,
    RubberAssaultRifleLv4 = 45,
    RubberShotGun = 46,
    RubberShotGunLv2 = 47,
    RubberShotGunLv3 = 48,
    Ladder = 49,
    LadderLv2 = 50,
    Rope = 51,
    RopeLv2 = 52,
    RopeLv3 = 53,
    StickyGun = 54,
    FourConsecutiveMissile = 55,
    SpreadMissile = 56,
    HologramDevice = 57,
    Urination = 58,
    EnemyAssaultRifle = 59,
    HiggsAssaultRifle = 60,
    MultiRod = 61,
    EnemyRubberAssaultRifle = 63,
    Ww1Rifle = 64,
    Ww1ShotGun = 65,
    Ww1Grenade = 66,
    Ww1MachineGun = 67,
    Ww2SubmachineGun = 68,
    Ww2Rifle = 69,
    Ww2Missile = 70,
    Ww2SmokeGrenade = 71,
    VietnamAssault = 72,
    VietnamAssaultWithGrenader = 73,
    VietnamMachinegun = 74,
    VietnamGrenade = 75,
    CliffRifle = 76,
    AfghanRifle = 77,
    HiggsKnife = 78,
    DemensAssaultRifle = 79,
    DemensShotGun = 80,
    TrekkingPole = 81,
    Ww2MissileType2 = 82,
    EnemyGrenade = 83,
    Ww2Grenade = 84,
    AfghanGrenade = 85,
    Ww2AirPlaneMachinegun = 86,
    Ww2HeavyMachinegun = 87,
    DemensElectricalGrenade = 88,
    EDSWeaponIdUnk_0 = 89,
    MaserGun = 90,
    CliffHandGun = 91,
    RubberFixedGun = 92,
};
#ifndef BooleanFact
struct BooleanFactProxy;
#define BooleanFact BooleanFactProxy
#endif
#define Array_cptr_DSMissionLogicBlock Array<const DSMissionLogicBlock*>
#ifndef AIAttack
struct AIAttackProxy;
#define AIAttack AIAttackProxy
#endif
#ifndef CameraModifierResource
struct CameraModifierResourceProxy;
#define CameraModifierResource CameraModifierResourceProxy
#endif
#ifndef SequenceEntityVariable
struct SequenceEntityVariableProxy;
#define SequenceEntityVariable SequenceEntityVariableProxy
#endif
#ifndef SubmixResource
struct SubmixResourceProxy;
#define SubmixResource SubmixResourceProxy
#endif
#ifndef DSPatrolPathPriorityList
struct DSPatrolPathPriorityListProxy;
#define DSPatrolPathPriorityList DSPatrolPathPriorityListProxy
#endif
enum class EStaminaType : int {
    STAMINA = 0,
    ELECTRICITY = 1,
    BREATH = 2,
    DODGE = 3,
};
#define Array_cptr_DSMissionOpenList Array<const DSMissionOpenList*>
#ifndef DSPatrolPathGroup
struct DSPatrolPathGroupProxy;
#define DSPatrolPathGroup DSPatrolPathGroupProxy
#endif
enum class EDSMissionOpenState : char {
    None = 0,
    Displayable = 1,
    NotSelectable = 2,
    NotDisplayable = 8,
};
enum class EAmmoTetherState : char {
    Invalid_Tether_State = -1,
    Untethered_Idle = 0,
    Untethered_Searching = 1,
    Tethered_Loading = 2,
    Tethered_Idle = 3,
};
#define Array_cptr_DSDeliveryPointInfoResource Array<const DSDeliveryPointInfoResource*>
enum class EDSMissionReasonGameOver : char {
    ReasonUnknown = 0,
    ReasonBrokenBaggages = 1,
    ReasonPlayerDied = 2,
    ReasonAnnihilation = 3,
    ReasonBossAnnihilation = 4,
    ReasonTimeOut = 5,
    ReasonNuclearBomb = 6,
    ReasonNuclearBombStolenByMule = 7,
    ReasonPlayerDiedByGoldHunter = 8,
    ReasonGasFaint = 9,
    ReasonKillingBaggage = 10,
    ReasonStolenBaggage = 11,
    ReasonAttackBaggage = 12,
    ReasonGazerAnnihilation = 13,
    ReasonGazerFarAnnihilation = 14,
    ReasonNuclearBombPassingSensor = 15,
    ReasonAnnihilationWithBaggage = 16,
    ReasonAttackPoter = 17,
    ReasonPoisonGasBaggageFaint = 18,
    ReasonDiedInUndergroundFacility = 19,
    ReasonPlayerFainted = 20,
    ReasonGazerAnnihilationInUndergroundFacility = 21,
};
#ifndef CameraModeResource
struct CameraModeResourceProxy;
#define CameraModeResource CameraModeResourceProxy
#endif
#ifndef DSAirplaneGameActor
struct DSAirplaneGameActorProxy;
#define DSAirplaneGameActor DSAirplaneGameActorProxy
#endif
enum class EDSFunction : int {
    kDSFunction_None = -1,
    DS_PAD_HOLD = 0,
    DS_PAD_SHOOT = 1,
    DS_PAD_CHARGE_SHOOT = 2,
    DS_PAD_GHOST_CAMERA_UP = 3,
    DS_PAD_GHOST_CAMERA_DOWN = 4,
    DS_PAD_GHOST_CAMERA_ROLL_RIGHT = 5,
    DS_PAD_GHOST_CAMERA_ROLL_LEFT = 6,
    DS_PAD_STOCK_CHANGE = 7,
    DS_PAD_ZOOMCAMERA = 7,
    DS_PAD_DASH = 8,
    DS_PAD_SUBJECT = 9,
    DS_PAD_ACTION = 10,
    DS_PAD_RELOAD = 11,
    DS_PAD_DODGE = 12,
    DS_PAD_STANCE = 13,
    DS_PAD_PICKUP = 14,
    DS_PAD_PICKUP_ONEHAND_R = 15,
    DS_PAD_PICKUP_ONEHAND_L = 16,
    DS_PAD_USE_SUITPARTS = 17,
    DS_PAD_MENU = 18,
    DS_PAD_OPTIONS = 19,
    DS_PAD_UP = 20,
    DS_PAD_DOWN = 21,
    DS_PAD_LEFT = 22,
    DS_PAD_RIGHT = 23,
    DS_UIPAD_SELECT_PRIMARY = 24,
    DS_UIPAD_SELECT_SUB = 25,
    DS_UIPAD_SELECT_ITEM = 26,
    DS_UIPAD_SELECT_EQUIP = 27,
    DS_UIPAD_RIGHT = 28,
    DS_UIPAD_LEFT = 29,
    DS_UIPAD_UP = 30,
    DS_UIPAD_DOWN = 31,
    DS_UIPAD_UPDOWN = 32,
    DS_UIPAD_LEFTRIGHT = 33,
    DS_UIPAD_UP_HOLD = 34,
    DS_UIPAD_DOWN_HOLD = 35,
    DS_UIPAD_LEFT_HOLD = 36,
    DS_UIPAD_RIGHT_HOLD = 37,
    DS_UIPAD_OK = 38,
    DS_UIPAD_CANCEL = 39,
    DS_UIPAD_OPTION = 40,
    DS_UIPAD_DETAIL = 41,
    DS_UIPAD_SELECT_BACK = 42,
    DS_UIPAD_SELECT_NEXT = 43,
    DS_UIPAD_ZOOM_OUT = 44,
    DS_UIPAD_ZOOM_IN = 45,
    DS_UIPAD_OPEN_MENU = 46,
    DS_UIPAD_PAUSE = 47,
    DS_UIPAD_L1 = 48,
    DS_UIPAD_R1 = 49,
    DS_UIPAD_L2 = 50,
    DS_UIPAD_R2 = 51,
    DS_UIPAD_L3 = 52,
    DS_UIPAD_R3 = 53,
    DS_UIPAD_L_STICK = 54,
    DS_UIPAD_L_STICK_LEFT = 55,
    DS_UIPAD_L_STICK_RIGHT = 56,
    DS_UIPAD_L_STICK_UP = 57,
    DS_UIPAD_L_STICK_DOWN = 58,
    DS_UIPAD_R_STICK = 59,
    DS_UIPAD_R_STICK_LEFT = 60,
    DS_UIPAD_R_STICK_RIGHT = 61,
    DS_UIPAD_R_STICK_UP = 62,
    DS_UIPAD_R_STICK_DOWN = 63,
    DS_UIPAD_L2R2 = 64,
    DS_UIPAD_FIGHT = 65,
    DS_UIPAD_SHAKE = 66,
    DS_UIPAD_L_STICK_ROTATE = 67,
    DS_PAD_TRIGGER_LEFT = 68,
    DS_PAD_TRIGGER_RIGHT = 69,
    DS_PAD_L_STICK_UP = 70,
    DS_PAD_L_STICK_DOWN = 71,
    DS_PAD_L_STICK_LEFT = 72,
    DS_PAD_L_STICK_RIGHT = 73,
    DS_PAD_R_STICK_UP = 74,
    DS_PAD_R_STICK_DOWN = 75,
    DS_PAD_R_STICK_LEFT = 76,
    DS_PAD_R_STICK_RIGHT = 77,
    EDSPadGameButtonType_STANCE = 78,
    EDSPadGameButtonType_DODGE = 79,
    EDSPadGameButtonType_SUB_ACTION_LONG = 80,
    EDSPadGameButtonType_ACTION = 81,
    EDSPadGameButtonType_ACCESS = 82,
    EDSPadGameButtonType_MELEE = 83,
    EDSPadGameButtonType_RIDE_GETOFF = 84,
    EDSPadGameButtonType_SUBJECTIVE = 85,
    EDSPadGameButtonType_FIRE = 86,
    EDSPadGameButtonType_STOCK = 87,
    EDSPadGameButtonType_PICKUP = 88,
    EDSPadGameButtonType_HOLD = 89,
    EDSPadGameButtonType_DASH = 90,
    EDSPadGameButtonType_PICKUP_R = 91,
    EDSPadGameButtonType_PICKUP_L = 92,
    EDSPadGameButtonType_USE_SUITPARTS = 93,
    EDSPadGameButtonType_USE_BAGGAGE_SENSOR = 94,
    EDSPadGameButtonType_SELECT = 95,
    EDSPadGameButtonType_OPTIONS = 96,
    EDSPadGameButtonType_BACK = 97,
    EDSPadGameButtonType_PAD_LEFT = 98,
    EDSPadGameButtonType_PAD_RIGHT = 99,
    EDSPadGameButtonType_PAD_UP = 100,
    EDSPadGameButtonType_PAD_DOWN = 101,
    EDSPadGameButtonType_BREATH_STOP = 102,
    EDSPadGameButtonType_ZOOM = 103,
    EDSPadGameButtonType_FIGHT = 104,
    EDSPadGameButtonType_SELECT_MAIN_WEAPON = 105,
    EDSPadGameButtonType_SELECT_MAGAZINE = 106,
    EDSPadGameButtonType_SELECT_SUIT_PARTS = 107,
    EDSPadGameButtonType_SELECT_ITEM = 108,
    EDSPadGameButtonType_SELECT_EQUIPMENT = 109,
    EDSPadGameButtonType_CHECK = 110,
    EDSPadGameButtonType_DETAIL = 111,
    EDSPadGameButtonType_TAB_BACK = 112,
    EDSPadGameButtonType_TAB_NEXT = 113,
    EDSPadGameButtonType_OK = 114,
    EDSPadGameButtonType_CANCEL = 115,
    EDSPadGameButtonType_DPAD_LEFT = 116,
    EDSPadGameButtonType_DPAD_RIGHT = 117,
    EDSPadGameButtonType_DPAD_UP = 118,
    EDSPadGameButtonType_DPAD_DOWN = 119,
    EDSPadGameButtonType_L1 = 120,
    EDSPadGameButtonType_L2 = 121,
    EDSPadGameButtonType_L3 = 122,
    EDSPadGameButtonType_R1 = 123,
    EDSPadGameButtonType_R2 = 124,
    EDSPadGameButtonType_R3 = 125,
    EDSPadGameButtonType_PRIVATE_ROOM_BUTTON_0 = 126,
    EDSPadGameButtonType_PRIVATE_ROOM_BUTTON_1 = 127,
    EDSPadGameButtonType_PRIVATE_ROOM_BUTTON_2 = 128,
    EDSPadGameButtonType_PRIVATE_ROOM_BUTTON_3 = 129,
    EDSPadGameButtonType_COMMON_MARKER = 130,
    EDSPadGameButtonType_COMMON_DECIDE = 131,
    EDSPadGameButtonType_COMMON_CANCEL = 132,
    EDSPadGameButtonType_GO_NEAREST_DELIVERY_POINT = 133,
    EDSPadGameButtonType_GO_NEAREST_HUB_INSIDE_CHIRAL_AREA = 134,
    EDSPadGameButtonType_COMPASS_FOCUS_LR = 135,
    EDSPadGameButtonType_L_STICK = 136,
    EDSPadGameButtonType_R_STICK = 137,
    EDSPadGameButtonType_L_STICK_LEFT = 138,
    EDSPadGameButtonType_L_STICK_RIGHT = 139,
    EDSPadGameButtonType_L_STICK_UP = 140,
    EDSPadGameButtonType_L_STICK_DOWN = 141,
    EDSPadGameButtonType_R_STICK_LEFT = 142,
    EDSPadGameButtonType_R_STICK_RIGHT = 143,
    EDSPadGameButtonType_R_STICK_UP = 144,
    EDSPadGameButtonType_R_STICK_DOWN = 145,
    EDSPadGameButtonType_R_STICK_ALL_DIR = 146,
    EDSPadGameButtonType_UP_DOWN = 147,
    EDSPadGameButtonType_SHAKE = 148,
    EDSPadGameButtonType_SHAKE_BY_KEYBOARD = 149,
    EDSPadGameButtonType_L_STICK_ROTATE = 150,
    EDSPadGameButtonType_R_STICK_ROTATE = 151,
    EMenuInputFunction_FUNCTION_MOUSE_ACCEPT = 152,
    EMenuInputFunction_FUNCTION_MOUSE_CANCEL = 153,
    EMenuInputFunction_FUNCTION_MOUSE_MIDDLE = 154,
    EMenuInputFunction_FUNCTION_MOUSE_OVER = 155,
    EMenuInputFunction_FUNCTION_MOUSE_RANGE_OUT = 156,
    EMenuInputFunction_FUNCTION_MOUSE_SCROLL_UP = 157,
    EMenuInputFunction_FUNCTION_MOUSE_SCROLL_DOWN = 158,
    EMenuInputFunction_FUNCTION_MOUSE_ACCEPT_PAD = 159,
    EMenuInputFunction_FUNCTION_MOUSE_SCROLL_UP_PAD = 160,
    EMenuInputFunction_FUNCTION_MOUSE_SCROLL_DOWN_PAD = 161,
    EMenuInputFunction_FUNCTION_DPAD_NAV_UP = 162,
    EMenuInputFunction_FUNCTION_DPAD_NAV_DOWN = 163,
    EMenuInputFunction_FUNCTION_DPAD_NAV_LEFT = 164,
    EMenuInputFunction_FUNCTION_DPAD_NAV_RIGHT = 165,
    EMenuInputFunction_FUNCTION_NAV_UP = 166,
    EMenuInputFunction_FUNCTION_NAV_DOWN = 167,
    EMenuInputFunction_FUNCTION_NAV_LEFT = 168,
    EMenuInputFunction_FUNCTION_NAV_RIGHT = 169,
    EMenuInputFunction_FUNCTION_SCROLL_UP = 170,
    EMenuInputFunction_FUNCTION_SCROLL_DOWN = 171,
    EMenuInputFunction_FUNCTION_ACCEPT = 172,
    EMenuInputFunction_FUNCTION_OPEN_VKB = 173,
    EMenuInputFunction_FUNCTION_CANCEL = 174,
    EMenuInputFunction_FUNCTION_TAB_PREVIOUS = 175,
    EMenuInputFunction_FUNCTION_TAB_NEXT = 176,
    EMenuInputFunction_FUNCTION_CYCLE_PREVIOUS = 177,
    EMenuInputFunction_FUNCTION_CYCLE_NEXT = 178,
    EMenuInputFunction_FUNCTION_INBOX = 179,
    EMenuInputFunction_FUNCTION_MENU_OPTIONS = 180,
    EMenuInputFunction_FUNCTION_INGAME_OPTIONS = 181,
    EMenuInputFunction_FUNCTION_INGAME_INTEL = 182,
    EMenuInputFunction_FUNCTION_ANALOG_CLOCKWISE = 183,
    EMenuInputFunction_FUNCTION_ANALOG_COUNTERCLOCKWISE = 184,
    EMenuInputFunction_FUNCTION_ANALOG_RIGHT = 185,
    EMenuInputFunction_FUNCTION_ANALOG_LEFT = 186,
    EMenuInputFunction_FUNCTION_PHOTOMODE_OPEN = 187,
    EMenuInputFunction_FUNCTION_KEYBOARD_NUM_INPUT = 188,
    EButton_BUTTON_TRIANGLE = 189,
    EButton_BUTTON_CIRCLE = 190,
    EButton_BUTTON_CROSS = 191,
    EButton_BUTTON_SQUARE = 192,
    EButton_BUTTON_SHOULDER_LEFT2 = 193,
    EButton_BUTTON_SHOULDER_RIGHT2 = 194,
    EButton_BUTTON_SHOULDER_LEFT1 = 195,
    EButton_BUTTON_SHOULDER_RIGHT1 = 196,
    EButton_BUTTON_START = 197,
    EButton_BUTTON_SELECT = 198,
    EButton_BUTTON_LEFT_ANALOG = 199,
    EButton_BUTTON_RIGHT_ANALOG = 200,
    EButton_BUTTON_UP = 201,
    EButton_BUTTON_RIGHT = 202,
    EButton_BUTTON_DOWN = 203,
    EButton_BUTTON_LEFT = 204,
    EButton_BUTTON_ReservedBit16 = 205,
    EButton_BUTTON_ReservedBit17 = 206,
    EButton_BUTTON_ReservedBit18 = 207,
    EButton_BUTTON_ReservedBit19 = 208,
    EButton_BUTTON_ReservedBit20 = 209,
    EButton_BUTTON_TOUCH_PAD = 210,
    EButton_BUTTON_TOUCH_PAD_LEFT = 211,
    EButton_BUTTON_TOUCH_PAD_RIGHT = 212,
    EButton_BUTTON_TOUCH_PAD_SWIPE_UP = 213,
    EButton_BUTTON_TOUCH_PAD_SWIPE_LEFT = 214,
    EButton_BUTTON_TOUCH_PAD_SWIPE_RIGHT = 215,
    EButton_BUTTON_TOUCH_PAD_SWIPE_DOWN = 216,
    kDSFunctionSystemReserved_Decide = 217,
    kDSFunctionSystemReserved_Cancel = 218,
    kDSFunctionCommon_Decide = 219,
    kDSFunctionCommon_Cancel = 220,
    kDSFunctionCommon_SkipMessage = 221,
    kDSFunctionCommon_MainMenu = 222,
    kDSFunctionCommon_SystemMenu = 223,
    kDSFunctionCommon_ChangeAmmoType = 224,
    kDSFunctionCommon_Shout = 226,
    kDSFunctionCommon_RideAndGetOff = 227,
    kDSFunctionCommon_Sensor = 225,
    kDSFunctionCommon_Marker = 228,
    kDSFunctionCommon_MarkerPrev = 229,
    kDSFunctionCommon_MarkerNext = 230,
    kDSFunctionAction_ADS = 231,
    kDSFunctionAction_Fire = 232,
    kDSFunctionAction_LeftSideAction = 233,
    kDSFunctionAction_RightSideAction = 234,
    kDSFunctionAction_LeftSideActionGrab = 235,
    kDSFunctionAction_RightSideActionGrab = 236,
    kDSFunctionAction_LeftSideActionBrace = 237,
    kDSFunctionAction_RightSideActionBrace = 238,
    kDSFunctionAction_Reload = 239,
    kDSFunctionAction_Melee = 240,
    kDSFunctionAction_Pickup = 241,
    kDSFunctionAction_Access = 242,
    kDSFunctionAction_Action = 243,
    kDSFunctionAction_BreathStop = 244,
    kDSFunctionAction_Sensor = 245,
    kDSFunctionAction_SwitchOdradekLight = 246,
    kDSFunctionAction_InventoryMenu = 247,
    kDSFunctionAction_BuildAngleUp = 248,
    kDSFunctionAction_BuildAngleDown = 249,
    kDSFunctionView_SwitchCamera = 250,
    kDSFunctionView_ZoomIn = 251,
    kDSFunctionView_FirstPersonView = 252,
    kDSFunctionView_RaceModeShowFront = 253,
    kDSFunctionView_RaceModeShowBack = 254,
    kDSFunctionView_RaceModeShowLeft = 255,
    kDSFunctionView_RaceModeShowRight = 256,
    kDSFunctionAction_MoveToForward = 257,
    kDSFunctionAction_MoveToBack = 258,
    kDSFunctionAction_MoveToLeft = 259,
    kDSFunctionAction_MoveToRight = 260,
    kDSFunctionAction_ChangeStance = 261,
    kDSFunctionAction_Jump = 262,
    kDSFunctionAction_Sprint = 263,
    kDSFunctionAction_Walk = 264,
    kDSFunctionVehicle_MoveToForward = 265,
    kDSFunctionVehicle_MoveToBack = 266,
    kDSFunctionVehicle_MoveToLeft = 267,
    kDSFunctionVehicle_MoveToRight = 268,
    kDSFunctionVehicle_Accelerator = 269,
    kDSFunctionVehicle_Brake = 270,
    kDSFunctionVehicle_HandBrake = 271,
    kDSFunctionVehicle_Booster = 272,
    kDSFunctionVehicle_Jump = 273,
    kDSFunctionVehicle_Wheelie = 274,
    kDSFunctionVehicle_JackKnife = 275,
    kDSFunctionVehicle_Drift = 276,
    kDSFunctionVehicle_KickFloatingCarrier = 277,
    kDSFunctionVehicle_GetOffFromFloatingCarrier = 278,
    kDSFunctionVehicle_GoNearestDeliveryPoint = 279,
    kDSFunctionVehicle_GoNearestHubInsideChiralArea = 280,
    kDSFunctionHUD_WeaponSelector = 281,
    kDSFunctionHUD_MagazineSelector = 282,
    kDSFunctionHUD_EquipmentSelector = 283,
    kDSFunctionHUD_ItemSelector = 284,
    kDSFunctionHUD_SelectorPagePrev = 285,
    kDSFunctionHUD_SelectorPageNext = 286,
    kDSFunctionHUD_SelectItemUseOrEquip = 287,
    kDSFunctionHUD_SelectItemPut = 288,
    kDSFunctionHUD_SelectItemMoveToX = 289,
    kDSFunctionHUD_SelectItemMoveToLeftHand = 290,
    kDSFunctionHUD_SelectItemMoveToRightHand = 291,
    kDSFunctionPrivateRoom_Button0 = 292,
    kDSFunctionPrivateRoom_Button1 = 293,
    kDSFunctionPrivateRoom_Button2 = 294,
    kDSFunctionPrivateRoom_Button3 = 295,
    kDSFunctionMenu_OpenKeybindMenu = 296,
    kDSFunctionPhotoMode_OpenMenu = 297,
    kDSFunctionPhotoMode_SwitchOperationMode = 298,
    kDSFunctionPhotoMode_MoveToUp = 299,
    kDSFunctionPhotoMode_MoveToDown = 300,
    kDSFunctionPhotoMode_Sprint = 301,
    kDSFunctionPhotoMode_Walk = 302,
    kDSFunctionVirtual_Rumble = 303,
    kDSFunctionVirtual_CareBB = 304,
    kDSFunctionVirtual_CameraAction = 305,
    kDSFunctionVirtual_SelectorItemSelect = 306,
    kDSFunctionVirtual_SelectorPageChange = 307,
    kDSFunctionVirtual_MoveToX = 308,
    kDSFunctionVirtual_LookToX = 309,
    kDSFunctionDebug_FlyMode = 310,
    kDSFunctionDebug_LookToUp = 311,
    kDSFunctionDebug_LookToDown = 312,
    kDSFunctionDebug_LookToLeft = 313,
    kDSFunctionDebug_LookToRight = 314,
    kDSFunctionDebug_PadUp = 315,
    kDSFunctionDebug_PadDown = 316,
    kDSFunctionDebug_PadLeft = 317,
    kDSFunctionDebug_PadRight = 318,
    kDSFunctionDebug_PadTriangle = 319,
    kDSFunctionDebug_PadSquare = 320,
    kDSFunctionDebug_PadCircle = 321,
    kDSFunctionDebug_PadCross = 322,
    kDSFunctionDebug_PadL1 = 323,
    kDSFunctionDebug_PadL2 = 324,
    kDSFunctionDebug_PadL3 = 325,
    kDSFunctionDebug_PadR1 = 326,
    kDSFunctionDebug_PadR2 = 327,
    kDSFunctionDebug_PadR3 = 328,
    kDSFunctionDebug_PadOption = 329,
    kDSFunctionDebug_PadTouchPad = 330,
};
#ifndef WwiseID
struct WwiseIDProxy;
#define WwiseID WwiseIDProxy
#endif
#ifndef EjectEffectsLocationResource
struct EjectEffectsLocationResourceProxy;
#define EjectEffectsLocationResource EjectEffectsLocationResourceProxy
#endif
enum class EDSUIActionLocalizedId : int {
    None = 0,
    PickUp = 1,
    LoadOn = 2,
    Build = 3,
    CancelBuild = 4,
    RideOn = 5,
    RideOff = 6,
    Kick = 7,
    InteractTerminal = 8,
    Transfer = 9,
    DeliveryMaterial = 10,
    GrabCart = 11,
    VehicleAttach = 12,
    MissionList = 13,
    Rumble = 14,
    PickUpR = 15,
    PickUpL = 16,
    GazerCut = 17,
    Carry = 18,
    CarryOff = 19,
    CartDetach = 21,
    CartAttach = 22,
    CartLink = 23,
    CartGetOff = 24,
    CartToBaggage = 25,
    BaggageToCart = 26,
    RopeFighting = 27,
    Climb = 28,
    ClimbToDown = 29,
    StepOn = 30,
    Rolling = 31,
    EludeToStepOn = 32,
    EludeToFall = 33,
    Dummy = 34,
    UsrLocation = 35,
    SearchBaggage = 36,
    SetMarker = 37,
    UnSetMarker = 38,
    UseZipline = 39,
    SendLike = 40,
    GetCollectible = 41,
    TakeABreak = 42,
    RepairShoes = 43,
    ChangeShoes = 44,
    TakeASleep = 45,
    TakeAMassageFoot = 46,
    TakeAMassageShoulder = 47,
    TakeASleepToWake = 48,
    Struggle = 49,
    Catch = 50,
    CatchRight = 51,
    CatchLeft = 52,
    PickUpToBackPack = 53,
    PickUpToBackPackFromHand = 54,
    ToStand = 55,
    LadderToBaggage = 56,
    LadderGrabIn = 57,
    LadderGrabOut = 58,
    CatchRope = 59,
    ThrowRope = 60,
    Detonate = 61,
    SprayFront = 62,
    SprayBack = 63,
    LockOnActivate = 64,
    LockOnDeactivate = 65,
    SubMagazineActivate = 66,
    SubMagazineDeactivate = 67,
    AppeaseBB = 68,
    StopAppeaseBB = 69,
    ShakeBBSilently = 70,
    ShakeBBSilently_R2 = 71,
    SubjectiveLookBBPod = 72,
    Return = 73,
    MarkerFocus = 74,
    ZiplineFocus = 75,
    ExitPrivateRoom = 76,
    DirectExitPrivateRoom = 77,
    UseShower = 78,
    ShowEquipmentShelf = 79,
    UseBBTool = 80,
    FastTravel = 81,
    UseWC = 82,
    ToUrinate = 83,
    ToFeces = 84,
    UseWashBasin = 85,
    ShowSuit = 86,
    CustomizeBackpack = 87,
    UseTerminal = 88,
    ShowTable = 89,
    WatchFigure = 90,
    ShowDreamCatcher = 91,
    UpDown = 92,
    Zoom = 93,
    CreateSignboard = 94,
    ReadSignboard = 95,
    LeftStick_Left = 97,
    LeftStick_Right = 98,
    LeftStick_Up = 99,
    LeftStick_Down = 100,
    RightStick_Left = 101,
    RightStick_Right = 102,
    RightStick_Up = 103,
    RightStick_Down = 104,
    Hacking = 105,
    UseWatchTower = 106,
    UseCatapult = 107,
    MoveRight = 108,
    MoveLeft = 109,
    TerminalLocked = 110,
    SecondJump = 111,
    StandExtreme = 112,
    StandSuper = 113,
    StopBreathHandL = 114,
    StopBreathHandR = 115,
    LevelUpDestroy = 116,
    BuildRoad = 117,
    WearCap = 118,
    WearGlasses = 119,
    DrinkBeer = 120,
    EatCryptobiosis = 121,
    RemoveCap = 123,
    RemoveGlasses = 124,
    Hug = 125,
    SwapBodyBag = 126,
    PutIntoBodyBag = 127,
    Jump = 128,
    JumpAttack = 129,
    JumpKneeKick = 130,
    JumpDropKick = 131,
    JumpBodyPress = 132,
    UseCamouflageHolo = 133,
    DestroyConstruction = 134,
    UseRainShelterCoatingSpray = 135,
    GuardModeL = 136,
    GuardModeR = 137,
    GuardModeDouble = 138,
    LookBB = 139,
    StopLookingBB = 140,
    WeatheredConstruction = 141,
    TakeAOnsen = 142,
    PaddlingLeftSide = 143,
    PaddlingRightSide = 144,
    Swing = 145,
    RainShelter = 146,
    CatapultShoot = 147,
    CatapultParachute = 148,
    CatapultCancel = 149,
    MemoriesWithCliff = 150,
    VsWarriors = 151,
    VsWarriors1 = 152,
    VsWarriors2 = 153,
    VsWarriors3 = 154,
    RetrieveBaggages = 155,
    ZiplineSelect = 156,
    ZiplineCancel = 157,
    ZiplineGetOff = 158,
    CatapultPodCameraOff = 159,
    HiggsGuardMode = 160,
    HiggsSwing = 161,
    HiggsHeadbutt = 162,
    FakeHoloCancel = 163,
    OpenDoor = 164,
    ZoomIn = 165,
    ZoomOut = 166,
    GuardModeStopDouble = 167,
    VehicleMuleDrag = 168,
    InteractConstruction = 169,
    DestroyLadder = 170,
    DestroyRope = 171,
    DestroyVehicle = 172,
    EnterPrivateRoom = 173,
    Move = 174,
    Camera = 175,
    WatchTowerCancel = 176,
    ConstructionOpenMap = 177,
    LoadData = 178,
    ReturnFromKnotSpace = 179,
    BuildLadder = 180,
    BuildRope = 181,
    CatapultChargeCancel = 182,
    TakeABreakCrouch = 183,
    WashBasinAction = 184,
    ZiplineRideOff = 185,
    CatapultPodMove = 186,
    UseTurret = 187,
    ChangeColor = 188,
    RopeParry = 189,
    RopeFixBaggage = 190,
    PutCart = 191,
    PickupCart = 192,
    PutVehicle = 193,
    PickupVehicle = 194,
    PutBot = 195,
    PickupBotLeft = 196,
    PickupBotRight = 197,
    BuildAim = 200,
    AppeaseLou = 201,
    StopAppeaseLou = 202,
    ShakeLouSilently = 203,
    ShakeLouSilently_R2 = 204,
    SubjectiveLookLouPod = 205,
    UseLouTool = 206,
    LookLou = 207,
    SwapBodybagAndBaggage = 208,
    PickMama = 209,
    PickArtist = 210,
    PickPorter = 211,
    DropDeadbodyBag = 212,
    DropMama = 213,
    DropArtist = 214,
    DropPorter = 215,
    BuildAimLadderRope = 216,
    ChangeBridgeLength = 217,
    WearGlassesGordon = 218,
    WearValve = 219,
    WearHeadCrab = 220,
    WearGlassesJohnny = 221,
    RemoveGlassesGordon = 222,
    RemoveValve = 223,
    RemoveHeadCrab = 224,
    RemoveGlassesJohnny = 225,
    ChangeBBPodColor = 226,
    OpenGate = 227,
    GoNearestDeliveryPoint = 228,
    GoNearestHubInsideChiralArea = 229,
    RideOffBot = 230,
    FireMachinegun = 231,
    CancelMachinegun = 232,
};
#ifndef DSWelcomeHoloAnimationDistanceSetting
struct DSWelcomeHoloAnimationDistanceSettingProxy;
#define DSWelcomeHoloAnimationDistanceSetting DSWelcomeHoloAnimationDistanceSettingProxy
#endif
enum class EDSTipsUnlockType : char {
    None = 0,
    MissionClear = 1,
    ConnectQpid = 2,
    GameClear = 3,
    FriendshipLevel3 = 4,
    FriendshipLevel4 = 5,
    FriendshipLevel5 = 6,
    MemoryChip = 7,
};
enum class EDSUIMenuSoundCategory : char {
    None = 0,
    Device = 1,
    DeviceTop = 2,
    DeviceDelivery = 3,
    DeviceMission = 4,
    DeviceWish = 5,
    DeviceSystem = 6,
    DeviceBaggage = 7,
    DeviceRadio = 8,
    DevicePreparation = 9,
    DeviceHandOver = 10,
    DeviceConstruction = 11,
    DeviceBridgesID = 12,
    DeviceFastTravel = 13,
    DeviceMail = 14,
    DeviceBackPack = 15,
    DeviceVehicle = 16,
    DeviceDeliveryBot = 17,
    DeviceMapDemo = 18,
    DeviceQpidResult = 19,
    DeviceMusic = 20,
    DevicePrivateRoomColor = 21,
    DeviceFinalResult = 22,
    Database = 23,
    DatabaseTips = 24,
    DatabaseArchive = 25,
    DatabaseInfoLog = 26,
    DatabaseMemoryChip = 27,
    CommonDialogue = 28,
    InGamePause = 29,
    DemoPause = 30,
    Controller = 31,
    Config = 32,
    PhotoMode = 33,
    MissionResult = 34,
    Signboard = 35,
    Uniform = 36,
    CliffMemories = 37,
    PrivateRoomPhoto = 38,
    Title = 39,
    GameOver = 40,
    Birthday = 41,
    Install = 42,
    LoadingScreen = 43,
    SplashScreen = 44,
};
#ifndef JointSetID
struct JointSetIDProxy;
#define JointSetID JointSetIDProxy
#endif
#ifndef DSUIMissionResultUnlockFunctionDialogResource
struct DSUIMissionResultUnlockFunctionDialogResourceProxy;
#define DSUIMissionResultUnlockFunctionDialogResource DSUIMissionResultUnlockFunctionDialogResourceProxy
#endif
#ifndef PoseID
struct PoseIDProxy;
#define PoseID PoseIDProxy
#endif
#ifndef UDSEventSetIntStat
struct UDSEventSetIntStatProxy;
#define UDSEventSetIntStat UDSEventSetIntStatProxy
#endif
enum class EDSUICommonTelopType : int {
    TELOP_COMMON = 0,
    TELOP_LANDMARK = 1,
    TELOP_TUTORIAL = 2,
    TELOP_MUSIC = 3,
    TELOP_STAFF = 4,
    TELOP_CHARACTER = 5,
};
#ifndef HitReactionSeverityModifier
struct HitReactionSeverityModifierProxy;
#define HitReactionSeverityModifier HitReactionSeverityModifierProxy
#endif
enum class EDSUITelopDisplayPriorityType : int {
    Priority_1st_MISSION = 0,
    Priority_2nd_COMMON_PRIORITY = 1,
    Priority_3rd_COMMON = 2,
};
enum class EDSUIMusicTelopDisplayMode : int {
    DEFAULT = 0,
    MUSIC_PLAYER = 1,
};
#ifndef HumanoidResource
struct HumanoidResourceProxy;
#define HumanoidResource HumanoidResourceProxy
#endif
enum class EDSAmmoId : char {
    None = 0,
    BloodBullet = 1,
    GoldenBullet = 2,
    AssaultRifle = 3,
    AssaultRifleLv2 = 4,
    AssaultRifleLv3 = 5,
    AssaultRifleLv4 = 6,
    Grenade = 7,
    BloodGrenade = 8,
    BloodGrenadeLv1Extend = 9,
    BloodGrenadeLv2 = 10,
    ElectricalGrenadeLv1 = 11,
    ElectricalGrenadeLv2 = 12,
    ElectricalGrenadePlace = 13,
    CoatingSpray = 14,
    SmokeGrenade = 15,
    SmokeGrenadeLv2 = 16,
    FreezeGrenade = 17,
    TranquilizerGun = 18,
    AmnioticFluidGrenade = 19,
    ExGrenade0 = 20,
    ExGrenade1 = 21,
    ExGrenade1Plus = 22,
    ExGrenade2 = 23,
    BolaGun = 24,
    BolaGunLv2 = 25,
    ShotGun = 26,
    ShotGunLv2 = 27,
    ShotGunLv3 = 28,
    HandGun = 29,
    HandGunLv2 = 30,
    HandGunLv3 = 31,
    BloodHandGun = 32,
    BloodHandGunLv2 = 33,
    AmelieHandGun = 34,
    C4 = 35,
    GazerBalloon = 36,
    SamBall = 37,
    SamBallLv2 = 38,
    GrenadeShell = 39,
    BloodGrenadeShell = 40,
    SlipGrenadeShell = 41,
    AmnioticFluidGrenadeShell = 42,
    TranquilizerGrenadeShell = 43,
    AssaultRifleRubberBullet = 44,
    AssaultRifleRubberBulletLv2 = 45,
    AssaultRifleRubberBulletLv3 = 46,
    AssaultRifleRubberBulletLv4 = 47,
    ShotGunRubberBullet = 48,
    ShotGunRubberBulletLv2 = 49,
    ShotGunRubberBulletLv3 = 50,
    Builder = 51,
    Ladder = 52,
    Rope = 53,
    StickyBullet = 54,
    FourConsecutiveMissile = 55,
    SpreadMissile = 56,
    HologramDevice = 57,
    EnemyAssaultRifle = 58,
    EnemyAssaultRifleRubberBullet = 59,
    HiggsAssaultRifleBullet = 60,
    Ww1Rifle = 61,
    Ww1ShotGun = 62,
    Ww1Grenade = 63,
    Ww1MachineGun = 64,
    Ww2SubmachineGun = 65,
    Ww2Rifle = 66,
    Ww2Missile = 67,
    Ww2MissileType2 = 68,
    Ww2SmokeGrenade = 69,
    VietnamAssault = 70,
    VietnamAssaultWithGrenader = 71,
    VietnamAssaultWithGrenaderShell = 72,
    VietnamMachinegun = 73,
    VietnamGrenade = 74,
    CliffRifle = 75,
    AfghanRifle = 76,
    DemensAssaultRifleBullet = 77,
    DemensShotGunBullet = 78,
    EnemyGrenade = 79,
    Ww2Grenade = 80,
    AfghanGrenade = 81,
    Ww2AirPlaneMachinegun = 82,
    Ww2HeavyMachinegun = 83,
    DemensElectricalGrenade = 84,
    EDSAmmoIdUnk_0 = 85,
    MaserGun = 86,
    CliffHandGun = 87,
    RubberFixedGun = 88,
    EnemyDemensFixedGun = 89,
    EnemyRubberFixedGun = 90,
};
enum class EDSBaggageMenuInfoResult : int {
    MoveFromPlayer = 1,
    MoveToPlayer = 2,
    MoveFromGround = 4,
    MoveToGround = 8,
    MoveFromVehicle = 16,
    MoveToVehicle = 32,
    MoveFromBike = 64,
    MoveToBike = 128,
    MoveFromCart = 256,
    MoveToCart = 512,
    MoveFromPrivateBox = 1024,
    MoveToPrivateBox = 2048,
    MoveFromPublicBox = 4096,
    MoveToPublicBox = 8192,
    MoveFromSupplyBox = 16384,
    MoveToSupplyBox = 32768,
    MoveFromMaterialBox = 65536,
    MoveToMaterialBox = 131072,
    MoveToPlayerBackPack = 262144,
    MoveToDeliveryBot = 524288,
    MoveFromDeliveryBot = 1048576,
    MoveToPlayerFromCatapultShell = 2097152,
};
#ifndef SkeletonAnimationEventPayload
struct SkeletonAnimationEventPayloadProxy;
#define SkeletonAnimationEventPayload SkeletonAnimationEventPayloadProxy
#endif
enum class EDSMissionConditionType : char {
    Unknown = 0,
    Safety = 1,
    Speed = 2,
    BaggageCount = 3,
    BaggageWeight = 4,
    Service = 5,
    ChiralDelivery = 6,
    Damage = 7,
};
#ifndef FloatPropertyBase
struct FloatPropertyBaseProxy;
#define FloatPropertyBase FloatPropertyBaseProxy
#endif
enum class EDSRewardRank : char {
    None = 0,
    Rank_E = 0,
    Rank_D = 1,
    Rank_C = 2,
    Rank_B = 3,
    Rank_A = 4,
    Rank_S = 5,
    Rank_SS = 6,
    Rank_SSS = 7,
    Rank_SSSS = 8,
};
#ifndef StreamingTileStateResource
struct StreamingTileStateResourceProxy;
#define StreamingTileStateResource StreamingTileStateResourceProxy
#endif
#ifndef PhysicsConstraintResource
struct PhysicsConstraintResourceProxy;
#define PhysicsConstraintResource PhysicsConstraintResourceProxy
#endif
#ifndef DSPatrolPath
struct DSPatrolPathProxy;
#define DSPatrolPath DSPatrolPathProxy
#endif
enum class EPlayerHealthSettings : int {
    Low = 0,
    Normal = 1,
    High = 2,
};
#ifndef ReverbPresetResource
struct ReverbPresetResourceProxy;
#define ReverbPresetResource ReverbPresetResourceProxy
#endif
enum class EDSMuleStance : int {
    Mule_Stance_Sneak = 0,
    Mule_Stance_Caution = 1,
    Mule_Stance_Alert = 2,
};
enum class EDSBareFootNailDamageType : char {
    BareFootDamage_NailExists = 0,
    BareFootDamage_NailDoesnotExist = 1,
};
enum class EDSPlayerMoveTypeExported : int {
    Idle = 0,
    Walk = 1,
    Run = 2,
    Dash = 3,
};
#ifndef DSTipsResourceBase
struct DSTipsResourceBaseProxy;
#define DSTipsResourceBase DSTipsResourceBaseProxy
#endif
enum class EDSPlayerStanceExported : int {
    Stand = 0,
    Crouch = 1,
};
#ifndef QuestSection
struct QuestSectionProxy;
#define QuestSection QuestSectionProxy
#endif
enum class EDSMissionOrderState : char {
    None = 0,
    NotStarted = 1,
    NotCompleted = 2,
    Completed = 4,
};
#ifndef ModelPartResource
struct ModelPartResourceProxy;
#define ModelPartResource ModelPartResourceProxy
#endif
enum class ECommandPriority : int {
    unspecified = 0,
    blind_following = 1,
    follow_orders = 2,
    non_battle_initiative = 3,
    idle = 4,
};
#ifndef PlayerOutfitTheme
struct PlayerOutfitThemeProxy;
#define PlayerOutfitTheme PlayerOutfitThemeProxy
#endif
#ifndef PlayerOutfit
struct PlayerOutfitProxy;
#define PlayerOutfit PlayerOutfitProxy
#endif
#ifndef PlayerNotificationPriority
struct PlayerNotificationPriorityProxy;
#define PlayerNotificationPriority PlayerNotificationPriorityProxy
#endif
#ifndef WString
struct WStringProxy;
#define WString WStringProxy
#endif
enum class EDSPlayerActionStateExported : int {
    None = 0,
    Basic = 1,
    LowerHack = 2,
    Dodge = 3,
    Pickup = 4,
    CareForBB = 5,
    TakeABreak = 6,
    Interactive = 7,
    Climb = 8,
    RopeMove = 9,
    Natural = 10,
    Jump = 11,
    RideVehicle = 12,
    Zipline = 13,
    FastAttack = 16,
    Fall = 17,
    StepOn = 18,
    Elude = 19,
    Damage = 20,
    InGameGesture = 21,
    Ghost = 22,
    HiggsPhase = 23,
    Death = 24,
    Sequence = 25,
    PrivateRoom = 26,
    HeartmanRoom = 27,
};
enum class EEquipSlotType : char {
    Invalid = 0,
    None = 1,
    RangedWeapon = 2,
    MeleeWeapon = 3,
    HeavyWeapon = 4,
    Outfit = 5,
};
enum class EDSMissionCategory : int16_t {
    MainMission = 0,
    SubMission = 1,
    SimpleMission = 2,
    FreeMission = 3,
    OtherMission = 4,
};
enum class EDSDeliveryManagerCommandTarget : char {
    Baggage = 0,
    DeliveryPoint = 1,
    Zipline = 2,
    Ladder = 3,
    FieldRope = 4,
    Bridge = 5,
};
#ifndef MovieResource
struct MovieResourceProxy;
#define MovieResource MovieResourceProxy
#endif
enum class EPhysicsCollisionLayerGame : int {
    Static = 1,
    Dynamic_HQ = 2,
    Dynamic = 3,
    Water_raycast = 4,
    Sound_occlusion = 5,
    Ragdoll = 6,
    Water = 7,
    Neutral_NPC_with_Chiral_Bridge = 50,
    AI_hearing = 51,
    vs_AI_hearing = 52,
    Bullet_blocker = 53,
    Bullet_blocker_raycast = 54,
    Trigger = 55,
    Trigger_raycast = 56,
    Heavy_Ragdoll = 57,
    Player = 8,
    AI_or_Remote_Player = 9,
    Humanoid_blocker = 10,
    Player_blocker = 11,
    Foot_placement = 12,
    Dynamic_but_humanoid = 13,
    Humanoid_raycast_movement = 14,
    Player_and_Bullet_blocker = 15,
    vs_Default_Character_Blocker = 16,
    Vehicle = 17,
    Vehicle_stopper = 18,
    Humanoid_movement_helper = 19,
    Projectile = 20,
    Player_Damage_Blocker = 21,
    Enemy_Damage_Blocker = 22,
    BT_Damage_Blocker = 23,
    Neutral_Damage_Blocker = 24,
    vs_Humanoids = 25,
    Camera_through = 26,
    vs_Camera_blocker = 27,
    push = 28,
    vs_not_enemy = 29,
    Dynamic_HQ_but_humanoid = 30,
    Proxy_player = 31,
    vs_Eye_blocker = 32,
    DS_Dynamic_Small_Gimmick = 33,
    DS_Player_Movement_Blocker = 34,
    DS_Strand_object = 35,
    Blocks_vision = 36,
    Player_Ragdoll = 37,
    Ragdoll_Damage_Blocker = 38,
    Player_and_Bullet_blocker_no_navi = 39,
    Layer_without_no_navi = 40,
    Player_and_Bullet_blocker_no_solid_navi = 41,
    Layer_without_no_solid_navi = 42,
    Layer_with_no_solid_navi_only = 43,
    Static_But_Humanoid = 44,
    Camera_blocker = 45,
    Particles_Collision = 46,
    Ray_vs_Static = 47,
    Vehicle_wheel_raycast = 48,
    Camera_Obstruction = 58,
    Navigation_Mesh = 59,
    Vault_Query_ = 60,
    Cliff_Floor = 61,
    Deep_Water_Surface = 62,
    VS_Structure_Blocker = 63,
    Navigation_Mesh_Hard_Obstacle = 64,
    Semi_Static = 65,
    Camera_Collision = 66,
    DS_Dynamic_Recoil = 67,
    DS_vs_Static_only = 68,
    Static_but_Navigation_Mesh = 69,
    No_Vault_Action = 70,
    Leg_IK_raycast = 71,
    Lightbake_Visibility = 72,
    DS_Rope_To_Check = 73,
    Enemy_only_blocker = 74,
    Road_dont_fall = 75,
    Cliff_Wall = 76,
    Toxic_Gas_Zone = 77,
    DS_Eye_blocker = 78,
    vs_Enemy_Character_Blocker = 79,
    VS_Damage_Blocker = 80,
    Dont_fall = 81,
    DS_Baggage = 82,
    vs_Enemy_Character_Blocker_Allow_Fall = 83,
    DS_Dynamic_Heavy_Gimmick = 84,
    Chiral_Wall = 85,
    Player_blocker_without_vehicle = 86,
    Player_and_Bullet_blocker_without_vehicle = 87,
    Grass = 88,
    Construction_Region = 89,
    vs_Construction_Region = 90,
    Enemy_and_Vehicle_blocker = 91,
    DS_Ladder = 92,
    DS_Construction_Checker = 93,
    vs_Dynamic_Objects = 94,
    No_Vault_Action_Player_Bullet_Blocker = 95,
    DS_Player_Leg_IK_Raycast = 96,
    Humanoid_and_Vehicle_blocker = 97,
    vs_Dont_fall = 98,
    Boss_Only_Blocker = 99,
    vs_Boss_Only_Blocker = 100,
    Sound_Pole = 101,
    vs_BulletBlocker_and_SoundPole = 102,
    Projectile_Baggage = 103,
    Chiral_Wall_Warrior = 104,
    BT_Handprint = 105,
    DS_Dynamic_Middle_Gimmick = 106,
    vs_bullet_blocker_without_water = 107,
    vs_bullet_blocker_without_No_Vault_Action = 108,
    DS_Ladder_Checker = 109,
    weapon_case_debris = 110,
    DS_Dynamic_Eye_blocker = 111,
    vs_Chiral_Wall = 112,
    Projectile_for_ammo_cartridge = 113,
    DS_Chiral_Bridge = 114,
    DS_Chiral_Bridge_Region = 115,
    vs_DS_Chiral_Bridge_Region = 116,
    DS_Projectile_Catapult = 117,
    Navigation_Mesh_with_Chiral_Bridge = 118,
    Static_Debug = 119,
    Dynamic_Debug = 120,
    Debug_Draw = 121,
    Density_Debug = 122,
    Collision_Check_Tool = 123,
};
#ifndef PathResource
struct PathResourceProxy;
#define PathResource PathResourceProxy
#endif
enum class EBlendMode : char {
    Interpolate = 0,
    Add = 1,
    Substract = 2,
};
enum class EDSCameraCollisionTriggerType : char {
    None = 0,
    NearTerminal = 1,
    UserType1 = 2,
    UserType2 = 3,
    UserType3 = 4,
    UserType4 = 5,
    UserType5 = 6,
    UserType6 = 7,
    UserType7 = 8,
    UserType8 = 9,
    UserType9 = 10,
    UserType10 = 11,
    UserType11 = 12,
    UserType12 = 13,
    UserType13 = 14,
    UserType14 = 15,
    UserType15 = 16,
    UserType16 = 17,
    AdditionalDistance = 18,
};
enum class EDSCutsceneStateAttr : int {
    None = 0,
    HUDHideImmediately = 1,
    HUDHideFadeout = 2,
};
#ifndef DSMusicPlayerTrackResource
struct DSMusicPlayerTrackResourceProxy;
#define DSMusicPlayerTrackResource DSMusicPlayerTrackResourceProxy
#endif
#ifndef LocalizedText
struct LocalizedTextProxy;
#define LocalizedText LocalizedTextProxy
#endif
#ifndef JointID
struct JointIDProxy;
#define JointID JointIDProxy
#endif
enum class EClosestAnimAlignmentType : char {
    None = 0,
    Rotation = 1,
    RotationAndTranslation = 2,
};
#ifndef StaminaModifier
struct StaminaModifierProxy;
#define StaminaModifier StaminaModifierProxy
#endif
#define Array_LocalizerVariable Array<LocalizerVariable>
#ifndef ResourceID
struct ResourceIDProxy;
#define ResourceID ResourceIDProxy
#endif
#ifndef Resource
struct ResourceProxy;
#define Resource ResourceProxy
#endif
enum class EDSTakeLikeReason : int16_t {
    Unset = -1,
    Other = 17,
    FromBB = 6,
    FromPorter = 7,
    FromBridges = 9,
    FromPreppers = 10,
    FromBT = 11,
    ByDonation = 12,
    PickUpOfflineBaggages = 3,
    DeliverNpcBaggages = 0,
    PickUpOnlineBaggages = 4,
    DeliverOnlineUserBaggages = 1,
    DonationUsed = 13,
    BuildingUsed = 14,
    ContributeToConstruction = 15,
    FromOnlineUser = 16,
    DeliveryTogetherTotalWeight = 2,
    DiscardingChiralContaminants = 5,
};
#ifndef GraphProgramResource
struct GraphProgramResourceProxy;
#define GraphProgramResource GraphProgramResourceProxy
#endif
#ifndef DSBaggageUnit
struct DSBaggageUnitProxy;
#define DSBaggageUnit DSBaggageUnitProxy
#endif
enum class EDSMissionLogicBlockType : char {
    LogicBlockAnd = 1,
    LogicBlockOr = 2,
};
#ifndef DSMuleGameActorUnitResource
struct DSMuleGameActorUnitResourceProxy;
#define DSMuleGameActorUnitResource DSMuleGameActorUnitResourceProxy
#endif
#ifndef ArtPartsVariationResource
struct ArtPartsVariationResourceProxy;
#define ArtPartsVariationResource ArtPartsVariationResourceProxy
#endif
#ifndef OpenMenuParameters
struct OpenMenuParametersProxy;
#define OpenMenuParameters OpenMenuParametersProxy
#endif
enum class EJointSpace : char {
    LocalSpace = 0,
    ModelSpace = 1,
};
enum class EJointOperation : char {
    Add = 1,
    Set = 0,
    Ignore = 2,
};
#ifndef DSPatrolPathPriorityListBase
struct DSPatrolPathPriorityListBaseProxy;
#define DSPatrolPathPriorityListBase DSPatrolPathPriorityListBaseProxy
#endif
enum class EInventoryItemRarity : char {
    Common = 0,
    Uncommon = 1,
    Rare = 2,
    VeryRare = 3,
};
#ifndef DSLocator
struct DSLocatorProxy;
#define DSLocator DSLocatorProxy
#endif
enum class EDSWeatherForecastType : char {
    Rainy = 0,
    Cloudy = 1,
    Average = 2,
    RainyOnly = 3,
    CloudyOnly = 4,
    HeavyRainOnly = 5,
    SunnyOnly = 6,
    RainyNotHeavyRain = 7,
    AverageNotHeavyRain = 8,
    RainyForMule = 9,
    CloudyForMule = 11,
    AverageForMule = 10,
    RainyNotHeavyRainForMule = 12,
    AverageNotHeavyRainForMule = 13,
    Invalid = 14,
};
#ifndef EnvelopeResource
struct EnvelopeResourceProxy;
#define EnvelopeResource EnvelopeResourceProxy
#endif
enum class EDSMailInfoStatus : char {
    UnSent = 0,
    Sent = 1,
    ReciveUnopend = 2,
    ReciveOpened = 3,
};
enum class ELoopMode : int {
    Off = 0,
    On = 1,
    Hold = 2,
    PingPong = 3,
};
#ifndef DSMissionServiceConditionResource
struct DSMissionServiceConditionResourceProxy;
#define DSMissionServiceConditionResource DSMissionServiceConditionResourceProxy
#endif
enum class EDSMagazineId : char {
    None = 0,
    AssaultRifle = 1,
    AssaultRifleLv2 = 2,
    AssaultRifleLv3 = 3,
    AssaultRifleLv4 = 4,
    AssaultRifleBloodBullet = 5,
    AssaultRifleLv2BloodBullet = 6,
    AssaultRifleLv3BloodBullet = 7,
    AssaultRifleLv4BloodBullet = 8,
    AssaultRifleGoldenBullet = 9,
    AssaultRifleLv2GoldenBullet = 10,
    AssaultRifleLv3GoldenBullet = 11,
    AssaultRifleLv4GoldenBullet = 12,
    Grenade = 13,
    BloodGrenade = 14,
    BloodGrenadeLv1Extend = 15,
    BloodGrenadeLv2 = 16,
    ElectricalGrenadeLv1 = 17,
    ElectricalGrenadeLv2 = 18,
    ElectricalGrenadePlace = 19,
    CoatingSpray = 20,
    SmokeGrenade = 21,
    SmokeGrenadeLv2 = 22,
    FreezeGrenade = 23,
    TranquilizerGun = 24,
    AmnioticFluidGrenade = 25,
    ExGrenade0 = 26,
    ExGrenade1 = 27,
    ExGrenade1Plus = 28,
    ExGrenade2 = 29,
    BolaGun = 30,
    BolaGunLv2 = 31,
    ShotGun = 32,
    ShotGunLv2 = 33,
    ShotGunLv3 = 34,
    ShotGunBloodBullet = 35,
    ShotGunBloodBulletLv2 = 36,
    ShotGunBloodBulletLv3 = 37,
    ShotGunGoldenBulletLv3 = 38,
    HandGun = 39,
    HandGunLv2 = 40,
    HandGunLv3 = 41,
    HandGunBloodBullet = 42,
    HandGunBloodBulletLv2 = 43,
    HandGunBloodBulletLv3 = 44,
    HandGunGoldenBullet = 45,
    HandGunGoldenBulletLv2 = 46,
    HandGunGoldenBulletLv3 = 47,
    BloodHandGun = 48,
    BloodHandGunLv2 = 49,
    AmelieHandGun = 50,
    C4 = 51,
    GazerBalloon = 52,
    SamBall = 53,
    SamBallLv2 = 54,
    GrenadeShell = 55,
    BloodGrenadeShell = 56,
    SlipGrenadeShell = 57,
    AmnioticFluidGrenadeShell = 58,
    TranquilizerGrenadeShell = 59,
    SubGrenadeShell = 60,
    SubBloodGrenadeShell = 61,
    SubSlipGrenadeShell = 62,
    SubAmnioticFluidGrenadeShell = 63,
    SubTranquilizerGrenadeShell = 64,
    AssaultRifleRubberBullet = 65,
    AssaultRifleRubberBulletLv2 = 66,
    AssaultRifleRubberBulletLv3 = 67,
    AssaultRifleRubberBulletLv4 = 68,
    AssaultRifleRubberBloodBullet = 69,
    AssaultRifleRubberBloodBulletLv2 = 70,
    AssaultRifleRubberBloodBulletLv3 = 71,
    AssaultRifleRubberBloodBulletLv4 = 72,
    AssaultRifleRubberGoldenBulletLv3 = 73,
    AssaultRifleRubberGoldenBulletLv4 = 74,
    ShotGunRubberBullet = 75,
    ShotGunRubberBulletLv2 = 76,
    ShotGunRubberBulletLv3 = 77,
    ShotGunRubberBloodBullet = 78,
    ShotGunRubberBloodBulletLv2 = 79,
    ShotGunRubberBloodBulletLv3 = 80,
    ShotGunRubberGoldenBulletLv3 = 81,
    PostBuilder = 82,
    ZiplineBuilder = 83,
    CapsuleShelterBuilder = 84,
    BridgeBuilder = 85,
    SafetyHouseBuilder = 86,
    WatchTowerBuilder = 87,
    EDSMagazineIdUnk_0 = 88,
    ChargerBuilder = 89,
    RainShelterBuilder = 90,
    CamouflageBuilder = 91,
    Ladder = 92,
    Rope = 93,
    StickyBullet = 94,
    FourConsecutiveMissile = 95,
    FourConsecutiveMissileBlood = 96,
    SpreadMissile = 97,
    SpreadMissileBlood = 98,
    SpreadMissileChild = 99,
    SpreadMissileChildBlood = 100,
    HologramDevice = 101,
    EnemyAssaultRifle = 102,
    MultiRod = 103,
    EnemySlipGrenadeShell = 104,
    EnemyAssaultRifleRubberBullet = 105,
    HiggsAssaultRifleBullet = 106,
    Ww1Rifle = 107,
    Ww1ShotGun = 108,
    Ww1Grenade = 109,
    Ww1MachineGun = 110,
    Ww2SubmachineGun = 111,
    Ww2Rifle = 112,
    Ww2Missile = 113,
    Ww2MissileType2 = 114,
    Ww2SmokeGrenade = 115,
    VietnamAssault = 116,
    VietnamAssaultWithGrenader = 117,
    VietnamAssaultWithGrenaderShell = 118,
    VietnamMachinegun = 119,
    VietnamGrenade = 120,
    CliffRifle = 121,
    AfghanRifle = 122,
    HiggsKnife = 123,
    DemensShotGunBullet = 125,
    DemensAssaultRifleBullet = 124,
    EnemyGrenade = 126,
    Ww2Grenade = 127,
    AfghanGrenade = 128,
    EDSMagazineIdUnk_1 = 129,
    Ww2AirPlaneMachinegun = 130,
    Ww2HeavyMachinegun = 131,
    RdGrenadeShell = 132,
    RdBloodGrenadeShell = 133,
    RdSlipGrenadeShell = 134,
    RdTranquilizerGrenadeShell = 135,
    DemensElectricalGrenade = 136,
    EDSMagazineIdUnk_2 = 137,
    ChiralBridgeBuilder = 138,
    JumpStandBuilder = 139,
    MaserGun = 140,
    CliffHandGun = 141,
    RubberFixedGun = 142,
    EnemyDemensFixedGun = 143,
    EnemyRubberFixedGun = 144,
};
#ifndef NPCScheduleResource
struct NPCScheduleResourceProxy;
#define NPCScheduleResource NPCScheduleResourceProxy
#endif
#ifndef UDSEventSetUintStat
struct UDSEventSetUintStatProxy;
#define UDSEventSetUintStat UDSEventSetUintStatProxy
#endif
#ifndef WorldPositionPropertyBase
struct WorldPositionPropertyBaseProxy;
#define WorldPositionPropertyBase WorldPositionPropertyBaseProxy
#endif
enum class EDSConstructionPointState : char {
    Inactive = 0,
    Unrealized = 1,
    Realized = 2,
    Removing = 3,
};
#define Array_WorldPosition Array<WorldPosition>
#ifndef DSTipsResourceList
struct DSTipsResourceListProxy;
#define DSTipsResourceList DSTipsResourceListProxy
#endif
#ifndef DSNetSyncPreSearchParam
struct DSNetSyncPreSearchParamProxy;
#define DSNetSyncPreSearchParam DSNetSyncPreSearchParamProxy
#endif
#define Array_cptr_DSMissionOpenCondition Array<const DSMissionOpenCondition*>
enum class ESceneForcedActiveState : char {
    NoForcedState = 0,
    ForcedActive = 1,
    ForcedInactive = 2,
};
#ifndef DSMissionSwitchSectionSetting
struct DSMissionSwitchSectionSettingProxy;
#define DSMissionSwitchSectionSetting DSMissionSwitchSectionSettingProxy
#endif
#ifndef IntegerFact
struct IntegerFactProxy;
#define IntegerFact IntegerFactProxy
#endif
#ifndef Vec3PropertyBase
struct Vec3PropertyBaseProxy;
#define Vec3PropertyBase Vec3PropertyBaseProxy
#endif
enum class EDSGameActorType : int {
    Player = 0,
    Mule = 1,
    MuleCP = 2,
    Baggage = 3,
    DeliveryPoint = 4,
    MulePost = 5,
    Zipline = 6,
    Catcher = 7,
    Gazer = 8,
    Cart = 9,
    Ladder = 10,
    Bridge = 11,
    FieldRope = 12,
    TracePoint = 13,
    Signboard = 14,
    VehicleMotorbike = 15,
    VehicleTruck = 16,
    VehicleSpeedCar = 32,
    ShellLauncher = 17,
    AutoDeliveryCarrier = 18,
    DeliveryBot = 33,
    BaggageSystemWarehouse = 19,
    Higgs = 20,
    Airplane = 21,
    FixedGun = 22,
    Cliff = 23,
    Amelie = 24,
    Collectible = 25,
    MissionDeliveredStorage = 26,
    BaggageShelf = 27,
    PrivateRoomStorage = 28,
    AreaChangeStorage = 29,
    PlayerBackup = 30,
    CatcherJellyfish = 31,
    GodsHand = 34,
    Gimmick = 35,
    AnnihilationStrandMarker = 36,
    SupportHunter = 37,
    Hunter = 38,
    FiringTarget = 39,
};
enum class EDSConstructionPointNetType : char {
    Stage = 0,
    Player = 1,
    Net = 2,
};
enum class EDSGameOverFadeColor : char {
    FadeColorBlack = 0,
    FadeColorWhite = 1,
};
enum class EDSMuleType : int {
    Normal = 0,
    Friendly = 1,
    Demens = 2,
    Warriors_Particle = 3,
    Warriors_Battle = 4,
};
enum class EMuleDownType : int {
    Faint = 0,
    Sleeping = 1,
    Restrained = 2,
    Dead = 3,
};
#ifndef RangedWeaponModeResource
struct RangedWeaponModeResourceProxy;
#define RangedWeaponModeResource RangedWeaponModeResourceProxy
#endif
#ifndef TrackingPath
struct TrackingPathProxy;
#define TrackingPath TrackingPathProxy
#endif
#ifndef GameActorLocator
struct GameActorLocatorProxy;
#define GameActorLocator GameActorLocatorProxy
#endif
enum class EDSAttackId : int16_t {
    None = 0,
    AssaultRifle = 1,
    AssaultRifleLv2 = 2,
    AssaultRifleLv3 = 3,
    AssaultRifleLv4 = 4,
    AssaultRifleBloodBullet = 5,
    AssaultRifleLv2BloodBullet = 6,
    AssaultRifleLv3BloodBullet = 7,
    AssaultRifleLv4BloodBullet = 8,
    AssaultRifleGoldenBullet = 9,
    AssaultRifleLv2GoldenBullet = 10,
    AssaultRifleLv3GoldenBullet = 11,
    AssaultRifleLv4GoldenBullet = 12,
    Grenade = 13,
    BloodGrenade = 14,
    BloodGrenadeLv1Extend = 15,
    BloodGrenadeLv2 = 16,
    ElectricalGrenadeLv1 = 17,
    ElectricalGrenadeLv2 = 18,
    ElectricalGrenadePlace = 19,
    CoatingSpray = 20,
    SmokeGrenade = 21,
    SmokeGrenadeLv2 = 22,
    FreezeGrenade = 23,
    TranquilizerGun = 24,
    AmnioticFluidGrenade = 25,
    ExGrenade0 = 26,
    ExGrenade1 = 27,
    ExGrenade1Plus = 28,
    ExGrenade2 = 29,
    BolaGun = 30,
    BolaGunLv2 = 31,
    ShotGun = 32,
    ShotGunLv2 = 33,
    ShotGunLv3 = 34,
    ShotGunBloodBullet = 35,
    ShotGunBloodBulletLv2 = 36,
    ShotGunBloodBulletLv3 = 37,
    ShotGunGoldenBulletLv3 = 38,
    HandGun = 39,
    HandGunLv2 = 40,
    HandGunLv3 = 41,
    HandGunBloodBullet = 42,
    HandGunBloodBulletLv2 = 43,
    HandGunBloodBulletLv3 = 44,
    HandGunGoldenBullet = 45,
    HandGunGoldenBulletLv2 = 46,
    HandGunGoldenBulletLv3 = 47,
    BloodHandGun = 48,
    BloodHandGunLv2 = 49,
    AmelieHandGun = 50,
    C4 = 51,
    GazerBalloon = 52,
    MultiRod = 53,
    SamBall = 54,
    SamBallLv2 = 55,
    GrenadeShell = 56,
    BloodGrenadeShell = 57,
    BloodGrenadeShellBloodSmoke = 58,
    SlipGrenadeShell = 59,
    AmnioticFluidGrenadeShell = 60,
    TranquilizerGrenadeShell = 61,
    AssaultRifleRubberBullet = 62,
    AssaultRifleRubberBulletLv2 = 63,
    AssaultRifleRubberBulletLv3 = 64,
    AssaultRifleRubberBulletLv4 = 65,
    AssaultRifleRubberBloodBullet = 66,
    AssaultRifleRubberBloodBulletLv2 = 67,
    AssaultRifleRubberBloodBulletLv3 = 68,
    AssaultRifleRubberBloodBulletLv4 = 69,
    AssaultRifleRubberGoldenBulletLv3 = 70,
    AssaultRifleRubberGoldenBulletLv4 = 71,
    ShotGunRubberBullet = 72,
    ShotGunRubberBulletLv2 = 73,
    ShotGunRubberBulletLv3 = 74,
    ShotGunRubberBloodBullet = 75,
    ShotGunRubberBloodBulletLv2 = 76,
    ShotGunRubberBloodBulletLv3 = 77,
    ShotGunRubberGoldenBulletLv3 = 78,
    StickyBullet = 79,
    FourConsecutiveMissile = 80,
    FourConsecutiveMissileBlood = 81,
    SpreadMissile = 82,
    SpreadMissileBlood = 83,
    SpreadMissileChild = 84,
    SpreadMissileChildBlood = 85,
    EnemyAssaultRifle = 86,
    EnemyAssaultRifleRubberBullet = 87,
    HiggsAssaultRifleBullet = 88,
    Ww1Rifle = 89,
    Ww1ShotGun = 90,
    Ww1Grenade = 91,
    Ww1MachineGun = 92,
    Ww2SubmachineGun = 93,
    Ww2Rifle = 94,
    Ww2Missile = 95,
    Ww2MissileType2 = 96,
    Ww2SmokeGrenade = 97,
    VietnamAssault = 98,
    VietnamAssaultWithGrenader = 99,
    VietnamAssaultWithGrenaderShell = 100,
    VietnamMachinegun = 101,
    VietnamGrenade = 102,
    CliffRifle = 103,
    AfghanRifle = 104,
    HiggsKnife = 105,
    DemensAssaultRifleBullet = 106,
    DemensShotGun = 107,
    EnemyGrenade = 108,
    Ww2Grenade = 109,
    AfghanGrenade = 110,
    PoisonGasShell = 111,
    EDSAttackIdUnk_1 = 112,
    MaserGun = 113,
    MaserGunForWater = 114,
    CliffHandGun = 115,
    GrenadeBody = 257,
    BolagunStrong = 258,
    BolagunWeak = 259,
    BaggageAttack = 260,
    BaggageAttackBig = 261,
    BaggageThrow = 262,
    Urination = 263,
    BloodUrination = 264,
    MuleNearAttack = 265,
    GazerArmBlowAttack = 266,
    PlayerTackle = 267,
    PlayerPull = 268,
    PlayerPullBaggage = 269,
    PlayerPullHeavy = 270,
    PlayerSlip = 271,
    PlayerLanded = 272,
    PlayerLandedDump = 273,
    PlayerLandFailed = 274,
    PlayerLandDead = 275,
    PlayerFallHitWall = 276,
    PlayerFallStomp = 277,
    PlayerTumble = 278,
    PlayerComboA_0 = 279,
    PlayerComboA_1 = 280,
    PlayerComboA_2 = 281,
    PlayerGloveComboA_0 = 282,
    PlayerGloveComboA_1 = 283,
    PlayerGloveComboA_2 = 284,
    PlayerSliding = 285,
    PlayerLowKick = 286,
    PlayerStomp = 287,
    PlayerJumpKneeKick = 292,
    PlayerJumpBodyPress = 293,
    PlayerJumpDropKick = 294,
    PlayerFireSkeletonKick = 288,
    PlayerFireSkeletonSliding = 289,
    PlayerFireSkeletonLowKick = 290,
    PlayerFireSkeletonStomp = 291,
    PlayerHiggsComboA_0 = 295,
    PlayerHiggsComboA_1 = 296,
    PlayerHiggsComboA_2 = 297,
    HiggsComboA_0 = 298,
    HiggsComboA_1 = 299,
    HiggsComboA_2 = 300,
    GazerDrag = 301,
    CatcherAnnihilationAttack = 302,
    CatcherFluidAttack = 303,
    CatcherSwingAttack = 304,
    CatcherSwingAttack2 = 305,
    CatcherSwingAttack3 = 306,
    CatcherSwingAttack4 = 307,
    CatcherSwingAttack5 = 308,
    CatcherQuadPunchSubordinate = 309,
    CatcherQuadPunchBoss = 310,
    CatcherQuadTailSubordinate = 311,
    CatcherQuadTailBoss = 312,
    CatcherQuadStampSubordinate = 313,
    CatcherQuadStampBoss = 314,
    CatcherQuadRushSubordinate = 315,
    CatcherQuadRushBoss = 316,
    CatcherQuadTarBeamSubordinate = 317,
    CatcherQuadTarBeamBoss = 318,
    CatcherQuadJogSubordinate = 319,
    CatcherQuadJogBoss = 320,
    CatcherJellyfishBlastNormal = 321,
    CatcherJellyfishBlastGold = 322,
    CatcherJellyfishBlastRed = 323,
    CatcherTitanTentacleHit = 324,
    CatcherTitanTentacleFailed = 325,
    CatcherTitanPush = 326,
    CatcherTitanMissile = 327,
    CatcherWhaleMissile = 328,
    CatcherWhaleBomb = 329,
    CatcherWhaleTarBeam = 330,
    CatcherWhaleTarBeam2 = 331,
    CatcherWhaleTarBeamEx = 332,
    CatcherWhaleTarBeamExExplosion = 333,
    CatcherWhaleBodyBlow = 334,
    CatcherWhaleBossCapture = 335,
    RainDamageToBaggage = 336,
    PhysicsImpactToBaggage = 337,
    FallImpactToBaggage = 338,
    SlipFromGround = 339,
    SlipStrongFromGround = 340,
    SlipGrenade = 341,
    SlipGrenadeStrong = 342,
    VehicleTackle = 343,
    VehicleTacklePlayer = 344,
    VehiclePreliminaryTackle = 345,
    VehicleWheelStamp = 346,
    VehicleExplosion = 347,
    PlayerRopeStrangle = 348,
    PlayerRopeStranglePreparation = 349,
    Push = 350,
    BlastWave = 351,
    PoisonGasShellExplosion = 352,
    PoisonGasShellBody = 353,
    PoisonGasShellPoison = 354,
    MortarShellExplosion = 355,
    MortarShellBody = 356,
    BomberBombExplosion = 357,
    BomberBombBody = 358,
    FourConsecutiveMissileBloodSmoke = 359,
    BloodGrenadeBlast = 360,
    BloodGrenadeBlastLv1Extend = 361,
    BloodGrenadeBlastLv2 = 362,
    BlastDangerBaggage = 363,
    PoisonGasBaggage = 364,
    MultiRodSwing = 365,
    MultiRodThrust = 366,
    MuleKick = 367,
    MulePush = 368,
    MuleTackle = 369,
    CliffPush = 370,
    CliffKick = 371,
    Ww1StrayBulletAssault = 372,
    Ww1StrayBulletMachinegun = 373,
    Ww2AirPlaneMachinegun = 374,
    HeavyPhysics = 375,
    TarWave = 376,
    ShakeFeet = 377,
    ToxicGasZone = 378,
    ElectricZone = 379,
    TranquilizerGasZone = 380,
    PlayerRopeCounter = 381,
    PlayerKill = 382,
    AmeliePush = 383,
    AimTarget = 384,
    MulePushGrass = 385,
    InvalidPhysicalAttackOnBT = 386,
    DragMuleFromVehicle = 387,
    RopeStumble = 388,
    ForceFallDown = 389,
    NpcDrown = 390,
    CliffCodeAttackSign = 391,
    CliffCodeAttack = 392,
    Ww2HeavyMachinegun = 393,
    InvalidPhysicalProjectileAttackOnBT = 394,
    CliffBarrier = 395,
    DemensElectricalGrenade = 396,
    EDSAttackIdUnk_2 = 397,
    CatapultShellParachute = 398,
    RubberFixedGun = 399,
    EnemyDemensFixedGun = 400,
    EnemyRubberFixedGun = 401,
    FixedGunExplosion = 402,
    DeliveryBotDropBaggage = 403,
    DeliveryBotKick = 404,
};
enum class EDSBulletLineType : char {
    Default = 0,
    Middle = 1,
    Large = 2,
    Blood = 3,
    Gold = 4,
    Rubber = 5,
    Shotgun = 6,
    ShotgunBlood = 7,
    ShotgunGold = 8,
    ShotgunRubber = 9,
    NpcDefault = 10,
    NpcRubber = 11,
    NpcShotgun = 12,
    NpcGold = 13,
    NpcAirPlaneMachinegun = 14,
    NpcHeavyMachinegun = 15,
    NormalToBlood = 16,
    CapsuleBlood = 17,
    CapsuleBloodMiddle = 18,
    CapsuleBloodLarge = 19,
    GrenadeShell = 20,
    FixedMachineGun = 21,
    FixedMachineGunRubber = 22,
    NpcFixedMachineGun = 23,
    NpcFixedMachineGunRubber = 24,
    BloodTail = 25,
    ShotgunBloodTail = 26,
    CapsuleBloodTail = 27,
    CapsuleBloodTailMiddle = 28,
    CapsuleBloodTailLarge = 29,
    GoldTail = 30,
    ShotgunGoldTail = 31,
    NpcGoldTail = 32,
    Invalid = 33,
};
#ifndef DSMissionSpeedConditionResource
struct DSMissionSpeedConditionResourceProxy;
#define DSMissionSpeedConditionResource DSMissionSpeedConditionResourceProxy
#endif
#define Array_cptr_EntityComponent Array<const EntityComponent*>
enum class ETriggerExposedActionReplication : int {
    ALL_CLIENTS_IF_NETOWNER = 0,
    ALL_CLIENTS = 1,
};
#ifndef ContextualEmotion
struct ContextualEmotionProxy;
#define ContextualEmotion ContextualEmotionProxy
#endif
enum class EDSCatcherNotifyFlags : char {
    IsBossType = 0,
    HasReceivedBloodGrenade = 1,
};
#ifndef TrophyResource
struct TrophyResourceProxy;
#define TrophyResource TrophyResourceProxy
#endif
enum class EDSRouteConnectionType : int {
    Normal = 0,
    Caution = 1,
};
enum class EDSDeliveryBotMenuInfoState : int {
    Invalid = 0,
    StoreDeliveryBot = 1,
    BuyDeliveryBot = 2,
    RetrieveDeliveryBot = 3,
    RemoveDeliveryBot = 4,
    RepairDeliveryBot = 5,
};
#ifndef SoundMixResource
struct SoundMixResourceProxy;
#define SoundMixResource SoundMixResourceProxy
#endif
#ifndef DSWelcomeHoloAnimationSyncSet
struct DSWelcomeHoloAnimationSyncSetProxy;
#define DSWelcomeHoloAnimationSyncSet DSWelcomeHoloAnimationSyncSetProxy
#endif
enum class EDSLikeOptionFlag : int {
    None = 0,
    InRaceMode = 1,
};
enum class EPositionAssessment : int {
    invalid = -1,
    observed_exact = 0,
    deduced_exact = 1,
    deduced_rough = 2,
    deduced_unknown = 3,
    confirmed_lost = 4,
};
#define Array_cptr_AIAttack Array<const AIAttack*>
enum class EModificationItemCategory : char {
    Weapon = 0,
    Outfit = 1,
};
#define Array_cptr_ArtPartsVariationResource Array<const ArtPartsVariationResource*>
#ifndef ProceduralLookResource
struct ProceduralLookResourceProxy;
#define ProceduralLookResource ProceduralLookResourceProxy
#endif
#define Array_cptr_BooleanFact Array<const BooleanFact*>
enum class EForceFieldCategoryMask : int {
    None = 0,
    Wind = 1,
    Particle = 2,
    Vegetation = 4,
    PBD = 8,
    Physics = 16,
    PlantInteraction = 32,
    PresetLocal = 30,
    PresetAll = 63,
};
#ifndef DSShellResource
struct DSShellResourceProxy;
#define DSShellResource DSShellResourceProxy
#endif
#ifndef AIHTNPlannerDaemon
struct AIHTNPlannerDaemonProxy;
#define AIHTNPlannerDaemon AIHTNPlannerDaemonProxy
#endif
enum class EBuddySpawnRequestMode : char {
    None = 0,
    SpawnMarker = 1,
    Spawnpoint = 2,
    LastKnownPosition = 3,
    NearPlayer = 4,
};
enum class EBlendEventPropagationMode : char {
    None = 0,
    Source0 = 1,
    Source1 = 2,
    Merge = 3,
};
enum class EDSLiftLockReason : int {
    CorpseBag = 1,
    NotEnoughCapacity = 2,
    MoreThanTwoVehicles = 4,
    MuleVehicle = 8,
};
enum class EDSPlaySentenceNodePriority : char {
    RobotVoiceHigh = 0,
    RobotVoiceMiddle = 1,
    RobotVoiceLow = 2,
};

#include "DecimaNative.h"
// Define All Class Here!
struct RetractingPartsComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AbortRetractingParts(Entity* param1) {
        typedef void (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RetractingPartsComponent_sExportedAbortRetractingParts")->address);
        return fn(param1);
    }
    static void RegisterRetractingPartEntity(Entity* param1, int32_t param2, Entity* param3) {
        typedef void (*FnType)(Entity* p1, int32_t p2, Entity* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RetractingPartsComponent_sExportedRegisterRetractingPartEntity")->address);
        return fn(param1, param2, param3);
    }
    static void StartRetractingParts(Entity* param1) {
        typedef void (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RetractingPartsComponent_sExportedStartRetractingParts")->address);
        return fn(param1);
    }
};

struct DSGameState {
    // members
    uint8_t m_pad[0x0];
    // functions
    static uint32_t CalcAutosaveRequestUnsaveReason() {
        typedef uint32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameState_sExportedCalcAutosaveRequestUnsaveReason")->address);
        return fn();
    }
    static uint32_t CalcUnsaveReason() {
        typedef uint32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameState_sExportedCalcUnsaveReason")->address);
        return fn();
    }
    static uint64_t GetGameState2() {
        typedef uint64_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameState_sExportedGetGameState2")->address);
        return fn();
    }
    static bool IsPauseMusic() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameState_sExportedIsPauseMusic")->address);
        return fn();
    }
    static bool IsStoppingGameEvent() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameState_sExportedIsStoppingGameEvent")->address);
        return fn();
    }
    static bool IsStoppingGameEventLoose() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameState_sExportedIsStoppingGameEventLoose")->address);
        return fn();
    }
    static void SetGameState(bool param1, uint32_t param2) {
        typedef void (*FnType)(bool p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameState_sExportedSetGameState")->address);
        return fn(param1, param2);
    }
};

struct AttachToEntityMover {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetLocalMatrix(const Mat44& param1) {
        typedef void (*FnType)(AttachToEntityMover* self, const Mat44& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachToEntityMover_ExportedSetLocalMatrix")->address);
        return fn(this, param1);
    }
};

struct AIFaction {
    // members
    uint8_t m_pad[0x90];
    // functions
    bool IsHostileTowards(const AIFaction* param1) {
        typedef bool (*FnType)(AIFaction* self, const AIFaction* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIFaction_ExportedIsHostileTowards")->address);
        return fn(this, param1);
    }
};

struct GameSettings {
    // members
    uint8_t m_pad[0x50];
    // functions
    EHealthRegenerationSettings GetHealthRegenerationSettings() {
        typedef EHealthRegenerationSettings (*FnType)(GameSettings* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameSettings_ExportedGetHealthRegenerationSettings")->address);
        return fn(this);
    }
    EPlayerHealthSettings GetPlayerHealthSettings() {
        typedef EPlayerHealthSettings (*FnType)(GameSettings* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameSettings_ExportedGetPlayerHealthSettings")->address);
        return fn(this);
    }
};

struct MaterialTypeResource {
    // members
    uint8_t m_pad[0x70];
    // functions
    bool IsKindOf(const MaterialTypeResource* param1) {
        typedef bool (*FnType)(MaterialTypeResource* self, const MaterialTypeResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MaterialTypeResource_ExportedIsKindOf")->address);
        return fn(this, param1);
    }
};

struct WorldPosition {
    // members
    uint8_t m_pad[0x18];
    // functions
    void CalculateStrafeAngleAndDistance(const WorldPosition& param1, float& param2, float& param3) {
        typedef void (*FnType)(WorldPosition* self, const WorldPosition& p1, float& p2, float& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedCalculateStrafeAngleAndDistance")->address);
        return fn(this, param1, param2, param3);
    }
};

struct Game {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void CreateSaveGame(ESaveGameType param1, bool param2, const AIMarker* param3) {
        typedef void (*FnType)(ESaveGameType p1, bool p2, const AIMarker* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sCreateSaveGame")->address);
        return fn(param1, param2, param3);
    }
    static void DSClearRetrySaveData() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSClearRetrySaveData")->address);
        return fn();
    }
    static void DSCreateSaveGame(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6) {
        typedef void (*FnType)(ESaveGameType p1, EDSSaveOption p2, EDSSaveOption p3, EDSSaveOption p4, bool p5, const AIMarker* p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSCreateSaveGame")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void DSCreateSaveGameForRetry(EDSSaveOption param1, EDSSaveOption param2, EDSSaveOption param3, bool param4, const AIMarker* param5) {
        typedef void (*FnType)(EDSSaveOption p1, EDSSaveOption p2, EDSSaveOption p3, bool p4, const AIMarker* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSCreateSaveGameForRetry")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void DSCreateSaveGameForStrideQpidArea() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSCreateSaveGameForStrideQpidArea")->address);
        return fn();
    }
    static void DSCreateSaveGamePlayWakeupDreamDemo(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4) {
        typedef void (*FnType)(ESaveGameType p1, EDSSaveOption p2, EDSSaveOption p3, EDSSaveOption p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSCreateSaveGamePlayWakeupDreamDemo")->address);
        return fn(param1, param2, param3, param4);
    }
    static void DSCreateSaveGameWithActivity(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6, const GGUUID& param7) {
        typedef void (*FnType)(ESaveGameType p1, EDSSaveOption p2, EDSSaveOption p3, EDSSaveOption p4, bool p5, const AIMarker* p6, const GGUUID& p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSCreateSaveGameWithActivity")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void DSCreateSaveGameWithActivity_PlusWakeupDreamDemo(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6, const GGUUID& param7) {
        typedef void (*FnType)(ESaveGameType p1, EDSSaveOption p2, EDSSaveOption p3, EDSSaveOption p4, bool p5, const AIMarker* p6, const GGUUID& p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSCreateSaveGameWithActivity_PlusWakeupDreamDemo")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static bool DSExistsRetrySaveData() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSExistsRetrySaveData")->address);
        return fn();
    }
    static EDSDifficulty DSGetDifficulty() {
        typedef EDSDifficulty (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSGetDifficulty")->address);
        return fn();
    }
    static EDSDifficulty DSGetDifficultyWithoutFixMode() {
        typedef EDSDifficulty (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSGetDifficultyWithoutFixMode")->address);
        return fn();
    }
    static ERegion DSGetTitleRegion() {
        typedef ERegion (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSGetTitleRegion")->address);
        return fn();
    }
    static void DamageEntitiesInRangeByFaction(AttackEventLink* param1, const WorldPosition& param2, const Vec3& param3, float param4, const MaterialTypeResource* param5, const DamageSettings* param6, float param7, const AIFaction* param8) {
        typedef void (*FnType)(AttackEventLink* p1, const WorldPosition& p2, const Vec3& p3, float p4, const MaterialTypeResource* p5, const DamageSettings* p6, float p7, const AIFaction* p8);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sExportedDamageEntitiesInRangeByFaction")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8);
    }
    static bool EntityMessage_DeconstructPlacedEntity(Entity* param1) {
        typedef bool (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sEntityMessageDeconstructPlacedEntity")->address);
        return fn(param1);
    }
    static void Game_BranchToMusicSection(const wchar_t* param1) {
        typedef void (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sBranchToMusicSection")->address);
        return fn(param1);
    }
    static bool Game_EnableDayNightCycle(bool param1) {
        typedef bool (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sEnableDayNightCycle")->address);
        return fn(param1);
    }
    static EGameMode Game_GetGameMode() {
        typedef EGameMode (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetGameMode")->address);
        return fn();
    }
    static void Game_GetGameSettings(const GameSettings** param1) {
        typedef void (*FnType)(const GameSettings** p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetGameSettings")->address);
        return fn(param1);
    }
    static float Game_GetGameTimeInSec() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetGameTimeInSec")->address);
        return fn();
    }
    static void Game_GetMusicCurrentPreset(int32_t* param1) {
        typedef void (*FnType)(int32_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetMusicCurrentPreset")->address);
        return fn(param1);
    }
    static void Game_GetMusicPresetIndex(const wchar_t* param1, int32_t* param2) {
        typedef void (*FnType)(const wchar_t* p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetMusicPresetIndex")->address);
        return fn(param1, param2);
    }
    static void Game_GetMusicTiming(float* param1, int32_t* param2, int32_t* param3) {
        typedef void (*FnType)(float* p1, int32_t* p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetMusicTiming")->address);
        return fn(param1, param2, param3);
    }
    static float Game_GetTimeOfDay() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetTimeOfDay")->address);
        return fn();
    }
    static bool Game_IsDayNightCycleEnabled() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sIsDayNightCycleEnabled")->address);
        return fn();
    }
    static void Game_SetMusicIntensity(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sSetMusicIntensity")->address);
        return fn(param1);
    }
    static void Game_SetMusicPreset(const wchar_t* param1, bool param2, EMusicTransitionMode param3, float param4, EMusicTransitionCurveType param5) {
        typedef void (*FnType)(const wchar_t* p1, bool p2, EMusicTransitionMode p3, float p4, EMusicTransitionCurveType p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sSetMusicPreset")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void Game_SetTimeOfDay(float param1, float param2) {
        typedef void (*FnType)(float p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sSetTimeOfDay")->address);
        return fn(param1, param2);
    }
    static void Game_StartAmbience(AmbienceCycle* param1) {
        typedef void (*FnType)(AmbienceCycle* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sStartAmbience")->address);
        return fn(param1);
    }
    static void Game_StopAmbience(AmbienceCycle* param1) {
        typedef void (*FnType)(AmbienceCycle* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sStopAmbience")->address);
        return fn(param1);
    }
    static void NotifyHackDisabled(Entity* param1, const Entity* param2) {
        typedef void (*FnType)(Entity* p1, const Entity* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sNotifyHackDisabled")->address);
        return fn(param1, param2);
    }
};

struct DSGameBaggageListItem {
    // members
    uint8_t m_pad[0x70];
    // functions
    static EDSGameBaggageListItem_BaggageCaseType GetBaggageCaseType(const DSGameBaggageListItem* param1) {
        typedef EDSGameBaggageListItem_BaggageCaseType (*FnType)(const DSGameBaggageListItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetBaggageCaseType")->address);
        return fn(param1);
    }
    static float GetBaggageWeight(const DSGameBaggageListItem* param1) {
        typedef float (*FnType)(const DSGameBaggageListItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetBaggageWeight")->address);
        return fn(param1);
    }
    static uint32_t GetCaseDurability(const DSGameBaggageListItem* param1) {
        typedef uint32_t (*FnType)(const DSGameBaggageListItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetCaseDurability")->address);
        return fn(param1);
    }
    static EDSGameBaggageListItem_ContentsDamageType GetContentsDamageType(const DSGameBaggageListItem* param1) {
        typedef EDSGameBaggageListItem_ContentsDamageType (*FnType)(const DSGameBaggageListItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetContentsDamageType")->address);
        return fn(param1);
    }
    static uint32_t GetContentsDurability(const DSGameBaggageListItem* param1) {
        typedef uint32_t (*FnType)(const DSGameBaggageListItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetContentsDurability")->address);
        return fn(param1);
    }
    static uint8_t GetRarity(const DSGameBaggageListItem* param1) {
        typedef uint8_t (*FnType)(const DSGameBaggageListItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetRarity")->address);
        return fn(param1);
    }
    static EDSGameBaggageListItem_Volume GetVolumeType(const DSGameBaggageListItem* param1) {
        typedef EDSGameBaggageListItem_Volume (*FnType)(const DSGameBaggageListItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetVolumeType")->address);
        return fn(param1);
    }
};

struct CurveResource {
    // members
    uint8_t m_pad[0x60];
    // functions
    float Evaluate(float param1) {
        typedef float (*FnType)(CurveResource* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CurveResource_ExportedEvaluate")->address);
        return fn(this, param1);
    }
    void GetCurveRange(float& param1, float& param2) {
        typedef void (*FnType)(CurveResource* self, float& p1, float& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CurveResource_ExportedGetCurveRange")->address);
        return fn(this, param1, param2);
    }
    void GetCurveTangents(float param1, float& param2, float& param3) {
        typedef void (*FnType)(CurveResource* self, float p1, float& p2, float& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CurveResource_ExportedGetCurveTangents")->address);
        return fn(this, param1, param2, param3);
    }
};

struct ShaderVariableComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AnimateShaderVariable(Entity* param1, const wchar_t* param2, const CurveResource* param3, bool param4, float param5, const DestructibilityPartBase* param6) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, const CurveResource* p3, bool p4, float p5, const DestructibilityPartBase* p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderVariableComponent_sExportedAnimateShaderVariable")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void SetShaderVariableFloat(Entity* param1, const wchar_t* param2, float param3, float param4, const DestructibilityPartBase* param5) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, float p3, float p4, const DestructibilityPartBase* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderVariableComponent_sExportedSetShaderVariableFloat")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void SetShaderVariableVec3(Entity* param1, const wchar_t* param2, const Vec3& param3, float param4, const DestructibilityPartBase* param5) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, const Vec3& p3, float p4, const DestructibilityPartBase* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderVariableComponent_sExportedSetShaderVariableVec3")->address);
        return fn(param1, param2, param3, param4, param5);
    }
};

struct AnimationData {
    // members
    uint8_t m_pad[0x40];
    // functions
    static void BlendAnimationDataSources(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4, EBlendMode param5, const JointSetID* param6, bool param7, EBlendEventPropagationMode param8) {
        typedef void (*FnType)(AnimationData* p1, const AnimationData* p2, const AnimationData* p3, float p4, EBlendMode p5, const JointSetID* p6, bool p7, EBlendEventPropagationMode p8);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedBlendAnimationDataSources")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8);
    }
    static void BlendBuffers(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4, EBlendMode param5, const JointSetID* param6) {
        typedef void (*FnType)(AnimationData* p1, const AnimationData* p2, const AnimationData* p3, float p4, EBlendMode p5, const JointSetID* p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedBlendBuffers")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void BlendSyncTracks(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4) {
        typedef void (*FnType)(AnimationData* p1, const AnimationData* p2, const AnimationData* p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedBlendSyncTracks")->address);
        return fn(param1, param2, param3, param4);
    }
    static void CloneSyncTrackAndStretch(AnimationData* param1, const AnimationData* param2, float param3) {
        typedef void (*FnType)(AnimationData* p1, const AnimationData* p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedCloneSyncTrackAndStretch")->address);
        return fn(param1, param2, param3);
    }
    static int32_t ComputeClosestAnimation(const PoseID& param1, const AnimationData& param2, const SkeletonAnimationResource** param3, int32_t param4, bool param5, float param6, float param7, const JointSetID* param8, const JointID& param9, EJointSpace param10, int32_t param11) {
        typedef int32_t (*FnType)(const PoseID& p1, const AnimationData& p2, const SkeletonAnimationResource** p3, int32_t p4, bool p5, float p6, float p7, const JointSetID* p8, const JointID& p9, EJointSpace p10, int32_t p11);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedComputeClosestAnimation")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11);
    }
    static void ExtractJointInfo(AnimationData* param1, const AnimationData* param2, int32_t param3, int32_t param4, EJointSpace param5, Vec3* param6, Quat* param7, Vec3* param8) {
        typedef void (*FnType)(AnimationData* p1, const AnimationData* p2, int32_t p3, int32_t p4, EJointSpace p5, Vec3* p6, Quat* p7, Vec3* p8);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedExtractJointInfo")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8);
    }
    static void ExtractSyncTracksFromAnim(AnimationData* param1, const SkeletonAnimationResource* param2) {
        typedef void (*FnType)(AnimationData* p1, const SkeletonAnimationResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedExtractSyncTracksFromAnim")->address);
        return fn(param1, param2);
    }
    static const AnimationData* GetPose(const PoseID* param1) {
        typedef const AnimationData* (*FnType)(const PoseID* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedGetPose")->address);
        return fn(param1);
    }
    static void GetTime(const AnimationData* param1, float* param2, float* param3, bool* param4) {
        typedef void (*FnType)(const AnimationData* p1, float* p2, float* p3, bool* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedGetTime")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool IsAnimationEventActive(const AnimationData& param1, const SkeletonAnimationEventPayload& param2) {
        typedef bool (*FnType)(const AnimationData& p1, const SkeletonAnimationEventPayload& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedIsAnimationEventActive")->address);
        return fn(param1, param2);
    }
    static void MakeAdditive(AnimationData* param1, const SkeletonAnimationResource* param2) {
        typedef void (*FnType)(AnimationData* p1, const SkeletonAnimationResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedMakeAdditive")->address);
        return fn(param1, param2);
    }
    static void ModifyJointTransform(AnimationData* param1, const AnimationData* param2, int32_t param3, int32_t param4, EJointSpace param5, const Vec3& param6, const Quat& param7, const Vec3& param8, EJointOperation param9, EJointOperation param10, EJointOperation param11) {
        typedef void (*FnType)(AnimationData* p1, const AnimationData* p2, int32_t p3, int32_t p4, EJointSpace p5, const Vec3& p6, const Quat& p7, const Vec3& p8, EJointOperation p9, EJointOperation p10, EJointOperation p11);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedModifyJointTransform")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11);
    }
    static void OutputClosestAnimation(const SkeletonAnimationResource* param1, const PoseID& param2, const JointID& param3, bool param4, EClosestAnimAlignmentType param5, float param6, const JointID& param7, int32_t param8, AnimationData* param9, float* param10, Quat* param11, Vec3* param12, Quat* param13, int32_t* param14) {
        typedef void (*FnType)(const SkeletonAnimationResource* p1, const PoseID& p2, const JointID& p3, bool p4, EClosestAnimAlignmentType p5, float p6, const JointID& p7, int32_t p8, AnimationData* p9, float* p10, Quat* p11, Vec3* p12, Quat* p13, int32_t* p14);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedOutputClosestAnimation")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14);
    }
    static void PassThrough(const AnimationData* param1, AnimationData* param2, uint8_t param3) {
        typedef void (*FnType)(const AnimationData* p1, AnimationData* p2, uint8_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedPassThrough")->address);
        return fn(param1, param2, param3);
    }
    static void ProbeActiveStates(uint64_t param1, uint64_t param2, const ActiveStatesQueue& param3) {
        typedef void (*FnType)(uint64_t p1, uint64_t p2, const ActiveStatesQueue& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedProbeActiveStates")->address);
        return fn(param1, param2, param3);
    }
    static void PushActiveState(ActiveStatesQueue& param1, uint32_t param2, float param3, bool param4, const RuntimeAnimationStateResource* param5) {
        typedef void (*FnType)(ActiveStatesQueue& p1, uint32_t p2, float p3, bool p4, const RuntimeAnimationStateResource* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedPushActiveState")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void RecycleActiveStatesQueue(ActiveStatesQueue& param1) {
        typedef void (*FnType)(ActiveStatesQueue& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedRecycleActiveStatesQueue")->address);
        return fn(param1);
    }
    static void RemoveActiveStates(ActiveStatesQueue& param1, uint32_t param2) {
        typedef void (*FnType)(ActiveStatesQueue& p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedRemoveActiveStates")->address);
        return fn(param1, param2);
    }
    static void ResetQueueOnActivation(ActiveStatesQueue& param1, uint32_t param2, const RuntimeAnimationStateResource* param3) {
        typedef void (*FnType)(ActiveStatesQueue& p1, uint32_t p2, const RuntimeAnimationStateResource* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedResetQueueOnActivation")->address);
        return fn(param1, param2, param3);
    }
    static int32_t ResolveJointID(const AnimationData& param1, int32_t param2, const JointID& param3) {
        typedef int32_t (*FnType)(const AnimationData& p1, int32_t p2, const JointID& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedResolveJointID")->address);
        return fn(param1, param2, param3);
    }
    static void SampleAnimation(AnimationData* param1, const SkeletonAnimationResource* param2, bool param3, float param4) {
        typedef void (*FnType)(AnimationData* p1, const SkeletonAnimationResource* p2, bool p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedSampleAnimation")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SetBranchNameHash(ActiveStatesQueue& param1, uint32_t param2) {
        typedef void (*FnType)(ActiveStatesQueue& p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedSetBranchNameHash")->address);
        return fn(param1, param2);
    }
    static void SetCurrentStateEventSpaceTimeInSMContext(ActiveStatesQueue& param1) {
        typedef void (*FnType)(ActiveStatesQueue& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedSetCurrentStateEventSpaceTimeInSMContext")->address);
        return fn(param1);
    }
    static void SetFrameAndTime(AnimationData* param1, const AnimationData* param2, float param3, float param4, bool param5) {
        typedef void (*FnType)(AnimationData* p1, const AnimationData* p2, float p3, float p4, bool p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedSetFrameAndTime")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void StatesQueueEvalLogic(ActiveStatesQueue& param1, AnimationData& param2) {
        typedef void (*FnType)(ActiveStatesQueue& p1, AnimationData& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedStatesQueueEvalLogic")->address);
        return fn(param1, param2);
    }
    static void StatesQueueUpdateTime(ActiveStatesQueue& param1, const AnimationData& param2) {
        typedef void (*FnType)(ActiveStatesQueue& p1, const AnimationData& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedStatesQueueUpdateTime")->address);
        return fn(param1, param2);
    }
    static void StorePose(const AnimationData& param1, const PoseID* param2, int32_t param3) {
        typedef void (*FnType)(const AnimationData& p1, const PoseID* p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedStorePose")->address);
        return fn(param1, param2, param3);
    }
    static void TimeMapAnimation(AnimationData* param1, const SkeletonAnimationResource* param2, float param3, float param4, float param5) {
        typedef void (*FnType)(AnimationData* p1, const SkeletonAnimationResource* p2, float p3, float p4, float p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedTimeMapAnimation")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static float UpdateEventMatching(AnimationData* param1) {
        typedef float (*FnType)(AnimationData* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedUpdateEventMatching")->address);
        return fn(param1);
    }
};

struct RagdollComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ApplyHardKeyFrame(const JointSetID* param1, const AnimationData& param2, int32_t param3, AnimationData* param4) {
        typedef void (*FnType)(const JointSetID* p1, const AnimationData& p2, int32_t p3, AnimationData* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedApplyHardKeyFrame")->address);
        return fn(param1, param2, param3, param4);
    }
    static void ApplySoftKeyFrame(const AnimationData& param1, const JointSetID* param2, int32_t param3, bool param4, float param5, AnimationData* param6) {
        typedef void (*FnType)(const AnimationData& p1, const JointSetID* p2, int32_t p3, bool p4, float p5, AnimationData* p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedApplySoftKeyFrame")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static bool IsRagdollAcquired() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedIsRagdollAcquired")->address);
        return fn();
    }
    static void RagdollDriven(const AnimationData& param1, const JointSetID* param2, int32_t param3, AnimationData* param4) {
        typedef void (*FnType)(const AnimationData& p1, const JointSetID* p2, int32_t p3, AnimationData* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedRagdollDriven")->address);
        return fn(param1, param2, param3, param4);
    }
    static void RagdollDrivenDefault(const AnimationData& param1, int32_t param2, AnimationData* param3) {
        typedef void (*FnType)(const AnimationData& p1, int32_t p2, AnimationData* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedRagdollDrivenDefault")->address);
        return fn(param1, param2, param3);
    }
    static void RagdollMotorDriven(const AnimationData& param1, const JointSetID* param2, int32_t param3, float param4, float param5, float param6, float param7, float param8, float param9, float param10, AnimationData* param11) {
        typedef void (*FnType)(const AnimationData& p1, const JointSetID* p2, int32_t p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, AnimationData* p11);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedRagdollMotorDriven")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11);
    }
    static bool RequestRagdollActivation() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedRequestRagdollActivation")->address);
        return fn();
    }
    static void SetBodiesProperties(int32_t param1, const JointSetID* param2, float param3, float param4, int32_t param5, float param6, float param7, float param8, float param9, float param10, const AnimationData& param11, AnimationData* param12) {
        typedef void (*FnType)(int32_t p1, const JointSetID* p2, float p3, float p4, int32_t p5, float p6, float p7, float p8, float p9, float p10, const AnimationData& p11, AnimationData* p12);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedSetBodiesProperties")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12);
    }
    static void SetContraintsProperties(const AnimationData& param1, const JointSetID* param2, int32_t param3, float param4, float param5, AnimationData* param6) {
        typedef void (*FnType)(const AnimationData& p1, const JointSetID* p2, int32_t p3, float p4, float p5, AnimationData* p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedSetContraintsProperties")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
};

struct HumanoidMover {
    // members
    uint8_t m_pad[0x0];
    // functions
    float GetFallingHeight() {
        typedef float (*FnType)(HumanoidMover* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HumanoidMover_ExportedGetFallingHeight")->address);
        return fn(this);
    }
};

struct DSMissionGoalsResource {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ClearEpisode() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedClearEpisode")->address);
        return fn();
    }
    static void ClearLongTermGoal() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedClearLongTermGoal")->address);
        return fn();
    }
    static void ClearShortTermGoal() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedClearShortTermGoal")->address);
        return fn();
    }
    static void CloseNotificationHUD(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedCloseNotificationHUD")->address);
        return fn(param1);
    }
    static void SetEpisode(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedSetEpisode")->address);
        return fn(param1);
    }
    static void SetLongTermGoal(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedSetLongTermGoal")->address);
        return fn(param1);
    }
    static void SetShortTermGoal(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedSetShortTermGoal")->address);
        return fn(param1);
    }
    static void ShowNotificationHUD(EDSMissionGoalsNotificationReason param1, const DSMissionGoalsNotificationSettingsResource* param2) {
        typedef void (*FnType)(EDSMissionGoalsNotificationReason p1, const DSMissionGoalsNotificationSettingsResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedShowNotificationHUD")->address);
        return fn(param1, param2);
    }
};

struct DSMissionProgressCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CheckDSMissionPerformState(const GGUUID& param1, const DSMissionResourceList* param2, EDSMissionOrderState param3, bool param4) {
        typedef bool (*FnType)(const GGUUID& p1, const DSMissionResourceList* p2, EDSMissionOrderState p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckDSMissionPerformState")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool CheckDSMissionProgress(const DSMissionResourceList* param1, bool param2) {
        typedef bool (*FnType)(const DSMissionResourceList* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckDSMissionProgress")->address);
        return fn(param1, param2);
    }
    static bool CheckDSMissionProgressByDestination(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckDSMissionProgressByDestination")->address);
        return fn(param1);
    }
    static bool CheckDSMissionProgressSimple(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckDSMissionProgressSimple")->address);
        return fn(param1);
    }
    static bool CheckDeliveringBaggages(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckDeliveringBaggages")->address);
        return fn(param1);
    }
    static bool CheckMultipleDSMissionProgress(const DSMissionResourceList* param1) {
        typedef bool (*FnType)(const DSMissionResourceList* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckMultipleDSMissionProgress")->address);
        return fn(param1);
    }
    static uint64_t GetDSMissionIdFromResource(const GGUUID& param1) {
        typedef uint64_t (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sGetDSMissionIdFromResource")->address);
        return fn(param1);
    }
    static bool IsMissionProgressWithTimer() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sIsMissionProgressWithTimer")->address);
        return fn();
    }
};

struct DSCameraInterface {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GetCameraPosition(WorldPosition* param1) {
        typedef void (*FnType)(WorldPosition* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedGetCameraPosition")->address);
        return fn(param1);
    }
    static void GetCameraRotation(float* param1, float* param2) {
        typedef void (*FnType)(float* p1, float* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedGetCameraRotation")->address);
        return fn(param1, param2);
    }
    static void IsForceSubjectiveCamera(bool* param1) {
        typedef void (*FnType)(bool* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedIsForceSubjectiveCamera")->address);
        return fn(param1);
    }
    static void RequestForceRadioCallCamera() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedRequestForceRadioCallCamera")->address);
        return fn();
    }
    static void RequestShowdownCamera(uint32_t param1, uint32_t param2, const Vec3& param3, float param4, float param5) {
        typedef void (*FnType)(uint32_t p1, uint32_t p2, const Vec3& p3, float p4, float p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedRequestShowdownCamera")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void RequestTargetConstrainCamera(const Vec3& param1, const Vec3& param2, float param3, float param4, float param5, float param6, float param7, bool param8, bool param9, bool param10, bool param11, bool param12, const WorldPosition& param13, uint32_t param14, uint32_t param15, float param16) {
        typedef void (*FnType)(const Vec3& p1, const Vec3& p2, float p3, float p4, float p5, float p6, float p7, bool p8, bool p9, bool p10, bool p11, bool p12, const WorldPosition& p13, uint32_t p14, uint32_t p15, float p16);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedRequestTargetConstrainCamera")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16);
    }
    static void ResetAroundCameraCollisionTriggerType() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedResetAroundCameraCollisionTriggerType")->address);
        return fn();
    }
    static void SetAroundCameraCollisionTriggerType(EDSCameraCollisionTriggerType param1) {
        typedef void (*FnType)(EDSCameraCollisionTriggerType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedSetAroundCameraCollisionTriggerType")->address);
        return fn(param1);
    }
    static void SetCameraRotationHeading(float param1, float param2) {
        typedef void (*FnType)(float p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedSetCameraRotationHeading")->address);
        return fn(param1, param2);
    }
    static void SetCameraRotationPitch(float param1, float param2) {
        typedef void (*FnType)(float p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedSetCameraRotationPitch")->address);
        return fn(param1, param2);
    }
    static void SetEnableForceSubjectiveCameraMode(bool param1, float param2) {
        typedef void (*FnType)(bool p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedSetEnableForceSubjectiveCameraMode")->address);
        return fn(param1, param2);
    }
    static void SetStock(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedSetStock")->address);
        return fn(param1);
    }
    static void StopShowdownCamera() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedStopShowdownCamera")->address);
        return fn();
    }
};

struct TrophySystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void CaptureTrophyScreenshot(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedCaptureTrophyScreenshot")->address);
        return fn(param1);
    }
    static void CompletedUpconvertTrophy() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedCompletedUpconvertTrophy")->address);
        return fn();
    }
    static void IncrementTrophyProgressIntegerStat(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedIncrementTrophyProgressIntegerStat")->address);
        return fn(param1);
    }
    static bool IsTrophyUnlocked(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedIsTrophyUnlocked")->address);
        return fn(param1);
    }
    static void SetTrophyProgressFloatStat(const GGUUID& param1, float param2, bool param3) {
        typedef void (*FnType)(const GGUUID& p1, float p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedSetTrophyProgressFloatStat")->address);
        return fn(param1, param2, param3);
    }
    static void SetTrophyProgressIntegerStat(const GGUUID& param1, int32_t param2, bool param3) {
        typedef void (*FnType)(const GGUUID& p1, int32_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedSetTrophyProgressIntegerStat")->address);
        return fn(param1, param2, param3);
    }
    static void UnlockTrophy(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedUnlockTrophy")->address);
        return fn(param1);
    }
};

struct AttachPhysicsRagdollToHelperMover {
    // members
    uint8_t m_pad[0x130];
    // functions
    static AttachPhysicsRagdollToHelperMover* Create(Entity* param1, const String& param2, const String& param3) {
        typedef AttachPhysicsRagdollToHelperMover* (*FnType)(Entity* p1, const String& p2, const String& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachPhysicsRagdollToHelperMover_sExportedCreate")->address);
        return fn(param1, param2, param3);
    }
};

struct GraphSound {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void DrawDebugProbeFloat(const wchar_t* param1, float param2) {
        typedef void (*FnType)(const wchar_t* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sDrawDebugProbeFloat")->address);
        return fn(param1, param2);
    }
    static void EndContext() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sEndContext")->address);
        return fn();
    }
    static const EnvelopeData* GetEnvelopeData(const EnvelopeResource* param1) {
        typedef const EnvelopeData* (*FnType)(const EnvelopeResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetEnvelopeData")->address);
        return fn(param1);
    }
    static void GetEnvelopeFromADSR(EnvelopeResource* param1, float param2, float param3, float param4, float param5) {
        typedef void (*FnType)(EnvelopeResource* p1, float p2, float p3, float p4, float p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetEnvelopeFromADSR")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static bool GetGlobalStateBool(const wchar_t* param1) {
        typedef bool (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetGlobalState<bool>")->address);
        return fn(param1);
    }
    static float GetGlobalStateFloat(const wchar_t* param1) {
        typedef float (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetGlobalState<float>")->address);
        return fn(param1);
    }
    static int32_t GetGlobalStateInt(const wchar_t* param1) {
        typedef int32_t (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetGlobalState<int>")->address);
        return fn(param1);
    }
    static int8_t GetGroupIndex(const SoundGroup* param1) {
        typedef int8_t (*FnType)(const SoundGroup* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetGroupIndex")->address);
        return fn(param1);
    }
    static float GetTimeFromContext() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetTimeFromContext")->address);
        return fn();
    }
    static float GetTimeStep() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetTimeStep")->address);
        return fn();
    }
    static float GetWaveDuration(const WaveResource* param1, float param2) {
        typedef float (*FnType)(const WaveResource* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetWaveDuration")->address);
        return fn(param1, param2);
    }
    static uint32_t GetWaveSampleRate(const WaveResource* param1) {
        typedef uint32_t (*FnType)(const WaveResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetWaveSampleRate")->address);
        return fn(param1);
    }
    static void GlobalStateAtomicAddFloat(const wchar_t* param1, float param2) {
        typedef void (*FnType)(const wchar_t* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGlobalStateAtomicAdd<float>")->address);
        return fn(param1, param2);
    }
    static void GlobalStateAtomicAddInt(const wchar_t* param1, int32_t param2) {
        typedef void (*FnType)(const wchar_t* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGlobalStateAtomicAdd<int>")->address);
        return fn(param1, param2);
    }
    static void KeepAliveContext() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sKeepAliveContext")->address);
        return fn();
    }
    static void RestartContext() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sRestartContext")->address);
        return fn();
    }
    static const WaveResource* SelectRandomWaveResource(const WaveResource** param1, int32_t param2, int32_t* param3) {
        typedef const WaveResource* (*FnType)(const WaveResource** p1, int32_t p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSelectRandomWaveResource")->address);
        return fn(param1, param2, param3);
    }
    static void SetDisableDistanceCulling(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetDisableDistanceCulling")->address);
        return fn(param1);
    }
    static void SetDisableSoundPause(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetDisableSoundPause")->address);
        return fn(param1);
    }
    static void SetEnableInstanceFilter(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetEnableInstanceFilter")->address);
        return fn(param1);
    }
    static void SetForceTo2D(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetForceTo2D")->address);
        return fn(param1);
    }
    static void SetGlobalStateBool(const wchar_t* param1, bool param2) {
        typedef void (*FnType)(const wchar_t* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetGlobalState<bool>")->address);
        return fn(param1, param2);
    }
    static void SetGlobalStateFloat(const wchar_t* param1, float param2) {
        typedef void (*FnType)(const wchar_t* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetGlobalState<float>")->address);
        return fn(param1, param2);
    }
    static void SetGlobalStateInt(const wchar_t* param1, int32_t param2) {
        typedef void (*FnType)(const wchar_t* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetGlobalState<int>")->address);
        return fn(param1, param2);
    }
    static void SetHDRProperties(bool param1, float param2, bool param3, float param4) {
        typedef void (*FnType)(bool p1, float p2, bool p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetHDRProperties")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SetMusicPlayerCutscenePauseExport(bool& param1) {
        typedef void (*FnType)(bool& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetMusicPlayerCutscenePause")->address);
        return fn(param1);
    }
    static void SetMusicPlayerCutsceneResumeExport() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetMusicPlayerCutsceneResume")->address);
        return fn();
    }
    static void SetOverrideGroup(const SoundGroup* param1) {
        typedef void (*FnType)(const SoundGroup* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetOverrideGroup")->address);
        return fn(param1);
    }
    static void SetOverrideMaxAzimuthDelta(bool param1, float param2) {
        typedef void (*FnType)(bool p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetOverrideMaxAzimuthDelta")->address);
        return fn(param1, param2);
    }
    static void SetPriorityModifier(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetPriorityModifier")->address);
        return fn(param1);
    }
    static void StartSineWave(EVoiceLimitMode param1, int32_t param2, const WaveNodeParameters* param3, int32_t* param4, WaveNodeState** param5) {
        typedef void (*FnType)(EVoiceLimitMode p1, int32_t p2, const WaveNodeParameters* p3, int32_t* p4, WaveNodeState** p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sStartSineWave")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void StartWave(const WaveResource* param1, bool param2, EVoiceLimitMode param3, int32_t param4, const WaveNodeParameters* param5, int32_t* param6, WaveNodeState** param7) {
        typedef void (*FnType)(const WaveResource* p1, bool p2, EVoiceLimitMode p3, int32_t p4, const WaveNodeParameters* p5, int32_t* p6, WaveNodeState** p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sStartWave")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void StartWhiteNoise(EVoiceLimitMode param1, int32_t param2, const WaveNodeParameters* param3, int32_t* param4, WaveNodeState** param5) {
        typedef void (*FnType)(EVoiceLimitMode p1, int32_t p2, const WaveNodeParameters* p3, int32_t* p4, WaveNodeState** p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sStartWhiteNoise")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void StopWave(WaveNodeState** param1) {
        typedef void (*FnType)(WaveNodeState** p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sStopWave")->address);
        return fn(param1);
    }
    static void UpdateWave(const WaveNodeParameters* param1, bool* param2, int32_t* param3, WaveNodeState** param4) {
        typedef void (*FnType)(const WaveNodeParameters* p1, bool* p2, int32_t* p3, WaveNodeState** p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sUpdateWave")->address);
        return fn(param1, param2, param3, param4);
    }
    static uint32_t WwiseExtPostEventExport(uint32_t param1, const WwiseWemResource* param2, uint8_t param3, uint64_t param4, bool param5, bool param6, uint8_t param7, bool param8, float param9, uint32_t param10, bool* param11) {
        typedef uint32_t (*FnType)(uint32_t p1, const WwiseWemResource* p2, uint8_t p3, uint64_t p4, bool p5, bool p6, uint8_t p7, bool p8, float p9, uint32_t p10, bool* p11);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sExtPostEventExport")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11);
    }
    static uint32_t WwisePostEventExport(uint32_t param1, uint64_t param2, bool param3, bool param4, uint8_t param5, bool param6, float param7, uint32_t param8, uint32_t param9, bool* param10, bool* param11, bool* param12) {
        typedef uint32_t (*FnType)(uint32_t p1, uint64_t p2, bool p3, bool p4, uint8_t p5, bool p6, float p7, uint32_t p8, uint32_t p9, bool* p10, bool* p11, bool* p12);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sPostEventExport")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12);
    }
    static uint32_t WwiseSimplePostEventExport(uint32_t param1, uint64_t param2, bool param3, bool param4, uint8_t param5, bool param6) {
        typedef uint32_t (*FnType)(uint32_t p1, uint64_t p2, bool p3, bool p4, uint8_t p5, bool p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSimplePostEventExport")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
};

struct DSRoad {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AddLocalTrackingLogFromData(const RTTIRefObject* param1) {
        typedef void (*FnType)(const RTTIRefObject* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sAddLocalTrackingLogFromData")->address);
        return fn(param1);
    }
    static void CheckFixedTrackingLogLevelUp() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sCheckFixedTrackingLogLevelUp")->address);
        return fn();
    }
    static void DSStopAndStartRecordingRouteTracking(const wchar_t* param1) {
        typedef void (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sStopAndStartRecordingRouteTracking")->address);
        return fn(param1);
    }
    static void DSStopAndStartRecordingRouteTrackingByPlaceId(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sStopAndStartRecordingRouteTrackingByPlaceId")->address);
        return fn(param1);
    }
    static void DSStopAndStartRecordingRouteTrackingByPlaceIdWithNotUpdateWorldData(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sStopAndStartRecordingRouteTrackingByPlaceIdWithNotUpdateWorldData")->address);
        return fn(param1);
    }
    static void DebugSetForceRoadVisible(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sDebugSetForceRoadVisible")->address);
        return fn(param1);
    }
    static bool IsBuildingNationalRoute(uint32_t param1) {
        typedef bool (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sIsBuildingNationalRoute")->address);
        return fn(param1);
    }
    static bool IsCompletedNationalRoute(uint32_t param1) {
        typedef bool (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sIsCompletedNationalRoute")->address);
        return fn(param1);
    }
    static bool IsIncludedLevel2InLastPath() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sIsIncludedLevel2InLastPath")->address);
        return fn();
    }
    static void RequestRebuildNationalRoute(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sRequestRebuildNationalRoute")->address);
        return fn(param1);
    }
    static void RequestTrackingLogMarge(uint32_t param1, uint32_t param2) {
        typedef void (*FnType)(uint32_t p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sRequestTrackingLogMarge")->address);
        return fn(param1, param2);
    }
    static void RequestTrackingLogMargeByName(const wchar_t* param1, const wchar_t* param2) {
        typedef void (*FnType)(const wchar_t* p1, const wchar_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sRequestTrackingLogMargeByName")->address);
        return fn(param1, param2);
    }
    static void SetCompletedNationalRoute(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sSetCompletedNationalRoute")->address);
        return fn(param1);
    }
    static void SetDSFinishRecordingMoveTracking(const wchar_t* param1) {
        typedef void (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sFinishRecordingMoveTracking")->address);
        return fn(param1);
    }
    static void SetDSRoadStatus(const wchar_t* param1, int32_t param2) {
        typedef void (*FnType)(const wchar_t* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sSetDSRoadStatus")->address);
        return fn(param1, param2);
    }
    static void SetDSStartRecordingMoveTracking(const wchar_t* param1) {
        typedef void (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sStartRecordingMoveTracking")->address);
        return fn(param1);
    }
    static void SetStaticRoadVisible(uint32_t param1, bool param2) {
        typedef void (*FnType)(uint32_t p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sSetStaticRoadVisible")->address);
        return fn(param1, param2);
    }
    static void SetUseCheckpointIndexList(const Array_int& param1) {
        typedef void (*FnType)(const Array_int& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sSetUseCheckpointIndexList")->address);
        return fn(param1);
    }
    static void TriggerNationalRoadUpdateCheck() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sTriggerNationalRoadUpdateCheck")->address);
        return fn();
    }
};

struct DSMissionFactsResource {
    // members
    uint8_t m_pad[0x30];
    // functions
    static Array_cptr_BooleanFact GetFacts(DSMissionFactsResource* param1) {
        typedef Array_cptr_BooleanFact (*FnType)(DSMissionFactsResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionFactsResource_GetFacts")->address);
        return fn(param1);
    }
};

struct DSMissionLogicBlock {
    // members
    uint8_t m_pad[0x48];
    // functions
    static int32_t GetAchievementConditionNum(const DSMissionLogicBlock* param1) {
        typedef int32_t (*FnType)(const DSMissionLogicBlock* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicBlock_GetAchievementConditionNum")->address);
        return fn(param1);
    }
    static const DSMissionFactsResource* GetConditionFactList(const DSMissionLogicBlock* param1) {
        typedef const DSMissionFactsResource* (*FnType)(const DSMissionLogicBlock* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicBlock_GetConditionFactList")->address);
        return fn(param1);
    }
    static const DSMissionResourceList* GetConditionResouceList(const DSMissionLogicBlock* param1) {
        typedef const DSMissionResourceList* (*FnType)(const DSMissionLogicBlock* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicBlock_GetConditionResouceList")->address);
        return fn(param1);
    }
    static Array_cptr_DSMissionLogicBlock GetLogicBlocks(DSMissionLogicBlock* param1) {
        typedef Array_cptr_DSMissionLogicBlock (*FnType)(DSMissionLogicBlock* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicBlock_GetLogicBlocks")->address);
        return fn(param1);
    }
    static EDSMissionLogicBlockType GetLogicType(const DSMissionLogicBlock* param1) {
        typedef EDSMissionLogicBlockType (*FnType)(const DSMissionLogicBlock* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicBlock_GetLogicType")->address);
        return fn(param1);
    }
};

struct DSStringHashResource {
    // members
    uint8_t m_pad[0x28];
    // functions
    static int32_t GetStringHash(const DSStringHashResource* param1) {
        typedef int32_t (*FnType)(const DSStringHashResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSStringHashResource_sExportedGetStringHash")->address);
        return fn(param1);
    }
};

struct DSMissionLogicCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ActivateRange(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sActivateRange")->address);
        return fn(param1);
    }
    static void AllDispResult() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sAllDispResult")->address);
        return fn();
    }
    static void ChangeArea(EDSArea param1, const DSLocator* param2, bool param3, EDSAreaChangeReason param4, int32_t param5, int32_t param6) {
        typedef void (*FnType)(EDSArea p1, const DSLocator* p2, bool p3, EDSAreaChangeReason p4, int32_t p5, int32_t p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sChangeArea")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void DEBUG_RequestDSMissionStartPremium(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sDEBUG_RequestMissionStartPremium")->address);
        return fn(param1);
    }
    static void DebugSetPlayerSpawnLocatorUUID(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sDebugSetPlayerSpawnLocatorUUID")->address);
        return fn(param1);
    }
    static void DispResult1() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sDispResult1")->address);
        return fn();
    }
    static void DispResult2() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sDispResult2")->address);
        return fn();
    }
    static void DispResultEvaluation() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sDispResultEvaluation")->address);
        return fn();
    }
    static void DispTotalResult(bool param1, bool param2, const TrophyResource* param3) {
        typedef void (*FnType)(bool p1, bool p2, const TrophyResource* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sDispTotalResult")->address);
        return fn(param1, param2, param3);
    }
    static void FastTravel(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sFastTravel")->address);
        return fn(param1);
    }
    static void ForceFinishAutoDeliveryLight(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sForceFinishAutoDeliveryLight")->address);
        return fn(param1);
    }
    static void GameOver(EDSMissionGameOverType param1, EDSMissionReasonGameOver param2, uint64_t param3, EDSGameOverFadeColor param4, bool param5) {
        typedef void (*FnType)(EDSMissionGameOverType p1, EDSMissionReasonGameOver p2, uint64_t p3, EDSGameOverFadeColor p4, bool p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sGameOver")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static EDSArea GetCurrentArea() {
        typedef EDSArea (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sGetCurrentArea")->address);
        return fn();
    }
    static int32_t GetElapsedDayLastFastTravel() {
        typedef int32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sGetElapsedDayLastFastTravel")->address);
        return fn();
    }
    static uint64_t GetGameOverMissionID() {
        typedef uint64_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sGetGameOverMissionID")->address);
        return fn();
    }
    static EDSMissionReasonGameOver GetGameOverReason() {
        typedef EDSMissionReasonGameOver (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sGetGameOverReason")->address);
        return fn();
    }
    static bool GetSamMissionProgressFact(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sGetSamMissionProgressFact")->address);
        return fn(param1);
    }
    static void GoOutFromPRForCliffMemories(EDSArea param1, const DSLocator* param2) {
        typedef void (*FnType)(EDSArea p1, const DSLocator* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sGoOutFromPR")->address);
        return fn(param1, param2);
    }
    static void RequestDSMissionCancelSilent(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sRequestMissionCancelSilent")->address);
        return fn(param1);
    }
    static void RequestDSMissionFail(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sRequestMissionFail")->address);
        return fn(param1);
    }
    static void RequestDSMissionStart(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sRequestMissionStart")->address);
        return fn(param1);
    }
    static void RequestDSMissionSuccess(const GGUUID& param1, bool param2, bool param3) {
        typedef void (*FnType)(const GGUUID& p1, bool p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sRequestMissionSuccess")->address);
        return fn(param1, param2, param3);
    }
    static void ReturnToPRForCliffMemories() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sReturnToPR")->address);
        return fn();
    }
    static void SendMissionMessage(const DSStringHashResource* param1, const DSStringHashResource* param2, int32_t param3, int32_t param4, int32_t param5, int32_t param6, bool param7) {
        typedef void (*FnType)(const DSStringHashResource* p1, const DSStringHashResource* p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, bool p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sSendMissionMessage")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void SendMissionMessageSimple(const DSStringHashResource* param1, const DSStringHashResource* param2, bool param3) {
        typedef void (*FnType)(const DSStringHashResource* p1, const DSStringHashResource* p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sSendMissionMessageSimple")->address);
        return fn(param1, param2, param3);
    }
    static void SendMissionSceneMessageImmediately(const DSStringHashResource* param1, int32_t param2, int32_t param3) {
        typedef void (*FnType)(const DSStringHashResource* p1, int32_t p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sSendMissionSceneMessageImmediately")->address);
        return fn(param1, param2, param3);
    }
};

struct DamageTypeResource {
    // members
    uint8_t m_pad[0x38];
    // functions
    bool IsKindOfDamage(const DamageTypeResource* param1) {
        typedef bool (*FnType)(DamageTypeResource* self, const DamageTypeResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DamageTypeResource_ExportedIsKindOfDamage")->address);
        return fn(this, param1);
    }
};

struct FocusTargetComponentResource {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void CheckEntityVulnerabilities(const Entity* param1, const DamageTypeResource* param2, bool& param3, bool& param4) {
        typedef void (*FnType)(const Entity* p1, const DamageTypeResource* p2, bool& p3, bool& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusTargetComponentResource_sExportedCheckEntityVulnerabilities")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct AIPerchMarker {
    // members
    uint8_t m_pad[0x80];
    // functions
    static void DecreaseReservedForScript(AIPerchMarker* param1) {
        typedef void (*FnType)(AIPerchMarker* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIPerchMarker_DecreaseReservedForScript")->address);
        return fn(param1);
    }
    static void IncreaseReservedForScript(AIPerchMarker* param1) {
        typedef void (*FnType)(AIPerchMarker* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIPerchMarker_IncreaseReservedForScript")->address);
        return fn(param1);
    }
};

struct AIHTNPlannerDaemonPerchPoints {
    // members
    uint8_t m_pad[0x0];
    // functions
    void AddPerchPoint(AIPerchMarker* param1) {
        typedef void (*FnType)(AIHTNPlannerDaemonPerchPoints* self, AIPerchMarker* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIHTNPlannerDaemonPerchPoints_ExportedAddPerchPoint")->address);
        return fn(this, param1);
    }
    void ClearPerchPoints() {
        typedef void (*FnType)(AIHTNPlannerDaemonPerchPoints* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIHTNPlannerDaemonPerchPoints_ExportedClearPerchPoints")->address);
        return fn(this);
    }
    void RemovePerchPoint(AIPerchMarker* param1) {
        typedef void (*FnType)(AIHTNPlannerDaemonPerchPoints* self, AIPerchMarker* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIHTNPlannerDaemonPerchPoints_ExportedRemovePerchPoint")->address);
        return fn(this, param1);
    }
};

struct StaggerStateComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void Activate(float param1) {
        typedef void (*FnType)(StaggerStateComponent* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaggerStateComponent_ExportedActivate")->address);
        return fn(this, param1);
    }
    bool CanActivate() {
        typedef bool (*FnType)(StaggerStateComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaggerStateComponent_ExportedCanActivate")->address);
        return fn(this);
    }
    bool IsActive() {
        typedef bool (*FnType)(StaggerStateComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaggerStateComponent_ExportedIsActive")->address);
        return fn(this);
    }
};

struct DSWeather {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CheckArea(EDSArea param1) {
        typedef bool (*FnType)(EDSArea p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sCheckArea")->address);
        return fn(param1);
    }
    static float GetRainyCondition(const WorldPosition& param1) {
        typedef float (*FnType)(const WorldPosition& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sGetRainyCondition")->address);
        return fn(param1);
    }
    static float GetRainyConditionFromMap(const WorldPosition& param1) {
        typedef float (*FnType)(const WorldPosition& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sGetRainyConditionFromMap")->address);
        return fn(param1);
    }
    static void ResetForecastTime(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sResetForecastTime")->address);
        return fn(param1);
    }
    static void SetForecastTypeOfRegion(const wchar_t* param1, int32_t param2) {
        typedef void (*FnType)(const wchar_t* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sSetForecastTypeOfRegion")->address);
        return fn(param1, param2);
    }
    static void SetForecastTypeOfRegionDirect(EDSWeatherRegionIndex param1, EDSWeatherForecastType param2) {
        typedef void (*FnType)(EDSWeatherRegionIndex p1, EDSWeatherForecastType p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sSetForecastTypeOfRegionDirect")->address);
        return fn(param1, param2);
    }
    static void SetForecastTypeOfRegionDirectEx(EDSArea param1, EDSWeatherRegionIndex param2, EDSWeatherForecastType param3) {
        typedef void (*FnType)(EDSArea p1, EDSWeatherRegionIndex p2, EDSWeatherForecastType p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sSetForecastTypeOfRegionDirectEx")->address);
        return fn(param1, param2, param3);
    }
    static void SetStartControlFlags(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sSetStartControlFlags")->address);
        return fn(param1);
    }
    static void SetWeatherOfRegion(const wchar_t* param1, bool param2, int32_t param3) {
        typedef void (*FnType)(const wchar_t* p1, bool p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sSetWeatherOfRegion")->address);
        return fn(param1, param2, param3);
    }
};

struct ZiplineDetectionComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void ZiplineAtPosition(const Entity* param1, const WorldPosition& param2, float param3) {
        typedef void (*FnType)(ZiplineDetectionComponent* self, const Entity* p1, const WorldPosition& p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ZiplineDetectionComponent_ExportedZiplineAtPosition")->address);
        return fn(this, param1, param2, param3);
    }
};

struct DSCatcher {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AnnihilationProgress(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sAnnihilationProgress")->address);
        return fn(param1);
    }
    static void CatcherWhaleControlCommand(uint32_t param1, uint32_t param2, RTTIRefObject* param3, RTTIRefObject* param4) {
        typedef void (*FnType)(uint32_t p1, uint32_t p2, RTTIRefObject* p3, RTTIRefObject* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sCatcherWhaleControlCommand")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool CheckCatcherNotifyFlags(uint32_t param1, EDSCatcherNotifyFlags param2) {
        typedef bool (*FnType)(uint32_t p1, EDSCatcherNotifyFlags p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sCheckCatcherNotifyFlags")->address);
        return fn(param1, param2);
    }
    static Entity* GetActiveCatcherEntity(int32_t param1) {
        typedef Entity* (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sGetActiveCatcherEntity")->address);
        return fn(param1);
    }
    static int32_t GetIntState(EDSCatcherStateType param1) {
        typedef int32_t (*FnType)(EDSCatcherStateType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sGetIntState")->address);
        return fn(param1);
    }
    static int32_t GetNotifyIdentifier(EDSCatcherNotifyType param1) {
        typedef int32_t (*FnType)(EDSCatcherNotifyType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sGetNotifyIdentifier")->address);
        return fn(param1);
    }
    static bool IsInAnnihilationArea(const WorldPosition& param1) {
        typedef bool (*FnType)(const WorldPosition& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sIsInAnnihilationArea")->address);
        return fn(param1);
    }
    static bool IsInAnnihilationAreaWithArea(const WorldPosition& param1, EDSArea param2) {
        typedef bool (*FnType)(const WorldPosition& p1, EDSArea p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sIsInAnnihilationAreaWithArea")->address);
        return fn(param1, param2);
    }
    static void NotifySimpleControlCommand(EDSCatcherControlCommand param1) {
        typedef void (*FnType)(EDSCatcherControlCommand p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sNotifySimpleControlCommand")->address);
        return fn(param1);
    }
    static void RemoveAnnihilationArea(const WorldPosition& param1, EDSArea param2) {
        typedef void (*FnType)(const WorldPosition& p1, EDSArea p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sRemoveAnnihilationArea")->address);
        return fn(param1, param2);
    }
    static void SetScriptVariableCommand(uint32_t param1, uint32_t param2) {
        typedef void (*FnType)(uint32_t p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sSetScriptVariableCommand")->address);
        return fn(param1, param2);
    }
};

struct LocalizedTextResource {
    // members
    uint8_t m_pad[0x38];
    // functions
    LocalizedText GetInstance(const Array_LocalizerVariable& param1) {
        typedef LocalizedText (*FnType)(LocalizedTextResource* self, const Array_LocalizerVariable& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("LocalizedTextResource_ExportedGetInstance")->address);
        return fn(this, param1);
    }
};

struct DSUINodeGraphBindings {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CheckBaggageMenuInfoResult(EDSBaggageMenuInfoResult param1) {
        typedef bool (*FnType)(EDSBaggageMenuInfoResult p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckBaggageMenuInfoResult")->address);
        return fn(param1);
    }
    static bool CheckDSUIFadeColor(bool param1, bool param2) {
        typedef bool (*FnType)(bool p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckDSUIFadeColor")->address);
        return fn(param1, param2);
    }
    static bool CheckDSUIFadeState(bool param1, bool param2, bool param3, bool param4) {
        typedef bool (*FnType)(bool p1, bool p2, bool p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckDSUIFadeState")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool CheckLevelUpMenuInfoResult(EDSConstructionMenuInfoResult param1) {
        typedef bool (*FnType)(EDSConstructionMenuInfoResult p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckLevelUpMenuInfoResult")->address);
        return fn(param1);
    }
    static bool CheckMissionListDialogMissionId(uint64_t param1) {
        typedef bool (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckMissionListDialogMissionId")->address);
        return fn(param1);
    }
    static bool CheckRepairMenuInfoResult(EDSConstructionMenuInfoResult param1) {
        typedef bool (*FnType)(EDSConstructionMenuInfoResult p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckRepairMenuInfoResult")->address);
        return fn(param1);
    }
    static bool CheckUIMenuSoundCategoy(EDSUIMenuSoundCategory param1) {
        typedef bool (*FnType)(EDSUIMenuSoundCategory p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckDSUIMenuSoundCategoy")->address);
        return fn(param1);
    }
    static void ClearAllInfoLog() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sClearAllInfoLog")->address);
        return fn();
    }
    static void ClearLowPriorityInfoLog() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sClearLowPriorityInfoLog")->address);
        return fn();
    }
    static const uint16_t* DSUIStringFormat(const uint16_t* param1, const uint16_t* param2, const uint16_t* param3, const uint16_t* param4, const uint16_t* param5) {
        typedef const uint16_t* (*FnType)(const uint16_t* p1, const uint16_t* p2, const uint16_t* p3, const uint16_t* p4, const uint16_t* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sDSUIStringFormat")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void DebugSetBaggageMenuInfoResult(EDSBaggageMenuInfoResult param1) {
        typedef void (*FnType)(EDSBaggageMenuInfoResult p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sDebugSetBaggageMenuInfoResult")->address);
        return fn(param1);
    }
    static void DebugSetLevelUpMenuInfoResult(EDSConstructionMenuInfoResult param1) {
        typedef void (*FnType)(EDSConstructionMenuInfoResult p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sDebugSetLevelUpMenuInfoResult")->address);
        return fn(param1);
    }
    static void DisableMarkerLocator(const wchar_t* param1) {
        typedef void (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sDisableMarkerLocator")->address);
        return fn(param1);
    }
    static void EnableMarkerLocator(const wchar_t* param1) {
        typedef void (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sEnableMarkerLocator")->address);
        return fn(param1);
    }
    static void FadeInScreen(EDSUIFadeColorType param1, EDSUIFadeTimeType param2, float param3) {
        typedef void (*FnType)(EDSUIFadeColorType p1, EDSUIFadeTimeType p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sFadeInScreen")->address);
        return fn(param1, param2, param3);
    }
    static void FadeOutScreen(EDSUIFadeColorType param1, EDSUIFadeTimeType param2, float param3) {
        typedef void (*FnType)(EDSUIFadeColorType p1, EDSUIFadeTimeType p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sFadeOutScreen")->address);
        return fn(param1, param2, param3);
    }
    static const Array_uint64& GetLastMissionIdsFromMissionTelop() {
        typedef const Array_uint64& (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sGetLastMissionIdsFromMissionTelop")->address);
        return fn();
    }
    static uint32_t GetLoadingScreenNumber() {
        typedef uint32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sGetLoadingScreenNumber")->address);
        return fn();
    }
    static const uint16_t* GetLocalizedTextFromResource(const LocalizedTextResource* param1) {
        typedef const uint16_t* (*FnType)(const LocalizedTextResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sGetLocalizedTextFromResource")->address);
        return fn(param1);
    }
    static void HideAllMissionTelopHUD(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sHideAllMissionTelopHUD")->address);
        return fn(param1);
    }
    static void HideAllTelop() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sHideAllTelop")->address);
        return fn();
    }
    static void HideDeviceMapTutorialRoute() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sHideDeviceMapTutorialRoute")->address);
        return fn();
    }
    static void HideOperationGuide(const DSUIOperationGuideHUDTableGroupResource* param1, bool param2) {
        typedef void (*FnType)(const DSUIOperationGuideHUDTableGroupResource* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sHideOperationGuide")->address);
        return fn(param1, param2);
    }
    static void HideTelop(EDSUICommonTelopType param1, bool param2) {
        typedef void (*FnType)(EDSUICommonTelopType p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sHideTelop")->address);
        return fn(param1, param2);
    }
    static void HideTimerHUD() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sHideTimerHUD")->address);
        return fn();
    }
    static void HideTutorialTelopWithHash(uint32_t param1, bool param2, bool param3) {
        typedef void (*FnType)(uint32_t p1, bool p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sHideTutorialTelopWithHash")->address);
        return fn(param1, param2, param3);
    }
    static void IgnoreOnceWeightHUDRequest() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIgnoreOnceWeightHUDRequest")->address);
        return fn();
    }
    static void IgnoreWeightHUDRequestTimer(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIgnoreWeightHUDRequestTimer")->address);
        return fn(param1);
    }
    static bool IsCompassShown() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsCompassShown")->address);
        return fn();
    }
    static bool IsDeliveryMenuPrivateRoomNewMarkForBackpack() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsDeliveryMenuPrivateRoomNewMarkForBackpack")->address);
        return fn();
    }
    static bool IsDeliveryMenuPrivateRoomNewMarkForUniform() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsDeliveryMenuPrivateRoomNewMarkForUniform")->address);
        return fn();
    }
    static bool IsFunctionPressed(EDSFunction param1) {
        typedef bool (*FnType)(EDSFunction p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsFunctionPressed")->address);
        return fn(param1);
    }
    static bool IsOdradekDemoOnceSetting() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsOdradekDemoOnceSetting")->address);
        return fn();
    }
    static bool IsPrivateRoomBBPodNew() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsPrivateRoomBBPodNew")->address);
        return fn();
    }
    static bool IsPrivateRoomBackpackNew() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsPrivateRoomBackpackNew")->address);
        return fn();
    }
    static bool IsPrivateRoomTerminalNew() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsPrivateRoomTerminalNew")->address);
        return fn();
    }
    static bool IsPrivateRoomUniformNew() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsPrivateRoomUniformNew")->address);
        return fn();
    }
    static bool IsProfileDandlingTypeMotionSensor() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsProfileDandlingTypeMotionSensor")->address);
        return fn();
    }
    static bool IsProfileGamePadActionToggleGrabEnable() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsProfileGamePadActionToggleGrabEnable")->address);
        return fn();
    }
    static bool IsProfileKBDActionToggleGrabEnable() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsProfileKBDActionToggleGrabEnable")->address);
        return fn();
    }
    static bool IsShowTutorialTelop(const DSTelopTipsResource* param1, uint32_t param2) {
        typedef bool (*FnType)(const DSTelopTipsResource* p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsShowTutorialTelop")->address);
        return fn(param1, param2);
    }
    static void RemoveInfoLogFromQueue(const DSUIInfoLogHUDTableItemResource* param1, bool param2) {
        typedef void (*FnType)(const DSUIInfoLogHUDTableItemResource* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRemoveInfoLogFromQueue")->address);
        return fn(param1, param2);
    }
    static void RequestAimHUDDemo(float param1, float param2, float param3, bool param4, bool param5, float param6, float param7) {
        typedef void (*FnType)(float p1, float p2, float p3, bool p4, bool p5, float p6, float p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRequestAimHUDDemo")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void RequestBackupAndHideLandmarkTelop(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRequestBackupAndHideLandmarkTelop")->address);
        return fn(param1);
    }
    static void RequestOpenCureGaugeMenu(BooleanFact* param1) {
        typedef void (*FnType)(BooleanFact* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRequestOpenCureGaugeMenu")->address);
        return fn(param1);
    }
    static void RequestShowStaffTelop(EDSUIStaffTelopPositionType param1, EHUDSnap param2, float param3, float param4, const uint16_t* param5, const uint16_t** param6, int32_t param7, float param8) {
        typedef void (*FnType)(EDSUIStaffTelopPositionType p1, EHUDSnap p2, float p3, float p4, const uint16_t* p5, const uint16_t** p6, int32_t p7, float p8);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRequestShowStaffTelop")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8);
    }
    static void RequestUnlockFunctionDialog(const DSUIMissionResultUnlockFunctionDialogResource* param1, int32_t param2) {
        typedef void (*FnType)(const DSUIMissionResultUnlockFunctionDialogResource* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRequestUnlockFunctionDialog")->address);
        return fn(param1, param2);
    }
    static void RestoreLandmarkTelop() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRestoreLandmarkTelop")->address);
        return fn();
    }
    static void SetBBPodCustomizeActionIconNewMark(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sSetBBPodCustomizeActionIconNewMark")->address);
        return fn(param1);
    }
    static void SetDeviceMapZoomScale(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sSetDeviceMapZoomScale")->address);
        return fn(param1);
    }
    static void SetLoadingScreenNumber(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sSetLoadingScreenNumber")->address);
        return fn(param1);
    }
    static void SetUnlockUIFlag(EDSUIUnlockUIFlagType param1) {
        typedef void (*FnType)(EDSUIUnlockUIFlagType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sSetUnlockUIFlag")->address);
        return fn(param1);
    }
    static void ShowCommonTelop(EHUDSnap param1, float param2, float param3, const uint16_t* param4, const uint16_t* param5, float param6) {
        typedef void (*FnType)(EHUDSnap p1, float p2, float p3, const uint16_t* p4, const uint16_t* p5, float p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowCommonTelop")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void ShowDeviceMapTutorialRoute(const DSUIDeviceMapMenuTutorialRouteResource* param1) {
        typedef void (*FnType)(const DSUIDeviceMapMenuTutorialRouteResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowDeviceMapTutorialRoute")->address);
        return fn(param1);
    }
    static void ShowHiggsFightGaugeHUD(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowHiggsFightGaugeHUD")->address);
        return fn(param1);
    }
    static void ShowInfoLog(const DSUIInfoLogHUDTableItemResource* param1, const wchar_t* param2, const uint16_t* param3, const uint16_t* param4, const uint16_t* param5) {
        typedef void (*FnType)(const DSUIInfoLogHUDTableItemResource* p1, const wchar_t* p2, const uint16_t* p3, const uint16_t* p4, const uint16_t* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowInfoLog")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void ShowLandmarkTelop(const uint16_t* param1, const uint16_t* param2, const uint16_t* param3, const uint16_t* param4, const uint16_t* param5, const uint16_t* param6, uint32_t param7, EDSUICommonTelopHUDSound param8, bool param9) {
        typedef void (*FnType)(const uint16_t* p1, const uint16_t* p2, const uint16_t* p3, const uint16_t* p4, const uint16_t* p5, const uint16_t* p6, uint32_t p7, EDSUICommonTelopHUDSound p8, bool p9);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowLandmarkTelop")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9);
    }
    static void ShowMusicTelop(EDSUIMusicTelopDisplayMode param1, const uint16_t* param2, const uint16_t** param3, int32_t param4, const uint16_t** param5, int32_t param6, float param7) {
        typedef void (*FnType)(EDSUIMusicTelopDisplayMode p1, const uint16_t* p2, const uint16_t** p3, int32_t p4, const uint16_t** p5, int32_t p6, float p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowMusicTelop")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void ShowMusicTelopFromId(EDSUIMusicTelopDisplayMode param1, uint32_t param2, float param3) {
        typedef void (*FnType)(EDSUIMusicTelopDisplayMode p1, uint32_t p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowMusicTelopFromId")->address);
        return fn(param1, param2, param3);
    }
    static void ShowOperationGuide(const DSUIOperationGuideHUDTableGroupResource* param1) {
        typedef void (*FnType)(const DSUIOperationGuideHUDTableGroupResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowOperationGuide")->address);
        return fn(param1);
    }
    static void ShowOperationGuideWithPosition(const DSUIOperationGuideHUDTableGroupResource* param1, float param2, float param3) {
        typedef void (*FnType)(const DSUIOperationGuideHUDTableGroupResource* p1, float p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowOperationGuideWithPosition")->address);
        return fn(param1, param2, param3);
    }
    static void ShowPrototypeSubtitle(const uint16_t* param1, float param2) {
        typedef void (*FnType)(const uint16_t* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowPrototypeSubtitle")->address);
        return fn(param1, param2);
    }
    static void ShowTutorialTelop(const DSTelopTipsResource* param1, uint32_t param2, float param3, BooleanFact* param4, BooleanFact* param5, EDSUITelopDisplayPriorityType param6, uint32_t param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13, bool param14, bool param15, uint32_t param16, bool param17, bool param18) {
        typedef void (*FnType)(const DSTelopTipsResource* p1, uint32_t p2, float p3, BooleanFact* p4, BooleanFact* p5, EDSUITelopDisplayPriorityType p6, uint32_t p7, bool p8, bool p9, bool p10, bool p11, bool p12, bool p13, bool p14, bool p15, uint32_t p16, bool p17, bool p18);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowTutorialTelop")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    }
    static void UnSetUnlockUIFlag(EDSUIUnlockUIFlagType param1) {
        typedef void (*FnType)(EDSUIUnlockUIFlagType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sUnSetUnlockUIFlag")->address);
        return fn(param1);
    }
    static bool WeaponSelectorHasPageChangeByCategory(EDSUIWeaponSelectorCategoryType param1) {
        typedef bool (*FnType)(EDSUIWeaponSelectorCategoryType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sWeaponSelectorHasPageChangeByCategory")->address);
        return fn(param1);
    }
};

struct DSQpidUnitCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ChangeQpidBandWidthLevel(const GGUUID& param1, EDSQpidBandWidthLevel param2) {
        typedef void (*FnType)(const GGUUID& p1, EDSQpidBandWidthLevel p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sChangeQpidBandWidthLevel")->address);
        return fn(param1, param2);
    }
    static void ChangeQpidBandWidthLevelById(int32_t param1, EDSQpidBandWidthLevel param2) {
        typedef void (*FnType)(int32_t p1, EDSQpidBandWidthLevel p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sChangeQpidBandWidthLevelById")->address);
        return fn(param1, param2);
    }
    static void ChangeQpidState(const GGUUID& param1, EDSQpidUnitState param2) {
        typedef void (*FnType)(const GGUUID& p1, EDSQpidUnitState p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sChangeQpidState")->address);
        return fn(param1, param2);
    }
    static void ChangeQpidStateById(int32_t param1, EDSQpidUnitState param2) {
        typedef void (*FnType)(int32_t p1, EDSQpidUnitState p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sChangeQpidStateById")->address);
        return fn(param1, param2);
    }
    static bool CheckCanChangeQpidStateById(int32_t param1) {
        typedef bool (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sCheckCanChnageQpidStateById")->address);
        return fn(param1);
    }
    static bool CheckQpidState(const GGUUID& param1, EDSQpidUnitState param2) {
        typedef bool (*FnType)(const GGUUID& p1, EDSQpidUnitState p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sCheckQpidState")->address);
        return fn(param1, param2);
    }
    static bool CheckQpidStateById(int32_t param1, EDSQpidUnitState param2) {
        typedef bool (*FnType)(int32_t p1, EDSQpidUnitState p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sCheckQpidStateById")->address);
        return fn(param1, param2);
    }
    static void DebugChangeAllQpidState(EDSQpidUnitState param1) {
        typedef void (*FnType)(EDSQpidUnitState p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sDebugChangeAllQpidState")->address);
        return fn(param1);
    }
    static void DebugQpidOpenAll() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sDebugQpidOpenAll")->address);
        return fn();
    }
    static bool EqualQpidState(const GGUUID& param1, EDSQpidUnitState param2) {
        typedef bool (*FnType)(const GGUUID& p1, EDSQpidUnitState p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sEqualQpidState")->address);
        return fn(param1, param2);
    }
    static bool EqualQpidStateById(int32_t param1, EDSQpidUnitState param2) {
        typedef bool (*FnType)(int32_t p1, EDSQpidUnitState p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sEqualQpidStateById")->address);
        return fn(param1, param2);
    }
    static void ForceUpdateQpid() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sForceUpdateQpid")->address);
        return fn();
    }
    static int32_t GetQpidIdPlayerInside(bool param1) {
        typedef int32_t (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sGetQpidIdPlayerInside")->address);
        return fn(param1);
    }
    static bool HasQpid(int32_t param1) {
        typedef bool (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sHasQpid")->address);
        return fn(param1);
    }
    static void SetQpidLevelUpEventToTerminalOperation(EDSQpidLevelUpEvent param1) {
        typedef void (*FnType)(EDSQpidLevelUpEvent p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sSetQpidLevelUpEventToTerminalOperation")->address);
        return fn(param1);
    }
};

struct MorphemeAnimationGraphInstance {
    // members
    uint8_t m_pad[0x0];
    // functions
    const AnimationData* GetInputPose() {
        typedef const AnimationData* (*FnType)(MorphemeAnimationGraphInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MorphemeAnimationGraphInstance_ExportedGetInputPose")->address);
        return fn(this);
    }
};

struct EffectComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetLocalMatrix(Mat44& param1) {
        typedef void (*FnType)(EffectComponent* self, Mat44& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedGetLocalMatrix")->address);
        return fn(this, param1);
    }
    bool IsEmitting() {
        typedef bool (*FnType)(EffectComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedIsEmitting")->address);
        return fn(this);
    }
    void SetLightColor(const FRGBAColor& param1) {
        typedef void (*FnType)(EffectComponent* self, const FRGBAColor& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedSetLightColor")->address);
        return fn(this, param1);
    }
    void SetLightIntensityMultiplier(float param1) {
        typedef void (*FnType)(EffectComponent* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedSetLightIntensityMultiplier")->address);
        return fn(this, param1);
    }
    void SetLocalMatrix(const Vec3& param1, const Quat& param2) {
        typedef void (*FnType)(EffectComponent* self, const Vec3& p1, const Quat& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedSetLocalMatrix")->address);
        return fn(this, param1, param2);
    }
    void StartEmitting() {
        typedef void (*FnType)(EffectComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedStartEmitting")->address);
        return fn(this);
    }
    void StopAndDie() {
        typedef void (*FnType)(EffectComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedStopAndDie")->address);
        return fn(this);
    }
    void StopEmitting() {
        typedef void (*FnType)(EffectComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedStopEmitting")->address);
        return fn(this);
    }
};

struct SoundComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void SetParameterBoolByName(Entity* param1, const wchar_t* param2, bool param3) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_sExportedSetParameterBoolByName")->address);
        return fn(param1, param2, param3);
    }
    static void SetParameterFloatByName(Entity* param1, const wchar_t* param2, float param3) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_sExportedSetParameterFloatByName")->address);
        return fn(param1, param2, param3);
    }
    static void SetParameterIntByName(Entity* param1, const wchar_t* param2, int32_t param3) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_sExportedSetParameterIntByName")->address);
        return fn(param1, param2, param3);
    }
    void SetSoundInstanceParameterBool(int32_t param1, const wchar_t* param2, bool param3) {
        typedef void (*FnType)(SoundComponent* self, int32_t p1, const wchar_t* p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_ExportedSetSoundInstanceParameterBool")->address);
        return fn(this, param1, param2, param3);
    }
    void SetSoundInstanceParameterFloat(int32_t param1, const wchar_t* param2, float param3) {
        typedef void (*FnType)(SoundComponent* self, int32_t p1, const wchar_t* p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_ExportedSetSoundInstanceParameterFloat")->address);
        return fn(this, param1, param2, param3);
    }
    void SetSoundInstanceParameterInt(int32_t param1, const wchar_t* param2, int32_t param3) {
        typedef void (*FnType)(SoundComponent* self, int32_t p1, const wchar_t* p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_ExportedSetSoundInstanceParameterInt")->address);
        return fn(this, param1, param2, param3);
    }
};

struct DSWeaponAimArc {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetRotationZFromDirection(const Vec3& param1) {
        typedef void (*FnType)(DSWeaponAimArc* self, const Vec3& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponAimArc_ExportedSetRotationZFromDirection")->address);
        return fn(this, param1);
    }
};

struct ContextualActionVictimComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsVictimOfContextualAction() {
        typedef bool (*FnType)(ContextualActionVictimComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ContextualActionVictimComponent_ExportedIsVictimOfContextualAction")->address);
        return fn(this);
    }
};

struct Destructibility {
    // members
    uint8_t m_pad[0x150];
    // functions
    void CountPartsWithTag(const TagProperty* param1, int32_t& param2, int32_t& param3) {
        typedef void (*FnType)(Destructibility* self, const TagProperty* p1, int32_t& p2, int32_t& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedCountPartsWithTag")->address);
        return fn(this, param1, param2, param3);
    }
    bool DoesDestructibilityPartHaveTag(const TagProperty* param1, int32_t param2) {
        typedef bool (*FnType)(Destructibility* self, const TagProperty* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedDoesDestructibilityPartHaveTag")->address);
        return fn(this, param1, param2);
    }
    void EnableConstraint(const DestructibilityConstraint* param1, bool param2) {
        typedef void (*FnType)(Destructibility* self, const DestructibilityConstraint* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedEnableConstraint")->address);
        return fn(this, param1, param2);
    }
    void EnablePart(DestructibilityPartBase* param1, bool param2, bool param3) {
        typedef void (*FnType)(Destructibility* self, DestructibilityPartBase* p1, bool p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedEnablePart")->address);
        return fn(this, param1, param2, param3);
    }
    DestructibilityPart* GetDefaultDamagePart() {
        typedef DestructibilityPart* (*FnType)(Destructibility* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedGetDefaultDamagePart")->address);
        return fn(this);
    }
    DestructibilityPart* GetPart(int32_t param1) {
        typedef DestructibilityPart* (*FnType)(Destructibility* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedGetPart")->address);
        return fn(this, param1);
    }
    float GetPartHealth(DestructibilityPart* param1, float& param2, float& param3) {
        typedef float (*FnType)(Destructibility* self, DestructibilityPart* p1, float& p2, float& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedGetPartHealth")->address);
        return fn(this, param1, param2, param3);
    }
    bool HasPart(DestructibilityPartBase* param1) {
        typedef bool (*FnType)(Destructibility* self, DestructibilityPartBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedHasPart")->address);
        return fn(this, param1);
    }
    bool IsPartEnabled(DestructibilityPartBase* param1) {
        typedef bool (*FnType)(Destructibility* self, DestructibilityPartBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedIsPartEnabled")->address);
        return fn(this, param1);
    }
    void KillPartsWithTag(AttackEventLink* param1, const TagProperty* param2, float param3, const WorldPosition& param4, const Vec3& param5, const DamageTypeResource* param6) {
        typedef void (*FnType)(Destructibility* self, AttackEventLink* p1, const TagProperty* p2, float p3, const WorldPosition& p4, const Vec3& p5, const DamageTypeResource* p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedKillPartsWithTag")->address);
        return fn(this, param1, param2, param3, param4, param5, param6);
    }
    void SendDestructibilityPartHitMessage(Entity* param1, int32_t param2) {
        typedef void (*FnType)(Destructibility* self, Entity* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedSendDestructibilityPartHitMessage")->address);
        return fn(this, param1, param2);
    }
    void SetDestructibilityPartShootable(const DestructibilityPartStateResource* param1, bool param2) {
        typedef void (*FnType)(Destructibility* self, const DestructibilityPartStateResource* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedSetDestructibilityPartShootable")->address);
        return fn(this, param1, param2);
    }
    void SetDestructibilityTagShootable(const TagProperty* param1, bool param2) {
        typedef void (*FnType)(Destructibility* self, const TagProperty* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedSetDestructibilityTagShootable")->address);
        return fn(this, param1, param2);
    }
};

struct DSParkingMenuInfo {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CheckParkingMenuInfoResult(EDSParkingMenuInfoResult param1) {
        typedef bool (*FnType)(EDSParkingMenuInfoResult p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedCheckParkingMenuInfoResult")->address);
        return fn(param1);
    }
    static void DespawnVehicleSelectedInRace() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedDespawnVehicleSelectedInRace")->address);
        return fn();
    }
    static void GetLeavingVehicleFromParking(Entity** param1) {
        typedef void (*FnType)(Entity** p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedGetLeavingVehicleFromParking")->address);
        return fn(param1);
    }
    static void GetStoringVehicleToParking(Entity** param1) {
        typedef void (*FnType)(Entity** p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedGetStoringVehicleToParking")->address);
        return fn(param1);
    }
    static void GetVehicleOnParkingLift(Entity** param1) {
        typedef void (*FnType)(Entity** p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedGetVehicleOnParkingLift")->address);
        return fn(param1);
    }
    static bool HasEnoughVacantParking(int32_t param1) {
        typedef bool (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedHasEnoughVacantParking")->address);
        return fn(param1);
    }
    static bool HasVacantParking() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedHasVacantParking")->address);
        return fn();
    }
    static void LockParkingLift(EDSLiftLockReason param1) {
        typedef void (*FnType)(EDSLiftLockReason p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedLockParkingLift")->address);
        return fn(param1);
    }
    static void RegisterUsedVehicleInRace() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedRegisterUsedVehicleInRace")->address);
        return fn();
    }
    static void SendUpdateRaceRecordLike() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedSendUpdateRaceRecordLike")->address);
        return fn();
    }
    static void SendVehicleUsedInRaceLike() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedSendVehicleUsedInRaceLike")->address);
        return fn();
    }
    static void SpawnVehicleSelectedInParking(const WorldTransform& param1) {
        typedef void (*FnType)(const WorldTransform& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedSpawnVehicleSelectedInParking")->address);
        return fn(param1);
    }
    static void SpawnVehicleSelectedInRace(const WorldTransform& param1) {
        typedef void (*FnType)(const WorldTransform& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedSpawnVehicleSelectedInRace")->address);
        return fn(param1);
    }
    static bool StoreVehicleToParking(Entity* param1) {
        typedef bool (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedStoreVehicleToParking")->address);
        return fn(param1);
    }
};

struct DSCameraModeBase {
    // members
    uint8_t m_pad[0x0];
    // functions
    float GetViewHeadingSpeed() {
        typedef float (*FnType)(DSCameraModeBase* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraModeBase_ExportedGetViewHeadingSpeed")->address);
        return fn(this);
    }
};

struct DSEnvironmentManagerNodes {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void BeginBlackSamGameOver() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEnvironmentManagerNodes_sExportedBeginBlackSamGameOver")->address);
        return fn();
    }
    static void CreateKnotSpaceEntity(const WorldTransform& param1) {
        typedef void (*FnType)(const WorldTransform& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEnvironmentManagerNodes_sExportedCreateKnotSpaceEntity")->address);
        return fn(param1);
    }
    static void DeleteKnotSpaceEntity() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEnvironmentManagerNodes_sExportedDeleteKnotSpaceEntity")->address);
        return fn();
    }
    static void EndBlackSamGameOver() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEnvironmentManagerNodes_sExportedEndBlackSamGameOver")->address);
        return fn();
    }
};

struct TalkComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetOutputLevel(float& param1, float& param2) {
        typedef void (*FnType)(TalkComponent* self, float& p1, float& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TalkComponent_ExportedGetOutputLevel")->address);
        return fn(this, param1, param2);
    }
    bool IsTalking() {
        typedef bool (*FnType)(TalkComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TalkComponent_ExportedIsTalking")->address);
        return fn(this);
    }
    bool PlaySentence(const SentenceResource* param1, EAlertLevel param2, const TalkPriority* param3) {
        typedef bool (*FnType)(TalkComponent* self, const SentenceResource* p1, EAlertLevel p2, const TalkPriority* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TalkComponent_ExportedPlaySentence")->address);
        return fn(this, param1, param2, param3);
    }
    bool PlaySentenceGroup(const SentenceGroupResource* param1, EAlertLevel param2, const TalkPriority* param3) {
        typedef bool (*FnType)(TalkComponent* self, const SentenceGroupResource* p1, EAlertLevel p2, const TalkPriority* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TalkComponent_ExportedPlaySentenceGroup")->address);
        return fn(this, param1, param2, param3);
    }
    bool Say(const AISignalType* param1, EAlertLevel param2) {
        typedef bool (*FnType)(TalkComponent* self, const AISignalType* p1, EAlertLevel p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TalkComponent_ExportedSay")->address);
        return fn(this, param1, param2);
    }
};

struct DSPlayerEntity {
    // members
    uint8_t m_pad[0x55a0];
    // functions
    void ApplyInventorySetting() {
        typedef void (*FnType)(DSPlayerEntity* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_ExportedApplyInventorySetting")->address);
        return fn(this);
    }
    static void CartGameActorIdToEntity(int32_t param1, Entity** param2) {
        typedef void (*FnType)(int32_t p1, Entity** p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedCartGameActorIdToEntity")->address);
        return fn(param1, param2);
    }
    static void CartIsInTarSwamp(Entity* param1, bool* param2) {
        typedef void (*FnType)(Entity* p1, bool* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedCartIsInTarSwamp")->address);
        return fn(param1, param2);
    }
    static void ClearBBStressInfoFromHoloCutscene() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sClearBBStressInfoFromHoloCutscene")->address);
        return fn();
    }
    static int32_t GetBBAffectionLevel() {
        typedef int32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetBBAffectionLevel")->address);
        return fn();
    }
    static DSPlayerEntity* GetLocalDSPlayerEntity() {
        typedef DSPlayerEntity* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetLocalDSPlayerEntity")->address);
        return fn();
    }
    static bool GetPlayerParameterBool(uint32_t param1) {
        typedef bool (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetParameterBool")->address);
        return fn(param1);
    }
    static float GetPlayerParameterFloat(uint32_t param1) {
        typedef float (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetParameterFloat")->address);
        return fn(param1);
    }
    static int32_t GetPlayerParameterInt(uint32_t param1) {
        typedef int32_t (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetParameterInt")->address);
        return fn(param1);
    }
    static Vec3 GetPlayerParameterVec3(uint32_t param1) {
        typedef Vec3 (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetParameterVec3")->address);
        return fn(param1);
    }
    static WorldPosition GetPlayerParameterWorldPosition(uint32_t param1) {
        typedef WorldPosition (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetParameterWorldPosition")->address);
        return fn(param1);
    }
    static WorldTransform GetPlayerParameterWorldTransform(uint32_t param1) {
        typedef WorldTransform (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetParameterWorldTransform")->address);
        return fn(param1);
    }
    bool IsPlayerBloodSplashFrame() {
        typedef bool (*FnType)(DSPlayerEntity* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_ExportedIsPlayerBloodSplashFrame")->address);
        return fn(this);
    }
    static bool IsPlayerFrost() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedIsFrost")->address);
        return fn();
    }
    static bool IsPlayerHandFrost() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedIsHandFrost")->address);
        return fn();
    }
    static bool IsPlayerLeftLegFrost() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedIsLeftLegFrost")->address);
        return fn();
    }
    bool IsPlayerMudSplashFrame() {
        typedef bool (*FnType)(DSPlayerEntity* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_ExportedIsPlayerMudSplashFrame")->address);
        return fn(this);
    }
    static bool IsPlayerRightLegFrost() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedIsRightLegFrost")->address);
        return fn();
    }
    bool IsPlayerTarrySplashFrame() {
        typedef bool (*FnType)(DSPlayerEntity* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_ExportedIsPlayerTarrySplashFrame")->address);
        return fn(this);
    }
    bool IsPlayerWaterSprashFrame() {
        typedef bool (*FnType)(DSPlayerEntity* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_ExportedIsPlayerWaterSprashFrame")->address);
        return fn(this);
    }
    static void PlayAkukanVoice(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedPlayAkukanVoice")->address);
        return fn(param1);
    }
    static void RecoveryAffectionPointForM00590() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedRecoveryAffectionPointForM00590")->address);
        return fn();
    }
    static void ResetPlayerFrost() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedResetFrost")->address);
        return fn();
    }
    static void ResetPlayerNail() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedResetNail")->address);
        return fn();
    }
    static void SetBBPodBlackRequested() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedSetBBPodBlackRequested")->address);
        return fn();
    }
    static void SetVoicedAlmostThere() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedSetVoicedAlmostThere")->address);
        return fn();
    }
};

struct AnimationNodeProceduralLook {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void UpdateProceduralLookInstance(const ProceduralLookResource* param1, int32_t param2, const Vec3& param3, float param4, const AnimationData* param5, AnimationData* param6, ProceduralLookState** param7) {
        typedef void (*FnType)(const ProceduralLookResource* p1, int32_t p2, const Vec3& p3, float p4, const AnimationData* p5, AnimationData* p6, ProceduralLookState** p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationNodeProceduralLook::sExportedUpdate")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
};

struct DSResidentsBasicNode {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AddFriendshipFromMissionID(uint64_t param1, int64_t param2) {
        typedef void (*FnType)(uint64_t p1, int64_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sDEBUG_AddFriendshipFromMissionID")->address);
        return fn(param1, param2);
    }
    static void CalcFriendshipLevel(const DSHouseholdInfoResource* param1, int32_t param2, int32_t* param3, bool param4) {
        typedef void (*FnType)(const DSHouseholdInfoResource* p1, int32_t p2, int32_t* p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sCalcFriendshipLevel")->address);
        return fn(param1, param2, param3, param4);
    }
    static void GetCalculationFriendshipLevelTH(const DSHouseholdInfoResource* param1, int32_t param2, int32_t* param3) {
        typedef void (*FnType)(const DSHouseholdInfoResource* p1, int32_t p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetCalculationFriendshipLevelTH")->address);
        return fn(param1, param2, param3);
    }
    static void GetFirendshipOfHousehold(const DSHouseholdInfoResource* param1, int32_t* param2, int32_t* param3) {
        typedef void (*FnType)(const DSHouseholdInfoResource* p1, int32_t* p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetFirendshipOfHousehold")->address);
        return fn(param1, param2, param3);
    }
    static void GetFirendshipOfHouseholdByMissionID(uint64_t param1, int32_t* param2, int32_t* param3) {
        typedef void (*FnType)(uint64_t p1, int32_t* p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetFirendshipOfHouseholdByMissionID")->address);
        return fn(param1, param2, param3);
    }
    static void GetFirendshipOfHouseholdByNameHash(uint32_t param1, int32_t* param2, int32_t* param3) {
        typedef void (*FnType)(uint32_t p1, int32_t* p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetFirendshipOfHouseholdByNameHash")->address);
        return fn(param1, param2, param3);
    }
    static void GetFloatFriendshipLevel(const DSHouseholdInfoResource* param1, int32_t param2, int32_t param3, float* param4) {
        typedef void (*FnType)(const DSHouseholdInfoResource* p1, int32_t p2, int32_t p3, float* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetFloatFriendshipLevel")->address);
        return fn(param1, param2, param3, param4);
    }
    static void GetFriendshipMaxLevel(const DSHouseholdInfoResource* param1, int32_t* param2, bool* param3) {
        typedef void (*FnType)(const DSHouseholdInfoResource* p1, int32_t* p2, bool* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetFriendshipMaxLevel")->address);
        return fn(param1, param2, param3);
    }
    static void GetHouseholdByNameHash(uint32_t param1, const DSHouseholdInfoResource** param2) {
        typedef void (*FnType)(uint32_t p1, const DSHouseholdInfoResource** p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetHouseholdByNameHash")->address);
        return fn(param1, param2);
    }
    static bool GetHouseholdByTerminalId(int32_t param1, const DSHouseholdInfoResource** param2) {
        typedef bool (*FnType)(int32_t p1, const DSHouseholdInfoResource** p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetHouseholdByTerminalId")->address);
        return fn(param1, param2);
    }
    static void GetHouseholdThatRequestedMissionByMissionID(uint64_t param1, const DSHouseholdInfoResource** param2) {
        typedef void (*FnType)(uint64_t p1, const DSHouseholdInfoResource** p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetHouseholdThatRequestedMissionByMissionID")->address);
        return fn(param1, param2);
    }
    static void IsAlreadyDeliveryAtHousehold(const GGUUID& param1, bool* param2) {
        typedef void (*FnType)(const GGUUID& p1, bool* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sIsAlreadyDeliveryAtHousehold")->address);
        return fn(param1, param2);
    }
    static void IsMemberOfBridgesOfHousehold(const DSHouseholdInfoResource* param1, bool* param2) {
        typedef void (*FnType)(const DSHouseholdInfoResource* p1, bool* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sIsMemberOfBridgesOfHousehold")->address);
        return fn(param1, param2);
    }
    static void SetAlreadyDeliveryAtHousehold(const GGUUID& param1, bool param2) {
        typedef void (*FnType)(const GGUUID& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sSetAlreadyDeliveryAtHousehold")->address);
        return fn(param1, param2);
    }
    static void SetForceFirendshipOfHouseholdByGGUUID(const GGUUID& param1, int32_t param2) {
        typedef void (*FnType)(const GGUUID& p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sSetForceFirendshipOfHouseholdByGGUUID")->address);
        return fn(param1, param2);
    }
    static void SetFriendshipFromDShouseholdInfoResource(const GGUUID& param1, int64_t param2, bool param3) {
        typedef void (*FnType)(const GGUUID& p1, int64_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sDEBUG_SetFriendshipFromDShouseholdInfoResource")->address);
        return fn(param1, param2, param3);
    }
};

struct AnnotationInstance {
    // members
    uint8_t m_pad[0x90];
    // functions
    void Enable(bool param1) {
        typedef void (*FnType)(AnnotationInstance* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnnotationInstance_ExportedEnable")->address);
        return fn(this, param1);
    }
};

struct AnnotationPrimitiveInstance {
    // members
    uint8_t m_pad[0x80];
    // functions
    bool HasTag(const String& param1) {
        typedef bool (*FnType)(AnnotationPrimitiveInstance* self, const String& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnnotationPrimitiveInstance_ExportedHasTag")->address);
        return fn(this, param1);
    }
};

struct PlayerParkourComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetCurrentAnnotation(const AnnotationInstance** param1, const AnnotationResource** param2, const AnnotationPrimitiveInstance** param3) {
        typedef void (*FnType)(PlayerParkourComponent* self, const AnnotationInstance** p1, const AnnotationResource** p2, const AnnotationPrimitiveInstance** p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerParkourComponent_ExportedGetCurrentParkourAnnotation")->address);
        return fn(this, param1, param2, param3);
    }
};

struct AIUsableComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ImmediateAttach(Entity* param1, Entity* param2) {
        typedef void (*FnType)(Entity* p1, Entity* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIUsableComponent_sExportedImmediateAttach")->address);
        return fn(param1, param2);
    }
};

struct DSDebugEntryCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void DebugEntryConnectRoad(const GGUUID& param1, const GGUUID& param2) {
        typedef void (*FnType)(const GGUUID& p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_ConnectRoadBetweenTerminals")->address);
        return fn(param1, param2);
    }
    static void DebugEntryGetInt(const wchar_t* param1, int32_t& param2) {
        typedef void (*FnType)(const wchar_t* p1, int32_t& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_GetInt")->address);
        return fn(param1, param2);
    }
    static void DebugEntryGetUUID(const wchar_t* param1, GGUUID& param2) {
        typedef void (*FnType)(const wchar_t* p1, GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_GetUUID")->address);
        return fn(param1, param2);
    }
    static void DebugEntryIsNilUUID(const wchar_t* param1, bool* param2) {
        typedef void (*FnType)(const wchar_t* p1, bool* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_IsNilUUID")->address);
        return fn(param1, param2);
    }
    static void DebugEntrySetInt(const wchar_t* param1, int32_t param2) {
        typedef void (*FnType)(const wchar_t* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_SetInt")->address);
        return fn(param1, param2);
    }
    static void DebugEntrySetUUID(const wchar_t* param1, const GGUUID& param2) {
        typedef void (*FnType)(const wchar_t* p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_SetUUID")->address);
        return fn(param1, param2);
    }
    static bool DebugIsNilUUID(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugIsNilUUID")->address);
        return fn(param1);
    }
    static GGUUID DebugNilUUID() {
        typedef GGUUID (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugNilUUID")->address);
        return fn();
    }
};

struct FocusComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool CanActivateFocusMode() {
        typedef bool (*FnType)(FocusComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedCanActivateFocusMode")->address);
        return fn(this);
    }
    void ClearTaggedObjects(bool param1, bool param2, bool param3) {
        typedef void (*FnType)(FocusComponent* self, bool p1, bool p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedClearTaggedObjects")->address);
        return fn(this, param1, param2, param3);
    }
    Array_WorldPosition GetAllFocusAlertSignalPositionsInRange() {
        typedef Array_WorldPosition (*FnType)(FocusComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedGetAllFocusAlertSignalPositionsInRange")->address);
        return fn(this);
    }
    void GetFocusAlertState(int32_t& param1, float& param2) {
        typedef void (*FnType)(FocusComponent* self, int32_t& p1, float& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedGetFocusAlertState")->address);
        return fn(this, param1, param2);
    }
    Entity* GetFocusedEntity() {
        typedef Entity* (*FnType)(FocusComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedGetFocusedEntity")->address);
        return fn(this);
    }
    bool IsFocusModeActive() {
        typedef bool (*FnType)(FocusComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedIsFocusModeActive")->address);
        return fn(this);
    }
    bool IsScanningFocusAlert() {
        typedef bool (*FnType)(FocusComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedIsScanningFocusAlert")->address);
        return fn(this);
    }
    void SetEntityPatrolPathTagged(Entity* param1, bool param2) {
        typedef void (*FnType)(FocusComponent* self, Entity* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedSetEntityPatrolPathTagged")->address);
        return fn(this, param1, param2);
    }
    void SetEntityTagged(Entity* param1, bool param2) {
        typedef void (*FnType)(FocusComponent* self, Entity* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedSetEntityTagged")->address);
        return fn(this, param1, param2);
    }
    void SetFocusModeActive(bool param1) {
        typedef void (*FnType)(FocusComponent* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedSetFocusModeActive")->address);
        return fn(this, param1);
    }
    void SetFocusModeEnabled(bool param1) {
        typedef void (*FnType)(FocusComponent* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedSetFocusModeEnabled")->address);
        return fn(this, param1);
    }
    void SetTrackingPathTagged(TrackingPath* param1, bool param2) {
        typedef void (*FnType)(FocusComponent* self, TrackingPath* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedSetTrackingPathTagged")->address);
        return fn(this, param1, param2);
    }
};

struct DSMissionEvaluationDataRecord {
    // members
    uint8_t m_pad[0x18];
    // functions
    static float GetGreaterThan(const DSMissionEvaluationDataRecord* param1) {
        typedef float (*FnType)(const DSMissionEvaluationDataRecord* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataRecord_GetGreaterThan")->address);
        return fn(param1);
    }
    static float GetLike(const DSMissionEvaluationDataRecord* param1) {
        typedef float (*FnType)(const DSMissionEvaluationDataRecord* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataRecord_GetLikeRate")->address);
        return fn(param1);
    }
    static EDSRewardRank GetRewardRank(const DSMissionEvaluationDataRecord* param1) {
        typedef EDSRewardRank (*FnType)(const DSMissionEvaluationDataRecord* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataRecord_GetRewardRank")->address);
        return fn(param1);
    }
};

struct DSMissionEvaluationDataTable {
    // members
    uint8_t m_pad[0x30];
    // functions
    static void CalculationEvaluation(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, float* param3, bool param4, float param5, EDSRewardRank param6) {
        typedef void (*FnType)(const DSMissionEvaluationDataTable* p1, EDSRewardRank* p2, float* p3, bool p4, float p5, EDSRewardRank p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_CalculationEvaluation")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void GetDataRecord(const DSMissionEvaluationDataTable* param1, const DSMissionEvaluationDataRecord** param2, int32_t param3) {
        typedef void (*FnType)(const DSMissionEvaluationDataTable* p1, const DSMissionEvaluationDataRecord** p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_GetDataRecord")->address);
        return fn(param1, param2, param3);
    }
    static void GetDataRecordsLength(const DSMissionEvaluationDataTable* param1, int32_t* param2) {
        typedef void (*FnType)(const DSMissionEvaluationDataTable* p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_GetDataRecordsLength")->address);
        return fn(param1, param2);
    }
    static float GetMaxThreshold(const DSMissionEvaluationDataTable* param1) {
        typedef float (*FnType)(const DSMissionEvaluationDataTable* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_GetMaxThreshold")->address);
        return fn(param1);
    }
    static float GetMinThreshold(const DSMissionEvaluationDataTable* param1) {
        typedef float (*FnType)(const DSMissionEvaluationDataTable* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_GetMinThreshold")->address);
        return fn(param1);
    }
    static void MaxEvaluation(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, uint32_t* param3) {
        typedef void (*FnType)(const DSMissionEvaluationDataTable* p1, EDSRewardRank* p2, uint32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_MaxEvaluation")->address);
        return fn(param1, param2, param3);
    }
    static void MinEvaluation(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, uint32_t* param3) {
        typedef void (*FnType)(const DSMissionEvaluationDataTable* p1, EDSRewardRank* p2, uint32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_MinEvaluation")->address);
        return fn(param1, param2, param3);
    }
};

struct DSMissionEvaluationDataTablesByDeliveryPoint {
    // members
    uint8_t m_pad[0x30];
    // functions
    static const DSMissionEvaluationDataTable* FindEvaluationDataTable(const DSMissionEvaluationDataTablesByDeliveryPoint* param1, const DSMissionInfo* param2) {
        typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionEvaluationDataTablesByDeliveryPoint* p1, const DSMissionInfo* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByDeliveryPoint_FindEvaluationDataTableFromDSMissionInfo")->address);
        return fn(param1, param2);
    }
};

struct DSMissionEvaluationDataTablesByThreshold {
    // members
    uint8_t m_pad[0x30];
    // functions
    static const DSMissionEvaluationDataTable* FindEvaluationDataTable(const DSMissionEvaluationDataTablesByThreshold* param1, float param2) {
        typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionEvaluationDataTablesByThreshold* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByThreshold_FindEvaluationDataTable")->address);
        return fn(param1, param2);
    }
    static float GetMaxThreshold(const DSMissionEvaluationDataTablesByThreshold* param1) {
        typedef float (*FnType)(const DSMissionEvaluationDataTablesByThreshold* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByThreshold_GetMaxThreshold")->address);
        return fn(param1);
    }
    static float GetMinThreshold(const DSMissionEvaluationDataTablesByThreshold* param1) {
        typedef float (*FnType)(const DSMissionEvaluationDataTablesByThreshold* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByThreshold_GetMinThreshold")->address);
        return fn(param1);
    }
    static const DSMissionEvaluationDataTable* MaxEvaluationDataTable(const DSMissionEvaluationDataTablesByThreshold* param1) {
        typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionEvaluationDataTablesByThreshold* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByThreshold_MaxEvaluationDataTable")->address);
        return fn(param1);
    }
    static const DSMissionEvaluationDataTable* MinEvaluationDataTable(const DSMissionEvaluationDataTablesByThreshold* param1) {
        typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionEvaluationDataTablesByThreshold* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByThreshold_MinEvaluationDataTable")->address);
        return fn(param1);
    }
};

struct DSMissionSpecialReportResource {
    // members
    uint8_t m_pad[0x98];
    // functions
    static float GetCustomParam01(const DSMissionSpecialReportResource* param1) {
        typedef float (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetCustomParam01")->address);
        return fn(param1);
    }
    static float GetCustomParam02(const DSMissionSpecialReportResource* param1) {
        typedef float (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetCustomParam02")->address);
        return fn(param1);
    }
    static const DSMissionEvaluationDataTablesByDeliveryPoint* GetDataTablesByDeliveryPoint(const DSMissionSpecialReportResource* param1) {
        typedef const DSMissionEvaluationDataTablesByDeliveryPoint* (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetDataTablesByDeliveryPoint")->address);
        return fn(param1);
    }
    static const DSMissionEvaluationDataTablesByThreshold* GetDataTablesByThreshold(const DSMissionSpecialReportResource* param1) {
        typedef const DSMissionEvaluationDataTablesByThreshold* (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetDataTablesByThreshold")->address);
        return fn(param1);
    }
    static EDSEvaluationType GetEvaluationType(const DSMissionSpecialReportResource* param1) {
        typedef EDSEvaluationType (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetEvaluationType")->address);
        return fn(param1);
    }
    static const DSMissionEvaluationDataTable* GetMissionEvaluationDataTable(const DSMissionSpecialReportResource* param1) {
        typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetMissionEvaluationDataTable")->address);
        return fn(param1);
    }
    static int32_t GetRewardLike(const DSMissionSpecialReportResource* param1) {
        typedef int32_t (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetRewardLike")->address);
        return fn(param1);
    }
    static const DSStringHashResource* GetSpecialReportHash(const DSMissionSpecialReportResource* param1) {
        typedef const DSStringHashResource* (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetSpecialReportHash")->address);
        return fn(param1);
    }
    static bool IsMissionCondition(const DSMissionSpecialReportResource* param1) {
        typedef bool (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_IsMissionCondition")->address);
        return fn(param1);
    }
    static bool IsMissionMenuView(const DSMissionSpecialReportResource* param1) {
        typedef bool (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_IsMissionMenuView")->address);
        return fn(param1);
    }
    static bool IsMissionMenuViewForcedDisable(const DSMissionSpecialReportResource* param1) {
        typedef bool (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_IsMissionMenuViewForcedDisable")->address);
        return fn(param1);
    }
    static bool IsRewardLike(const DSMissionSpecialReportResource* param1) {
        typedef bool (*FnType)(const DSMissionSpecialReportResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_IsRewardLike")->address);
        return fn(param1);
    }
};

struct DSMissionConditionResourceBase {
    // members
    uint8_t m_pad[0x30];
    // functions
    static float GetBaggageDamageMinRate(const DSMissionConditionResourceBase* param1) {
        typedef float (*FnType)(const DSMissionConditionResourceBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetBaggageDamageMinRate")->address);
        return fn(param1);
    }
    static int32_t GetClearMinTime(const DSMissionConditionResourceBase* param1) {
        typedef int32_t (*FnType)(const DSMissionConditionResourceBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetClearMinTime")->address);
        return fn(param1);
    }
    static EDSMissionConditionType GetConditionType(const DSMissionConditionResourceBase* param1) {
        typedef EDSMissionConditionType (*FnType)(const DSMissionConditionResourceBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetConditionType")->address);
        return fn(param1);
    }
    static float GetCumulativeMinDamage(const DSMissionConditionResourceBase* param1) {
        typedef float (*FnType)(const DSMissionConditionResourceBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetCumulativeMinDamage")->address);
        return fn(param1);
    }
    static const DSMissionEvaluationDataTable* GetEvaluationDataTable(const DSMissionConditionResourceBase* param1) {
        typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionConditionResourceBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetEvaluationDataTable")->address);
        return fn(param1);
    }
    static int32_t GetMaxDonationCount(const DSMissionConditionResourceBase* param1) {
        typedef int32_t (*FnType)(const DSMissionConditionResourceBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetMaxDonationCount")->address);
        return fn(param1);
    }
    static uint8_t GetMinCountBaggage(const DSMissionConditionResourceBase* param1) {
        typedef uint8_t (*FnType)(const DSMissionConditionResourceBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetMinCountBaggage")->address);
        return fn(param1);
    }
    static float GetMinDistance(const DSMissionConditionResourceBase* param1) {
        typedef float (*FnType)(const DSMissionConditionResourceBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetMinDistance")->address);
        return fn(param1);
    }
    static float GetMinWeightBaggage(const DSMissionConditionResourceBase* param1) {
        typedef float (*FnType)(const DSMissionConditionResourceBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetMinWeightBaggage")->address);
        return fn(param1);
    }
    static const DSMissionSpecialReportResource* GetSpecialReport(const DSMissionConditionResourceBase* param1) {
        typedef const DSMissionSpecialReportResource* (*FnType)(const DSMissionConditionResourceBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetSpecialReport")->address);
        return fn(param1);
    }
};

struct DSMissionReward2 {
    // members
    uint8_t m_pad[0xa0];
    // functions
    static const DSMissionBaggageCountConditionResource* FindBaggageCountConditionResource(const DSMissionReward2* param1, bool param2) {
        typedef const DSMissionBaggageCountConditionResource* (*FnType)(const DSMissionReward2* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindBaggageCountConditionResource")->address);
        return fn(param1, param2);
    }
    static const DSMissionBaggageWeightConditionResource* FindBaggageWeightConditionResource(const DSMissionReward2* param1, bool param2) {
        typedef const DSMissionBaggageWeightConditionResource* (*FnType)(const DSMissionReward2* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindBaggageWeightConditionResource")->address);
        return fn(param1, param2);
    }
    static const DSMissionConditionResourceBase* FindConditionResource(const DSMissionReward2* param1, EDSMissionConditionType param2, bool param3) {
        typedef const DSMissionConditionResourceBase* (*FnType)(const DSMissionReward2* p1, EDSMissionConditionType p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindConditionResource")->address);
        return fn(param1, param2, param3);
    }
    static const DSMissionSafeConditionResource* FindSafetyConditionResource(const DSMissionReward2* param1, bool param2) {
        typedef const DSMissionSafeConditionResource* (*FnType)(const DSMissionReward2* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindSafetyConditionResource")->address);
        return fn(param1, param2);
    }
    static const DSMissionServiceConditionResource* FindServiceConditionResource(const DSMissionReward2* param1, bool param2) {
        typedef const DSMissionServiceConditionResource* (*FnType)(const DSMissionReward2* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindServiceConditionResource")->address);
        return fn(param1, param2);
    }
    static const DSMissionSpeedConditionResource* FindSpeedConditionResource(const DSMissionReward2* param1, bool param2) {
        typedef const DSMissionSpeedConditionResource* (*FnType)(const DSMissionReward2* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindSpeedConditionResource")->address);
        return fn(param1, param2);
    }
    static float GetBaggageDamageMinRate(const DSMissionReward2* param1, bool param2) {
        typedef float (*FnType)(const DSMissionReward2* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetBaggageDamageMinRate")->address);
        return fn(param1, param2);
    }
    static int32_t GetBaseLike(const DSMissionReward2* param1) {
        typedef int32_t (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetBaseLike")->address);
        return fn(param1);
    }
    static int32_t GetClearMinTime(const DSMissionReward2* param1, bool param2) {
        typedef int32_t (*FnType)(const DSMissionReward2* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetClearMinTime")->address);
        return fn(param1, param2);
    }
    static const DSMissionSpecialReportResource* GetCustomSpecialReportFromIndex(const DSMissionReward2* param1, int32_t param2) {
        typedef const DSMissionSpecialReportResource* (*FnType)(const DSMissionReward2* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetCustomSpecialReportFromIndex")->address);
        return fn(param1, param2);
    }
    static int32_t GetCustomSpecialReportsLength(const DSMissionReward2* param1) {
        typedef int32_t (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetCustomSpecialReportsLength")->address);
        return fn(param1);
    }
    static const DSMissionEvaluationDataTable* GetEvaluationDataTableRouteDeviation(const DSMissionReward2* param1) {
        typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetEvaluationDataTableRouteDeviation")->address);
        return fn(param1);
    }
    static const DSMissionEvaluationDataTable* GetEvaluationDataTableTotalBaggageDamage(const DSMissionReward2* param1) {
        typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetEvaluationDataTableTotalBaggageDamage")->address);
        return fn(param1);
    }
    static EDSEvaluationType GetEvaluationType(const DSMissionReward2* param1) {
        typedef EDSEvaluationType (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetEvaluationType")->address);
        return fn(param1);
    }
    static uint8_t GetMinCountBaggage(const DSMissionReward2* param1, bool param2) {
        typedef uint8_t (*FnType)(const DSMissionReward2* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetMinCountBaggage")->address);
        return fn(param1, param2);
    }
    static float GetMinWeightBaggage(const DSMissionReward2* param1, bool param2) {
        typedef float (*FnType)(const DSMissionReward2* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetMinWeightBaggage")->address);
        return fn(param1, param2);
    }
    static int32_t GetNeedBaggageCountForPremium(const DSMissionReward2* param1) {
        typedef int32_t (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetNeedBaggageCountForPremium")->address);
        return fn(param1);
    }
    static float GetNeedBaggageDamageRateForPremium(const DSMissionReward2* param1) {
        typedef float (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetNeedBaggageDamageRateForPremium")->address);
        return fn(param1);
    }
    static float GetNeedBaggageWeightForPremium(const DSMissionReward2* param1) {
        typedef float (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetNeedBaggageWeightForPremium")->address);
        return fn(param1);
    }
    static int32_t GetNeedClearTimeForPremium(const DSMissionReward2* param1) {
        typedef int32_t (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetNeedClearTimeForPremium")->address);
        return fn(param1);
    }
    static float GetPlayerMinDamage(const DSMissionReward2* param1, bool param2) {
        typedef float (*FnType)(const DSMissionReward2* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetPlayerMinDamage")->address);
        return fn(param1, param2);
    }
    static bool IsEnableSpecialReportDelicateDelivery(const DSMissionReward2* param1) {
        typedef bool (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_IsEnableSpecialReportDelicateDelivery")->address);
        return fn(param1);
    }
    static bool IsEnableSpecialReportLand(const DSMissionReward2* param1) {
        typedef bool (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_IsEnableSpecialReportLand")->address);
        return fn(param1);
    }
    static bool IsRouteEvaluation(const DSMissionReward2* param1) {
        typedef bool (*FnType)(const DSMissionReward2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_IsRouteEvaluation")->address);
        return fn(param1);
    }
};

struct DSMissionInfo {
    // members
    uint8_t m_pad[0xa0];
    // functions
    static float GetBaggageDamageMinRate(const DSMissionInfo* param1, bool param2) {
        typedef float (*FnType)(const DSMissionInfo* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetBaggageDamageMinRate")->address);
        return fn(param1, param2);
    }
    static int32_t GetClearMinTime(const DSMissionInfo* param1, bool param2) {
        typedef int32_t (*FnType)(const DSMissionInfo* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetClearMinTime")->address);
        return fn(param1, param2);
    }
    static float GetDeliveredTotalMaxWeightBaggage(const DSMissionInfo* param1) {
        typedef float (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveredTotalMaxWeightBaggage")->address);
        return fn(param1);
    }
    static float GetDeliveredTotalMinWeightBaggage(const DSMissionInfo* param1, bool param2) {
        typedef float (*FnType)(const DSMissionInfo* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveredTotalMinWeightBaggage")->address);
        return fn(param1, param2);
    }
    static float GetDeliveredTotalWeightBaggage(const DSMissionInfo* param1) {
        typedef float (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveredTotalWeightBaggage")->address);
        return fn(param1);
    }
    static float GetDeliveredTotalWeightRateBaggage(const DSMissionInfo* param1) {
        typedef float (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveredTotalWeightRateBaggage")->address);
        return fn(param1);
    }
    static int32_t GetDeliveryCount(const DSMissionInfo* param1) {
        typedef int32_t (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveryCount")->address);
        return fn(param1);
    }
    static float GetDeliveryCountRate(const DSMissionInfo* param1) {
        typedef float (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveryCountRate")->address);
        return fn(param1);
    }
    static int32_t GetDeliveryMaxCount(const DSMissionInfo* param1) {
        typedef int32_t (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveryMaxCount")->address);
        return fn(param1);
    }
    static double GetElapsedTime(const DSMissionInfo* param1) {
        typedef double (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetElapsedTime")->address);
        return fn(param1);
    }
    static float GetElapsedTimeRate(const DSMissionInfo* param1, bool param2) {
        typedef float (*FnType)(const DSMissionInfo* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetElapsedTimeRate")->address);
        return fn(param1, param2);
    }
    static EDSEvaluationType GetEvaluationType(const DSMissionInfo* param1) {
        typedef EDSEvaluationType (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetEvaluationType")->address);
        return fn(param1);
    }
    static bool GetGoalDeliveryPointPosition(const DSMissionInfo* param1, WorldPosition& param2) {
        typedef bool (*FnType)(const DSMissionInfo* p1, WorldPosition& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetGoalDeliveryPointPosition")->address);
        return fn(param1, param2);
    }
    static const DSHouseholdInfoResource* GetHouseholdInfoResourceOfTheClient(const DSMissionInfo* param1) {
        typedef const DSHouseholdInfoResource* (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetHouseholdInfoResourceOfTheClient")->address);
        return fn(param1);
    }
    static EDSDifficulty GetLowestDifficulty(const DSMissionInfo* param1) {
        typedef EDSDifficulty (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetLowestDifficulty")->address);
        return fn(param1);
    }
    static int32_t GetMinCountBaggage(const DSMissionInfo* param1, bool param2) {
        typedef int32_t (*FnType)(const DSMissionInfo* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMinCountBaggage")->address);
        return fn(param1, param2);
    }
    static EDSMissionCategory GetMissionCategory(const DSMissionInfo* param1) {
        typedef EDSMissionCategory (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMissionCategory")->address);
        return fn(param1);
    }
    static uint64_t GetMissionId(const DSMissionInfo* param1) {
        typedef uint64_t (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMissionId")->address);
        return fn(param1);
    }
    static float GetMovingDistanceXY(const DSMissionInfo* param1) {
        typedef float (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMovingDistanceXY")->address);
        return fn(param1);
    }
    static float GetMovingDistanceXYRate(const DSMissionInfo* param1) {
        typedef float (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMovingDistanceXYRate")->address);
        return fn(param1);
    }
    static float GetMovingDistanceXYZ(const DSMissionInfo* param1) {
        typedef float (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMovingDistanceXYZ")->address);
        return fn(param1);
    }
    static const DSMissionReward2* GetReward2(const DSMissionInfo* param1) {
        typedef const DSMissionReward2* (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetReward2")->address);
        return fn(param1);
    }
    static const DSMissionSpecialReportResource* GetSpecialReportOnPlace(const DSMissionInfo* param1) {
        typedef const DSMissionSpecialReportResource* (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetSpecialReportOnPlace")->address);
        return fn(param1);
    }
    static bool GetStartDeliveryPointPosition(const DSMissionInfo* param1, WorldPosition& param2) {
        typedef bool (*FnType)(const DSMissionInfo* p1, WorldPosition& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetStartDeliveryPointPosition")->address);
        return fn(param1, param2);
    }
    static bool GetStartToGoalPointDistance(const DSMissionInfo* param1, float& param2) {
        typedef bool (*FnType)(const DSMissionInfo* p1, float& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetStartToGoalPointDistance")->address);
        return fn(param1, param2);
    }
    static float GetTotalDeliveryBaggageDamageRate(const DSMissionInfo* param1) {
        typedef float (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetTotalDeliveryBaggageDamageRate")->address);
        return fn(param1);
    }
    static bool IsAutomation(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsAutomation")->address);
        return fn(param1);
    }
    static bool IsCheckStartAndGoalDeliveryPointInfo(const DSMissionInfo* param1, bool param2) {
        typedef bool (*FnType)(const DSMissionInfo* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsCheckStartAndGoalDeliveryPointInfo")->address);
        return fn(param1, param2);
    }
    static bool IsChiralMission(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsChiralMission")->address);
        return fn(param1);
    }
    static bool IsDeliveryBBPod(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsDeliveryBBPod")->address);
        return fn(param1);
    }
    static bool IsDisableFriendshipResult(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsDisableFriendshipResult")->address);
        return fn(param1);
    }
    static bool IsDynamicMission(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsDynamicMission")->address);
        return fn(param1);
    }
    static bool IsEnableDistanceMeasurementMission(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsEnableDistanceMeasurementMission")->address);
        return fn(param1);
    }
    static bool IsLostObjectMission(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsLostObjectMission")->address);
        return fn(param1);
    }
    static bool IsLostPersonalObjectMission(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsLostPersonalObjectMission")->address);
        return fn(param1);
    }
    static bool IsNoDelivery(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsNoDelivery")->address);
        return fn(param1);
    }
    static bool IsOnlineMission(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsOnlineMission")->address);
        return fn(param1);
    }
    static bool IsPremium(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsPremium")->address);
        return fn(param1);
    }
    static bool IsSimpleMission(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsSimpleMission")->address);
        return fn(param1);
    }
    static bool IsSimpleMissionOfStatic(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsSimpleMissionOfStatic")->address);
        return fn(param1);
    }
    static bool IsSupplyMission(const DSMissionInfo* param1) {
        typedef bool (*FnType)(const DSMissionInfo* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsSupplyMission")->address);
        return fn(param1);
    }
};

struct DSBaggage2 {
    // members
    uint8_t m_pad[0x240];
    // functions
    static float GetAmountRate(const DSBaggage2* param1) {
        typedef float (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetAmountRate")->address);
        return fn(param1);
    }
    static EDSGameBaggageListItem_BaggageCaseType GetBaggageCaseType(const DSBaggage2* param1) {
        typedef EDSGameBaggageListItem_BaggageCaseType (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetBaggageCaseType")->address);
        return fn(param1);
    }
    static float GetBaggageWeight(const DSBaggage2* param1) {
        typedef float (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetWeight")->address);
        return fn(param1);
    }
    static uint8_t GetCatalogItemRarity(const DSBaggage2* param1) {
        typedef uint8_t (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetCatalogItemRarity")->address);
        return fn(param1);
    }
    static float GetCoatingLifeRate(const DSBaggage2* param1) {
        typedef float (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetCoatingLifeRate")->address);
        return fn(param1);
    }
    static EDSGameBaggageListItem_ContentsDamageType GetContentsDamageType(const DSBaggage2* param1) {
        typedef EDSGameBaggageListItem_ContentsDamageType (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetContentsDamageType")->address);
        return fn(param1);
    }
    static float GetContentsLifeRate(const DSBaggage2* param1) {
        typedef float (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetContentsLifeRate")->address);
        return fn(param1);
    }
    static const DSGameBaggageListItem* GetListItem(const DSBaggage2* param1) {
        typedef const DSGameBaggageListItem* (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetListItem")->address);
        return fn(param1);
    }
    static uint64_t GetMissionId(const DSBaggage2* param1) {
        typedef uint64_t (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetMissionId")->address);
        return fn(param1);
    }
    static EDSGameBaggageListItem_Volume GetVolumeType(const DSBaggage2* param1) {
        typedef EDSGameBaggageListItem_Volume (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetVolumeType")->address);
        return fn(param1);
    }
    static bool IsDelicate(const DSBaggage2* param1) {
        typedef bool (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_IsDelicate")->address);
        return fn(param1);
    }
};

struct DSMissionBaggageResource {
    // members
    uint8_t m_pad[0x60];
    // functions
    static const DSGameBaggageListItem* GetDSGameBaggageListItem(const DSMissionBaggageResource* param1) {
        typedef const DSGameBaggageListItem* (*FnType)(const DSMissionBaggageResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBaggageResource_GetDSGameBaggageListItem")->address);
        return fn(param1);
    }
};

struct DSMisionEvaluationCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CheckNonDeliveryBaggageForStaticMission(const DSBaggage2* param1) {
        typedef bool (*FnType)(const DSBaggage2* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sCheckNonDeliveryBaggageForStaticMission")->address);
        return fn(param1);
    }
    static bool CompareAndRecordAtShortestDistance(const DSMissionInfo* param1, float param2, bool param3) {
        typedef bool (*FnType)(const DSMissionInfo* p1, float p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sCompareAndRecordAtShortestDistance")->address);
        return fn(param1, param2, param3);
    }
    static bool DistanceFromStartPointToEndPoint(const DSMissionInfo* param1, float& param2) {
        typedef bool (*FnType)(const DSMissionInfo* p1, float& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sDistanceFromStartPointToEndPoint")->address);
        return fn(param1, param2);
    }
    static bool FindBaggageStartAndGoalByBaggage2(const DSBaggage2* param1, WorldPosition& param2, WorldPosition& param3) {
        typedef bool (*FnType)(const DSBaggage2* p1, WorldPosition& p2, WorldPosition& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sFindBaggageStartAndGoalByBaggage2")->address);
        return fn(param1, param2, param3);
    }
    static bool FindBaggageStartAndGoalByStaticMissionBaggageResource(const DSMissionInfo* param1, const DSMissionBaggageResource* param2, WorldPosition& param3, WorldPosition& param4) {
        typedef bool (*FnType)(const DSMissionInfo* p1, const DSMissionBaggageResource* p2, WorldPosition& p3, WorldPosition& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sFindBaggageStartAndGoalByStaticMissionBaggageResource")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool GetAccessingTerminalPosition(WorldPosition& param1) {
        typedef bool (*FnType)(WorldPosition& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetAccessingTerminalPosition")->address);
        return fn(param1);
    }
    static bool GetAutoDeliveryEndPosition(const DSMissionInfo* param1, WorldPosition& param2) {
        typedef bool (*FnType)(const DSMissionInfo* p1, WorldPosition& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetAutoDeliveryEndPosition")->address);
        return fn(param1, param2);
    }
    static const DSGameBaggageListItem* GetBaggageListItemWasteBBPod() {
        typedef const DSGameBaggageListItem* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetBaggageListItemWasteBBPod")->address);
        return fn();
    }
    static const DSMissionSpecialReportResource* GetBaggageSpecialReport(EDSGameBaggageListItem_ContentsDamageType param1) {
        typedef const DSMissionSpecialReportResource* (*FnType)(EDSGameBaggageListItem_ContentsDamageType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetBaggageSpecialReport")->address);
        return fn(param1);
    }
    static bool GetDSTraceEnable() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetDSTraceEnable")->address);
        return fn();
    }
    static void GetOnlineLostBaggageDriftingParam(uint64_t param1, const DSMissionBaggageResource* param2, uint32_t* param3, uint32_t* param4) {
        typedef void (*FnType)(uint64_t p1, const DSMissionBaggageResource* p2, uint32_t* p3, uint32_t* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetOnlineLostBaggageDriftingParamFromBaggageResource")->address);
        return fn(param1, param2, param3, param4);
    }
    static const DSMissionSpecialReportResource* GetSpecialReportContentsDamage() {
        typedef const DSMissionSpecialReportResource* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetSpecialReportContentsDamage")->address);
        return fn();
    }
    static const DSMissionSpecialReportResource* GetSpecialReportReachd() {
        typedef const DSMissionSpecialReportResource* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetSpecialReportReachd")->address);
        return fn();
    }
    static const DSMissionSpecialReportResource* GetSpecialReportRouteDeviation() {
        typedef const DSMissionSpecialReportResource* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetSpecialReportRouteDeviation")->address);
        return fn();
    }
    static const DSMissionSpecialReportResource* GetSpecialReportRouteExploration() {
        typedef const DSMissionSpecialReportResource* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetSpecialReportRouteExploration")->address);
        return fn();
    }
    static const DSMissionSpecialReportResource* GetSpecialReportRouteNotExploration() {
        typedef const DSMissionSpecialReportResource* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetSpecialReportRouteNotExploration")->address);
        return fn();
    }
    static const DSMissionSpecialReportResource* GetSpecialReportTotalBaggageDamage() {
        typedef const DSMissionSpecialReportResource* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetSpecialReportTotalBaggageDamage")->address);
        return fn();
    }
    static const DSMissionSpecialReportResource* GetSpecialReportTotalDelivery() {
        typedef const DSMissionSpecialReportResource* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetSpecialReportTotalDelivery")->address);
        return fn();
    }
    static bool GetSupplyMissionInfo(const DSMissionInfo* param1, const DSGameBaggageListItem** param2, uint32_t* param3) {
        typedef bool (*FnType)(const DSMissionInfo* p1, const DSGameBaggageListItem** p2, uint32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetSupplyMissionInfo")->address);
        return fn(param1, param2, param3);
    }
    static bool IsEnableTotalWeightBonusFromBaggageUnit(const DSBaggageUnit* param1) {
        typedef bool (*FnType)(const DSBaggageUnit* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sIsEnableTotalWeightBonusFromBaggageUnit")->address);
        return fn(param1);
    }
    static bool IsEnableTotalWeightBonusFromMissionInfoStack(const DSMissionInfoStack* param1) {
        typedef bool (*FnType)(const DSMissionInfoStack* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sIsEnableTotalWeightBonusFromMissionInfoStack")->address);
        return fn(param1);
    }
    static bool IsEnableTotalWeightBonusFromMissionInfoStackAndBaggageUnit(const DSMissionInfoStack* param1, const DSBaggageUnit* param2) {
        typedef bool (*FnType)(const DSMissionInfoStack* p1, const DSBaggageUnit* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sIsEnableTotalWeightBonusFromMissionInfoStackAndBaggageUnit")->address);
        return fn(param1, param2);
    }
};

struct Model {
    // members
    uint8_t m_pad[0x168];
    // functions
    void ChangeModelPart(const ModelPartResource* param1, const ModelPartResource* param2) {
        typedef void (*FnType)(Model* self, const ModelPartResource* p1, const ModelPartResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedChangeModelPart")->address);
        return fn(this, param1, param2);
    }
    void EnableModelPart(const ModelPartResource* param1, bool param2) {
        typedef void (*FnType)(Model* self, const ModelPartResource* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedEnableModelPart")->address);
        return fn(this, param1, param2);
    }
    Mat44 GetModelPartLocalMatrix(const ModelPartResource* param1) {
        typedef Mat44 (*FnType)(Model* self, const ModelPartResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedGetModelPartLocalMatrix")->address);
        return fn(this, param1);
    }
    bool GetModelPartTransform(int32_t param1, WorldPosition& param2, Mat44& param3) {
        typedef bool (*FnType)(Model* self, int32_t p1, WorldPosition& p2, Mat44& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedGetModelPartTransform")->address);
        return fn(this, param1, param2, param3);
    }
    bool IsModelPartEnabled(const GGUUID& param1) {
        typedef bool (*FnType)(Model* self, const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedIsModelPartEnabled")->address);
        return fn(this, param1);
    }
    void SetModelPartLocalMatrix(const ModelPartResource* param1, const Mat44& param2) {
        typedef void (*FnType)(Model* self, const ModelPartResource* p1, const Mat44& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedSetModelPartLocalMatrix")->address);
        return fn(this, param1, param2);
    }
};

struct QuestInstance {
    // members
    uint8_t m_pad[0x1a0];
    // functions
    const QuestResource* GetResource() {
        typedef const QuestResource* (*FnType)(QuestInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestInstance_ExportedGetResource")->address);
        return fn(this);
    }
    bool IsQuestPaused() {
        typedef bool (*FnType)(QuestInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestInstance_ExportedIsQuestPaused")->address);
        return fn(this);
    }
    bool IsQuestTracked() {
        typedef bool (*FnType)(QuestInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestInstance_ExportedIsQuestTracked")->address);
        return fn(this);
    }
    static void ProgressQuest(QuestSection* param1) {
        typedef void (*FnType)(QuestSection* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestInstance_sExportedProgressQuest")->address);
        return fn(param1);
    }
    void SetQuestPaused(bool param1) {
        typedef void (*FnType)(QuestInstance* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestInstance_ExportedSetQuestPaused")->address);
        return fn(this, param1);
    }
    void SetQuestTracked(bool param1) {
        typedef void (*FnType)(QuestInstance* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestInstance_ExportedSetQuestTracked")->address);
        return fn(this, param1);
    }
    void SetTrackingEnabled(bool param1) {
        typedef void (*FnType)(QuestInstance* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestInstance_ExportedSetTrackingEnabled")->address);
        return fn(this, param1);
    }
};

struct DSMissionOpenList {
    // members
    uint8_t m_pad[0x30];
    // functions
    static DSMissionResourceList* GetOpenResourceList(DSMissionOpenList* param1) {
        typedef DSMissionResourceList* (*FnType)(DSMissionOpenList* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenList_GetOpenResourceList")->address);
        return fn(param1);
    }
    static EDSMissionOpenState GetOpenState(DSMissionOpenList* param1) {
        typedef EDSMissionOpenState (*FnType)(DSMissionOpenList* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenList_GetOpenState")->address);
        return fn(param1);
    }
};

struct CollisionTrigger {
    // members
    uint8_t m_pad[0xf0];
    // functions
    WorldTransform GetWorldTransform() {
        typedef WorldTransform (*FnType)(CollisionTrigger* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollisionTrigger_ExportedGetWorldTransform")->address);
        return fn(this);
    }
    static bool IsInTrigger(const WorldPosition& param1, const CollisionTrigger* param2) {
        typedef bool (*FnType)(const WorldPosition& p1, const CollisionTrigger* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollisionTrigger_sExportedIsInTrigger")->address);
        return fn(param1, param2);
    }
};

struct DsMuleMissionCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void MuleCP_BgmMute(const GGUUID& param1, bool param2) {
        typedef void (*FnType)(const GGUUID& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExporedCpBgmMute")->address);
        return fn(param1, param2);
    }
    static bool MuleCP_CheckPlayerInMuleArea(int32_t param1) {
        typedef bool (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedCheckPlayerInMuleArea")->address);
        return fn(param1);
    }
    static bool MuleCP_CheckPlayerInMuleAreaByLocator(const GGUUID& param1, int32_t param2) {
        typedef bool (*FnType)(const GGUUID& p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedCheckPlayerInMuleAreaByLocator")->address);
        return fn(param1, param2);
    }
    static void MuleCP_DisableCPAndAllsMembers(const GGUUID& param1, bool param2) {
        typedef void (*FnType)(const GGUUID& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedDisableCPAndAllsMembers")->address);
        return fn(param1, param2);
    }
    static void MuleCP_DisableCPRaderCheck(const GGUUID& param1, bool param2) {
        typedef void (*FnType)(const GGUUID& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedDisableCPRaderCheck")->address);
        return fn(param1, param2);
    }
    static void MuleCP_ForceSetCPPhase(const GGUUID& param1, EDSMulePhase param2) {
        typedef void (*FnType)(const GGUUID& p1, EDSMulePhase p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedForceSetCPPhase")->address);
        return fn(param1, param2);
    }
    static bool MuleCP_IsExitMuleInCamera(const GGUUID& param1, float param2) {
        typedef bool (*FnType)(const GGUUID& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedIsExistMuleInCamera")->address);
        return fn(param1, param2);
    }
    static bool MuleCP_IsExtinction(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedIsExtinctionCP")->address);
        return fn(param1);
    }
    static void MuleCP_SetKeepCaution(const GGUUID& param1, bool param2, bool param3) {
        typedef void (*FnType)(const GGUUID& p1, bool p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedSetKeepCaution")->address);
        return fn(param1, param2, param3);
    }
    static void Mule_AddMissionClearCountForResurrect(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExporedAddMissionClearCountForResurrect")->address);
        return fn(param1);
    }
    static void Mule_ChangeWeapon(const GGUUID& param1, const DSMuleConfig* param2) {
        typedef void (*FnType)(const GGUUID& p1, const DSMuleConfig* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedChangeWeapon")->address);
        return fn(param1, param2);
    }
    static void Mule_DontTakeAwayShoes(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedDontTakeAwayShoes")->address);
        return fn(param1);
    }
    static float Mule_GetMinDistanceBetweenBaggage(const DSStringHashResource* param1) {
        typedef float (*FnType)(const DSStringHashResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedGetMinDistanceBetweenBaggage")->address);
        return fn(param1);
    }
    static float Mule_GetMinDistanceBetweenPlayer(bool param1, float param2) {
        typedef float (*FnType)(bool p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedGetMinDistanceBetweenPlayer")->address);
        return fn(param1, param2);
    }
    static void Mule_GetMuleTypeByEntity(const Entity* param1, bool* param2, EDSMuleType* param3) {
        typedef void (*FnType)(const Entity* p1, bool* p2, EDSMuleType* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExporedGetMuleTypeByEntity")->address);
        return fn(param1, param2, param3);
    }
    static bool Mule_InCollisionTrigger(const CollisionTrigger* param1) {
        typedef bool (*FnType)(const CollisionTrigger* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExporedIsExistMuleInCollisionTrigger")->address);
        return fn(param1);
    }
    static bool Mule_IsExistAlertMule() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedIsExistAlertMule")->address);
        return fn();
    }
    static bool Mule_IsExistCautionOrNoticeMule() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedIsExistCautionOrNoticeMule")->address);
        return fn();
    }
    static void Mule_MoveMulesOnElevator() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportMoveMulesOnElevator")->address);
        return fn();
    }
    static void Mule_RemoveAllMulesFromWorld(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExpotedRemoveAllMulesFromWorld")->address);
        return fn(param1);
    }
    static void Mule_RemoveDeadMules() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedRemoveDeadMules")->address);
        return fn();
    }
    static void Mule_RemoveDeadMulesByBridges() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedRemoveDeadMulesByBridges")->address);
        return fn();
    }
    static void Mule_RemovePersonalMissionBaggages(const DSGameBaggageListItem* param1) {
        typedef void (*FnType)(const DSGameBaggageListItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedRemovePersonalMissionBaggages")->address);
        return fn(param1);
    }
    static void Mule_ResetAllMulesByAreaChange(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedResetAllMulesByAreaChange")->address);
        return fn(param1);
    }
    static void Mule_ResetAllMulesByMissionChange() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedResetAllMulesByMissionChange")->address);
        return fn();
    }
    static void Mule_ResetAndResurrectAllMulesByMissionChange() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedResetAndResurrectAllMulesByMissionChange")->address);
        return fn();
    }
    static void Mule_ResetCPMulesAIOnly(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedResetCPMulesAIOnly")->address);
        return fn(param1);
    }
    static void Mule_ResetCPMulesByMissionChange(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedResetCPMulesByMissionChange")->address);
        return fn(param1);
    }
    static void Mule_ResetFriendlyMuleByAccessingTerminal() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedResetFriendlyMuleByAccessingTerminal")->address);
        return fn();
    }
    static void Mule_ResetOutsideCPAreaPosition() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedResetOutsideCPAreaPosition")->address);
        return fn();
    }
    static void Mule_SetIgnoreDeadMuleMoveArea(EDSArea param1, WorldPosition param2, float param3, bool param4) {
        typedef void (*FnType)(EDSArea p1, WorldPosition p2, float p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportSetIgnoreDeadMuleMoveArea")->address);
        return fn(param1, param2, param3, param4);
    }
    static void Mule_SetMissionBaggage(const GGUUID& param1, const DSGameBaggageListItem* param2) {
        typedef void (*FnType)(const GGUUID& p1, const DSGameBaggageListItem* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedSetMissionBaggage")->address);
        return fn(param1, param2);
    }
    static bool Mule_StillExistDeadBodyBecomingGazer() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedStillExistDeadBodyBecomingGazer")->address);
        return fn();
    }
};

struct Humanoid {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool CanMove() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedCanMove")->address);
        return fn(this);
    }
    float GetLastLandingHeight() {
        typedef float (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedGetLastLandingHeight")->address);
        return fn(this);
    }
    float GetTimeSinceLastDamage() {
        typedef float (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedGetTimeSinceLastDamage")->address);
        return fn(this);
    }
    int32_t GetVaultType() {
        typedef int32_t (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedGetVaultType")->address);
        return fn(this);
    }
    bool HasPerkLevel(const PerkLevel* param1) {
        typedef bool (*FnType)(Humanoid* self, const PerkLevel* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedHasPerkLevel")->address);
        return fn(this, param1);
    }
    bool IsAiming() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsAiming")->address);
        return fn(this);
    }
    bool IsCrouching() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsCrouching")->address);
        return fn(this);
    }
    bool IsDodging() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsDodging")->address);
        return fn(this);
    }
    bool IsFalling() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsFalling")->address);
        return fn(this);
    }
    bool IsFiring() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsFiring")->address);
        return fn(this);
    }
    bool IsInCombat() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsInCombat")->address);
        return fn(this);
    }
    bool IsInStealth() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsInStealth")->address);
        return fn(this);
    }
    bool IsJumping() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsJumping")->address);
        return fn(this);
    }
    bool IsKnockedDown(bool* param1) {
        typedef bool (*FnType)(Humanoid* self, bool* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsKnockedDown")->address);
        return fn(this, param1);
    }
    bool IsLanding() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsLanding")->address);
        return fn(this);
    }
    bool IsLowOnAmmo() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsLowOnAmmo")->address);
        return fn(this);
    }
    bool IsMoving() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsMoving")->address);
        return fn(this);
    }
    void IsParkouring(bool& param1, bool& param2, bool& param3) {
        typedef void (*FnType)(Humanoid* self, bool& p1, bool& p2, bool& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsParkouring")->address);
        return fn(this, param1, param2, param3);
    }
    bool IsPerformingTakeDown() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsPerformingTakeDown")->address);
        return fn(this);
    }
    bool IsReloading() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsReloading")->address);
        return fn(this);
    }
    bool IsSliding() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsSliding")->address);
        return fn(this);
    }
    bool IsSlidingToUseLocation() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsSlidingToUseLocation")->address);
        return fn(this);
    }
    bool IsSprinting() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsSprinting")->address);
        return fn(this);
    }
    bool IsStaggering() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsStaggering")->address);
        return fn(this);
    }
    bool IsSwimming() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsSwimming")->address);
        return fn(this);
    }
    bool IsSwimmingUnderWater() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsSwimmingUnderWater")->address);
        return fn(this);
    }
    bool IsUsingPlayerTool() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsUsingPlayerTool")->address);
        return fn(this);
    }
    bool IsVaulting() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsVaulting")->address);
        return fn(this);
    }
    bool IsZipLining() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsZipLining")->address);
        return fn(this);
    }
    bool IsZooming() {
        typedef bool (*FnType)(Humanoid* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedIsZooming")->address);
        return fn(this);
    }
    void SetQuietFootSteps(bool param1) {
        typedef void (*FnType)(Humanoid* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedSetQuietFootSteps")->address);
        return fn(this, param1);
    }
    void SetStance(EStance param1) {
        typedef void (*FnType)(Humanoid* self, EStance p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedSetStance")->address);
        return fn(this, param1);
    }
};

struct DebugTool {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void sDrawLine(const WorldPosition& param1, const WorldPosition& param2, const FRGBAColor& param3, float param4, const RTTIObject* param5) {
        typedef void (*FnType)(const WorldPosition& p1, const WorldPosition& p2, const FRGBAColor& p3, float p4, const RTTIObject* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedDrawLine")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void sDrawOrientedBoundingBox(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, const FRGBAColor& param4, float param5, const RTTIObject* param6) {
        typedef void (*FnType)(const Vec3& p1, const Vec3& p2, const WorldTransform& p3, const FRGBAColor& p4, float p5, const RTTIObject* p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedDrawOrientedBoundingBox")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void sDrawSphere(const WorldPosition& param1, float param2, const FRGBAColor& param3, float param4, const RTTIObject* param5) {
        typedef void (*FnType)(const WorldPosition& p1, float p2, const FRGBAColor& p3, float p4, const RTTIObject* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedDrawSphere")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static const wchar_t* sGetDebugName(const RTTIRefObject* param1) {
        typedef const wchar_t* (*FnType)(const RTTIRefObject* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sGetDebugName")->address);
        return fn(param1);
    }
};

struct PlayerGame {
    // members
    uint8_t m_pad[0x0];
    // functions
    int32_t GetFriendlyAlivePlayerCount() {
        typedef int32_t (*FnType)(PlayerGame* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedGetFriendlyAlivePlayerCount")->address);
        return fn(this);
    }
    int32_t GetHostileAliveEntityCount(const WorldPosition& param1, float param2) {
        typedef int32_t (*FnType)(PlayerGame* self, const WorldPosition& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedGetHostileAliveEntityCount")->address);
        return fn(this, param1, param2);
    }
    Vec3 GetJoystickAcceleration() {
        typedef Vec3 (*FnType)(PlayerGame* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedGetJoystickAcceleration")->address);
        return fn(this);
    }
    Vec3 GetJoystickAngleVelocity() {
        typedef Vec3 (*FnType)(PlayerGame* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedGetJoystickAngleVelocity")->address);
        return fn(this);
    }
    void GetJoystickLookInput(float* param1, float* param2) {
        typedef void (*FnType)(PlayerGame* self, float* p1, float* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedGetJoystickLookInput")->address);
        return fn(this, param1, param2);
    }
    void GetJoystickMoveInput(float* param1, float* param2) {
        typedef void (*FnType)(PlayerGame* self, float* p1, float* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedGetJoystickMoveInput")->address);
        return fn(this, param1, param2);
    }
    Vec3 GetJoystickOrientation() {
        typedef Vec3 (*FnType)(PlayerGame* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedGetJoystickOrientation")->address);
        return fn(this);
    }
    bool IsAnyJoystickButtonFunctionActive() {
        typedef bool (*FnType)(PlayerGame* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedIsAnyJoystickButtonFunctionActive")->address);
        return fn(this);
    }
    bool IsAnyJoystickFunctionActive() {
        typedef bool (*FnType)(PlayerGame* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedIsAnyJoystickFunctionActive")->address);
        return fn(this);
    }
    bool IsJoystickFunctionPressed(EDeviceFunction param1, bool param2) {
        typedef bool (*FnType)(PlayerGame* self, EDeviceFunction p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedIsJoystickFunctionPressed")->address);
        return fn(this, param1, param2);
    }
    bool IsLookingAtPosition(const WorldPosition& param1, float param2, float param3, bool param4) {
        typedef bool (*FnType)(PlayerGame* self, const WorldPosition& p1, float p2, float p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedIsLookingAtPosition")->address);
        return fn(this, param1, param2, param3, param4);
    }
    void SetJoystickLedColor(const FRGBAColor& param1) {
        typedef void (*FnType)(PlayerGame* self, const FRGBAColor& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedSetJoystickLedColor")->address);
        return fn(this, param1);
    }
    void ShowObjectivesSummary() {
        typedef void (*FnType)(PlayerGame* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedShowObjectivesSummary")->address);
        return fn(this);
    }
    void SwitchPlayerCharacter(const HumanoidResource* param1) {
        typedef void (*FnType)(PlayerGame* self, const HumanoidResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedSwitchPlayerCharacter")->address);
        return fn(this, param1);
    }
};

struct HitReactionComponent {
    // members
    uint8_t m_pad[0x100];
    // functions
    void ActivateReactionSet(Entity* param1, const HitReactionSet* param2) {
        typedef void (*FnType)(HitReactionComponent* self, Entity* p1, const HitReactionSet* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent_ExportedActivateReactionSet")->address);
        return fn(this, param1, param2);
    }
    void AddSeverityModifier(const HitReactionSeverityModifier* param1) {
        typedef void (*FnType)(HitReactionComponent* self, const HitReactionSeverityModifier* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent_ExportedAddSeverityModifier")->address);
        return fn(this, param1);
    }
    void RemoveSeverityModifier(const HitReactionSeverityModifier* param1) {
        typedef void (*FnType)(HitReactionComponent* self, const HitReactionSeverityModifier* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent_ExportedRemoveSeverityModifier")->address);
        return fn(this, param1);
    }
    void ResetHitReaction(const HitReactionSeverityProperty* param1) {
        typedef void (*FnType)(HitReactionComponent* self, const HitReactionSeverityProperty* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent_ExportedResetHitReaction")->address);
        return fn(this, param1);
    }
};

struct HitReactions {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ModifyReactionDuration(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, const HitReactionResource* param3, float param4) {
        typedef void (*FnType)(HitReactionComponent* p1, const HitReactionSeverityProperty* p2, const HitReactionResource* p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent::sExportedModifyReactionDuration")->address);
        return fn(param1, param2, param3, param4);
    }
    static void ModifyReactionThreshold(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, const HitReactionResource* param3, float param4) {
        typedef void (*FnType)(HitReactionComponent* p1, const HitReactionSeverityProperty* p2, const HitReactionResource* p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent::sExportedModifyReactionThreshold")->address);
        return fn(param1, param2, param3, param4);
    }
    static void ModifySeverityDecay(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, float param3, float param4, bool param5) {
        typedef void (*FnType)(HitReactionComponent* p1, const HitReactionSeverityProperty* p2, float p3, float p4, bool p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent::sExportedModifySeverityDecay")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void ResetHitReactionByDamage(HitReactionComponent* param1, const DamageTypeResource* param2) {
        typedef void (*FnType)(HitReactionComponent* p1, const DamageTypeResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent::sExportedResetHitReactionByDamage")->address);
        return fn(param1, param2);
    }
};

struct FactMusicPreset {
    // members
    uint8_t m_pad[0x0];
    // functions
    String GetExitPresetName() {
        typedef String (*FnType)(FactMusicPreset* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactMusicPreset_ExportedGetExitPresetName")->address);
        return fn(this);
    }
    EnumFactEntry* GetFactValue() {
        typedef EnumFactEntry* (*FnType)(FactMusicPreset* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactMusicPreset_ExportedGetFactValue")->address);
        return fn(this);
    }
    void GetInfo(float param1, EnumFactEntry* param2, bool* param3, bool* param4, float* param5, float* param6, float* param7) {
        typedef void (*FnType)(FactMusicPreset* self, float p1, EnumFactEntry* p2, bool* p3, bool* p4, float* p5, float* p6, float* p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactMusicPreset_ExportedGetInfo")->address);
        return fn(this, param1, param2, param3, param4, param5, param6, param7);
    }
    String GetPresetName() {
        typedef String (*FnType)(FactMusicPreset* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactMusicPreset_ExportedGetPresetName")->address);
        return fn(this);
    }
};

struct DSPlayerSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ActivateAdrenalinMode() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedActivateAdrenalinMode")->address);
        return fn();
    }
    static void ActivateOdradek() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedActivateOdradek")->address);
        return fn();
    }
    static void AddAmmoToInventorySetting(EDSAmmoId param1, int32_t param2, int32_t param3) {
        typedef void (*FnType)(EDSAmmoId p1, int32_t p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddAmmoToInventorySetting")->address);
        return fn(param1, param2, param3);
    }
    static void AddChiralCrystalCount(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddChiralCrystalCount")->address);
        return fn(param1);
    }
    static void AddItemToInventorySetting(EDSItemId param1) {
        typedef void (*FnType)(EDSItemId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddItemToInventorySetting")->address);
        return fn(param1);
    }
    static void AddOdradekReactionPoint(uint32_t param1, WorldPosition param2) {
        typedef void (*FnType)(uint32_t p1, WorldPosition p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddOdradekReactionPoint")->address);
        return fn(param1, param2);
    }
    static void AddOnlyPaintRecordToFootForM00030() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddOnlyPaintRecordToFootForM00030")->address);
        return fn();
    }
    static void AddSuitParts(EDSSuitPartsId param1) {
        typedef void (*FnType)(EDSSuitPartsId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddSuitParts")->address);
        return fn(param1);
    }
    static void AddSuitPartsToInventorySetting(EDSSuitPartsId param1) {
        typedef void (*FnType)(EDSSuitPartsId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddSuitPartsToInventorySetting")->address);
        return fn(param1);
    }
    static void AddWeapon(EDSWeaponId param1) {
        typedef void (*FnType)(EDSWeaponId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddWeapon")->address);
        return fn(param1);
    }
    static void AddWeaponToInventorySetting(EDSWeaponId param1) {
        typedef void (*FnType)(EDSWeaponId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddWeaponToInventorySetting")->address);
        return fn(param1);
    }
    static void ApplyInventorySetting() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedApplyInventorySetting")->address);
        return fn();
    }
    static void ClearHighPrioReturnTransformAfterAnnihilationAttack() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedClearHighPrioReturnTransformAfterAnnihilationAttack")->address);
        return fn();
    }
    static void ClearInventorySetting() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedClearInventorySetting")->address);
        return fn();
    }
    static void ClearPaint(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedClearPaint")->address);
        return fn(param1);
    }
    static void CreateCryptobiosisOfReturningFromKnotSpace() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedCreateCryptobiosisOfReturningFromKnotSpace")->address);
        return fn();
    }
    static void DebugPlaySequenceOfReturningFromKnotSpace() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedDebugPlaySequenceOfReturningFromKnotSpace")->address);
        return fn();
    }
    static bool DidGoodActionForBBFromScript(uint32_t param1, float param2) {
        typedef bool (*FnType)(uint32_t p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedDidGoodActionForBBFromScript")->address);
        return fn(param1, param2);
    }
    static bool DidGoodActionForBBFromSpecifiedEntity(const Entity* param1) {
        typedef bool (*FnType)(const Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedDidGoodActionForBBFromSpecifiedEntity")->address);
        return fn(param1);
    }
    static bool DoesHaveBaggage(uint32_t param1, bool param2) {
        typedef bool (*FnType)(uint32_t p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedDoesHaveBaggage")->address);
        return fn(param1, param2);
    }
    static void EndConstructionCheck(EDSConstructionPointCategory param1) {
        typedef void (*FnType)(EDSConstructionPointCategory p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedEndConstructionCheck")->address);
        return fn(param1);
    }
    static void EndGhostAction() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedEndGhostAction")->address);
        return fn();
    }
    static void EndSignboardCheck() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedEndSignboardCheck")->address);
        return fn();
    }
    static void EquipEquipment(EDSSuitPartsId param1, bool param2) {
        typedef void (*FnType)(EDSSuitPartsId p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedEquipEquipment")->address);
        return fn(param1, param2);
    }
    static void FloatAndMovePlayer(const Vec3& param1, float param2, float param3, float param4, float param5) {
        typedef void (*FnType)(const Vec3& p1, float p2, float p3, float p4, float p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedFloatAndMovePlayer")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static int32_t GetBBAffectionPoint() {
        typedef int32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBBAffectionPoint")->address);
        return fn();
    }
    static void GetBaggageInfo(uint32_t param1, bool* param2, float* param3, float* param4, float* param5) {
        typedef void (*FnType)(uint32_t p1, bool* p2, float* p3, float* p4, float* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBaggageInfo")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void GetBareFootDamage(bool param1, EDSBareFootDamageType* param2) {
        typedef void (*FnType)(bool p1, EDSBareFootDamageType* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBareFootDamage")->address);
        return fn(param1, param2);
    }
    static float GetBloodAllPaintValue() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBloodAllPaintValue")->address);
        return fn();
    }
    static float GetBloodPaintValue(bool param1) {
        typedef float (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBloodPaintValue")->address);
        return fn(param1);
    }
    static float GetBloodSpherePaintValue(bool param1) {
        typedef float (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBloodSpherePaintValue")->address);
        return fn(param1);
    }
    static void GetGameActorIdOfPlayerVehicle(int32_t& param1, int32_t& param2) {
        typedef void (*FnType)(int32_t& p1, int32_t& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetGameActorIdOfPlayerVehicle")->address);
        return fn(param1, param2);
    }
    static float GetMudsAllPaintValue() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetMudsAllPaintValue")->address);
        return fn();
    }
    static float GetMudsPaintValue(bool param1) {
        typedef float (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetMudsPaintValue")->address);
        return fn(param1);
    }
    static float GetMudsSpherePaintValue(bool param1) {
        typedef float (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetMudsSpherePaintValue")->address);
        return fn(param1);
    }
    static void GetNailDamage(bool param1, EDSBareFootNailDamageType* param2) {
        typedef void (*FnType)(bool p1, EDSBareFootNailDamageType* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetNailDamage")->address);
        return fn(param1, param2);
    }
    static Entity* GetOdradekArmEntity() {
        typedef Entity* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetOdradekArmEntity")->address);
        return fn();
    }
    static Entity* GetOdradekBodyEntity() {
        typedef Entity* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetOdradekBodyEntity")->address);
        return fn();
    }
    static void GetPlayerInfo(float* param1, float* param2, float* param3, float* param4, float* param5, float* param6, float* param7, float* param8, float* param9, EDSPlayerShoesType* param10, float* param11, float* param12, bool* param13, float* param14, float* param15, float* param16, EDSPlayerStanceExported* param17, EDSPlayerMoveTypeExported* param18, EDSPlayerActionStateExported* param19, int32_t* param20, int32_t* param21, bool* param22, bool* param23, float* param24, bool* param25) {
        typedef void (*FnType)(float* p1, float* p2, float* p3, float* p4, float* p5, float* p6, float* p7, float* p8, float* p9, EDSPlayerShoesType* p10, float* p11, float* p12, bool* p13, float* p14, float* p15, float* p16, EDSPlayerStanceExported* p17, EDSPlayerMoveTypeExported* p18, EDSPlayerActionStateExported* p19, int32_t* p20, int32_t* p21, bool* p22, bool* p23, float* p24, bool* p25);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetPlayerInfo")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21, param22, param23, param24, param25);
    }
    static float GetTarAllPaintValue() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetTarAllPaintValue")->address);
        return fn();
    }
    static float GetTarPaintValue(bool param1) {
        typedef float (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetTarPaintValue")->address);
        return fn(param1);
    }
    static float GetTarSpherePaintValue(bool param1) {
        typedef float (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetTarSpherePaintValue")->address);
        return fn(param1);
    }
    static bool IsEquippedEquipment(EDSSuitPartsId param1) {
        typedef bool (*FnType)(EDSSuitPartsId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedIsEquippedEquipment")->address);
        return fn(param1);
    }
    static bool IsHadEquipment(EDSSuitPartsId param1) {
        typedef bool (*FnType)(EDSSuitPartsId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedIsHadEquipment")->address);
        return fn(param1);
    }
    static bool IsHadItem(EDSItemId param1) {
        typedef bool (*FnType)(EDSItemId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedIsHadItem")->address);
        return fn(param1);
    }
    static void OpenHandcuffDevice() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedOpenHandcuffDevice")->address);
        return fn();
    }
    static void OpenTerminalTopMenuAtLastTerminal() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedOpenTerminalTopMenuAtLastTerminal")->address);
        return fn();
    }
    static void OverrideReturnFromKnotSpaceSequence(int32_t param1, int32_t param2) {
        typedef void (*FnType)(int32_t p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedOverrideReturnFromKnotSpaceSequence")->address);
        return fn(param1, param2);
    }
    static void PlayPlayerVoice(const String& param1) {
        typedef void (*FnType)(const String& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedPlayVoice")->address);
        return fn(param1);
    }
    static void PlayerGetFloorMaterialTypeResource(MaterialTypeResource** param1, int32_t* param2) {
        typedef void (*FnType)(MaterialTypeResource** p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetFloorMaterialTypeResource")->address);
        return fn(param1, param2);
    }
    static void PlayerVehicleIsOnRoad(bool* param1) {
        typedef void (*FnType)(bool* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetVehicleIsOnRoad")->address);
        return fn(param1);
    }
    static void PopWorldTransform() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedPopWorldTransform")->address);
        return fn();
    }
    static void PopWorldTransformAtEndOfSequence() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedPopWorldTransformAtEndOfSequence")->address);
        return fn();
    }
    static void PrepareToDeliverMama(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedPrepareToDeliverMama")->address);
        return fn(param1);
    }
    static void PushWorldTransform() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedPushWorldTransform")->address);
        return fn();
    }
    static void ReadyCryptobiosisOfReturningFromKnotSpace() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedReadyCryptobiosisOfReturningFromKnotSpace")->address);
        return fn();
    }
    static void RecoverBattery() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRecoverBattery")->address);
        return fn();
    }
    static void RecoverFull(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRecoverFull")->address);
        return fn(param1);
    }
    static void RecoverOrSupplyShoes() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRecoverOrSupplyShoes")->address);
        return fn();
    }
    static void RegisterActionIconInfo(const WorldTransform& param1, uint32_t param2, EDSPadGameButtonType param3, EDSUIActionLocalizedId param4, uint32_t param5, bool param6) {
        typedef void (*FnType)(const WorldTransform& p1, uint32_t p2, EDSPadGameButtonType p3, EDSUIActionLocalizedId p4, uint32_t p5, bool p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRegisterActionIconInfo")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void RegisterMissionMessageEvent(int32_t param1, EDSPlayerMissionMessageEventType param2, uint64_t param3, int32_t param4, int32_t param5, int32_t param6, int32_t param7) {
        typedef void (*FnType)(int32_t p1, EDSPlayerMissionMessageEventType p2, uint64_t p3, int32_t p4, int32_t p5, int32_t p6, int32_t p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRegisterMissionMessageEvent")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void RemoveOdradekReactionPoint(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRemoveOdradekReactionPoint")->address);
        return fn(param1);
    }
    static void RemoveWeapon(EDSWeaponId param1) {
        typedef void (*FnType)(EDSWeaponId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRemoveWeapon")->address);
        return fn(param1);
    }
    static bool RequestBBPodBagCry() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRequestBBPodBagCry")->address);
        return fn();
    }
    static void RequestMoveTo(const WorldTransform& param1, EDSPlayerMoveTypeExported param2, EDSPlayerStanceExported param3, int32_t param4, int32_t param5, float param6, uint64_t param7) {
        typedef void (*FnType)(const WorldTransform& p1, EDSPlayerMoveTypeExported p2, EDSPlayerStanceExported p3, int32_t p4, int32_t p5, float p6, uint64_t p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRequestMoveTo")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void ResetHoodAndBalloon() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedResetHoodAndBalloon")->address);
        return fn();
    }
    static void ResetOverrideBlackSamPointGroupName() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedResetOverrideBlackSamPointGroupName")->address);
        return fn();
    }
    static void ResetPlayerPadMask(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedResetFunctionMask")->address);
        return fn(param1);
    }
    static void RideOffVehicleForcibly() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRideOffVehicleForcibly")->address);
        return fn();
    }
    static void SendDSPlayerMessage(uint32_t param1, int32_t param2, float param3, const WorldTransform& param4, const Vec3& param5) {
        typedef void (*FnType)(uint32_t p1, int32_t p2, float p3, const WorldTransform& p4, const Vec3& p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSendDSPlayerMessage")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void SetAmountOfWaterInBottle(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetAmountOfWaterInBottle")->address);
        return fn(param1);
    }
    static void SetBBAffectionPointForDebugEntry(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetBBAffectionPointForDebugEntry")->address);
        return fn(param1);
    }
    static void SetBBStressByRate(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetBBStressByRate")->address);
        return fn(param1);
    }
    static void SetChiralCrystalCount(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetChiralCrystalCount")->address);
        return fn(param1);
    }
    static void SetDeath(bool param1, const WorldTransform& param2) {
        typedef void (*FnType)(bool p1, const WorldTransform& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetDeath")->address);
        return fn(param1, param2);
    }
    static void SetHiggsPhase3Transform(const WorldTransform& param1) {
        typedef void (*FnType)(const WorldTransform& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetHiggsPhase3Transform")->address);
        return fn(param1);
    }
    static void SetHighPrioReturnTransformAfterAnnihilationAttack(const WorldTransform& param1) {
        typedef void (*FnType)(const WorldTransform& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetHighPrioReturnTransformAfterAnnihilationAttack")->address);
        return fn(param1);
    }
    static void SetInitialState(int32_t param1, const GGUUID& param2, const WorldTransform& param3, float param4, float param5) {
        typedef void (*FnType)(int32_t p1, const GGUUID& p2, const WorldTransform& p3, float p4, float p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetInitialState")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void SetOdradekStateAfterSequence(int32_t param1, int32_t param2) {
        typedef void (*FnType)(int32_t p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetOdradekStateAfterSequence")->address);
        return fn(param1, param2);
    }
    static void SetOverrideBlackSamPointGroupName(const String& param1) {
        typedef void (*FnType)(const String& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetOverrideBlackSamPointGroupName")->address);
        return fn(param1);
    }
    static void SetPlayerPadMask(uint32_t param1, bool param2, const DSPlayerPadCheckBoxes& param3) {
        typedef void (*FnType)(uint32_t p1, bool p2, const DSPlayerPadCheckBoxes& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetFunctionMask")->address);
        return fn(param1, param2, param3);
    }
    static void SetShoesForcibly(EDSPlayerShoesType param1) {
        typedef void (*FnType)(EDSPlayerShoesType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetShoesForcibly")->address);
        return fn(param1);
    }
    static void SetShoesLife(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetShoesLife")->address);
        return fn(param1);
    }
    static void SetShoesLifeByRate(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetShoesLifeByRate")->address);
        return fn(param1);
    }
    static void SetStateAfterSequence(int32_t param1, const WorldTransform& param2, const GGUUID& param3, int32_t param4) {
        typedef void (*FnType)(int32_t p1, const WorldTransform& p2, const GGUUID& p3, int32_t p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetStateAfterSequence")->address);
        return fn(param1, param2, param3, param4);
    }
    static void StartConstructionCheck(float param1, EDSConstructionPointCategory param2) {
        typedef void (*FnType)(float p1, EDSConstructionPointCategory p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedStartConstructionCheck")->address);
        return fn(param1, param2);
    }
    static void StartGhostAction() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedStartGhostAction")->address);
        return fn();
    }
    static void StartSignboardCheck(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedStartSignboardCheck")->address);
        return fn(param1);
    }
    static void UnequipAccessories() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedUnequipAccessories")->address);
        return fn();
    }
    static void UnregisterActionIconInfo(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedUnregisterActionIconInfo")->address);
        return fn(param1);
    }
    static void UnregisterMissionMessageEvent(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedUnregisterMissionMessageEvent")->address);
        return fn(param1);
    }
};

struct DSMissionSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static const DSMissionInfo* FindMissionInfoFromId(uint64_t param1) {
        typedef const DSMissionInfo* (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSystem_sExportedFindMissionInfoFromId")->address);
        return fn(param1);
    }
    static Array_cptr_DSDeliveryPointInfoResource GetDeliveryPointInfoResources() {
        typedef Array_cptr_DSDeliveryPointInfoResource (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSystem_sExportedGetDeliveryPointInfoResources")->address);
        return fn();
    }
    static void KillOverrideEvaluationActingType() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSystem_DEBUG_ExportedKillOverrideEvaluationActingType")->address);
        return fn();
    }
};

struct DispensableEntityManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void RemoveDispensableEntities(const DispensableCategoryResource* param1) {
        typedef void (*FnType)(const DispensableCategoryResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DispensableEntityManager_sExportedRemoveDispensableEntities")->address);
        return fn(param1);
    }
    static void RemoveDispensableEntitiesInTrigger(const DispensableCategoryResource* param1, const CollisionTrigger* param2) {
        typedef void (*FnType)(const DispensableCategoryResource* p1, const CollisionTrigger* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DispensableEntityManager_sExportedRemoveDispensableEntitiesInTrigger")->address);
        return fn(param1, param2);
    }
};

struct DSDebugPrintString {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void PrintString(const wchar_t* param1, bool param2, bool param3, const FRGBAColor& param4, float param5) {
        typedef void (*FnType)(const wchar_t* p1, bool p2, bool p3, const FRGBAColor& p4, float p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugPrintString_sExportedPrintString")->address);
        return fn(param1, param2, param3, param4, param5);
    }
};

struct DSMissionCheckCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool HasTimerMission(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionCheckCommand_sHasTimerMission")->address);
        return fn(param1);
    }
};

struct AIDirectableAgent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void AddAreaRestriction(const NavMeshArea* param1) {
        typedef void (*FnType)(AIDirectableAgent* self, const NavMeshArea* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedAddAreaRestriction")->address);
        return fn(this, param1);
    }
    void CancelOrders() {
        typedef void (*FnType)(AIDirectableAgent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedCancelOrders")->address);
        return fn(this);
    }
    void ClearAreaRestriction() {
        typedef void (*FnType)(AIDirectableAgent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedClearAreaRestriction")->address);
        return fn(this);
    }
    void EndCommandSequence() {
        typedef void (*FnType)(AIDirectableAgent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedEndCommandSequence")->address);
        return fn(this);
    }
    void HTNFactAddDouble(double param1) {
        typedef void (*FnType)(AIDirectableAgent* self, double p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddDouble")->address);
        return fn(this, param1);
    }
    void HTNFactAddHtnSymbol(const HtnSymbol* param1) {
        typedef void (*FnType)(AIDirectableAgent* self, const HtnSymbol* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddHtnSymbol")->address);
        return fn(this, param1);
    }
    void HTNFactAddInt(int64_t param1) {
        typedef void (*FnType)(AIDirectableAgent* self, int64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddInt")->address);
        return fn(this, param1);
    }
    void HTNFactAddObject(RTTIRefObject* param1) {
        typedef void (*FnType)(AIDirectableAgent* self, RTTIRefObject* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddObject")->address);
        return fn(this, param1);
    }
    void HTNFactAddSymbol(const wchar_t* param1) {
        typedef void (*FnType)(AIDirectableAgent* self, const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddSymbol")->address);
        return fn(this, param1);
    }
    void HTNFactAddSymbols(const wchar_t* param1) {
        typedef void (*FnType)(AIDirectableAgent* self, const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddSymbols")->address);
        return fn(this, param1);
    }
    void HTNFactAddWorldPosition(const WorldPosition& param1) {
        typedef void (*FnType)(AIDirectableAgent* self, const WorldPosition& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddWorldPosition")->address);
        return fn(this, param1);
    }
    void HTNFactBegin() {
        typedef void (*FnType)(AIDirectableAgent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactBegin")->address);
        return fn(this);
    }
    void HTNFactBeginList() {
        typedef void (*FnType)(AIDirectableAgent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactBeginList")->address);
        return fn(this);
    }
    void HTNFactEndList() {
        typedef void (*FnType)(AIDirectableAgent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactEndList")->address);
        return fn(this);
    }
    void HTNFactForget() {
        typedef void (*FnType)(AIDirectableAgent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactForget")->address);
        return fn(this);
    }
    void HTNFactRemember(float param1) {
        typedef void (*FnType)(AIDirectableAgent* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactRemember")->address);
        return fn(this, param1);
    }
    void HTNFactSubmitAsOrder(ECommandPriority param1) {
        typedef void (*FnType)(AIDirectableAgent* self, ECommandPriority p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactSubmitAsOrder")->address);
        return fn(this, param1);
    }
    void RemoveAreaRestriction(const NavMeshArea* param1) {
        typedef void (*FnType)(AIDirectableAgent* self, const NavMeshArea* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedRemoveAreaRestriction")->address);
        return fn(this, param1);
    }
    void SetAreaRestriction(const NavMeshArea* param1) {
        typedef void (*FnType)(AIDirectableAgent* self, const NavMeshArea* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedSetAreaRestriction")->address);
        return fn(this, param1);
    }
    void SetCommandPriority(ECommandPriority param1) {
        typedef void (*FnType)(AIDirectableAgent* self, ECommandPriority p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedSetCommandPriority")->address);
        return fn(this, param1);
    }
    void StartCommandSequence() {
        typedef void (*FnType)(AIDirectableAgent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedStartCommandSequence")->address);
        return fn(this);
    }
};

struct NodeGraph {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void Alert(const wchar_t* param1, bool param2) {
        typedef void (*FnType)(const wchar_t* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnNodeGraphAlert")->address);
        return fn(param1, param2);
    }
    static void AlertWithName(const wchar_t* param1, const wchar_t* param2, const wchar_t* param3, bool param4) {
        typedef void (*FnType)(const wchar_t* p1, const wchar_t* p2, const wchar_t* p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnNodeGraphAlertWithName")->address);
        return fn(param1, param2, param3, param4);
    }
    static void Assert(const GGUUID& param1, const wchar_t* param2, const wchar_t* param3) {
        typedef void (*FnType)(const GGUUID& p1, const wchar_t* p2, const wchar_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnNodeGraphAssert")->address);
        return fn(param1, param2, param3);
    }
    static void FlushIntermediateOutputProbes(const uint64_t* param1, int32_t param2, const void* param3, const void* param4) {
        typedef void (*FnType)(const uint64_t* p1, int32_t p2, const void* p3, const void* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sFlushIntermediateOutputProbes")->address);
        return fn(param1, param2, param3, param4);
    }
    static const GGUUID& GetObjectUUID(const RTTIRefObject* param1) {
        typedef const GGUUID& (*FnType)(const RTTIRefObject* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gGetNodeGraphObjectUUID")->address);
        return fn(param1);
    }
    static void* InstantiateRTTI(const RTTI* param1) {
        typedef void* (*FnType)(const RTTI* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sInstantiateRTTI")->address);
        return fn(param1);
    }
    static bool IsProfiling() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sIsProfiling")->address);
        return fn();
    }
    static void MarkBeginNode(const wchar_t* param1, const uint64_t* param2, int32_t param3, const void* param4, const void* param5) {
        typedef void (*FnType)(const wchar_t* p1, const uint64_t* p2, int32_t p3, const void* p4, const void* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sMarkBeginNode")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void MarkEndNode(const uint64_t* param1, int32_t param2, const void* param3, const void* param4) {
        typedef void (*FnType)(const uint64_t* p1, int32_t p2, const void* p3, const void* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sMarkEndNode")->address);
        return fn(param1, param2, param3, param4);
    }
    static void OnStateMachineStateProbe(const uint64_t* param1, uint32_t param2) {
        typedef void (*FnType)(const uint64_t* p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnStateMachineStateProbe")->address);
        return fn(param1, param2);
    }
    static void OnStateMachineStateTransition(const uint64_t* param1, uint32_t param2, uint32_t param3, uint32_t param4) {
        typedef void (*FnType)(const uint64_t* p1, uint32_t p2, uint32_t p3, uint32_t p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnStateMachineStateTransition")->address);
        return fn(param1, param2, param3, param4);
    }
    static void Trace(const GGUUID& param1, const wchar_t* param2) {
        typedef void (*FnType)(const GGUUID& p1, const wchar_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnNodeGraphTrace")->address);
        return fn(param1, param2);
    }
};

struct DSFixedGunGameActorLocator {
    // members
    uint8_t m_pad[0x0];
    // functions
    void DestroyFixedGun(int32_t param1) {
        typedef void (*FnType)(DSFixedGunGameActorLocator* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFixedGunGameActorLocator_ExportedDestroy")->address);
        return fn(this, param1);
    }
    void HideFixedGun() {
        typedef void (*FnType)(DSFixedGunGameActorLocator* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFixedGunGameActorLocator_ExportedHide")->address);
        return fn(this);
    }
    void ResetFixedGun() {
        typedef void (*FnType)(DSFixedGunGameActorLocator* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFixedGunGameActorLocator_ExportedReset")->address);
        return fn(this);
    }
    void ShowFixedGun() {
        typedef void (*FnType)(DSFixedGunGameActorLocator* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFixedGunGameActorLocator_ExportedShow")->address);
        return fn(this);
    }
};

struct UDSSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static UDSEventMechanicUse* MechanicUse(const String& param1) {
        typedef UDSEventMechanicUse* (*FnType)(const String& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventMechanicUse")->address);
        return fn(param1);
    }
    static UDSEventSetFloatStat* SetFloatStat(const String& param1, float param2) {
        typedef UDSEventSetFloatStat* (*FnType)(const String& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetFloatStat")->address);
        return fn(param1, param2);
    }
    static UDSEventSetIntStat* SetIntStat(const String& param1, int32_t param2) {
        typedef UDSEventSetIntStat* (*FnType)(const String& p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetIntStat")->address);
        return fn(param1, param2);
    }
    static UDSEventSetFloatStat* SetTrophyFloatStat(const GGUUID& param1, float param2) {
        typedef UDSEventSetFloatStat* (*FnType)(const GGUUID& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetTrophyFloatStat")->address);
        return fn(param1, param2);
    }
    static UDSEventSetIntStat* SetTrophyIntStat(const GGUUID& param1, int32_t param2) {
        typedef UDSEventSetIntStat* (*FnType)(const GGUUID& p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetTrophyIntStat")->address);
        return fn(param1, param2);
    }
    static UDSEventSetUintStat* SetTrophyUintStat(const GGUUID& param1, uint32_t param2) {
        typedef UDSEventSetUintStat* (*FnType)(const GGUUID& p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetTrophyUintStat")->address);
        return fn(param1, param2);
    }
    static UDSEventSetUintStat* SetUintStat(const String& param1, uint32_t param2) {
        typedef UDSEventSetUintStat* (*FnType)(const String& p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetUintStat")->address);
        return fn(param1, param2);
    }
};

struct AnimationManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    int32_t GetAnimationEventID(const wchar_t* param1) {
        typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetAnimationEventID")->address);
        return fn(this, param1);
    }
    int32_t GetAnimationTagID(const wchar_t* param1) {
        typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetAnimationTagID")->address);
        return fn(this, param1);
    }
    bool GetBoolAnimationVariable(int32_t param1) {
        typedef bool (*FnType)(AnimationManager* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetBoolAnimationVariable")->address);
        return fn(this, param1);
    }
    float GetFloatAnimationVariable(int32_t param1) {
        typedef float (*FnType)(AnimationManager* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetFloatAnimationVariable")->address);
        return fn(this, param1);
    }
    Vec3 GetVec3AnimationVariable(int32_t param1) {
        typedef Vec3 (*FnType)(AnimationManager* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetVec3AnimationVariable")->address);
        return fn(this, param1);
    }
    Vec4 GetVec4AnimationVariable(int32_t param1) {
        typedef Vec4 (*FnType)(AnimationManager* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetVec4AnimationVariable")->address);
        return fn(this, param1);
    }
    int32_t InitBoolAnimationVariable(const wchar_t* param1) {
        typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedInitBoolAnimationVariable")->address);
        return fn(this, param1);
    }
    int32_t InitFloatAnimationVariable(const wchar_t* param1) {
        typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedInitFloatAnimationVariable")->address);
        return fn(this, param1);
    }
    int32_t InitVec3AnimationVariable(const wchar_t* param1) {
        typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedInitVec3AnimationVariable")->address);
        return fn(this, param1);
    }
    int32_t InitVec4AnimationVariable(const wchar_t* param1) {
        typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedInitVec4AnimationVariable")->address);
        return fn(this, param1);
    }
    bool IsEventActive(int32_t param1, float* param2) {
        typedef bool (*FnType)(AnimationManager* self, int32_t p1, float* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedIsEventActive")->address);
        return fn(this, param1, param2);
    }
    bool IsTagActive(int32_t param1) {
        typedef bool (*FnType)(AnimationManager* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedIsTagActive")->address);
        return fn(this, param1);
    }
    void SetBoolAnimationVariable(int32_t param1, bool param2) {
        typedef void (*FnType)(AnimationManager* self, int32_t p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedSetBoolAnimationVariable")->address);
        return fn(this, param1, param2);
    }
    void SetFloatAnimationVariable(int32_t param1, float param2) {
        typedef void (*FnType)(AnimationManager* self, int32_t p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedSetFloatAnimationVariable")->address);
        return fn(this, param1, param2);
    }
    void SetVec3AnimationVariable(int32_t param1, const Vec3& param2) {
        typedef void (*FnType)(AnimationManager* self, int32_t p1, const Vec3& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedSetVec3AnimationVariable")->address);
        return fn(this, param1, param2);
    }
    void SetVec4AnimationVariable(int32_t param1, const Vec4& param2) {
        typedef void (*FnType)(AnimationManager* self, int32_t p1, const Vec4& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedSetVec4AnimationVariable")->address);
        return fn(this, param1, param2);
    }
    void TriggerBoolAnimationVariable(int32_t param1, float param2) {
        typedef void (*FnType)(AnimationManager* self, int32_t p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedTriggerBoolAnimationVariable")->address);
        return fn(this, param1, param2);
    }
};

struct EnvironmentSoundManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GetSpawnedInstanceCount(SpawnSoundNodeState* param1, int32_t* param2) {
        typedef void (*FnType)(SpawnSoundNodeState* p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sGetSpawnedInstanceCount")->address);
        return fn(param1, param2);
    }
    static void SetSpawnedSoundBoolParameter(SpawnSoundNodeState* param1, const wchar_t* param2, bool param3) {
        typedef void (*FnType)(SpawnSoundNodeState* p1, const wchar_t* p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sSetSpawnedSoundParameter<bool>")->address);
        return fn(param1, param2, param3);
    }
    static void SetSpawnedSoundFloatParameter(SpawnSoundNodeState* param1, const wchar_t* param2, float param3) {
        typedef void (*FnType)(SpawnSoundNodeState* p1, const wchar_t* p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sSetSpawnedSoundParameter<float>")->address);
        return fn(param1, param2, param3);
    }
    static void SetSpawnedSoundIntParameter(SpawnSoundNodeState* param1, const wchar_t* param2, int32_t param3) {
        typedef void (*FnType)(SpawnSoundNodeState* p1, const wchar_t* p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sSetSpawnedSoundParameter<int>")->address);
        return fn(param1, param2, param3);
    }
    static void SetSpawnedSoundPressureLevel(SpawnSoundNodeState* param1, const SoundResource* param2, float param3) {
        typedef void (*FnType)(SpawnSoundNodeState* p1, const SoundResource* p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sSetSpawnedSoundPressureLevel")->address);
        return fn(param1, param2, param3);
    }
    static void SpawnSoundUpdate(const SoundResource* param1, const WorldPosition& param2, bool param3, bool param4, bool param5, SpawnSoundNodeState* param6) {
        typedef void (*FnType)(const SoundResource* p1, const WorldPosition& p2, bool p3, bool p4, bool p5, SpawnSoundNodeState* p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sSpawnSoundUpdate")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
};

struct DsGameActorCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static Entity* DSGetGameActorEntity(uint32_t param1) {
        typedef Entity* (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorEntity")->address);
        return fn(param1);
    }
    static uint32_t DSGetGameActorIDByEntity(const Entity* param1) {
        typedef uint32_t (*FnType)(const Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorIDByEntity")->address);
        return fn(param1);
    }
    static uint32_t DSGetGameActorIDByLocatorUUID(const GGUUID& param1) {
        typedef uint32_t (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorIDByLocatorUUID")->address);
        return fn(param1);
    }
    static const GGUUID& DSGetGameActorLocatorID(uint32_t param1) {
        typedef const GGUUID& (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorLocatorID")->address);
        return fn(param1);
    }
    static GameActorLODState DSGetGameActorLodState(uint32_t param1, bool* param2) {
        typedef GameActorLODState (*FnType)(uint32_t p1, bool* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorLodState")->address);
        return fn(param1, param2);
    }
    static const WorldPosition DSGetGameActorPosition(uint32_t param1, bool* param2) {
        typedef const WorldPosition (*FnType)(uint32_t p1, bool* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorPosition")->address);
        return fn(param1, param2);
    }
    static const WorldTransform DSGetGameActorTransform(uint32_t param1, bool* param2) {
        typedef const WorldTransform (*FnType)(uint32_t p1, bool* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorTransform")->address);
        return fn(param1, param2);
    }
    static bool DSIsEqualGameActorType(uint32_t param1, EDSGameActorType param2) {
        typedef bool (*FnType)(uint32_t p1, EDSGameActorType p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedIsEqualGameActorType")->address);
        return fn(param1, param2);
    }
};

struct DSDeliveryPointInfoResource {
    // members
    uint8_t m_pad[0xd8];
    // functions
    static const DSMissionSpecialReportResource* GetSpecialReportOnPlace(const DSDeliveryPointInfoResource* param1) {
        typedef const DSMissionSpecialReportResource* (*FnType)(const DSDeliveryPointInfoResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoResource_GetSpecialReportOnPlace")->address);
        return fn(param1);
    }
    static const WorldPosition& GetWorldPosition(const DSDeliveryPointInfoResource* param1) {
        typedef const WorldPosition& (*FnType)(const DSDeliveryPointInfoResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoResource_GetWorldPosition")->address);
        return fn(param1);
    }
};

struct PlayerOutfitComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ApplyPlayerOutfit(Entity* param1, const GGUUID& param2) {
        typedef void (*FnType)(Entity* p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerOutfitComponent_sExportedApplyPlayerOutfit")->address);
        return fn(param1, param2);
    }
    static void ApplyPlayerOutfitPart(Entity* param1, const GGUUID& param2) {
        typedef void (*FnType)(Entity* p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerOutfitComponent_sExportedApplyPlayerOutfitPart")->address);
        return fn(param1, param2);
    }
    static void SetFacePaint(Entity* param1, const GGUUID& param2) {
        typedef void (*FnType)(Entity* p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerOutfitComponent_sExportedSetFacePaint")->address);
        return fn(param1, param2);
    }
    static void SetPlayerOutfit(Entity* param1, const PlayerOutfitTheme* param2, const PlayerOutfit* param3) {
        typedef void (*FnType)(Entity* p1, const PlayerOutfitTheme* p2, const PlayerOutfit* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerOutfitComponent_sExportedSetPlayerOutfit")->address);
        return fn(param1, param2, param3);
    }
    static void SetShaderEffect(Entity* param1, const GGUUID& param2) {
        typedef void (*FnType)(Entity* p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerOutfitComponent_sExportedSetShaderEffect")->address);
        return fn(param1, param2);
    }
};

struct RopeManagerComponent {
    // members
    uint8_t m_pad[0x1b0];
    // functions
    bool Connect(RopeManagerComponent* param1) {
        typedef bool (*FnType)(RopeManagerComponent* self, RopeManagerComponent* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RopeManagerComponent_ExportedConnect")->address);
        return fn(this, param1);
    }
};

struct DSDataLibraryBasicNode {
    // members
    uint8_t m_pad[0x0];
    // functions
    static int32_t DSGetMusicPlayerPlayingMusicId() {
        typedef int32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSGetMusicPlayerPlayingMusicId")->address);
        return fn();
    }
    static int32_t DSGetTrackIdFromResource(const DSMusicPlayerTrackResource* param1) {
        typedef int32_t (*FnType)(const DSMusicPlayerTrackResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSGetTrackIdFromResource")->address);
        return fn(param1);
    }
    static bool DSIsOpenTips(const DSTipsResourceBase* param1) {
        typedef bool (*FnType)(const DSTipsResourceBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSIsOpenTips")->address);
        return fn(param1);
    }
    static bool DSIsPausedMusicPlayer() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSIsPausedMusicPlayer")->address);
        return fn();
    }
    static void DSOpenMusicPlayerTrack(const DSMusicPlayerTrackResource* param1) {
        typedef void (*FnType)(const DSMusicPlayerTrackResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSOpenMusicPlayerTrack")->address);
        return fn(param1);
    }
    static void DSOpenTips(const DSTipsResourceBase* param1, bool param2, EDSTipsUnlockType param3) {
        typedef void (*FnType)(const DSTipsResourceBase* p1, bool p2, EDSTipsUnlockType p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSOpenTips")->address);
        return fn(param1, param2, param3);
    }
    static void DSOpenTipsByList(const DSTipsResourceList* param1, bool param2, EDSTipsUnlockType param3) {
        typedef void (*FnType)(const DSTipsResourceList* p1, bool p2, EDSTipsUnlockType p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSOpenTipsByList")->address);
        return fn(param1, param2, param3);
    }
    static void DSPauseMusicPlayer() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSPauseMusicPlayer")->address);
        return fn();
    }
    static void DSReserveNextLoadingTips(const DSTipsResourceBase* param1, EDSTipsUnlockType param2) {
        typedef void (*FnType)(const DSTipsResourceBase* p1, EDSTipsUnlockType p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSReserveNextLoadingTips")->address);
        return fn(param1, param2);
    }
    static void DSResumeMusicPlayer() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSResumeMusicPlayer")->address);
        return fn();
    }
    static void DSStopMusicPlayer() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSStopMusicPlayer")->address);
        return fn();
    }
    static bool IsRaceBgmSelectForSound() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSIsRaceBgmSelectForSound")->address);
        return fn();
    }
};

struct AudioPlayerComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void PlayAudioLog(const SentenceGroupResource* param1) {
        typedef void (*FnType)(AudioPlayerComponent* self, const SentenceGroupResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AudioPlayerComponent_ExportedPlayAudioLog")->address);
        return fn(this, param1);
    }
};

struct DamagePassOnComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void Detach() {
        typedef void (*FnType)(DamagePassOnComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DamagePassOnComponent_ExportedDetach")->address);
        return fn(this);
    }
};

struct WorldNode {
    // members
    uint8_t m_pad[0x0];
    // functions
    Mat44 GetOrientation() {
        typedef Mat44 (*FnType)(WorldNode* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldNode_ExportedGetOrientation")->address);
        return fn(this);
    }
    WorldPosition GetPosition() {
        typedef WorldPosition (*FnType)(WorldNode* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldNode_ExportedGetPosition")->address);
        return fn(this);
    }
    WorldTransform GetWorldTransform() {
        typedef WorldTransform (*FnType)(WorldNode* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldNode_ExportedGetWorldTransform")->address);
        return fn(this);
    }
};

struct GameMovie {
    // members
    uint8_t m_pad[0x68];
    // functions
    void PlayMovie(const MovieResource* param1) {
        typedef void (*FnType)(GameMovie* self, const MovieResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameMovie_ExportedPlayMovie")->address);
        return fn(this, param1);
    }
    void PlayMovieAndTeleport(const MovieResource* param1, const WorldTransform& param2) {
        typedef void (*FnType)(GameMovie* self, const MovieResource* p1, const WorldTransform& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameMovie_ExportedPlayMovieAndTeleport")->address);
        return fn(this, param1, param2);
    }
};

struct TileBasedStreamingStrategyInstance {
    // members
    uint8_t m_pad[0x150];
    // functions
    static void ConvertToTileCoordinates(const WorldPosition& param1, int32_t& param2, int32_t& param3) {
        typedef void (*FnType)(const WorldPosition& p1, int32_t& p2, int32_t& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TileBasedStreamingStrategyInstance_sExportedConvertToTileCoordinates")->address);
        return fn(param1, param2, param3);
    }
    const StreamingTileStateResource* GetTileState(const StreamingTileResource* param1) {
        typedef const StreamingTileStateResource* (*FnType)(TileBasedStreamingStrategyInstance* self, const StreamingTileResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TileBasedStreamingStrategyInstance_ExportedGetTileState")->address);
        return fn(this, param1);
    }
    void HintTileState(const StreamingTileResource* param1, const StreamingTileStateResource* param2) {
        typedef void (*FnType)(TileBasedStreamingStrategyInstance* self, const StreamingTileResource* p1, const StreamingTileStateResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TileBasedStreamingStrategyInstance_ExportedHintTileState")->address);
        return fn(this, param1, param2);
    }
    void SetHighestLODLevel(const StreamingTileResource* param1, EStreamingLODLevel param2, const RTTIRefObject* param3) {
        typedef void (*FnType)(TileBasedStreamingStrategyInstance* self, const StreamingTileResource* p1, EStreamingLODLevel p2, const RTTIRefObject* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TileBasedStreamingStrategyInstance_ExportedSetHighestLODLevel")->address);
        return fn(this, param1, param2, param3);
    }
    void SetTileState(const StreamingTileResource* param1, const StreamingTileStateResource* param2) {
        typedef void (*FnType)(TileBasedStreamingStrategyInstance* self, const StreamingTileResource* p1, const StreamingTileStateResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TileBasedStreamingStrategyInstance_ExportedSetTileState")->address);
        return fn(this, param1, param2);
    }
};

struct GameModule {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ClearObserverPositionOverride() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedClearObserverPositionOverride")->address);
        return fn();
    }
    static void FadeInAfterSkippingSequence(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedFadeInAfterSkippingSequence")->address);
        return fn(param1);
    }
    static GameMovie& GetGameMovie() {
        typedef GameMovie& (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedGetGameMovie")->address);
        return fn();
    }
    static TileBasedStreamingStrategyInstance* GetTileBasedStreamingStrategy() {
        typedef TileBasedStreamingStrategyInstance* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedGetTileBasedStreamingStrategy")->address);
        return fn();
    }
    static bool IsDLCEnabled(uint32_t param1) {
        typedef bool (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedIsDLCEnabled")->address);
        return fn(param1);
    }
    static bool IsGameLoading() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedIsGameLoading")->address);
        return fn();
    }
    static bool IsNewGamePlus() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedIsNewGamePlus")->address);
        return fn();
    }
    static void QuitGame() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedQuitGame")->address);
        return fn();
    }
    static void ReloadLastSaveGame(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedReloadLastSaveGame")->address);
        return fn(param1);
    }
    static void RequestWaitForAutobot() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedRequestWaitForAutobot")->address);
        return fn();
    }
    static void ReserveForceExtendedLoadingStateCheck(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedReserveForceExtendedLoadingStateCheck")->address);
        return fn(param1);
    }
    static void SetForceExtendedLoadingStateCheck(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedSetForceExtendedLoadingStateCheck")->address);
        return fn(param1);
    }
    static void SetLoadingPauseEnabled(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedSetLoadingPauseEnabled")->address);
        return fn(param1);
    }
    static void SetObserverPositionOverride(const WorldPosition& param1) {
        typedef void (*FnType)(const WorldPosition& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedSetObserverPositionOverride")->address);
        return fn(param1);
    }
};

struct CrowdSpawnManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ForceCrowdHighLod(const CrowdZone* param1, bool param2) {
        typedef void (*FnType)(const CrowdZone* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CrowdSpawnManager_sExportedForceCrowdHighLod")->address);
        return fn(param1, param2);
    }
    static bool IsInHighLod(const CrowdZone* param1) {
        typedef bool (*FnType)(const CrowdZone* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CrowdSpawnManager_sExportedIsInHighLod")->address);
        return fn(param1);
    }
};

struct AIBehaviorGroup {
    // members
    uint8_t m_pad[0x120];
    // functions
    void AddMember(Entity* param1) {
        typedef void (*FnType)(AIBehaviorGroup* self, Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedAddMember")->address);
        return fn(this, param1);
    }
    AIGroup* GetAI() {
        typedef AIGroup* (*FnType)(AIBehaviorGroup* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedGetAI")->address);
        return fn(this);
    }
    int32_t GetAliveMemberCount() {
        typedef int32_t (*FnType)(AIBehaviorGroup* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedGetAliveMemberCount")->address);
        return fn(this);
    }
    Array_cptr_Entity GetAliveMembers() {
        typedef Array_cptr_Entity (*FnType)(AIBehaviorGroup* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedGetAliveMembers")->address);
        return fn(this);
    }
    Entity* GetMember(int32_t param1, bool param2) {
        typedef Entity* (*FnType)(AIBehaviorGroup* self, int32_t p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedGetMember")->address);
        return fn(this, param1, param2);
    }
    const Entity* GetMemberByTag(TagProperty* param1) {
        typedef const Entity* (*FnType)(AIBehaviorGroup* self, TagProperty* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedGetMemberByTag")->address);
        return fn(this, param1);
    }
    int32_t GetMemberCount() {
        typedef int32_t (*FnType)(AIBehaviorGroup* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedGetMemberCount")->address);
        return fn(this);
    }
    void RefillGroup() {
        typedef void (*FnType)(AIBehaviorGroup* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedRefillGroup")->address);
        return fn(this);
    }
    void RemoveGroup() {
        typedef void (*FnType)(AIBehaviorGroup* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedRemoveGroup")->address);
        return fn(this);
    }
    void SetFaction(AIFaction* param1) {
        typedef void (*FnType)(AIBehaviorGroup* self, AIFaction* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedSetFaction")->address);
        return fn(this, param1);
    }
    void Spawn() {
        typedef void (*FnType)(AIBehaviorGroup* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedSpawn")->address);
        return fn(this);
    }
};

struct VoiceComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void SetVoice(Entity* param1, const VoiceResource* param2) {
        typedef void (*FnType)(Entity* p1, const VoiceResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VoiceComponent_sExportedSetVoice")->address);
        return fn(param1, param2);
    }
};

struct CoreTelemetryService {
    // members
    uint8_t m_pad[0x1b8];
    // functions
    RTTIRefObject* CreateTelemetryEvent(const RTTIHandleObject* param1) {
        typedef RTTIRefObject* (*FnType)(CoreTelemetryService* self, const RTTIHandleObject* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CoreTelemetryService_ExportedCreateTelemetryEvent")->address);
        return fn(this, param1);
    }
    static CoreTelemetryService* GetTelemetryService() {
        typedef CoreTelemetryService* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CoreTelemetryService_sGetCoreTelemetryService")->address);
        return fn();
    }
    void PostEvent(RTTIRefObject* param1) {
        typedef void (*FnType)(CoreTelemetryService* self, RTTIRefObject* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CoreTelemetryService_ExportedPostEvent")->address);
        return fn(this, param1);
    }
};

struct DSCliffMissionCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static int32_t Cliff_GetEscapeCount(const GGUUID& param1) {
        typedef int32_t (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedGetEscapeCount")->address);
        return fn(param1);
    }
    static void Cliff_OverwriteBattlePointInfo(const GGUUID& param1, const RTTIRefObject* param2) {
        typedef void (*FnType)(const GGUUID& p1, const RTTIRefObject* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedOverwriteBattlePointInfo")->address);
        return fn(param1, param2);
    }
    static void Cliff_RequestRollCall(const GGUUID& param1, const RTTIRefObject* param2, float param3) {
        typedef void (*FnType)(const GGUUID& p1, const RTTIRefObject* p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedRequestRollCall")->address);
        return fn(param1, param2, param3);
    }
    static bool Cliff_RequestSummonWarriors(const GGUUID& param1, int32_t param2) {
        typedef bool (*FnType)(const GGUUID& p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedRequestSummonWarriors")->address);
        return fn(param1, param2);
    }
    static void Cliff_SetAlertPhaseOnlySummonWarriorInfo(const GGUUID& param1, Array_uint& param2) {
        typedef void (*FnType)(const GGUUID& p1, Array_uint& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedSetAlertPhaseOnlySummonWarriorInfo")->address);
        return fn(param1, param2);
    }
    static void Cliff_SetNextBattlePoint(const GGUUID& param1, const RTTIRefObject* param2) {
        typedef void (*FnType)(const GGUUID& p1, const RTTIRefObject* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedSetNextBattlePoint")->address);
        return fn(param1, param2);
    }
    static void Cliff_SetSearchPointByLostWarrior(const GGUUID& param1, const RTTIRefObject* param2, float param3) {
        typedef void (*FnType)(const GGUUID& p1, const RTTIRefObject* p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedSetSearchPointByLostWarrior")->address);
        return fn(param1, param2, param3);
    }
    static void Cliff_SetShowCompassMaker(const GGUUID& param1, bool param2) {
        typedef void (*FnType)(const GGUUID& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedSetShowCompassMaker")->address);
        return fn(param1, param2);
    }
    static void Cliff_SetSummonWarriorInfo(const GGUUID& param1, int32_t param2, Array_uint& param3, Array_uint& param4, Array_uint& param5, Array_uint& param6) {
        typedef void (*FnType)(const GGUUID& p1, int32_t p2, Array_uint& p3, Array_uint& p4, Array_uint& p5, Array_uint& p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedSetSummonWarriorInfo")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
};

struct DSCatcherManagerCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static float GetActiveCatcherHealth() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCatcherManagerCommand_sExportedGetActiveCatcherHealth")->address);
        return fn();
    }
    static Entity* GetDemoEntity(uint32_t param1) {
        typedef Entity* (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCatcherManagerCommand_sExportedGetDemoEntity")->address);
        return fn(param1);
    }
};

struct DSDeliveredMemoryChipArgs {
    // members
    uint8_t m_pad[0x0];
    // functions
    EDSMajorMember GetBridgesMember() {
        typedef EDSMajorMember (*FnType)(DSDeliveredMemoryChipArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveredMemoryChipArgs_ExportedGetBridgesMember")->address);
        return fn(this);
    }
    int32_t GetLikeValue() {
        typedef int32_t (*FnType)(DSDeliveredMemoryChipArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveredMemoryChipArgs_ExportedGetLikeValue")->address);
        return fn(this);
    }
};

struct OpenMenuSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void DisableMenuPage(const GGUUID& param1, const PlayerNotificationResource* param2) {
        typedef void (*FnType)(const GGUUID& p1, const PlayerNotificationResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("OpenMenuSystem_sExportedDisableMenuPage")->address);
        return fn(param1, param2);
    }
    static void EnableMenuPage(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("OpenMenuSystem_sExportedEnableMenuPage")->address);
        return fn(param1);
    }
};

struct DSPlayRecordBasicNode {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AddDeathCountForBridgeLink() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddDeathCountForBridgeLink")->address);
        return fn();
    }
    static void AddDiscoveredOnsenNum(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddDiscoveredOnsenNum")->address);
        return fn(param1);
    }
    static void AddShowerNum(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddShowerNum")->address);
        return fn(param1);
    }
    static void AddStayPrivateRoomNum(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddStayPrivateRoomNum")->address);
        return fn(param1);
    }
    static void AddToiletBigNum(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddToiletBigNum")->address);
        return fn(param1);
    }
    static void AddToiletSmallNum(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddToiletSmallNum")->address);
        return fn(param1);
    }
    static void GetComprehensiveEvaluation(float* param1, float* param2, float* param3, float* param4) {
        typedef void (*FnType)(float* p1, float* p2, float* p3, float* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetComprehensiveEvaluation")->address);
        return fn(param1, param2, param3, param4);
    }
    static void GetComprehensiveEvaluationLevel(int32_t* param1, int32_t* param2, int32_t* param3, int32_t* param4) {
        typedef void (*FnType)(int32_t* p1, int32_t* p2, int32_t* p3, int32_t* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetComprehensiveEvaluationLevel")->address);
        return fn(param1, param2, param3, param4);
    }
    static int32_t GetEvaluationPreviousServiceRank() {
        typedef int32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetEvaluationPreviousServiceRank")->address);
        return fn();
    }
    static void GetTotalMovingDistance(float* param1) {
        typedef void (*FnType)(float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetTotalMovingDistance")->address);
        return fn(param1);
    }
    static void GetUserPlayAbsoluteDeltaTimeSeconds(float* param1) {
        typedef void (*FnType)(float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayAbsoluteDeltaTimeSeconds")->address);
        return fn(param1);
    }
    static void GetUserPlayAbsoluteTimeSeconds(float* param1) {
        typedef void (*FnType)(float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayAbsoluteTimeSeconds")->address);
        return fn(param1);
    }
    static void GetUserPlayInGameDeltaTimeSeconds(float* param1) {
        typedef void (*FnType)(float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayInGameDeltaTimeSeconds")->address);
        return fn(param1);
    }
    static void GetUserPlayInGameTimeSeconds(float* param1) {
        typedef void (*FnType)(float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayInGameTimeSeconds")->address);
        return fn(param1);
    }
    static void GetUserPlayMissionDeltaTimeSeconds(float* param1) {
        typedef void (*FnType)(float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayMissionDeltaTimeSeconds")->address);
        return fn(param1);
    }
    static void GetUserPlayMissionTimeSeconds(float* param1) {
        typedef void (*FnType)(float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayMissionTimeSeconds")->address);
        return fn(param1);
    }
    static void ResetAccumulatePlayerDamage() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sResetAccumulatePlayerDamage")->address);
        return fn();
    }
    static void ResetDSMissionPlayLog(uint64_t param1) {
        typedef void (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sResetDSMissionPlayLog")->address);
        return fn(param1);
    }
    static void TimeLapseAtPrivateRoom(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sTimeLapseAtPrivateRoom")->address);
        return fn(param1);
    }
};

struct AIContextHintResource {
    // members
    uint8_t m_pad[0x38];
    // functions
    const HtnSymbol* GetHintSymbol() {
        typedef const HtnSymbol* (*FnType)(AIContextHintResource* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIContextHintResource_ExportedGetHintSymbol")->address);
        return fn(this);
    }
};

struct DSMissionTerminalCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AddMissionBonusToBuffer(uint64_t param1, bool param2, uint8_t param3) {
        typedef void (*FnType)(uint64_t p1, bool p2, uint8_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sAddMissionBonusToBuffer")->address);
        return fn(param1, param2, param3);
    }
    static void AddSimpleBonusToBuffer(const DSGameBaggageListItem* param1) {
        typedef void (*FnType)(const DSGameBaggageListItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sAddSimpleBonusToBuffer")->address);
        return fn(param1);
    }
    static bool CanOrderMissionAtDeliveryPoint(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sCanOrderMissionAtDeliveryPoint")->address);
        return fn(param1);
    }
    static bool CheckDeliveryToNoDemo() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sCheckDeliveryToNoDemo")->address);
        return fn();
    }
    static bool CheckEntrustToNoDemo() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sCheckEntrustToNoDemo")->address);
        return fn();
    }
    static GGUUID DeliveryPointIdToUUID(int32_t param1) {
        typedef GGUUID (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sDeliveryPointIdToUUID")->address);
        return fn(param1);
    }
    static void GetAccessingTerminalId(int32_t* param1) {
        typedef void (*FnType)(int32_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sGetAccessingTerminalId")->address);
        return fn(param1);
    }
    static void GetMissionBonusInfo(uint64_t param1, bool* param2, int32_t* param3) {
        typedef void (*FnType)(uint64_t p1, bool* p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sGetMissionBonusInfo")->address);
        return fn(param1, param2, param3);
    }
    static void HasCanDeliveryBaggage(const GGUUID& param1, bool* param2) {
        typedef void (*FnType)(const GGUUID& p1, bool* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sHasCanDeliveryBaggage")->address);
        return fn(param1, param2);
    }
    static void RemoveDeadbodyBagForCrematorium() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sRemoveDeadbodyBagForCrematorium")->address);
        return fn();
    }
    static void SetStarMarkBonus() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sSetStarMarkBonus")->address);
        return fn();
    }
};

struct BulletTimeComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsInBulletTime() {
        typedef bool (*FnType)(BulletTimeComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BulletTimeComponent_ExportedIsInBulletTime")->address);
        return fn(this);
    }
};

struct DsHiggsGraphCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void Higgs_SetInitialPhase(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsHiggsGraphCommand_sExportedSetInitialPhase")->address);
        return fn(param1);
    }
};

struct DSMailBasicNode {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void FindMailStatus(const GGUUID& param1, EDSMailInfoStatus* param2) {
        typedef void (*FnType)(const GGUUID& p1, EDSMailInfoStatus* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMailBasicNode_sFindMailStatus")->address);
        return fn(param1, param2);
    }
    static void RequestAllMailRecive() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMailBasicNode_sRequestAllMailRecive")->address);
        return fn();
    }
    static void RequestMailSending(const GGUUID& param1, bool param2, bool param3) {
        typedef void (*FnType)(const GGUUID& p1, bool p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMailBasicNode_sRequestMailSending")->address);
        return fn(param1, param2, param3);
    }
};

struct DSMissionMiscCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ChangePathRecordStraightMode(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sChangePathRecordStraightMode")->address);
        return fn(param1);
    }
    static void DSNotifyEndInGameSequence(const DSStringHashResource* param1) {
        typedef void (*FnType)(const DSStringHashResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyEndInGameSequence")->address);
        return fn(param1);
    }
    static void DSNotifyEndSequence(const DSStringHashResource* param1) {
        typedef void (*FnType)(const DSStringHashResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyEndSequence")->address);
        return fn(param1);
    }
    static void DSNotifyStartInGameSequence(const DSStringHashResource* param1, EDSCutsceneStateAttr param2) {
        typedef void (*FnType)(const DSStringHashResource* p1, EDSCutsceneStateAttr p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyStartInGameSequence")->address);
        return fn(param1, param2);
    }
    static void DSNotifyStartSequence(const DSStringHashResource* param1, EDSCutsceneStateAttr param2) {
        typedef void (*FnType)(const DSStringHashResource* p1, EDSCutsceneStateAttr p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyStartSequence")->address);
        return fn(param1, param2);
    }
    static void DisposalOnlineMissionsInTargetCPArea(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sDisposalOnlineMissionsInTargetCPArea")->address);
        return fn(param1);
    }
    static void GetHeartmanRoomBlackBoardFromCpp(int32_t* param1, int32_t* param2, int32_t* param3, bool* param4) {
        typedef void (*FnType)(int32_t* p1, int32_t* p2, int32_t* p3, bool* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sGetHeartmanRoomBlackBoardFromCpp")->address);
        return fn(param1, param2, param3, param4);
    }
    static void GetPrivateRoomBlackBoardFromCpp(int32_t* param1, int32_t* param2, int32_t* param3, bool* param4) {
        typedef void (*FnType)(int32_t* p1, int32_t* p2, int32_t* p3, bool* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sGetPrivateRoomBlackBoardFromCpp")->address);
        return fn(param1, param2, param3, param4);
    }
    static void NotifyBeatBoss(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyBeatBoss")->address);
        return fn(param1);
    }
    static void NotifyBossBattle(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyBossBattle")->address);
        return fn(param1);
    }
    static void NotifyDirectIntoPrivateRoom(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyDirectIntoPrivateRoom")->address);
        return fn(param1);
    }
    static void NotifyStartSequenceToFillGap(uint8_t param1) {
        typedef void (*FnType)(uint8_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyStartSequenceToFillGap")->address);
        return fn(param1);
    }
    static void NotifyStayPrivateRoom(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyStayPrivateRoom")->address);
        return fn(param1);
    }
    static void RequestLoadingScreen() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sRequestLoadingScreen")->address);
        return fn();
    }
    static void SetHeartmanRoomBlackBoard(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) {
        typedef void (*FnType)(int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sSetHeartmanRoomBlackBoard")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void SetPrivateRoomBlackBoard(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) {
        typedef void (*FnType)(int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sSetPrivateRoomBlackBoard")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void SwitchSection(const DSMissionSwitchSectionSetting* param1) {
        typedef void (*FnType)(const DSMissionSwitchSectionSetting* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sSwitchSection")->address);
        return fn(param1);
    }
};

struct InventoryItem {
    // members
    uint8_t m_pad[0x78];
    // functions
    String GetDisplayName() {
        typedef String (*FnType)(InventoryItem* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryItem_ExportedGetDisplayName")->address);
        return fn(this);
    }
    int32_t GetInventoryItemAmount() {
        typedef int32_t (*FnType)(InventoryItem* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryItem_ExportedGetAmount")->address);
        return fn(this);
    }
    EInventoryCategory GetInventoryItemCategory() {
        typedef EInventoryCategory (*FnType)(InventoryItem* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryItem_ExportedGetCategory")->address);
        return fn(this);
    }
    Entity* GetInventoryItemEntity() {
        typedef Entity* (*FnType)(InventoryItem* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryItem_ExportedGetEntity")->address);
        return fn(this);
    }
    Entity* GetInventoryItemOwner() {
        typedef Entity* (*FnType)(InventoryItem* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryItem_ExportedGetOwner")->address);
        return fn(this);
    }
    EInventoryItemRarity GetInventoryItemRarity() {
        typedef EInventoryItemRarity (*FnType)(InventoryItem* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryItem_ExportedGetRarity")->address);
        return fn(this);
    }
    const EntityResource* GetInventoryItemResource() {
        typedef const EntityResource* (*FnType)(InventoryItem* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryItem_ExportedGetItemResource")->address);
        return fn(this);
    }
    bool IsQuestItem() {
        typedef bool (*FnType)(InventoryItem* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryItem_ExportedIsQuestItem")->address);
        return fn(this);
    }
};

struct Inventory {
    // members
    uint8_t m_pad[0x88];
    // functions
    InventoryItem* AddItem(const EntityResource* param1, int32_t param2, bool param3, bool param4) {
        typedef InventoryItem* (*FnType)(Inventory* self, const EntityResource* p1, int32_t p2, bool p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Inventory_ExportedAddItem")->address);
        return fn(this, param1, param2, param3, param4);
    }
    int32_t GetItemAmount(const EntityResource* param1) {
        typedef int32_t (*FnType)(Inventory* self, const EntityResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Inventory_ExportedGetItemAmount")->address);
        return fn(this, param1);
    }
    Array_cptr_InventoryItem GetItems(const EntityResource* param1) {
        typedef Array_cptr_InventoryItem (*FnType)(Inventory* self, const EntityResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Inventory_ExportedGetItems")->address);
        return fn(this, param1);
    }
    void RemoveAllItems() {
        typedef void (*FnType)(Inventory* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Inventory_ExportedRemoveAllItems")->address);
        return fn(this);
    }
    bool RemoveItem(const EntityResource* param1, int32_t param2, bool param3, bool param4) {
        typedef bool (*FnType)(Inventory* self, const EntityResource* p1, int32_t p2, bool p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Inventory_ExportedRemoveItem")->address);
        return fn(this, param1, param2, param3, param4);
    }
};

struct AttachToHelperPositionMover {
    // members
    uint8_t m_pad[0x180];
    // functions
    static AttachToHelperPositionMover* Create(Entity* param1, const String& param2, const Vec3& param3) {
        typedef AttachToHelperPositionMover* (*FnType)(Entity* p1, const String& p2, const Vec3& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachToHelperPositionMover_sExportedCreate")->address);
        return fn(param1, param2, param3);
    }
};

struct DSBaggage2Manager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AddBaggageToDeliveryPoint(int32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3) {
        typedef void (*FnType)(int32_t p1, EDSBaggage2SlotType p2, const GGUUID& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedAddBaggageToDeliveryPoint")->address);
        return fn(param1, param2, param3);
    }
    static void AddBaggageToPlayer(uint32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3, bool param4) {
        typedef void (*FnType)(uint32_t p1, EDSBaggage2SlotType p2, const GGUUID& p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedAddBaggageToPlayer")->address);
        return fn(param1, param2, param3, param4);
    }
    static void AddBaggageToPlayerByGameActorId(uint32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3, bool param4) {
        typedef void (*FnType)(uint32_t p1, EDSBaggage2SlotType p2, const GGUUID& p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedAddBaggageToPlayerByGameActorId")->address);
        return fn(param1, param2, param3, param4);
    }
    static void AddBaggageToTemporaryList(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedAddBaggageToTemporaryList")->address);
        return fn(param1);
    }
    static void AddBaggagesToTemporaryList(Array_int& param1) {
        typedef void (*FnType)(Array_int& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedAddBaggagesToTemporaryList")->address);
        return fn(param1);
    }
    static void BreakBaggage(int32_t param1, bool param2, bool param3, const Vec3& param4) {
        typedef void (*FnType)(int32_t p1, bool p2, bool p3, const Vec3& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedBreakBaggage")->address);
        return fn(param1, param2, param3, param4);
    }
    static void ClearTemporaryList() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedClearTemporaryList")->address);
        return fn();
    }
    static void CreateAndAddBaggageToDeliveryPoint(int32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3) {
        typedef void (*FnType)(int32_t p1, EDSBaggage2SlotType p2, const GGUUID& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedCreateAndAddBaggageToDeliveryPoint")->address);
        return fn(param1, param2, param3);
    }
    static void CreateAndAddBaggageToPlayer(uint32_t param1, EDSBaggage2SlotType param2) {
        typedef void (*FnType)(uint32_t p1, EDSBaggage2SlotType p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedCreateAndAddBaggageToPlayer")->address);
        return fn(param1, param2);
    }
    static void CreateBaggage(uint32_t param1, const WorldTransform& param2) {
        typedef void (*FnType)(uint32_t p1, const WorldTransform& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedCreateBaggage")->address);
        return fn(param1, param2);
    }
    static void DeleteBaggage(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedDeleteBaggage")->address);
        return fn(param1);
    }
    static void DeleteDeliveredBaggages() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedDeleteDeliveredBaggages")->address);
        return fn();
    }
    static bool DoesExistBaggageWithName(uint32_t param1) {
        typedef bool (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedDoesExistBaggageWithName")->address);
        return fn(param1);
    }
    static void ExtractBaggageInfo(int32_t param1, uint64_t* param2, int32_t* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, int32_t* param9, int32_t* param10, bool* param11, int32_t* param12, int32_t* param13, int32_t* param14, EDSBaggage2CarrierType* param15, WorldPosition* param16, EDSBaggage2SlotType* param17, int32_t* param18, EDSWeaponId* param19, EDSItemId* param20, EDSGameBaggageListItem_Volume* param21, EDSGameBaggageListItem_BaggageCaseType* param22) {
        typedef void (*FnType)(int32_t p1, uint64_t* p2, int32_t* p3, bool* p4, bool* p5, bool* p6, bool* p7, bool* p8, int32_t* p9, int32_t* p10, bool* p11, int32_t* p12, int32_t* p13, int32_t* p14, EDSBaggage2CarrierType* p15, WorldPosition* p16, EDSBaggage2SlotType* p17, int32_t* p18, EDSWeaponId* p19, EDSItemId* p20, EDSGameBaggageListItem_Volume* p21, EDSGameBaggageListItem_BaggageCaseType* p22);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedExtractBaggageInfo")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21, param22);
    }
    static void GetAllBaggages(int32_t param1, Array_int* param2, bool param3, bool param4) {
        typedef void (*FnType)(int32_t p1, Array_int* p2, bool p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetAllBaggages")->address);
        return fn(param1, param2, param3, param4);
    }
    static void GetBaggageParameterBool(int32_t param1, uint32_t param2, bool* param3) {
        typedef void (*FnType)(int32_t p1, uint32_t p2, bool* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetBaggageParameterBool")->address);
        return fn(param1, param2, param3);
    }
    static void GetBaggagesInCollisionTrigger(const CollisionTrigger* param1, bool param2, Array_int* param3) {
        typedef void (*FnType)(const CollisionTrigger* p1, bool p2, Array_int* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetBaggagesInCollisionTrigger")->address);
        return fn(param1, param2, param3);
    }
    static void GetBaggagesInRange(const WorldPosition& param1, float param2, Array_int* param3) {
        typedef void (*FnType)(const WorldPosition& p1, float p2, Array_int* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetBaggagesInRange")->address);
        return fn(param1, param2, param3);
    }
    static void GetBaggagesInTerminalArea(uint32_t param1, bool param2, bool param3, Array_int* param4) {
        typedef void (*FnType)(uint32_t p1, bool p2, bool p3, Array_int* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetBaggagesInTerminalArea")->address);
        return fn(param1, param2, param3, param4);
    }
    static void GetDistanceFromBaggageToPlayer(uint32_t param1, float* param2) {
        typedef void (*FnType)(uint32_t p1, float* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetDistanceFromBaggageToPlayer")->address);
        return fn(param1, param2);
    }
    static void GetGameActorIdFromBaggageName(uint32_t param1, int32_t* param2) {
        typedef void (*FnType)(uint32_t p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetGameActorIdFromBaggageName")->address);
        return fn(param1, param2);
    }
    static void GetMaterialCountFromBaggageActorIdArray(Array_int& param1, int32_t* param2) {
        typedef void (*FnType)(Array_int& p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetMaterialCountFromBaggageActorIdArray")->address);
        return fn(param1, param2);
    }
    static void GetNoDraggedCartInCollisionTrigger(const CollisionTrigger* param1, Array_int* param2) {
        typedef void (*FnType)(const CollisionTrigger* p1, Array_int* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetNoDraggedCartInCollisionTrigger")->address);
        return fn(param1, param2);
    }
    static void MoveBaggageToPlayer(uint32_t param1, EDSBaggage2SlotType param2) {
        typedef void (*FnType)(uint32_t p1, EDSBaggage2SlotType p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedMoveBaggageToPlayer")->address);
        return fn(param1, param2);
    }
    static void MoveBaggagesWithTerminalShelf(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedMoveBaggagesWithTerminalShelf")->address);
        return fn(param1);
    }
    static void MoveDeliveredBaggagesWithTerminalShelf(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedMoveDeliveredBaggagesWithTerminalShelf")->address);
        return fn(param1);
    }
    static void PlaceTemporaryListBaggagesAroundPlayer(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedPlaceTemporaryListBaggagesAroundPlayer")->address);
        return fn(param1);
    }
    static void PlaceTemporaryListBaggagesAroundPosition(const WorldPosition& param1, bool param2) {
        typedef void (*FnType)(const WorldPosition& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedPlaceTemporaryListBaggagesAroundPosition")->address);
        return fn(param1, param2);
    }
    static void PutNuclearToBackpackOrField() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedPutNuclearToBackpackOrField")->address);
        return fn();
    }
    static void SetAreaChangeInfo(EDSArea param1, EDSAreaChangeReason param2, const GGUUID& param3, const GGUUID& param4) {
        typedef void (*FnType)(EDSArea p1, EDSAreaChangeReason p2, const GGUUID& p3, const GGUUID& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedSetAreaChangeInfo")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SetBaggageUnrealizedAreaUntilPlayerLeave(const WorldPosition& param1) {
        typedef void (*FnType)(const WorldPosition& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedSetUnrealizedAreaUntilPlayerLeave")->address);
        return fn(param1);
    }
    static void SetFirstCursorBaggage(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedSetFirstCursorBaggage")->address);
        return fn(param1);
    }
};

struct MortallyWoundedComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsMortallyWounded() {
        typedef bool (*FnType)(MortallyWoundedComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MortallyWoundedComponent_ExportedIsMortallyWounded")->address);
        return fn(this);
    }
    void Revive() {
        typedef void (*FnType)(MortallyWoundedComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MortallyWoundedComponent_ExportedRevive")->address);
        return fn(this);
    }
};

struct DSJointAimToBaseComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void AimToPlayer(bool param1) {
        typedef void (*FnType)(DSJointAimToBaseComponent* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSJointAimToBaseComponent_ExportedAimToPlayer")->address);
        return fn(this, param1);
    }
    void OverrideGain(float param1) {
        typedef void (*FnType)(DSJointAimToBaseComponent* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSJointAimToBaseComponent_ExportedOverrideGain")->address);
        return fn(this, param1);
    }
    void ResetAndAimSlowly(float param1, float param2) {
        typedef void (*FnType)(DSJointAimToBaseComponent* self, float p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSJointAimToBaseComponent_ExportedResetAndAimSlowly")->address);
        return fn(this, param1, param2);
    }
    void ResetGain() {
        typedef void (*FnType)(DSJointAimToBaseComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSJointAimToBaseComponent_ExportedResetGain")->address);
        return fn(this);
    }
    void SetActive(bool param1) {
        typedef void (*FnType)(DSJointAimToBaseComponent* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSJointAimToBaseComponent_ExportedSetActive")->address);
        return fn(this, param1);
    }
    void StartAim() {
        typedef void (*FnType)(DSJointAimToBaseComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSJointAimToBaseComponent_ExportedStartAim")->address);
        return fn(this);
    }
    void StopAim() {
        typedef void (*FnType)(DSJointAimToBaseComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSJointAimToBaseComponent_ExportedStopAim")->address);
        return fn(this);
    }
};

struct AIIndividual {
    // members
    uint8_t m_pad[0x39e0];
    // functions
    void DecrementIgnoreOrderCount() {
        typedef void (*FnType)(AIIndividual* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividual_ExportedDecrementIgnoreOrderCount")->address);
        return fn(this);
    }
    void ForceAlertLevelNoThreats() {
        typedef void (*FnType)(AIIndividual* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividual_ExportedForceAlertLevelNoThreats")->address);
        return fn(this);
    }
    Array_cptr_AIAttack GetAttacks() {
        typedef Array_cptr_AIAttack (*FnType)(AIIndividual* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividual_ExportedGetAttacks")->address);
        return fn(this);
    }
    EExposedCombatSituationSummary GetCombatSituationSummary() {
        typedef EExposedCombatSituationSummary (*FnType)(AIIndividual* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividual_ExportedGetCombatSituationSummary")->address);
        return fn(this);
    }
    void IncrementIgnoreOrderCount() {
        typedef void (*FnType)(AIIndividual* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividual_ExportedIncrementIgnoreOrderCount")->address);
        return fn(this);
    }
    void RaiseAlertLevel(EAlertLevel param1) {
        typedef void (*FnType)(AIIndividual* self, EAlertLevel p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividual_ExportedRaiseAlertLevel")->address);
        return fn(this, param1);
    }
    void UseOnlyAttack(const AIAttack* param1) {
        typedef void (*FnType)(AIIndividual* self, const AIAttack* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividual_ExportedUseOnlyAttack")->address);
        return fn(this, param1);
    }
};

struct FocusTargetComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsEntityBeingScanned() {
        typedef bool (*FnType)(FocusTargetComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusTargetComponent_ExportedIsEntityBeingScanned")->address);
        return fn(this);
    }
    bool IsEntityScanned() {
        typedef bool (*FnType)(FocusTargetComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusTargetComponent_ExportedIsEntityScanned")->address);
        return fn(this);
    }
    bool IsEntityTagged() {
        typedef bool (*FnType)(FocusTargetComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusTargetComponent_ExportedIsEntityTagged")->address);
        return fn(this);
    }
    bool IsEntityTaggedByFocusMode() {
        typedef bool (*FnType)(FocusTargetComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusTargetComponent_ExportedIsEntityTaggedByFocusMode")->address);
        return fn(this);
    }
};

struct SpawnSetupNonPlaceholder {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool WasSpawnedThroughSpawnSetup(const Entity* param1, const GGUUID& param2) {
        typedef bool (*FnType)(const Entity* p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SpawnSetupNonPlaceholder_sExportedWasSpawnedThroughSpawnSetup")->address);
        return fn(param1, param2);
    }
};

struct GCore {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CalculateWaterDepth(const WorldPosition& param1, float& param2, float& param3) {
        typedef bool (*FnType)(const WorldPosition& p1, float& p2, float& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sCalculateWaterDepth")->address);
        return fn(param1, param2, param3);
    }
    static void Dismount(Entity* param1, bool param2) {
        typedef void (*FnType)(Entity* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sDismount")->address);
        return fn(param1, param2);
    }
    static void EntityImpactEffect(Entity* param1, const MaterialTypeResource* param2, const wchar_t* param3, bool param4, const Vec3& param5, const Vec3& param6, EPhysicsCollisionLayerGame param7) {
        typedef void (*FnType)(Entity* p1, const MaterialTypeResource* p2, const wchar_t* p3, bool p4, const Vec3& p5, const Vec3& p6, EPhysicsCollisionLayerGame p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sEntityImpactEffect")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static bool IntersectLine(const WorldPosition& param1, const WorldPosition& param2, EPhysicsCollisionLayerGame param3, const Entity* param4, bool param5, WorldPosition* param6, Vec3* param7, float* param8, Entity** param9, const MaterialTypeResource** param10) {
        typedef bool (*FnType)(const WorldPosition& p1, const WorldPosition& p2, EPhysicsCollisionLayerGame p3, const Entity* p4, bool p5, WorldPosition* p6, Vec3* p7, float* p8, Entity** p9, const MaterialTypeResource** p10);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sIntersectLine")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10);
    }
    static bool IntersectSphere(const WorldPosition& param1, float param2, EPhysicsCollisionLayerGame param3) {
        typedef bool (*FnType)(const WorldPosition& p1, float p2, EPhysicsCollisionLayerGame p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sIntersectSphere")->address);
        return fn(param1, param2, param3);
    }
    static bool IntersectSweptSphere(const WorldPosition& param1, const WorldPosition& param2, float param3, EPhysicsCollisionLayerGame param4) {
        typedef bool (*FnType)(const WorldPosition& p1, const WorldPosition& p2, float p3, EPhysicsCollisionLayerGame p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sIntersectSweptSphere")->address);
        return fn(param1, param2, param3, param4);
    }
    static void Sound_ActivateSoundMixState(Entity* param1, const SoundMixStateResource* param2, bool param3) {
        typedef void (*FnType)(Entity* p1, const SoundMixStateResource* p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sActivateSoundMixState")->address);
        return fn(param1, param2, param3);
    }
    static void Sound_AddSound(Entity* param1, const SoundResource* param2, bool param3, const wchar_t* param4, bool param5, EntitySoundNodeState** param6, int32_t* param7) {
        typedef void (*FnType)(Entity* p1, const SoundResource* p2, bool p3, const wchar_t* p4, bool p5, EntitySoundNodeState** p6, int32_t* p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sAddSound")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void Sound_CreateSound(Entity* param1, const SoundResource* param2, bool param3, const wchar_t* param4, bool param5, SoundShape param6, int32_t* param7, bool param8) {
        typedef void (*FnType)(Entity* p1, const SoundResource* p2, bool p3, const wchar_t* p4, bool p5, SoundShape p6, int32_t* p7, bool p8);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sCreateSound")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8);
    }
    static void Sound_FlushSounds(Entity* param1, EntitySoundNodeState** param2) {
        typedef void (*FnType)(Entity* p1, EntitySoundNodeState** p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sFlushSounds")->address);
        return fn(param1, param2);
    }
    static void Sound_GetBoolParameterHandle(Entity* param1, const wchar_t* param2, int32_t* param3) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sGetParameterID<bool>")->address);
        return fn(param1, param2, param3);
    }
    static void Sound_GetFloatParameterHandle(Entity* param1, const wchar_t* param2, int32_t* param3) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sGetParameterID<float>")->address);
        return fn(param1, param2, param3);
    }
    static void Sound_GetIntParameterHandle(Entity* param1, const wchar_t* param2, int32_t* param3) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sGetParameterID<int>")->address);
        return fn(param1, param2, param3);
    }
    static void Sound_GetSoundComponentUniqueID(Entity* param1, uint32_t* param2) {
        typedef void (*FnType)(Entity* p1, uint32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sGetSoundComponentUniqueID")->address);
        return fn(param1, param2);
    }
    static void Sound_PlayOneShotSound(Entity* param1, const SoundResource* param2, bool param3, const wchar_t* param4, SoundShape param5) {
        typedef void (*FnType)(Entity* p1, const SoundResource* p2, bool p3, const wchar_t* p4, SoundShape p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sPlayOneShotSound")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void Sound_PlayOneShotSoundWithOffset(Entity* param1, const SoundResource* param2, const wchar_t* param3, const Vec3& param4, SoundShape param5) {
        typedef void (*FnType)(Entity* p1, const SoundResource* p2, const wchar_t* p3, const Vec3& p4, SoundShape p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sPlayOneShotSoundWithOffset")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void Sound_SetBoolParameter(Entity* param1, int32_t param2, bool param3) {
        typedef void (*FnType)(Entity* p1, int32_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sSetParameter<bool>")->address);
        return fn(param1, param2, param3);
    }
    static void Sound_SetFloatParameter(Entity* param1, int32_t param2, float param3) {
        typedef void (*FnType)(Entity* p1, int32_t p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sSetParameter<float>")->address);
        return fn(param1, param2, param3);
    }
    static void Sound_SetIntParameter(Entity* param1, int32_t param2, int32_t param3) {
        typedef void (*FnType)(Entity* p1, int32_t p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sSetParameter<int>")->address);
        return fn(param1, param2, param3);
    }
    static void Sound_SetListenerTransform(bool param1, const WorldTransform& param2) {
        typedef void (*FnType)(bool p1, const WorldTransform& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sSetListenerTransform")->address);
        return fn(param1, param2);
    }
    static void Sound_SetRelativePosition(Entity* param1, int32_t param2, const Vec3& param3) {
        typedef void (*FnType)(Entity* p1, int32_t p2, const Vec3& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sSetRelativePosition")->address);
        return fn(param1, param2, param3);
    }
    static void Sound_UpdateSound(Entity* param1, int32_t param2, bool param3, bool* param4) {
        typedef void (*FnType)(Entity* p1, int32_t p2, bool p3, bool* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sUpdateSound")->address);
        return fn(param1, param2, param3, param4);
    }
    static void Sound_UpdateSounds(Entity* param1, EntitySoundNodeState** param2, bool param3, bool* param4) {
        typedef void (*FnType)(Entity* p1, EntitySoundNodeState** p2, bool p3, bool* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sUpdateSounds")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct AIDefendArea {
    // members
    uint8_t m_pad[0xa0];
    // functions
    const AIDefendAreaSet* GetParent() {
        typedef const AIDefendAreaSet* (*FnType)(AIDefendArea* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDefendArea_ExportedGetParent")->address);
        return fn(this);
    }
};

struct DefendAreaUserComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void SetDefendAreaSet(Entity* param1, const AIDefendAreaSet* param2, const AIDefendArea* param3, const wchar_t* param4) {
        typedef void (*FnType)(Entity* p1, const AIDefendAreaSet* p2, const AIDefendArea* p3, const wchar_t* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DefendAreaUserComponent_sExportedSetDefendAreaSet")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct GraphProperty {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool GetBool(const PropertyContainer* param1, const BoolPropertyBase* param2, int32_t* param3, bool& param4) {
        typedef bool (*FnType)(const PropertyContainer* p1, const BoolPropertyBase* p2, int32_t* p3, bool& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<bool, BoolPropertyBase>::sGetValue)")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool GetEntityInstance(const PropertyContainer* param1, EntityInstancePropertyBase* param2, int32_t* param3, Entity** param4) {
        typedef bool (*FnType)(const PropertyContainer* p1, EntityInstancePropertyBase* p2, int32_t* p3, Entity** p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedGetEntityInstanceValue")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool GetFloat(const PropertyContainer* param1, const FloatPropertyBase* param2, int32_t* param3, float& param4) {
        typedef bool (*FnType)(const PropertyContainer* p1, const FloatPropertyBase* p2, int32_t* p3, float& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<float, FloatPropertyBase>::sGetValue)")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool GetInt(const PropertyContainer* param1, const IntPropertyBase* param2, int32_t* param3, int32_t& param4) {
        typedef bool (*FnType)(const PropertyContainer* p1, const IntPropertyBase* p2, int32_t* p3, int32_t& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<int, IntPropertyBase>::sGetValue)")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool GetVec3(const PropertyContainer* param1, const Vec3PropertyBase* param2, int32_t* param3, Vec3& param4) {
        typedef bool (*FnType)(const PropertyContainer* p1, const Vec3PropertyBase* p2, int32_t* p3, Vec3& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<Vec3, Vec3PropertyBase>::sGetValue)")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool GetWorldPosition(const PropertyContainer* param1, const WorldPositionPropertyBase* param2, int32_t* param3, WorldPosition& param4) {
        typedef bool (*FnType)(const PropertyContainer* p1, const WorldPositionPropertyBase* p2, int32_t* p3, WorldPosition& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<WorldPosition, WorldPositionPropertyBase>::sGetValue)")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool HasTagInResource(const PropertyContainerResource* param1, const BoolPropertyBase* param2, int32_t* param3, bool& param4) {
        typedef bool (*FnType)(const PropertyContainerResource* p1, const BoolPropertyBase* p2, int32_t* p3, bool& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<bool, BoolPropertyBase>::sGetValueFromResource)")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool SetBool(PropertyContainer* param1, const BoolPropertyBase* param2, int32_t* param3, bool& param4) {
        typedef bool (*FnType)(PropertyContainer* p1, const BoolPropertyBase* p2, int32_t* p3, bool& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<bool, BoolPropertyBase>::sSetValue)")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool SetEntityInstance(PropertyContainer* param1, EntityInstancePropertyBase* param2, int32_t* param3, const Entity* param4) {
        typedef bool (*FnType)(PropertyContainer* p1, EntityInstancePropertyBase* p2, int32_t* p3, const Entity* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedSetEntityInstanceValue")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool SetFloat(PropertyContainer* param1, const FloatPropertyBase* param2, int32_t* param3, float& param4) {
        typedef bool (*FnType)(PropertyContainer* p1, const FloatPropertyBase* p2, int32_t* p3, float& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<float, FloatPropertyBase>::sSetValue)")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool SetInt(PropertyContainer* param1, const IntPropertyBase* param2, int32_t* param3, int32_t& param4) {
        typedef bool (*FnType)(PropertyContainer* p1, const IntPropertyBase* p2, int32_t* p3, int32_t& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<int, IntPropertyBase>::sSetValue)")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool SetVec3(PropertyContainer* param1, const Vec3PropertyBase* param2, int32_t* param3, Vec3& param4) {
        typedef bool (*FnType)(PropertyContainer* p1, const Vec3PropertyBase* p2, int32_t* p3, Vec3& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<Vec3, Vec3PropertyBase>::sSetValue)")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool SetWorldPosition(PropertyContainer* param1, const WorldPositionPropertyBase* param2, int32_t* param3, WorldPosition& param4) {
        typedef bool (*FnType)(PropertyContainer* p1, const WorldPositionPropertyBase* p2, int32_t* p3, WorldPosition& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<WorldPosition, WorldPositionPropertyBase>::sSetValue)")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct DSMissioDebugUnlockAllItemsCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void UnlockAllItems() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissioDebugUnlockAllItemsCommand_sUnlockAllItems")->address);
        return fn();
    }
};

struct Throwable {
    // members
    uint8_t m_pad[0x0];
    // functions
    WorldPosition GetTargetPosition() {
        typedef WorldPosition (*FnType)(Throwable* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Throwable_ExportedGetTargetPosition")->address);
        return fn(this);
    }
    const Entity* GetThrower() {
        typedef const Entity* (*FnType)(Throwable* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Throwable_ExportedGetThrower")->address);
        return fn(this);
    }
    void SetThrower(const Entity* param1) {
        typedef void (*FnType)(Throwable* self, const Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Throwable_ExportedSetThrower")->address);
        return fn(this, param1);
    }
};

struct WorldData {
    // members
    uint8_t m_pad[0x0];
    // functions
    static const WorldDataType* GetDataType(const wchar_t* param1) {
        typedef const WorldDataType* (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sGetDataType")->address);
        return fn(param1);
    }
    static const WorldDataTile* GetWorldDataTileForPosition(const WorldPosition& param1) {
        typedef const WorldDataTile* (*FnType)(const WorldPosition& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sGetTileForPosition")->address);
        return fn(param1);
    }
    static bool SampleAtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, void* param3, int32_t param4) {
        typedef bool (*FnType)(const WorldDataType* p1, const WorldPosition& p2, void* p3, int32_t p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleAtWorldPosition")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SampleFloatAtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, float* param3, WorldDataSampleRequestState** param4) {
        typedef void (*FnType)(const WorldDataType* p1, const WorldPosition& p2, float* p3, WorldDataSampleRequestState** p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleFloatAtWorldPosition")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SampleFloatAtWorldPositionImmediate(const WorldDataType* param1, const WorldPosition& param2, float* param3) {
        typedef void (*FnType)(const WorldDataType* p1, const WorldPosition& p2, float* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleFloatAtWorldPositionImmediate")->address);
        return fn(param1, param2, param3);
    }
    static void SampleFloatWithinTile(const WorldDataType* param1, const WorldDataTile* param2, const Vec3& param3, float* param4) {
        typedef void (*FnType)(const WorldDataType* p1, const WorldDataTile* p2, const Vec3& p3, float* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleFloatWithinTile")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SampleVec3AtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, Vec3* param3) {
        typedef void (*FnType)(const WorldDataType* p1, const WorldPosition& p2, Vec3* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleVec3AtWorldPosition")->address);
        return fn(param1, param2, param3);
    }
    static void SampleVec4AtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, Vec4* param3) {
        typedef void (*FnType)(const WorldDataType* p1, const WorldPosition& p2, Vec4* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleVec4AtWorldPosition")->address);
        return fn(param1, param2, param3);
    }
    static void SampleWithinTile(const WorldDataType* param1, const WorldDataTile* param2, const Vec3& param3, void* param4, int32_t param5) {
        typedef void (*FnType)(const WorldDataType* p1, const WorldDataTile* p2, const Vec3& p3, void* p4, int32_t p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleWithinTile")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void ScaleToRange(const WorldDataType* param1, float param2, float* param3) {
        typedef void (*FnType)(const WorldDataType* p1, float p2, float* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sScaleToRange")->address);
        return fn(param1, param2, param3);
    }
};

struct CountdownTimer {
    // members
    uint8_t m_pad[0x0];
    // functions
    void AdjustTimeElapsed(float param1) {
        typedef void (*FnType)(CountdownTimer* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedAdjustTimeElapsed")->address);
        return fn(this, param1);
    }
    void AdjustTimeRemaining(float param1) {
        typedef void (*FnType)(CountdownTimer* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedAdjustTimeRemaining")->address);
        return fn(this, param1);
    }
    float GetTimeElapsed() {
        typedef float (*FnType)(CountdownTimer* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedGetTimeElapsed")->address);
        return fn(this);
    }
    float GetTimeRemaining() {
        typedef float (*FnType)(CountdownTimer* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedGetTimeRemaining")->address);
        return fn(this);
    }
    bool IsTimerRunning() {
        typedef bool (*FnType)(CountdownTimer* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedIsTimerRunning")->address);
        return fn(this);
    }
    void PauseTimer() {
        typedef void (*FnType)(CountdownTimer* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedPauseTimer")->address);
        return fn(this);
    }
    void ResetTimer() {
        typedef void (*FnType)(CountdownTimer* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedResetTimer")->address);
        return fn(this);
    }
    void SetBlinkStartTime(float param1) {
        typedef void (*FnType)(CountdownTimer* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedSetBlinkStartTime")->address);
        return fn(this, param1);
    }
    void SetVisible(bool param1) {
        typedef void (*FnType)(CountdownTimer* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedSetVisible")->address);
        return fn(this, param1);
    }
    void StartTimer() {
        typedef void (*FnType)(CountdownTimer* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedStartTimer")->address);
        return fn(this);
    }
};

struct CraftingComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void CraftRecipeForFree(const GGUUID& param1, int32_t param2) {
        typedef void (*FnType)(CraftingComponent* self, const GGUUID& p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CraftingComponent_ExportedCraftRecipeForFree")->address);
        return fn(this, param1, param2);
    }
    void UnlockRecipe(const GGUUID& param1, bool param2) {
        typedef void (*FnType)(CraftingComponent* self, const GGUUID& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CraftingComponent_ExportedUnlockRecipe")->address);
        return fn(this, param1, param2);
    }
};

struct EnumFact {
    // members
    uint8_t m_pad[0x40];
    // functions
    int32_t GetValueIndex(const EnumFactEntry* param1) {
        typedef int32_t (*FnType)(EnumFact* self, const EnumFactEntry* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnumFact_ExportedGetValueIndex")->address);
        return fn(this, param1);
    }
};

struct FactDatabase {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool GetBooleanFact(const RTTIRefObject* param1, const BooleanFact* param2) {
        typedef bool (*FnType)(const RTTIRefObject* p1, const BooleanFact* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetBooleanFact")->address);
        return fn(param1, param2);
    }
    static bool GetBooleanFactWithUUID(const GGUUID& param1, const BooleanFact* param2) {
        typedef bool (*FnType)(const GGUUID& p1, const BooleanFact* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetBooleanFactWithUUID")->address);
        return fn(param1, param2);
    }
    static const EnumFactEntry* GetEnumFact(const RTTIRefObject* param1, const EnumFact* param2) {
        typedef const EnumFactEntry* (*FnType)(const RTTIRefObject* p1, const EnumFact* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetEnumFact")->address);
        return fn(param1, param2);
    }
    static const EnumFactEntry* GetEnumFactWithUUID(const GGUUID& param1, const EnumFact* param2) {
        typedef const EnumFactEntry* (*FnType)(const GGUUID& p1, const EnumFact* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetEnumFactWithUUID")->address);
        return fn(param1, param2);
    }
    static float GetFloatFact(const RTTIRefObject* param1, const FloatFact* param2) {
        typedef float (*FnType)(const RTTIRefObject* p1, const FloatFact* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetFloatFact")->address);
        return fn(param1, param2);
    }
    static float GetFloatFactWithUUID(const GGUUID& param1, const FloatFact* param2) {
        typedef float (*FnType)(const GGUUID& p1, const FloatFact* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetFloatFactWithUUID")->address);
        return fn(param1, param2);
    }
    static int32_t GetIntegerFact(const RTTIRefObject* param1, const IntegerFact* param2) {
        typedef int32_t (*FnType)(const RTTIRefObject* p1, const IntegerFact* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetIntegerFact")->address);
        return fn(param1, param2);
    }
    static int32_t GetIntegerFactWithUUID(const GGUUID& param1, const IntegerFact* param2) {
        typedef int32_t (*FnType)(const GGUUID& p1, const IntegerFact* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetIntegerFactWithUUID")->address);
        return fn(param1, param2);
    }
    static Vec3 GetVec3Fact(const RTTIRefObject* param1, const Vec3Fact* param2) {
        typedef Vec3 (*FnType)(const RTTIRefObject* p1, const Vec3Fact* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetVec3Fact")->address);
        return fn(param1, param2);
    }
    static Vec3 GetVec3FactWithUUID(const GGUUID& param1, const Vec3Fact* param2) {
        typedef Vec3 (*FnType)(const GGUUID& p1, const Vec3Fact* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetVec3FactWithUUID")->address);
        return fn(param1, param2);
    }
    static void IncrementFloatFact(const RTTIRefObject* param1, const FloatFact* param2, float param3) {
        typedef void (*FnType)(const RTTIRefObject* p1, const FloatFact* p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedIncrementFloatFact")->address);
        return fn(param1, param2, param3);
    }
    static void IncrementIntegerFact(const RTTIRefObject* param1, const IntegerFact* param2, int32_t param3) {
        typedef void (*FnType)(const RTTIRefObject* p1, const IntegerFact* p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedIncrementIntegerFact")->address);
        return fn(param1, param2, param3);
    }
    static void SetBooleanFact(const RTTIRefObject* param1, const BooleanFact* param2, bool param3) {
        typedef void (*FnType)(const RTTIRefObject* p1, const BooleanFact* p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetBooleanFact")->address);
        return fn(param1, param2, param3);
    }
    static void SetEnumFact(const RTTIRefObject* param1, const EnumFact* param2, const EnumFactEntry* param3) {
        typedef void (*FnType)(const RTTIRefObject* p1, const EnumFact* p2, const EnumFactEntry* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetEnumFact")->address);
        return fn(param1, param2, param3);
    }
    static void SetFactContextPersistent(const Resource* param1) {
        typedef void (*FnType)(const Resource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetFactContextPersistent")->address);
        return fn(param1);
    }
    static void SetFloatFact(const RTTIRefObject* param1, const FloatFact* param2, float param3) {
        typedef void (*FnType)(const RTTIRefObject* p1, const FloatFact* p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetFloatFact")->address);
        return fn(param1, param2, param3);
    }
    static void SetIntegerFact(const RTTIRefObject* param1, const IntegerFact* param2, int32_t param3) {
        typedef void (*FnType)(const RTTIRefObject* p1, const IntegerFact* p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetIntegerFact")->address);
        return fn(param1, param2, param3);
    }
    static void SetVec3Fact(const RTTIRefObject* param1, const Vec3Fact* param2, const Vec3& param3) {
        typedef void (*FnType)(const RTTIRefObject* p1, const Vec3Fact* p2, const Vec3& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetVec3Fact")->address);
        return fn(param1, param2, param3);
    }
};

struct DSMissionEventTimerCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AllVisiblePopupTimer() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sAllVisiblePopupTimer")->address);
        return fn();
    }
    static void FixVisibleTimerFromDSMissionID(uint64_t param1, bool param2) {
        typedef void (*FnType)(uint64_t p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sFixVisibleTimerFromDSMissionID")->address);
        return fn(param1, param2);
    }
    static void GetCurPlayTimeSecondsF(uint64_t param1, int32_t param2, float* param3) {
        typedef void (*FnType)(uint64_t p1, int32_t p2, float* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sGetCurPlayTimeSecondsF")->address);
        return fn(param1, param2, param3);
    }
    static void HideMissionEventTimer(uint64_t param1, int32_t param2, bool param3) {
        typedef void (*FnType)(uint64_t p1, int32_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sHideMissionEventTimer")->address);
        return fn(param1, param2, param3);
    }
    static void ManualBootupMissionEventTimer(uint64_t param1) {
        typedef void (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sManualBootupMissionEventTimer")->address);
        return fn(param1);
    }
    static void ManualStopMissionEventTimer(uint64_t param1) {
        typedef void (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sManualStopMissionEventTimer")->address);
        return fn(param1);
    }
    static void PauseMissionEventTimer(uint64_t param1, int32_t param2) {
        typedef void (*FnType)(uint64_t p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sPauseMissionEventTimer")->address);
        return fn(param1, param2);
    }
    static void ResetMissionEventTimer(uint64_t param1, int32_t param2, bool param3) {
        typedef void (*FnType)(uint64_t p1, int32_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sResetMissionEventTimer")->address);
        return fn(param1, param2, param3);
    }
    static void SetCurTimeSecondsF(uint64_t param1, int32_t param2, float param3) {
        typedef void (*FnType)(uint64_t p1, int32_t p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sSetCurTimeSecondsF")->address);
        return fn(param1, param2, param3);
    }
    static void SetMissionEventTimerPurposeTextByLocalizedText(uint64_t param1, int32_t param2, const LocalizedTextResource* param3) {
        typedef void (*FnType)(uint64_t p1, int32_t p2, const LocalizedTextResource* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sSetMissionEventTimerPurposeTextByLocalizedText")->address);
        return fn(param1, param2, param3);
    }
    static void ShowMissionEventTimer(uint64_t param1, int32_t param2) {
        typedef void (*FnType)(uint64_t p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sShowMissionEventTimer")->address);
        return fn(param1, param2);
    }
    static void StartMissionEventTimer(uint64_t param1, int32_t param2) {
        typedef void (*FnType)(uint64_t p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sStartMissionEventTimer")->address);
        return fn(param1, param2);
    }
};

struct DSAnyEventStateCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool GetEventStateHash(uint32_t param1, uint32_t& param2) {
        typedef bool (*FnType)(uint32_t p1, uint32_t& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAnyEventStateCommand_sGetEventStateHash")->address);
        return fn(param1, param2);
    }
    static void SetEventState(const DSStringHashResource* param1, const DSStringHashResource* param2, bool param3) {
        typedef void (*FnType)(const DSStringHashResource* p1, const DSStringHashResource* p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAnyEventStateCommand_sSetEventState")->address);
        return fn(param1, param2, param3);
    }
    static void SetEventStateHash(uint32_t param1, uint32_t param2, bool param3) {
        typedef void (*FnType)(uint32_t p1, uint32_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAnyEventStateCommand_sSetEventStateHash")->address);
        return fn(param1, param2, param3);
    }
    static void UnsetEventStateHash(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAnyEventStateCommand_sUnsetEventStateHash")->address);
        return fn(param1);
    }
};

struct DSMissionLogicMiscCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CanStartCutscene() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sCanStartCutscene")->address);
        return fn();
    }
    static void DSGetCurrentDate(int32_t* param1, int32_t* param2, int32_t* param3) {
        typedef void (*FnType)(int32_t* p1, int32_t* p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sGetCurrentDate")->address);
        return fn(param1, param2, param3);
    }
    static bool DSHasBeenRelocateBaggage(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sHasBeenRelocateBaggage")->address);
        return fn(param1);
    }
    static bool DSIsCombatMuleOrBT() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sDSIsCombatMuleOrBT")->address);
        return fn();
    }
    static int8_t GetGameOverCountForHospitality() {
        typedef int8_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sGetGameOverCountForHospitality")->address);
        return fn();
    }
    static int32_t GetMissionGlobalVariable(const DSStringHashResource* param1) {
        typedef int32_t (*FnType)(const DSStringHashResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sGetMissionGlobalVariable")->address);
        return fn(param1);
    }
    static bool IsBirthdayToday() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sIsBirthdayToday")->address);
        return fn();
    }
    static void PreparationBeforeCutscene() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sPreparationBeforeCutscene")->address);
        return fn();
    }
    static void ResetGameOverCountForHospitality() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sResetGameOverCountForHospitality")->address);
        return fn();
    }
    static void SetMissionGlobalVariable(const DSStringHashResource* param1, int32_t param2) {
        typedef void (*FnType)(const DSStringHashResource* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sSetMissionGlobalVariable")->address);
        return fn(param1, param2);
    }
    static void SetMissionMessageEnabled(uint32_t param1, bool param2) {
        typedef void (*FnType)(uint32_t p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sSetMissionMessageEnabled")->address);
        return fn(param1, param2);
    }
    static GGUUID StaticMissionIdToUUID(uint64_t param1) {
        typedef GGUUID (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sStaticMissionIdToUUID")->address);
        return fn(param1);
    }
};

struct DSMissionBaggageNodeCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void DeliveryBaggageForDontDeliveryMission(const GGUUID& param1, uint32_t param2) {
        typedef void (*FnType)(const GGUUID& p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBaggageNodeCommand_sDeliveryBaggageForDontDeliveryMission")->address);
        return fn(param1, param2);
    }
    static EDSGameBaggageListItem_BaggageAttribute GetBaggageAttribute(const DSGameBaggageListItem* param1) {
        typedef EDSGameBaggageListItem_BaggageAttribute (*FnType)(const DSGameBaggageListItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBaggageNodeCommand_sGetBaggageAttribute")->address);
        return fn(param1);
    }
    static bool IsIncludeBaggageListItemInMission(uint64_t param1, const DSGameBaggageListItem* param2) {
        typedef bool (*FnType)(uint64_t p1, const DSGameBaggageListItem* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBaggageNodeCommand_sIsIncludeBaggageListItemInMission")->address);
        return fn(param1, param2);
    }
};

struct DSGraphServiceReturnValue {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetInt(uint32_t param1, int32_t param2) {
        typedef void (*FnType)(DSGraphServiceReturnValue* self, uint32_t p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGraphServiceReturnValue_ExportedSetInt")->address);
        return fn(this, param1, param2);
    }
    void SetMessageNameHash(uint32_t param1) {
        typedef void (*FnType)(DSGraphServiceReturnValue* self, uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGraphServiceReturnValue_ExportedSetMessageNameHash")->address);
        return fn(this, param1);
    }
};

struct DSDeliveryBotEntity {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void EntityToGameActorId(const Entity* param1, int32_t* param2) {
        typedef void (*FnType)(const Entity* p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotEntity_sExportedEntityToGameActorId")->address);
        return fn(param1, param2);
    }
    static void GameActorIdToEntity(int32_t param1, Entity** param2) {
        typedef void (*FnType)(int32_t p1, Entity** p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotEntity_sExportedGameActorIdToEntity")->address);
        return fn(param1, param2);
    }
    static void IsDeliveryBot(const Entity* param1, bool* param2) {
        typedef void (*FnType)(const Entity* p1, bool* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotEntity_sExportedIsDeliveryBot")->address);
        return fn(param1, param2);
    }
};

struct QuestSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AbandonMerchantJobs(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedAbandonMerchantJobs")->address);
        return fn(param1);
    }
    static bool CanStartQuest(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedCanStartQuest")->address);
        return fn(param1);
    }
    static void DisableQuest(const QuestResource* param1) {
        typedef void (*FnType)(const QuestResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedDisableQuest")->address);
        return fn(param1);
    }
    static void EnableQuest(const QuestResource* param1) {
        typedef void (*FnType)(const QuestResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedEnableQuest")->address);
        return fn(param1);
    }
    static QuestInstance* GetQuest(const GGUUID& param1) {
        typedef QuestInstance* (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedGetQuest")->address);
        return fn(param1);
    }
    static QuestInstance* GetTrackedQuest() {
        typedef QuestInstance* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedGetTrackedQuest")->address);
        return fn();
    }
    static void RevertQuest(const QuestSection* param1) {
        typedef void (*FnType)(const QuestSection* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedRevertQuest")->address);
        return fn(param1);
    }
    static void SetAllQuestsPaused(bool param1, const QuestResource* param2) {
        typedef void (*FnType)(bool p1, const QuestResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedSetAllQuestsPaused")->address);
        return fn(param1, param2);
    }
    static void ShowQuestNotification(const QuestResource* param1, const PlayerNotificationResource* param2, const PlayerNotificationPriority* param3) {
        typedef void (*FnType)(const QuestResource* p1, const PlayerNotificationResource* p2, const PlayerNotificationPriority* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedShowQuestNotification")->address);
        return fn(param1, param2, param3);
    }
};

struct DSRadioNodeGraphBindings {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void PlaySentence(Entity* param1, const SentenceResource* param2, EDSPlaySentenceNodePriority param3) {
        typedef void (*FnType)(Entity* p1, const SentenceResource* p2, EDSPlaySentenceNodePriority p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedPlaySentence")->address);
        return fn(param1, param2, param3);
    }
    static void RaiseAbortEvent(const DSRadioEvent* param1, float param2) {
        typedef void (*FnType)(const DSRadioEvent* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedRaiseAbortEvent")->address);
        return fn(param1, param2);
    }
    static void RaiseAbortEvent2(const GGUUID& param1, float param2) {
        typedef void (*FnType)(const GGUUID& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedRaiseAbortEvent2")->address);
        return fn(param1, param2);
    }
    static bool RaiseEvent(const DSRadioEvent* param1) {
        typedef bool (*FnType)(const DSRadioEvent* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedRaiseEvent")->address);
        return fn(param1);
    }
    static bool RaiseEvent2(const GGUUID& param1, bool param2) {
        typedef bool (*FnType)(const GGUUID& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedRaiseEvent2")->address);
        return fn(param1, param2);
    }
    static SentenceResource* RandomlySelectSentenceHavingSpecificVoiceName(const SentenceGroupResource* param1, const LocalizedTextResource* param2) {
        typedef SentenceResource* (*FnType)(const SentenceGroupResource* p1, const LocalizedTextResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedRandomlySelectSentenceHavingSpecificVoiceName")->address);
        return fn(param1, param2);
    }
};

struct CharacterProgressionComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void AddPerkLevel(const PerkLevel* param1) {
        typedef void (*FnType)(CharacterProgressionComponent* self, const PerkLevel* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_ExportedAddPerkLevel")->address);
        return fn(this, param1);
    }
    void AddPerkPoints(int32_t param1, const String& param2) {
        typedef void (*FnType)(CharacterProgressionComponent* self, int32_t p1, const String& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_ExportedAddPerkPoints")->address);
        return fn(this, param1, param2);
    }
    static void AddXp(Entity* param1, const LocalizedTextResource* param2, const LevelBasedXpReward* param3, const Array_cptr_XpMultiplier& param4, Entity* param5, bool param6) {
        typedef void (*FnType)(Entity* p1, const LocalizedTextResource* p2, const LevelBasedXpReward* p3, const Array_cptr_XpMultiplier& p4, Entity* p5, bool p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_sExportedAddXp")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    int32_t GetLevel() {
        typedef int32_t (*FnType)(CharacterProgressionComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_ExportedGetLevel")->address);
        return fn(this);
    }
    bool HasPerkLevel(const PerkLevel* param1) {
        typedef bool (*FnType)(CharacterProgressionComponent* self, const PerkLevel* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_ExportedHasPerkLevel")->address);
        return fn(this, param1);
    }
    void SetCurrentLevel(int32_t param1) {
        typedef void (*FnType)(CharacterProgressionComponent* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_ExportedSetCurrentLevel")->address);
        return fn(this, param1);
    }
};

struct DSConstructionPointManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AddMissionConstructableArea(int32_t param1, EDSConstructionPointCategory param2, const WorldPosition& param3, float param4) {
        typedef void (*FnType)(int32_t p1, EDSConstructionPointCategory p2, const WorldPosition& p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedAddMissionConstructableArea")->address);
        return fn(param1, param2, param3, param4);
    }
    static void AllowConstructionInfologInPrivateroom() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedAllowConstructionInfologInPrivateroom")->address);
        return fn();
    }
    static void CallGimmickActionByConstruction(int32_t param1, uint32_t param2, uint32_t param3) {
        typedef void (*FnType)(int32_t p1, uint32_t p2, uint32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedCallGimmickActionByConstruction")->address);
        return fn(param1, param2, param3);
    }
    static void CallGimmickActionByConstructionEntity(const Entity* param1, uint32_t param2, uint32_t param3) {
        typedef void (*FnType)(const Entity* p1, uint32_t p2, uint32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedCallGimmickActionByConstructionEntity")->address);
        return fn(param1, param2, param3);
    }
    static void ClearAccessingConstruction() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedClearAccessingConstruction")->address);
        return fn();
    }
    static void ConstructioTypeToCategory(EDSConstructionPointType param1, EDSConstructionPointCategory& param2, EDSConstructionPointNetType& param3) {
        typedef void (*FnType)(EDSConstructionPointType p1, EDSConstructionPointCategory& p2, EDSConstructionPointNetType& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedConstructionTypeToCategory")->address);
        return fn(param1, param2, param3);
    }
    static void CreateConstruction(EDSConstructionPointType param1, const WorldTransform& param2, bool param3) {
        typedef void (*FnType)(EDSConstructionPointType p1, const WorldTransform& p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedCreateConstruction")->address);
        return fn(param1, param2, param3);
    }
    static void ForceConstructionLevelupComplete(int32_t param1, Entity* param2) {
        typedef void (*FnType)(int32_t p1, Entity* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedForceConstructionLevelupComplete")->address);
        return fn(param1, param2);
    }
    static void ForceConstructionLevelupStart(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedForceConstructionLevelupStart")->address);
        return fn(param1);
    }
    static Entity* GetAccessingConstructionPointEntity(const GGUUID& param1) {
        typedef Entity* (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedAccessingConstructionPointEntity")->address);
        return fn(param1);
    }
    static void GetAccessingConstructionPointId(int32_t* param1) {
        typedef void (*FnType)(int32_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetAccessingConstructionId")->address);
        return fn(param1);
    }
    static bool GetConstructionAvailableFromEntity(const Entity* param1) {
        typedef bool (*FnType)(const Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionAvailableFromEntity")->address);
        return fn(param1);
    }
    static void GetConstructionCategoryTotalNecessaryMaterials(EDSConstructionPointCategory param1, uint32_t param2, int32_t* param3) {
        typedef void (*FnType)(EDSConstructionPointCategory p1, uint32_t p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionCategoryTotalNecessaryMaterials")->address);
        return fn(param1, param2, param3);
    }
    static void GetConstructionConfig(EDSConstructionPointCategory param1, float* param2, uint32_t* param3, uint32_t* param4) {
        typedef void (*FnType)(EDSConstructionPointCategory p1, float* p2, uint32_t* p3, uint32_t* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionConfig")->address);
        return fn(param1, param2, param3, param4);
    }
    static void GetConstructionPointCategory(int32_t param1, EDSConstructionPointCategory* param2, EDSConstructionPointNetType* param3) {
        typedef void (*FnType)(int32_t p1, EDSConstructionPointCategory* p2, EDSConstructionPointNetType* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointCategory")->address);
        return fn(param1, param2, param3);
    }
    static void GetConstructionPointFrontAccessTransform(int32_t param1, WorldTransform* param2) {
        typedef void (*FnType)(int32_t p1, WorldTransform* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointFrontAccessTransform")->address);
        return fn(param1, param2);
    }
    static void GetConstructionPointLevel(int32_t param1, int32_t* param2) {
        typedef void (*FnType)(int32_t p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointLevel")->address);
        return fn(param1, param2);
    }
    static void GetConstructionPointNecessaryMaterialsToNextLevel(int32_t param1, int32_t* param2, int32_t* param3) {
        typedef void (*FnType)(int32_t p1, int32_t* p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointNecessaryMaterialsToNextLevel")->address);
        return fn(param1, param2, param3);
    }
    static void GetConstructionPointOnlineInfo(int32_t param1, uint32_t* param2) {
        typedef void (*FnType)(int32_t p1, uint32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointOnlineInfo")->address);
        return fn(param1, param2);
    }
    static void GetConstructionPointPosition(int32_t param1, WorldPosition* param2) {
        typedef void (*FnType)(int32_t p1, WorldPosition* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointPosition")->address);
        return fn(param1, param2);
    }
    static void GetConstructionPointState(int32_t param1, EDSConstructionPointState* param2) {
        typedef void (*FnType)(int32_t p1, EDSConstructionPointState* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointState")->address);
        return fn(param1, param2);
    }
    static void GetConstructionPointTotalNecessaryMaterials(int32_t param1, uint32_t param2, int32_t* param3, int32_t* param4) {
        typedef void (*FnType)(int32_t p1, uint32_t p2, int32_t* p3, int32_t* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointTotalNecessaryMaterials")->address);
        return fn(param1, param2, param3, param4);
    }
    static void GetConstructionUsabilityFromEntity(const Entity* param1, bool* param2, bool* param3) {
        typedef void (*FnType)(const Entity* p1, bool* p2, bool* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionUsabilityFromEntity")->address);
        return fn(param1, param2, param3);
    }
    static void GetDeliveryPointTypeString(EDSConstructionPointType param1, const wchar_t& param2) {
        typedef void (*FnType)(EDSConstructionPointType p1, const wchar_t& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetDeliveryPointTypeString")->address);
        return fn(param1, param2);
    }
    static void GetNearestConstructionPointId(const WorldPosition& param1, int32_t* param2) {
        typedef void (*FnType)(const WorldPosition& p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetNearestConstructionPointId")->address);
        return fn(param1, param2);
    }
    static void GetOverrideOverHeadHoloIndexFromEntity(const Entity* param1, bool* param2, int32_t* param3) {
        typedef void (*FnType)(const Entity* p1, bool* p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetOverrideOverHeadHoloIndexFromEntity")->address);
        return fn(param1, param2, param3);
    }
    static void GetRoadHashByConstructionId(int32_t param1, uint32_t* param2) {
        typedef void (*FnType)(int32_t p1, uint32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetRoadHashByConstructionId")->address);
        return fn(param1, param2);
    }
    static void GetUUIDHash(const GGUUID& param1, uint32_t* param2) {
        typedef void (*FnType)(const GGUUID& p1, uint32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetUUIDHash")->address);
        return fn(param1, param2);
    }
    static void GetUsableQpidBandwidth(const WorldPosition& param1, uint32_t* param2, uint32_t* param3) {
        typedef void (*FnType)(const WorldPosition& p1, uint32_t* p2, uint32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetUsableQpidBandwidth")->address);
        return fn(param1, param2, param3);
    }
    static void IntToConstructionPointCategory(int32_t param1, EDSConstructionPointCategory& param2) {
        typedef void (*FnType)(int32_t p1, EDSConstructionPointCategory& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedIntToConstructionPointCategory")->address);
        return fn(param1, param2);
    }
    static void MoveBaggagesToSafePlace(const WorldPosition& param1, float param2, const WorldPosition& param3) {
        typedef void (*FnType)(const WorldPosition& p1, float p2, const WorldPosition& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedMoveBaggagesToSafePlace")->address);
        return fn(param1, param2, param3);
    }
    static void PutConstructionsInTar(const WorldPosition& param1, float param2) {
        typedef void (*FnType)(const WorldPosition& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedPutConstructionsInTar")->address);
        return fn(param1, param2);
    }
    static void RemoveConstructionsInArea(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, bool param4, bool param5, bool param6) {
        typedef void (*FnType)(const Vec3& p1, const Vec3& p2, const WorldTransform& p3, bool p4, bool p5, bool p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedRemoveConstructionsInArea")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void RemoveGimmickLocatorFromConstruction(int32_t param1, const GGUUID& param2) {
        typedef void (*FnType)(int32_t p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedRemoveGimmickLocatorFromConstruction")->address);
        return fn(param1, param2);
    }
    static void RemoveMissionConstructableArea(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedRemoveMissionConstructableArea")->address);
        return fn(param1);
    }
    static void RestoreLastStrandingConstructions() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedRestoreLastStrandingConstructions")->address);
        return fn();
    }
    static void SearchConstructionIDsWithPosition(EDSConstructionPointCategory param1, const WorldPosition& param2, float param3, Array_int* param4) {
        typedef void (*FnType)(EDSConstructionPointCategory p1, const WorldPosition& p2, float p3, Array_int* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSearchConstructionIDsWithPosition")->address);
        return fn(param1, param2, param3, param4);
    }
    static Entity* SearchConstructionPointEntityByInfo(const GGUUID& param1, const GGUUID& param2) {
        typedef Entity* (*FnType)(const GGUUID& p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSearchConstructionPointEntityByInfo")->address);
        return fn(param1, param2);
    }
    static void SendCommandToDeliveryId(int32_t param1, int32_t param2, int32_t param3, int32_t param4, float param5, float param6) {
        typedef void (*FnType)(int32_t p1, int32_t p2, int32_t p3, int32_t p4, float p5, float p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSendCommandToDeliveryId")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void SendCommandToDeliveryPoint(const GGUUID& param1, int32_t param2, int32_t param3, int32_t param4, float param5, float param6) {
        typedef void (*FnType)(const GGUUID& p1, int32_t p2, int32_t p3, int32_t p4, float p5, float p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSendCommandToDeliveryPoint")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void SetAccessingConstruction(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetAccessingConstruction")->address);
        return fn(param1);
    }
    static void SetActiveAllConstructions(EDSArea param1, bool param2, const Array_int& param3) {
        typedef void (*FnType)(EDSArea p1, bool p2, const Array_int& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetActiveAllConstructions")->address);
        return fn(param1, param2, param3);
    }
    static void SetActiveAreaConstructions(bool param1, EDSArea param2, const WorldPosition& param3, float param4, const Array_int& param5) {
        typedef void (*FnType)(bool p1, EDSArea p2, const WorldPosition& p3, float p4, const Array_int& p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetActiveAreaConstructions")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void SetActiveCPAreaConstructions(const GGUUID& param1, bool param2) {
        typedef void (*FnType)(const GGUUID& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetActiveCPAreaConstructions")->address);
        return fn(param1, param2);
    }
    static void SetBaggagesToStatic(const WorldPosition& param1, float param2, float param3) {
        typedef void (*FnType)(const WorldPosition& p1, float p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetBaggagesToStatic")->address);
        return fn(param1, param2, param3);
    }
    static void SetConstructionLevel(int32_t param1, int32_t param2) {
        typedef void (*FnType)(int32_t p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetConstructionLevel")->address);
        return fn(param1, param2);
    }
    static void SetConstructionPointTransform(int32_t param1, const WorldTransform& param2) {
        typedef void (*FnType)(int32_t p1, const WorldTransform& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetConstructionPointTransform")->address);
        return fn(param1, param2);
    }
    static void SetConstructionUsableFromEntity(const Entity* param1, bool param2) {
        typedef void (*FnType)(const Entity* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetConstructionUsableFromEntity")->address);
        return fn(param1, param2);
    }
    static void SetCustomizeHoloSpawnPosition(Entity* param1, const Vec3& param2, WorldTransform* param3, WorldPosition* param4) {
        typedef void (*FnType)(Entity* p1, const Vec3& p2, WorldTransform* p3, WorldPosition* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetCustomizeHoloSpawnPosition")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SetGimmickLocatorToConstruction(int32_t param1, const GGUUID& param2) {
        typedef void (*FnType)(int32_t p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetGimmickLocatorToConstruction")->address);
        return fn(param1, param2);
    }
    static void SetIntruderCheckerActivation(int32_t param1, bool param2) {
        typedef void (*FnType)(int32_t p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetIntruderCheckerActivation")->address);
        return fn(param1, param2);
    }
    static void SetPrivateRoomEventGraph(EDSPrivateRoomEventType param1, int32_t param2, int32_t param3) {
        typedef void (*FnType)(EDSPrivateRoomEventType p1, int32_t p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetPrivateRoomEventGraph")->address);
        return fn(param1, param2, param3);
    }
    static void StartLastStrandingConstructions(bool param1, bool param2, bool param3, const Array_int& param4) {
        typedef void (*FnType)(bool p1, bool p2, bool p3, const Array_int& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedStartLastStrandingConstructions")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct Scene {
    // members
    uint8_t m_pad[0x3a0];
    // functions
    static Entity* GetCurrentSceneEntity() {
        typedef Entity* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_sExportedGetCurrentSceneEntity")->address);
        return fn();
    }
    bool IsRunning() {
        typedef bool (*FnType)(Scene* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedIsRunning")->address);
        return fn(this);
    }
    void SendCustomMessage(const wchar_t* param1) {
        typedef void (*FnType)(Scene* self, const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedSendCustomMessage")->address);
        return fn(this, param1);
    }
    void SetForcedActivation(ESceneForcedActiveState param1) {
        typedef void (*FnType)(Scene* self, ESceneForcedActiveState p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedSetForcedActivation")->address);
        return fn(this, param1);
    }
    void Start() {
        typedef void (*FnType)(Scene* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedStart")->address);
        return fn(this);
    }
    void StartSceneScriptOnEntity(Entity* param1, const GraphProgramResource* param2) {
        typedef void (*FnType)(Scene* self, Entity* p1, const GraphProgramResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedStartSceneScriptOnEntity")->address);
        return fn(this, param1, param2);
    }
    void Stop() {
        typedef void (*FnType)(Scene* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedStop")->address);
        return fn(this);
    }
    void StopSceneScriptOnEntity(const Entity* param1, const GraphProgramResource* param2) {
        typedef void (*FnType)(Scene* self, const Entity* p1, const GraphProgramResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedStopSceneScriptOnEntity")->address);
        return fn(this, param1, param2);
    }
};

struct DSSceneCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static int32_t DSGetSceneHashValue0(Scene* param1) {
        typedef int32_t (*FnType)(Scene* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedDSGetSceneHashValue0")->address);
        return fn(param1);
    }
    static int32_t DSGetSceneHashValue1(Scene* param1) {
        typedef int32_t (*FnType)(Scene* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedDSGetSceneHashValue1")->address);
        return fn(param1);
    }
    static WorldPosition DSGetScenePosition(const GGUUID& param1) {
        typedef WorldPosition (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedDSGetScenePosition")->address);
        return fn(param1);
    }
    static int32_t DSGetSceneTerminalId(Scene* param1) {
        typedef int32_t (*FnType)(Scene* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedDSGetSceneTerminalId")->address);
        return fn(param1);
    }
    static bool DSIsEqualOriginalScene(Scene* param1, Scene* param2) {
        typedef bool (*FnType)(Scene* p1, Scene* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedDSIsEqualOriginalScene")->address);
        return fn(param1, param2);
    }
    static void DSSendCustomSceneMessage(Scene* param1, const wchar_t* param2, const uint32_t& param3, const int32_t& param4, const int32_t& param5) {
        typedef void (*FnType)(Scene* p1, const wchar_t* p2, const uint32_t& p3, const int32_t& p4, const int32_t& p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedSendCustomSceneMessage")->address);
        return fn(param1, param2, param3, param4, param5);
    }
};

struct AIBehaviorGroupMemberComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    AIBehaviorGroup* GetAIBehaviorGroup() {
        typedef AIBehaviorGroup* (*FnType)(AIBehaviorGroupMemberComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroupMemberComponent_ExportedGetAIBehaviorGroup")->address);
        return fn(this);
    }
    AIGroup* GetAIGroup() {
        typedef AIGroup* (*FnType)(AIBehaviorGroupMemberComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroupMemberComponent_ExportedGetAIGroup")->address);
        return fn(this);
    }
};

struct RopeComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    float GetRopeLifeTimeLeft() {
        typedef float (*FnType)(RopeComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RopeComponent_ExportedGetRopeLifeTimeLeft")->address);
        return fn(this);
    }
};

struct DSIntruderDetectorComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void IsThereAnyIntruder(const Entity* param1, bool* param2, bool* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, bool* param9, bool* param10, bool* param11, bool* param12) {
        typedef void (*FnType)(const Entity* p1, bool* p2, bool* p3, bool* p4, bool* p5, bool* p6, bool* p7, bool* p8, bool* p9, bool* p10, bool* p11, bool* p12);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSIntruderDetectorComponent_sExportedIsThereAnyIntruder")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12);
    }
};

struct Mover {
    // members
    uint8_t m_pad[0x58];
    // functions
    void ApplyAngularImpulse(const Vec3& param1, const DestructibilityPart* param2) {
        typedef void (*FnType)(Mover* self, const Vec3& p1, const DestructibilityPart* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Mover_ExportedApplyAngularImpulse")->address);
        return fn(this, param1, param2);
    }
    void ApplyAngularLocalImpulse(const Vec3& param1, const DestructibilityPart* param2) {
        typedef void (*FnType)(Mover* self, const Vec3& p1, const DestructibilityPart* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Mover_ExportedApplyAngularLocalImpulse")->address);
        return fn(this, param1, param2);
    }
    void ApplyImpulse(const WorldPosition& param1, const Vec3& param2, bool param3, const DestructibilityPart* param4) {
        typedef void (*FnType)(Mover* self, const WorldPosition& p1, const Vec3& p2, bool p3, const DestructibilityPart* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Mover_ExportedApplyImpulse")->address);
        return fn(this, param1, param2, param3, param4);
    }
    void ApplyLocalImpulse(const Vec3& param1, const Vec3& param2, bool param3, const DestructibilityPart* param4) {
        typedef void (*FnType)(Mover* self, const Vec3& p1, const Vec3& p2, bool p3, const DestructibilityPart* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Mover_ExportedApplyLocalImpulse")->address);
        return fn(this, param1, param2, param3, param4);
    }
};

struct DSCatalogueListItemCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ExtractBaggageListItemInfo(const DSGameBaggageListItem* param1, EDSGameBaggageListItem_BaggageAttribute* param2, EDSGameBaggageListItem_BaggageCaseType* param3, EDSGameBaggageListItem_Volume* param4, EDSGameBaggageListItem_ContentsDamageType* param5) {
        typedef void (*FnType)(const DSGameBaggageListItem* p1, EDSGameBaggageListItem_BaggageAttribute* p2, EDSGameBaggageListItem_BaggageCaseType* p3, EDSGameBaggageListItem_Volume* p4, EDSGameBaggageListItem_ContentsDamageType* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCatalogueListItemCommand_sExportedExtractBaggageListItemInfo")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static const DSGameBaggageListItem* GetBaggageListItemByName(int32_t param1) {
        typedef const DSGameBaggageListItem* (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCatalogueListItemCommand_sExportedGetBaggageListItemByName")->address);
        return fn(param1);
    }
    static bool GetDynamicOfflineBaggageGameActorIdFromMissionId(uint64_t param1, int32_t* param2) {
        typedef bool (*FnType)(uint64_t p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCatalogueListItemCommand_sGetDynamicOfflineBaggageGameActorIdFromMissionId")->address);
        return fn(param1, param2);
    }
};

struct VehicleEntity {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void EntityToGameActorId(const Entity* param1, int32_t* param2) {
        typedef void (*FnType)(const Entity* p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedEntityToGameActorId")->address);
        return fn(param1, param2);
    }
    static void GameActorIdToEntity(int32_t param1, Entity** param2) {
        typedef void (*FnType)(int32_t p1, Entity** p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGameActorIdToEntity")->address);
        return fn(param1, param2);
    }
    static void GetAllVehiclesInNearestTrigger(Array_cptr_Entity& param1, int32_t param2) {
        typedef void (*FnType)(Array_cptr_Entity& p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetAllVehiclesInNearestTrigger")->address);
        return fn(param1, param2);
    }
    static void GetBoolRequest(Entity* param1, int32_t param2, bool* param3) {
        typedef void (*FnType)(Entity* p1, int32_t p2, bool* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetBoolRequest")->address);
        return fn(param1, param2, param3);
    }
    static void GetLastInVehicleFromNearestTrigger(Entity** param1, int32_t param2) {
        typedef void (*FnType)(Entity** p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetLastInVehicleFromNearestTrigger")->address);
        return fn(param1, param2);
    }
    static void GetLastInVehicleFromTrigger(Entity** param1, const CollisionTrigger* param2) {
        typedef void (*FnType)(Entity** p1, const CollisionTrigger* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetLastInVehicleFromTrigger")->address);
        return fn(param1, param2);
    }
    static void GetLastVehicleFromParking(Entity** param1) {
        typedef void (*FnType)(Entity** p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetLastVehicleFromParking")->address);
        return fn(param1);
    }
    static void GetVehicleLife(const Entity* param1, bool* param2, float* param3) {
        typedef void (*FnType)(const Entity* p1, bool* p2, float* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetLife")->address);
        return fn(param1, param2, param3);
    }
    static void GetVehicleType(const Entity* param1, bool* param2, bool* param3, bool* param4, bool* param5, bool* param6, bool* param7) {
        typedef void (*FnType)(const Entity* p1, bool* p2, bool* p3, bool* p4, bool* p5, bool* p6, bool* p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetVehicleType")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void IsDriving(const Entity* param1, bool param2, bool* param3) {
        typedef void (*FnType)(const Entity* p1, bool p2, bool* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedIsDriving")->address);
        return fn(param1, param2, param3);
    }
    static void MoveObjectsToSafePlace(const WorldPosition& param1, float param2, const WorldPosition& param3, float param4, const Vec3& param5, bool param6, bool param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13) {
        typedef void (*FnType)(const WorldPosition& p1, float p2, const WorldPosition& p3, float p4, const Vec3& p5, bool p6, bool p7, bool p8, bool p9, bool p10, bool p11, bool p12, bool p13);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedMoveObjectsToSafePlace")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13);
    }
    static void MoveObjectsToSafePositions(const WorldPosition& param1, float param2, const WorldTransform& param3, const WorldTransform& param4, const WorldTransform& param5, const WorldTransform& param6, bool param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13) {
        typedef void (*FnType)(const WorldPosition& p1, float p2, const WorldTransform& p3, const WorldTransform& p4, const WorldTransform& p5, const WorldTransform& p6, bool p7, bool p8, bool p9, bool p10, bool p11, bool p12, bool p13);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedMoveObjectsToSafePositions")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13);
    }
    static void MoveVehicleOrCartToSafePlace(Entity* param1, const WorldTransform& param2, const WorldTransform& param3, const WorldTransform& param4, const WorldTransform& param5, bool* param6, bool param7) {
        typedef void (*FnType)(Entity* p1, const WorldTransform& p2, const WorldTransform& p3, const WorldTransform& p4, const WorldTransform& p5, bool* p6, bool p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedMoveVehicleOrCartToSafePlace")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void RequestSetForceLowLODAll(bool param1, bool param2) {
        typedef void (*FnType)(bool p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedRequestSetForceLowLODAll")->address);
        return fn(param1, param2);
    }
    static void SetForceSpeedScale(Entity* param1, float param2) {
        typedef void (*FnType)(Entity* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedSetForceSpeedScale")->address);
        return fn(param1, param2);
    }
    static void SetOverrideInCutscene(Entity* param1, int32_t param2, bool param3) {
        typedef void (*FnType)(Entity* p1, int32_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedSetOverrideInCutscene")->address);
        return fn(param1, param2, param3);
    }
    static void SetRequest(Entity* param1, int32_t param2, bool param3) {
        typedef void (*FnType)(Entity* p1, int32_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedSetRequest")->address);
        return fn(param1, param2, param3);
    }
    static void VehicleInOutTrigger(Entity* param1, const CollisionTrigger* param2, bool param3) {
        typedef void (*FnType)(Entity* p1, const CollisionTrigger* p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedVehicleInOutTrigger")->address);
        return fn(param1, param2, param3);
    }
};

struct BuddyComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetTeleportEnabled(bool param1, bool param2) {
        typedef void (*FnType)(BuddyComponent* self, bool p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyComponent_ExportedSetTeleportEnabled")->address);
        return fn(this, param1, param2);
    }
    bool TeleportBuddy(float param1, float param2, float param3, bool param4, bool param5, bool param6) {
        typedef bool (*FnType)(BuddyComponent* self, float p1, float p2, float p3, bool p4, bool p5, bool p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyComponent_ExportedTeleportBuddy")->address);
        return fn(this, param1, param2, param3, param4, param5, param6);
    }
};

struct AIManagerGame {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GetCombatSituationSummaryForThreat(const AIIndividual* param1, const Entity* param2, EThreatState& param3, EPositionAssessment& param4, float& param5, bool& param6, bool& param7) {
        typedef void (*FnType)(const AIIndividual* p1, const Entity* p2, EThreatState& p3, EPositionAssessment& p4, float& p5, bool& p6, bool& p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetCombatSituationSummaryForThreat")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static Array_cptr_Entity GetEntitiesInRadius(const Entity* param1, float param2, bool param3) {
        typedef Array_cptr_Entity (*FnType)(const Entity* p1, float p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetEntitiesInRadius")->address);
        return fn(param1, param2, param3);
    }
    static bool GetPlayerHasBeenReported(const Player* param1) {
        typedef bool (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerHasBeenReported")->address);
        return fn(param1);
    }
    static bool GetPlayerIsBeingHeard(const Player* param1) {
        typedef bool (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerIsBeingHeard")->address);
        return fn(param1);
    }
    static bool GetPlayerIsBeingSeen(const Player* param1) {
        typedef bool (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerIsBeingSeen")->address);
        return fn(param1);
    }
    static bool GetPlayerIsInAntiStealth(const Player* param1) {
        typedef bool (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerIsInAntiStealth")->address);
        return fn(param1);
    }
    static float GetPlayerLastBeingHeardTimestamp(const Player* param1) {
        typedef float (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerLastBeingHeardTimestamp")->address);
        return fn(param1);
    }
    static float GetPlayerLastBeingSeenTimestamp(const Player* param1) {
        typedef float (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerLastBeingSeenTimestamp")->address);
        return fn(param1);
    }
    static EThreatState GetPlayerThreatLevel(const Player* param1) {
        typedef EThreatState (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerThreatLevel")->address);
        return fn(param1);
    }
    static float GetPlayerThreatLevelFactor(const Player* param1) {
        typedef float (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerThreatLevelFactor")->address);
        return fn(param1);
    }
    static EExposedCombatSituationSummary GetPlayerVisualThreatLevel(const Player* param1) {
        typedef EExposedCombatSituationSummary (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerVisualThreatLevel")->address);
        return fn(param1);
    }
    static float GetSearchTimeFactorForPlayer(bool* param1, bool* param2) {
        typedef float (*FnType)(bool* p1, bool* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetSearchTimeFactorForPlayer")->address);
        return fn(param1, param2);
    }
    static bool IsPlayerCurrentlyIdentified(const Player* param1) {
        typedef bool (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedIsPlayerCurrentlyIdentified")->address);
        return fn(param1);
    }
    static bool IsPlayerCurrentlyIdentifiedByHumanoid(const Player* param1) {
        typedef bool (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedIsPlayerCurrentlyIdentifiedByHumanoid")->address);
        return fn(param1);
    }
    static bool IsPlayerCurrentlyIdentifiedByRobot(const Player* param1) {
        typedef bool (*FnType)(const Player* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedIsPlayerCurrentlyIdentifiedByRobot")->address);
        return fn(param1);
    }
};

struct DsMuleManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void CallRestoreMuleScript() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sCallRestoreMuleScript")->address);
        return fn();
    }
    static void ClearForceMuleStance() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sClearForceMuleStance")->address);
        return fn();
    }
    static void GetMuleReinforceCount(DSMuleGameActorUnitResource* param1, int32_t& param2, int32_t& param3) {
        typedef void (*FnType)(DSMuleGameActorUnitResource* p1, int32_t& p2, int32_t& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sGetMuleReinforceCount")->address);
        return fn(param1, param2, param3);
    }
    static void GetMuleReinforceCountByIdentifier(const wchar_t* param1, int32_t& param2) {
        typedef void (*FnType)(const wchar_t* p1, int32_t& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sGetMuleReinforceCountByIdentifier")->address);
        return fn(param1, param2);
    }
    static void MuleDirectDamageToStatus(const GGUUID& param1, EMuleDownType param2) {
        typedef void (*FnType)(const GGUUID& p1, EMuleDownType p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sDirectDamageToStatus")->address);
        return fn(param1, param2);
    }
    static void RequestMuleReinforce(DSPatrolPath* param1, int32_t param2, bool param3, bool param4, float param5, DSMuleGameActorUnitResource* param6, DSMuleConfig* param7, DSMuleCPGameActorLocator* param8, const wchar_t* param9, const ArtPartsVariationResource* param10, float param11, float param12, Array_uint& param13) {
        typedef void (*FnType)(DSPatrolPath* p1, int32_t p2, bool p3, bool p4, float p5, DSMuleGameActorUnitResource* p6, DSMuleConfig* p7, DSMuleCPGameActorLocator* p8, const wchar_t* p9, const ArtPartsVariationResource* p10, float p11, float p12, Array_uint& p13);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sRequestMuleReinforce")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13);
    }
    static void RequestReinforceForEachRoute(const DSPatrolPathPriorityList* param1, bool param2, bool param3, float param4, DSMuleGameActorUnitResource* param5, DSMuleConfig* param6, DSMuleCPGameActorLocator* param7, const wchar_t* param8, Array_cptr_ArtPartsVariationResource& param9, float param10, float param11, Array_uint& param12) {
        typedef void (*FnType)(const DSPatrolPathPriorityList* p1, bool p2, bool p3, float p4, DSMuleGameActorUnitResource* p5, DSMuleConfig* p6, DSMuleCPGameActorLocator* p7, const wchar_t* p8, Array_cptr_ArtPartsVariationResource& p9, float p10, float p11, Array_uint& p12);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sRequestReinforceForEachRoute")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12);
    }
    static void SetDbgMuleMoveSpeedScale(const wchar_t* param1, float param2) {
        typedef void (*FnType)(const wchar_t* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sSetDbgMuleMoveSpeedScale")->address);
        return fn(param1, param2);
    }
    static void SetForceMuleStance(EDSMuleStance param1) {
        typedef void (*FnType)(EDSMuleStance p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sSetForceMuleStance")->address);
        return fn(param1);
    }
    static void SetSequenceOnlyMule(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sSetSequenceOnlyMule")->address);
        return fn(param1);
    }
    static void UpdateFriendlyMuleActivationStatus() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sUpdateFriendlyMuleActivationStatus")->address);
        return fn();
    }
};

struct WieldStowInventory {
    // members
    uint8_t m_pad[0x0];
    // functions
    void AddStoredItems(const GGUUID& param1, EInventoryCategory param2, bool param3) {
        typedef void (*FnType)(WieldStowInventory* self, const GGUUID& p1, EInventoryCategory p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WieldStowInventory_ExportedAddStoredItems")->address);
        return fn(this, param1, param2, param3);
    }
    InventoryItem* GetActiveItem() {
        typedef InventoryItem* (*FnType)(WieldStowInventory* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WieldStowInventory_ExportedGetActiveItem")->address);
        return fn(this);
    }
    void RemoveAndStoreItems(const GGUUID& param1, EInventoryCategory param2, bool param3) {
        typedef void (*FnType)(WieldStowInventory* self, const GGUUID& p1, EInventoryCategory p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WieldStowInventory_ExportedRemoveAndStoreItems")->address);
        return fn(this, param1, param2, param3);
    }
    void StowActiveItem(bool param1) {
        typedef void (*FnType)(WieldStowInventory* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WieldStowInventory_ExportedStowActiveItem")->address);
        return fn(this, param1);
    }
    void WieldItem(InventoryItem* param1, bool param2) {
        typedef void (*FnType)(WieldStowInventory* self, InventoryItem* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WieldStowInventory_ExportedWieldItem")->address);
        return fn(this, param1, param2);
    }
};

struct DSWorldMapHoloComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AddWorldMapHoloConnectedPoint(Entity* param1, const GGUUID& param2, const GGUUID& param3, const GGUUID& param4, const GGUUID& param5, const GGUUID& param6, const GGUUID& param7, const GGUUID& param8, const GGUUID& param9, const GGUUID& param10) {
        typedef void (*FnType)(Entity* p1, const GGUUID& p2, const GGUUID& p3, const GGUUID& p4, const GGUUID& p5, const GGUUID& p6, const GGUUID& p7, const GGUUID& p8, const GGUUID& p9, const GGUUID& p10);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWorldMapHoloComponent_sExportedAddWorldMapHoloConnectedPoint")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10);
    }
    static void AddWorldMapHoloConnection(Entity* param1, const GGUUID& param2, const GGUUID& param3, bool param4) {
        typedef void (*FnType)(Entity* p1, const GGUUID& p2, const GGUUID& p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWorldMapHoloComponent_sExportedAddWorldMapHoloConnection")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SetWorldMapHoloCursor(Entity* param1, const GGUUID& param2, bool param3) {
        typedef void (*FnType)(Entity* p1, const GGUUID& p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWorldMapHoloComponent_sExportedSetWorldMapHoloCursor")->address);
        return fn(param1, param2, param3);
    }
    static void SetWorldMapHoloPlayerCursor(Entity* param1, const GGUUID& param2, bool param3) {
        typedef void (*FnType)(Entity* p1, const GGUUID& p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWorldMapHoloComponent_sExportedSetWorldMapHoloPlayerCursor")->address);
        return fn(param1, param2, param3);
    }
    static void SetWorldMapHoloPlayerPositionCursor(Entity* param1, const WorldPosition& param2, EDSArea param3, bool param4) {
        typedef void (*FnType)(Entity* p1, const WorldPosition& p2, EDSArea p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWorldMapHoloComponent_sExportedSetWorldMapHoloPlayerPositionCursor")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct MountableComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static Entity* GetMounter(Entity* param1, const GGUUID& param2) {
        typedef Entity* (*FnType)(Entity* p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MountableComponent_sExportedGetMounter")->address);
        return fn(param1, param2);
    }
    static bool Mount(Entity* param1, Entity* param2, const MountModeID* param3, bool param4) {
        typedef bool (*FnType)(Entity* p1, Entity* p2, const MountModeID* p3, bool p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MountableComponent_sExportedMount")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct MounterComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool HasMounted(const Entity* param1) {
        typedef bool (*FnType)(MounterComponent* self, const Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MounterComponent_ExportedHasMounted")->address);
        return fn(this, param1);
    }
};

struct DSPlayerNodeExporter {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AddCryptbiosisCount(int32_t param1, bool param2) {
        typedef void (*FnType)(int32_t p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedAddCryptbiosisCount")->address);
        return fn(param1, param2);
    }
    static void DisconnectCartAndPlaceAroundReturnPoint() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sDisconnectCartAndPlaceAroundReturnPoint")->address);
        return fn();
    }
    static void GetReturnPointTransform(WorldTransform& param1) {
        typedef void (*FnType)(WorldTransform& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedGetReturnPointTransform")->address);
        return fn(param1);
    }
    static float GetUsedBloodPackAmount() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedGetUsedBloodPackAmount")->address);
        return fn();
    }
    static bool IsEquippedItem(EDSItemId param1) {
        typedef bool (*FnType)(EDSItemId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedIsEquippedItem")->address);
        return fn(param1);
    }
    static void MarkToOnsen(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedMarkToOnsen")->address);
        return fn(param1);
    }
    static void PlayerHelperSupplySystemEnable(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedPlayerHelperSupplySystemEnable")->address);
        return fn(param1);
    }
    static void RecoverFullAtPrivateRoom() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedRecoverFullAtPrivateRoom")->address);
        return fn();
    }
    static void ResetCryptobiosisReviveDistance() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedResetCryptobiosisReviveDistance")->address);
        return fn();
    }
    static void ResetNumCryptbiosisAroundCoral() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedResetNumCryptbiosisAroundCoral")->address);
        return fn();
    }
    static void ResetPrivateRoomGlassesAndCap() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedResetPrivateRoomGlassesAndCap")->address);
        return fn();
    }
    static void SetCryptbiosisCount(int32_t param1, bool param2) {
        typedef void (*FnType)(int32_t p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedSetCryptbiosisCount")->address);
        return fn(param1, param2);
    }
    static void SetCryptobiosisReviveDistance(float param1) {
        typedef void (*FnType)(float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedSetCryptobiosisReviveDistance")->address);
        return fn(param1);
    }
    static void SetNumCryptbiosisAroundCoral(int32_t param1, int32_t param2, int32_t param3) {
        typedef void (*FnType)(int32_t p1, int32_t p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedSetNumCryptbiosisAroundCoral")->address);
        return fn(param1, param2, param3);
    }
    static void UnequipAccessoriesForBeach() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedUnequipAccessoriesForBeach")->address);
        return fn();
    }
};

struct PlayGoManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GetProgressAndETA(float& param1, uint64_t& param2) {
        typedef void (*FnType)(float& p1, uint64_t& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedGetPlayGoProgressAndETA")->address);
        return fn(param1, param2);
    }
};

struct FacialAnimationComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void PlayAnimation(const SkeletonAnimationResource* param1, float param2) {
        typedef void (*FnType)(FacialAnimationComponent* self, const SkeletonAnimationResource* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FacialAnimationComponent_ExportedPlayAnimation")->address);
        return fn(this, param1, param2);
    }
    void StopAnimation(float param1) {
        typedef void (*FnType)(FacialAnimationComponent* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FacialAnimationComponent_ExportedStopAnimation")->address);
        return fn(this, param1);
    }
};

struct ContextualActionComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsPerformingContextualAction() {
        typedef bool (*FnType)(ContextualActionComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ContextualActionComponent_ExportedIsPerformingContextualAction")->address);
        return fn(this);
    }
};

struct DSDeliveredBaggageArgs {
    // members
    uint8_t m_pad[0x0];
    // functions
    int32_t GetBaggageListItemNameCode() {
        typedef int32_t (*FnType)(DSDeliveredBaggageArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveredBaggageArgs_ExportedGetBaggageListItemNameCode")->address);
        return fn(this);
    }
    int32_t GetDeadBodyGameActorIdCode() {
        typedef int32_t (*FnType)(DSDeliveredBaggageArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveredBaggageArgs_ExportedGetDeadBodyGameActorIdCode")->address);
        return fn(this);
    }
    uint64_t GetMissionId() {
        typedef uint64_t (*FnType)(DSDeliveredBaggageArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveredBaggageArgs_ExportedGetMissionId")->address);
        return fn(this);
    }
};

struct DsCheckStationGraphCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void CheckStation_ContactScanner() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsCheckStationGraphCommand_sExportedContactScanner")->address);
        return fn();
    }
    static void CheckStation_GetInfo(GGUUID param1, uint32_t* param2, uint32_t* param3, uint32_t* param4, bool* param5) {
        typedef void (*FnType)(GGUUID p1, uint32_t* p2, uint32_t* p3, uint32_t* p4, bool* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsCheckStationGraphCommand_sExportedGetInfo")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static uint32_t CheckStation_GetNonBaggageDeadBodyCount(int32_t param1) {
        typedef uint32_t (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsCheckStationGraphCommand_sExportedGetNonBaggageDeadBodyCount")->address);
        return fn(param1);
    }
    static void CheckStation_ShowPlayerInfoMessages(EDSCheckStationScanInfo param1) {
        typedef void (*FnType)(EDSCheckStationScanInfo p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsCheckStationGraphCommand_sExportedShowPlayerInfoMessages")->address);
        return fn(param1);
    }
};

struct DSMissionBasicNode {
    // members
    uint8_t m_pad[0x0];
    // functions
    static int32_t CalcCanCancelProgressMissionCount() {
        typedef int32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sCalcCanCancelProgressMissionCount")->address);
        return fn();
    }
    static void CalcProgressMissionCountHeavy(int32_t* param1, int32_t* param2, int32_t* param3, int32_t* param4, int32_t* param5, int32_t* param6) {
        typedef void (*FnType)(int32_t* p1, int32_t* p2, int32_t* p3, int32_t* p4, int32_t* p5, int32_t* p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sCalcProgressMissionCountHeavy")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void DebugDelayRemoveBaggageByName(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugDelayRemoveBaggageByName")->address);
        return fn(param1);
    }
    static void DebugDeleteMissionBaggage(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugDeleteMissionBaggage")->address);
        return fn(param1);
    }
    static bool DebugIsDebugEntryBusy() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugIsDebugEntryBusy")->address);
        return fn();
    }
    static void DebugRemoveBaggageByName(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugRemoveBaggageByName")->address);
        return fn(param1);
    }
    static void DebugResetAccessingTerminal() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugResetAccessingTerminal")->address);
        return fn();
    }
    static void DebugSetAccessingTerminal(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugSetAccessingTerminal")->address);
        return fn(param1);
    }
    static void DebugUpdateMissionSystem() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugUpdateMissionSystem")->address);
        return fn();
    }
    static void GetMainMissionIdArray(Array_uint64* param1) {
        typedef void (*FnType)(Array_uint64* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sGetMainMissionIdArray")->address);
        return fn(param1);
    }
    static int32_t GetMissionTypeById(uint64_t param1) {
        typedef int32_t (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sGetMissionTypeById")->address);
        return fn(param1);
    }
    static bool IsHalflifeMissionById(uint64_t param1) {
        typedef bool (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sIsHalflifeMissionById")->address);
        return fn(param1);
    }
    static void RequestDispMissionStartHud(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sRequestDispMissionStartHud")->address);
        return fn(param1);
    }
};

struct ShaderAnimComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void EndShaderAnim() {
        typedef void (*FnType)(ShaderAnimComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderAnimComponent_ExportedEndShaderAnim")->address);
        return fn(this);
    }
    void IsFinished(bool& param1) {
        typedef void (*FnType)(ShaderAnimComponent* self, bool& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderAnimComponent_ExportedIsFinished")->address);
        return fn(this, param1);
    }
    void SwapComponentAfterShaderAnim(const EntityComponentResource* param1) {
        typedef void (*FnType)(ShaderAnimComponent* self, const EntityComponentResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderAnimComponent_ExportedSwapComponentAfterShaderAnim")->address);
        return fn(this, param1);
    }
    void SwapEntityAfterShaderAnim(const EntityResource* param1) {
        typedef void (*FnType)(ShaderAnimComponent* self, const EntityResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderAnimComponent_ExportedSwapEntityAfterShaderAnim")->address);
        return fn(this, param1);
    }
};

struct DSTerminalGraphArgs {
    // members
    uint8_t m_pad[0x118];
    // functions
    void GetBonusInfoArray(Array_cptr_DSTerminalGraphBonusArgs* param1) {
        typedef void (*FnType)(DSTerminalGraphArgs* self, Array_cptr_DSTerminalGraphBonusArgs* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_ExportedGetBonusInfoArray")->address);
        return fn(this, param1);
    }
    static void GetDeliveredBaggages(const DSTerminalGraphArgs* param1, uint64_t param2, Array_cptr_DSDeliveredBaggageArgs* param3) {
        typedef void (*FnType)(const DSTerminalGraphArgs* p1, uint64_t p2, Array_cptr_DSDeliveredBaggageArgs* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_sExportedGetDeliveredBaggages")->address);
        return fn(param1, param2, param3);
    }
    static void GetDeliveredDeadBodyBaggages(const DSTerminalGraphArgs* param1, Array_cptr_DSDeliveredBaggageArgs* param2) {
        typedef void (*FnType)(const DSTerminalGraphArgs* p1, Array_cptr_DSDeliveredBaggageArgs* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_sExportedGetDeliveredDeadBodyBaggages")->address);
        return fn(param1, param2);
    }
    static void GetDeliveredMemoryChips(const DSTerminalGraphArgs* param1, Array_cptr_DSDeliveredMemoryChipArgs* param2) {
        typedef void (*FnType)(const DSTerminalGraphArgs* p1, Array_cptr_DSDeliveredMemoryChipArgs* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_sExportedGetDeliveredMemoryChips")->address);
        return fn(param1, param2);
    }
    void GetEvaluationInfoArray(Array_cptr_DSTerminalGraphEvaluationArgs* param1) {
        typedef void (*FnType)(DSTerminalGraphArgs* self, Array_cptr_DSTerminalGraphEvaluationArgs* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_ExportedGetEvaluationInfoArray")->address);
        return fn(this, param1);
    }
    int32_t GetGivenChiral() {
        typedef int32_t (*FnType)(DSTerminalGraphArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_ExportedGetGivenChiral")->address);
        return fn(this);
    }
    static void GetOrderedBaggages(const DSTerminalGraphArgs* param1, uint64_t param2, Array_cptr_DSOrderedBaggageArgs* param3) {
        typedef void (*FnType)(const DSTerminalGraphArgs* p1, uint64_t p2, Array_cptr_DSOrderedBaggageArgs* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_sExportedGetOrderedBaggages")->address);
        return fn(param1, param2, param3);
    }
    int32_t GetParam(int32_t param1) {
        typedef int32_t (*FnType)(DSTerminalGraphArgs* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_ExportedGetParam")->address);
        return fn(this, param1);
    }
    void GetTerminalGraphArgs(int32_t param1, Array_uint64* param2, Array_uint64* param3, Array_uint64* param4, Array_uint64* param5, Array_uint* param6, Array_uint* param7, Array_uint* param8, bool* param9, bool* param10, bool* param11, bool* param12, int32_t* param13, EDSQpidLevelUpEvent* param14, int32_t* param15, int32_t* param16, int32_t* param17, int32_t* param18, bool* param19, bool* param20) {
        typedef void (*FnType)(DSTerminalGraphArgs* self, int32_t p1, Array_uint64* p2, Array_uint64* p3, Array_uint64* p4, Array_uint64* p5, Array_uint* p6, Array_uint* p7, Array_uint* p8, bool* p9, bool* p10, bool* p11, bool* p12, int32_t* p13, EDSQpidLevelUpEvent* p14, int32_t* p15, int32_t* p16, int32_t* p17, int32_t* p18, bool* p19, bool* p20);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_ExportedGetTerminalGraphArgs")->address);
        return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20);
    }
};

struct DSAirplaneGameActorLocator {
    // members
    uint8_t m_pad[0x0];
    // functions
    void AirplaneFire(float param1, float param2, float param3, EDSAttackId param4, float param5, bool param6) {
        typedef void (*FnType)(DSAirplaneGameActorLocator* self, float p1, float p2, float p3, EDSAttackId p4, float p5, bool p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedAirplaneFire")->address);
        return fn(this, param1, param2, param3, param4, param5, param6);
    }
    void AirplaneLaunchShell(const DSShellResource* param1, float param2, float param3, float param4, float param5) {
        typedef void (*FnType)(DSAirplaneGameActorLocator* self, const DSShellResource* p1, float p2, float p3, float p4, float p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedAirplaneLaunchShell")->address);
        return fn(this, param1, param2, param3, param4, param5);
    }
    void AirplaneStopFire() {
        typedef void (*FnType)(DSAirplaneGameActorLocator* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedAirplaneStopFire")->address);
        return fn(this);
    }
    void AirplaneStrafe(const WorldPosition& param1, const WorldPosition& param2, const WorldTransform& param3, float param4, float param5, float param6, float param7, float param8, float param9, EDSAttackId param10, float param11, bool param12) {
        typedef void (*FnType)(DSAirplaneGameActorLocator* self, const WorldPosition& p1, const WorldPosition& p2, const WorldTransform& p3, float p4, float p5, float p6, float p7, float p8, float p9, EDSAttackId p10, float p11, bool p12);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedAirplaneStrafe")->address);
        return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12);
    }
    void DespawnAirplaneEntity(float param1) {
        typedef void (*FnType)(DSAirplaneGameActorLocator* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedDespawnAirplaneEntity")->address);
        return fn(this, param1);
    }
    DSAirplaneGameActor* GetAirplaneGameActor() {
        typedef DSAirplaneGameActor* (*FnType)(DSAirplaneGameActorLocator* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedGetAirplaneGameActor")->address);
        return fn(this);
    }
    WorldPosition GetAirplanePositionAfterTime(float param1) {
        typedef WorldPosition (*FnType)(DSAirplaneGameActorLocator* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedGetAirplanePositionAfterTime")->address);
        return fn(this, param1);
    }
    void MoveAirplane(const WorldTransform& param1, float param2) {
        typedef void (*FnType)(DSAirplaneGameActorLocator* self, const WorldTransform& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedMoveAirplane")->address);
        return fn(this, param1, param2);
    }
    void MoveAirplanePathFromNode(const DSMovementPath* param1) {
        typedef void (*FnType)(DSAirplaneGameActorLocator* self, const DSMovementPath* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedMoveAirplanePathFromNode")->address);
        return fn(this, param1);
    }
    void MoveAirplanePathPoint(const WorldTransform& param1, float param2) {
        typedef void (*FnType)(DSAirplaneGameActorLocator* self, const WorldTransform& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedMoveAirplanePathPoint")->address);
        return fn(this, param1, param2);
    }
    void NewAirplanePath(bool param1, bool param2, bool param3) {
        typedef void (*FnType)(DSAirplaneGameActorLocator* self, bool p1, bool p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedNewAirplanePath")->address);
        return fn(this, param1, param2, param3);
    }
    WorldPosition PredictAirplaneHitPosition(const WorldPosition& param1, float param2) {
        typedef WorldPosition (*FnType)(DSAirplaneGameActorLocator* self, const WorldPosition& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedPredictAirplaneHitPosition")->address);
        return fn(this, param1, param2);
    }
    void ShakeAirplane(float param1, float param2, float param3) {
        typedef void (*FnType)(DSAirplaneGameActorLocator* self, float p1, float p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedShakeAirplane")->address);
        return fn(this, param1, param2, param3);
    }
    bool SpawnAirplaneEntity(const WorldTransform& param1, float param2, float param3) {
        typedef bool (*FnType)(DSAirplaneGameActorLocator* self, const WorldTransform& p1, float p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedSpawnAirplaneEntity")->address);
        return fn(this, param1, param2, param3);
    }
};

struct AIScanExpressionParams {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetParams(float* param1, float* param2) {
        typedef void (*FnType)(AIScanExpressionParams* self, float* p1, float* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIScanExpressionParams_ExportedGetParams")->address);
        return fn(this, param1, param2);
    }
};

struct InstigatorData {
    // members
    uint8_t m_pad[0x40];
    // functions
    Entity* GetEntity() {
        typedef Entity* (*FnType)(InstigatorData* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InstigatorData_ExportedGetEntity")->address);
        return fn(this);
    }
    AIFaction* GetFaction() {
        typedef AIFaction* (*FnType)(InstigatorData* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InstigatorData_ExportedGetFaction")->address);
        return fn(this);
    }
    Player* GetPlayer() {
        typedef Player* (*FnType)(InstigatorData* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InstigatorData_ExportedGetPlayer")->address);
        return fn(this);
    }
    bool IsSet() {
        typedef bool (*FnType)(InstigatorData* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InstigatorData_ExportedIsSet")->address);
        return fn(this);
    }
};

struct AttackEventContext {
    // members
    uint8_t m_pad[0xf0];
    // functions
    const Entity* GetDamager() {
        typedef const Entity* (*FnType)(AttackEventContext* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttackEventContext_ExportedGetDamager")->address);
        return fn(this);
    }
    const InstigatorData* GetInstigator() {
        typedef const InstigatorData* (*FnType)(AttackEventContext* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttackEventContext_ExportedGetInstigator")->address);
        return fn(this);
    }
    const AttackEventContext* GetParentContext() {
        typedef const AttackEventContext* (*FnType)(AttackEventContext* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttackEventContext_ExportedGetParentContext")->address);
        return fn(this);
    }
    Array_cptr_AttackEventTag GetTags() {
        typedef Array_cptr_AttackEventTag (*FnType)(AttackEventContext* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttackEventContext_ExportedGetTags")->address);
        return fn(this);
    }
    const AttackEventContext* GetTopOfHierarchy() {
        typedef const AttackEventContext* (*FnType)(AttackEventContext* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttackEventContext_ExportedGetTopOfHierarchy")->address);
        return fn(this);
    }
    const EntityComponentResource* GetWeaponModeResource() {
        typedef const EntityComponentResource* (*FnType)(AttackEventContext* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttackEventContext_ExportedGetWeaponModeResource")->address);
        return fn(this);
    }
    const EntityResource* GetWeaponResource() {
        typedef const EntityResource* (*FnType)(AttackEventContext* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttackEventContext_ExportedGetWeaponResource")->address);
        return fn(this);
    }
};

struct AIWeaponPreference {
    // members
    uint8_t m_pad[0x0];
    // functions
    const HtnSymbol* GetNameSymbol() {
        typedef const HtnSymbol* (*FnType)(AIWeaponPreference* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIWeaponPreference_ExportedGetNameSymbol")->address);
        return fn(this);
    }
};

struct DSGimmickGraphCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ActivatePhysicsGimmickObjects(const WorldPosition& param1, float param2, const SoundResource* param3) {
        typedef void (*FnType)(const WorldPosition& p1, float p2, const SoundResource* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedActivatePhysicsGimmickObjects")->address);
        return fn(param1, param2, param3);
    }
    static void ActivatePhysicsGimmickObjectsWithSoundEnd(const WorldPosition& param1) {
        typedef void (*FnType)(const WorldPosition& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedActivatePhysicsGimmickObjectsWithSoundEnd")->address);
        return fn(param1);
    }
    static void ActivatePhysicsGimmickObjectsWithSoundStart(const WorldPosition& param1, float param2, const SoundResource* param3) {
        typedef void (*FnType)(const WorldPosition& p1, float p2, const SoundResource* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedActivatePhysicsGimmickObjectsWithSoundStart")->address);
        return fn(param1, param2, param3);
    }
    static void DisableAutoDoorGimmickBaggageCheck(GGUUID param1, bool param2) {
        typedef void (*FnType)(GGUUID p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedDisableAutoDoorGimmickBaggageCheck")->address);
        return fn(param1, param2);
    }
    static void DisableDSCheckStationAlarm(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedDisableDSCheckStationAlarm")->address);
        return fn(param1);
    }
    static void LockAutoDoorGimmick(GGUUID param1, bool param2) {
        typedef void (*FnType)(GGUUID p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedLockAutoDoorGimmick")->address);
        return fn(param1, param2);
    }
    static void MovePendulumGimmick(GGUUID param1, float param2) {
        typedef void (*FnType)(GGUUID p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedMovePendulumGimmick")->address);
        return fn(param1, param2);
    }
    static void NotifyGimmickSpawnMessage(const DSLocator* param1, bool param2, const Vec3& param3, const Vec3& param4) {
        typedef void (*FnType)(const DSLocator* p1, bool p2, const Vec3& p3, const Vec3& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedNotifyGimmickSpawnMessage")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SetFiringTargetWaiting(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedSetFiringTargetWaiting")->address);
        return fn(param1);
    }
    static void SetInvisibleSharedGimmick(GGUUID param1, bool param2) {
        typedef void (*FnType)(GGUUID p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedSetInvisibleSharedGimmick")->address);
        return fn(param1, param2);
    }
};

struct DSGraphServiceArgs {
    // members
    uint8_t m_pad[0x20];
    // functions
    int32_t GetInt(uint32_t param1) {
        typedef int32_t (*FnType)(DSGraphServiceArgs* self, uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGraphServiceArgs_ExportedGetInt")->address);
        return fn(this, param1);
    }
    int32_t GetMessageNameHash() {
        typedef int32_t (*FnType)(DSGraphServiceArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGraphServiceArgs_ExportedGetMessageNameHash")->address);
        return fn(this);
    }
};

struct MeleeBlockComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool IsBlocking(const Entity* param1) {
        typedef bool (*FnType)(const Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MeleeBlockComponent_sExportedIsBlocking")->address);
        return fn(param1);
    }
};

struct FastTravelSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void DisableFastTravel(const LocalizedTextResource* param1) {
        typedef void (*FnType)(const LocalizedTextResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FastTravelSystem_sExportedDisableFastTravel")->address);
        return fn(param1);
    }
    static void EnableFastTravel(const LocalizedTextResource* param1) {
        typedef void (*FnType)(const LocalizedTextResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FastTravelSystem_sExportedEnableFastTravel")->address);
        return fn(param1);
    }
};

struct DSSleepAfterShaderAnimComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void SleepAfterShaderAnim(Entity* param1) {
        typedef void (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSleepAfterShaderAnimComponent_sExportedSleepAfterShaderAnim")->address);
        return fn(param1);
    }
    static void WakeupAndRestartShaderAnim(Entity* param1) {
        typedef void (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSleepAfterShaderAnimComponent_sExportedWakeupAndRestartShaderAnim")->address);
        return fn(param1);
    }
};

struct GestureComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void RequestGesture(const String& param1) {
        typedef void (*FnType)(GestureComponent* self, const String& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GestureComponent_ExportedRequestGesture")->address);
        return fn(this, param1);
    }
    void RequestGestureWithEntityGestureTarget(const String& param1, const Entity* param2) {
        typedef void (*FnType)(GestureComponent* self, const String& p1, const Entity* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GestureComponent_ExportedRequestGestureWithEntityGestureTarget")->address);
        return fn(this, param1, param2);
    }
    void RequestGestureWithWorldPositionGestureTarget(const String& param1, const WorldPosition& param2) {
        typedef void (*FnType)(GestureComponent* self, const String& p1, const WorldPosition& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GestureComponent_ExportedRequestGestureWithWorldPositionGestureTarget")->address);
        return fn(this, param1, param2);
    }
};

struct MovieTag {
    // members
    uint8_t m_pad[0x0];
    // functions
    void StartMovie() {
        typedef void (*FnType)(MovieTag* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MovieTag_ExportedStartMovie")->address);
        return fn(this);
    }
    void StopMovie() {
        typedef void (*FnType)(MovieTag* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MovieTag_ExportedStopMovie")->address);
        return fn(this);
    }
};

struct Application {
    // members
    uint8_t m_pad[0x910];
    // functions
    static void ContinueLastSave() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Application_sExportedContinueLastSave")->address);
        return fn();
    }
    static Application* GetApplication() {
        typedef Application* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Application_sExportedGetApplication")->address);
        return fn();
    }
    static void LoadAlwaysLoaded(const Level* param1) {
        typedef void (*FnType)(const Level* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Application_sExportedLoadAlwaysLoaded")->address);
        return fn(param1);
    }
    static void SelectAndLoadGame() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Application_sExportedSelectAndLoadGame")->address);
        return fn();
    }
    static void StartCredits(const Level* param1) {
        typedef void (*FnType)(const Level* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Application_sExportedStartCredits")->address);
        return fn(param1);
    }
    static void StartGame(const Level* param1) {
        typedef void (*FnType)(const Level* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Application_sExportedStartGame")->address);
        return fn(param1);
    }
};

struct DSAmelieGestureComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void RequestAmelieHandWaving(Entity* param1) {
        typedef void (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAmelieGestureComponent_sExportedRequestHandWaving")->address);
        return fn(param1);
    }
};

struct Math {
    // members
    uint8_t m_pad[0x0];
    // functions
    static Mat44 gComposeMat44(const Quat& param1, const Vec3& param2, const Vec3& param3) {
        typedef Mat44 (*FnType)(const Quat& p1, const Vec3& p2, const Vec3& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Mat44 (&)(rcQuat inRotation, rcVec3 inTranslation, rcVec3 inScale))gComposeMat44")->address);
        return fn(param1, param2, param3);
    }
    static Mat44 gMatrixInverse3x4(const Mat44& param1) {
        typedef Mat44 (*FnType)(const Mat44& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Mat44 (&)(rcMat44 inMatrix))gMatrixInverse3x4")->address);
        return fn(param1);
    }
    static void gMayaDecomposeAffineMatrix(const Mat44& param1, Vec3& param2, Mat44& param3, Vec3& param4) {
        typedef void (*FnType)(const Mat44& p1, Vec3& p2, Mat44& p3, Vec3& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(void (&)(rcMat44 inMatrix, rVec3 outScaling, rMat44 outRotation, rVec3 outTranslation))gMayaDecomposeAffineMatrix")->address);
        return fn(param1, param2, param3, param4);
    }
    static Mat44 gMayaEulerTo4x4(const Vec3& param1) {
        typedef Mat44 (*FnType)(const Vec3& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Mat44 (&)(rcVec3 inEuler))gMayaEulerTo4x4")->address);
        return fn(param1);
    }
    static Vec3 gMayaGetEulerXYZ(const Quat& param1) {
        typedef Vec3 (*FnType)(const Quat& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Vec3 (&)(rcQuat inQuat))gMayaGetEulerXYZ")->address);
        return fn(param1);
    }
    static Quat gMayaQuatFrom4x4(const Mat44& param1) {
        typedef Quat (*FnType)(const Mat44& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Quat (&)(rcMat44 in))gMayaQuatFrom4x4")->address);
        return fn(param1);
    }
    static Mat44 gMayaQuatTo4x4(const Quat& param1) {
        typedef Mat44 (*FnType)(const Quat& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Mat44 (&)(rcQuat in))gMayaQuatTo4x4")->address);
        return fn(param1);
    }
};

struct PathMover {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetDistance(float param1) {
        typedef void (*FnType)(PathMover* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PathMover_ExportedSetDistance")->address);
        return fn(this, param1);
    }
    void SetPaused(bool param1) {
        typedef void (*FnType)(PathMover* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PathMover_ExportedSetPaused")->address);
        return fn(this, param1);
    }
    void SetTime(float param1) {
        typedef void (*FnType)(PathMover* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PathMover_ExportedSetTime")->address);
        return fn(this, param1);
    }
};

struct ModificationSocketComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void RemoveModificationItem(InventoryItem* param1, int32_t param2) {
        typedef void (*FnType)(InventoryItem* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ModificationSocketComponent_sExportedRemoveModificationItem")->address);
        return fn(param1, param2);
    }
    static void SocketModificationItem(InventoryItem* param1, InventoryItem* param2, int32_t param3) {
        typedef void (*FnType)(InventoryItem* p1, InventoryItem* p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ModificationSocketComponent_sExportedSocketModificationItem")->address);
        return fn(param1, param2, param3);
    }
};

struct DSRumbleEventComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void StartRumbleEvent(uint32_t param1, float param2, float param3) {
        typedef void (*FnType)(DSRumbleEventComponent* self, uint32_t p1, float p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRumbleEventComponent_ExportedStartRumbleEvent")->address);
        return fn(this, param1, param2, param3);
    }
    void StopRumbleEvent(uint32_t param1) {
        typedef void (*FnType)(DSRumbleEventComponent* self, uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRumbleEventComponent_ExportedStopRumbleEvent")->address);
        return fn(this, param1);
    }
};

struct WeatherSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetConditions(const WorldPosition& param1, Vec3* param2, Vec3* param3, float* param4, float* param5, float* param6, float* param7, float* param8, float* param9, float* param10, float* param11, float* param12, float* param13) {
        typedef void (*FnType)(WeatherSystem* self, const WorldPosition& p1, Vec3* p2, Vec3* p3, float* p4, float* p5, float* p6, float* p7, float* p8, float* p9, float* p10, float* p11, float* p12, float* p13);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WeatherSystem_ExportedGetConditions")->address);
        return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13);
    }
    void GetIndoorClimateFraction(float* param1) {
        typedef void (*FnType)(WeatherSystem* self, float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WeatherSystem_ExportedGetIndoorClimateFraction")->address);
        return fn(this, param1);
    }
    void ResetWeather() {
        typedef void (*FnType)(WeatherSystem* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WeatherSystem_ExportedResetWeather")->address);
        return fn(this);
    }
    void SetWeatherOverride(const WeatherSetup* param1, float param2) {
        typedef void (*FnType)(WeatherSystem* self, const WeatherSetup* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WeatherSystem_ExportedSetWeatherOverride")->address);
        return fn(this, param1, param2);
    }
};

struct DSNpcCombatSettings {
    // members
    uint8_t m_pad[0x0];
    // functions
    void ResetSceneCombatSettings(const Scene* param1) {
        typedef void (*FnType)(DSNpcCombatSettings* self, const Scene* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcCombatSettings_ExportedResetSceneCombatSettings")->address);
        return fn(this, param1);
    }
    void SetCombatSettings() {
        typedef void (*FnType)(DSNpcCombatSettings* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcCombatSettings_ExportedSetCombatSettings")->address);
        return fn(this);
    }
    void SetSceneCombatSettings(const Scene* param1) {
        typedef void (*FnType)(DSNpcCombatSettings* self, const Scene* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcCombatSettings_ExportedSetSceneCombatSettings")->address);
        return fn(this, param1);
    }
};

struct ExtraArmorComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetExtraArmor(float* param1, float* param2, float* param3) {
        typedef void (*FnType)(ExtraArmorComponent* self, float* p1, float* p2, float* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ExtraArmorComponent_ExportedGetExtraArmor")->address);
        return fn(this, param1, param2, param3);
    }
    void InitExtraArmor(float param1) {
        typedef void (*FnType)(ExtraArmorComponent* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ExtraArmorComponent_ExportedInitExtraArmor")->address);
        return fn(this, param1);
    }
};

struct EntityPlaceHolder {
    // members
    uint8_t m_pad[0x0];
    // functions
    static Entity* GetEntity(const GGUUID& param1) {
        typedef Entity* (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityPlaceHolder_sExportedGetEntity")->address);
        return fn(param1);
    }
};

struct WwiseGroup {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool WwiseGetControllerSpeakerEnableExport() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Wwise::sGetControllerSpeakerEnable")->address);
        return fn();
    }
    static bool WwiseGetFootSoundToControllerSpeakerExport() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Wwise::sGetFootSoundToControllerSpeaker")->address);
        return fn();
    }
    static uint32_t WwiseGetId(const wchar_t* param1) {
        typedef uint32_t (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Wwise::sGetID")->address);
        return fn(param1);
    }
    static int32_t WwiseGetMasterVolumeExport() {
        typedef int32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Wwise::sGetMasterVolume")->address);
        return fn();
    }
    static uint32_t WwiseID_GetId(const WwiseID* param1) {
        typedef uint32_t (*FnType)(const WwiseID* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseID::sGetId")->address);
        return fn(param1);
    }
    static bool WwiseIsAliveExport(uint64_t param1) {
        typedef bool (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sIsAliveExport")->address);
        return fn(param1);
    }
    static bool WwiseIsLoadingScreenExport() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sWwiseIsLoadingScreen")->address);
        return fn();
    }
    static void WwiseRtDbgGraphSoundResourceExport(bool param1, bool param2) {
        typedef void (*FnType)(bool p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgGraphSoundResourceExport")->address);
        return fn(param1, param2);
    }
    static uint32_t WwiseRtDbgPostEventByNameExport(const wchar_t* param1, uint64_t param2, bool param3) {
        typedef uint32_t (*FnType)(const wchar_t* p1, uint64_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgPostEventByNameExport")->address);
        return fn(param1, param2, param3);
    }
    static uint32_t WwiseRtDbgPostEventExport(uint32_t param1, uint64_t param2, bool param3) {
        typedef uint32_t (*FnType)(uint32_t p1, uint64_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgPostEventExport")->address);
        return fn(param1, param2, param3);
    }
    static uint32_t WwiseRtDbgPostEventWithCallbackExport(uint32_t param1, uint64_t param2, bool param3) {
        typedef uint32_t (*FnType)(uint32_t p1, uint64_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgPostEventWithCallbackExport")->address);
        return fn(param1, param2, param3);
    }
    static void WwiseRtDbgRegisterGameObjExport(uint64_t param1, const wchar_t* param2) {
        typedef void (*FnType)(uint64_t p1, const wchar_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgRegisterGameObjExport")->address);
        return fn(param1, param2);
    }
    static void WwiseRtDbgSetPositionExport(uint64_t param1, const Vec3& param2, const Quat& param3) {
        typedef void (*FnType)(uint64_t p1, const Vec3& p2, const Quat& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetPositionExport")->address);
        return fn(param1, param2, param3);
    }
    static void WwiseRtDbgUnregisterGameObjExport(uint64_t param1) {
        typedef void (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgUnregisterGameObjExport")->address);
        return fn(param1);
    }
    static void WwiseSetEventPauseExport(uint32_t param1, uint64_t param2, bool param3) {
        typedef void (*FnType)(uint32_t p1, uint64_t p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetEventPauseExport")->address);
        return fn(param1, param2, param3);
    }
    static void WwiseSetGlobalRTPCExport(uint32_t param1, float param2) {
        typedef void (*FnType)(uint32_t p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetGlobalRTPCExport")->address);
        return fn(param1, param2);
    }
    static void WwiseSetObjectObstructionAndOcclusionExport(uint64_t param1, uint32_t param2, float param3, float param4) {
        typedef void (*FnType)(uint64_t p1, uint32_t p2, float p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetObjectObstructionAndOcclusionExport")->address);
        return fn(param1, param2, param3, param4);
    }
    static void WwiseSetRTPCValueByPlayingIDExport(uint32_t param1, float param2, uint32_t param3, int32_t param4, uint32_t param5, bool param6) {
        typedef void (*FnType)(uint32_t p1, float p2, uint32_t p3, int32_t p4, uint32_t p5, bool p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetRTPCValueByPlayingIDExport")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void WwiseSetRTPCValueExport(uint32_t param1, float param2, uint64_t param3, int32_t param4, uint32_t param5, bool param6) {
        typedef void (*FnType)(uint32_t p1, float p2, uint64_t p3, int32_t p4, uint32_t p5, bool p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetRTPCValueExport")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void WwiseSetStateExport(uint32_t param1, uint32_t param2) {
        typedef void (*FnType)(uint32_t p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetStateExport")->address);
        return fn(param1, param2);
    }
};

struct WaterInteractionSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AddImpact(const WorldPosition& param1, const Vec3& param2, float param3, float param4) {
        typedef void (*FnType)(const WorldPosition& p1, const Vec3& p2, float p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WaterInteractionSystem_sExportedAddImpact")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct MenuSaveDataDialog {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CanSaveGame() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuSaveDataDialog_sExportedCanSaveGame")->address);
        return fn();
    }
    static bool DSCanSaveGame() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuSaveDataDialog_sExportedDSCanSaveGame")->address);
        return fn();
    }
    static void DSSelectSaveSlot(ESaveGameType param1) {
        typedef void (*FnType)(ESaveGameType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuSaveDataDialog_sExportedDSSelectSaveSlot")->address);
        return fn(param1);
    }
    static bool IsSaveDataLoadingOrRequested() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuSaveDataDialog_sExportedIsSaveDataLoadingOrRequested")->address);
        return fn();
    }
    static void SelectLoadSlot(ESaveGameType param1) {
        typedef void (*FnType)(ESaveGameType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuSaveDataDialog_sExportedSelectLoadSlot")->address);
        return fn(param1);
    }
    static void SelectSaveSlot(ESaveGameType param1) {
        typedef void (*FnType)(ESaveGameType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuSaveDataDialog_sExportedSelectSaveSlot")->address);
        return fn(param1);
    }
};

struct SnowInteractionSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static float sGetFollowPositionDeformation() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SnowInteractionSystem_sGetFollowPositionDeformation")->address);
        return fn();
    }
    static ESurfaceDeformationMode sGetMode() {
        typedef ESurfaceDeformationMode (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SnowInteractionSystem_sGetMode")->address);
        return fn();
    }
    static void sSetMode(ESurfaceDeformationMode param1) {
        typedef void (*FnType)(ESurfaceDeformationMode p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SnowInteractionSystem_sSetMode")->address);
        return fn(param1);
    }
};

struct AIPatrolPath {
    // members
    uint8_t m_pad[0x0];
    // functions
    const HtnSymbol* GetAlertContextHint() {
        typedef const HtnSymbol* (*FnType)(AIPatrolPath* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIPatrolPath_ExportedGetAlertContextHint")->address);
        return fn(this);
    }
    const AIContextHintResource* GetMovementContext() {
        typedef const AIContextHintResource* (*FnType)(AIPatrolPath* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIPatrolPath_ExportedGetMovementContext")->address);
        return fn(this);
    }
};

struct EquipmentSlotComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool Equip(InventoryItem* param1, int32_t param2) {
        typedef bool (*FnType)(EquipmentSlotComponent* self, InventoryItem* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EquipmentSlotComponent_ExportedEquip")->address);
        return fn(this, param1, param2);
    }
    Entity* GetCurrentItem(EEquipSlotType param1) {
        typedef Entity* (*FnType)(EquipmentSlotComponent* self, EEquipSlotType p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EquipmentSlotComponent_ExportedGetCurrentItem")->address);
        return fn(this, param1);
    }
};

struct ExtraHealthComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void RemoveExtraHealth(AttackEventLink* param1, const WorldPosition& param2, const Vec3& param3, float param4) {
        typedef void (*FnType)(ExtraHealthComponent* self, AttackEventLink* p1, const WorldPosition& p2, const Vec3& p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ExtraHealthComponent_ExportedRemoveExtraHealth")->address);
        return fn(this, param1, param2, param3, param4);
    }
};

struct DsNpcGeneralCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AppearNpcToWorld(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsNpcGeneralCommand_sExportedAppearNpcToWorld")->address);
        return fn(param1);
    }
    static void ForceLowLodNpc(const GGUUID& param1, bool param2) {
        typedef void (*FnType)(const GGUUID& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsNpcGeneralCommand_sExportedForceLowLodNpc")->address);
        return fn(param1, param2);
    }
    static void RemoveNpcFromWorld(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsNpcGeneralCommand_sExportedRemoveNpcFromWorld")->address);
        return fn(param1);
    }
    static void RestartExternalAnimation(Entity* param1) {
        typedef void (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsNpcGeneralCommand_sExportedRestartExternalAnimation")->address);
        return fn(param1);
    }
    static void TeleportNpc(const GGUUID& param1, const WorldTransform& param2) {
        typedef void (*FnType)(const GGUUID& p1, const WorldTransform& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsNpcGeneralCommand_sExportedTeleportNpc")->address);
        return fn(param1, param2);
    }
};

struct NPCScheduleManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void CreateNPCSchedule(const NPCScheduleResource* param1, Entity* param2) {
        typedef void (*FnType)(const NPCScheduleResource* p1, Entity* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NPCScheduleManager_sExportedCreateNPCSchedule")->address);
        return fn(param1, param2);
    }
};

struct DSPatrolPathManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AssignPatrolPathToEntity(Entity* param1, DSPatrolPath* param2) {
        typedef void (*FnType)(Entity* p1, DSPatrolPath* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedAssignPatrolPathToEntity")->address);
        return fn(param1, param2);
    }
    static void ClearPatrolPathCache() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedClearPatrolPathCache")->address);
        return fn();
    }
    static void ConnectNPCWithPatrolPath(const DSNPCPriorityList* param1, const DSPatrolPathPriorityListBase* param2, bool param3, EDSRouteConnectionType param4) {
        typedef void (*FnType)(const DSNPCPriorityList* p1, const DSPatrolPathPriorityListBase* p2, bool p3, EDSRouteConnectionType p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedConnectNPCWithPatrolPath")->address);
        return fn(param1, param2, param3, param4);
    }
    static bool ConnectSingleNPCWithPatrolPath(const GGUUID& param1, DSPatrolPath* param2) {
        typedef bool (*FnType)(const GGUUID& p1, DSPatrolPath* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedConnectSingleNPCWithPatrolPath")->address);
        return fn(param1, param2);
    }
    static bool ConnectSingleNPCWithPatrolPathGroup(const GGUUID& param1, DSPatrolPathGroup* param2) {
        typedef bool (*FnType)(const GGUUID& p1, DSPatrolPathGroup* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedConnectSingleNPCWithPatrolPathGroup")->address);
        return fn(param1, param2);
    }
    static void DisconnectNPCFromPatrolPath(const DSNPCPriorityList* param1) {
        typedef void (*FnType)(const DSNPCPriorityList* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedDisconnectNPCFromPatrolPath")->address);
        return fn(param1);
    }
    static void EntityQuitPatrol(Entity* param1) {
        typedef void (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedEntityQuitPatrol")->address);
        return fn(param1);
    }
    static void UpdatePatrolPathCache(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedUpdatePatrolPathCache")->address);
        return fn(param1);
    }
};

struct ScenePrefabInstance {
    // members
    uint8_t m_pad[0x0];
    // functions
    Scene* GetInstantiatedScene() {
        typedef Scene* (*FnType)(ScenePrefabInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ScenePrefabInstance_ExportedGetInstantiatedScene")->address);
        return fn(this);
    }
    bool IsRunning() {
        typedef bool (*FnType)(ScenePrefabInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ScenePrefabInstance_ExportedIsRunning")->address);
        return fn(this);
    }
    void SetForcedActivation(ESceneForcedActiveState param1) {
        typedef void (*FnType)(ScenePrefabInstance* self, ESceneForcedActiveState p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ScenePrefabInstance_ExportedSetForcedActivation")->address);
        return fn(this, param1);
    }
    void Start() {
        typedef void (*FnType)(ScenePrefabInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ScenePrefabInstance_ExportedStart")->address);
        return fn(this);
    }
    void Stop() {
        typedef void (*FnType)(ScenePrefabInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ScenePrefabInstance_ExportedStop")->address);
        return fn(this);
    }
};

struct SceneComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    Scene* GetParentScene() {
        typedef Scene* (*FnType)(SceneComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SceneComponent_ExportedGetParentScene")->address);
        return fn(this);
    }
    Scene* GetRootScene() {
        typedef Scene* (*FnType)(SceneComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SceneComponent_ExportedGetRootScene")->address);
        return fn(this);
    }
    Scene* GetScene() {
        typedef Scene* (*FnType)(SceneComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SceneComponent_ExportedGetScene")->address);
        return fn(this);
    }
};

struct ComponentLifetimeComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void RegisterComponent(Entity* param1, EntityComponent* param2, float param3) {
        typedef void (*FnType)(Entity* p1, EntityComponent* p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ComponentLifetimeComponent_sExportedRegisterComponent")->address);
        return fn(param1, param2, param3);
    }
    static void UnregisterComponent(Entity* param1, const EntityComponent* param2) {
        typedef void (*FnType)(Entity* p1, const EntityComponent* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ComponentLifetimeComponent_sExportedUnregisterComponent")->address);
        return fn(param1, param2);
    }
};

struct AIIndividualComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void AlertForEntity(Entity* param1) {
        typedef void (*FnType)(AIIndividualComponent* self, Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividualComponent_ExportedAlertForEntity")->address);
        return fn(this, param1);
    }
    void AlertForEntityWithPerfectThreatInfo(Entity* param1) {
        typedef void (*FnType)(AIIndividualComponent* self, Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividualComponent_ExportedAlertForEntityWithPerfectThreatInfo")->address);
        return fn(this, param1);
    }
    AIIndividual* GetAIIndividual() {
        typedef AIIndividual* (*FnType)(AIIndividualComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividualComponent_ExportedGetAIIndividual")->address);
        return fn(this);
    }
};

struct WeaponMode {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetIncapacitated(bool param1) {
        typedef void (*FnType)(WeaponMode* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WeaponMode_ExportedSetIncapacitated")->address);
        return fn(this, param1);
    }
};

struct KnockDownStateComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void Activate(const KnockDownStateEntryResource* param1, float param2) {
        typedef void (*FnType)(KnockDownStateComponent* self, const KnockDownStateEntryResource* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KnockDownStateComponent_ExportedActivate")->address);
        return fn(this, param1, param2);
    }
    void Deactivate(const KnockDownStateEntryResource* param1) {
        typedef void (*FnType)(KnockDownStateComponent* self, const KnockDownStateEntryResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KnockDownStateComponent_ExportedDeactivate")->address);
        return fn(this, param1);
    }
    void DeactivateAll() {
        typedef void (*FnType)(KnockDownStateComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KnockDownStateComponent_ExportedDeactivateAll")->address);
        return fn(this);
    }
    bool IsActive(const KnockDownStateEntryResource* param1, bool& param2) {
        typedef bool (*FnType)(KnockDownStateComponent* self, const KnockDownStateEntryResource* p1, bool& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KnockDownStateComponent_ExportedIsActive")->address);
        return fn(this, param1, param2);
    }
    void ResetAll(float param1) {
        typedef void (*FnType)(KnockDownStateComponent* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KnockDownStateComponent_ExportedResetAll")->address);
        return fn(this, param1);
    }
};

struct DamageOverTimeComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void StartDamage(AttackEventLink* param1) {
        typedef void (*FnType)(DamageOverTimeComponent* self, AttackEventLink* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DamageOverTimeComponent_ExportedStartDamage")->address);
        return fn(this, param1);
    }
};

struct PinDownComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsPinnedDown(bool* param1) {
        typedef bool (*FnType)(PinDownComponent* self, bool* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PinDownComponent_ExportedIsPinnedDown")->address);
        return fn(this, param1);
    }
    void StartBreakFree(bool param1) {
        typedef void (*FnType)(PinDownComponent* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PinDownComponent_ExportedStartBreakFree")->address);
        return fn(this, param1);
    }
};

struct HumanoidController {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetMove(float* param1, float* param2) {
        typedef void (*FnType)(HumanoidController* self, float* p1, float* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HumanoidController_ExportedGetMove")->address);
        return fn(this, param1, param2);
    }
};

struct EntityArrayComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void AddEntity(Entity* param1) {
        typedef void (*FnType)(EntityArrayComponent* self, Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityArrayComponent_ExportedAddEntity")->address);
        return fn(this, param1);
    }
    void ClearEntities() {
        typedef void (*FnType)(EntityArrayComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityArrayComponent_ExportedClearEntities")->address);
        return fn(this);
    }
    Entity* GetEntity(int32_t param1) {
        typedef Entity* (*FnType)(EntityArrayComponent* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityArrayComponent_ExportedGetEntity")->address);
        return fn(this, param1);
    }
    int32_t GetEntityCount() {
        typedef int32_t (*FnType)(EntityArrayComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityArrayComponent_ExportedGetEntityCount")->address);
        return fn(this);
    }
    void RemoveEntity(Entity* param1) {
        typedef void (*FnType)(EntityArrayComponent* self, Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityArrayComponent_ExportedRemoveEntity")->address);
        return fn(this, param1);
    }
};

struct AIObserverComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetObserverTransform(WorldPosition& param1, Mat44& param2) {
        typedef void (*FnType)(AIObserverComponent* self, WorldPosition& p1, Mat44& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIObserverComponent_ExportedGetObserverTransform")->address);
        return fn(this, param1, param2);
    }
};

struct ThirdPersonPlayerCameraComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    CameraModeResource* GetCurrCameraMode() {
        typedef CameraModeResource* (*FnType)(ThirdPersonPlayerCameraComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ThirdPersonPlayerCameraComponent_ExportedGetCurrCameraMode")->address);
        return fn(this);
    }
    CameraModeResource* GetPrevCameraMode() {
        typedef CameraModeResource* (*FnType)(ThirdPersonPlayerCameraComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ThirdPersonPlayerCameraComponent_ExportedGetPrevCameraMode")->address);
        return fn(this);
    }
};

struct ObjectCollection {
    // members
    uint8_t m_pad[0x48];
    // functions
    RTTIRefObject* GetObject(int32_t param1) {
        typedef RTTIRefObject* (*FnType)(ObjectCollection* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ObjectCollection_ExportedGetObject")->address);
        return fn(this, param1);
    }
    int32_t GetObjectCount() {
        typedef int32_t (*FnType)(ObjectCollection* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ObjectCollection_ExportedGetObjectCount")->address);
        return fn(this);
    }
};

struct DSEffectsNodeGraphBindings {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void DSCreateImpactEffect(Entity* param1, const MaterialTypeResource* param2, const Vec3& param3, const Vec3& param4, const Vec3& param5, EPhysicsCollisionLayerGame param6, int8_t param7) {
        typedef void (*FnType)(Entity* p1, const MaterialTypeResource* p2, const Vec3& p3, const Vec3& p4, const Vec3& p5, EPhysicsCollisionLayerGame p6, int8_t p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sDSCreateImpactEffect")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void DSFindClosestPoint(const Vec3& param1, const Vec3& param2, const Vec3& param3, Vec3& param4) {
        typedef void (*FnType)(const Vec3& p1, const Vec3& p2, const Vec3& p3, Vec3& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sDSFindClosestPoint")->address);
        return fn(param1, param2, param3, param4);
    }
    static void DSFindClosestPointFromObjectCollection(const ObjectCollection* param1, const Vec3& param2, Vec3& param3) {
        typedef void (*FnType)(const ObjectCollection* p1, const Vec3& p2, Vec3& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sDSFindClosestPointFromObjectCollection")->address);
        return fn(param1, param2, param3);
    }
    static void DSSendParticleSystemExternalSizeFromObjectCollection(ObjectCollection* param1, float param2) {
        typedef void (*FnType)(ObjectCollection* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sDSSendParticleSystemExternalSizeFromObjectCollection")->address);
        return fn(param1, param2);
    }
    static bool GetGlobalStateBool(const wchar_t* param1) {
        typedef bool (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sGetGlobalState<bool>")->address);
        return fn(param1);
    }
    static float GetGlobalStateFloat(const wchar_t* param1) {
        typedef float (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sGetGlobalState<float>")->address);
        return fn(param1);
    }
    static int32_t GetGlobalStateInt(const wchar_t* param1) {
        typedef int32_t (*FnType)(const wchar_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sGetGlobalState<int>")->address);
        return fn(param1);
    }
    static void GlobalStateAtomicAddFloat(const wchar_t* param1, float param2, float* param3) {
        typedef void (*FnType)(const wchar_t* p1, float p2, float* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sGlobalStateAtomicAdd<float>")->address);
        return fn(param1, param2, param3);
    }
    static void GlobalStateAtomicAddInt(const wchar_t* param1, int32_t param2, int32_t* param3) {
        typedef void (*FnType)(const wchar_t* p1, int32_t p2, int32_t* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sGlobalStateAtomicAdd<int>")->address);
        return fn(param1, param2, param3);
    }
    static bool IsInClosestCrater(const WorldPosition& param1, float param2) {
        typedef bool (*FnType)(const WorldPosition& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sIsInClosestCrater")->address);
        return fn(param1, param2);
    }
    static bool IsIntersectOrientedBox(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, const WorldPosition& param4, float param5) {
        typedef bool (*FnType)(const Vec3& p1, const Vec3& p2, const WorldTransform& p3, const WorldPosition& p4, float p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sIsIntersectOrientedBox")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static bool IsTileEdge(const WorldPosition& param1, float param2) {
        typedef bool (*FnType)(const WorldPosition& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sIsTileEdge")->address);
        return fn(param1, param2);
    }
    static void SetGlobalStateBool(const wchar_t* param1, bool param2) {
        typedef void (*FnType)(const wchar_t* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sSetGlobalState<bool>")->address);
        return fn(param1, param2);
    }
    static void SetGlobalStateFloat(const wchar_t* param1, float param2) {
        typedef void (*FnType)(const wchar_t* p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sSetGlobalState<float>")->address);
        return fn(param1, param2);
    }
    static void SetGlobalStateInt(const wchar_t* param1, int32_t param2) {
        typedef void (*FnType)(const wchar_t* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sSetGlobalState<int>")->address);
        return fn(param1, param2);
    }
};

struct DSTerminalGraphEvaluationArgs {
    // members
    uint8_t m_pad[0x0];
    // functions
    void FindEvaluation(EDSMissionConditionType param1, bool& param2, EDSRewardRank& param3) {
        typedef void (*FnType)(DSTerminalGraphEvaluationArgs* self, EDSMissionConditionType p1, bool& p2, EDSRewardRank& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphEvaluationArgs_ExportedFindEvaluation")->address);
        return fn(this, param1, param2, param3);
    }
    EDSEvaluationActingType GetEvaluationActingType() {
        typedef EDSEvaluationActingType (*FnType)(DSTerminalGraphEvaluationArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphEvaluationArgs_ExportedGetEvaluationActingType")->address);
        return fn(this);
    }
    int32_t GetEvaluationLength() {
        typedef int32_t (*FnType)(DSTerminalGraphEvaluationArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphEvaluationArgs_ExportedGetEvaluationLength")->address);
        return fn(this);
    }
    EDSEvaluationType GetEvaluationType() {
        typedef EDSEvaluationType (*FnType)(DSTerminalGraphEvaluationArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphEvaluationArgs_ExportedGetEvaluationType")->address);
        return fn(this);
    }
    void GetMainEvaluation(bool& param1, EDSMissionConditionType& param2, EDSRewardRank& param3) {
        typedef void (*FnType)(DSTerminalGraphEvaluationArgs* self, bool& p1, EDSMissionConditionType& p2, EDSRewardRank& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphEvaluationArgs_ExportedGetMainEvaluation")->address);
        return fn(this, param1, param2, param3);
    }
    uint64_t GetMissionId() {
        typedef uint64_t (*FnType)(DSTerminalGraphEvaluationArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphEvaluationArgs_ExportedGetMissionId")->address);
        return fn(this);
    }
    void GetSubEvaluation(uint8_t param1, bool& param2, EDSMissionConditionType& param3, EDSRewardRank& param4) {
        typedef void (*FnType)(DSTerminalGraphEvaluationArgs* self, uint8_t p1, bool& p2, EDSMissionConditionType& p3, EDSRewardRank& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphEvaluationArgs_ExportedGetSubEvaluation")->address);
        return fn(this, param1, param2, param3, param4);
    }
};

struct DSMissionAbstractTodoNodeResource {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void MarkTodoAsCompleted(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionAbstractTodoNodeResource_sExportedMarkTodoAsCompleted")->address);
        return fn(param1);
    }
    static void MarkTodoAsDiscarded(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionAbstractTodoNodeResource_sExportedMarkTodoAsDiscarded")->address);
        return fn(param1);
    }
    static void MarkTodoAsFailed(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionAbstractTodoNodeResource_sExportedMarkTodoAsFailed")->address);
        return fn(param1);
    }
    static void RemindTodo(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionAbstractTodoNodeResource_sExportedRemindTodo")->address);
        return fn(param1);
    }
    static void RevealTodo(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionAbstractTodoNodeResource_sExportedRevealTodo")->address);
        return fn(param1);
    }
};

struct DSLikeCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ReceiveLike(int32_t param1, const GGUUID* param2, EDSTakeLikeReason param3) {
        typedef void (*FnType)(int32_t p1, const GGUUID* p2, EDSTakeLikeReason p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSLikeCommand_sReceiveLike")->address);
        return fn(param1, param2, param3);
    }
    static void ReceiveLikeFromMajorMember(int32_t param1, EDSMajorMember param2, uint32_t param3) {
        typedef void (*FnType)(int32_t p1, EDSMajorMember p2, uint32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSLikeCommand_sReceiveLikeFromMajorMember")->address);
        return fn(param1, param2, param3);
    }
    static void ReceiveLikeWithOption(int32_t param1, const GGUUID* param2, EDSTakeLikeReason param3, EDSLikeOptionFlag param4, EDSLikeOptionFlag param5, EDSLikeOptionFlag param6) {
        typedef void (*FnType)(int32_t p1, const GGUUID* p2, EDSTakeLikeReason p3, EDSLikeOptionFlag p4, EDSLikeOptionFlag p5, EDSLikeOptionFlag p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSLikeCommand_sReceiveLikeWithOption")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
};

struct ControlledEntity {
    // members
    uint8_t m_pad[0x0];
    // functions
    AIIndividual* GetAIIndividual() {
        typedef AIIndividual* (*FnType)(ControlledEntity* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ControlledEntity_ExportedGetAIIndividual")->address);
        return fn(this);
    }
    Controller* GetController() {
        typedef Controller* (*FnType)(ControlledEntity* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ControlledEntity_ExportedGetController")->address);
        return fn(this);
    }
    Entity* GetTargetEntity() {
        typedef Entity* (*FnType)(ControlledEntity* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ControlledEntity_ExportedGetTargetEntity")->address);
        return fn(this);
    }
    bool IsBoundToSequence() {
        typedef bool (*FnType)(ControlledEntity* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ControlledEntity_ExportedIsBoundToSequence")->address);
        return fn(this);
    }
    bool IsGodMode() {
        typedef bool (*FnType)(ControlledEntity* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ControlledEntity_ExportedIsGodMode")->address);
        return fn(this);
    }
    bool IsLocalPlayer() {
        typedef bool (*FnType)(ControlledEntity* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ControlledEntity_ExportedIsLocalPlayer")->address);
        return fn(this);
    }
};

struct DSCreateMissionBaggageNodeCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void CreateBonusBaggageOnShelf(const DSGameBaggageListItem* param1, uint64_t param2) {
        typedef void (*FnType)(const DSGameBaggageListItem* p1, uint64_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCreateMissionBaggageNodeCommand_sCreateBonusBaggageOnShelf")->address);
        return fn(param1, param2);
    }
    static void CreateMissionBaggages(const GGUUID& param1, const GGUUID& param2) {
        typedef void (*FnType)(const GGUUID& p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCreateMissionBaggageNodeCommand_sCreateMissionBaggages")->address);
        return fn(param1, param2);
    }
    static void RequestCreateMissionExtraBaggage(const GGUUID& param1, uint32_t param2) {
        typedef void (*FnType)(const GGUUID& p1, uint32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCreateMissionBaggageNodeCommand_sRequestCreateMissionExtraBaggage")->address);
        return fn(param1, param2);
    }
};

struct DSTerminalGraphBonusArgs {
    // members
    uint8_t m_pad[0x0];
    // functions
    const DSGameBaggageListItem* GetBaggageListItem() {
        typedef const DSGameBaggageListItem* (*FnType)(DSTerminalGraphBonusArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphBonusArgs_ExportedGetBaggageListItem")->address);
        return fn(this);
    }
    uint64_t GetMissionId() {
        typedef uint64_t (*FnType)(DSTerminalGraphBonusArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphBonusArgs_ExportedGetMissionId")->address);
        return fn(this);
    }
    bool IsSimpleBonus() {
        typedef bool (*FnType)(DSTerminalGraphBonusArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphBonusArgs_ExportedIsSimpleBonus")->address);
        return fn(this);
    }
    bool IsStarMark() {
        typedef bool (*FnType)(DSTerminalGraphBonusArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphBonusArgs_ExportedIsStarMark")->address);
        return fn(this);
    }
    bool NeedsExceptionalProcess() {
        typedef bool (*FnType)(DSTerminalGraphBonusArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphBonusArgs_ExportedNeedsExceptionalProcess")->address);
        return fn(this);
    }
};

struct AIManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CreateAuralStimulus(const AIAuralStimulusResource* param1, Entity* param2) {
        typedef bool (*FnType)(const AIAuralStimulusResource* p1, Entity* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManager_sExportedCreateAuralStimulus")->address);
        return fn(param1, param2);
    }
    static bool CreateVisualStimulus(const AIVisualStimulusResource* param1, Entity* param2) {
        typedef bool (*FnType)(const AIVisualStimulusResource* p1, Entity* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManager_sExportedCreateVisualStimulus")->address);
        return fn(param1, param2);
    }
};

struct AINavMeshComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void FindPositionOnNavMesh(const WorldPosition& param1, float param2, bool* param3, WorldPosition* param4) {
        typedef void (*FnType)(AINavMeshComponent* self, const WorldPosition& p1, float p2, bool* p3, WorldPosition* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AINavMeshComponent_ExportedFindPositionOnNavMesh")->address);
        return fn(this, param1, param2, param3, param4);
    }
    static bool FindPositionOnNavMeshBySettings(const NavMeshBuilderSettings* param1, const WorldPosition& param2, float param3, WorldPosition* param4) {
        typedef bool (*FnType)(const NavMeshBuilderSettings* p1, const WorldPosition& p2, float p3, WorldPosition* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AINavMeshComponent_sExportedFindPositionOnNavMeshBySettings")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct HairModelComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetHairPose(float param1, const Vec4& param2, const Vec4& param3) {
        typedef void (*FnType)(HairModelComponent* self, float p1, const Vec4& p2, const Vec4& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HairModelComponent_ExportedSetHairPose")->address);
        return fn(this, param1, param2, param3);
    }
    void SetHairSimProperties(float param1, float param2, float param3, float param4) {
        typedef void (*FnType)(HairModelComponent* self, float p1, float p2, float p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HairModelComponent_ExportedSetHairSimProperties")->address);
        return fn(this, param1, param2, param3, param4);
    }
};

struct ConstraintComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void Create(const PhysicsConstraintResource* param1, Entity* param2, const ModelPartResource* param3, Entity* param4, const ModelPartResource* param5) {
        typedef void (*FnType)(const PhysicsConstraintResource* p1, Entity* p2, const ModelPartResource* p3, Entity* p4, const ModelPartResource* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ConstraintComponent_sExportedCreate")->address);
        return fn(param1, param2, param3, param4, param5);
    }
};

struct SequenceNetworkInstance {
    // members
    uint8_t m_pad[0x240];
    // functions
    void ForceCameraPrediction(bool param1, float param2) {
        typedef void (*FnType)(SequenceNetworkInstance* self, bool p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_ExportedForceCameraPrediction")->address);
        return fn(this, param1, param2);
    }
    static void ForceCameraPredictionByUUID(const GGUUID& param1, bool param2, float param3) {
        typedef void (*FnType)(const GGUUID& p1, bool p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_sExportedForceCameraPredictionByUUID")->address);
        return fn(param1, param2, param3);
    }
    Entity* GetEntityVariable(const SequenceEntityVariable* param1) {
        typedef Entity* (*FnType)(SequenceNetworkInstance* self, const SequenceEntityVariable* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_ExportedGetEntityVariable")->address);
        return fn(this, param1);
    }
    bool GetNodeTime(const SequenceNetworkNode* param1, float& param2) {
        typedef bool (*FnType)(SequenceNetworkInstance* self, const SequenceNetworkNode* p1, float& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_ExportedGetNodeTime")->address);
        return fn(this, param1, param2);
    }
    Entity* GetSequenceNetworkEntity() {
        typedef Entity* (*FnType)(SequenceNetworkInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_ExportedGetSequenceNetworkEntity")->address);
        return fn(this);
    }
    bool IsSequenceSkipped() {
        typedef bool (*FnType)(SequenceNetworkInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_ExportedIsSequenceSkipped")->address);
        return fn(this);
    }
    void SetEntityVariable(const DynamicSequenceEntityVariable* param1, Entity* param2) {
        typedef void (*FnType)(SequenceNetworkInstance* self, const DynamicSequenceEntityVariable* p1, Entity* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_ExportedSetEntityVariable")->address);
        return fn(this, param1, param2);
    }
    void Start() {
        typedef void (*FnType)(SequenceNetworkInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_ExportedStart")->address);
        return fn(this);
    }
    void Stop() {
        typedef void (*FnType)(SequenceNetworkInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_ExportedStop")->address);
        return fn(this);
    }
};

struct RouteMover {
    // members
    uint8_t m_pad[0x0];
    // functions
    float GetDistance() {
        typedef float (*FnType)(RouteMover* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedGetDistance")->address);
        return fn(this);
    }
    float GetRelativeDistance() {
        typedef float (*FnType)(RouteMover* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedGetRelativeDistance")->address);
        return fn(this);
    }
    const Route* GetRoute() {
        typedef const Route* (*FnType)(RouteMover* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedGetRoute")->address);
        return fn(this);
    }
    float GetSpeed() {
        typedef float (*FnType)(RouteMover* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedGetSpeed")->address);
        return fn(this);
    }
    static void MoveAlongRoute(Entity* param1, const Route* param2, bool param3, float param4, bool param5) {
        typedef void (*FnType)(Entity* p1, const Route* p2, bool p3, float p4, bool p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_sExportedMoveAlongRoute")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    void SetDistance(float param1, bool param2) {
        typedef void (*FnType)(RouteMover* self, float p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedSetDistance")->address);
        return fn(this, param1, param2);
    }
    void SetRelativeDistance(float param1, bool param2) {
        typedef void (*FnType)(RouteMover* self, float p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedSetRelativeDistance")->address);
        return fn(this, param1, param2);
    }
    void SetRoute(const Route* param1, bool param2, bool param3) {
        typedef void (*FnType)(RouteMover* self, const Route* p1, bool p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedSetRoute")->address);
        return fn(this, param1, param2, param3);
    }
    void SetSpeed(float param1) {
        typedef void (*FnType)(RouteMover* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedSetSpeed")->address);
        return fn(this, param1);
    }
};

struct DSFiringRangeNodeGraphBindings {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CheckFiringRangeMissionClearCondition() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedCheckFiringRangeMissionClearCondition")->address);
        return fn();
    }
    static bool IsFiringRangeMission(uint64_t param1) {
        typedef bool (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedIsFiringRangeMission")->address);
        return fn(param1);
    }
    static void NotifyFiringRangeMissionGoal() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedNotifyFiringRangeMissionGoal")->address);
        return fn();
    }
    static void SetFiringRangeMissionInitialCarriedWeapon(EDSWeaponId param1, EDSWeaponId param2, EDSWeaponId param3, EDSWeaponId param4, EDSWeaponId param5, BooleanFact* param6) {
        typedef void (*FnType)(EDSWeaponId p1, EDSWeaponId p2, EDSWeaponId p3, EDSWeaponId p4, EDSWeaponId p5, BooleanFact* p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedSetFiringRangeMissionInitialCarriedWeapon")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void SetFiringRangeMissionInitialItem(EDSItemId param1, EDSItemId param2, EDSItemId param3, EDSItemId param4, EDSItemId param5) {
        typedef void (*FnType)(EDSItemId p1, EDSItemId p2, EDSItemId p3, EDSItemId p4, EDSItemId p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedSetFiringRangeMissionInitialItem")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void SetFiringRangeMissionInitialSuitParts(EDSSuitPartsId param1, EDSSuitPartsId param2, EDSSuitPartsId param3, EDSSuitPartsId param4, EDSSuitPartsId param5) {
        typedef void (*FnType)(EDSSuitPartsId p1, EDSSuitPartsId p2, EDSSuitPartsId p3, EDSSuitPartsId p4, EDSSuitPartsId p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedSetFiringRangeMissionInitialSuitParts")->address);
        return fn(param1, param2, param3, param4, param5);
    }
    static void SetFiringRangeMissionInitialWeapon(EDSWeaponId param1, EDSWeaponId param2, EDSWeaponId param3, EDSWeaponId param4, EDSWeaponId param5, BooleanFact* param6) {
        typedef void (*FnType)(EDSWeaponId p1, EDSWeaponId p2, EDSWeaponId p3, EDSWeaponId p4, EDSWeaponId p5, BooleanFact* p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedSetFiringRangeMissionInitialWeapon")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static void SetStartLocator(const DSLocator* param1) {
        typedef void (*FnType)(const DSLocator* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedSetStartLocator")->address);
        return fn(param1);
    }
    static void SetStartTransform(const WorldTransform& param1) {
        typedef void (*FnType)(const WorldTransform& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedSetStartTransform")->address);
        return fn(param1);
    }
    static void StartFiringRangeMission() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedStartFiringRangeMission")->address);
        return fn();
    }
    static void StartFiringRangeMissionResult() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedStartFiringRangeMissionResult")->address);
        return fn();
    }
};

struct DSGraphCtrlBaggageArgs {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetBaggageGameActorIds(Array_int* param1) {
        typedef void (*FnType)(DSGraphCtrlBaggageArgs* self, Array_int* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGraphCtrlBaggageArgs_ExportedGetBaggageGameActorIds")->address);
        return fn(this, param1);
    }
};

struct DSOrderedBaggageArgs {
    // members
    uint8_t m_pad[0x0];
    // functions
    int32_t GetBaggageListItemNameCode() {
        typedef int32_t (*FnType)(DSOrderedBaggageArgs* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSOrderedBaggageArgs_ExportedGetBaggageListItemNameCode")->address);
        return fn(this);
    }
};

struct StringToolsGroup {
    // members
    uint8_t m_pad[0x0];
    // functions
    static int32_t sFormatHelperDouble(double param1, wchar_t* param2, uint64_t param3) {
        typedef int32_t (*FnType)(double p1, wchar_t* p2, uint64_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperDouble")->address);
        return fn(param1, param2, param3);
    }
    static int32_t sFormatHelperDoubleCustomFormat(double param1, uint32_t param2, uint32_t param3, wchar_t param4, wchar_t* param5, uint64_t param6) {
        typedef int32_t (*FnType)(double p1, uint32_t p2, uint32_t p3, wchar_t p4, wchar_t* p5, uint64_t p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperDoubleCustomFormat")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static int32_t sFormatHelperFloat(float param1, wchar_t* param2, uint64_t param3) {
        typedef int32_t (*FnType)(float p1, wchar_t* p2, uint64_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperFloat")->address);
        return fn(param1, param2, param3);
    }
    static int32_t sFormatHelperFloatCustomFormat(float param1, uint32_t param2, uint32_t param3, wchar_t param4, wchar_t* param5, uint64_t param6) {
        typedef int32_t (*FnType)(float p1, uint32_t p2, uint32_t p3, wchar_t p4, wchar_t* p5, uint64_t p6);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperFloatCustomFormat")->address);
        return fn(param1, param2, param3, param4, param5, param6);
    }
    static int32_t sFormatHelperInt(int32_t param1, wchar_t* param2, uint64_t param3) {
        typedef int32_t (*FnType)(int32_t p1, wchar_t* p2, uint64_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperInt")->address);
        return fn(param1, param2, param3);
    }
    static int32_t sFormatHelperInt32(int32_t param1, wchar_t* param2, uint64_t param3) {
        typedef int32_t (*FnType)(int32_t p1, wchar_t* p2, uint64_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperInt32")->address);
        return fn(param1, param2, param3);
    }
    static int32_t sFormatHelperInt64(int64_t param1, wchar_t* param2, uint64_t param3) {
        typedef int32_t (*FnType)(int64_t p1, wchar_t* p2, uint64_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperInt64")->address);
        return fn(param1, param2, param3);
    }
    static int32_t sFormatHelperUInt(uint32_t param1, wchar_t* param2, uint64_t param3) {
        typedef int32_t (*FnType)(uint32_t p1, wchar_t* p2, uint64_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperUInt")->address);
        return fn(param1, param2, param3);
    }
    static int32_t sFormatHelperUInt32(uint32_t param1, wchar_t* param2, uint64_t param3) {
        typedef int32_t (*FnType)(uint32_t p1, wchar_t* p2, uint64_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperUInt32")->address);
        return fn(param1, param2, param3);
    }
    static int32_t sFormatHelperUInt64(uint64_t param1, wchar_t* param2, uint64_t param3) {
        typedef int32_t (*FnType)(uint64_t p1, wchar_t* p2, uint64_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperUInt64")->address);
        return fn(param1, param2, param3);
    }
    static uint8_t sHexToByte(wchar_t param1, wchar_t param2) {
        typedef uint8_t (*FnType)(wchar_t p1, wchar_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sHexToByte")->address);
        return fn(param1, param2);
    }
};

struct ArtPartsData {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void IsValidModelPart(Entity* param1, const wchar_t* param2, bool* param3) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, bool* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ArtPartsData_sExportedIsValidModelPartFromHash")->address);
        return fn(param1, param2, param3);
    }
    static void SetEnableModelPart(Entity* param1, const wchar_t* param2, bool param3) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ArtPartsData_sExportedEnableModelPartFromHash")->address);
        return fn(param1, param2, param3);
    }
    static void SetShaderVariableAsFloat(Entity* param1, const wchar_t* param2, const wchar_t* param3, float param4) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, const wchar_t* p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ArtPartsData_sExportedSetShaderVariableAsFloat")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SetShaderVariableAsVec3(Entity* param1, const wchar_t* param2, const wchar_t* param3, const Vec3& param4) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, const wchar_t* p3, const Vec3& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ArtPartsData_sExportedSetShaderVariableAsVec3")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct SpawnSetup {
    // members
    uint8_t m_pad[0xd8];
    // functions
    Entity* CreateEntityFromSpawnSetup(SpawnSetup* param1, Scene* param2) {
        typedef Entity* (*FnType)(SpawnSetup* self, SpawnSetup* p1, Scene* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SpawnSetup_ExportedCreateEntityFromSpawnSetup")->address);
        return fn(this, param1, param2);
    }
};

struct EnvironmentSound {
    // members
    uint8_t m_pad[0x80];
    // functions
    void GetLastSpawnDistance(float& param1) {
        typedef void (*FnType)(EnvironmentSound* self, float& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSound_ExportedGetLastSpawnDistance")->address);
        return fn(this, param1);
    }
    void GetProperties(SoundResource** param1, int32_t& param2, int32_t& param3, float& param4, float& param5, float& param6, float& param7, float& param8, BoundingBox3& param9) {
        typedef void (*FnType)(EnvironmentSound* self, SoundResource** p1, int32_t& p2, int32_t& p3, float& p4, float& p5, float& p6, float& p7, float& p8, BoundingBox3& p9);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSound_ExportedGetProperties")->address);
        return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9);
    }
    void SetLastSpawnDistance(float param1) {
        typedef void (*FnType)(EnvironmentSound* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSound_ExportedSetLastSpawnDistance")->address);
        return fn(this, param1);
    }
};

struct SoundEnvironment {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetDensityAtListener(float& param1) {
        typedef void (*FnType)(SoundEnvironment* self, float& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetDensityAtListener")->address);
        return fn(this, param1);
    }
    void GetDensityAtSamplePoint(int32_t param1, float& param2) {
        typedef void (*FnType)(SoundEnvironment* self, int32_t p1, float& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetDensityAtSamplePoint")->address);
        return fn(this, param1, param2);
    }
    void GetMaxSoundsPerSpawnPoint(float* param1) {
        typedef void (*FnType)(SoundEnvironment* self, float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetMaxSoundsPerSpawnPoint")->address);
        return fn(this, param1);
    }
    void GetRandomSounds(int32_t param1, int32_t* param2) {
        typedef void (*FnType)(SoundEnvironment* self, int32_t p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetRandomSounds")->address);
        return fn(this, param1, param2);
    }
    void GetSound(int32_t param1, const EnvironmentSound** param2) {
        typedef void (*FnType)(SoundEnvironment* self, int32_t p1, const EnvironmentSound** p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetSound")->address);
        return fn(this, param1, param2);
    }
    void GetSoundCount(int32_t& param1) {
        typedef void (*FnType)(SoundEnvironment* self, int32_t& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetSoundCount")->address);
        return fn(this, param1);
    }
    void GetSoundSpawnCountFactor(float* param1) {
        typedef void (*FnType)(SoundEnvironment* self, float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetSoundSpawnCountFactor")->address);
        return fn(this, param1);
    }
    void GetSoundSpawnThreshold(float* param1) {
        typedef void (*FnType)(SoundEnvironment* self, float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetSoundSpawnThreshold")->address);
        return fn(this, param1);
    }
    void SetDensity(float param1) {
        typedef void (*FnType)(SoundEnvironment* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedSetDensity")->address);
        return fn(this, param1);
    }
};

struct PlayerProfile {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool IsGameFinished() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerProfile_sExportedIsGameFinished")->address);
        return fn();
    }
    static void Save() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerProfile_sExportedSaveProfile")->address);
        return fn();
    }
    static void SetGameFinished(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerProfile_sExportedSetGameFinished")->address);
        return fn(param1);
    }
};

struct TetheredAmmoPileComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    EAmmoTetherState GetTetherState() {
        typedef EAmmoTetherState (*FnType)(TetheredAmmoPileComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TetheredAmmoPileComponent_ExportedGetTetherState")->address);
        return fn(this);
    }
};

struct SoundSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GetAudioOutState(int32_t& param1, bool& param2) {
        typedef void (*FnType)(int32_t& p1, bool& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundVoiceManager::sGetAudioOutState")->address);
        return fn(param1, param2);
    }
    static void GetHDRWindowSettings(float& param1, float& param2, float& param3, float& param4) {
        typedef void (*FnType)(float& p1, float& p2, float& p3, float& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundManager::sGetHDRWindowSettings")->address);
        return fn(param1, param2, param3, param4);
    }
    static void GetObstructionRowStatistics(float param1, float& param2, float& param3, float& param4, float& param5, int32_t& param6, int32_t& param7) {
        typedef void (*FnType)(float p1, float& p2, float& p3, float& p4, float& p5, int32_t& p6, int32_t& p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundManager::sGetObstructionRowStatisticsForElevation")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7);
    }
    static void GetSubmixOutputLevel(const SubmixResource& param1, float& param2, float& param3) {
        typedef void (*FnType)(const SubmixResource& p1, float& p2, float& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundVoiceManager::sGetSubmixOutputLevel")->address);
        return fn(param1, param2, param3);
    }
    static void OverrideMixZone(bool param1, const SoundMixResource* param2, int32_t param3) {
        typedef void (*FnType)(bool p1, const SoundMixResource* p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundManager::sOverrideMixZone")->address);
        return fn(param1, param2, param3);
    }
    static void OverrideReverbZone(bool param1, const ReverbPresetResource* param2, float param3, int32_t param4) {
        typedef void (*FnType)(bool p1, const ReverbPresetResource* p2, float p3, int32_t p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundManager::sOverrideReverbZone")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SetHDRWindowSettings(bool param1, float param2, float param3, float param4, float param5) {
        typedef void (*FnType)(bool p1, float p2, float p3, float p4, float p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundManager::sSetHDRWindowSettings")->address);
        return fn(param1, param2, param3, param4, param5);
    }
};

struct DSDeliveryPointInfoCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CheckDeliveryPointAvailable(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sCheckDeliveryPointAvailable")->address);
        return fn(param1);
    }
    static int32_t GetDeliveryPointIdFromMissionId(uint64_t param1) {
        typedef int32_t (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sGetDeliveryPointIdFromMissionId")->address);
        return fn(param1);
    }
    static EDSConstructionPointType GetTypeFromDeliveryPointInfo(const GGUUID& param1) {
        typedef EDSConstructionPointType (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sGetTypeFromDeliveryPointInfo")->address);
        return fn(param1);
    }
    static EDSConstructionPointType GetTypeFromDeliveryPointInfoId(int32_t param1) {
        typedef EDSConstructionPointType (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sGetTypeFromDeliveryPointInfoId")->address);
        return fn(param1);
    }
    static void SetBonusBaggageTypeHash(uint32_t param1) {
        typedef void (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sSetBonusBaggageTypeHash")->address);
        return fn(param1);
    }
    static void SetDeliveryPointAvailability(const GGUUID& param1, bool param2) {
        typedef void (*FnType)(const GGUUID& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sSetDeliveryPointAvailability")->address);
        return fn(param1, param2);
    }
    static void SetDeliveryPointAvailabilityDetail(const GGUUID& param1, bool param2, bool param3, bool param4, bool param5, bool param6, bool param7, int32_t param8) {
        typedef void (*FnType)(const GGUUID& p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, int32_t p8);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sSetDeliveryPointAvailabilityDetail")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8);
    }
};

struct DsNpcManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void SetNpcIndividualPhase(const wchar_t* param1, int32_t param2) {
        typedef void (*FnType)(const wchar_t* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcManager::sSetNpcIndividualPhase")->address);
        return fn(param1, param2);
    }
};

struct DSMissionOpenCondition {
    // members
    uint8_t m_pad[0x38];
    // functions
    static DSMissionLogicBlock* GetLogicBlock(DSMissionOpenCondition* param1) {
        typedef DSMissionLogicBlock* (*FnType)(DSMissionOpenCondition* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenCondition_GetLogicBlock")->address);
        return fn(param1);
    }
    static Array_cptr_DSMissionOpenList GetOpenLists(DSMissionOpenCondition* param1) {
        typedef Array_cptr_DSMissionOpenList (*FnType)(DSMissionOpenCondition* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenCondition_GetOpenLists")->address);
        return fn(param1);
    }
};

struct DSMissionOpenNode {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CheckCompletedCondition(const DSMissionLogicBlock* param1) {
        typedef bool (*FnType)(const DSMissionLogicBlock* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sCheckCompletedCondition")->address);
        return fn(param1);
    }
    static bool CheckCompletedMissions(const DSMissionResourceList* param1) {
        typedef bool (*FnType)(const DSMissionResourceList* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sCheckCompletedMissions")->address);
        return fn(param1);
    }
    static bool CheckMissionOpenState(const GGUUID& param1, EDSMissionOpenState param2) {
        typedef bool (*FnType)(const GGUUID& p1, EDSMissionOpenState p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sCheckMissionOpenState")->address);
        return fn(param1, param2);
    }
    static int32_t CountCompletedMissions(const DSMissionResourceList* param1) {
        typedef int32_t (*FnType)(const DSMissionResourceList* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sCountCompletedMissions")->address);
        return fn(param1);
    }
    static bool OpenMissions(const DSMissionResourceList* param1, EDSMissionOpenState param2, uint64_t param3, Array_uint64* param4) {
        typedef bool (*FnType)(const DSMissionResourceList* p1, EDSMissionOpenState p2, uint64_t p3, Array_uint64* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sOpenMissions")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SetNotAvailableMission(uint64_t param1, bool param2) {
        typedef void (*FnType)(uint64_t p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sSetNotAvailableMission")->address);
        return fn(param1, param2);
    }
    static void SetTemporaryMissionOpenState(const GGUUID& param1, EDSMissionOpenState param2) {
        typedef void (*FnType)(const GGUUID& p1, EDSMissionOpenState p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sSetTemporaryMissionOpenState")->address);
        return fn(param1, param2);
    }
};

struct CubemapbakeOnly {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool GetCubemapbakeOnlyFlag() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sGetCubemapbakeOnlyFlag_Entrypoint")->address);
        return fn();
    }
};

struct DSMissionGraphService {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void CallByMissionId(uint64_t param1, uint32_t param2, bool param3, const DSGraphServiceArgs* param4) {
        typedef void (*FnType)(uint64_t p1, uint32_t p2, bool p3, const DSGraphServiceArgs* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGraphService_sExportedCallByMissionId")->address);
        return fn(param1, param2, param3, param4);
    }
    static void CallByMissionResource(const GGUUID& param1, uint32_t param2, bool param3, const DSGraphServiceArgs* param4) {
        typedef void (*FnType)(const GGUUID& p1, uint32_t p2, bool p3, const DSGraphServiceArgs* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGraphService_sExportedCallByMissionResource")->address);
        return fn(param1, param2, param3, param4);
    }
    static void CallOtherGraph(uint32_t param1, const DSGraphServiceArgs* param2) {
        typedef void (*FnType)(uint32_t p1, const DSGraphServiceArgs* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGraphService_sExportedCallOtherGraph")->address);
        return fn(param1, param2);
    }
    static DSGraphServiceArgs* CreateGraphServiceArg(uint32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) {
        typedef DSGraphServiceArgs* (*FnType)(uint32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGraphService_sExportedCreateGraphServiceArg")->address);
        return fn(param1, param2, param3, param4, param5);
    }
};

struct DSWeaponSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CanUseInsideDeliveryTerminalArea(EDSWeaponId param1) {
        typedef bool (*FnType)(EDSWeaponId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedCanUseInsideDeliveryTerminalArea")->address);
        return fn(param1);
    }
    static void IntToAmmoId(int32_t param1, EDSAmmoId& param2) {
        typedef void (*FnType)(int32_t p1, EDSAmmoId& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedIntToAmmoId")->address);
        return fn(param1, param2);
    }
    static void IntToItemId(int32_t param1, EDSItemId& param2) {
        typedef void (*FnType)(int32_t p1, EDSItemId& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedIntToItemId")->address);
        return fn(param1, param2);
    }
    static void IntToMagazineId(int32_t param1, EDSMagazineId& param2) {
        typedef void (*FnType)(int32_t p1, EDSMagazineId& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedIntToMagazineId")->address);
        return fn(param1, param2);
    }
    static void IntToSuitPartsId(int32_t param1, EDSSuitPartsId& param2) {
        typedef void (*FnType)(int32_t p1, EDSSuitPartsId& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedIntToSuitPartsId")->address);
        return fn(param1, param2);
    }
    static void IntToWeaponId(int32_t param1, EDSWeaponId& param2) {
        typedef void (*FnType)(int32_t p1, EDSWeaponId& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedIntToWeaponId")->address);
        return fn(param1, param2);
    }
    static bool IsKillingAmmo(EDSAmmoId param1) {
        typedef bool (*FnType)(EDSAmmoId p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedIsKillingAmmo")->address);
        return fn(param1);
    }
    static void RefreshPrivateRoomWeaponShelf() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedRefreshPrivateRoomWeaponShelf")->address);
        return fn();
    }
};

struct DiscoverableAreaInstance {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetMarkedByPlayer() {
        typedef void (*FnType)(DiscoverableAreaInstance* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DiscoverableAreaInstance_ExportedSetMarkedByPlayer")->address);
        return fn(this);
    }
};

struct DSShellLauncherGameActorLocator {
    // members
    uint8_t m_pad[0x0];
    // functions
    void LaunchStraightVolley(const WorldPosition& param1, float param2) {
        typedef void (*FnType)(DSShellLauncherGameActorLocator* self, const WorldPosition& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedLaunchStraightVolley")->address);
        return fn(this, param1, param2);
    }
    void LaunchVolley(const WorldPosition& param1) {
        typedef void (*FnType)(DSShellLauncherGameActorLocator* self, const WorldPosition& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedLaunchVolley")->address);
        return fn(this, param1);
    }
    void LaunchVolleyEntity(const Entity* param1) {
        typedef void (*FnType)(DSShellLauncherGameActorLocator* self, const Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedLaunchVolleyEntity")->address);
        return fn(this, param1);
    }
    void SetActivated(bool param1) {
        typedef void (*FnType)(DSShellLauncherGameActorLocator* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedSetActivated")->address);
        return fn(this, param1);
    }
    void SetTargetEntity(const Entity* param1) {
        typedef void (*FnType)(DSShellLauncherGameActorLocator* self, const Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedSetTargetEntity")->address);
        return fn(this, param1);
    }
    void SetTargetPosition(const WorldPosition& param1) {
        typedef void (*FnType)(DSShellLauncherGameActorLocator* self, const WorldPosition& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedSetTargetPosition")->address);
        return fn(this, param1);
    }
    void SetTargetRadius(float param1) {
        typedef void (*FnType)(DSShellLauncherGameActorLocator* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedSetTargetRadius")->address);
        return fn(this, param1);
    }
};

struct SimplePathMover {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void MoveToWorldTransform(Entity* param1, const WorldTransform& param2, float param3) {
        typedef void (*FnType)(Entity* p1, const WorldTransform& p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SimplePathMover_sExportedMoveToWorldTransform")->address);
        return fn(param1, param2, param3);
    }
    static void MoveToWorldTransformOverTime(Entity* param1, const WorldTransform& param2, float param3) {
        typedef void (*FnType)(Entity* p1, const WorldTransform& p2, float p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SimplePathMover_sExportedMoveToWorldTransformOverTime")->address);
        return fn(param1, param2, param3);
    }
};

struct SpawnpointGame {
    // members
    uint8_t m_pad[0x0];
    // functions
    Entity* GetStartSequenceNetworkEntity() {
        typedef Entity* (*FnType)(SpawnpointGame* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SpawnpointGame_ExportedGetStartSequenceNetworkEntity")->address);
        return fn(this);
    }
};

struct DHighwaySyncControlCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void UpdateSyncControlParams() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DHighwaySyncControlCommand_sUpdateSyncControlParams")->address);
        return fn();
    }
};

struct DSSound {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GetAngleFromPlayerToListenerExport(bool* param1, float* param2) {
        typedef void (*FnType)(bool* p1, float* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSound_sGetAngleFromPlayerToListenerExport")->address);
        return fn(param1, param2);
    }
    static void GetCraterInfluenceOnPlayerExport(float* param1, float* param2) {
        typedef void (*FnType)(float* p1, float* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSound_sGetCraterInfluenceOnPlayerExport")->address);
        return fn(param1, param2);
    }
    static void IsPlayerCloseToCliffExport(bool* param1) {
        typedef void (*FnType)(bool* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSound_sIsPlayerCloseToCliffExport")->address);
        return fn(param1);
    }
};

struct DSDeliveryBotGameActor {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ActivateDeliveryBot(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedActivateDeliveryBot")->address);
        return fn(param1);
    }
    static bool CheckDeliveryBotAIMode(int32_t param1, EDSDeliveryBotAIMode param2) {
        typedef bool (*FnType)(int32_t p1, EDSDeliveryBotAIMode p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedCheckDeliveryBotAIMode")->address);
        return fn(param1, param2);
    }
    static bool CheckDeliveryBotDockingLocation(int32_t param1, EDSDeliveryBotDockingLocation param2) {
        typedef bool (*FnType)(int32_t p1, EDSDeliveryBotDockingLocation p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedCheckDeliveryBotDockingLocation")->address);
        return fn(param1, param2);
    }
    static bool CheckDeliveryBotRidingAIMode(int32_t param1, EDSDeliveryBotRidingAIMode param2) {
        typedef bool (*FnType)(int32_t p1, EDSDeliveryBotRidingAIMode p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedCheckDeliveryBotRidingAIMode")->address);
        return fn(param1, param2);
    }
    static void DeactivateDeliveryBot(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedDeactivateDeliveryBot")->address);
        return fn(param1);
    }
    static void ForceCompleteAllDeliveries(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedForceCompleteAllDeliveries")->address);
        return fn(param1);
    }
    static void ForceVisibleDeliveryBot(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedForceVisibleDeliveryBot")->address);
        return fn(param1);
    }
    static float GetAppearingDeliveryBotDistanceForCutscene() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedGetAppearingDeliveryBotDistanceForCutscene")->address);
        return fn();
    }
    static void GetDeliveryBotsInCurrentArea(Array_int* param1) {
        typedef void (*FnType)(Array_int* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedGetDeliveryBotsInCurrentArea")->address);
        return fn(param1);
    }
    static bool IsPlayerRiding(int32_t param1) {
        typedef bool (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedIsPlayerRiding")->address);
        return fn(param1);
    }
    static void StowDeliveryBot(int32_t param1, int32_t param2) {
        typedef void (*FnType)(int32_t p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedStowDeliveryBot")->address);
        return fn(param1, param2);
    }
};

struct CraftingRecipe {
    // members
    uint8_t m_pad[0x0];
    // functions
    int32_t GetMissingIngredientCount(int32_t param1, const Entity* param2) {
        typedef int32_t (*FnType)(CraftingRecipe* self, int32_t p1, const Entity* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CraftingRecipe_ExportedGetMissingIngredientCount")->address);
        return fn(this, param1, param2);
    }
    bool IsMissingIngredient(const EntityResource* param1, int32_t param2, const Entity* param3) {
        typedef bool (*FnType)(CraftingRecipe* self, const EntityResource* p1, int32_t p2, const Entity* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CraftingRecipe_ExportedIsMissingIngredient")->address);
        return fn(this, param1, param2, param3);
    }
};

struct DamageTypeGroup {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool Contains(const DamageTypeResource* param1) {
        typedef bool (*FnType)(DamageTypeGroup* self, const DamageTypeResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DamageTypeGroup_ExportedContains")->address);
        return fn(this, param1);
    }
};

struct DSCountTimerBase {
    // members
    uint8_t m_pad[0x40];
    // functions
    static void FindDSCountTimerFromHashCode(const uint32_t& param1, const DSCountTimerBase** param2) {
        typedef void (*FnType)(const uint32_t& p1, const DSCountTimerBase** p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCountTimerBase_sExportedFindInstanceFromHashCode")->address);
        return fn(param1, param2);
    }
    void GetCurrentTimeSecondsF(float* param1) {
        typedef void (*FnType)(DSCountTimerBase* self, float* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCountTimerBase_ExportedGetCurrentTimeSecondsF")->address);
        return fn(this, param1);
    }
    void GetDSCountTimerHashCode(uint32_t* param1) {
        typedef void (*FnType)(DSCountTimerBase* self, uint32_t* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCountTimerBase_ExportedGetHashCode")->address);
        return fn(this, param1);
    }
    void Pause() {
        typedef void (*FnType)(DSCountTimerBase* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCountTimerBase_ExportedPause")->address);
        return fn(this);
    }
    void Reset() {
        typedef void (*FnType)(DSCountTimerBase* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCountTimerBase_ExportedReset")->address);
        return fn(this);
    }
    void SetCurrentTimeSecondsF(const float& param1) {
        typedef void (*FnType)(DSCountTimerBase* self, const float& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCountTimerBase_ExportedSetCurrentTimeSecondsF")->address);
        return fn(this, param1);
    }
    void Start() {
        typedef void (*FnType)(DSCountTimerBase* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCountTimerBase_ExportedStart")->address);
        return fn(this);
    }
};

struct DSOnlineMissionCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ApplyPreparationItemsForLastStranding() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSOnlineMissionCommand_sApplyPreparationItemsForLastStranding")->address);
        return fn();
    }
    static void ApplyPreparationItemsForTarget(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSOnlineMissionCommand_sApplyPreparationItemsForTarget")->address);
        return fn(param1);
    }
};

struct WaterDetectionComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsInDSWater(bool& param1, float& param2, float& param3, bool& param4) {
        typedef bool (*FnType)(WaterDetectionComponent* self, bool& p1, float& p2, float& p3, bool& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WaterDetectionComponent_ExportedIsInDSWater")->address);
        return fn(this, param1, param2, param3, param4);
    }
    bool IsInWater(bool& param1, float& param2, float& param3) {
        typedef bool (*FnType)(WaterDetectionComponent* self, bool& p1, float& p2, float& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WaterDetectionComponent_ExportedIsInWater")->address);
        return fn(this, param1, param2, param3);
    }
};

struct DSSoundNodeGraphBindings {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GetCutsceneSkipMute(bool& param1) {
        typedef void (*FnType)(bool& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSoundNodeGraphBindings_sGetCutsceneSkipMute")->address);
        return fn(param1);
    }
    static void GetCutsceneSoundPlaying(bool& param1) {
        typedef void (*FnType)(bool& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSoundNodeGraphBindings_sGetCutsceneSoundPlaying")->address);
        return fn(param1);
    }
    static void GetFadeStateForSound(bool& param1, bool& param2, bool& param3, bool& param4) {
        typedef void (*FnType)(bool& p1, bool& p2, bool& p3, bool& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSoundNodeGraphBindings_sGetFadeStateForSound")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SetMusicPlayerCutscenePause(bool& param1) {
        typedef void (*FnType)(bool& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSoundNodeGraphBindings_sSetMusicPlayerCutscenePause")->address);
        return fn(param1);
    }
    static void SetMusicPlayerCutsceneResume() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSoundNodeGraphBindings_sSetMusicPlayerCutsceneResume")->address);
        return fn();
    }
};

struct Landmark {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsEnabled() {
        typedef bool (*FnType)(Landmark* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Landmark_ExportedIsEnabled")->address);
        return fn(this);
    }
    void SetEnabled(bool param1) {
        typedef void (*FnType)(Landmark* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Landmark_ExportedSetEnabled")->address);
        return fn(this, param1);
    }
};

struct DSGazerManagerCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void EnableRespawnGazers(Scene* param1) {
        typedef void (*FnType)(Scene* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGazerManagerCommand_sExportedEnableRespawnGazers")->address);
        return fn(param1);
    }
    static void GetUUIDHashOfGazerScene(const GGUUID& param1, uint32_t* param2) {
        typedef void (*FnType)(const GGUUID& p1, uint32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGazerManagerCommand_sExportedGetUUIDHashOfGazerScene")->address);
        return fn(param1, param2);
    }
    static bool IsGazerNoticingPlayer() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGazerManagerCommand_sExportedIsGazerNoticingPlayer")->address);
        return fn();
    }
    static void ResetAllGazers() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGazerManagerCommand_sExportedResetAllGazers")->address);
        return fn();
    }
};

struct AnnotationComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void EnableAllAnnotations(Entity* param1, bool param2) {
        typedef void (*FnType)(Entity* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnnotationComponent_sExportedEnableAllAnnotations")->address);
        return fn(param1, param2);
    }
    AnnotationInstance* FindAnnotationInstanceByResourceUUID(const wchar_t* param1, const GGUUID& param2) {
        typedef AnnotationInstance* (*FnType)(AnnotationComponent* self, const wchar_t* p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnnotationComponent_ExportedFindAnnotationInstanceByResourceUUID")->address);
        return fn(this, param1, param2);
    }
};

struct SequenceComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static Scene* GetSceneFromEntityBoundToSequence(Entity* param1) {
        typedef Scene* (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceComponent_sExportedGetSceneFromEntityBoundToSequence")->address);
        return fn(param1);
    }
    static int32_t GetSequenceCurrentFrameNumber(Entity* param1) {
        typedef int32_t (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceComponent_sExportedGetSequenceCurrentFrameNumber")->address);
        return fn(param1);
    }
    static int32_t GetSequenceNextFrameNumber(Entity* param1) {
        typedef int32_t (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceComponent_sExportedGetSequenceNextFrameNumber")->address);
        return fn(param1);
    }
    static int32_t GetSequenceStopFrameNumber(Entity* param1) {
        typedef int32_t (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceComponent_sExportedGetSequenceStopFrameNumber")->address);
        return fn(param1);
    }
};

struct MeleeWeaponMode {
    // members
    uint8_t m_pad[0x0];
    // functions
    void StopAttack() {
        typedef void (*FnType)(MeleeWeaponMode* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MeleeWeaponMode_ExportedStopAttack")->address);
        return fn(this);
    }
};

struct DSMissionSafetyHouseCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void DSCallDefaultPrivateRoomGraph(uint32_t param1, int32_t param2) {
        typedef void (*FnType)(uint32_t p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSafetyHouseCommand_sCallDefaultPrivateRoomGraph")->address);
        return fn(param1, param2);
    }
    static void DSClearNotNeededInfoLogWhenLeavePrivateRoom() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSafetyHouseCommand_sClearNotNeededInfoLogWhenLeavePrivateRoom")->address);
        return fn();
    }
    static float DSGetPrivateRoomDeltaTime() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSafetyHouseCommand_sGetPrivateRoomDeltaTime")->address);
        return fn();
    }
    static void DSTelemetryEnterPrivateRoomOnlyEVorTR() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSafetyHouseCommand_sTelemetryEnterPrivateRoomOnlyEVorTR")->address);
        return fn();
    }
    static void DSWakeupHeartmanRoomState() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSafetyHouseCommand_sWakeupHeartmanRoomState")->address);
        return fn();
    }
    static void DSWakeupPrivateRoomState(const GGUUID& param1) {
        typedef void (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSafetyHouseCommand_sWakeupPrivateRoomState")->address);
        return fn(param1);
    }
    static void DSWakeupPrivateRoomStateById(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSafetyHouseCommand_sWakeupPrivateRoomStateById")->address);
        return fn(param1);
    }
    static bool IsDisableLeavePrivateRoomInfoLogs() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSafetyHouseCommand_sIsDisableLeavePrivateRoomInfoLogs")->address);
        return fn();
    }
};

struct CPUProfileWindow {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void sCaptureFrames(int32_t param1) {
        typedef void (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedCaptureFrames")->address);
        return fn(param1);
    }
};

struct GrenadeTriggerComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    const Entity* GetContactTriggerEntity() {
        typedef const Entity* (*FnType)(GrenadeTriggerComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GrenadeTriggerComponent_ExportedGetContactTriggerEntity")->address);
        return fn(this);
    }
    int32_t GetContactTriggerModelPartIndex() {
        typedef int32_t (*FnType)(GrenadeTriggerComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GrenadeTriggerComponent_ExportedGetContactTriggerModelPartIndex")->address);
        return fn(this);
    }
    Vec3 GetContactTriggerNormal() {
        typedef Vec3 (*FnType)(GrenadeTriggerComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GrenadeTriggerComponent_ExportedGetContactTriggerNormal")->address);
        return fn(this);
    }
    WorldPosition GetContactTriggerPosition() {
        typedef WorldPosition (*FnType)(GrenadeTriggerComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GrenadeTriggerComponent_ExportedGetContactTriggerPosition")->address);
        return fn(this);
    }
    bool WasTriggeredByContact() {
        typedef bool (*FnType)(GrenadeTriggerComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GrenadeTriggerComponent_ExportedWasTriggeredByContact")->address);
        return fn(this);
    }
};

struct AttachToHelperMover {
    // members
    uint8_t m_pad[0x110];
    // functions
    static AttachToHelperMover* Create(Entity* param1, const String& param2) {
        typedef AttachToHelperMover* (*FnType)(Entity* p1, const String& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachToHelperMover_sExportedCreate")->address);
        return fn(param1, param2);
    }
};

struct ShieldComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetShieldInfo(float* param1, float* param2, float* param3, bool* param4, bool* param5) {
        typedef void (*FnType)(ShieldComponent* self, float* p1, float* p2, float* p3, bool* p4, bool* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShieldComponent_ExportedGetShieldInfo")->address);
        return fn(this, param1, param2, param3, param4, param5);
    }
};

struct DSWelcomeHoloComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void SetAnimationDistanceSetting(Entity* param1, const DSWelcomeHoloAnimationDistanceSetting* param2) {
        typedef void (*FnType)(Entity* p1, const DSWelcomeHoloAnimationDistanceSetting* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWelcomeHoloComponent_sExportedSetAnimationDistanceSetting")->address);
        return fn(param1, param2);
    }
    static void SetAnimationSyncSetWelcomeHolo(Entity* param1, const DSWelcomeHoloAnimationSyncSet* param2) {
        typedef void (*FnType)(Entity* p1, const DSWelcomeHoloAnimationSyncSet* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWelcomeHoloComponent_sExportedSetAnimationSyncSet")->address);
        return fn(param1, param2);
    }
    static void SetNotEchoTargetWelcomeHolo(Entity* param1, bool param2) {
        typedef void (*FnType)(Entity* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWelcomeHoloComponent_sExportedSetNotEchoTarget")->address);
        return fn(param1, param2);
    }
    static void StartInvisibleWelcomeHolo(Entity* param1) {
        typedef void (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWelcomeHoloComponent_sExportedStartInvisibleWelcomeHolo")->address);
        return fn(param1);
    }
    static void StartVisibleWelcomeHolo(Entity* param1) {
        typedef void (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWelcomeHoloComponent_sExportedStartVisibleWelcomeHolo")->address);
        return fn(param1);
    }
};

struct UTFToolsGroup {
    // members
    uint8_t m_pad[0x0];
    // functions
    static WString sDecodeUTF8(const String& param1) {
        typedef WString (*FnType)(const String& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UTFToolsGroup_sDecodeUTF8")->address);
        return fn(param1);
    }
    static String sEncodeUTF8(const WString& param1) {
        typedef String (*FnType)(const WString& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UTFToolsGroup_sEncodeUTF8")->address);
        return fn(param1);
    }
};

struct DSDeliverySurveyCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GetMissionDeliveredCountBySpecialRule(int32_t* param1, int32_t* param2) {
        typedef void (*FnType)(int32_t* p1, int32_t* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliverySurveyCommand_sGetMissionDeliveredCountBySpecialRule")->address);
        return fn(param1, param2);
    }
    static int32_t GetTotalDeliveryBaggageCountOnSurvey() {
        typedef int32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliverySurveyCommand_sGetTotalDeliveryBaggageCountOnSurvey")->address);
        return fn();
    }
    static void StopSwitchingPlayerTriggerBoxForPrivateRoom(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliverySurveyCommand_sStopSwitchingPlayerTriggerBoxForPrivateRoom")->address);
        return fn(param1);
    }
};

struct WorldEncounterManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void StopAllWorldEncounters() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldEncounterManager_sExportedStopAllWorldEncounters")->address);
        return fn();
    }
};

struct DSMissionCollectorsItemCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void Donated(const DSStringHashResource* param1) {
        typedef void (*FnType)(const DSStringHashResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionCollectorsItemCommand_sDonation")->address);
        return fn(param1);
    }
    static void Given(const DSStringHashResource* param1) {
        typedef void (*FnType)(const DSStringHashResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionCollectorsItemCommand_sGiven")->address);
        return fn(param1);
    }
    static bool IsDonatedAllMemoryChip() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionCollectorsItemCommand_sIsDonatedAllMemoryChip")->address);
        return fn();
    }
    static void PickingUp(const DSStringHashResource* param1) {
        typedef void (*FnType)(const DSStringHashResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionCollectorsItemCommand_sPickingUp")->address);
        return fn(param1);
    }
};

struct DSDeliveryManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void SendCommand(EDSDeliveryManagerCommandTarget param1, int32_t param2, const GGUUID& param3, int32_t param4, int32_t param5, int32_t param6, float param7, float param8) {
        typedef void (*FnType)(EDSDeliveryManagerCommandTarget p1, int32_t p2, const GGUUID& p3, int32_t p4, int32_t p5, int32_t p6, float p7, float p8);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryManager_sExportedSendCommand")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8);
    }
};

struct AttachedLightsComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetColor(const FRGBAColor& param1) {
        typedef void (*FnType)(AttachedLightsComponent* self, const FRGBAColor& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachedLightsComponent_ExportedSetColor")->address);
        return fn(this, param1);
    }
    void SetIntensityMultiplier(float param1) {
        typedef void (*FnType)(AttachedLightsComponent* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachedLightsComponent_ExportedSetIntensityMultiplier")->address);
        return fn(this, param1);
    }
};

struct InventoryWeapon {
    // members
    uint8_t m_pad[0x0];
    // functions
    float GetChargeFraction() {
        typedef float (*FnType)(InventoryWeapon* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryWeapon_ExportedGetChargeFraction")->address);
        return fn(this);
    }
    int32_t GetRounds() {
        typedef int32_t (*FnType)(InventoryWeapon* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryWeapon_ExportedGetRounds")->address);
        return fn(this);
    }
    int32_t GetRoundsInMagazine() {
        typedef int32_t (*FnType)(InventoryWeapon* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryWeapon_ExportedGetRoundsInMagazine")->address);
        return fn(this);
    }
};

struct DSNpcAlertZone {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ClearAlertZone(const GameActorLocator* param1) {
        typedef void (*FnType)(const GameActorLocator* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcAlertZoneComponent::sExportedClearAlertZone")->address);
        return fn(param1);
    }
    static void SetAlertZone(const GameActorLocator* param1, const NavMeshArea* param2) {
        typedef void (*FnType)(const GameActorLocator* p1, const NavMeshArea* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcAlertZoneComponent::sExportedSetAlertZone")->address);
        return fn(param1, param2);
    }
};

struct ChildEntityComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    Entity* GetChild() {
        typedef Entity* (*FnType)(ChildEntityComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ChildEntityComponent_ExportedGetChild")->address);
        return fn(this);
    }
};

struct TagEvent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetHandled(bool param1) {
        typedef void (*FnType)(TagEvent* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TagEvent_ExportedSetHandled")->address);
        return fn(this, param1);
    }
};

struct EconomyManagerResource {
    // members
    uint8_t m_pad[0x0];
    // functions
    static int32_t GetAmountInPlayerInventory(const GGUUID& param1) {
        typedef int32_t (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EconomyManagerResource_sExportedGetAmountInPlayerInventory")->address);
        return fn(param1);
    }
    static const EntityResource* GetCurrencyItemResource() {
        typedef const EntityResource* (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EconomyManagerResource_sExportedGetCurrencyItemResource")->address);
        return fn();
    }
};

struct AIHTNPlannerDaemonPositionPicker {
    // members
    uint8_t m_pad[0x0];
    // functions
    WorldPosition FindPositionInAttackRange(const AIAttack* param1, const WorldPosition& param2) {
        typedef WorldPosition (*FnType)(AIHTNPlannerDaemonPositionPicker* self, const AIAttack* p1, const WorldPosition& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIHTNPlannerDaemonPositionPicker_ExportedFindPositionInAttackRange")->address);
        return fn(this, param1, param2);
    }
};

struct CollectableManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool IsCollectableForEntityResourceUnlocked(const EntityResource* param1) {
        typedef bool (*FnType)(const EntityResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollectableManager_sExportedIsCollectableForEntityResourceUnlocked")->address);
        return fn(param1);
    }
    static bool IsCollectableUnlocked(const CollectableEntryBase* param1) {
        typedef bool (*FnType)(const CollectableEntryBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollectableManager_sExportedIsCollectableUnlocked")->address);
        return fn(param1);
    }
    static void SetCollectableForEntityResourceUnlocked(const EntityResource* param1) {
        typedef void (*FnType)(const EntityResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollectableManager_sExportedSetCollectableForEntityResourceUnlocked")->address);
        return fn(param1);
    }
    static void SetCollectableUnlocked(const CollectableEntryBase* param1) {
        typedef void (*FnType)(const CollectableEntryBase* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollectableManager_sExportedSetCollectableUnlocked")->address);
        return fn(param1);
    }
};

struct CrowdMember {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void SetCarryingCrate(Entity* param1, bool param2, const EntityResource* param3, const BooleanFact* param4) {
        typedef void (*FnType)(Entity* p1, bool p2, const EntityResource* p3, const BooleanFact* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CrowdMember_sExportedSetCarryingCrate")->address);
        return fn(param1, param2, param3, param4);
    }
    static void SetSleepingIndoors(Entity* param1) {
        typedef void (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CrowdMember_sExportedSetSleepingIndoors")->address);
        return fn(param1);
    }
};

struct StaminaComponent {
    // members
    uint8_t m_pad[0x90];
    // functions
    void AddModifier(const StaminaModifier* param1) {
        typedef void (*FnType)(StaminaComponent* self, const StaminaModifier* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaminaComponent_ExportedAddModifier")->address);
        return fn(this, param1);
    }
    void GetStamina(float& param1, float& param2) {
        typedef void (*FnType)(StaminaComponent* self, float& p1, float& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaminaComponent_ExportedGetStamina")->address);
        return fn(this, param1, param2);
    }
    void RemoveModifier(const StaminaModifier* param1) {
        typedef void (*FnType)(StaminaComponent* self, const StaminaModifier* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaminaComponent_ExportedRemoveModifier")->address);
        return fn(this, param1);
    }
    void UseStamina(float param1, const StaminaUsageType* param2, bool& param3, float& param4) {
        typedef void (*FnType)(StaminaComponent* self, float p1, const StaminaUsageType* p2, bool& p3, float& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaminaComponent_ExportedUseStamina")->address);
        return fn(this, param1, param2, param3, param4);
    }
};

struct MonitoredAnimationComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    Entity* GetMonitoredAnimationTarget() {
        typedef Entity* (*FnType)(MonitoredAnimationComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MonitoredAnimationComponent_ExportedGetMonitoredAnimationTarget")->address);
        return fn(this);
    }
};

struct GroundToAirTransitionComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetAirTransitionState(bool* param1, bool* param2) {
        typedef void (*FnType)(GroundToAirTransitionComponent* self, bool* p1, bool* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GroundToAirTransitionComponent_ExportedGetAirTransitionState")->address);
        return fn(this, param1, param2);
    }
};

struct ResourceSet {
    // members
    uint8_t m_pad[0x30];
    // functions
    static const RTTIRefObject* FindResource(const ResourceSet* param1, const ResourceID* param2) {
        typedef const RTTIRefObject* (*FnType)(const ResourceSet* p1, const ResourceID* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ResourceSet_FindResource")->address);
        return fn(param1, param2);
    }
};

struct SkinnedModel {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetPBDMaxDistanceMultiplier(float param1) {
        typedef void (*FnType)(SkinnedModel* self, float p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SkinnedModel_ExportedSetPBDMaxDistanceMultiplier")->address);
        return fn(this, param1);
    }
};

struct DSFixedGunHeatComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    float GetCurrentHeat() {
        typedef float (*FnType)(DSFixedGunHeatComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFixedGunHeatComponent_ExportedGetCurrentHeat")->address);
        return fn(this);
    }
    float GetOverheatThreshold() {
        typedef float (*FnType)(DSFixedGunHeatComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFixedGunHeatComponent_ExportedGetOverheatThreshold")->address);
        return fn(this);
    }
    float GetRecoverOverheatThreshold() {
        typedef float (*FnType)(DSFixedGunHeatComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFixedGunHeatComponent_ExportedGetRecoverOverheatThreshold")->address);
        return fn(this);
    }
    bool IsOverheating() {
        typedef bool (*FnType)(DSFixedGunHeatComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFixedGunHeatComponent_ExportedIsOverheating")->address);
        return fn(this);
    }
};

struct InventoryController {
    // members
    uint8_t m_pad[0x0];
    // functions
    void ForceMeleeWeapon() {
        typedef void (*FnType)(InventoryController* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryController_ExportedForceSwitchToMeleeWeapon")->address);
        return fn(this);
    }
    void HasAmmoAvailable(bool& param1, bool& param2, bool& param3) {
        typedef void (*FnType)(InventoryController* self, bool& p1, bool& p2, bool& p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryController_ExportedHasAmmoAvailable")->address);
        return fn(this, param1, param2, param3);
    }
    bool IsUsingHeavyWeapon() {
        typedef bool (*FnType)(InventoryController* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryController_ExportedIsUsingHeavyWeapon")->address);
        return fn(this);
    }
};

struct DSHeartmanRoomGraphArgs {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetHeartmanRoomGraphArgs(int32_t* param1, int32_t* param2, bool* param3) {
        typedef void (*FnType)(DSHeartmanRoomGraphArgs* self, int32_t* p1, int32_t* p2, bool* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSHeartmanRoomGraphArgs_ExportedGetHeartmanRoomGraphArgs")->address);
        return fn(this, param1, param2, param3);
    }
};

struct GameMenu {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void OpenMenuPage(Player* param1, Entity* param2, const GGUUID& param3, bool param4, const OpenMenuParameters* param5) {
        typedef void (*FnType)(Player* p1, Entity* p2, const GGUUID& p3, bool p4, const OpenMenuParameters* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuNodeGraphBindings::sOpenMenuPage")->address);
        return fn(param1, param2, param3, param4, param5);
    }
};

struct VegetationCoverComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    float GetBoxAtmosphereFactor() {
        typedef float (*FnType)(VegetationCoverComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VegetationCoverComponent_ExportedGetBoxAtmosphereFactor")->address);
        return fn(this);
    }
    bool IsInVegetation() {
        typedef bool (*FnType)(VegetationCoverComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VegetationCoverComponent_ExportedIsInVegetation")->address);
        return fn(this);
    }
};

struct AIHintSymbolResource {
    // members
    uint8_t m_pad[0x0];
    // functions
    const HtnSymbol* GetHintSymbol() {
        typedef const HtnSymbol* (*FnType)(AIHintSymbolResource* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIHintSymbolResource_ExportedGetHintSymbol")->address);
        return fn(this);
    }
};

struct GliderMover {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void AddDisplacement(Entity* param1, const Vec3& param2) {
        typedef void (*FnType)(Entity* p1, const Vec3& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GliderMover_sExportedAddDisplacement")->address);
        return fn(param1, param2);
    }
};

struct BodyVariantRuntimeComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool IsActiveBodyVariant(Entity* param1, const GGUUID& param2) {
        typedef bool (*FnType)(Entity* p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BodyVariantRuntimeComponent_sExportedIsActiveVariant")->address);
        return fn(param1, param2);
    }
    static void SetBodyVariant(Entity* param1, const GGUUID& param2) {
        typedef void (*FnType)(Entity* p1, const GGUUID& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BodyVariantRuntimeComponent_sExportedSetBodyVariant")->address);
        return fn(param1, param2);
    }
};

struct StunnedComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsActive() {
        typedef bool (*FnType)(StunnedComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StunnedComponent_ExportedIsActive")->address);
        return fn(this);
    }
};

struct HealOverTimeComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void HealOverTime(Entity* param1, float param2, float param3, float param4) {
        typedef void (*FnType)(Entity* p1, float p2, float p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HealOverTimeComponent_sExportedHealOverTime")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct DSSimpleAnimationComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsDoneOrHold() {
        typedef bool (*FnType)(DSSimpleAnimationComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSimpleAnimationComponent_ExportedIsDoneOrHold")->address);
        return fn(this);
    }
    void ResetMotion(uint32_t param1, ELoopMode param2) {
        typedef void (*FnType)(DSSimpleAnimationComponent* self, uint32_t p1, ELoopMode p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSimpleAnimationComponent_ExportedResetMotion")->address);
        return fn(this, param1, param2);
    }
    bool SetMotion(uint32_t param1, ELoopMode param2, bool param3) {
        typedef bool (*FnType)(DSSimpleAnimationComponent* self, uint32_t p1, ELoopMode p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSimpleAnimationComponent_ExportedSetMotion")->address);
        return fn(this, param1, param2, param3);
    }
};

struct DSBulletSystem {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void CreateBullet(const WorldPosition& param1, const WorldPosition& param2, uint32_t param3, float param4, float param5, EDSAttackId param6, EDSBulletLineType param7, bool param8, bool param9, bool param10, bool param11, bool param12, EDSWeaponId param13, EDSMagazineId param14) {
        typedef void (*FnType)(const WorldPosition& p1, const WorldPosition& p2, uint32_t p3, float p4, float p5, EDSAttackId p6, EDSBulletLineType p7, bool p8, bool p9, bool p10, bool p11, bool p12, EDSWeaponId p13, EDSMagazineId p14);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBulletSystem_sExportedCreateBullet")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14);
    }
};

struct DSBombDropperSettings {
    // members
    uint8_t m_pad[0x0];
    // functions
    void CalculateParametersFromPosition(const WorldPosition& param1, const WorldPosition& param2, float& param3, float& param4, float& param5) {
        typedef void (*FnType)(DSBombDropperSettings* self, const WorldPosition& p1, const WorldPosition& p2, float& p3, float& p4, float& p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBombDropperSettings_ExportedCalculateParametersFromPosition")->address);
        return fn(this, param1, param2, param3, param4, param5);
    }
    void DropBomb(const WorldPosition& param1, float param2, float param3, float param4) {
        typedef void (*FnType)(DSBombDropperSettings* self, const WorldPosition& p1, float p2, float p3, float p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBombDropperSettings_ExportedDropBomb")->address);
        return fn(this, param1, param2, param3, param4);
    }
    void DropBombFromPosition(const WorldPosition& param1, const WorldPosition& param2) {
        typedef void (*FnType)(DSBombDropperSettings* self, const WorldPosition& p1, const WorldPosition& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBombDropperSettings_ExportedDropBombFromPosition")->address);
        return fn(this, param1, param2);
    }
};

struct DSNetOnlineObjectCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void DeleteObjectsFollowingSyncFlags() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNetOnlineObjectCommand_sDeleteObjectsFollowingSyncFlags")->address);
        return fn();
    }
    static void EndLastStranding() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNetOnlineObjectCommand_sEndLastStranding")->address);
        return fn();
    }
    static bool IsLogin() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNetOnlineObjectCommand_sIsLogin")->address);
        return fn();
    }
    static bool IsServiceEnd() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNetOnlineObjectCommand_sIsServiceEnd")->address);
        return fn();
    }
    static void QueuePreSearch(int32_t param1, EDSQpidBandWidthLevel param2, const DSNetSyncPreSearchParam* param3) {
        typedef void (*FnType)(int32_t p1, EDSQpidBandWidthLevel p2, const DSNetSyncPreSearchParam* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNetOnlineObjectCommand_sQueuePreSearch")->address);
        return fn(param1, param2, param3);
    }
    static void RequestCheckOnlineState() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNetOnlineObjectCommand_sRequestCheckOnlineState")->address);
        return fn();
    }
    static void StartLastStranding() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNetOnlineObjectCommand_sStartLastStranding")->address);
        return fn();
    }
};

struct AI {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool gHtnFactMatchesQuery(const HtnTinyAtom* param1, const HtnTinyAtom* param2, uint32_t param3) {
        typedef bool (*FnType)(const HtnTinyAtom* p1, const HtnTinyAtom* p2, uint32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gHtnFactMatchesQuery")->address);
        return fn(param1, param2, param3);
    }
};

struct PropertyComponentResource {
    // members
    uint8_t m_pad[0x0];
    // functions
    const PropertyContainerResource* GetContainerResource() {
        typedef const PropertyContainerResource* (*FnType)(PropertyComponentResource* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PropertyComponentResource_ExportedGetContainerResource")->address);
        return fn(this);
    }
};

struct ContextualSpeechComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool HasContextualSpeechToSay(const ContextualSpeechEvent* param1, Entity* param2, const RTTIObject* param3, const RTTIObject* param4) {
        typedef bool (*FnType)(ContextualSpeechComponent* self, const ContextualSpeechEvent* p1, Entity* p2, const RTTIObject* p3, const RTTIObject* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ContextualSpeechComponent_ExportedHasContextualSpeechToSay")->address);
        return fn(this, param1, param2, param3, param4);
    }
    static void SayContextualSpeech(Entity* param1, const ContextualSpeechEvent* param2, Entity* param3, const RTTIObject* param4, const RTTIObject* param5) {
        typedef void (*FnType)(Entity* p1, const ContextualSpeechEvent* p2, Entity* p3, const RTTIObject* p4, const RTTIObject* p5);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ContextualSpeechComponent_sExportedSayContextualSpeech")->address);
        return fn(param1, param2, param3, param4, param5);
    }
};

struct PickUpComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void AddAmount(int32_t param1) {
        typedef void (*FnType)(PickUpComponent* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PickUpComponent_ExportedAddAmount")->address);
        return fn(this, param1);
    }
};

struct LastingHealComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool IsLastingHealActive(const Entity* param1) {
        typedef bool (*FnType)(const Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("LastingHealComponent_sExportedIsLastingHealActive")->address);
        return fn(param1);
    }
    static void StartLastingHeal(Entity* param1) {
        typedef void (*FnType)(Entity* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("LastingHealComponent_sExportedStartLastingHeal")->address);
        return fn(param1);
    }
};

struct DSRaceNodeGraphBindings {
    // members
    uint8_t m_pad[0x0];
    // functions
    static float GetRaceLapTime(int32_t param1) {
        typedef float (*FnType)(int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRaceNodeGraphBindings_sExportedGetRaceLapTime")->address);
        return fn(param1);
    }
    static bool IsRaceMission(uint64_t param1) {
        typedef bool (*FnType)(uint64_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRaceNodeGraphBindings_sExportedIsRaceMission")->address);
        return fn(param1);
    }
    static void SetStartTransform(const WorldTransform& param1) {
        typedef void (*FnType)(const WorldTransform& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRaceNodeGraphBindings_sExportedSetStartTransform")->address);
        return fn(param1);
    }
    static void ShowRaceHUD(bool param1) {
        typedef void (*FnType)(bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRaceNodeGraphBindings_sExportedShowRaceHUD")->address);
        return fn(param1);
    }
    static void StartRace() {
        typedef void (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRaceNodeGraphBindings_sExportedStartRace")->address);
        return fn();
    }
};

struct PlayerNotificationComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void ClearNotifications(const PlayerNotificationResource* param1) {
        typedef void (*FnType)(PlayerNotificationComponent* self, const PlayerNotificationResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerNotificationComponent_ExportedClearNotifications")->address);
        return fn(this, param1);
    }
    bool IsNotificationActive(const PlayerNotificationResource* param1) {
        typedef bool (*FnType)(PlayerNotificationComponent* self, const PlayerNotificationResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerNotificationComponent_ExportedIsNotificationActive")->address);
        return fn(this, param1);
    }
    void ShowNotification(const PlayerNotificationResource* param1, const PlayerNotificationPriority* param2, const wchar_t* param3, const LocalizedTextResource* param4, bool param5, float param6, float param7, bool param8) {
        typedef void (*FnType)(PlayerNotificationComponent* self, const PlayerNotificationResource* p1, const PlayerNotificationPriority* p2, const wchar_t* p3, const LocalizedTextResource* p4, bool p5, float p6, float p7, bool p8);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerNotificationComponent_ExportedShowNotification")->address);
        return fn(this, param1, param2, param3, param4, param5, param6, param7, param8);
    }
};

struct ComboComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GetComboLevel(const Entity* param1, int32_t* param2, float* param3) {
        typedef void (*FnType)(const Entity* p1, int32_t* p2, float* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ComboComponent_sExportedGetComboLevel")->address);
        return fn(param1, param2, param3);
    }
    static void GetComboTimer(const Entity* param1, float* param2, float* param3) {
        typedef void (*FnType)(const Entity* p1, float* p2, float* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ComboComponent_sExportedGetComboTimer")->address);
        return fn(param1, param2, param3);
    }
    static void IncreaseComboLevel(Entity* param1, int32_t param2) {
        typedef void (*FnType)(Entity* p1, int32_t p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ComboComponent_sExportedIncreaseComboLevel")->address);
        return fn(param1, param2);
    }
};

struct DSGroundMovementComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    float DebugGetMoveSyncEventTime(float param1, uint32_t param2, int32_t param3) {
        typedef float (*FnType)(DSGroundMovementComponent* self, float p1, uint32_t p2, int32_t p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGroundMovementComponent_ExportedDebugGetMoveSyncEventTime")->address);
        return fn(this, param1, param2, param3);
    }
    void DebugMovePositionToHeading(const WorldPosition& param1, float param2, float* param3, float* param4) {
        typedef void (*FnType)(DSGroundMovementComponent* self, const WorldPosition& p1, float p2, float* p3, float* p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGroundMovementComponent_ExportedDebugMovePositionToHeading")->address);
        return fn(this, param1, param2, param3, param4);
    }
    void DebugSetControllerState(const wchar_t* param1, WorldPosition param2, WorldPosition param3, float param4, float param5, float param6, float param7, float param8, float param9, uint32_t param10, float param11, Quat param12, float param13, WorldPosition param14, WorldPosition param15, bool param16, bool param17, bool param18, bool param19, bool param20, bool param21, bool param22, bool param23, bool param24, bool param25, bool param26, bool param27, bool param28, WorldPosition param29, bool param30) {
        typedef void (*FnType)(DSGroundMovementComponent* self, const wchar_t* p1, WorldPosition p2, WorldPosition p3, float p4, float p5, float p6, float p7, float p8, float p9, uint32_t p10, float p11, Quat p12, float p13, WorldPosition p14, WorldPosition p15, bool p16, bool p17, bool p18, bool p19, bool p20, bool p21, bool p22, bool p23, bool p24, bool p25, bool p26, bool p27, bool p28, WorldPosition p29, bool p30);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGroundMovementComponent_ExportedDebugSetControllerState")->address);
        return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21, param22, param23, param24, param25, param26, param27, param28, param29, param30);
    }
};

struct DSMissionOpenConditionList {
    // members
    uint8_t m_pad[0x50];
    // functions
    static Array_cptr_DSMissionOpenCondition GetOpenConditionList(DSMissionOpenConditionList* param1) {
        typedef Array_cptr_DSMissionOpenCondition (*FnType)(DSMissionOpenConditionList* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenConditionList_GetOpenConditionList")->address);
        return fn(param1);
    }
};

struct PropertyComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    PropertyContainer* GetContainer() {
        typedef PropertyContainer* (*FnType)(PropertyComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PropertyComponent_ExportedGetContainer")->address);
        return fn(this);
    }
};

struct BuddyManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ClearBuddy(const BuddyComponentResource* param1) {
        typedef void (*FnType)(const BuddyComponentResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyManager_sExportedClearBuddy")->address);
        return fn(param1);
    }
    static Entity* GetBuddy(const BuddyComponentResource* param1, EBuddyState& param2) {
        typedef Entity* (*FnType)(const BuddyComponentResource* p1, EBuddyState& p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyManager_sExportedGetBuddy")->address);
        return fn(param1, param2);
    }
    static void RegisterSceneForMessages(const BuddyComponentResource* param1, Scene* param2) {
        typedef void (*FnType)(const BuddyComponentResource* p1, Scene* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyManager_sExportedRegisterSceneForMessages")->address);
        return fn(param1, param2);
    }
    static void RequestSpawnBuddy(const BuddyComponentResource* param1, EBuddySpawnRequestMode param2, const AIMarker* param3) {
        typedef void (*FnType)(const BuddyComponentResource* p1, EBuddySpawnRequestMode p2, const AIMarker* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyManager_sExportedRequestSpawnBuddy")->address);
        return fn(param1, param2, param3);
    }
};

struct LootComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    void DisableLooting() {
        typedef void (*FnType)(LootComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("LootComponent_ExportedDisableLooting")->address);
        return fn(this);
    }
    void EnableLooting() {
        typedef void (*FnType)(LootComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("LootComponent_ExportedEnableLooting")->address);
        return fn(this);
    }
    bool HasBeenLooted() {
        typedef bool (*FnType)(LootComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("LootComponent_ExportedHasBeenLooted")->address);
        return fn(this);
    }
};

struct DSMissionDiscreteCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GetNuclearMissionVariables(float* param1, float* param2, float* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, bool* param9) {
        typedef void (*FnType)(float* p1, float* p2, float* p3, bool* p4, bool* p5, bool* p6, bool* p7, bool* p8, bool* p9);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionDiscreteCommand_sGetNuclearMissionVariables")->address);
        return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9);
    }
};

struct RangedWeaponMode {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void DisableEjectEffectsLocation(Entity* param1, const RangedWeaponModeResource* param2, const EjectEffectsLocationResource* param3) {
        typedef void (*FnType)(Entity* p1, const RangedWeaponModeResource* p2, const EjectEffectsLocationResource* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RangedWeaponMode_sExportedDisableEjectEffectsLocation")->address);
        return fn(param1, param2, param3);
    }
    static void DisableEjectLocation(Entity* param1, const RangedWeaponModeResource* param2, const EjectLocationResource* param3) {
        typedef void (*FnType)(Entity* p1, const RangedWeaponModeResource* p2, const EjectLocationResource* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RangedWeaponMode_sExportedDisableEjectLocation")->address);
        return fn(param1, param2, param3);
    }
};

struct LightbakeOnly {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool GetLightbakeOnlyFlag() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sGetLightbakeOnlyFlag_Entrypoint")->address);
        return fn();
    }
};

struct MultiSpawnpoint {
    // members
    uint8_t m_pad[0x0];
    // functions
    void Despawn() {
        typedef void (*FnType)(MultiSpawnpoint* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MultiSpawnpoint_ExportedDespawn")->address);
        return fn(this);
    }
    Array_cptr_Entity GetEntities() {
        typedef Array_cptr_Entity (*FnType)(MultiSpawnpoint* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MultiSpawnpoint_ExportedGetEntities")->address);
        return fn(this);
    }
    void MultiSpawn(int32_t param1) {
        typedef void (*FnType)(MultiSpawnpoint* self, int32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MultiSpawnpoint_ExportedMultiSpawn")->address);
        return fn(this, param1);
    }
    void Spawn() {
        typedef void (*FnType)(MultiSpawnpoint* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MultiSpawnpoint_ExportedSpawn")->address);
        return fn(this);
    }
};

struct DSNetOnlineObjectConfig {
    // members
    uint8_t m_pad[0x0];
    // functions
    void SetSphereRange(const WorldPosition& param1, float param2) {
        typedef void (*FnType)(DSNetOnlineObjectConfig* self, const WorldPosition& p1, float p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNetOnlineObjectConfig_ExportedSetSphereRange")->address);
        return fn(this, param1, param2);
    }
};

struct SmartObjectComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CanSatisfyMainDesire(const Entity* param1, const Entity* param2) {
        typedef bool (*FnType)(const Entity* p1, const Entity* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SmartObjectComponent_sExportedCanSatisfyMainDesire")->address);
        return fn(param1, param2);
    }
    bool IsEnabled() {
        typedef bool (*FnType)(SmartObjectComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SmartObjectComponent_ExportedIsEnabled")->address);
        return fn(this);
    }
    void SetEnabled(bool param1) {
        typedef void (*FnType)(SmartObjectComponent* self, bool p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SmartObjectComponent_ExportedSetEnabled")->address);
        return fn(this, param1);
    }
};

struct ModificationItemComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static EModificationItemCategory GetCategory(const InventoryItem* param1) {
        typedef EModificationItemCategory (*FnType)(const InventoryItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ModificationItemComponent_sExportedGetCategory")->address);
        return fn(param1);
    }
    static int32_t GetModificationCount(const InventoryItem* param1) {
        typedef int32_t (*FnType)(const InventoryItem* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ModificationItemComponent_sExportedGetModificationCount")->address);
        return fn(param1);
    }
};

struct ArtPartsVariation {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ApplyArtPartsVariation(Entity* param1, const ArtPartsVariationResource* param2) {
        typedef void (*FnType)(Entity* p1, const ArtPartsVariationResource* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ArtPartsVariation_sExportedApplyArtPartsVariation")->address);
        return fn(param1, param2);
    }
};

struct InventoryCollection {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GiveTo(Inventory* param1, bool param2) {
        typedef void (*FnType)(InventoryCollection* self, Inventory* p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryCollection_ExportedGiveTo")->address);
        return fn(this, param1, param2);
    }
};

struct DSMissionLargeSceneCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void ActivateFreeMissionScene(const GGUUID& param1, bool param2, bool param3) {
        typedef void (*FnType)(const GGUUID& p1, bool p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLargeSceneCommand_sActivateFreeMissionScene")->address);
        return fn(param1, param2, param3);
    }
    static void ActivateMissionLargeScene(const GGUUID& param1, bool param2, bool param3) {
        typedef void (*FnType)(const GGUUID& p1, bool p2, bool p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLargeSceneCommand_sActivateMissionLargeScene")->address);
        return fn(param1, param2, param3);
    }
    static bool CheckAllMissionSceneIsStable() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLargeSceneCommand_sCheckAllMissionSceneIsStable")->address);
        return fn();
    }
    static bool IsRunningMissionLargeScene(const GGUUID& param1) {
        typedef bool (*FnType)(const GGUUID& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLargeSceneCommand_sIsRunningMissionLargeScene")->address);
        return fn(param1);
    }
};

struct PBDGraph {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void Update(PBDGraphUpdateArgs& param1) {
        typedef void (*FnType)(PBDGraphUpdateArgs& p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PBDGraphInterface::sUpdate")->address);
        return fn(param1);
    }
};

struct ContextualEmotionComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsPerformingContextualEmotion(const ContextualEmotion* param1) {
        typedef bool (*FnType)(ContextualEmotionComponent* self, const ContextualEmotion* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ContextualEmotionComponent_ExportedIsPerformingContextualEmotion")->address);
        return fn(this, param1);
    }
};

struct DynamicPrefabCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void DisableDynamicPrefab(const GGUUID& param1, bool param2) {
        typedef void (*FnType)(const GGUUID& p1, bool p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DynamicPrefabCommand_sExportedDisableDynamicPrefab")->address);
        return fn(param1, param2);
    }
};

struct MeleeWeaponComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool IsInMelee() {
        typedef bool (*FnType)(MeleeWeaponComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MeleeWeaponComponent_ExportedIsInMelee")->address);
        return fn(this);
    }
};

struct DSDeliveryBotMenuInfo {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool CheckDeliveryBotMenuInfoState(EDSDeliveryBotMenuInfoState param1) {
        typedef bool (*FnType)(EDSDeliveryBotMenuInfoState p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotMenuInfo_sExportedCheckDeliveryBotMenuInfoState")->address);
        return fn(param1);
    }
};

struct InventoryCapacityComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static int32_t GetFreeSlotsLeft(Entity* param1, EInventoryCategory param2) {
        typedef int32_t (*FnType)(Entity* p1, EInventoryCategory p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryCapacityComponent_sExportedGetFreeSlotsLeft")->address);
        return fn(param1, param2);
    }
};

struct AIMover {
    // members
    uint8_t m_pad[0x0];
    // functions
    void NavMeshRayCast(const WorldPosition& param1, bool* param2, bool* param3) {
        typedef void (*FnType)(AIMover* self, const WorldPosition& p1, bool* p2, bool* p3);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIMover_ExportedNavMeshRayCast")->address);
        return fn(this, param1, param2, param3);
    }
};

struct UDSGroup {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void PostEvent(RTTIRefObject* param1) {
        typedef void (*FnType)(RTTIRefObject* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSGroup_sExportedPostEvent")->address);
        return fn(param1);
    }
};

struct CachedHelperLocationsComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GetHelperLocationInEntitySpace(Entity* param1, const wchar_t* param2, Vec3& param3, Mat44& param4) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, Vec3& p3, Mat44& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CachedHelperLocationsComponent_sExportedGetHelperLocationInEntitySpace")->address);
        return fn(param1, param2, param3, param4);
    }
    static void GetHelperLocationInWorldSpace(Entity* param1, const wchar_t* param2, WorldPosition& param3, Mat44& param4) {
        typedef void (*FnType)(Entity* p1, const wchar_t* p2, WorldPosition& p3, Mat44& p4);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CachedHelperLocationsComponent_sExportedGetHelperLocationInWorldSpace")->address);
        return fn(param1, param2, param3, param4);
    }
};

struct DSPrototypeNoiseAreaResource {
    // members
    uint8_t m_pad[0x0];
    // functions
    void MakeNoise() {
        typedef void (*FnType)(DSPrototypeNoiseAreaResource* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPrototypeNoiseAreaResource_ExportedMakeNoise")->address);
        return fn(this);
    }
};

struct EntitlementResource {
    // members
    uint8_t m_pad[0x40];
    // functions
    static bool IsEntitlementAvailable(const EntitlementResource* param1) {
        typedef bool (*FnType)(const EntitlementResource* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitlementResource_sExportedIsEntitlementAvailable")->address);
        return fn(param1);
    }
};

struct PlayerLoadoutManagerResource {
    // members
    uint8_t m_pad[0x0];
    // functions
    static void GiveLoadoutToPlayer(const PlayerLoadout* param1) {
        typedef void (*FnType)(const PlayerLoadout* p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerLoadoutManagerResource_sExportedGiveLoadoutToPlayer")->address);
        return fn(param1);
    }
};

struct ForceFieldManager {
    // members
    uint8_t m_pad[0x0];
    // functions
    void GetForce(const WorldPosition& param1, const Vec3& param2, const Vec3& param3, float param4, float param5, EForceFieldCategoryMask param6, Vec3* param7) {
        typedef void (*FnType)(ForceFieldManager* self, const WorldPosition& p1, const Vec3& p2, const Vec3& p3, float p4, float p5, EForceFieldCategoryMask p6, Vec3* p7);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ForceFieldManager_ExportedGetForce")->address);
        return fn(this, param1, param2, param3, param4, param5, param6, param7);
    }
};

struct DSDebugNodeGraphGroup {
    // members
    uint8_t m_pad[0x0];
    // functions
    static bool DebugIsPressed(uint32_t param1) {
        typedef bool (*FnType)(uint32_t p1);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sDebugIsFunctionPressed")->address);
        return fn(param1);
    }
};

struct FactMusicPresetCollection {
    // members
    uint8_t m_pad[0x0];
    // functions
    Array_cptr_FactMusicPreset GetPresets() {
        typedef Array_cptr_FactMusicPreset (*FnType)(FactMusicPresetCollection* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactMusicPresetCollection_ExportedGetPresets")->address);
        return fn(this);
    }
};

struct AIAgent {
    // members
    uint8_t m_pad[0x0];
    // functions
    bool FindDaemonByRTTI(const RTTI& param1, AIHTNPlannerDaemon** param2) {
        typedef bool (*FnType)(AIAgent* self, const RTTI& p1, AIHTNPlannerDaemon** p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIAgent_ExportedFindDaemonByRTTI")->address);
        return fn(this, param1, param2);
    }
};

struct DSMissionRankingCommand {
    // members
    uint8_t m_pad[0x0];
    // functions
    static uint32_t GetCurrentRankingSeasonId() {
        typedef uint32_t (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionRankingCommand_sGetCurrentRankingSeasonId")->address);
        return fn();
    }
    static bool IsNightmareRankingMode() {
        typedef bool (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionRankingCommand_sIsNightmareRankingMode")->address);
        return fn();
    }
};

struct KjpSoundGraphNodeGroup {
    // members
    uint8_t m_pad[0x0];
    // functions
    static float GetSoundTimeScaleExport() {
        typedef float (*FnType)();
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KjpSoundGraphNode::sGetTimeScaleExport")->address);
        return fn();
    }
};

struct SequenceNetworkComponent {
    // members
    uint8_t m_pad[0x0];
    // functions
    SequenceNetworkInstance* GetSequenceNetworkInstance() {
        typedef SequenceNetworkInstance* (*FnType)(SequenceNetworkComponent* self);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkComponent_ExportedGetSequenceNetworkInstance")->address);
        return fn(this);
    }
};

struct HUDLogicGroupResource {
    // members
    uint8_t m_pad[0x70];
    // functions
    static void HighlightHUDGroup(const HUDLogicGroupResource* param1, const Player* param2) {
        typedef void (*FnType)(const HUDLogicGroupResource* p1, const Player* p2);
        static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HUDLogicGroupResource_sExportedHighlightHUDGroup")->address);
        return fn(param1, param2);
    }
};

// Sol2 lua binding all class & functions
static void BindingFunctions(sol::state& lua) {
    lua.new_usertype<RetractingPartsComponent>("RetractingPartsComponent",
        "AbortRetractingParts", &RetractingPartsComponent::AbortRetractingParts,
        "StartRetractingParts", &RetractingPartsComponent::StartRetractingParts,
        "RegisterRetractingPartEntity", &RetractingPartsComponent::RegisterRetractingPartEntity
    );
    lua.new_usertype<DSGameState>("DSGameState",
        "IsPauseMusic", &DSGameState::IsPauseMusic,
        "IsStoppingGameEventLoose", &DSGameState::IsStoppingGameEventLoose,
        "CalcUnsaveReason", &DSGameState::CalcUnsaveReason,
        "GetGameState2", &DSGameState::GetGameState2,
        "IsStoppingGameEvent", &DSGameState::IsStoppingGameEvent,
        "CalcAutosaveRequestUnsaveReason", &DSGameState::CalcAutosaveRequestUnsaveReason,
        "SetGameState", &DSGameState::SetGameState
    );
    lua.new_usertype<AttachToEntityMover>("AttachToEntityMover",
        "SetLocalMatrix", &AttachToEntityMover::SetLocalMatrix
    );
    lua.new_usertype<Game>("Game",
        "Game_BranchToMusicSection", &Game::Game_BranchToMusicSection,
        "Game_GetMusicCurrentPreset", &Game::Game_GetMusicCurrentPreset,
        "DSGetTitleRegion", &Game::DSGetTitleRegion,
        "Game_SetMusicIntensity", &Game::Game_SetMusicIntensity,
        "Game_GetGameSettings", &Game::Game_GetGameSettings,
        "DamageEntitiesInRangeByFaction", &Game::DamageEntitiesInRangeByFaction,
        "Game_SetMusicPreset", &Game::Game_SetMusicPreset,
        "DSCreateSaveGameWithActivity_PlusWakeupDreamDemo", &Game::DSCreateSaveGameWithActivity_PlusWakeupDreamDemo,
        "Game_GetGameMode", &Game::Game_GetGameMode,
        "Game_GetGameTimeInSec", &Game::Game_GetGameTimeInSec,
        "EntityMessage_DeconstructPlacedEntity", &Game::EntityMessage_DeconstructPlacedEntity,
        "NotifyHackDisabled", &Game::NotifyHackDisabled,
        "DSExistsRetrySaveData", &Game::DSExistsRetrySaveData,
        "DSCreateSaveGameForStrideQpidArea", &Game::DSCreateSaveGameForStrideQpidArea,
        "Game_GetMusicTiming", &Game::Game_GetMusicTiming,
        "Game_StartAmbience", &Game::Game_StartAmbience,
        "Game_GetMusicPresetIndex", &Game::Game_GetMusicPresetIndex,
        "CreateSaveGame", &Game::CreateSaveGame,
        "DSCreateSaveGame", &Game::DSCreateSaveGame,
        "DSClearRetrySaveData", &Game::DSClearRetrySaveData,
        "DSCreateSaveGameForRetry", &Game::DSCreateSaveGameForRetry,
        "DSCreateSaveGameWithActivity", &Game::DSCreateSaveGameWithActivity,
        "Game_IsDayNightCycleEnabled", &Game::Game_IsDayNightCycleEnabled,
        "DSCreateSaveGamePlayWakeupDreamDemo", &Game::DSCreateSaveGamePlayWakeupDreamDemo,
        "DSGetDifficulty", &Game::DSGetDifficulty,
        "DSGetDifficultyWithoutFixMode", &Game::DSGetDifficultyWithoutFixMode,
        "Game_SetTimeOfDay", &Game::Game_SetTimeOfDay,
        "Game_GetTimeOfDay", &Game::Game_GetTimeOfDay,
        "Game_EnableDayNightCycle", &Game::Game_EnableDayNightCycle,
        "Game_StopAmbience", &Game::Game_StopAmbience
    );
    lua.new_usertype<DSGameBaggageListItem>("DSGameBaggageListItem",
        "GetRarity", &DSGameBaggageListItem::GetRarity,
        "GetContentsDamageType", &DSGameBaggageListItem::GetContentsDamageType,
        "GetCaseDurability", &DSGameBaggageListItem::GetCaseDurability,
        "GetContentsDurability", &DSGameBaggageListItem::GetContentsDurability,
        "GetBaggageCaseType", &DSGameBaggageListItem::GetBaggageCaseType,
        "GetBaggageWeight", &DSGameBaggageListItem::GetBaggageWeight,
        "GetVolumeType", &DSGameBaggageListItem::GetVolumeType
    );
    lua.new_usertype<ShaderVariableComponent>("ShaderVariableComponent",
        "AnimateShaderVariable", &ShaderVariableComponent::AnimateShaderVariable,
        "SetShaderVariableVec3", &ShaderVariableComponent::SetShaderVariableVec3,
        "SetShaderVariableFloat", &ShaderVariableComponent::SetShaderVariableFloat
    );
    lua.new_usertype<RagdollComponent>("RagdollComponent",
        "RagdollDriven", &RagdollComponent::RagdollDriven,
        "SetContraintsProperties", &RagdollComponent::SetContraintsProperties,
        "RequestRagdollActivation", &RagdollComponent::RequestRagdollActivation,
        "SetBodiesProperties", &RagdollComponent::SetBodiesProperties,
        "RagdollMotorDriven", &RagdollComponent::RagdollMotorDriven,
        "RagdollDrivenDefault", &RagdollComponent::RagdollDrivenDefault,
        "ApplySoftKeyFrame", &RagdollComponent::ApplySoftKeyFrame,
        "ApplyHardKeyFrame", &RagdollComponent::ApplyHardKeyFrame,
        "IsRagdollAcquired", &RagdollComponent::IsRagdollAcquired
    );
    lua.new_usertype<HumanoidMover>("HumanoidMover",
        "GetFallingHeight", &HumanoidMover::GetFallingHeight
    );
    lua.new_usertype<DSMissionGoalsResource>("DSMissionGoalsResource",
        "SetShortTermGoal", &DSMissionGoalsResource::SetShortTermGoal,
        "ShowNotificationHUD", &DSMissionGoalsResource::ShowNotificationHUD,
        "ClearShortTermGoal", &DSMissionGoalsResource::ClearShortTermGoal,
        "SetLongTermGoal", &DSMissionGoalsResource::SetLongTermGoal,
        "CloseNotificationHUD", &DSMissionGoalsResource::CloseNotificationHUD,
        "SetEpisode", &DSMissionGoalsResource::SetEpisode,
        "ClearEpisode", &DSMissionGoalsResource::ClearEpisode,
        "ClearLongTermGoal", &DSMissionGoalsResource::ClearLongTermGoal
    );
    lua.new_usertype<DSMissionProgressCommand>("DSMissionProgressCommand",
        "CheckDSMissionProgressSimple", &DSMissionProgressCommand::CheckDSMissionProgressSimple,
        "CheckDeliveringBaggages", &DSMissionProgressCommand::CheckDeliveringBaggages,
        "IsMissionProgressWithTimer", &DSMissionProgressCommand::IsMissionProgressWithTimer,
        "CheckDSMissionPerformState", &DSMissionProgressCommand::CheckDSMissionPerformState,
        "CheckMultipleDSMissionProgress", &DSMissionProgressCommand::CheckMultipleDSMissionProgress,
        "GetDSMissionIdFromResource", &DSMissionProgressCommand::GetDSMissionIdFromResource,
        "CheckDSMissionProgressByDestination", &DSMissionProgressCommand::CheckDSMissionProgressByDestination,
        "CheckDSMissionProgress", &DSMissionProgressCommand::CheckDSMissionProgress
    );
    lua.new_usertype<DSCameraInterface>("DSCameraInterface",
        "SetEnableForceSubjectiveCameraMode", &DSCameraInterface::SetEnableForceSubjectiveCameraMode,
        "GetCameraRotation", &DSCameraInterface::GetCameraRotation,
        "SetCameraRotationHeading", &DSCameraInterface::SetCameraRotationHeading,
        "ResetAroundCameraCollisionTriggerType", &DSCameraInterface::ResetAroundCameraCollisionTriggerType,
        "GetCameraPosition", &DSCameraInterface::GetCameraPosition,
        "RequestShowdownCamera", &DSCameraInterface::RequestShowdownCamera,
        "SetStock", &DSCameraInterface::SetStock,
        "SetCameraRotationPitch", &DSCameraInterface::SetCameraRotationPitch,
        "RequestForceRadioCallCamera", &DSCameraInterface::RequestForceRadioCallCamera,
        "IsForceSubjectiveCamera", &DSCameraInterface::IsForceSubjectiveCamera,
        "StopShowdownCamera", &DSCameraInterface::StopShowdownCamera,
        "SetAroundCameraCollisionTriggerType", &DSCameraInterface::SetAroundCameraCollisionTriggerType,
        "RequestTargetConstrainCamera", &DSCameraInterface::RequestTargetConstrainCamera
    );
    lua.new_usertype<TrophySystem>("TrophySystem",
        "SetTrophyProgressIntegerStat", &TrophySystem::SetTrophyProgressIntegerStat,
        "SetTrophyProgressFloatStat", &TrophySystem::SetTrophyProgressFloatStat,
        "CaptureTrophyScreenshot", &TrophySystem::CaptureTrophyScreenshot,
        "IncrementTrophyProgressIntegerStat", &TrophySystem::IncrementTrophyProgressIntegerStat,
        "IsTrophyUnlocked", &TrophySystem::IsTrophyUnlocked,
        "CompletedUpconvertTrophy", &TrophySystem::CompletedUpconvertTrophy,
        "UnlockTrophy", &TrophySystem::UnlockTrophy
    );
    lua.new_usertype<AttachPhysicsRagdollToHelperMover>("AttachPhysicsRagdollToHelperMover",
        "Create", &AttachPhysicsRagdollToHelperMover::Create
    );
    lua.new_usertype<GraphSound>("GraphSound",
        "GetWaveSampleRate", &GraphSound::GetWaveSampleRate,
        "GetTimeFromContext", &GraphSound::GetTimeFromContext,
        "GetGroupIndex", &GraphSound::GetGroupIndex,
        "StartSineWave", &GraphSound::StartSineWave,
        "SetEnableInstanceFilter", &GraphSound::SetEnableInstanceFilter,
        "DrawDebugProbeFloat", &GraphSound::DrawDebugProbeFloat,
        "WwiseExtPostEventExport", &GraphSound::WwiseExtPostEventExport,
        "GetGlobalStateInt", &GraphSound::GetGlobalStateInt,
        "SetHDRProperties", &GraphSound::SetHDRProperties,
        "SelectRandomWaveResource", &GraphSound::SelectRandomWaveResource,
        "GetTimeStep", &GraphSound::GetTimeStep,
        "SetForceTo2D", &GraphSound::SetForceTo2D,
        "StartWhiteNoise", &GraphSound::StartWhiteNoise,
        "SetGlobalStateInt", &GraphSound::SetGlobalStateInt,
        "GetGlobalStateFloat", &GraphSound::GetGlobalStateFloat,
        "WwiseSimplePostEventExport", &GraphSound::WwiseSimplePostEventExport,
        "GetWaveDuration", &GraphSound::GetWaveDuration,
        "SetDisableSoundPause", &GraphSound::SetDisableSoundPause,
        "RestartContext", &GraphSound::RestartContext,
        "StopWave", &GraphSound::StopWave,
        "StartWave", &GraphSound::StartWave,
        "UpdateWave", &GraphSound::UpdateWave,
        "GetEnvelopeData", &GraphSound::GetEnvelopeData,
        "GetEnvelopeFromADSR", &GraphSound::GetEnvelopeFromADSR,
        "EndContext", &GraphSound::EndContext,
        "KeepAliveContext", &GraphSound::KeepAliveContext,
        "SetOverrideGroup", &GraphSound::SetOverrideGroup,
        "SetOverrideMaxAzimuthDelta", &GraphSound::SetOverrideMaxAzimuthDelta,
        "SetPriorityModifier", &GraphSound::SetPriorityModifier,
        "SetDisableDistanceCulling", &GraphSound::SetDisableDistanceCulling,
        "SetGlobalStateFloat", &GraphSound::SetGlobalStateFloat,
        "SetGlobalStateBool", &GraphSound::SetGlobalStateBool,
        "GetGlobalStateBool", &GraphSound::GetGlobalStateBool,
        "GlobalStateAtomicAddFloat", &GraphSound::GlobalStateAtomicAddFloat,
        "GlobalStateAtomicAddInt", &GraphSound::GlobalStateAtomicAddInt,
        "WwisePostEventExport", &GraphSound::WwisePostEventExport,
        "SetMusicPlayerCutscenePauseExport", &GraphSound::SetMusicPlayerCutscenePauseExport,
        "SetMusicPlayerCutsceneResumeExport", &GraphSound::SetMusicPlayerCutsceneResumeExport
    );
    lua.new_usertype<DSRoad>("DSRoad",
        "SetDSRoadStatus", &DSRoad::SetDSRoadStatus,
        "DSStopAndStartRecordingRouteTrackingByPlaceIdWithNotUpdateWorldData", &DSRoad::DSStopAndStartRecordingRouteTrackingByPlaceIdWithNotUpdateWorldData,
        "DSStopAndStartRecordingRouteTrackingByPlaceId", &DSRoad::DSStopAndStartRecordingRouteTrackingByPlaceId,
        "SetUseCheckpointIndexList", &DSRoad::SetUseCheckpointIndexList,
        "IsBuildingNationalRoute", &DSRoad::IsBuildingNationalRoute,
        "SetCompletedNationalRoute", &DSRoad::SetCompletedNationalRoute,
        "IsCompletedNationalRoute", &DSRoad::IsCompletedNationalRoute,
        "SetDSStartRecordingMoveTracking", &DSRoad::SetDSStartRecordingMoveTracking,
        "RequestRebuildNationalRoute", &DSRoad::RequestRebuildNationalRoute,
        "DSStopAndStartRecordingRouteTracking", &DSRoad::DSStopAndStartRecordingRouteTracking,
        "SetDSFinishRecordingMoveTracking", &DSRoad::SetDSFinishRecordingMoveTracking,
        "AddLocalTrackingLogFromData", &DSRoad::AddLocalTrackingLogFromData,
        "TriggerNationalRoadUpdateCheck", &DSRoad::TriggerNationalRoadUpdateCheck,
        "RequestTrackingLogMarge", &DSRoad::RequestTrackingLogMarge,
        "RequestTrackingLogMargeByName", &DSRoad::RequestTrackingLogMargeByName,
        "CheckFixedTrackingLogLevelUp", &DSRoad::CheckFixedTrackingLogLevelUp,
        "SetStaticRoadVisible", &DSRoad::SetStaticRoadVisible,
        "IsIncludedLevel2InLastPath", &DSRoad::IsIncludedLevel2InLastPath,
        "DebugSetForceRoadVisible", &DSRoad::DebugSetForceRoadVisible
    );
    lua.new_usertype<DSMissionLogicBlock>("DSMissionLogicBlock",
        "GetConditionResouceList", &DSMissionLogicBlock::GetConditionResouceList,
        "GetLogicBlocks", &DSMissionLogicBlock::GetLogicBlocks,
        "GetLogicType", &DSMissionLogicBlock::GetLogicType,
        "GetAchievementConditionNum", &DSMissionLogicBlock::GetAchievementConditionNum,
        "GetConditionFactList", &DSMissionLogicBlock::GetConditionFactList
    );
    lua.new_usertype<DSMissionLogicCommand>("DSMissionLogicCommand",
        "DEBUG_RequestDSMissionStartPremium", &DSMissionLogicCommand::DEBUG_RequestDSMissionStartPremium,
        "DispResult1", &DSMissionLogicCommand::DispResult1,
        "RequestDSMissionStart", &DSMissionLogicCommand::RequestDSMissionStart,
        "SendMissionMessageSimple", &DSMissionLogicCommand::SendMissionMessageSimple,
        "FastTravel", &DSMissionLogicCommand::FastTravel,
        "DispResultEvaluation", &DSMissionLogicCommand::DispResultEvaluation,
        "SendMissionSceneMessageImmediately", &DSMissionLogicCommand::SendMissionSceneMessageImmediately,
        "ChangeArea", &DSMissionLogicCommand::ChangeArea,
        "GameOver", &DSMissionLogicCommand::GameOver,
        "GetElapsedDayLastFastTravel", &DSMissionLogicCommand::GetElapsedDayLastFastTravel,
        "RequestDSMissionCancelSilent", &DSMissionLogicCommand::RequestDSMissionCancelSilent,
        "ForceFinishAutoDeliveryLight", &DSMissionLogicCommand::ForceFinishAutoDeliveryLight,
        "ActivateRange", &DSMissionLogicCommand::ActivateRange,
        "DispTotalResult", &DSMissionLogicCommand::DispTotalResult,
        "DispResult2", &DSMissionLogicCommand::DispResult2,
        "AllDispResult", &DSMissionLogicCommand::AllDispResult,
        "ReturnToPRForCliffMemories", &DSMissionLogicCommand::ReturnToPRForCliffMemories,
        "GoOutFromPRForCliffMemories", &DSMissionLogicCommand::GoOutFromPRForCliffMemories,
        "DebugSetPlayerSpawnLocatorUUID", &DSMissionLogicCommand::DebugSetPlayerSpawnLocatorUUID,
        "GetGameOverMissionID", &DSMissionLogicCommand::GetGameOverMissionID,
        "GetGameOverReason", &DSMissionLogicCommand::GetGameOverReason,
        "GetCurrentArea", &DSMissionLogicCommand::GetCurrentArea,
        "SendMissionMessage", &DSMissionLogicCommand::SendMissionMessage,
        "GetSamMissionProgressFact", &DSMissionLogicCommand::GetSamMissionProgressFact,
        "RequestDSMissionFail", &DSMissionLogicCommand::RequestDSMissionFail,
        "RequestDSMissionSuccess", &DSMissionLogicCommand::RequestDSMissionSuccess
    );
    lua.new_usertype<FocusTargetComponentResource>("FocusTargetComponentResource",
        "CheckEntityVulnerabilities", &FocusTargetComponentResource::CheckEntityVulnerabilities
    );
    lua.new_usertype<AIHTNPlannerDaemonPerchPoints>("AIHTNPlannerDaemonPerchPoints",
        "AddPerchPoint", &AIHTNPlannerDaemonPerchPoints::AddPerchPoint,
        "RemovePerchPoint", &AIHTNPlannerDaemonPerchPoints::RemovePerchPoint,
        "ClearPerchPoints", &AIHTNPlannerDaemonPerchPoints::ClearPerchPoints
    );
    lua.new_usertype<StaggerStateComponent>("StaggerStateComponent",
        "IsActive", &StaggerStateComponent::IsActive,
        "Activate", &StaggerStateComponent::Activate,
        "CanActivate", &StaggerStateComponent::CanActivate
    );
    lua.new_usertype<DSWeather>("DSWeather",
        "GetRainyCondition", &DSWeather::GetRainyCondition,
        "SetForecastTypeOfRegion", &DSWeather::SetForecastTypeOfRegion,
        "SetForecastTypeOfRegionDirect", &DSWeather::SetForecastTypeOfRegionDirect,
        "SetWeatherOfRegion", &DSWeather::SetWeatherOfRegion,
        "SetForecastTypeOfRegionDirectEx", &DSWeather::SetForecastTypeOfRegionDirectEx,
        "ResetForecastTime", &DSWeather::ResetForecastTime,
        "CheckArea", &DSWeather::CheckArea,
        "SetStartControlFlags", &DSWeather::SetStartControlFlags,
        "GetRainyConditionFromMap", &DSWeather::GetRainyConditionFromMap
    );
    lua.new_usertype<ZiplineDetectionComponent>("ZiplineDetectionComponent",
        "ZiplineAtPosition", &ZiplineDetectionComponent::ZiplineAtPosition
    );
    lua.new_usertype<DSCatcher>("DSCatcher",
        "IsInAnnihilationAreaWithArea", &DSCatcher::IsInAnnihilationAreaWithArea,
        "GetIntState", &DSCatcher::GetIntState,
        "IsInAnnihilationArea", &DSCatcher::IsInAnnihilationArea,
        "RemoveAnnihilationArea", &DSCatcher::RemoveAnnihilationArea,
        "NotifySimpleControlCommand", &DSCatcher::NotifySimpleControlCommand,
        "GetNotifyIdentifier", &DSCatcher::GetNotifyIdentifier,
        "AnnihilationProgress", &DSCatcher::AnnihilationProgress,
        "CatcherWhaleControlCommand", &DSCatcher::CatcherWhaleControlCommand,
        "GetActiveCatcherEntity", &DSCatcher::GetActiveCatcherEntity,
        "SetScriptVariableCommand", &DSCatcher::SetScriptVariableCommand,
        "CheckCatcherNotifyFlags", &DSCatcher::CheckCatcherNotifyFlags
    );
    lua.new_usertype<DSUINodeGraphBindings>("DSUINodeGraphBindings",
        "IgnoreOnceWeightHUDRequest", &DSUINodeGraphBindings::IgnoreOnceWeightHUDRequest,
        "ShowPrototypeSubtitle", &DSUINodeGraphBindings::ShowPrototypeSubtitle,
        "EnableMarkerLocator", &DSUINodeGraphBindings::EnableMarkerLocator,
        "WeaponSelectorHasPageChangeByCategory", &DSUINodeGraphBindings::WeaponSelectorHasPageChangeByCategory,
        "FadeInScreen", &DSUINodeGraphBindings::FadeInScreen,
        "DisableMarkerLocator", &DSUINodeGraphBindings::DisableMarkerLocator,
        "HideTutorialTelopWithHash", &DSUINodeGraphBindings::HideTutorialTelopWithHash,
        "ClearAllInfoLog", &DSUINodeGraphBindings::ClearAllInfoLog,
        "IsShowTutorialTelop", &DSUINodeGraphBindings::IsShowTutorialTelop,
        "SetLoadingScreenNumber", &DSUINodeGraphBindings::SetLoadingScreenNumber,
        "SetUnlockUIFlag", &DSUINodeGraphBindings::SetUnlockUIFlag,
        "ShowInfoLog", &DSUINodeGraphBindings::ShowInfoLog,
        "ShowHiggsFightGaugeHUD", &DSUINodeGraphBindings::ShowHiggsFightGaugeHUD,
        "HideOperationGuide", &DSUINodeGraphBindings::HideOperationGuide,
        "ClearLowPriorityInfoLog", &DSUINodeGraphBindings::ClearLowPriorityInfoLog,
        "CheckDSUIFadeState", &DSUINodeGraphBindings::CheckDSUIFadeState,
        "RequestShowStaffTelop", &DSUINodeGraphBindings::RequestShowStaffTelop,
        "RemoveInfoLogFromQueue", &DSUINodeGraphBindings::RemoveInfoLogFromQueue,
        "GetLastMissionIdsFromMissionTelop", &DSUINodeGraphBindings::GetLastMissionIdsFromMissionTelop,
        "HideDeviceMapTutorialRoute", &DSUINodeGraphBindings::HideDeviceMapTutorialRoute,
        "SetBBPodCustomizeActionIconNewMark", &DSUINodeGraphBindings::SetBBPodCustomizeActionIconNewMark,
        "IsProfileKBDActionToggleGrabEnable", &DSUINodeGraphBindings::IsProfileKBDActionToggleGrabEnable,
        "IsProfileGamePadActionToggleGrabEnable", &DSUINodeGraphBindings::IsProfileGamePadActionToggleGrabEnable,
        "ShowDeviceMapTutorialRoute", &DSUINodeGraphBindings::ShowDeviceMapTutorialRoute,
        "HideTimerHUD", &DSUINodeGraphBindings::HideTimerHUD,
        "IsPrivateRoomTerminalNew", &DSUINodeGraphBindings::IsPrivateRoomTerminalNew,
        "IsPrivateRoomBBPodNew", &DSUINodeGraphBindings::IsPrivateRoomBBPodNew,
        "IsPrivateRoomUniformNew", &DSUINodeGraphBindings::IsPrivateRoomUniformNew,
        "IsPrivateRoomBackpackNew", &DSUINodeGraphBindings::IsPrivateRoomBackpackNew,
        "IsDeliveryMenuPrivateRoomNewMarkForUniform", &DSUINodeGraphBindings::IsDeliveryMenuPrivateRoomNewMarkForUniform,
        "IsDeliveryMenuPrivateRoomNewMarkForBackpack", &DSUINodeGraphBindings::IsDeliveryMenuPrivateRoomNewMarkForBackpack,
        "RequestOpenCureGaugeMenu", &DSUINodeGraphBindings::RequestOpenCureGaugeMenu,
        "IsOdradekDemoOnceSetting", &DSUINodeGraphBindings::IsOdradekDemoOnceSetting,
        "IgnoreWeightHUDRequestTimer", &DSUINodeGraphBindings::IgnoreWeightHUDRequestTimer,
        "IsFunctionPressed", &DSUINodeGraphBindings::IsFunctionPressed,
        "IsProfileDandlingTypeMotionSensor", &DSUINodeGraphBindings::IsProfileDandlingTypeMotionSensor,
        "IsCompassShown", &DSUINodeGraphBindings::IsCompassShown,
        "CheckUIMenuSoundCategoy", &DSUINodeGraphBindings::CheckUIMenuSoundCategoy,
        "GetLoadingScreenNumber", &DSUINodeGraphBindings::GetLoadingScreenNumber,
        "SetDeviceMapZoomScale", &DSUINodeGraphBindings::SetDeviceMapZoomScale,
        "CheckRepairMenuInfoResult", &DSUINodeGraphBindings::CheckRepairMenuInfoResult,
        "HideAllMissionTelopHUD", &DSUINodeGraphBindings::HideAllMissionTelopHUD,
        "RequestAimHUDDemo", &DSUINodeGraphBindings::RequestAimHUDDemo,
        "CheckDSUIFadeColor", &DSUINodeGraphBindings::CheckDSUIFadeColor,
        "DSUIStringFormat", &DSUINodeGraphBindings::DSUIStringFormat,
        "ShowLandmarkTelop", &DSUINodeGraphBindings::ShowLandmarkTelop,
        "RequestUnlockFunctionDialog", &DSUINodeGraphBindings::RequestUnlockFunctionDialog,
        "FadeOutScreen", &DSUINodeGraphBindings::FadeOutScreen,
        "UnSetUnlockUIFlag", &DSUINodeGraphBindings::UnSetUnlockUIFlag,
        "CheckMissionListDialogMissionId", &DSUINodeGraphBindings::CheckMissionListDialogMissionId,
        "ShowOperationGuideWithPosition", &DSUINodeGraphBindings::ShowOperationGuideWithPosition,
        "ShowOperationGuide", &DSUINodeGraphBindings::ShowOperationGuide,
        "ShowCommonTelop", &DSUINodeGraphBindings::ShowCommonTelop,
        "HideAllTelop", &DSUINodeGraphBindings::HideAllTelop,
        "HideTelop", &DSUINodeGraphBindings::HideTelop,
        "ShowTutorialTelop", &DSUINodeGraphBindings::ShowTutorialTelop,
        "ShowMusicTelopFromId", &DSUINodeGraphBindings::ShowMusicTelopFromId,
        "ShowMusicTelop", &DSUINodeGraphBindings::ShowMusicTelop,
        "RestoreLandmarkTelop", &DSUINodeGraphBindings::RestoreLandmarkTelop,
        "RequestBackupAndHideLandmarkTelop", &DSUINodeGraphBindings::RequestBackupAndHideLandmarkTelop,
        "DebugSetLevelUpMenuInfoResult", &DSUINodeGraphBindings::DebugSetLevelUpMenuInfoResult,
        "CheckLevelUpMenuInfoResult", &DSUINodeGraphBindings::CheckLevelUpMenuInfoResult,
        "DebugSetBaggageMenuInfoResult", &DSUINodeGraphBindings::DebugSetBaggageMenuInfoResult,
        "CheckBaggageMenuInfoResult", &DSUINodeGraphBindings::CheckBaggageMenuInfoResult,
        "GetLocalizedTextFromResource", &DSUINodeGraphBindings::GetLocalizedTextFromResource
    );
    lua.new_usertype<DSQpidUnitCommand>("DSQpidUnitCommand",
        "EqualQpidStateById", &DSQpidUnitCommand::EqualQpidStateById,
        "SetQpidLevelUpEventToTerminalOperation", &DSQpidUnitCommand::SetQpidLevelUpEventToTerminalOperation,
        "ChangeQpidStateById", &DSQpidUnitCommand::ChangeQpidStateById,
        "CheckCanChangeQpidStateById", &DSQpidUnitCommand::CheckCanChangeQpidStateById,
        "HasQpid", &DSQpidUnitCommand::HasQpid,
        "ChangeQpidBandWidthLevelById", &DSQpidUnitCommand::ChangeQpidBandWidthLevelById,
        "GetQpidIdPlayerInside", &DSQpidUnitCommand::GetQpidIdPlayerInside,
        "EqualQpidState", &DSQpidUnitCommand::EqualQpidState,
        "ForceUpdateQpid", &DSQpidUnitCommand::ForceUpdateQpid,
        "DebugChangeAllQpidState", &DSQpidUnitCommand::DebugChangeAllQpidState,
        "ChangeQpidBandWidthLevel", &DSQpidUnitCommand::ChangeQpidBandWidthLevel,
        "ChangeQpidState", &DSQpidUnitCommand::ChangeQpidState,
        "CheckQpidStateById", &DSQpidUnitCommand::CheckQpidStateById,
        "CheckQpidState", &DSQpidUnitCommand::CheckQpidState,
        "DebugQpidOpenAll", &DSQpidUnitCommand::DebugQpidOpenAll
    );
    lua.new_usertype<MorphemeAnimationGraphInstance>("MorphemeAnimationGraphInstance",
        "GetInputPose", &MorphemeAnimationGraphInstance::GetInputPose
    );
    lua.new_usertype<EffectComponent>("EffectComponent",
        "StopAndDie", &EffectComponent::StopAndDie,
        "IsEmitting", &EffectComponent::IsEmitting,
        "StopEmitting", &EffectComponent::StopEmitting,
        "StartEmitting", &EffectComponent::StartEmitting,
        "GetLocalMatrix", &EffectComponent::GetLocalMatrix,
        "SetLocalMatrix", &EffectComponent::SetLocalMatrix,
        "SetLightIntensityMultiplier", &EffectComponent::SetLightIntensityMultiplier,
        "SetLightColor", &EffectComponent::SetLightColor
    );
    lua.new_usertype<SoundComponent>("SoundComponent",
        "SetSoundInstanceParameterInt", &SoundComponent::SetSoundInstanceParameterInt,
        "SetParameterBoolByName", &SoundComponent::SetParameterBoolByName,
        "SetSoundInstanceParameterFloat", &SoundComponent::SetSoundInstanceParameterFloat,
        "SetParameterIntByName", &SoundComponent::SetParameterIntByName,
        "SetParameterFloatByName", &SoundComponent::SetParameterFloatByName,
        "SetSoundInstanceParameterBool", &SoundComponent::SetSoundInstanceParameterBool
    );
    lua.new_usertype<DSWeaponAimArc>("DSWeaponAimArc",
        "SetRotationZFromDirection", &DSWeaponAimArc::SetRotationZFromDirection
    );
    lua.new_usertype<ContextualActionVictimComponent>("ContextualActionVictimComponent",
        "IsVictimOfContextualAction", &ContextualActionVictimComponent::IsVictimOfContextualAction
    );
    lua.new_usertype<Destructibility>("Destructibility",
        "IsPartEnabled", &Destructibility::IsPartEnabled,
        "SendDestructibilityPartHitMessage", &Destructibility::SendDestructibilityPartHitMessage,
        "DoesDestructibilityPartHaveTag", &Destructibility::DoesDestructibilityPartHaveTag,
        "GetDefaultDamagePart", &Destructibility::GetDefaultDamagePart,
        "EnableConstraint", &Destructibility::EnableConstraint,
        "HasPart", &Destructibility::HasPart,
        "SetDestructibilityPartShootable", &Destructibility::SetDestructibilityPartShootable,
        "SetDestructibilityTagShootable", &Destructibility::SetDestructibilityTagShootable,
        "KillPartsWithTag", &Destructibility::KillPartsWithTag,
        "CountPartsWithTag", &Destructibility::CountPartsWithTag,
        "GetPartHealth", &Destructibility::GetPartHealth,
        "GetPart", &Destructibility::GetPart,
        "EnablePart", &Destructibility::EnablePart
    );
    lua.new_usertype<DSParkingMenuInfo>("DSParkingMenuInfo",
        "HasVacantParking", &DSParkingMenuInfo::HasVacantParking,
        "GetVehicleOnParkingLift", &DSParkingMenuInfo::GetVehicleOnParkingLift,
        "DespawnVehicleSelectedInRace", &DSParkingMenuInfo::DespawnVehicleSelectedInRace,
        "SpawnVehicleSelectedInRace", &DSParkingMenuInfo::SpawnVehicleSelectedInRace,
        "SendUpdateRaceRecordLike", &DSParkingMenuInfo::SendUpdateRaceRecordLike,
        "CheckParkingMenuInfoResult", &DSParkingMenuInfo::CheckParkingMenuInfoResult,
        "GetStoringVehicleToParking", &DSParkingMenuInfo::GetStoringVehicleToParking,
        "GetLeavingVehicleFromParking", &DSParkingMenuInfo::GetLeavingVehicleFromParking,
        "RegisterUsedVehicleInRace", &DSParkingMenuInfo::RegisterUsedVehicleInRace,
        "SendVehicleUsedInRaceLike", &DSParkingMenuInfo::SendVehicleUsedInRaceLike,
        "SpawnVehicleSelectedInParking", &DSParkingMenuInfo::SpawnVehicleSelectedInParking,
        "StoreVehicleToParking", &DSParkingMenuInfo::StoreVehicleToParking,
        "LockParkingLift", &DSParkingMenuInfo::LockParkingLift,
        "HasEnoughVacantParking", &DSParkingMenuInfo::HasEnoughVacantParking
    );
    lua.new_usertype<DSCameraModeBase>("DSCameraModeBase",
        "GetViewHeadingSpeed", &DSCameraModeBase::GetViewHeadingSpeed
    );
    lua.new_usertype<DSEnvironmentManagerNodes>("DSEnvironmentManagerNodes",
        "BeginBlackSamGameOver", &DSEnvironmentManagerNodes::BeginBlackSamGameOver,
        "EndBlackSamGameOver", &DSEnvironmentManagerNodes::EndBlackSamGameOver,
        "CreateKnotSpaceEntity", &DSEnvironmentManagerNodes::CreateKnotSpaceEntity,
        "DeleteKnotSpaceEntity", &DSEnvironmentManagerNodes::DeleteKnotSpaceEntity
    );
    lua.new_usertype<TalkComponent>("TalkComponent",
        "PlaySentenceGroup", &TalkComponent::PlaySentenceGroup,
        "IsTalking", &TalkComponent::IsTalking,
        "PlaySentence", &TalkComponent::PlaySentence,
        "Say", &TalkComponent::Say,
        "GetOutputLevel", &TalkComponent::GetOutputLevel
    );
    lua.new_usertype<DSPlayerEntity>("DSPlayerEntity",
        "CartIsInTarSwamp", &DSPlayerEntity::CartIsInTarSwamp,
        "GetPlayerParameterWorldTransform", &DSPlayerEntity::GetPlayerParameterWorldTransform,
        "GetPlayerParameterFloat", &DSPlayerEntity::GetPlayerParameterFloat,
        "GetPlayerParameterWorldPosition", &DSPlayerEntity::GetPlayerParameterWorldPosition,
        "IsPlayerWaterSprashFrame", &DSPlayerEntity::IsPlayerWaterSprashFrame,
        "IsPlayerLeftLegFrost", &DSPlayerEntity::IsPlayerLeftLegFrost,
        "CartGameActorIdToEntity", &DSPlayerEntity::CartGameActorIdToEntity,
        "GetLocalDSPlayerEntity", &DSPlayerEntity::GetLocalDSPlayerEntity,
        "ApplyInventorySetting", &DSPlayerEntity::ApplyInventorySetting,
        "ClearBBStressInfoFromHoloCutscene", &DSPlayerEntity::ClearBBStressInfoFromHoloCutscene,
        "GetPlayerParameterInt", &DSPlayerEntity::GetPlayerParameterInt,
        "IsPlayerMudSplashFrame", &DSPlayerEntity::IsPlayerMudSplashFrame,
        "ResetPlayerNail", &DSPlayerEntity::ResetPlayerNail,
        "GetBBAffectionLevel", &DSPlayerEntity::GetBBAffectionLevel,
        "SetBBPodBlackRequested", &DSPlayerEntity::SetBBPodBlackRequested,
        "GetPlayerParameterVec3", &DSPlayerEntity::GetPlayerParameterVec3,
        "GetPlayerParameterBool", &DSPlayerEntity::GetPlayerParameterBool,
        "RecoveryAffectionPointForM00590", &DSPlayerEntity::RecoveryAffectionPointForM00590,
        "PlayAkukanVoice", &DSPlayerEntity::PlayAkukanVoice,
        "SetVoicedAlmostThere", &DSPlayerEntity::SetVoicedAlmostThere,
        "ResetPlayerFrost", &DSPlayerEntity::ResetPlayerFrost,
        "IsPlayerRightLegFrost", &DSPlayerEntity::IsPlayerRightLegFrost,
        "IsPlayerHandFrost", &DSPlayerEntity::IsPlayerHandFrost,
        "IsPlayerFrost", &DSPlayerEntity::IsPlayerFrost,
        "IsPlayerBloodSplashFrame", &DSPlayerEntity::IsPlayerBloodSplashFrame,
        "IsPlayerTarrySplashFrame", &DSPlayerEntity::IsPlayerTarrySplashFrame
    );
    lua.new_usertype<AnimationNodeProceduralLook>("AnimationNodeProceduralLook",
        "UpdateProceduralLookInstance", &AnimationNodeProceduralLook::UpdateProceduralLookInstance
    );
    lua.new_usertype<DSResidentsBasicNode>("DSResidentsBasicNode",
        "SetAlreadyDeliveryAtHousehold", &DSResidentsBasicNode::SetAlreadyDeliveryAtHousehold,
        "CalcFriendshipLevel", &DSResidentsBasicNode::CalcFriendshipLevel,
        "AddFriendshipFromMissionID", &DSResidentsBasicNode::AddFriendshipFromMissionID,
        "GetFirendshipOfHousehold", &DSResidentsBasicNode::GetFirendshipOfHousehold,
        "GetHouseholdByNameHash", &DSResidentsBasicNode::GetHouseholdByNameHash,
        "IsMemberOfBridgesOfHousehold", &DSResidentsBasicNode::IsMemberOfBridgesOfHousehold,
        "GetFirendshipOfHouseholdByMissionID", &DSResidentsBasicNode::GetFirendshipOfHouseholdByMissionID,
        "GetCalculationFriendshipLevelTH", &DSResidentsBasicNode::GetCalculationFriendshipLevelTH,
        "GetHouseholdThatRequestedMissionByMissionID", &DSResidentsBasicNode::GetHouseholdThatRequestedMissionByMissionID,
        "SetFriendshipFromDShouseholdInfoResource", &DSResidentsBasicNode::SetFriendshipFromDShouseholdInfoResource,
        "GetFriendshipMaxLevel", &DSResidentsBasicNode::GetFriendshipMaxLevel,
        "GetHouseholdByTerminalId", &DSResidentsBasicNode::GetHouseholdByTerminalId,
        "SetForceFirendshipOfHouseholdByGGUUID", &DSResidentsBasicNode::SetForceFirendshipOfHouseholdByGGUUID,
        "GetFloatFriendshipLevel", &DSResidentsBasicNode::GetFloatFriendshipLevel,
        "IsAlreadyDeliveryAtHousehold", &DSResidentsBasicNode::IsAlreadyDeliveryAtHousehold,
        "GetFirendshipOfHouseholdByNameHash", &DSResidentsBasicNode::GetFirendshipOfHouseholdByNameHash
    );
    lua.new_usertype<PlayerParkourComponent>("PlayerParkourComponent",
        "GetCurrentAnnotation", &PlayerParkourComponent::GetCurrentAnnotation
    );
    lua.new_usertype<AIUsableComponent>("AIUsableComponent",
        "ImmediateAttach", &AIUsableComponent::ImmediateAttach
    );
    lua.new_usertype<DSDebugEntryCommand>("DSDebugEntryCommand",
        "DebugEntryConnectRoad", &DSDebugEntryCommand::DebugEntryConnectRoad,
        "DebugEntryIsNilUUID", &DSDebugEntryCommand::DebugEntryIsNilUUID,
        "DebugEntrySetUUID", &DSDebugEntryCommand::DebugEntrySetUUID,
        "DebugNilUUID", &DSDebugEntryCommand::DebugNilUUID,
        "DebugEntryGetUUID", &DSDebugEntryCommand::DebugEntryGetUUID,
        "DebugEntryGetInt", &DSDebugEntryCommand::DebugEntryGetInt,
        "DebugEntrySetInt", &DSDebugEntryCommand::DebugEntrySetInt,
        "DebugIsNilUUID", &DSDebugEntryCommand::DebugIsNilUUID
    );
    lua.new_usertype<FocusComponent>("FocusComponent",
        "SetEntityPatrolPathTagged", &FocusComponent::SetEntityPatrolPathTagged,
        "IsScanningFocusAlert", &FocusComponent::IsScanningFocusAlert,
        "SetTrackingPathTagged", &FocusComponent::SetTrackingPathTagged,
        "GetFocusAlertState", &FocusComponent::GetFocusAlertState,
        "ClearTaggedObjects", &FocusComponent::ClearTaggedObjects,
        "SetEntityTagged", &FocusComponent::SetEntityTagged,
        "GetAllFocusAlertSignalPositionsInRange", &FocusComponent::GetAllFocusAlertSignalPositionsInRange,
        "GetFocusedEntity", &FocusComponent::GetFocusedEntity,
        "SetFocusModeEnabled", &FocusComponent::SetFocusModeEnabled,
        "SetFocusModeActive", &FocusComponent::SetFocusModeActive,
        "CanActivateFocusMode", &FocusComponent::CanActivateFocusMode,
        "IsFocusModeActive", &FocusComponent::IsFocusModeActive
    );
    lua.new_usertype<DSMissionInfo>("DSMissionInfo",
        "IsDisableFriendshipResult", &DSMissionInfo::IsDisableFriendshipResult,
        "IsLostPersonalObjectMission", &DSMissionInfo::IsLostPersonalObjectMission,
        "IsNoDelivery", &DSMissionInfo::IsNoDelivery,
        "GetDeliveryCountRate", &DSMissionInfo::GetDeliveryCountRate,
        "IsAutomation", &DSMissionInfo::IsAutomation,
        "GetEvaluationType", &DSMissionInfo::GetEvaluationType,
        "IsSupplyMission", &DSMissionInfo::IsSupplyMission,
        "GetElapsedTime", &DSMissionInfo::GetElapsedTime,
        "GetBaggageDamageMinRate", &DSMissionInfo::GetBaggageDamageMinRate,
        "GetHouseholdInfoResourceOfTheClient", &DSMissionInfo::GetHouseholdInfoResourceOfTheClient,
        "IsCheckStartAndGoalDeliveryPointInfo", &DSMissionInfo::IsCheckStartAndGoalDeliveryPointInfo,
        "IsEnableDistanceMeasurementMission", &DSMissionInfo::IsEnableDistanceMeasurementMission,
        "GetMovingDistanceXY", &DSMissionInfo::GetMovingDistanceXY,
        "GetMissionCategory", &DSMissionInfo::GetMissionCategory,
        "GetDeliveryCount", &DSMissionInfo::GetDeliveryCount,
        "IsDeliveryBBPod", &DSMissionInfo::IsDeliveryBBPod,
        "GetLowestDifficulty", &DSMissionInfo::GetLowestDifficulty,
        "GetStartToGoalPointDistance", &DSMissionInfo::GetStartToGoalPointDistance,
        "GetMovingDistanceXYZ", &DSMissionInfo::GetMovingDistanceXYZ,
        "GetMovingDistanceXYRate", &DSMissionInfo::GetMovingDistanceXYRate,
        "GetGoalDeliveryPointPosition", &DSMissionInfo::GetGoalDeliveryPointPosition,
        "GetStartDeliveryPointPosition", &DSMissionInfo::GetStartDeliveryPointPosition,
        "GetClearMinTime", &DSMissionInfo::GetClearMinTime,
        "GetMinCountBaggage", &DSMissionInfo::GetMinCountBaggage,
        "GetSpecialReportOnPlace", &DSMissionInfo::GetSpecialReportOnPlace,
        "GetElapsedTimeRate", &DSMissionInfo::GetElapsedTimeRate,
        "GetDeliveredTotalMinWeightBaggage", &DSMissionInfo::GetDeliveredTotalMinWeightBaggage,
        "GetDeliveredTotalMaxWeightBaggage", &DSMissionInfo::GetDeliveredTotalMaxWeightBaggage,
        "GetDeliveredTotalWeightRateBaggage", &DSMissionInfo::GetDeliveredTotalWeightRateBaggage,
        "GetDeliveredTotalWeightBaggage", &DSMissionInfo::GetDeliveredTotalWeightBaggage,
        "GetDeliveryMaxCount", &DSMissionInfo::GetDeliveryMaxCount,
        "GetTotalDeliveryBaggageDamageRate", &DSMissionInfo::GetTotalDeliveryBaggageDamageRate,
        "GetReward2", &DSMissionInfo::GetReward2,
        "IsLostObjectMission", &DSMissionInfo::IsLostObjectMission,
        "IsPremium", &DSMissionInfo::IsPremium,
        "IsDynamicMission", &DSMissionInfo::IsDynamicMission,
        "IsOnlineMission", &DSMissionInfo::IsOnlineMission,
        "IsSimpleMissionOfStatic", &DSMissionInfo::IsSimpleMissionOfStatic,
        "IsSimpleMission", &DSMissionInfo::IsSimpleMission,
        "IsChiralMission", &DSMissionInfo::IsChiralMission,
        "GetMissionId", &DSMissionInfo::GetMissionId
    );
    lua.new_usertype<DSMisionEvaluationCommand>("DSMisionEvaluationCommand",
        "IsEnableTotalWeightBonusFromMissionInfoStack", &DSMisionEvaluationCommand::IsEnableTotalWeightBonusFromMissionInfoStack,
        "GetSpecialReportTotalBaggageDamage", &DSMisionEvaluationCommand::GetSpecialReportTotalBaggageDamage,
        "GetAccessingTerminalPosition", &DSMisionEvaluationCommand::GetAccessingTerminalPosition,
        "GetSpecialReportRouteExploration", &DSMisionEvaluationCommand::GetSpecialReportRouteExploration,
        "GetSupplyMissionInfo", &DSMisionEvaluationCommand::GetSupplyMissionInfo,
        "GetSpecialReportReachd", &DSMisionEvaluationCommand::GetSpecialReportReachd,
        "CheckNonDeliveryBaggageForStaticMission", &DSMisionEvaluationCommand::CheckNonDeliveryBaggageForStaticMission,
        "IsEnableTotalWeightBonusFromBaggageUnit", &DSMisionEvaluationCommand::IsEnableTotalWeightBonusFromBaggageUnit,
        "GetOnlineLostBaggageDriftingParam", &DSMisionEvaluationCommand::GetOnlineLostBaggageDriftingParam,
        "IsEnableTotalWeightBonusFromMissionInfoStackAndBaggageUnit", &DSMisionEvaluationCommand::IsEnableTotalWeightBonusFromMissionInfoStackAndBaggageUnit,
        "GetSpecialReportRouteNotExploration", &DSMisionEvaluationCommand::GetSpecialReportRouteNotExploration,
        "FindBaggageStartAndGoalByStaticMissionBaggageResource", &DSMisionEvaluationCommand::FindBaggageStartAndGoalByStaticMissionBaggageResource,
        "DistanceFromStartPointToEndPoint", &DSMisionEvaluationCommand::DistanceFromStartPointToEndPoint,
        "GetBaggageListItemWasteBBPod", &DSMisionEvaluationCommand::GetBaggageListItemWasteBBPod,
        "CompareAndRecordAtShortestDistance", &DSMisionEvaluationCommand::CompareAndRecordAtShortestDistance,
        "GetDSTraceEnable", &DSMisionEvaluationCommand::GetDSTraceEnable,
        "GetAutoDeliveryEndPosition", &DSMisionEvaluationCommand::GetAutoDeliveryEndPosition,
        "FindBaggageStartAndGoalByBaggage2", &DSMisionEvaluationCommand::FindBaggageStartAndGoalByBaggage2,
        "GetBaggageSpecialReport", &DSMisionEvaluationCommand::GetBaggageSpecialReport,
        "GetSpecialReportContentsDamage", &DSMisionEvaluationCommand::GetSpecialReportContentsDamage,
        "GetSpecialReportTotalDelivery", &DSMisionEvaluationCommand::GetSpecialReportTotalDelivery,
        "GetSpecialReportRouteDeviation", &DSMisionEvaluationCommand::GetSpecialReportRouteDeviation
    );
    lua.new_usertype<Model>("Model",
        "ChangeModelPart", &Model::ChangeModelPart,
        "IsModelPartEnabled", &Model::IsModelPartEnabled,
        "GetModelPartTransform", &Model::GetModelPartTransform,
        "SetModelPartLocalMatrix", &Model::SetModelPartLocalMatrix,
        "GetModelPartLocalMatrix", &Model::GetModelPartLocalMatrix,
        "EnableModelPart", &Model::EnableModelPart
    );
    lua.new_usertype<QuestInstance>("QuestInstance",
        "SetTrackingEnabled", &QuestInstance::SetTrackingEnabled,
        "IsQuestPaused", &QuestInstance::IsQuestPaused,
        "GetResource", &QuestInstance::GetResource,
        "ProgressQuest", &QuestInstance::ProgressQuest,
        "IsQuestTracked", &QuestInstance::IsQuestTracked,
        "SetQuestTracked", &QuestInstance::SetQuestTracked,
        "SetQuestPaused", &QuestInstance::SetQuestPaused
    );
    lua.new_usertype<DSMissionOpenList>("DSMissionOpenList",
        "GetOpenState", &DSMissionOpenList::GetOpenState,
        "GetOpenResourceList", &DSMissionOpenList::GetOpenResourceList
    );
    lua.new_usertype<DsMuleMissionCommand>("DsMuleMissionCommand",
        "Mule_DontTakeAwayShoes", &DsMuleMissionCommand::Mule_DontTakeAwayShoes,
        "MuleCP_ForceSetCPPhase", &DsMuleMissionCommand::MuleCP_ForceSetCPPhase,
        "Mule_AddMissionClearCountForResurrect", &DsMuleMissionCommand::Mule_AddMissionClearCountForResurrect,
        "Mule_IsExistCautionOrNoticeMule", &DsMuleMissionCommand::Mule_IsExistCautionOrNoticeMule,
        "Mule_RemovePersonalMissionBaggages", &DsMuleMissionCommand::Mule_RemovePersonalMissionBaggages,
        "MuleCP_DisableCPAndAllsMembers", &DsMuleMissionCommand::MuleCP_DisableCPAndAllsMembers,
        "Mule_StillExistDeadBodyBecomingGazer", &DsMuleMissionCommand::Mule_StillExistDeadBodyBecomingGazer,
        "Mule_SetIgnoreDeadMuleMoveArea", &DsMuleMissionCommand::Mule_SetIgnoreDeadMuleMoveArea,
        "Mule_RemoveDeadMules", &DsMuleMissionCommand::Mule_RemoveDeadMules,
        "Mule_ResetOutsideCPAreaPosition", &DsMuleMissionCommand::Mule_ResetOutsideCPAreaPosition,
        "Mule_RemoveDeadMulesByBridges", &DsMuleMissionCommand::Mule_RemoveDeadMulesByBridges,
        "Mule_IsExistAlertMule", &DsMuleMissionCommand::Mule_IsExistAlertMule,
        "MuleCP_CheckPlayerInMuleArea", &DsMuleMissionCommand::MuleCP_CheckPlayerInMuleArea,
        "MuleCP_SetKeepCaution", &DsMuleMissionCommand::MuleCP_SetKeepCaution,
        "MuleCP_IsExitMuleInCamera", &DsMuleMissionCommand::MuleCP_IsExitMuleInCamera,
        "Mule_MoveMulesOnElevator", &DsMuleMissionCommand::Mule_MoveMulesOnElevator,
        "MuleCP_IsExtinction", &DsMuleMissionCommand::MuleCP_IsExtinction,
        "Mule_ResetFriendlyMuleByAccessingTerminal", &DsMuleMissionCommand::Mule_ResetFriendlyMuleByAccessingTerminal,
        "MuleCP_BgmMute", &DsMuleMissionCommand::MuleCP_BgmMute,
        "Mule_GetMuleTypeByEntity", &DsMuleMissionCommand::Mule_GetMuleTypeByEntity,
        "Mule_InCollisionTrigger", &DsMuleMissionCommand::Mule_InCollisionTrigger,
        "Mule_ChangeWeapon", &DsMuleMissionCommand::Mule_ChangeWeapon,
        "MuleCP_CheckPlayerInMuleAreaByLocator", &DsMuleMissionCommand::MuleCP_CheckPlayerInMuleAreaByLocator,
        "Mule_ResetAllMulesByAreaChange", &DsMuleMissionCommand::Mule_ResetAllMulesByAreaChange,
        "Mule_ResetAndResurrectAllMulesByMissionChange", &DsMuleMissionCommand::Mule_ResetAndResurrectAllMulesByMissionChange,
        "Mule_RemoveAllMulesFromWorld", &DsMuleMissionCommand::Mule_RemoveAllMulesFromWorld,
        "Mule_ResetCPMulesAIOnly", &DsMuleMissionCommand::Mule_ResetCPMulesAIOnly,
        "Mule_ResetCPMulesByMissionChange", &DsMuleMissionCommand::Mule_ResetCPMulesByMissionChange,
        "MuleCP_DisableCPRaderCheck", &DsMuleMissionCommand::MuleCP_DisableCPRaderCheck,
        "Mule_ResetAllMulesByMissionChange", &DsMuleMissionCommand::Mule_ResetAllMulesByMissionChange,
        "Mule_SetMissionBaggage", &DsMuleMissionCommand::Mule_SetMissionBaggage,
        "Mule_GetMinDistanceBetweenBaggage", &DsMuleMissionCommand::Mule_GetMinDistanceBetweenBaggage,
        "Mule_GetMinDistanceBetweenPlayer", &DsMuleMissionCommand::Mule_GetMinDistanceBetweenPlayer
    );
    lua.new_usertype<Humanoid>("Humanoid",
        "IsFiring", &Humanoid::IsFiring,
        "IsParkouring", &Humanoid::IsParkouring,
        "IsInStealth", &Humanoid::IsInStealth,
        "IsZipLining", &Humanoid::IsZipLining,
        "IsLanding", &Humanoid::IsLanding,
        "CanMove", &Humanoid::CanMove,
        "IsVaulting", &Humanoid::IsVaulting,
        "IsLowOnAmmo", &Humanoid::IsLowOnAmmo,
        "IsSliding", &Humanoid::IsSliding,
        "IsReloading", &Humanoid::IsReloading,
        "IsStaggering", &Humanoid::IsStaggering,
        "IsPerformingTakeDown", &Humanoid::IsPerformingTakeDown,
        "IsJumping", &Humanoid::IsJumping,
        "IsMoving", &Humanoid::IsMoving,
        "IsDodging", &Humanoid::IsDodging,
        "GetLastLandingHeight", &Humanoid::GetLastLandingHeight,
        "HasPerkLevel", &Humanoid::HasPerkLevel,
        "IsUsingPlayerTool", &Humanoid::IsUsingPlayerTool,
        "IsSprinting", &Humanoid::IsSprinting,
        "IsSlidingToUseLocation", &Humanoid::IsSlidingToUseLocation,
        "IsKnockedDown", &Humanoid::IsKnockedDown,
        "SetStance", &Humanoid::SetStance,
        "GetTimeSinceLastDamage", &Humanoid::GetTimeSinceLastDamage,
        "IsAiming", &Humanoid::IsAiming,
        "IsInCombat", &Humanoid::IsInCombat,
        "IsFalling", &Humanoid::IsFalling,
        "GetVaultType", &Humanoid::GetVaultType,
        "IsZooming", &Humanoid::IsZooming,
        "IsSwimmingUnderWater", &Humanoid::IsSwimmingUnderWater,
        "IsSwimming", &Humanoid::IsSwimming,
        "IsCrouching", &Humanoid::IsCrouching,
        "SetQuietFootSteps", &Humanoid::SetQuietFootSteps
    );
    lua.new_usertype<DebugTool>("DebugTool",
        "sDrawSphere", &DebugTool::sDrawSphere,
        "sGetDebugName", &DebugTool::sGetDebugName,
        "sDrawLine", &DebugTool::sDrawLine,
        "sDrawOrientedBoundingBox", &DebugTool::sDrawOrientedBoundingBox
    );
    lua.new_usertype<PlayerGame>("PlayerGame",
        "GetHostileAliveEntityCount", &PlayerGame::GetHostileAliveEntityCount,
        "IsLookingAtPosition", &PlayerGame::IsLookingAtPosition,
        "IsAnyJoystickFunctionActive", &PlayerGame::IsAnyJoystickFunctionActive,
        "IsJoystickFunctionPressed", &PlayerGame::IsJoystickFunctionPressed,
        "GetJoystickAcceleration", &PlayerGame::GetJoystickAcceleration,
        "GetJoystickAngleVelocity", &PlayerGame::GetJoystickAngleVelocity,
        "SetJoystickLedColor", &PlayerGame::SetJoystickLedColor,
        "SwitchPlayerCharacter", &PlayerGame::SwitchPlayerCharacter,
        "ShowObjectivesSummary", &PlayerGame::ShowObjectivesSummary,
        "GetJoystickOrientation", &PlayerGame::GetJoystickOrientation,
        "GetJoystickMoveInput", &PlayerGame::GetJoystickMoveInput,
        "GetJoystickLookInput", &PlayerGame::GetJoystickLookInput,
        "GetFriendlyAlivePlayerCount", &PlayerGame::GetFriendlyAlivePlayerCount,
        "IsAnyJoystickButtonFunctionActive", &PlayerGame::IsAnyJoystickButtonFunctionActive
    );
    lua.new_usertype<GameSettings>("GameSettings",
        "GetPlayerHealthSettings", &GameSettings::GetPlayerHealthSettings,
        "GetHealthRegenerationSettings", &GameSettings::GetHealthRegenerationSettings
    );
    lua.new_usertype<HitReactions>("HitReactions",
        "ModifySeverityDecay", &HitReactions::ModifySeverityDecay,
        "ResetHitReactionByDamage", &HitReactions::ResetHitReactionByDamage,
        "ModifyReactionDuration", &HitReactions::ModifyReactionDuration,
        "ModifyReactionThreshold", &HitReactions::ModifyReactionThreshold
    );
    lua.new_usertype<FactMusicPreset>("FactMusicPreset",
        "GetPresetName", &FactMusicPreset::GetPresetName,
        "GetInfo", &FactMusicPreset::GetInfo,
        "GetFactValue", &FactMusicPreset::GetFactValue,
        "GetExitPresetName", &FactMusicPreset::GetExitPresetName
    );
    lua.new_usertype<DSMissionEvaluationDataRecord>("DSMissionEvaluationDataRecord",
        "GetLike", &DSMissionEvaluationDataRecord::GetLike,
        "GetGreaterThan", &DSMissionEvaluationDataRecord::GetGreaterThan,
        "GetRewardRank", &DSMissionEvaluationDataRecord::GetRewardRank
    );
    lua.new_usertype<DSMissionReward2>("DSMissionReward2",
        "GetNeedBaggageDamageRateForPremium", &DSMissionReward2::GetNeedBaggageDamageRateForPremium,
        "FindBaggageCountConditionResource", &DSMissionReward2::FindBaggageCountConditionResource,
        "FindBaggageWeightConditionResource", &DSMissionReward2::FindBaggageWeightConditionResource,
        "GetClearMinTime", &DSMissionReward2::GetClearMinTime,
        "IsEnableSpecialReportLand", &DSMissionReward2::IsEnableSpecialReportLand,
        "GetEvaluationDataTableTotalBaggageDamage", &DSMissionReward2::GetEvaluationDataTableTotalBaggageDamage,
        "GetNeedBaggageWeightForPremium", &DSMissionReward2::GetNeedBaggageWeightForPremium,
        "IsRouteEvaluation", &DSMissionReward2::IsRouteEvaluation,
        "FindServiceConditionResource", &DSMissionReward2::FindServiceConditionResource,
        "GetCustomSpecialReportFromIndex", &DSMissionReward2::GetCustomSpecialReportFromIndex,
        "GetEvaluationType", &DSMissionReward2::GetEvaluationType,
        "FindSpeedConditionResource", &DSMissionReward2::FindSpeedConditionResource,
        "GetEvaluationDataTableRouteDeviation", &DSMissionReward2::GetEvaluationDataTableRouteDeviation,
        "GetBaseLike", &DSMissionReward2::GetBaseLike,
        "GetCustomSpecialReportsLength", &DSMissionReward2::GetCustomSpecialReportsLength,
        "GetPlayerMinDamage", &DSMissionReward2::GetPlayerMinDamage,
        "IsEnableSpecialReportDelicateDelivery", &DSMissionReward2::IsEnableSpecialReportDelicateDelivery,
        "GetBaggageDamageMinRate", &DSMissionReward2::GetBaggageDamageMinRate,
        "GetMinWeightBaggage", &DSMissionReward2::GetMinWeightBaggage,
        "GetMinCountBaggage", &DSMissionReward2::GetMinCountBaggage,
        "GetNeedClearTimeForPremium", &DSMissionReward2::GetNeedClearTimeForPremium,
        "GetNeedBaggageCountForPremium", &DSMissionReward2::GetNeedBaggageCountForPremium,
        "FindConditionResource", &DSMissionReward2::FindConditionResource,
        "FindSafetyConditionResource", &DSMissionReward2::FindSafetyConditionResource
    );
    lua.new_usertype<DamageTypeResource>("DamageTypeResource",
        "IsKindOfDamage", &DamageTypeResource::IsKindOfDamage
    );
    lua.new_usertype<DSPlayerSystem>("DSPlayerSystem",
        "RecoverOrSupplyShoes", &DSPlayerSystem::RecoverOrSupplyShoes,
        "SetPlayerPadMask", &DSPlayerSystem::SetPlayerPadMask,
        "SetShoesForcibly", &DSPlayerSystem::SetShoesForcibly,
        "GetBloodAllPaintValue", &DSPlayerSystem::GetBloodAllPaintValue,
        "GetTarSpherePaintValue", &DSPlayerSystem::GetTarSpherePaintValue,
        "PlayerVehicleIsOnRoad", &DSPlayerSystem::PlayerVehicleIsOnRoad,
        "OpenHandcuffDevice", &DSPlayerSystem::OpenHandcuffDevice,
        "OverrideReturnFromKnotSpaceSequence", &DSPlayerSystem::OverrideReturnFromKnotSpaceSequence,
        "AddOnlyPaintRecordToFootForM00030", &DSPlayerSystem::AddOnlyPaintRecordToFootForM00030,
        "SetOdradekStateAfterSequence", &DSPlayerSystem::SetOdradekStateAfterSequence,
        "SetHiggsPhase3Transform", &DSPlayerSystem::SetHiggsPhase3Transform,
        "AddSuitPartsToInventorySetting", &DSPlayerSystem::AddSuitPartsToInventorySetting,
        "ClearInventorySetting", &DSPlayerSystem::ClearInventorySetting,
        "ResetOverrideBlackSamPointGroupName", &DSPlayerSystem::ResetOverrideBlackSamPointGroupName,
        "StartGhostAction", &DSPlayerSystem::StartGhostAction,
        "SetAmountOfWaterInBottle", &DSPlayerSystem::SetAmountOfWaterInBottle,
        "GetBBAffectionPoint", &DSPlayerSystem::GetBBAffectionPoint,
        "PopWorldTransform", &DSPlayerSystem::PopWorldTransform,
        "PopWorldTransformAtEndOfSequence", &DSPlayerSystem::PopWorldTransformAtEndOfSequence,
        "GetBaggageInfo", &DSPlayerSystem::GetBaggageInfo,
        "SetStateAfterSequence", &DSPlayerSystem::SetStateAfterSequence,
        "RecoverBattery", &DSPlayerSystem::RecoverBattery,
        "CreateCryptobiosisOfReturningFromKnotSpace", &DSPlayerSystem::CreateCryptobiosisOfReturningFromKnotSpace,
        "StartSignboardCheck", &DSPlayerSystem::StartSignboardCheck,
        "StartConstructionCheck", &DSPlayerSystem::StartConstructionCheck,
        "ActivateAdrenalinMode", &DSPlayerSystem::ActivateAdrenalinMode,
        "SetChiralCrystalCount", &DSPlayerSystem::SetChiralCrystalCount,
        "OpenTerminalTopMenuAtLastTerminal", &DSPlayerSystem::OpenTerminalTopMenuAtLastTerminal,
        "AddWeapon", &DSPlayerSystem::AddWeapon,
        "RegisterActionIconInfo", &DSPlayerSystem::RegisterActionIconInfo,
        "PlayPlayerVoice", &DSPlayerSystem::PlayPlayerVoice,
        "RequestBBPodBagCry", &DSPlayerSystem::RequestBBPodBagCry,
        "GetGameActorIdOfPlayerVehicle", &DSPlayerSystem::GetGameActorIdOfPlayerVehicle,
        "EndConstructionCheck", &DSPlayerSystem::EndConstructionCheck,
        "GetBareFootDamage", &DSPlayerSystem::GetBareFootDamage,
        "ApplyInventorySetting", &DSPlayerSystem::ApplyInventorySetting,
        "SetOverrideBlackSamPointGroupName", &DSPlayerSystem::SetOverrideBlackSamPointGroupName,
        "RemoveWeapon", &DSPlayerSystem::RemoveWeapon,
        "GetNailDamage", &DSPlayerSystem::GetNailDamage,
        "AddSuitParts", &DSPlayerSystem::AddSuitParts,
        "UnequipAccessories", &DSPlayerSystem::UnequipAccessories,
        "RequestMoveTo", &DSPlayerSystem::RequestMoveTo,
        "EquipEquipment", &DSPlayerSystem::EquipEquipment,
        "FloatAndMovePlayer", &DSPlayerSystem::FloatAndMovePlayer,
        "DebugPlaySequenceOfReturningFromKnotSpace", &DSPlayerSystem::DebugPlaySequenceOfReturningFromKnotSpace,
        "UnregisterActionIconInfo", &DSPlayerSystem::UnregisterActionIconInfo,
        "SetBBAffectionPointForDebugEntry", &DSPlayerSystem::SetBBAffectionPointForDebugEntry,
        "ResetHoodAndBalloon", &DSPlayerSystem::ResetHoodAndBalloon,
        "GetMudsSpherePaintValue", &DSPlayerSystem::GetMudsSpherePaintValue,
        "GetBloodSpherePaintValue", &DSPlayerSystem::GetBloodSpherePaintValue,
        "GetMudsAllPaintValue", &DSPlayerSystem::GetMudsAllPaintValue,
        "GetTarAllPaintValue", &DSPlayerSystem::GetTarAllPaintValue,
        "IsHadItem", &DSPlayerSystem::IsHadItem,
        "GetMudsPaintValue", &DSPlayerSystem::GetMudsPaintValue,
        "GetTarPaintValue", &DSPlayerSystem::GetTarPaintValue,
        "GetBloodPaintValue", &DSPlayerSystem::GetBloodPaintValue,
        "IsHadEquipment", &DSPlayerSystem::IsHadEquipment,
        "GetOdradekBodyEntity", &DSPlayerSystem::GetOdradekBodyEntity,
        "IsEquippedEquipment", &DSPlayerSystem::IsEquippedEquipment,
        "EndSignboardCheck", &DSPlayerSystem::EndSignboardCheck,
        "ReadyCryptobiosisOfReturningFromKnotSpace", &DSPlayerSystem::ReadyCryptobiosisOfReturningFromKnotSpace,
        "ResetPlayerPadMask", &DSPlayerSystem::ResetPlayerPadMask,
        "SendDSPlayerMessage", &DSPlayerSystem::SendDSPlayerMessage,
        "ActivateOdradek", &DSPlayerSystem::ActivateOdradek,
        "AddItemToInventorySetting", &DSPlayerSystem::AddItemToInventorySetting,
        "EndGhostAction", &DSPlayerSystem::EndGhostAction,
        "ClearHighPrioReturnTransformAfterAnnihilationAttack", &DSPlayerSystem::ClearHighPrioReturnTransformAfterAnnihilationAttack,
        "SetHighPrioReturnTransformAfterAnnihilationAttack", &DSPlayerSystem::SetHighPrioReturnTransformAfterAnnihilationAttack,
        "ClearPaint", &DSPlayerSystem::ClearPaint,
        "GetOdradekArmEntity", &DSPlayerSystem::GetOdradekArmEntity,
        "GetPlayerInfo", &DSPlayerSystem::GetPlayerInfo,
        "RemoveOdradekReactionPoint", &DSPlayerSystem::RemoveOdradekReactionPoint,
        "AddOdradekReactionPoint", &DSPlayerSystem::AddOdradekReactionPoint,
        "PlayerGetFloorMaterialTypeResource", &DSPlayerSystem::PlayerGetFloorMaterialTypeResource,
        "RideOffVehicleForcibly", &DSPlayerSystem::RideOffVehicleForcibly,
        "DidGoodActionForBBFromSpecifiedEntity", &DSPlayerSystem::DidGoodActionForBBFromSpecifiedEntity,
        "DidGoodActionForBBFromScript", &DSPlayerSystem::DidGoodActionForBBFromScript,
        "PrepareToDeliverMama", &DSPlayerSystem::PrepareToDeliverMama,
        "UnregisterMissionMessageEvent", &DSPlayerSystem::UnregisterMissionMessageEvent,
        "RegisterMissionMessageEvent", &DSPlayerSystem::RegisterMissionMessageEvent,
        "AddChiralCrystalCount", &DSPlayerSystem::AddChiralCrystalCount,
        "SetInitialState", &DSPlayerSystem::SetInitialState,
        "RecoverFull", &DSPlayerSystem::RecoverFull,
        "SetShoesLifeByRate", &DSPlayerSystem::SetShoesLifeByRate,
        "SetShoesLife", &DSPlayerSystem::SetShoesLife,
        "SetBBStressByRate", &DSPlayerSystem::SetBBStressByRate,
        "SetDeath", &DSPlayerSystem::SetDeath,
        "AddAmmoToInventorySetting", &DSPlayerSystem::AddAmmoToInventorySetting,
        "PushWorldTransform", &DSPlayerSystem::PushWorldTransform,
        "DoesHaveBaggage", &DSPlayerSystem::DoesHaveBaggage,
        "AddWeaponToInventorySetting", &DSPlayerSystem::AddWeaponToInventorySetting
    );
    lua.new_usertype<DSMissionSystem>("DSMissionSystem",
        "GetDeliveryPointInfoResources", &DSMissionSystem::GetDeliveryPointInfoResources,
        "KillOverrideEvaluationActingType", &DSMissionSystem::KillOverrideEvaluationActingType,
        "FindMissionInfoFromId", &DSMissionSystem::FindMissionInfoFromId
    );
    lua.new_usertype<DispensableEntityManager>("DispensableEntityManager",
        "RemoveDispensableEntitiesInTrigger", &DispensableEntityManager::RemoveDispensableEntitiesInTrigger,
        "RemoveDispensableEntities", &DispensableEntityManager::RemoveDispensableEntities
    );
    lua.new_usertype<DSDebugPrintString>("DSDebugPrintString",
        "PrintString", &DSDebugPrintString::PrintString
    );
    lua.new_usertype<DSMissionCheckCommand>("DSMissionCheckCommand",
        "HasTimerMission", &DSMissionCheckCommand::HasTimerMission
    );
    lua.new_usertype<AIDirectableAgent>("AIDirectableAgent",
        "AddAreaRestriction", &AIDirectableAgent::AddAreaRestriction,
        "ClearAreaRestriction", &AIDirectableAgent::ClearAreaRestriction,
        "HTNFactForget", &AIDirectableAgent::HTNFactForget,
        "StartCommandSequence", &AIDirectableAgent::StartCommandSequence,
        "HTNFactAddDouble", &AIDirectableAgent::HTNFactAddDouble,
        "HTNFactSubmitAsOrder", &AIDirectableAgent::HTNFactSubmitAsOrder,
        "HTNFactRemember", &AIDirectableAgent::HTNFactRemember,
        "SetCommandPriority", &AIDirectableAgent::SetCommandPriority,
        "RemoveAreaRestriction", &AIDirectableAgent::RemoveAreaRestriction,
        "SetAreaRestriction", &AIDirectableAgent::SetAreaRestriction,
        "CancelOrders", &AIDirectableAgent::CancelOrders,
        "EndCommandSequence", &AIDirectableAgent::EndCommandSequence,
        "HTNFactAddWorldPosition", &AIDirectableAgent::HTNFactAddWorldPosition,
        "HTNFactAddObject", &AIDirectableAgent::HTNFactAddObject,
        "HTNFactAddHtnSymbol", &AIDirectableAgent::HTNFactAddHtnSymbol,
        "HTNFactAddSymbols", &AIDirectableAgent::HTNFactAddSymbols,
        "HTNFactAddSymbol", &AIDirectableAgent::HTNFactAddSymbol,
        "HTNFactAddInt", &AIDirectableAgent::HTNFactAddInt,
        "HTNFactEndList", &AIDirectableAgent::HTNFactEndList,
        "HTNFactBeginList", &AIDirectableAgent::HTNFactBeginList,
        "HTNFactBegin", &AIDirectableAgent::HTNFactBegin
    );
    lua.new_usertype<NodeGraph>("NodeGraph",
        "AlertWithName", &NodeGraph::AlertWithName,
        "MarkBeginNode", &NodeGraph::MarkBeginNode,
        "OnStateMachineStateTransition", &NodeGraph::OnStateMachineStateTransition,
        "IsProfiling", &NodeGraph::IsProfiling,
        "MarkEndNode", &NodeGraph::MarkEndNode,
        "FlushIntermediateOutputProbes", &NodeGraph::FlushIntermediateOutputProbes,
        "OnStateMachineStateProbe", &NodeGraph::OnStateMachineStateProbe,
        "Alert", &NodeGraph::Alert,
        "Trace", &NodeGraph::Trace,
        "Assert", &NodeGraph::Assert,
        "GetObjectUUID", &NodeGraph::GetObjectUUID,
        "InstantiateRTTI", &NodeGraph::InstantiateRTTI
    );
    lua.new_usertype<DSFixedGunGameActorLocator>("DSFixedGunGameActorLocator",
        "DestroyFixedGun", &DSFixedGunGameActorLocator::DestroyFixedGun,
        "ResetFixedGun", &DSFixedGunGameActorLocator::ResetFixedGun,
        "ShowFixedGun", &DSFixedGunGameActorLocator::ShowFixedGun,
        "HideFixedGun", &DSFixedGunGameActorLocator::HideFixedGun
    );
    lua.new_usertype<UDSSystem>("UDSSystem",
        "SetFloatStat", &UDSSystem::SetFloatStat,
        "MechanicUse", &UDSSystem::MechanicUse,
        "SetIntStat", &UDSSystem::SetIntStat,
        "SetTrophyUintStat", &UDSSystem::SetTrophyUintStat,
        "SetTrophyFloatStat", &UDSSystem::SetTrophyFloatStat,
        "SetTrophyIntStat", &UDSSystem::SetTrophyIntStat,
        "SetUintStat", &UDSSystem::SetUintStat
    );
    lua.new_usertype<AnimationManager>("AnimationManager",
        "InitFloatAnimationVariable", &AnimationManager::InitFloatAnimationVariable,
        "TriggerBoolAnimationVariable", &AnimationManager::TriggerBoolAnimationVariable,
        "SetFloatAnimationVariable", &AnimationManager::SetFloatAnimationVariable,
        "GetFloatAnimationVariable", &AnimationManager::GetFloatAnimationVariable,
        "GetVec4AnimationVariable", &AnimationManager::GetVec4AnimationVariable,
        "GetAnimationTagID", &AnimationManager::GetAnimationTagID,
        "SetBoolAnimationVariable", &AnimationManager::SetBoolAnimationVariable,
        "InitVec4AnimationVariable", &AnimationManager::InitVec4AnimationVariable,
        "InitBoolAnimationVariable", &AnimationManager::InitBoolAnimationVariable,
        "SetVec4AnimationVariable", &AnimationManager::SetVec4AnimationVariable,
        "GetVec3AnimationVariable", &AnimationManager::GetVec3AnimationVariable,
        "SetVec3AnimationVariable", &AnimationManager::SetVec3AnimationVariable,
        "InitVec3AnimationVariable", &AnimationManager::InitVec3AnimationVariable,
        "GetBoolAnimationVariable", &AnimationManager::GetBoolAnimationVariable,
        "IsEventActive", &AnimationManager::IsEventActive,
        "GetAnimationEventID", &AnimationManager::GetAnimationEventID,
        "IsTagActive", &AnimationManager::IsTagActive
    );
    lua.new_usertype<EnvironmentSoundManager>("EnvironmentSoundManager",
        "GetSpawnedInstanceCount", &EnvironmentSoundManager::GetSpawnedInstanceCount,
        "SpawnSoundUpdate", &EnvironmentSoundManager::SpawnSoundUpdate,
        "SetSpawnedSoundIntParameter", &EnvironmentSoundManager::SetSpawnedSoundIntParameter,
        "SetSpawnedSoundBoolParameter", &EnvironmentSoundManager::SetSpawnedSoundBoolParameter,
        "SetSpawnedSoundFloatParameter", &EnvironmentSoundManager::SetSpawnedSoundFloatParameter,
        "SetSpawnedSoundPressureLevel", &EnvironmentSoundManager::SetSpawnedSoundPressureLevel
    );
    lua.new_usertype<DsGameActorCommand>("DsGameActorCommand",
        "DSGetGameActorIDByEntity", &DsGameActorCommand::DSGetGameActorIDByEntity,
        "DSGetGameActorLocatorID", &DsGameActorCommand::DSGetGameActorLocatorID,
        "DSIsEqualGameActorType", &DsGameActorCommand::DSIsEqualGameActorType,
        "DSGetGameActorLodState", &DsGameActorCommand::DSGetGameActorLodState,
        "DSGetGameActorPosition", &DsGameActorCommand::DSGetGameActorPosition,
        "DSGetGameActorTransform", &DsGameActorCommand::DSGetGameActorTransform,
        "DSGetGameActorEntity", &DsGameActorCommand::DSGetGameActorEntity,
        "DSGetGameActorIDByLocatorUUID", &DsGameActorCommand::DSGetGameActorIDByLocatorUUID
    );
    lua.new_usertype<DSBaggage2>("DSBaggage2",
        "GetAmountRate", &DSBaggage2::GetAmountRate,
        "GetMissionId", &DSBaggage2::GetMissionId,
        "GetBaggageCaseType", &DSBaggage2::GetBaggageCaseType,
        "GetBaggageWeight", &DSBaggage2::GetBaggageWeight,
        "GetVolumeType", &DSBaggage2::GetVolumeType,
        "GetContentsLifeRate", &DSBaggage2::GetContentsLifeRate,
        "GetCatalogItemRarity", &DSBaggage2::GetCatalogItemRarity,
        "GetContentsDamageType", &DSBaggage2::GetContentsDamageType,
        "GetListItem", &DSBaggage2::GetListItem,
        "IsDelicate", &DSBaggage2::IsDelicate,
        "GetCoatingLifeRate", &DSBaggage2::GetCoatingLifeRate
    );
    lua.new_usertype<DSDeliveryPointInfoResource>("DSDeliveryPointInfoResource",
        "GetWorldPosition", &DSDeliveryPointInfoResource::GetWorldPosition,
        "GetSpecialReportOnPlace", &DSDeliveryPointInfoResource::GetSpecialReportOnPlace
    );
    lua.new_usertype<PlayerOutfitComponent>("PlayerOutfitComponent",
        "SetFacePaint", &PlayerOutfitComponent::SetFacePaint,
        "SetPlayerOutfit", &PlayerOutfitComponent::SetPlayerOutfit,
        "SetShaderEffect", &PlayerOutfitComponent::SetShaderEffect,
        "ApplyPlayerOutfitPart", &PlayerOutfitComponent::ApplyPlayerOutfitPart,
        "ApplyPlayerOutfit", &PlayerOutfitComponent::ApplyPlayerOutfit
    );
    lua.new_usertype<RopeManagerComponent>("RopeManagerComponent",
        "Connect", &RopeManagerComponent::Connect
    );
    lua.new_usertype<DSDataLibraryBasicNode>("DSDataLibraryBasicNode",
        "DSPauseMusicPlayer", &DSDataLibraryBasicNode::DSPauseMusicPlayer,
        "DSIsPausedMusicPlayer", &DSDataLibraryBasicNode::DSIsPausedMusicPlayer,
        "DSStopMusicPlayer", &DSDataLibraryBasicNode::DSStopMusicPlayer,
        "DSIsOpenTips", &DSDataLibraryBasicNode::DSIsOpenTips,
        "IsRaceBgmSelectForSound", &DSDataLibraryBasicNode::IsRaceBgmSelectForSound,
        "DSGetMusicPlayerPlayingMusicId", &DSDataLibraryBasicNode::DSGetMusicPlayerPlayingMusicId,
        "DSResumeMusicPlayer", &DSDataLibraryBasicNode::DSResumeMusicPlayer,
        "DSGetTrackIdFromResource", &DSDataLibraryBasicNode::DSGetTrackIdFromResource,
        "DSOpenMusicPlayerTrack", &DSDataLibraryBasicNode::DSOpenMusicPlayerTrack,
        "DSReserveNextLoadingTips", &DSDataLibraryBasicNode::DSReserveNextLoadingTips,
        "DSOpenTipsByList", &DSDataLibraryBasicNode::DSOpenTipsByList,
        "DSOpenTips", &DSDataLibraryBasicNode::DSOpenTips
    );
    lua.new_usertype<AudioPlayerComponent>("AudioPlayerComponent",
        "PlayAudioLog", &AudioPlayerComponent::PlayAudioLog
    );
    lua.new_usertype<DamagePassOnComponent>("DamagePassOnComponent",
        "Detach", &DamagePassOnComponent::Detach
    );
    lua.new_usertype<WorldNode>("WorldNode",
        "GetPosition", &WorldNode::GetPosition,
        "GetOrientation", &WorldNode::GetOrientation,
        "GetWorldTransform", &WorldNode::GetWorldTransform
    );
    lua.new_usertype<GameModule>("GameModule",
        "GetGameMovie", &GameModule::GetGameMovie,
        "IsNewGamePlus", &GameModule::IsNewGamePlus,
        "IsGameLoading", &GameModule::IsGameLoading,
        "SetForceExtendedLoadingStateCheck", &GameModule::SetForceExtendedLoadingStateCheck,
        "RequestWaitForAutobot", &GameModule::RequestWaitForAutobot,
        "ClearObserverPositionOverride", &GameModule::ClearObserverPositionOverride,
        "FadeInAfterSkippingSequence", &GameModule::FadeInAfterSkippingSequence,
        "ReserveForceExtendedLoadingStateCheck", &GameModule::ReserveForceExtendedLoadingStateCheck,
        "SetLoadingPauseEnabled", &GameModule::SetLoadingPauseEnabled,
        "IsDLCEnabled", &GameModule::IsDLCEnabled,
        "SetObserverPositionOverride", &GameModule::SetObserverPositionOverride,
        "GetTileBasedStreamingStrategy", &GameModule::GetTileBasedStreamingStrategy,
        "ReloadLastSaveGame", &GameModule::ReloadLastSaveGame,
        "QuitGame", &GameModule::QuitGame
    );
    lua.new_usertype<CrowdSpawnManager>("CrowdSpawnManager",
        "ForceCrowdHighLod", &CrowdSpawnManager::ForceCrowdHighLod,
        "IsInHighLod", &CrowdSpawnManager::IsInHighLod
    );
    lua.new_usertype<AIBehaviorGroup>("AIBehaviorGroup",
        "GetMember", &AIBehaviorGroup::GetMember,
        "GetAliveMembers", &AIBehaviorGroup::GetAliveMembers,
        "GetMemberByTag", &AIBehaviorGroup::GetMemberByTag,
        "SetFaction", &AIBehaviorGroup::SetFaction,
        "RefillGroup", &AIBehaviorGroup::RefillGroup,
        "RemoveGroup", &AIBehaviorGroup::RemoveGroup,
        "Spawn", &AIBehaviorGroup::Spawn,
        "GetAliveMemberCount", &AIBehaviorGroup::GetAliveMemberCount,
        "GetMemberCount", &AIBehaviorGroup::GetMemberCount,
        "AddMember", &AIBehaviorGroup::AddMember,
        "GetAI", &AIBehaviorGroup::GetAI
    );
    lua.new_usertype<VoiceComponent>("VoiceComponent",
        "SetVoice", &VoiceComponent::SetVoice
    );
    lua.new_usertype<CoreTelemetryService>("CoreTelemetryService",
        "PostEvent", &CoreTelemetryService::PostEvent,
        "CreateTelemetryEvent", &CoreTelemetryService::CreateTelemetryEvent,
        "GetTelemetryService", &CoreTelemetryService::GetTelemetryService
    );
    lua.new_usertype<DSCliffMissionCommand>("DSCliffMissionCommand",
        "Cliff_SetAlertPhaseOnlySummonWarriorInfo", &DSCliffMissionCommand::Cliff_SetAlertPhaseOnlySummonWarriorInfo,
        "Cliff_GetEscapeCount", &DSCliffMissionCommand::Cliff_GetEscapeCount,
        "Cliff_SetSearchPointByLostWarrior", &DSCliffMissionCommand::Cliff_SetSearchPointByLostWarrior,
        "Cliff_SetSummonWarriorInfo", &DSCliffMissionCommand::Cliff_SetSummonWarriorInfo,
        "Cliff_RequestRollCall", &DSCliffMissionCommand::Cliff_RequestRollCall,
        "Cliff_RequestSummonWarriors", &DSCliffMissionCommand::Cliff_RequestSummonWarriors,
        "Cliff_SetShowCompassMaker", &DSCliffMissionCommand::Cliff_SetShowCompassMaker,
        "Cliff_SetNextBattlePoint", &DSCliffMissionCommand::Cliff_SetNextBattlePoint,
        "Cliff_OverwriteBattlePointInfo", &DSCliffMissionCommand::Cliff_OverwriteBattlePointInfo
    );
    lua.new_usertype<DSCatcherManagerCommand>("DSCatcherManagerCommand",
        "GetActiveCatcherHealth", &DSCatcherManagerCommand::GetActiveCatcherHealth,
        "GetDemoEntity", &DSCatcherManagerCommand::GetDemoEntity
    );
    lua.new_usertype<DSDeliveredMemoryChipArgs>("DSDeliveredMemoryChipArgs",
        "GetLikeValue", &DSDeliveredMemoryChipArgs::GetLikeValue,
        "GetBridgesMember", &DSDeliveredMemoryChipArgs::GetBridgesMember
    );
    lua.new_usertype<AIPerchMarker>("AIPerchMarker",
        "IncreaseReservedForScript", &AIPerchMarker::IncreaseReservedForScript,
        "DecreaseReservedForScript", &AIPerchMarker::DecreaseReservedForScript
    );
    lua.new_usertype<OpenMenuSystem>("OpenMenuSystem",
        "EnableMenuPage", &OpenMenuSystem::EnableMenuPage,
        "DisableMenuPage", &OpenMenuSystem::DisableMenuPage
    );
    lua.new_usertype<DSPlayRecordBasicNode>("DSPlayRecordBasicNode",
        "ResetAccumulatePlayerDamage", &DSPlayRecordBasicNode::ResetAccumulatePlayerDamage,
        "GetTotalMovingDistance", &DSPlayRecordBasicNode::GetTotalMovingDistance,
        "AddStayPrivateRoomNum", &DSPlayRecordBasicNode::AddStayPrivateRoomNum,
        "ResetDSMissionPlayLog", &DSPlayRecordBasicNode::ResetDSMissionPlayLog,
        "GetComprehensiveEvaluation", &DSPlayRecordBasicNode::GetComprehensiveEvaluation,
        "GetEvaluationPreviousServiceRank", &DSPlayRecordBasicNode::GetEvaluationPreviousServiceRank,
        "GetUserPlayMissionDeltaTimeSeconds", &DSPlayRecordBasicNode::GetUserPlayMissionDeltaTimeSeconds,
        "GetUserPlayInGameTimeSeconds", &DSPlayRecordBasicNode::GetUserPlayInGameTimeSeconds,
        "AddDeathCountForBridgeLink", &DSPlayRecordBasicNode::AddDeathCountForBridgeLink,
        "AddToiletBigNum", &DSPlayRecordBasicNode::AddToiletBigNum,
        "AddToiletSmallNum", &DSPlayRecordBasicNode::AddToiletSmallNum,
        "AddShowerNum", &DSPlayRecordBasicNode::AddShowerNum,
        "AddDiscoveredOnsenNum", &DSPlayRecordBasicNode::AddDiscoveredOnsenNum,
        "GetUserPlayInGameDeltaTimeSeconds", &DSPlayRecordBasicNode::GetUserPlayInGameDeltaTimeSeconds,
        "GetUserPlayMissionTimeSeconds", &DSPlayRecordBasicNode::GetUserPlayMissionTimeSeconds,
        "GetUserPlayAbsoluteDeltaTimeSeconds", &DSPlayRecordBasicNode::GetUserPlayAbsoluteDeltaTimeSeconds,
        "GetUserPlayAbsoluteTimeSeconds", &DSPlayRecordBasicNode::GetUserPlayAbsoluteTimeSeconds,
        "TimeLapseAtPrivateRoom", &DSPlayRecordBasicNode::TimeLapseAtPrivateRoom,
        "GetComprehensiveEvaluationLevel", &DSPlayRecordBasicNode::GetComprehensiveEvaluationLevel
    );
    lua.new_usertype<AIContextHintResource>("AIContextHintResource",
        "GetHintSymbol", &AIContextHintResource::GetHintSymbol
    );
    lua.new_usertype<DSMissionTerminalCommand>("DSMissionTerminalCommand",
        "DeliveryPointIdToUUID", &DSMissionTerminalCommand::DeliveryPointIdToUUID,
        "CheckEntrustToNoDemo", &DSMissionTerminalCommand::CheckEntrustToNoDemo,
        "GetMissionBonusInfo", &DSMissionTerminalCommand::GetMissionBonusInfo,
        "CheckDeliveryToNoDemo", &DSMissionTerminalCommand::CheckDeliveryToNoDemo,
        "RemoveDeadbodyBagForCrematorium", &DSMissionTerminalCommand::RemoveDeadbodyBagForCrematorium,
        "AddMissionBonusToBuffer", &DSMissionTerminalCommand::AddMissionBonusToBuffer,
        "GetAccessingTerminalId", &DSMissionTerminalCommand::GetAccessingTerminalId,
        "CanOrderMissionAtDeliveryPoint", &DSMissionTerminalCommand::CanOrderMissionAtDeliveryPoint,
        "HasCanDeliveryBaggage", &DSMissionTerminalCommand::HasCanDeliveryBaggage,
        "SetStarMarkBonus", &DSMissionTerminalCommand::SetStarMarkBonus,
        "AddSimpleBonusToBuffer", &DSMissionTerminalCommand::AddSimpleBonusToBuffer
    );
    lua.new_usertype<BulletTimeComponent>("BulletTimeComponent",
        "IsInBulletTime", &BulletTimeComponent::IsInBulletTime
    );
    lua.new_usertype<DsHiggsGraphCommand>("DsHiggsGraphCommand",
        "Higgs_SetInitialPhase", &DsHiggsGraphCommand::Higgs_SetInitialPhase
    );
    lua.new_usertype<DSMailBasicNode>("DSMailBasicNode",
        "RequestAllMailRecive", &DSMailBasicNode::RequestAllMailRecive,
        "FindMailStatus", &DSMailBasicNode::FindMailStatus,
        "RequestMailSending", &DSMailBasicNode::RequestMailSending
    );
    lua.new_usertype<DSMissionMiscCommand>("DSMissionMiscCommand",
        "NotifyStartSequenceToFillGap", &DSMissionMiscCommand::NotifyStartSequenceToFillGap,
        "DSNotifyEndSequence", &DSMissionMiscCommand::DSNotifyEndSequence,
        "DSNotifyEndInGameSequence", &DSMissionMiscCommand::DSNotifyEndInGameSequence,
        "DSNotifyStartInGameSequence", &DSMissionMiscCommand::DSNotifyStartInGameSequence,
        "GetHeartmanRoomBlackBoardFromCpp", &DSMissionMiscCommand::GetHeartmanRoomBlackBoardFromCpp,
        "DisposalOnlineMissionsInTargetCPArea", &DSMissionMiscCommand::DisposalOnlineMissionsInTargetCPArea,
        "RequestLoadingScreen", &DSMissionMiscCommand::RequestLoadingScreen,
        "SwitchSection", &DSMissionMiscCommand::SwitchSection,
        "NotifyStayPrivateRoom", &DSMissionMiscCommand::NotifyStayPrivateRoom,
        "NotifyDirectIntoPrivateRoom", &DSMissionMiscCommand::NotifyDirectIntoPrivateRoom,
        "NotifyBossBattle", &DSMissionMiscCommand::NotifyBossBattle,
        "NotifyBeatBoss", &DSMissionMiscCommand::NotifyBeatBoss,
        "SetHeartmanRoomBlackBoard", &DSMissionMiscCommand::SetHeartmanRoomBlackBoard,
        "SetPrivateRoomBlackBoard", &DSMissionMiscCommand::SetPrivateRoomBlackBoard,
        "GetPrivateRoomBlackBoardFromCpp", &DSMissionMiscCommand::GetPrivateRoomBlackBoardFromCpp,
        "ChangePathRecordStraightMode", &DSMissionMiscCommand::ChangePathRecordStraightMode,
        "DSNotifyStartSequence", &DSMissionMiscCommand::DSNotifyStartSequence
    );
    lua.new_usertype<Inventory>("Inventory",
        "GetItemAmount", &Inventory::GetItemAmount,
        "RemoveItem", &Inventory::RemoveItem,
        "GetItems", &Inventory::GetItems,
        "RemoveAllItems", &Inventory::RemoveAllItems,
        "AddItem", &Inventory::AddItem
    );
    lua.new_usertype<AttachToHelperPositionMover>("AttachToHelperPositionMover",
        "Create", &AttachToHelperPositionMover::Create
    );
    lua.new_usertype<DSBaggage2Manager>("DSBaggage2Manager",
        "PutNuclearToBackpackOrField", &DSBaggage2Manager::PutNuclearToBackpackOrField,
        "GetNoDraggedCartInCollisionTrigger", &DSBaggage2Manager::GetNoDraggedCartInCollisionTrigger,
        "SetAreaChangeInfo", &DSBaggage2Manager::SetAreaChangeInfo,
        "MoveBaggageToPlayer", &DSBaggage2Manager::MoveBaggageToPlayer,
        "CreateBaggage", &DSBaggage2Manager::CreateBaggage,
        "AddBaggagesToTemporaryList", &DSBaggage2Manager::AddBaggagesToTemporaryList,
        "PlaceTemporaryListBaggagesAroundPlayer", &DSBaggage2Manager::PlaceTemporaryListBaggagesAroundPlayer,
        "ClearTemporaryList", &DSBaggage2Manager::ClearTemporaryList,
        "DeleteBaggage", &DSBaggage2Manager::DeleteBaggage,
        "ExtractBaggageInfo", &DSBaggage2Manager::ExtractBaggageInfo,
        "MoveBaggagesWithTerminalShelf", &DSBaggage2Manager::MoveBaggagesWithTerminalShelf,
        "DoesExistBaggageWithName", &DSBaggage2Manager::DoesExistBaggageWithName,
        "GetBaggagesInRange", &DSBaggage2Manager::GetBaggagesInRange,
        "GetBaggageParameterBool", &DSBaggage2Manager::GetBaggageParameterBool,
        "SetBaggageUnrealizedAreaUntilPlayerLeave", &DSBaggage2Manager::SetBaggageUnrealizedAreaUntilPlayerLeave,
        "PlaceTemporaryListBaggagesAroundPosition", &DSBaggage2Manager::PlaceTemporaryListBaggagesAroundPosition,
        "AddBaggageToTemporaryList", &DSBaggage2Manager::AddBaggageToTemporaryList,
        "DeleteDeliveredBaggages", &DSBaggage2Manager::DeleteDeliveredBaggages,
        "MoveDeliveredBaggagesWithTerminalShelf", &DSBaggage2Manager::MoveDeliveredBaggagesWithTerminalShelf,
        "AddBaggageToPlayer", &DSBaggage2Manager::AddBaggageToPlayer,
        "GetMaterialCountFromBaggageActorIdArray", &DSBaggage2Manager::GetMaterialCountFromBaggageActorIdArray,
        "SetFirstCursorBaggage", &DSBaggage2Manager::SetFirstCursorBaggage,
        "GetDistanceFromBaggageToPlayer", &DSBaggage2Manager::GetDistanceFromBaggageToPlayer,
        "GetBaggagesInTerminalArea", &DSBaggage2Manager::GetBaggagesInTerminalArea,
        "GetBaggagesInCollisionTrigger", &DSBaggage2Manager::GetBaggagesInCollisionTrigger,
        "CreateAndAddBaggageToDeliveryPoint", &DSBaggage2Manager::CreateAndAddBaggageToDeliveryPoint,
        "AddBaggageToDeliveryPoint", &DSBaggage2Manager::AddBaggageToDeliveryPoint,
        "BreakBaggage", &DSBaggage2Manager::BreakBaggage,
        "GetGameActorIdFromBaggageName", &DSBaggage2Manager::GetGameActorIdFromBaggageName,
        "GetAllBaggages", &DSBaggage2Manager::GetAllBaggages,
        "CreateAndAddBaggageToPlayer", &DSBaggage2Manager::CreateAndAddBaggageToPlayer,
        "AddBaggageToPlayerByGameActorId", &DSBaggage2Manager::AddBaggageToPlayerByGameActorId
    );
    lua.new_usertype<MortallyWoundedComponent>("MortallyWoundedComponent",
        "IsMortallyWounded", &MortallyWoundedComponent::IsMortallyWounded,
        "Revive", &MortallyWoundedComponent::Revive
    );
    lua.new_usertype<DSJointAimToBaseComponent>("DSJointAimToBaseComponent",
        "StartAim", &DSJointAimToBaseComponent::StartAim,
        "AimToPlayer", &DSJointAimToBaseComponent::AimToPlayer,
        "SetActive", &DSJointAimToBaseComponent::SetActive,
        "ResetAndAimSlowly", &DSJointAimToBaseComponent::ResetAndAimSlowly,
        "ResetGain", &DSJointAimToBaseComponent::ResetGain,
        "OverrideGain", &DSJointAimToBaseComponent::OverrideGain,
        "StopAim", &DSJointAimToBaseComponent::StopAim
    );
    lua.new_usertype<AIIndividual>("AIIndividual",
        "GetCombatSituationSummary", &AIIndividual::GetCombatSituationSummary,
        "IncrementIgnoreOrderCount", &AIIndividual::IncrementIgnoreOrderCount,
        "UseOnlyAttack", &AIIndividual::UseOnlyAttack,
        "DecrementIgnoreOrderCount", &AIIndividual::DecrementIgnoreOrderCount,
        "GetAttacks", &AIIndividual::GetAttacks,
        "ForceAlertLevelNoThreats", &AIIndividual::ForceAlertLevelNoThreats,
        "RaiseAlertLevel", &AIIndividual::RaiseAlertLevel
    );
    lua.new_usertype<FocusTargetComponent>("FocusTargetComponent",
        "IsEntityTaggedByFocusMode", &FocusTargetComponent::IsEntityTaggedByFocusMode,
        "IsEntityScanned", &FocusTargetComponent::IsEntityScanned,
        "IsEntityTagged", &FocusTargetComponent::IsEntityTagged,
        "IsEntityBeingScanned", &FocusTargetComponent::IsEntityBeingScanned
    );
    lua.new_usertype<DSMissionSpecialReportResource>("DSMissionSpecialReportResource",
        "IsRewardLike", &DSMissionSpecialReportResource::IsRewardLike,
        "IsMissionMenuViewForcedDisable", &DSMissionSpecialReportResource::IsMissionMenuViewForcedDisable,
        "GetDataTablesByThreshold", &DSMissionSpecialReportResource::GetDataTablesByThreshold,
        "GetEvaluationType", &DSMissionSpecialReportResource::GetEvaluationType,
        "GetDataTablesByDeliveryPoint", &DSMissionSpecialReportResource::GetDataTablesByDeliveryPoint,
        "GetCustomParam02", &DSMissionSpecialReportResource::GetCustomParam02,
        "GetCustomParam01", &DSMissionSpecialReportResource::GetCustomParam01,
        "GetMissionEvaluationDataTable", &DSMissionSpecialReportResource::GetMissionEvaluationDataTable,
        "IsMissionMenuView", &DSMissionSpecialReportResource::IsMissionMenuView,
        "IsMissionCondition", &DSMissionSpecialReportResource::IsMissionCondition,
        "GetSpecialReportHash", &DSMissionSpecialReportResource::GetSpecialReportHash,
        "GetRewardLike", &DSMissionSpecialReportResource::GetRewardLike
    );
    lua.new_usertype<SpawnSetupNonPlaceholder>("SpawnSetupNonPlaceholder",
        "WasSpawnedThroughSpawnSetup", &SpawnSetupNonPlaceholder::WasSpawnedThroughSpawnSetup
    );
    lua.new_usertype<GCore>("GCore",
        "Sound_UpdateSounds", &GCore::Sound_UpdateSounds,
        "Sound_GetSoundComponentUniqueID", &GCore::Sound_GetSoundComponentUniqueID,
        "Sound_AddSound", &GCore::Sound_AddSound,
        "Sound_PlayOneShotSound", &GCore::Sound_PlayOneShotSound,
        "Sound_ActivateSoundMixState", &GCore::Sound_ActivateSoundMixState,
        "Sound_PlayOneShotSoundWithOffset", &GCore::Sound_PlayOneShotSoundWithOffset,
        "Sound_CreateSound", &GCore::Sound_CreateSound,
        "Sound_UpdateSound", &GCore::Sound_UpdateSound,
        "Sound_SetRelativePosition", &GCore::Sound_SetRelativePosition,
        "Sound_FlushSounds", &GCore::Sound_FlushSounds,
        "Sound_GetFloatParameterHandle", &GCore::Sound_GetFloatParameterHandle,
        "Sound_SetFloatParameter", &GCore::Sound_SetFloatParameter,
        "Sound_GetIntParameterHandle", &GCore::Sound_GetIntParameterHandle,
        "Sound_SetIntParameter", &GCore::Sound_SetIntParameter,
        "Sound_GetBoolParameterHandle", &GCore::Sound_GetBoolParameterHandle,
        "Sound_SetBoolParameter", &GCore::Sound_SetBoolParameter,
        "Sound_SetListenerTransform", &GCore::Sound_SetListenerTransform,
        "IntersectSweptSphere", &GCore::IntersectSweptSphere,
        "IntersectSphere", &GCore::IntersectSphere,
        "CalculateWaterDepth", &GCore::CalculateWaterDepth,
        "IntersectLine", &GCore::IntersectLine,
        "EntityImpactEffect", &GCore::EntityImpactEffect,
        "Dismount", &GCore::Dismount
    );
    lua.new_usertype<DefendAreaUserComponent>("DefendAreaUserComponent",
        "SetDefendAreaSet", &DefendAreaUserComponent::SetDefendAreaSet
    );
    lua.new_usertype<GraphProperty>("GraphProperty",
        "HasTagInResource", &GraphProperty::HasTagInResource,
        "SetInt", &GraphProperty::SetInt,
        "SetBool", &GraphProperty::SetBool,
        "GetEntityInstance", &GraphProperty::GetEntityInstance,
        "SetFloat", &GraphProperty::SetFloat,
        "GetBool", &GraphProperty::GetBool,
        "GetWorldPosition", &GraphProperty::GetWorldPosition,
        "GetFloat", &GraphProperty::GetFloat,
        "GetVec3", &GraphProperty::GetVec3,
        "GetInt", &GraphProperty::GetInt,
        "SetEntityInstance", &GraphProperty::SetEntityInstance,
        "SetVec3", &GraphProperty::SetVec3,
        "SetWorldPosition", &GraphProperty::SetWorldPosition
    );
    lua.new_usertype<DSMissioDebugUnlockAllItemsCommand>("DSMissioDebugUnlockAllItemsCommand",
        "UnlockAllItems", &DSMissioDebugUnlockAllItemsCommand::UnlockAllItems
    );
    lua.new_usertype<Throwable>("Throwable",
        "SetThrower", &Throwable::SetThrower,
        "GetThrower", &Throwable::GetThrower,
        "GetTargetPosition", &Throwable::GetTargetPosition
    );
    lua.new_usertype<WorldData>("WorldData",
        "ScaleToRange", &WorldData::ScaleToRange,
        "SampleVec3AtWorldPosition", &WorldData::SampleVec3AtWorldPosition,
        "SampleFloatAtWorldPosition", &WorldData::SampleFloatAtWorldPosition,
        "SampleVec4AtWorldPosition", &WorldData::SampleVec4AtWorldPosition,
        "SampleAtWorldPosition", &WorldData::SampleAtWorldPosition,
        "SampleFloatAtWorldPositionImmediate", &WorldData::SampleFloatAtWorldPositionImmediate,
        "SampleWithinTile", &WorldData::SampleWithinTile,
        "SampleFloatWithinTile", &WorldData::SampleFloatWithinTile,
        "GetWorldDataTileForPosition", &WorldData::GetWorldDataTileForPosition,
        "GetDataType", &WorldData::GetDataType
    );
    lua.new_usertype<CountdownTimer>("CountdownTimer",
        "SetBlinkStartTime", &CountdownTimer::SetBlinkStartTime,
        "SetVisible", &CountdownTimer::SetVisible,
        "GetTimeRemaining", &CountdownTimer::GetTimeRemaining,
        "AdjustTimeRemaining", &CountdownTimer::AdjustTimeRemaining,
        "ResetTimer", &CountdownTimer::ResetTimer,
        "StartTimer", &CountdownTimer::StartTimer,
        "AdjustTimeElapsed", &CountdownTimer::AdjustTimeElapsed,
        "IsTimerRunning", &CountdownTimer::IsTimerRunning,
        "GetTimeElapsed", &CountdownTimer::GetTimeElapsed,
        "PauseTimer", &CountdownTimer::PauseTimer
    );
    lua.new_usertype<CraftingComponent>("CraftingComponent",
        "CraftRecipeForFree", &CraftingComponent::CraftRecipeForFree,
        "UnlockRecipe", &CraftingComponent::UnlockRecipe
    );
    lua.new_usertype<DSMissionConditionResourceBase>("DSMissionConditionResourceBase",
        "GetMinCountBaggage", &DSMissionConditionResourceBase::GetMinCountBaggage,
        "GetCumulativeMinDamage", &DSMissionConditionResourceBase::GetCumulativeMinDamage,
        "GetSpecialReport", &DSMissionConditionResourceBase::GetSpecialReport,
        "GetConditionType", &DSMissionConditionResourceBase::GetConditionType,
        "GetMaxDonationCount", &DSMissionConditionResourceBase::GetMaxDonationCount,
        "GetEvaluationDataTable", &DSMissionConditionResourceBase::GetEvaluationDataTable,
        "GetBaggageDamageMinRate", &DSMissionConditionResourceBase::GetBaggageDamageMinRate,
        "GetMinDistance", &DSMissionConditionResourceBase::GetMinDistance,
        "GetClearMinTime", &DSMissionConditionResourceBase::GetClearMinTime,
        "GetMinWeightBaggage", &DSMissionConditionResourceBase::GetMinWeightBaggage
    );
    lua.new_usertype<FactDatabase>("FactDatabase",
        "GetVec3Fact", &FactDatabase::GetVec3Fact,
        "GetFloatFactWithUUID", &FactDatabase::GetFloatFactWithUUID,
        "GetVec3FactWithUUID", &FactDatabase::GetVec3FactWithUUID,
        "GetBooleanFact", &FactDatabase::GetBooleanFact,
        "GetBooleanFactWithUUID", &FactDatabase::GetBooleanFactWithUUID,
        "SetFloatFact", &FactDatabase::SetFloatFact,
        "SetEnumFact", &FactDatabase::SetEnumFact,
        "GetEnumFact", &FactDatabase::GetEnumFact,
        "SetVec3Fact", &FactDatabase::SetVec3Fact,
        "SetFactContextPersistent", &FactDatabase::SetFactContextPersistent,
        "IncrementIntegerFact", &FactDatabase::IncrementIntegerFact,
        "GetEnumFactWithUUID", &FactDatabase::GetEnumFactWithUUID,
        "SetBooleanFact", &FactDatabase::SetBooleanFact,
        "SetIntegerFact", &FactDatabase::SetIntegerFact,
        "GetIntegerFactWithUUID", &FactDatabase::GetIntegerFactWithUUID,
        "GetIntegerFact", &FactDatabase::GetIntegerFact,
        "IncrementFloatFact", &FactDatabase::IncrementFloatFact,
        "GetFloatFact", &FactDatabase::GetFloatFact
    );
    lua.new_usertype<DSMissionEventTimerCommand>("DSMissionEventTimerCommand",
        "ManualBootupMissionEventTimer", &DSMissionEventTimerCommand::ManualBootupMissionEventTimer,
        "SetMissionEventTimerPurposeTextByLocalizedText", &DSMissionEventTimerCommand::SetMissionEventTimerPurposeTextByLocalizedText,
        "FixVisibleTimerFromDSMissionID", &DSMissionEventTimerCommand::FixVisibleTimerFromDSMissionID,
        "ManualStopMissionEventTimer", &DSMissionEventTimerCommand::ManualStopMissionEventTimer,
        "ShowMissionEventTimer", &DSMissionEventTimerCommand::ShowMissionEventTimer,
        "ResetMissionEventTimer", &DSMissionEventTimerCommand::ResetMissionEventTimer,
        "AllVisiblePopupTimer", &DSMissionEventTimerCommand::AllVisiblePopupTimer,
        "GetCurPlayTimeSecondsF", &DSMissionEventTimerCommand::GetCurPlayTimeSecondsF,
        "SetCurTimeSecondsF", &DSMissionEventTimerCommand::SetCurTimeSecondsF,
        "HideMissionEventTimer", &DSMissionEventTimerCommand::HideMissionEventTimer,
        "PauseMissionEventTimer", &DSMissionEventTimerCommand::PauseMissionEventTimer,
        "StartMissionEventTimer", &DSMissionEventTimerCommand::StartMissionEventTimer
    );
    lua.new_usertype<DSAnyEventStateCommand>("DSAnyEventStateCommand",
        "SetEventState", &DSAnyEventStateCommand::SetEventState,
        "UnsetEventStateHash", &DSAnyEventStateCommand::UnsetEventStateHash,
        "GetEventStateHash", &DSAnyEventStateCommand::GetEventStateHash,
        "SetEventStateHash", &DSAnyEventStateCommand::SetEventStateHash
    );
    lua.new_usertype<DSMissionLogicMiscCommand>("DSMissionLogicMiscCommand",
        "StaticMissionIdToUUID", &DSMissionLogicMiscCommand::StaticMissionIdToUUID,
        "PreparationBeforeCutscene", &DSMissionLogicMiscCommand::PreparationBeforeCutscene,
        "DSIsCombatMuleOrBT", &DSMissionLogicMiscCommand::DSIsCombatMuleOrBT,
        "ResetGameOverCountForHospitality", &DSMissionLogicMiscCommand::ResetGameOverCountForHospitality,
        "GetGameOverCountForHospitality", &DSMissionLogicMiscCommand::GetGameOverCountForHospitality,
        "CanStartCutscene", &DSMissionLogicMiscCommand::CanStartCutscene,
        "SetMissionGlobalVariable", &DSMissionLogicMiscCommand::SetMissionGlobalVariable,
        "GetMissionGlobalVariable", &DSMissionLogicMiscCommand::GetMissionGlobalVariable,
        "DSHasBeenRelocateBaggage", &DSMissionLogicMiscCommand::DSHasBeenRelocateBaggage,
        "DSGetCurrentDate", &DSMissionLogicMiscCommand::DSGetCurrentDate,
        "IsBirthdayToday", &DSMissionLogicMiscCommand::IsBirthdayToday,
        "SetMissionMessageEnabled", &DSMissionLogicMiscCommand::SetMissionMessageEnabled
    );
    lua.new_usertype<DSMissionBaggageNodeCommand>("DSMissionBaggageNodeCommand",
        "IsIncludeBaggageListItemInMission", &DSMissionBaggageNodeCommand::IsIncludeBaggageListItemInMission,
        "DeliveryBaggageForDontDeliveryMission", &DSMissionBaggageNodeCommand::DeliveryBaggageForDontDeliveryMission,
        "GetBaggageAttribute", &DSMissionBaggageNodeCommand::GetBaggageAttribute
    );
    lua.new_usertype<CollisionTrigger>("CollisionTrigger",
        "IsInTrigger", &CollisionTrigger::IsInTrigger,
        "GetWorldTransform", &CollisionTrigger::GetWorldTransform
    );
    lua.new_usertype<DSGraphServiceReturnValue>("DSGraphServiceReturnValue",
        "SetInt", &DSGraphServiceReturnValue::SetInt,
        "SetMessageNameHash", &DSGraphServiceReturnValue::SetMessageNameHash
    );
    lua.new_usertype<DSDeliveryBotEntity>("DSDeliveryBotEntity",
        "GameActorIdToEntity", &DSDeliveryBotEntity::GameActorIdToEntity,
        "EntityToGameActorId", &DSDeliveryBotEntity::EntityToGameActorId,
        "IsDeliveryBot", &DSDeliveryBotEntity::IsDeliveryBot
    );
    lua.new_usertype<TileBasedStreamingStrategyInstance>("TileBasedStreamingStrategyInstance",
        "SetHighestLODLevel", &TileBasedStreamingStrategyInstance::SetHighestLODLevel,
        "ConvertToTileCoordinates", &TileBasedStreamingStrategyInstance::ConvertToTileCoordinates,
        "HintTileState", &TileBasedStreamingStrategyInstance::HintTileState,
        "SetTileState", &TileBasedStreamingStrategyInstance::SetTileState,
        "GetTileState", &TileBasedStreamingStrategyInstance::GetTileState
    );
    lua.new_usertype<QuestSystem>("QuestSystem",
        "GetQuest", &QuestSystem::GetQuest,
        "CanStartQuest", &QuestSystem::CanStartQuest,
        "SetAllQuestsPaused", &QuestSystem::SetAllQuestsPaused,
        "DisableQuest", &QuestSystem::DisableQuest,
        "RevertQuest", &QuestSystem::RevertQuest,
        "GetTrackedQuest", &QuestSystem::GetTrackedQuest,
        "AbandonMerchantJobs", &QuestSystem::AbandonMerchantJobs,
        "ShowQuestNotification", &QuestSystem::ShowQuestNotification,
        "EnableQuest", &QuestSystem::EnableQuest
    );
    lua.new_usertype<DSRadioNodeGraphBindings>("DSRadioNodeGraphBindings",
        "RandomlySelectSentenceHavingSpecificVoiceName", &DSRadioNodeGraphBindings::RandomlySelectSentenceHavingSpecificVoiceName,
        "RaiseAbortEvent2", &DSRadioNodeGraphBindings::RaiseAbortEvent2,
        "RaiseEvent", &DSRadioNodeGraphBindings::RaiseEvent,
        "RaiseEvent2", &DSRadioNodeGraphBindings::RaiseEvent2,
        "PlaySentence", &DSRadioNodeGraphBindings::PlaySentence,
        "RaiseAbortEvent", &DSRadioNodeGraphBindings::RaiseAbortEvent
    );
    lua.new_usertype<CharacterProgressionComponent>("CharacterProgressionComponent",
        "GetLevel", &CharacterProgressionComponent::GetLevel,
        "AddXp", &CharacterProgressionComponent::AddXp,
        "SetCurrentLevel", &CharacterProgressionComponent::SetCurrentLevel,
        "HasPerkLevel", &CharacterProgressionComponent::HasPerkLevel,
        "AddPerkLevel", &CharacterProgressionComponent::AddPerkLevel,
        "AddPerkPoints", &CharacterProgressionComponent::AddPerkPoints
    );
    lua.new_usertype<DSConstructionPointManager>("DSConstructionPointManager",
        "ForceConstructionLevelupStart", &DSConstructionPointManager::ForceConstructionLevelupStart,
        "SetCustomizeHoloSpawnPosition", &DSConstructionPointManager::SetCustomizeHoloSpawnPosition,
        "AddMissionConstructableArea", &DSConstructionPointManager::AddMissionConstructableArea,
        "GetConstructionPointTotalNecessaryMaterials", &DSConstructionPointManager::GetConstructionPointTotalNecessaryMaterials,
        "GetUUIDHash", &DSConstructionPointManager::GetUUIDHash,
        "GetConstructionPointLevel", &DSConstructionPointManager::GetConstructionPointLevel,
        "GetDeliveryPointTypeString", &DSConstructionPointManager::GetDeliveryPointTypeString,
        "GetConstructionUsabilityFromEntity", &DSConstructionPointManager::GetConstructionUsabilityFromEntity,
        "RemoveConstructionsInArea", &DSConstructionPointManager::RemoveConstructionsInArea,
        "SetConstructionPointTransform", &DSConstructionPointManager::SetConstructionPointTransform,
        "SendCommandToDeliveryPoint", &DSConstructionPointManager::SendCommandToDeliveryPoint,
        "AllowConstructionInfologInPrivateroom", &DSConstructionPointManager::AllowConstructionInfologInPrivateroom,
        "CallGimmickActionByConstruction", &DSConstructionPointManager::CallGimmickActionByConstruction,
        "GetConstructionAvailableFromEntity", &DSConstructionPointManager::GetConstructionAvailableFromEntity,
        "GetAccessingConstructionPointId", &DSConstructionPointManager::GetAccessingConstructionPointId,
        "SetActiveAllConstructions", &DSConstructionPointManager::SetActiveAllConstructions,
        "ClearAccessingConstruction", &DSConstructionPointManager::ClearAccessingConstruction,
        "SetIntruderCheckerActivation", &DSConstructionPointManager::SetIntruderCheckerActivation,
        "IntToConstructionPointCategory", &DSConstructionPointManager::IntToConstructionPointCategory,
        "SetActiveCPAreaConstructions", &DSConstructionPointManager::SetActiveCPAreaConstructions,
        "RemoveGimmickLocatorFromConstruction", &DSConstructionPointManager::RemoveGimmickLocatorFromConstruction,
        "GetConstructionPointState", &DSConstructionPointManager::GetConstructionPointState,
        "GetConstructionPointPosition", &DSConstructionPointManager::GetConstructionPointPosition,
        "CreateConstruction", &DSConstructionPointManager::CreateConstruction,
        "ConstructioTypeToCategory", &DSConstructionPointManager::ConstructioTypeToCategory,
        "SearchConstructionIDsWithPosition", &DSConstructionPointManager::SearchConstructionIDsWithPosition,
        "GetConstructionPointCategory", &DSConstructionPointManager::GetConstructionPointCategory,
        "CallGimmickActionByConstructionEntity", &DSConstructionPointManager::CallGimmickActionByConstructionEntity,
        "SearchConstructionPointEntityByInfo", &DSConstructionPointManager::SearchConstructionPointEntityByInfo,
        "GetRoadHashByConstructionId", &DSConstructionPointManager::GetRoadHashByConstructionId,
        "ForceConstructionLevelupComplete", &DSConstructionPointManager::ForceConstructionLevelupComplete,
        "GetConstructionConfig", &DSConstructionPointManager::GetConstructionConfig,
        "GetOverrideOverHeadHoloIndexFromEntity", &DSConstructionPointManager::GetOverrideOverHeadHoloIndexFromEntity,
        "GetNearestConstructionPointId", &DSConstructionPointManager::GetNearestConstructionPointId,
        "SetConstructionLevel", &DSConstructionPointManager::SetConstructionLevel,
        "SetBaggagesToStatic", &DSConstructionPointManager::SetBaggagesToStatic,
        "SetActiveAreaConstructions", &DSConstructionPointManager::SetActiveAreaConstructions,
        "PutConstructionsInTar", &DSConstructionPointManager::PutConstructionsInTar,
        "SetGimmickLocatorToConstruction", &DSConstructionPointManager::SetGimmickLocatorToConstruction,
        "RestoreLastStrandingConstructions", &DSConstructionPointManager::RestoreLastStrandingConstructions,
        "StartLastStrandingConstructions", &DSConstructionPointManager::StartLastStrandingConstructions,
        "SetAccessingConstruction", &DSConstructionPointManager::SetAccessingConstruction,
        "GetUsableQpidBandwidth", &DSConstructionPointManager::GetUsableQpidBandwidth,
        "SetConstructionUsableFromEntity", &DSConstructionPointManager::SetConstructionUsableFromEntity,
        "MoveBaggagesToSafePlace", &DSConstructionPointManager::MoveBaggagesToSafePlace,
        "GetAccessingConstructionPointEntity", &DSConstructionPointManager::GetAccessingConstructionPointEntity,
        "GetConstructionPointFrontAccessTransform", &DSConstructionPointManager::GetConstructionPointFrontAccessTransform,
        "GetConstructionCategoryTotalNecessaryMaterials", &DSConstructionPointManager::GetConstructionCategoryTotalNecessaryMaterials,
        "GetConstructionPointNecessaryMaterialsToNextLevel", &DSConstructionPointManager::GetConstructionPointNecessaryMaterialsToNextLevel,
        "GetConstructionPointOnlineInfo", &DSConstructionPointManager::GetConstructionPointOnlineInfo,
        "RemoveMissionConstructableArea", &DSConstructionPointManager::RemoveMissionConstructableArea,
        "SendCommandToDeliveryId", &DSConstructionPointManager::SendCommandToDeliveryId,
        "SetPrivateRoomEventGraph", &DSConstructionPointManager::SetPrivateRoomEventGraph
    );
    lua.new_usertype<DSSceneCommand>("DSSceneCommand",
        "DSGetScenePosition", &DSSceneCommand::DSGetScenePosition,
        "DSGetSceneTerminalId", &DSSceneCommand::DSGetSceneTerminalId,
        "DSIsEqualOriginalScene", &DSSceneCommand::DSIsEqualOriginalScene,
        "DSGetSceneHashValue1", &DSSceneCommand::DSGetSceneHashValue1,
        "DSGetSceneHashValue0", &DSSceneCommand::DSGetSceneHashValue0,
        "DSSendCustomSceneMessage", &DSSceneCommand::DSSendCustomSceneMessage
    );
    lua.new_usertype<AIBehaviorGroupMemberComponent>("AIBehaviorGroupMemberComponent",
        "GetAIGroup", &AIBehaviorGroupMemberComponent::GetAIGroup,
        "GetAIBehaviorGroup", &AIBehaviorGroupMemberComponent::GetAIBehaviorGroup
    );
    lua.new_usertype<RopeComponent>("RopeComponent",
        "GetRopeLifeTimeLeft", &RopeComponent::GetRopeLifeTimeLeft
    );
    lua.new_usertype<DSIntruderDetectorComponent>("DSIntruderDetectorComponent",
        "IsThereAnyIntruder", &DSIntruderDetectorComponent::IsThereAnyIntruder
    );
    lua.new_usertype<Mover>("Mover",
        "ApplyLocalImpulse", &Mover::ApplyLocalImpulse,
        "ApplyAngularLocalImpulse", &Mover::ApplyAngularLocalImpulse,
        "ApplyAngularImpulse", &Mover::ApplyAngularImpulse,
        "ApplyImpulse", &Mover::ApplyImpulse
    );
    lua.new_usertype<DSCatalogueListItemCommand>("DSCatalogueListItemCommand",
        "GetDynamicOfflineBaggageGameActorIdFromMissionId", &DSCatalogueListItemCommand::GetDynamicOfflineBaggageGameActorIdFromMissionId,
        "ExtractBaggageListItemInfo", &DSCatalogueListItemCommand::ExtractBaggageListItemInfo,
        "GetBaggageListItemByName", &DSCatalogueListItemCommand::GetBaggageListItemByName
    );
    lua.new_usertype<InventoryItem>("InventoryItem",
        "GetDisplayName", &InventoryItem::GetDisplayName,
        "GetInventoryItemAmount", &InventoryItem::GetInventoryItemAmount,
        "GetInventoryItemOwner", &InventoryItem::GetInventoryItemOwner,
        "IsQuestItem", &InventoryItem::IsQuestItem,
        "GetInventoryItemRarity", &InventoryItem::GetInventoryItemRarity,
        "GetInventoryItemCategory", &InventoryItem::GetInventoryItemCategory,
        "GetInventoryItemEntity", &InventoryItem::GetInventoryItemEntity,
        "GetInventoryItemResource", &InventoryItem::GetInventoryItemResource
    );
    lua.new_usertype<VehicleEntity>("VehicleEntity",
        "EntityToGameActorId", &VehicleEntity::EntityToGameActorId,
        "GameActorIdToEntity", &VehicleEntity::GameActorIdToEntity,
        "GetBoolRequest", &VehicleEntity::GetBoolRequest,
        "GetLastVehicleFromParking", &VehicleEntity::GetLastVehicleFromParking,
        "RequestSetForceLowLODAll", &VehicleEntity::RequestSetForceLowLODAll,
        "GetLastInVehicleFromTrigger", &VehicleEntity::GetLastInVehicleFromTrigger,
        "MoveObjectsToSafePositions", &VehicleEntity::MoveObjectsToSafePositions,
        "GetLastInVehicleFromNearestTrigger", &VehicleEntity::GetLastInVehicleFromNearestTrigger,
        "SetRequest", &VehicleEntity::SetRequest,
        "GetVehicleLife", &VehicleEntity::GetVehicleLife,
        "GetAllVehiclesInNearestTrigger", &VehicleEntity::GetAllVehiclesInNearestTrigger,
        "VehicleInOutTrigger", &VehicleEntity::VehicleInOutTrigger,
        "MoveObjectsToSafePlace", &VehicleEntity::MoveObjectsToSafePlace,
        "MoveVehicleOrCartToSafePlace", &VehicleEntity::MoveVehicleOrCartToSafePlace,
        "SetForceSpeedScale", &VehicleEntity::SetForceSpeedScale,
        "SetOverrideInCutscene", &VehicleEntity::SetOverrideInCutscene,
        "IsDriving", &VehicleEntity::IsDriving,
        "GetVehicleType", &VehicleEntity::GetVehicleType
    );
    lua.new_usertype<BuddyComponent>("BuddyComponent",
        "SetTeleportEnabled", &BuddyComponent::SetTeleportEnabled,
        "TeleportBuddy", &BuddyComponent::TeleportBuddy
    );
    lua.new_usertype<EnumFact>("EnumFact",
        "GetValueIndex", &EnumFact::GetValueIndex
    );
    lua.new_usertype<AIManagerGame>("AIManagerGame",
        "GetPlayerIsBeingHeard", &AIManagerGame::GetPlayerIsBeingHeard,
        "GetPlayerThreatLevel", &AIManagerGame::GetPlayerThreatLevel,
        "IsPlayerCurrentlyIdentified", &AIManagerGame::IsPlayerCurrentlyIdentified,
        "GetSearchTimeFactorForPlayer", &AIManagerGame::GetSearchTimeFactorForPlayer,
        "GetPlayerLastBeingSeenTimestamp", &AIManagerGame::GetPlayerLastBeingSeenTimestamp,
        "GetPlayerThreatLevelFactor", &AIManagerGame::GetPlayerThreatLevelFactor,
        "IsPlayerCurrentlyIdentifiedByHumanoid", &AIManagerGame::IsPlayerCurrentlyIdentifiedByHumanoid,
        "GetEntitiesInRadius", &AIManagerGame::GetEntitiesInRadius,
        "IsPlayerCurrentlyIdentifiedByRobot", &AIManagerGame::IsPlayerCurrentlyIdentifiedByRobot,
        "GetCombatSituationSummaryForThreat", &AIManagerGame::GetCombatSituationSummaryForThreat,
        "GetPlayerVisualThreatLevel", &AIManagerGame::GetPlayerVisualThreatLevel,
        "GetPlayerHasBeenReported", &AIManagerGame::GetPlayerHasBeenReported,
        "GetPlayerLastBeingHeardTimestamp", &AIManagerGame::GetPlayerLastBeingHeardTimestamp,
        "GetPlayerIsInAntiStealth", &AIManagerGame::GetPlayerIsInAntiStealth,
        "GetPlayerIsBeingSeen", &AIManagerGame::GetPlayerIsBeingSeen
    );
    lua.new_usertype<DsMuleManager>("DsMuleManager",
        "CallRestoreMuleScript", &DsMuleManager::CallRestoreMuleScript,
        "SetDbgMuleMoveSpeedScale", &DsMuleManager::SetDbgMuleMoveSpeedScale,
        "UpdateFriendlyMuleActivationStatus", &DsMuleManager::UpdateFriendlyMuleActivationStatus,
        "RequestMuleReinforce", &DsMuleManager::RequestMuleReinforce,
        "MuleDirectDamageToStatus", &DsMuleManager::MuleDirectDamageToStatus,
        "SetSequenceOnlyMule", &DsMuleManager::SetSequenceOnlyMule,
        "RequestReinforceForEachRoute", &DsMuleManager::RequestReinforceForEachRoute,
        "GetMuleReinforceCount", &DsMuleManager::GetMuleReinforceCount,
        "GetMuleReinforceCountByIdentifier", &DsMuleManager::GetMuleReinforceCountByIdentifier,
        "SetForceMuleStance", &DsMuleManager::SetForceMuleStance,
        "ClearForceMuleStance", &DsMuleManager::ClearForceMuleStance
    );
    lua.new_usertype<WieldStowInventory>("WieldStowInventory",
        "RemoveAndStoreItems", &WieldStowInventory::RemoveAndStoreItems,
        "StowActiveItem", &WieldStowInventory::StowActiveItem,
        "GetActiveItem", &WieldStowInventory::GetActiveItem,
        "AddStoredItems", &WieldStowInventory::AddStoredItems,
        "WieldItem", &WieldStowInventory::WieldItem
    );
    lua.new_usertype<DSWorldMapHoloComponent>("DSWorldMapHoloComponent",
        "SetWorldMapHoloCursor", &DSWorldMapHoloComponent::SetWorldMapHoloCursor,
        "SetWorldMapHoloPlayerPositionCursor", &DSWorldMapHoloComponent::SetWorldMapHoloPlayerPositionCursor,
        "SetWorldMapHoloPlayerCursor", &DSWorldMapHoloComponent::SetWorldMapHoloPlayerCursor,
        "AddWorldMapHoloConnection", &DSWorldMapHoloComponent::AddWorldMapHoloConnection,
        "AddWorldMapHoloConnectedPoint", &DSWorldMapHoloComponent::AddWorldMapHoloConnectedPoint
    );
    lua.new_usertype<MountableComponent>("MountableComponent",
        "GetMounter", &MountableComponent::GetMounter,
        "Mount", &MountableComponent::Mount
    );
    lua.new_usertype<MounterComponent>("MounterComponent",
        "HasMounted", &MounterComponent::HasMounted
    );
    lua.new_usertype<DSPlayerNodeExporter>("DSPlayerNodeExporter",
        "SetCryptbiosisCount", &DSPlayerNodeExporter::SetCryptbiosisCount,
        "GetUsedBloodPackAmount", &DSPlayerNodeExporter::GetUsedBloodPackAmount,
        "PlayerHelperSupplySystemEnable", &DSPlayerNodeExporter::PlayerHelperSupplySystemEnable,
        "UnequipAccessoriesForBeach", &DSPlayerNodeExporter::UnequipAccessoriesForBeach,
        "RecoverFullAtPrivateRoom", &DSPlayerNodeExporter::RecoverFullAtPrivateRoom,
        "GetReturnPointTransform", &DSPlayerNodeExporter::GetReturnPointTransform,
        "SetCryptobiosisReviveDistance", &DSPlayerNodeExporter::SetCryptobiosisReviveDistance,
        "DisconnectCartAndPlaceAroundReturnPoint", &DSPlayerNodeExporter::DisconnectCartAndPlaceAroundReturnPoint,
        "ResetNumCryptbiosisAroundCoral", &DSPlayerNodeExporter::ResetNumCryptbiosisAroundCoral,
        "SetNumCryptbiosisAroundCoral", &DSPlayerNodeExporter::SetNumCryptbiosisAroundCoral,
        "MarkToOnsen", &DSPlayerNodeExporter::MarkToOnsen,
        "AddCryptbiosisCount", &DSPlayerNodeExporter::AddCryptbiosisCount,
        "ResetPrivateRoomGlassesAndCap", &DSPlayerNodeExporter::ResetPrivateRoomGlassesAndCap,
        "IsEquippedItem", &DSPlayerNodeExporter::IsEquippedItem,
        "ResetCryptobiosisReviveDistance", &DSPlayerNodeExporter::ResetCryptobiosisReviveDistance
    );
    lua.new_usertype<PlayGoManager>("PlayGoManager",
        "GetProgressAndETA", &PlayGoManager::GetProgressAndETA
    );
    lua.new_usertype<FacialAnimationComponent>("FacialAnimationComponent",
        "PlayAnimation", &FacialAnimationComponent::PlayAnimation,
        "StopAnimation", &FacialAnimationComponent::StopAnimation
    );
    lua.new_usertype<ContextualActionComponent>("ContextualActionComponent",
        "IsPerformingContextualAction", &ContextualActionComponent::IsPerformingContextualAction
    );
    lua.new_usertype<DSDeliveredBaggageArgs>("DSDeliveredBaggageArgs",
        "GetMissionId", &DSDeliveredBaggageArgs::GetMissionId,
        "GetDeadBodyGameActorIdCode", &DSDeliveredBaggageArgs::GetDeadBodyGameActorIdCode,
        "GetBaggageListItemNameCode", &DSDeliveredBaggageArgs::GetBaggageListItemNameCode
    );
    lua.new_usertype<DsCheckStationGraphCommand>("DsCheckStationGraphCommand",
        "CheckStation_ShowPlayerInfoMessages", &DsCheckStationGraphCommand::CheckStation_ShowPlayerInfoMessages,
        "CheckStation_GetNonBaggageDeadBodyCount", &DsCheckStationGraphCommand::CheckStation_GetNonBaggageDeadBodyCount,
        "CheckStation_GetInfo", &DsCheckStationGraphCommand::CheckStation_GetInfo,
        "CheckStation_ContactScanner", &DsCheckStationGraphCommand::CheckStation_ContactScanner
    );
    lua.new_usertype<DSMissionBasicNode>("DSMissionBasicNode",
        "DebugIsDebugEntryBusy", &DSMissionBasicNode::DebugIsDebugEntryBusy,
        "GetMainMissionIdArray", &DSMissionBasicNode::GetMainMissionIdArray,
        "IsHalflifeMissionById", &DSMissionBasicNode::IsHalflifeMissionById,
        "DebugDelayRemoveBaggageByName", &DSMissionBasicNode::DebugDelayRemoveBaggageByName,
        "DebugRemoveBaggageByName", &DSMissionBasicNode::DebugRemoveBaggageByName,
        "DebugDeleteMissionBaggage", &DSMissionBasicNode::DebugDeleteMissionBaggage,
        "DebugUpdateMissionSystem", &DSMissionBasicNode::DebugUpdateMissionSystem,
        "DebugResetAccessingTerminal", &DSMissionBasicNode::DebugResetAccessingTerminal,
        "DebugSetAccessingTerminal", &DSMissionBasicNode::DebugSetAccessingTerminal,
        "GetMissionTypeById", &DSMissionBasicNode::GetMissionTypeById,
        "RequestDispMissionStartHud", &DSMissionBasicNode::RequestDispMissionStartHud,
        "CalcProgressMissionCountHeavy", &DSMissionBasicNode::CalcProgressMissionCountHeavy,
        "CalcCanCancelProgressMissionCount", &DSMissionBasicNode::CalcCanCancelProgressMissionCount
    );
    lua.new_usertype<ShaderAnimComponent>("ShaderAnimComponent",
        "SwapEntityAfterShaderAnim", &ShaderAnimComponent::SwapEntityAfterShaderAnim,
        "SwapComponentAfterShaderAnim", &ShaderAnimComponent::SwapComponentAfterShaderAnim,
        "IsFinished", &ShaderAnimComponent::IsFinished,
        "EndShaderAnim", &ShaderAnimComponent::EndShaderAnim
    );
    lua.new_usertype<DSTerminalGraphArgs>("DSTerminalGraphArgs",
        "GetTerminalGraphArgs", &DSTerminalGraphArgs::GetTerminalGraphArgs,
        "GetGivenChiral", &DSTerminalGraphArgs::GetGivenChiral,
        "GetParam", &DSTerminalGraphArgs::GetParam,
        "GetBonusInfoArray", &DSTerminalGraphArgs::GetBonusInfoArray,
        "GetEvaluationInfoArray", &DSTerminalGraphArgs::GetEvaluationInfoArray,
        "GetDeliveredMemoryChips", &DSTerminalGraphArgs::GetDeliveredMemoryChips,
        "GetOrderedBaggages", &DSTerminalGraphArgs::GetOrderedBaggages,
        "GetDeliveredDeadBodyBaggages", &DSTerminalGraphArgs::GetDeliveredDeadBodyBaggages,
        "GetDeliveredBaggages", &DSTerminalGraphArgs::GetDeliveredBaggages
    );
    lua.new_usertype<DSAirplaneGameActorLocator>("DSAirplaneGameActorLocator",
        "MoveAirplanePathPoint", &DSAirplaneGameActorLocator::MoveAirplanePathPoint,
        "GetAirplaneGameActor", &DSAirplaneGameActorLocator::GetAirplaneGameActor,
        "MoveAirplane", &DSAirplaneGameActorLocator::MoveAirplane,
        "NewAirplanePath", &DSAirplaneGameActorLocator::NewAirplanePath,
        "MoveAirplanePathFromNode", &DSAirplaneGameActorLocator::MoveAirplanePathFromNode,
        "GetAirplanePositionAfterTime", &DSAirplaneGameActorLocator::GetAirplanePositionAfterTime,
        "PredictAirplaneHitPosition", &DSAirplaneGameActorLocator::PredictAirplaneHitPosition,
        "AirplaneLaunchShell", &DSAirplaneGameActorLocator::AirplaneLaunchShell,
        "AirplaneStopFire", &DSAirplaneGameActorLocator::AirplaneStopFire,
        "AirplaneStrafe", &DSAirplaneGameActorLocator::AirplaneStrafe,
        "AirplaneFire", &DSAirplaneGameActorLocator::AirplaneFire,
        "ShakeAirplane", &DSAirplaneGameActorLocator::ShakeAirplane,
        "DespawnAirplaneEntity", &DSAirplaneGameActorLocator::DespawnAirplaneEntity,
        "SpawnAirplaneEntity", &DSAirplaneGameActorLocator::SpawnAirplaneEntity
    );
    lua.new_usertype<AIScanExpressionParams>("AIScanExpressionParams",
        "GetParams", &AIScanExpressionParams::GetParams
    );
    lua.new_usertype<AttackEventContext>("AttackEventContext",
        "GetTags", &AttackEventContext::GetTags,
        "GetTopOfHierarchy", &AttackEventContext::GetTopOfHierarchy,
        "GetWeaponModeResource", &AttackEventContext::GetWeaponModeResource,
        "GetInstigator", &AttackEventContext::GetInstigator,
        "GetWeaponResource", &AttackEventContext::GetWeaponResource,
        "GetParentContext", &AttackEventContext::GetParentContext,
        "GetDamager", &AttackEventContext::GetDamager
    );
    lua.new_usertype<AIWeaponPreference>("AIWeaponPreference",
        "GetNameSymbol", &AIWeaponPreference::GetNameSymbol
    );
    lua.new_usertype<DSGimmickGraphCommand>("DSGimmickGraphCommand",
        "SetInvisibleSharedGimmick", &DSGimmickGraphCommand::SetInvisibleSharedGimmick,
        "DisableDSCheckStationAlarm", &DSGimmickGraphCommand::DisableDSCheckStationAlarm,
        "MovePendulumGimmick", &DSGimmickGraphCommand::MovePendulumGimmick,
        "ActivatePhysicsGimmickObjects", &DSGimmickGraphCommand::ActivatePhysicsGimmickObjects,
        "ActivatePhysicsGimmickObjectsWithSoundEnd", &DSGimmickGraphCommand::ActivatePhysicsGimmickObjectsWithSoundEnd,
        "SetFiringTargetWaiting", &DSGimmickGraphCommand::SetFiringTargetWaiting,
        "NotifyGimmickSpawnMessage", &DSGimmickGraphCommand::NotifyGimmickSpawnMessage,
        "DisableAutoDoorGimmickBaggageCheck", &DSGimmickGraphCommand::DisableAutoDoorGimmickBaggageCheck,
        "LockAutoDoorGimmick", &DSGimmickGraphCommand::LockAutoDoorGimmick,
        "ActivatePhysicsGimmickObjectsWithSoundStart", &DSGimmickGraphCommand::ActivatePhysicsGimmickObjectsWithSoundStart
    );
    lua.new_usertype<DSGraphServiceArgs>("DSGraphServiceArgs",
        "GetInt", &DSGraphServiceArgs::GetInt,
        "GetMessageNameHash", &DSGraphServiceArgs::GetMessageNameHash
    );
    lua.new_usertype<MeleeBlockComponent>("MeleeBlockComponent",
        "IsBlocking", &MeleeBlockComponent::IsBlocking
    );
    lua.new_usertype<AnnotationInstance>("AnnotationInstance",
        "Enable", &AnnotationInstance::Enable
    );
    lua.new_usertype<FastTravelSystem>("FastTravelSystem",
        "DisableFastTravel", &FastTravelSystem::DisableFastTravel,
        "EnableFastTravel", &FastTravelSystem::EnableFastTravel
    );
    lua.new_usertype<DSSleepAfterShaderAnimComponent>("DSSleepAfterShaderAnimComponent",
        "SleepAfterShaderAnim", &DSSleepAfterShaderAnimComponent::SleepAfterShaderAnim,
        "WakeupAndRestartShaderAnim", &DSSleepAfterShaderAnimComponent::WakeupAndRestartShaderAnim
    );
    lua.new_usertype<GestureComponent>("GestureComponent",
        "RequestGesture", &GestureComponent::RequestGesture,
        "RequestGestureWithWorldPositionGestureTarget", &GestureComponent::RequestGestureWithWorldPositionGestureTarget,
        "RequestGestureWithEntityGestureTarget", &GestureComponent::RequestGestureWithEntityGestureTarget
    );
    lua.new_usertype<MovieTag>("MovieTag",
        "StartMovie", &MovieTag::StartMovie,
        "StopMovie", &MovieTag::StopMovie
    );
    lua.new_usertype<Application>("Application",
        "StartGame", &Application::StartGame,
        "LoadAlwaysLoaded", &Application::LoadAlwaysLoaded,
        "SelectAndLoadGame", &Application::SelectAndLoadGame,
        "ContinueLastSave", &Application::ContinueLastSave,
        "StartCredits", &Application::StartCredits,
        "GetApplication", &Application::GetApplication
    );
    lua.new_usertype<DSAmelieGestureComponent>("DSAmelieGestureComponent",
        "RequestAmelieHandWaving", &DSAmelieGestureComponent::RequestAmelieHandWaving
    );
    lua.new_usertype<Math>("Math",
        "gMatrixInverse3x4", &Math::gMatrixInverse3x4,
        "gComposeMat44", &Math::gComposeMat44,
        "gMayaEulerTo4x4", &Math::gMayaEulerTo4x4,
        "gMayaGetEulerXYZ", &Math::gMayaGetEulerXYZ,
        "gMayaDecomposeAffineMatrix", &Math::gMayaDecomposeAffineMatrix,
        "gMayaQuatFrom4x4", &Math::gMayaQuatFrom4x4,
        "gMayaQuatTo4x4", &Math::gMayaQuatTo4x4
    );
    lua.new_usertype<PathMover>("PathMover",
        "SetPaused", &PathMover::SetPaused,
        "SetTime", &PathMover::SetTime,
        "SetDistance", &PathMover::SetDistance
    );
    lua.new_usertype<ModificationSocketComponent>("ModificationSocketComponent",
        "SocketModificationItem", &ModificationSocketComponent::SocketModificationItem,
        "RemoveModificationItem", &ModificationSocketComponent::RemoveModificationItem
    );
    lua.new_usertype<DSRumbleEventComponent>("DSRumbleEventComponent",
        "StopRumbleEvent", &DSRumbleEventComponent::StopRumbleEvent,
        "StartRumbleEvent", &DSRumbleEventComponent::StartRumbleEvent
    );
    lua.new_usertype<WeatherSystem>("WeatherSystem",
        "ResetWeather", &WeatherSystem::ResetWeather,
        "SetWeatherOverride", &WeatherSystem::SetWeatherOverride,
        "GetConditions", &WeatherSystem::GetConditions,
        "GetIndoorClimateFraction", &WeatherSystem::GetIndoorClimateFraction
    );
    lua.new_usertype<DSNpcCombatSettings>("DSNpcCombatSettings",
        "SetSceneCombatSettings", &DSNpcCombatSettings::SetSceneCombatSettings,
        "SetCombatSettings", &DSNpcCombatSettings::SetCombatSettings,
        "ResetSceneCombatSettings", &DSNpcCombatSettings::ResetSceneCombatSettings
    );
    lua.new_usertype<ExtraArmorComponent>("ExtraArmorComponent",
        "InitExtraArmor", &ExtraArmorComponent::InitExtraArmor,
        "GetExtraArmor", &ExtraArmorComponent::GetExtraArmor
    );
    lua.new_usertype<EntityPlaceHolder>("EntityPlaceHolder",
        "GetEntity", &EntityPlaceHolder::GetEntity
    );
    lua.new_usertype<WwiseGroup>("WwiseGroup",
        "WwiseSetRTPCValueByPlayingIDExport", &WwiseGroup::WwiseSetRTPCValueByPlayingIDExport,
        "WwiseSetRTPCValueExport", &WwiseGroup::WwiseSetRTPCValueExport,
        "WwiseIsLoadingScreenExport", &WwiseGroup::WwiseIsLoadingScreenExport,
        "WwiseGetFootSoundToControllerSpeakerExport", &WwiseGroup::WwiseGetFootSoundToControllerSpeakerExport,
        "WwiseSetStateExport", &WwiseGroup::WwiseSetStateExport,
        "WwiseRtDbgPostEventByNameExport", &WwiseGroup::WwiseRtDbgPostEventByNameExport,
        "WwiseGetControllerSpeakerEnableExport", &WwiseGroup::WwiseGetControllerSpeakerEnableExport,
        "WwiseIsAliveExport", &WwiseGroup::WwiseIsAliveExport,
        "WwiseRtDbgGraphSoundResourceExport", &WwiseGroup::WwiseRtDbgGraphSoundResourceExport,
        "WwiseRtDbgUnregisterGameObjExport", &WwiseGroup::WwiseRtDbgUnregisterGameObjExport,
        "WwiseRtDbgPostEventExport", &WwiseGroup::WwiseRtDbgPostEventExport,
        "WwiseID_GetId", &WwiseGroup::WwiseID_GetId,
        "WwiseSetGlobalRTPCExport", &WwiseGroup::WwiseSetGlobalRTPCExport,
        "WwiseRtDbgSetPositionExport", &WwiseGroup::WwiseRtDbgSetPositionExport,
        "WwiseSetObjectObstructionAndOcclusionExport", &WwiseGroup::WwiseSetObjectObstructionAndOcclusionExport,
        "WwiseRtDbgRegisterGameObjExport", &WwiseGroup::WwiseRtDbgRegisterGameObjExport,
        "WwiseSetEventPauseExport", &WwiseGroup::WwiseSetEventPauseExport,
        "WwiseRtDbgPostEventWithCallbackExport", &WwiseGroup::WwiseRtDbgPostEventWithCallbackExport,
        "WwiseGetId", &WwiseGroup::WwiseGetId,
        "WwiseGetMasterVolumeExport", &WwiseGroup::WwiseGetMasterVolumeExport
    );
    lua.new_usertype<WaterInteractionSystem>("WaterInteractionSystem",
        "AddImpact", &WaterInteractionSystem::AddImpact
    );
    lua.new_usertype<MenuSaveDataDialog>("MenuSaveDataDialog",
        "DSCanSaveGame", &MenuSaveDataDialog::DSCanSaveGame,
        "IsSaveDataLoadingOrRequested", &MenuSaveDataDialog::IsSaveDataLoadingOrRequested,
        "SelectLoadSlot", &MenuSaveDataDialog::SelectLoadSlot,
        "SelectSaveSlot", &MenuSaveDataDialog::SelectSaveSlot,
        "DSSelectSaveSlot", &MenuSaveDataDialog::DSSelectSaveSlot,
        "CanSaveGame", &MenuSaveDataDialog::CanSaveGame
    );
    lua.new_usertype<SnowInteractionSystem>("SnowInteractionSystem",
        "sGetFollowPositionDeformation", &SnowInteractionSystem::sGetFollowPositionDeformation,
        "sSetMode", &SnowInteractionSystem::sSetMode,
        "sGetMode", &SnowInteractionSystem::sGetMode
    );
    lua.new_usertype<AIPatrolPath>("AIPatrolPath",
        "GetMovementContext", &AIPatrolPath::GetMovementContext,
        "GetAlertContextHint", &AIPatrolPath::GetAlertContextHint
    );
    lua.new_usertype<EquipmentSlotComponent>("EquipmentSlotComponent",
        "GetCurrentItem", &EquipmentSlotComponent::GetCurrentItem,
        "Equip", &EquipmentSlotComponent::Equip
    );
    lua.new_usertype<ExtraHealthComponent>("ExtraHealthComponent",
        "RemoveExtraHealth", &ExtraHealthComponent::RemoveExtraHealth
    );
    lua.new_usertype<DsNpcGeneralCommand>("DsNpcGeneralCommand",
        "ForceLowLodNpc", &DsNpcGeneralCommand::ForceLowLodNpc,
        "RemoveNpcFromWorld", &DsNpcGeneralCommand::RemoveNpcFromWorld,
        "RestartExternalAnimation", &DsNpcGeneralCommand::RestartExternalAnimation,
        "TeleportNpc", &DsNpcGeneralCommand::TeleportNpc,
        "AppearNpcToWorld", &DsNpcGeneralCommand::AppearNpcToWorld
    );
    lua.new_usertype<NPCScheduleManager>("NPCScheduleManager",
        "CreateNPCSchedule", &NPCScheduleManager::CreateNPCSchedule
    );
    lua.new_usertype<DSPatrolPathManager>("DSPatrolPathManager",
        "UpdatePatrolPathCache", &DSPatrolPathManager::UpdatePatrolPathCache,
        "ConnectSingleNPCWithPatrolPathGroup", &DSPatrolPathManager::ConnectSingleNPCWithPatrolPathGroup,
        "AssignPatrolPathToEntity", &DSPatrolPathManager::AssignPatrolPathToEntity,
        "EntityQuitPatrol", &DSPatrolPathManager::EntityQuitPatrol,
        "ClearPatrolPathCache", &DSPatrolPathManager::ClearPatrolPathCache,
        "ConnectNPCWithPatrolPath", &DSPatrolPathManager::ConnectNPCWithPatrolPath,
        "DisconnectNPCFromPatrolPath", &DSPatrolPathManager::DisconnectNPCFromPatrolPath,
        "ConnectSingleNPCWithPatrolPath", &DSPatrolPathManager::ConnectSingleNPCWithPatrolPath
    );
    lua.new_usertype<ScenePrefabInstance>("ScenePrefabInstance",
        "Stop", &ScenePrefabInstance::Stop,
        "IsRunning", &ScenePrefabInstance::IsRunning,
        "Start", &ScenePrefabInstance::Start,
        "GetInstantiatedScene", &ScenePrefabInstance::GetInstantiatedScene,
        "SetForcedActivation", &ScenePrefabInstance::SetForcedActivation
    );
    lua.new_usertype<SceneComponent>("SceneComponent",
        "GetRootScene", &SceneComponent::GetRootScene,
        "GetParentScene", &SceneComponent::GetParentScene,
        "GetScene", &SceneComponent::GetScene
    );
    lua.new_usertype<ComponentLifetimeComponent>("ComponentLifetimeComponent",
        "UnregisterComponent", &ComponentLifetimeComponent::UnregisterComponent,
        "RegisterComponent", &ComponentLifetimeComponent::RegisterComponent
    );
    lua.new_usertype<AIIndividualComponent>("AIIndividualComponent",
        "GetAIIndividual", &AIIndividualComponent::GetAIIndividual,
        "AlertForEntity", &AIIndividualComponent::AlertForEntity,
        "AlertForEntityWithPerfectThreatInfo", &AIIndividualComponent::AlertForEntityWithPerfectThreatInfo
    );
    lua.new_usertype<WeaponMode>("WeaponMode",
        "SetIncapacitated", &WeaponMode::SetIncapacitated
    );
    lua.new_usertype<KnockDownStateComponent>("KnockDownStateComponent",
        "Deactivate", &KnockDownStateComponent::Deactivate,
        "Activate", &KnockDownStateComponent::Activate,
        "DeactivateAll", &KnockDownStateComponent::DeactivateAll,
        "IsActive", &KnockDownStateComponent::IsActive,
        "ResetAll", &KnockDownStateComponent::ResetAll
    );
    lua.new_usertype<DamageOverTimeComponent>("DamageOverTimeComponent",
        "StartDamage", &DamageOverTimeComponent::StartDamage
    );
    lua.new_usertype<PinDownComponent>("PinDownComponent",
        "IsPinnedDown", &PinDownComponent::IsPinnedDown,
        "StartBreakFree", &PinDownComponent::StartBreakFree
    );
    lua.new_usertype<HumanoidController>("HumanoidController",
        "GetMove", &HumanoidController::GetMove
    );
    lua.new_usertype<HitReactionComponent>("HitReactionComponent",
        "ResetHitReaction", &HitReactionComponent::ResetHitReaction,
        "RemoveSeverityModifier", &HitReactionComponent::RemoveSeverityModifier,
        "ActivateReactionSet", &HitReactionComponent::ActivateReactionSet,
        "AddSeverityModifier", &HitReactionComponent::AddSeverityModifier
    );
    lua.new_usertype<AnimationData>("AnimationData",
        "MakeAdditive", &AnimationData::MakeAdditive,
        "StatesQueueEvalLogic", &AnimationData::StatesQueueEvalLogic,
        "BlendSyncTracks", &AnimationData::BlendSyncTracks,
        "StorePose", &AnimationData::StorePose,
        "StatesQueueUpdateTime", &AnimationData::StatesQueueUpdateTime,
        "BlendBuffers", &AnimationData::BlendBuffers,
        "OutputClosestAnimation", &AnimationData::OutputClosestAnimation,
        "PushActiveState", &AnimationData::PushActiveState,
        "ProbeActiveStates", &AnimationData::ProbeActiveStates,
        "ModifyJointTransform", &AnimationData::ModifyJointTransform,
        "ExtractSyncTracksFromAnim", &AnimationData::ExtractSyncTracksFromAnim,
        "ResolveJointID", &AnimationData::ResolveJointID,
        "SetBranchNameHash", &AnimationData::SetBranchNameHash,
        "PassThrough", &AnimationData::PassThrough,
        "ResetQueueOnActivation", &AnimationData::ResetQueueOnActivation,
        "GetTime", &AnimationData::GetTime,
        "ComputeClosestAnimation", &AnimationData::ComputeClosestAnimation,
        "UpdateEventMatching", &AnimationData::UpdateEventMatching,
        "SetFrameAndTime", &AnimationData::SetFrameAndTime,
        "BlendAnimationDataSources", &AnimationData::BlendAnimationDataSources,
        "SampleAnimation", &AnimationData::SampleAnimation,
        "TimeMapAnimation", &AnimationData::TimeMapAnimation,
        "ExtractJointInfo", &AnimationData::ExtractJointInfo,
        "CloneSyncTrackAndStretch", &AnimationData::CloneSyncTrackAndStretch,
        "GetPose", &AnimationData::GetPose,
        "IsAnimationEventActive", &AnimationData::IsAnimationEventActive,
        "RemoveActiveStates", &AnimationData::RemoveActiveStates,
        "RecycleActiveStatesQueue", &AnimationData::RecycleActiveStatesQueue,
        "SetCurrentStateEventSpaceTimeInSMContext", &AnimationData::SetCurrentStateEventSpaceTimeInSMContext
    );
    lua.new_usertype<EntityArrayComponent>("EntityArrayComponent",
        "GetEntity", &EntityArrayComponent::GetEntity,
        "RemoveEntity", &EntityArrayComponent::RemoveEntity,
        "GetEntityCount", &EntityArrayComponent::GetEntityCount,
        "ClearEntities", &EntityArrayComponent::ClearEntities,
        "AddEntity", &EntityArrayComponent::AddEntity
    );
    lua.new_usertype<AIObserverComponent>("AIObserverComponent",
        "GetObserverTransform", &AIObserverComponent::GetObserverTransform
    );
    lua.new_usertype<ThirdPersonPlayerCameraComponent>("ThirdPersonPlayerCameraComponent",
        "GetCurrCameraMode", &ThirdPersonPlayerCameraComponent::GetCurrCameraMode,
        "GetPrevCameraMode", &ThirdPersonPlayerCameraComponent::GetPrevCameraMode
    );
    lua.new_usertype<DSEffectsNodeGraphBindings>("DSEffectsNodeGraphBindings",
        "GetGlobalStateFloat", &DSEffectsNodeGraphBindings::GetGlobalStateFloat,
        "IsIntersectOrientedBox", &DSEffectsNodeGraphBindings::IsIntersectOrientedBox,
        "SetGlobalStateFloat", &DSEffectsNodeGraphBindings::SetGlobalStateFloat,
        "SetGlobalStateBool", &DSEffectsNodeGraphBindings::SetGlobalStateBool,
        "IsInClosestCrater", &DSEffectsNodeGraphBindings::IsInClosestCrater,
        "DSFindClosestPoint", &DSEffectsNodeGraphBindings::DSFindClosestPoint,
        "DSSendParticleSystemExternalSizeFromObjectCollection", &DSEffectsNodeGraphBindings::DSSendParticleSystemExternalSizeFromObjectCollection,
        "GlobalStateAtomicAddInt", &DSEffectsNodeGraphBindings::GlobalStateAtomicAddInt,
        "GetGlobalStateBool", &DSEffectsNodeGraphBindings::GetGlobalStateBool,
        "SetGlobalStateInt", &DSEffectsNodeGraphBindings::SetGlobalStateInt,
        "DSCreateImpactEffect", &DSEffectsNodeGraphBindings::DSCreateImpactEffect,
        "IsTileEdge", &DSEffectsNodeGraphBindings::IsTileEdge,
        "DSFindClosestPointFromObjectCollection", &DSEffectsNodeGraphBindings::DSFindClosestPointFromObjectCollection,
        "GetGlobalStateInt", &DSEffectsNodeGraphBindings::GetGlobalStateInt,
        "GlobalStateAtomicAddFloat", &DSEffectsNodeGraphBindings::GlobalStateAtomicAddFloat
    );
    lua.new_usertype<DSTerminalGraphEvaluationArgs>("DSTerminalGraphEvaluationArgs",
        "GetMissionId", &DSTerminalGraphEvaluationArgs::GetMissionId,
        "GetEvaluationActingType", &DSTerminalGraphEvaluationArgs::GetEvaluationActingType,
        "GetEvaluationLength", &DSTerminalGraphEvaluationArgs::GetEvaluationLength,
        "FindEvaluation", &DSTerminalGraphEvaluationArgs::FindEvaluation,
        "GetSubEvaluation", &DSTerminalGraphEvaluationArgs::GetSubEvaluation,
        "GetMainEvaluation", &DSTerminalGraphEvaluationArgs::GetMainEvaluation,
        "GetEvaluationType", &DSTerminalGraphEvaluationArgs::GetEvaluationType
    );
    lua.new_usertype<DSMissionAbstractTodoNodeResource>("DSMissionAbstractTodoNodeResource",
        "RemindTodo", &DSMissionAbstractTodoNodeResource::RemindTodo,
        "RevealTodo", &DSMissionAbstractTodoNodeResource::RevealTodo,
        "MarkTodoAsCompleted", &DSMissionAbstractTodoNodeResource::MarkTodoAsCompleted,
        "MarkTodoAsDiscarded", &DSMissionAbstractTodoNodeResource::MarkTodoAsDiscarded,
        "MarkTodoAsFailed", &DSMissionAbstractTodoNodeResource::MarkTodoAsFailed
    );
    lua.new_usertype<DSLikeCommand>("DSLikeCommand",
        "ReceiveLikeFromMajorMember", &DSLikeCommand::ReceiveLikeFromMajorMember,
        "ReceiveLike", &DSLikeCommand::ReceiveLike,
        "ReceiveLikeWithOption", &DSLikeCommand::ReceiveLikeWithOption
    );
    lua.new_usertype<ControlledEntity>("ControlledEntity",
        "GetTargetEntity", &ControlledEntity::GetTargetEntity,
        "GetAIIndividual", &ControlledEntity::GetAIIndividual,
        "IsBoundToSequence", &ControlledEntity::IsBoundToSequence,
        "IsLocalPlayer", &ControlledEntity::IsLocalPlayer,
        "IsGodMode", &ControlledEntity::IsGodMode,
        "GetController", &ControlledEntity::GetController
    );
    lua.new_usertype<DSCreateMissionBaggageNodeCommand>("DSCreateMissionBaggageNodeCommand",
        "RequestCreateMissionExtraBaggage", &DSCreateMissionBaggageNodeCommand::RequestCreateMissionExtraBaggage,
        "CreateMissionBaggages", &DSCreateMissionBaggageNodeCommand::CreateMissionBaggages,
        "CreateBonusBaggageOnShelf", &DSCreateMissionBaggageNodeCommand::CreateBonusBaggageOnShelf
    );
    lua.new_usertype<DSTerminalGraphBonusArgs>("DSTerminalGraphBonusArgs",
        "IsStarMark", &DSTerminalGraphBonusArgs::IsStarMark,
        "IsSimpleBonus", &DSTerminalGraphBonusArgs::IsSimpleBonus,
        "NeedsExceptionalProcess", &DSTerminalGraphBonusArgs::NeedsExceptionalProcess,
        "GetBaggageListItem", &DSTerminalGraphBonusArgs::GetBaggageListItem,
        "GetMissionId", &DSTerminalGraphBonusArgs::GetMissionId
    );
    lua.new_usertype<AIManager>("AIManager",
        "CreateAuralStimulus", &AIManager::CreateAuralStimulus,
        "CreateVisualStimulus", &AIManager::CreateVisualStimulus
    );
    lua.new_usertype<AINavMeshComponent>("AINavMeshComponent",
        "FindPositionOnNavMeshBySettings", &AINavMeshComponent::FindPositionOnNavMeshBySettings,
        "FindPositionOnNavMesh", &AINavMeshComponent::FindPositionOnNavMesh
    );
    lua.new_usertype<HairModelComponent>("HairModelComponent",
        "SetHairSimProperties", &HairModelComponent::SetHairSimProperties,
        "SetHairPose", &HairModelComponent::SetHairPose
    );
    lua.new_usertype<ConstraintComponent>("ConstraintComponent",
        "Create", &ConstraintComponent::Create
    );
    lua.new_usertype<SequenceNetworkInstance>("SequenceNetworkInstance",
        "IsSequenceSkipped", &SequenceNetworkInstance::IsSequenceSkipped,
        "GetNodeTime", &SequenceNetworkInstance::GetNodeTime,
        "GetSequenceNetworkEntity", &SequenceNetworkInstance::GetSequenceNetworkEntity,
        "ForceCameraPredictionByUUID", &SequenceNetworkInstance::ForceCameraPredictionByUUID,
        "GetEntityVariable", &SequenceNetworkInstance::GetEntityVariable,
        "ForceCameraPrediction", &SequenceNetworkInstance::ForceCameraPrediction,
        "SetEntityVariable", &SequenceNetworkInstance::SetEntityVariable,
        "Stop", &SequenceNetworkInstance::Stop,
        "Start", &SequenceNetworkInstance::Start
    );
    lua.new_usertype<RouteMover>("RouteMover",
        "SetRoute", &RouteMover::SetRoute,
        "SetRelativeDistance", &RouteMover::SetRelativeDistance,
        "GetRoute", &RouteMover::GetRoute,
        "MoveAlongRoute", &RouteMover::MoveAlongRoute,
        "GetRelativeDistance", &RouteMover::GetRelativeDistance,
        "GetDistance", &RouteMover::GetDistance,
        "SetDistance", &RouteMover::SetDistance,
        "GetSpeed", &RouteMover::GetSpeed,
        "SetSpeed", &RouteMover::SetSpeed
    );
    lua.new_usertype<DSFiringRangeNodeGraphBindings>("DSFiringRangeNodeGraphBindings",
        "SetFiringRangeMissionInitialCarriedWeapon", &DSFiringRangeNodeGraphBindings::SetFiringRangeMissionInitialCarriedWeapon,
        "SetFiringRangeMissionInitialItem", &DSFiringRangeNodeGraphBindings::SetFiringRangeMissionInitialItem,
        "StartFiringRangeMissionResult", &DSFiringRangeNodeGraphBindings::StartFiringRangeMissionResult,
        "SetStartTransform", &DSFiringRangeNodeGraphBindings::SetStartTransform,
        "NotifyFiringRangeMissionGoal", &DSFiringRangeNodeGraphBindings::NotifyFiringRangeMissionGoal,
        "SetFiringRangeMissionInitialSuitParts", &DSFiringRangeNodeGraphBindings::SetFiringRangeMissionInitialSuitParts,
        "SetFiringRangeMissionInitialWeapon", &DSFiringRangeNodeGraphBindings::SetFiringRangeMissionInitialWeapon,
        "CheckFiringRangeMissionClearCondition", &DSFiringRangeNodeGraphBindings::CheckFiringRangeMissionClearCondition,
        "StartFiringRangeMission", &DSFiringRangeNodeGraphBindings::StartFiringRangeMission,
        "IsFiringRangeMission", &DSFiringRangeNodeGraphBindings::IsFiringRangeMission,
        "SetStartLocator", &DSFiringRangeNodeGraphBindings::SetStartLocator
    );
    lua.new_usertype<DSGraphCtrlBaggageArgs>("DSGraphCtrlBaggageArgs",
        "GetBaggageGameActorIds", &DSGraphCtrlBaggageArgs::GetBaggageGameActorIds
    );
    lua.new_usertype<CurveResource>("CurveResource",
        "GetCurveRange", &CurveResource::GetCurveRange,
        "Evaluate", &CurveResource::Evaluate,
        "GetCurveTangents", &CurveResource::GetCurveTangents
    );
    lua.new_usertype<DSOrderedBaggageArgs>("DSOrderedBaggageArgs",
        "GetBaggageListItemNameCode", &DSOrderedBaggageArgs::GetBaggageListItemNameCode
    );
    lua.new_usertype<StringToolsGroup>("StringToolsGroup",
        "sFormatHelperInt64", &StringToolsGroup::sFormatHelperInt64,
        "sFormatHelperDoubleCustomFormat", &StringToolsGroup::sFormatHelperDoubleCustomFormat,
        "sFormatHelperFloat", &StringToolsGroup::sFormatHelperFloat,
        "sHexToByte", &StringToolsGroup::sHexToByte,
        "sFormatHelperDouble", &StringToolsGroup::sFormatHelperDouble,
        "sFormatHelperFloatCustomFormat", &StringToolsGroup::sFormatHelperFloatCustomFormat,
        "sFormatHelperUInt64", &StringToolsGroup::sFormatHelperUInt64,
        "sFormatHelperUInt32", &StringToolsGroup::sFormatHelperUInt32,
        "sFormatHelperInt32", &StringToolsGroup::sFormatHelperInt32,
        "sFormatHelperUInt", &StringToolsGroup::sFormatHelperUInt,
        "sFormatHelperInt", &StringToolsGroup::sFormatHelperInt
    );
    lua.new_usertype<ArtPartsData>("ArtPartsData",
        "SetEnableModelPart", &ArtPartsData::SetEnableModelPart,
        "IsValidModelPart", &ArtPartsData::IsValidModelPart,
        "SetShaderVariableAsVec3", &ArtPartsData::SetShaderVariableAsVec3,
        "SetShaderVariableAsFloat", &ArtPartsData::SetShaderVariableAsFloat
    );
    lua.new_usertype<DSMissionEvaluationDataTable>("DSMissionEvaluationDataTable",
        "GetDataRecord", &DSMissionEvaluationDataTable::GetDataRecord,
        "GetDataRecordsLength", &DSMissionEvaluationDataTable::GetDataRecordsLength,
        "GetMinThreshold", &DSMissionEvaluationDataTable::GetMinThreshold,
        "MaxEvaluation", &DSMissionEvaluationDataTable::MaxEvaluation,
        "CalculationEvaluation", &DSMissionEvaluationDataTable::CalculationEvaluation,
        "GetMaxThreshold", &DSMissionEvaluationDataTable::GetMaxThreshold,
        "MinEvaluation", &DSMissionEvaluationDataTable::MinEvaluation
    );
    lua.new_usertype<SpawnSetup>("SpawnSetup",
        "CreateEntityFromSpawnSetup", &SpawnSetup::CreateEntityFromSpawnSetup
    );
    lua.new_usertype<SoundEnvironment>("SoundEnvironment",
        "GetRandomSounds", &SoundEnvironment::GetRandomSounds,
        "GetDensityAtListener", &SoundEnvironment::GetDensityAtListener,
        "GetSound", &SoundEnvironment::GetSound,
        "GetSoundSpawnThreshold", &SoundEnvironment::GetSoundSpawnThreshold,
        "GetSoundCount", &SoundEnvironment::GetSoundCount,
        "GetMaxSoundsPerSpawnPoint", &SoundEnvironment::GetMaxSoundsPerSpawnPoint,
        "GetSoundSpawnCountFactor", &SoundEnvironment::GetSoundSpawnCountFactor,
        "SetDensity", &SoundEnvironment::SetDensity,
        "GetDensityAtSamplePoint", &SoundEnvironment::GetDensityAtSamplePoint
    );
    lua.new_usertype<PlayerProfile>("PlayerProfile",
        "Save", &PlayerProfile::Save,
        "IsGameFinished", &PlayerProfile::IsGameFinished,
        "SetGameFinished", &PlayerProfile::SetGameFinished
    );
    lua.new_usertype<TetheredAmmoPileComponent>("TetheredAmmoPileComponent",
        "GetTetherState", &TetheredAmmoPileComponent::GetTetherState
    );
    lua.new_usertype<SoundSystem>("SoundSystem",
        "GetSubmixOutputLevel", &SoundSystem::GetSubmixOutputLevel,
        "OverrideReverbZone", &SoundSystem::OverrideReverbZone,
        "GetAudioOutState", &SoundSystem::GetAudioOutState,
        "OverrideMixZone", &SoundSystem::OverrideMixZone,
        "GetHDRWindowSettings", &SoundSystem::GetHDRWindowSettings,
        "SetHDRWindowSettings", &SoundSystem::SetHDRWindowSettings,
        "GetObstructionRowStatistics", &SoundSystem::GetObstructionRowStatistics
    );
    lua.new_usertype<DSDeliveryPointInfoCommand>("DSDeliveryPointInfoCommand",
        "SetDeliveryPointAvailabilityDetail", &DSDeliveryPointInfoCommand::SetDeliveryPointAvailabilityDetail,
        "SetBonusBaggageTypeHash", &DSDeliveryPointInfoCommand::SetBonusBaggageTypeHash,
        "SetDeliveryPointAvailability", &DSDeliveryPointInfoCommand::SetDeliveryPointAvailability,
        "GetDeliveryPointIdFromMissionId", &DSDeliveryPointInfoCommand::GetDeliveryPointIdFromMissionId,
        "GetTypeFromDeliveryPointInfoId", &DSDeliveryPointInfoCommand::GetTypeFromDeliveryPointInfoId,
        "CheckDeliveryPointAvailable", &DSDeliveryPointInfoCommand::CheckDeliveryPointAvailable,
        "GetTypeFromDeliveryPointInfo", &DSDeliveryPointInfoCommand::GetTypeFromDeliveryPointInfo
    );
    lua.new_usertype<DsNpcManager>("DsNpcManager",
        "SetNpcIndividualPhase", &DsNpcManager::SetNpcIndividualPhase
    );
    lua.new_usertype<DSMissionOpenCondition>("DSMissionOpenCondition",
        "GetLogicBlock", &DSMissionOpenCondition::GetLogicBlock,
        "GetOpenLists", &DSMissionOpenCondition::GetOpenLists
    );
    lua.new_usertype<DSMissionOpenNode>("DSMissionOpenNode",
        "SetTemporaryMissionOpenState", &DSMissionOpenNode::SetTemporaryMissionOpenState,
        "OpenMissions", &DSMissionOpenNode::OpenMissions,
        "CountCompletedMissions", &DSMissionOpenNode::CountCompletedMissions,
        "CheckMissionOpenState", &DSMissionOpenNode::CheckMissionOpenState,
        "CheckCompletedMissions", &DSMissionOpenNode::CheckCompletedMissions,
        "CheckCompletedCondition", &DSMissionOpenNode::CheckCompletedCondition,
        "SetNotAvailableMission", &DSMissionOpenNode::SetNotAvailableMission
    );
    lua.new_usertype<CubemapbakeOnly>("CubemapbakeOnly",
        "GetCubemapbakeOnlyFlag", &CubemapbakeOnly::GetCubemapbakeOnlyFlag
    );
    lua.new_usertype<DSMissionGraphService>("DSMissionGraphService",
        "CallOtherGraph", &DSMissionGraphService::CallOtherGraph,
        "CallByMissionResource", &DSMissionGraphService::CallByMissionResource,
        "CreateGraphServiceArg", &DSMissionGraphService::CreateGraphServiceArg,
        "CallByMissionId", &DSMissionGraphService::CallByMissionId
    );
    lua.new_usertype<DSWeaponSystem>("DSWeaponSystem",
        "IntToWeaponId", &DSWeaponSystem::IntToWeaponId,
        "IsKillingAmmo", &DSWeaponSystem::IsKillingAmmo,
        "CanUseInsideDeliveryTerminalArea", &DSWeaponSystem::CanUseInsideDeliveryTerminalArea,
        "RefreshPrivateRoomWeaponShelf", &DSWeaponSystem::RefreshPrivateRoomWeaponShelf,
        "IntToAmmoId", &DSWeaponSystem::IntToAmmoId,
        "IntToSuitPartsId", &DSWeaponSystem::IntToSuitPartsId,
        "IntToItemId", &DSWeaponSystem::IntToItemId,
        "IntToMagazineId", &DSWeaponSystem::IntToMagazineId
    );
    lua.new_usertype<DiscoverableAreaInstance>("DiscoverableAreaInstance",
        "SetMarkedByPlayer", &DiscoverableAreaInstance::SetMarkedByPlayer
    );
    lua.new_usertype<DSShellLauncherGameActorLocator>("DSShellLauncherGameActorLocator",
        "LaunchVolleyEntity", &DSShellLauncherGameActorLocator::LaunchVolleyEntity,
        "SetActivated", &DSShellLauncherGameActorLocator::SetActivated,
        "SetTargetRadius", &DSShellLauncherGameActorLocator::SetTargetRadius,
        "SetTargetPosition", &DSShellLauncherGameActorLocator::SetTargetPosition,
        "LaunchStraightVolley", &DSShellLauncherGameActorLocator::LaunchStraightVolley,
        "LaunchVolley", &DSShellLauncherGameActorLocator::LaunchVolley,
        "SetTargetEntity", &DSShellLauncherGameActorLocator::SetTargetEntity
    );
    lua.new_usertype<SimplePathMover>("SimplePathMover",
        "MoveToWorldTransform", &SimplePathMover::MoveToWorldTransform,
        "MoveToWorldTransformOverTime", &SimplePathMover::MoveToWorldTransformOverTime
    );
    lua.new_usertype<SpawnpointGame>("SpawnpointGame",
        "GetStartSequenceNetworkEntity", &SpawnpointGame::GetStartSequenceNetworkEntity
    );
    lua.new_usertype<EnvironmentSound>("EnvironmentSound",
        "SetLastSpawnDistance", &EnvironmentSound::SetLastSpawnDistance,
        "GetProperties", &EnvironmentSound::GetProperties,
        "GetLastSpawnDistance", &EnvironmentSound::GetLastSpawnDistance
    );
    lua.new_usertype<DHighwaySyncControlCommand>("DHighwaySyncControlCommand",
        "UpdateSyncControlParams", &DHighwaySyncControlCommand::UpdateSyncControlParams
    );
    lua.new_usertype<DSSound>("DSSound",
        "GetCraterInfluenceOnPlayerExport", &DSSound::GetCraterInfluenceOnPlayerExport,
        "GetAngleFromPlayerToListenerExport", &DSSound::GetAngleFromPlayerToListenerExport,
        "IsPlayerCloseToCliffExport", &DSSound::IsPlayerCloseToCliffExport
    );
    lua.new_usertype<DSDeliveryBotGameActor>("DSDeliveryBotGameActor",
        "CheckDeliveryBotAIMode", &DSDeliveryBotGameActor::CheckDeliveryBotAIMode,
        "CheckDeliveryBotRidingAIMode", &DSDeliveryBotGameActor::CheckDeliveryBotRidingAIMode,
        "GetDeliveryBotsInCurrentArea", &DSDeliveryBotGameActor::GetDeliveryBotsInCurrentArea,
        "ForceVisibleDeliveryBot", &DSDeliveryBotGameActor::ForceVisibleDeliveryBot,
        "GetAppearingDeliveryBotDistanceForCutscene", &DSDeliveryBotGameActor::GetAppearingDeliveryBotDistanceForCutscene,
        "ForceCompleteAllDeliveries", &DSDeliveryBotGameActor::ForceCompleteAllDeliveries,
        "StowDeliveryBot", &DSDeliveryBotGameActor::StowDeliveryBot,
        "DeactivateDeliveryBot", &DSDeliveryBotGameActor::DeactivateDeliveryBot,
        "ActivateDeliveryBot", &DSDeliveryBotGameActor::ActivateDeliveryBot,
        "CheckDeliveryBotDockingLocation", &DSDeliveryBotGameActor::CheckDeliveryBotDockingLocation,
        "IsPlayerRiding", &DSDeliveryBotGameActor::IsPlayerRiding
    );
    lua.new_usertype<AIFaction>("AIFaction",
        "IsHostileTowards", &AIFaction::IsHostileTowards
    );
    lua.new_usertype<CraftingRecipe>("CraftingRecipe",
        "GetMissingIngredientCount", &CraftingRecipe::GetMissingIngredientCount,
        "IsMissingIngredient", &CraftingRecipe::IsMissingIngredient
    );
    lua.new_usertype<DamageTypeGroup>("DamageTypeGroup",
        "Contains", &DamageTypeGroup::Contains
    );
    lua.new_usertype<DSCountTimerBase>("DSCountTimerBase",
        "FindDSCountTimerFromHashCode", &DSCountTimerBase::FindDSCountTimerFromHashCode,
        "GetDSCountTimerHashCode", &DSCountTimerBase::GetDSCountTimerHashCode,
        "SetCurrentTimeSecondsF", &DSCountTimerBase::SetCurrentTimeSecondsF,
        "GetCurrentTimeSecondsF", &DSCountTimerBase::GetCurrentTimeSecondsF,
        "Pause", &DSCountTimerBase::Pause,
        "Reset", &DSCountTimerBase::Reset,
        "Start", &DSCountTimerBase::Start
    );
    lua.new_usertype<DSOnlineMissionCommand>("DSOnlineMissionCommand",
        "ApplyPreparationItemsForLastStranding", &DSOnlineMissionCommand::ApplyPreparationItemsForLastStranding,
        "ApplyPreparationItemsForTarget", &DSOnlineMissionCommand::ApplyPreparationItemsForTarget
    );
    lua.new_usertype<WaterDetectionComponent>("WaterDetectionComponent",
        "IsInDSWater", &WaterDetectionComponent::IsInDSWater,
        "IsInWater", &WaterDetectionComponent::IsInWater
    );
    lua.new_usertype<DSSoundNodeGraphBindings>("DSSoundNodeGraphBindings",
        "SetMusicPlayerCutscenePause", &DSSoundNodeGraphBindings::SetMusicPlayerCutscenePause,
        "GetCutsceneSkipMute", &DSSoundNodeGraphBindings::GetCutsceneSkipMute,
        "SetMusicPlayerCutsceneResume", &DSSoundNodeGraphBindings::SetMusicPlayerCutsceneResume,
        "GetCutsceneSoundPlaying", &DSSoundNodeGraphBindings::GetCutsceneSoundPlaying,
        "GetFadeStateForSound", &DSSoundNodeGraphBindings::GetFadeStateForSound
    );
    lua.new_usertype<Landmark>("Landmark",
        "IsEnabled", &Landmark::IsEnabled,
        "SetEnabled", &Landmark::SetEnabled
    );
    lua.new_usertype<GameMovie>("GameMovie",
        "PlayMovieAndTeleport", &GameMovie::PlayMovieAndTeleport,
        "PlayMovie", &GameMovie::PlayMovie
    );
    lua.new_usertype<DSGazerManagerCommand>("DSGazerManagerCommand",
        "IsGazerNoticingPlayer", &DSGazerManagerCommand::IsGazerNoticingPlayer,
        "ResetAllGazers", &DSGazerManagerCommand::ResetAllGazers,
        "GetUUIDHashOfGazerScene", &DSGazerManagerCommand::GetUUIDHashOfGazerScene,
        "EnableRespawnGazers", &DSGazerManagerCommand::EnableRespawnGazers
    );
    lua.new_usertype<AnnotationComponent>("AnnotationComponent",
        "FindAnnotationInstanceByResourceUUID", &AnnotationComponent::FindAnnotationInstanceByResourceUUID,
        "EnableAllAnnotations", &AnnotationComponent::EnableAllAnnotations
    );
    lua.new_usertype<SequenceComponent>("SequenceComponent",
        "GetSequenceStopFrameNumber", &SequenceComponent::GetSequenceStopFrameNumber,
        "GetSceneFromEntityBoundToSequence", &SequenceComponent::GetSceneFromEntityBoundToSequence,
        "GetSequenceCurrentFrameNumber", &SequenceComponent::GetSequenceCurrentFrameNumber,
        "GetSequenceNextFrameNumber", &SequenceComponent::GetSequenceNextFrameNumber
    );
    lua.new_usertype<MeleeWeaponMode>("MeleeWeaponMode",
        "StopAttack", &MeleeWeaponMode::StopAttack
    );
    lua.new_usertype<DSMissionSafetyHouseCommand>("DSMissionSafetyHouseCommand",
        "DSCallDefaultPrivateRoomGraph", &DSMissionSafetyHouseCommand::DSCallDefaultPrivateRoomGraph,
        "IsDisableLeavePrivateRoomInfoLogs", &DSMissionSafetyHouseCommand::IsDisableLeavePrivateRoomInfoLogs,
        "DSClearNotNeededInfoLogWhenLeavePrivateRoom", &DSMissionSafetyHouseCommand::DSClearNotNeededInfoLogWhenLeavePrivateRoom,
        "DSTelemetryEnterPrivateRoomOnlyEVorTR", &DSMissionSafetyHouseCommand::DSTelemetryEnterPrivateRoomOnlyEVorTR,
        "DSGetPrivateRoomDeltaTime", &DSMissionSafetyHouseCommand::DSGetPrivateRoomDeltaTime,
        "DSWakeupHeartmanRoomState", &DSMissionSafetyHouseCommand::DSWakeupHeartmanRoomState,
        "DSWakeupPrivateRoomStateById", &DSMissionSafetyHouseCommand::DSWakeupPrivateRoomStateById,
        "DSWakeupPrivateRoomState", &DSMissionSafetyHouseCommand::DSWakeupPrivateRoomState
    );
    lua.new_usertype<CPUProfileWindow>("CPUProfileWindow",
        "sCaptureFrames", &CPUProfileWindow::sCaptureFrames
    );
    lua.new_usertype<GrenadeTriggerComponent>("GrenadeTriggerComponent",
        "GetContactTriggerNormal", &GrenadeTriggerComponent::GetContactTriggerNormal,
        "GetContactTriggerEntity", &GrenadeTriggerComponent::GetContactTriggerEntity,
        "GetContactTriggerPosition", &GrenadeTriggerComponent::GetContactTriggerPosition,
        "GetContactTriggerModelPartIndex", &GrenadeTriggerComponent::GetContactTriggerModelPartIndex,
        "WasTriggeredByContact", &GrenadeTriggerComponent::WasTriggeredByContact
    );
    lua.new_usertype<AttachToHelperMover>("AttachToHelperMover",
        "Create", &AttachToHelperMover::Create
    );
    lua.new_usertype<ShieldComponent>("ShieldComponent",
        "GetShieldInfo", &ShieldComponent::GetShieldInfo
    );
    lua.new_usertype<DSWelcomeHoloComponent>("DSWelcomeHoloComponent",
        "StartVisibleWelcomeHolo", &DSWelcomeHoloComponent::StartVisibleWelcomeHolo,
        "SetAnimationDistanceSetting", &DSWelcomeHoloComponent::SetAnimationDistanceSetting,
        "SetNotEchoTargetWelcomeHolo", &DSWelcomeHoloComponent::SetNotEchoTargetWelcomeHolo,
        "SetAnimationSyncSetWelcomeHolo", &DSWelcomeHoloComponent::SetAnimationSyncSetWelcomeHolo,
        "StartInvisibleWelcomeHolo", &DSWelcomeHoloComponent::StartInvisibleWelcomeHolo
    );
    lua.new_usertype<UTFToolsGroup>("UTFToolsGroup",
        "sDecodeUTF8", &UTFToolsGroup::sDecodeUTF8,
        "sEncodeUTF8", &UTFToolsGroup::sEncodeUTF8
    );
    lua.new_usertype<DSDeliverySurveyCommand>("DSDeliverySurveyCommand",
        "GetMissionDeliveredCountBySpecialRule", &DSDeliverySurveyCommand::GetMissionDeliveredCountBySpecialRule,
        "StopSwitchingPlayerTriggerBoxForPrivateRoom", &DSDeliverySurveyCommand::StopSwitchingPlayerTriggerBoxForPrivateRoom,
        "GetTotalDeliveryBaggageCountOnSurvey", &DSDeliverySurveyCommand::GetTotalDeliveryBaggageCountOnSurvey
    );
    lua.new_usertype<WorldEncounterManager>("WorldEncounterManager",
        "StopAllWorldEncounters", &WorldEncounterManager::StopAllWorldEncounters
    );
    lua.new_usertype<DSMissionCollectorsItemCommand>("DSMissionCollectorsItemCommand",
        "Given", &DSMissionCollectorsItemCommand::Given,
        "PickingUp", &DSMissionCollectorsItemCommand::PickingUp,
        "IsDonatedAllMemoryChip", &DSMissionCollectorsItemCommand::IsDonatedAllMemoryChip,
        "Donated", &DSMissionCollectorsItemCommand::Donated
    );
    lua.new_usertype<DSDeliveryManager>("DSDeliveryManager",
        "SendCommand", &DSDeliveryManager::SendCommand
    );
    lua.new_usertype<AttachedLightsComponent>("AttachedLightsComponent",
        "SetColor", &AttachedLightsComponent::SetColor,
        "SetIntensityMultiplier", &AttachedLightsComponent::SetIntensityMultiplier
    );
    lua.new_usertype<DSMissionEvaluationDataTablesByThreshold>("DSMissionEvaluationDataTablesByThreshold",
        "GetMinThreshold", &DSMissionEvaluationDataTablesByThreshold::GetMinThreshold,
        "GetMaxThreshold", &DSMissionEvaluationDataTablesByThreshold::GetMaxThreshold,
        "MaxEvaluationDataTable", &DSMissionEvaluationDataTablesByThreshold::MaxEvaluationDataTable,
        "MinEvaluationDataTable", &DSMissionEvaluationDataTablesByThreshold::MinEvaluationDataTable,
        "FindEvaluationDataTable", &DSMissionEvaluationDataTablesByThreshold::FindEvaluationDataTable
    );
    lua.new_usertype<InventoryWeapon>("InventoryWeapon",
        "GetChargeFraction", &InventoryWeapon::GetChargeFraction,
        "GetRounds", &InventoryWeapon::GetRounds,
        "GetRoundsInMagazine", &InventoryWeapon::GetRoundsInMagazine
    );
    lua.new_usertype<DSNpcAlertZone>("DSNpcAlertZone",
        "SetAlertZone", &DSNpcAlertZone::SetAlertZone,
        "ClearAlertZone", &DSNpcAlertZone::ClearAlertZone
    );
    lua.new_usertype<ChildEntityComponent>("ChildEntityComponent",
        "GetChild", &ChildEntityComponent::GetChild
    );
    lua.new_usertype<TagEvent>("TagEvent",
        "SetHandled", &TagEvent::SetHandled
    );
    lua.new_usertype<EconomyManagerResource>("EconomyManagerResource",
        "GetAmountInPlayerInventory", &EconomyManagerResource::GetAmountInPlayerInventory,
        "GetCurrencyItemResource", &EconomyManagerResource::GetCurrencyItemResource
    );
    lua.new_usertype<AIHTNPlannerDaemonPositionPicker>("AIHTNPlannerDaemonPositionPicker",
        "FindPositionInAttackRange", &AIHTNPlannerDaemonPositionPicker::FindPositionInAttackRange
    );
    lua.new_usertype<CollectableManager>("CollectableManager",
        "SetCollectableUnlocked", &CollectableManager::SetCollectableUnlocked,
        "IsCollectableForEntityResourceUnlocked", &CollectableManager::IsCollectableForEntityResourceUnlocked,
        "SetCollectableForEntityResourceUnlocked", &CollectableManager::SetCollectableForEntityResourceUnlocked,
        "IsCollectableUnlocked", &CollectableManager::IsCollectableUnlocked
    );
    lua.new_usertype<CrowdMember>("CrowdMember",
        "SetCarryingCrate", &CrowdMember::SetCarryingCrate,
        "SetSleepingIndoors", &CrowdMember::SetSleepingIndoors
    );
    lua.new_usertype<StaminaComponent>("StaminaComponent",
        "RemoveModifier", &StaminaComponent::RemoveModifier,
        "GetStamina", &StaminaComponent::GetStamina,
        "AddModifier", &StaminaComponent::AddModifier,
        "UseStamina", &StaminaComponent::UseStamina
    );
    lua.new_usertype<MaterialTypeResource>("MaterialTypeResource",
        "IsKindOf", &MaterialTypeResource::IsKindOf
    );
    lua.new_usertype<MonitoredAnimationComponent>("MonitoredAnimationComponent",
        "GetMonitoredAnimationTarget", &MonitoredAnimationComponent::GetMonitoredAnimationTarget
    );
    lua.new_usertype<ObjectCollection>("ObjectCollection",
        "GetObject", &ObjectCollection::GetObject,
        "GetObjectCount", &ObjectCollection::GetObjectCount
    );
    lua.new_usertype<GroundToAirTransitionComponent>("GroundToAirTransitionComponent",
        "GetAirTransitionState", &GroundToAirTransitionComponent::GetAirTransitionState
    );
    lua.new_usertype<LocalizedTextResource>("LocalizedTextResource",
        "GetInstance", &LocalizedTextResource::GetInstance
    );
    lua.new_usertype<ResourceSet>("ResourceSet",
        "FindResource", &ResourceSet::FindResource
    );
    lua.new_usertype<SkinnedModel>("SkinnedModel",
        "SetPBDMaxDistanceMultiplier", &SkinnedModel::SetPBDMaxDistanceMultiplier
    );
    lua.new_usertype<DSFixedGunHeatComponent>("DSFixedGunHeatComponent",
        "IsOverheating", &DSFixedGunHeatComponent::IsOverheating,
        "GetRecoverOverheatThreshold", &DSFixedGunHeatComponent::GetRecoverOverheatThreshold,
        "GetOverheatThreshold", &DSFixedGunHeatComponent::GetOverheatThreshold,
        "GetCurrentHeat", &DSFixedGunHeatComponent::GetCurrentHeat
    );
    lua.new_usertype<Scene>("Scene",
        "StopSceneScriptOnEntity", &Scene::StopSceneScriptOnEntity,
        "SetForcedActivation", &Scene::SetForcedActivation,
        "Start", &Scene::Start,
        "GetCurrentSceneEntity", &Scene::GetCurrentSceneEntity,
        "StartSceneScriptOnEntity", &Scene::StartSceneScriptOnEntity,
        "SendCustomMessage", &Scene::SendCustomMessage,
        "IsRunning", &Scene::IsRunning,
        "Stop", &Scene::Stop
    );
    lua.new_usertype<InstigatorData>("InstigatorData",
        "GetEntity", &InstigatorData::GetEntity,
        "IsSet", &InstigatorData::IsSet,
        "GetPlayer", &InstigatorData::GetPlayer,
        "GetFaction", &InstigatorData::GetFaction
    );
    lua.new_usertype<InventoryController>("InventoryController",
        "IsUsingHeavyWeapon", &InventoryController::IsUsingHeavyWeapon,
        "HasAmmoAvailable", &InventoryController::HasAmmoAvailable,
        "ForceMeleeWeapon", &InventoryController::ForceMeleeWeapon
    );
    lua.new_usertype<DSHeartmanRoomGraphArgs>("DSHeartmanRoomGraphArgs",
        "GetHeartmanRoomGraphArgs", &DSHeartmanRoomGraphArgs::GetHeartmanRoomGraphArgs
    );
    lua.new_usertype<DSMissionBaggageResource>("DSMissionBaggageResource",
        "GetDSGameBaggageListItem", &DSMissionBaggageResource::GetDSGameBaggageListItem
    );
    lua.new_usertype<GameMenu>("GameMenu",
        "OpenMenuPage", &GameMenu::OpenMenuPage
    );
    lua.new_usertype<VegetationCoverComponent>("VegetationCoverComponent",
        "GetBoxAtmosphereFactor", &VegetationCoverComponent::GetBoxAtmosphereFactor,
        "IsInVegetation", &VegetationCoverComponent::IsInVegetation
    );
    lua.new_usertype<AIHintSymbolResource>("AIHintSymbolResource",
        "GetHintSymbol", &AIHintSymbolResource::GetHintSymbol
    );
    lua.new_usertype<GliderMover>("GliderMover",
        "AddDisplacement", &GliderMover::AddDisplacement
    );
    lua.new_usertype<BodyVariantRuntimeComponent>("BodyVariantRuntimeComponent",
        "SetBodyVariant", &BodyVariantRuntimeComponent::SetBodyVariant,
        "IsActiveBodyVariant", &BodyVariantRuntimeComponent::IsActiveBodyVariant
    );
    lua.new_usertype<StunnedComponent>("StunnedComponent",
        "IsActive", &StunnedComponent::IsActive
    );
    lua.new_usertype<HealOverTimeComponent>("HealOverTimeComponent",
        "HealOverTime", &HealOverTimeComponent::HealOverTime
    );
    lua.new_usertype<DSSimpleAnimationComponent>("DSSimpleAnimationComponent",
        "ResetMotion", &DSSimpleAnimationComponent::ResetMotion,
        "SetMotion", &DSSimpleAnimationComponent::SetMotion,
        "IsDoneOrHold", &DSSimpleAnimationComponent::IsDoneOrHold
    );
    lua.new_usertype<DSBulletSystem>("DSBulletSystem",
        "CreateBullet", &DSBulletSystem::CreateBullet
    );
    lua.new_usertype<DSBombDropperSettings>("DSBombDropperSettings",
        "DropBomb", &DSBombDropperSettings::DropBomb,
        "DropBombFromPosition", &DSBombDropperSettings::DropBombFromPosition,
        "CalculateParametersFromPosition", &DSBombDropperSettings::CalculateParametersFromPosition
    );
    lua.new_usertype<DSNetOnlineObjectCommand>("DSNetOnlineObjectCommand",
        "RequestCheckOnlineState", &DSNetOnlineObjectCommand::RequestCheckOnlineState,
        "QueuePreSearch", &DSNetOnlineObjectCommand::QueuePreSearch,
        "StartLastStranding", &DSNetOnlineObjectCommand::StartLastStranding,
        "EndLastStranding", &DSNetOnlineObjectCommand::EndLastStranding,
        "IsServiceEnd", &DSNetOnlineObjectCommand::IsServiceEnd,
        "IsLogin", &DSNetOnlineObjectCommand::IsLogin,
        "DeleteObjectsFollowingSyncFlags", &DSNetOnlineObjectCommand::DeleteObjectsFollowingSyncFlags
    );
    lua.new_usertype<AI>("AI",
        "gHtnFactMatchesQuery", &AI::gHtnFactMatchesQuery
    );
    lua.new_usertype<PropertyComponentResource>("PropertyComponentResource",
        "GetContainerResource", &PropertyComponentResource::GetContainerResource
    );
    lua.new_usertype<WorldPosition>("WorldPosition",
        "CalculateStrafeAngleAndDistance", &WorldPosition::CalculateStrafeAngleAndDistance
    );
    lua.new_usertype<ContextualSpeechComponent>("ContextualSpeechComponent",
        "SayContextualSpeech", &ContextualSpeechComponent::SayContextualSpeech,
        "HasContextualSpeechToSay", &ContextualSpeechComponent::HasContextualSpeechToSay
    );
    lua.new_usertype<PickUpComponent>("PickUpComponent",
        "AddAmount", &PickUpComponent::AddAmount
    );
    lua.new_usertype<LastingHealComponent>("LastingHealComponent",
        "StartLastingHeal", &LastingHealComponent::StartLastingHeal,
        "IsLastingHealActive", &LastingHealComponent::IsLastingHealActive
    );
    lua.new_usertype<DSRaceNodeGraphBindings>("DSRaceNodeGraphBindings",
        "StartRace", &DSRaceNodeGraphBindings::StartRace,
        "GetRaceLapTime", &DSRaceNodeGraphBindings::GetRaceLapTime,
        "ShowRaceHUD", &DSRaceNodeGraphBindings::ShowRaceHUD,
        "IsRaceMission", &DSRaceNodeGraphBindings::IsRaceMission,
        "SetStartTransform", &DSRaceNodeGraphBindings::SetStartTransform
    );
    lua.new_usertype<DSMissionEvaluationDataTablesByDeliveryPoint>("DSMissionEvaluationDataTablesByDeliveryPoint",
        "FindEvaluationDataTable", &DSMissionEvaluationDataTablesByDeliveryPoint::FindEvaluationDataTable
    );
    lua.new_usertype<PlayerNotificationComponent>("PlayerNotificationComponent",
        "IsNotificationActive", &PlayerNotificationComponent::IsNotificationActive,
        "ClearNotifications", &PlayerNotificationComponent::ClearNotifications,
        "ShowNotification", &PlayerNotificationComponent::ShowNotification
    );
    lua.new_usertype<ComboComponent>("ComboComponent",
        "IncreaseComboLevel", &ComboComponent::IncreaseComboLevel,
        "GetComboLevel", &ComboComponent::GetComboLevel,
        "GetComboTimer", &ComboComponent::GetComboTimer
    );
    lua.new_usertype<DSGroundMovementComponent>("DSGroundMovementComponent",
        "DebugMovePositionToHeading", &DSGroundMovementComponent::DebugMovePositionToHeading,
        "DebugGetMoveSyncEventTime", &DSGroundMovementComponent::DebugGetMoveSyncEventTime,
        "DebugSetControllerState", &DSGroundMovementComponent::DebugSetControllerState
    );
    lua.new_usertype<DSMissionOpenConditionList>("DSMissionOpenConditionList",
        "GetOpenConditionList", &DSMissionOpenConditionList::GetOpenConditionList
    );
    lua.new_usertype<PropertyComponent>("PropertyComponent",
        "GetContainer", &PropertyComponent::GetContainer
    );
    lua.new_usertype<BuddyManager>("BuddyManager",
        "GetBuddy", &BuddyManager::GetBuddy,
        "RegisterSceneForMessages", &BuddyManager::RegisterSceneForMessages,
        "RequestSpawnBuddy", &BuddyManager::RequestSpawnBuddy,
        "ClearBuddy", &BuddyManager::ClearBuddy
    );
    lua.new_usertype<LootComponent>("LootComponent",
        "HasBeenLooted", &LootComponent::HasBeenLooted,
        "DisableLooting", &LootComponent::DisableLooting,
        "EnableLooting", &LootComponent::EnableLooting
    );
    lua.new_usertype<DSMissionDiscreteCommand>("DSMissionDiscreteCommand",
        "GetNuclearMissionVariables", &DSMissionDiscreteCommand::GetNuclearMissionVariables
    );
    lua.new_usertype<RangedWeaponMode>("RangedWeaponMode",
        "DisableEjectEffectsLocation", &RangedWeaponMode::DisableEjectEffectsLocation,
        "DisableEjectLocation", &RangedWeaponMode::DisableEjectLocation
    );
    lua.new_usertype<AIDefendArea>("AIDefendArea",
        "GetParent", &AIDefendArea::GetParent
    );
    lua.new_usertype<LightbakeOnly>("LightbakeOnly",
        "GetLightbakeOnlyFlag", &LightbakeOnly::GetLightbakeOnlyFlag
    );
    lua.new_usertype<MultiSpawnpoint>("MultiSpawnpoint",
        "MultiSpawn", &MultiSpawnpoint::MultiSpawn,
        "GetEntities", &MultiSpawnpoint::GetEntities,
        "Despawn", &MultiSpawnpoint::Despawn,
        "Spawn", &MultiSpawnpoint::Spawn
    );
    lua.new_usertype<DSNetOnlineObjectConfig>("DSNetOnlineObjectConfig",
        "SetSphereRange", &DSNetOnlineObjectConfig::SetSphereRange
    );
    lua.new_usertype<SmartObjectComponent>("SmartObjectComponent",
        "SetEnabled", &SmartObjectComponent::SetEnabled,
        "CanSatisfyMainDesire", &SmartObjectComponent::CanSatisfyMainDesire,
        "IsEnabled", &SmartObjectComponent::IsEnabled
    );
    lua.new_usertype<ModificationItemComponent>("ModificationItemComponent",
        "GetCategory", &ModificationItemComponent::GetCategory,
        "GetModificationCount", &ModificationItemComponent::GetModificationCount
    );
    lua.new_usertype<ArtPartsVariation>("ArtPartsVariation",
        "ApplyArtPartsVariation", &ArtPartsVariation::ApplyArtPartsVariation
    );
    lua.new_usertype<InventoryCollection>("InventoryCollection",
        "GiveTo", &InventoryCollection::GiveTo
    );
    lua.new_usertype<DSMissionLargeSceneCommand>("DSMissionLargeSceneCommand",
        "ActivateFreeMissionScene", &DSMissionLargeSceneCommand::ActivateFreeMissionScene,
        "CheckAllMissionSceneIsStable", &DSMissionLargeSceneCommand::CheckAllMissionSceneIsStable,
        "IsRunningMissionLargeScene", &DSMissionLargeSceneCommand::IsRunningMissionLargeScene,
        "ActivateMissionLargeScene", &DSMissionLargeSceneCommand::ActivateMissionLargeScene
    );
    lua.new_usertype<PBDGraph>("PBDGraph",
        "Update", &PBDGraph::Update
    );
    lua.new_usertype<ContextualEmotionComponent>("ContextualEmotionComponent",
        "IsPerformingContextualEmotion", &ContextualEmotionComponent::IsPerformingContextualEmotion
    );
    lua.new_usertype<DynamicPrefabCommand>("DynamicPrefabCommand",
        "DisableDynamicPrefab", &DynamicPrefabCommand::DisableDynamicPrefab
    );
    lua.new_usertype<MeleeWeaponComponent>("MeleeWeaponComponent",
        "IsInMelee", &MeleeWeaponComponent::IsInMelee
    );
    lua.new_usertype<DSDeliveryBotMenuInfo>("DSDeliveryBotMenuInfo",
        "CheckDeliveryBotMenuInfoState", &DSDeliveryBotMenuInfo::CheckDeliveryBotMenuInfoState
    );
    lua.new_usertype<InventoryCapacityComponent>("InventoryCapacityComponent",
        "GetFreeSlotsLeft", &InventoryCapacityComponent::GetFreeSlotsLeft
    );
    lua.new_usertype<AIMover>("AIMover",
        "NavMeshRayCast", &AIMover::NavMeshRayCast
    );
    lua.new_usertype<UDSGroup>("UDSGroup",
        "PostEvent", &UDSGroup::PostEvent
    );
    lua.new_usertype<AnnotationPrimitiveInstance>("AnnotationPrimitiveInstance",
        "HasTag", &AnnotationPrimitiveInstance::HasTag
    );
    lua.new_usertype<CachedHelperLocationsComponent>("CachedHelperLocationsComponent",
        "GetHelperLocationInEntitySpace", &CachedHelperLocationsComponent::GetHelperLocationInEntitySpace,
        "GetHelperLocationInWorldSpace", &CachedHelperLocationsComponent::GetHelperLocationInWorldSpace
    );
    lua.new_usertype<DSPrototypeNoiseAreaResource>("DSPrototypeNoiseAreaResource",
        "MakeNoise", &DSPrototypeNoiseAreaResource::MakeNoise
    );
    lua.new_usertype<EntitlementResource>("EntitlementResource",
        "IsEntitlementAvailable", &EntitlementResource::IsEntitlementAvailable
    );
    lua.new_usertype<DSMissionFactsResource>("DSMissionFactsResource",
        "GetFacts", &DSMissionFactsResource::GetFacts
    );
    lua.new_usertype<PlayerLoadoutManagerResource>("PlayerLoadoutManagerResource",
        "GiveLoadoutToPlayer", &PlayerLoadoutManagerResource::GiveLoadoutToPlayer
    );
    lua.new_usertype<ForceFieldManager>("ForceFieldManager",
        "GetForce", &ForceFieldManager::GetForce
    );
    lua.new_usertype<DSDebugNodeGraphGroup>("DSDebugNodeGraphGroup",
        "DebugIsPressed", &DSDebugNodeGraphGroup::DebugIsPressed
    );
    lua.new_usertype<FactMusicPresetCollection>("FactMusicPresetCollection",
        "GetPresets", &FactMusicPresetCollection::GetPresets
    );
    lua.new_usertype<AIAgent>("AIAgent",
        "FindDaemonByRTTI", &AIAgent::FindDaemonByRTTI
    );
    lua.new_usertype<DSMissionRankingCommand>("DSMissionRankingCommand",
        "GetCurrentRankingSeasonId", &DSMissionRankingCommand::GetCurrentRankingSeasonId,
        "IsNightmareRankingMode", &DSMissionRankingCommand::IsNightmareRankingMode
    );
    lua.new_usertype<DSStringHashResource>("DSStringHashResource",
        "GetStringHash", &DSStringHashResource::GetStringHash
    );
    lua.new_usertype<KjpSoundGraphNodeGroup>("KjpSoundGraphNodeGroup",
        "GetSoundTimeScaleExport", &KjpSoundGraphNodeGroup::GetSoundTimeScaleExport
    );
    lua.new_usertype<SequenceNetworkComponent>("SequenceNetworkComponent",
        "GetSequenceNetworkInstance", &SequenceNetworkComponent::GetSequenceNetworkInstance
    );
    lua.new_usertype<HUDLogicGroupResource>("HUDLogicGroupResource",
        "HighlightHUDGroup", &HUDLogicGroupResource::HighlightHUDGroup
    );
}
